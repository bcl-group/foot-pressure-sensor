# foot-pressure-sensor
## 必要なもの
- Ubuntu のパソコン
    - git
    - Arduino
    - Ruby
- Arduino
- 圧力センサー x8
- 抵抗器 -Ω
- ブレッドボード
- ジャンパーピン

## リポジトリーのクローン
```sh
git clone git@github.com:bcl-group/foot-pressure-sensor.git
# or
git clone https://github.com/bcl-group/foot-pressure-sensor.git
```

## Arduino
Arduino のプログラムは `./arduino-sketch/main/` にある。
書き込みは root 権限でないとエラーが起こるため、
root 権限で開く。

## パソコン側でのデーターの取り込み
パソコン側での読み取りは Ruby で行っている。
シリアルポートの gem `serialport` をインストールする必要がある。

```sh
sudo su
# パスワードの入力
gem install serialport
```

パソコンでシリアルポートを扱うには、root 権限が必要なため、
root 権限で実行する必要がある。