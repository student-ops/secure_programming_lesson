## file path の解釈と web サーバでの使い方がメイン

apache のみのイメージを試したところ php がなく、php -apache を使用した。

docker run -d --name apachetest -p 4000:80 FROM php:7.4.8-apache
