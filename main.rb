#!/usr/bin/env ruby
require "serialport"

serial = SerialPort.new "/dev/ttyACM0", 9600
str = ""
i = 0

start = Time.now
SerialPort.open "/dev/ttyACM0", 9600 do |serial|
    serial.read_timeout = 10
    loop do
        begin
            str += serial.readline
            i += 1
        rescue EOFError
            retry
        end
        now = Time.now
        break if now - start > 1
    end
end

str.chop!
str << "\n"
str = str.split("\r\n")[0..-2] * "\n"

puts str
puts "回数: #{i-1}" 