#!/usr/bin/env ruby
require "serialport"
require "csv"

str = ""

start = Time.now
SerialPort.open "/dev/ttyACM0", 115200 do |serial|
    serial.read_timeout = 10
    loop do
        begin
            str += serial.readline
        rescue EOFError
            retry
        end
        now = Time.now
        break if now - start > 1
    end
end

str.chop!
str << "\n"
l = str.split("\r\n")[1..-2].map{|line| line.split(",").map(&:to_i)}

CSV.open "output.csv", "w" do |f|
    l.each do |line|
        f.puts line
    end
end

puts "回数: #{l.size}" 