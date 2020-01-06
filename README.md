# ASCII code table
アスキーコード表を表示するやつ

## usage
何も指定しないと目に見える範囲のascii code tableを表示する。
```
$ ./ascii
              l   o   w   e   r   
      0 1 2 3 4 5 6 7 8 9 a b c d e f 
    +--------------------------------
u  2|   ! " # $ % & ' ( ) * + , - . / 
p  3| 0 1 2 3 4 5 6 7 8 9 : ; < = > ? 
p  4| @ A B C D E F G H I J K L M N O 
e  5| P Q R S T U V W X Y Z [ \ ] ^ _ 
r  6| ` a b c d e f g h i j k l m n o 
   7| p q r s t u v w x y z { | } ~  
```
引数をつけると、その引数文字列の最初の文字の、文字と文字コードを10進数と16進数で表示する。
```
$ ./ascii a
a 97 0x61
$ ./ascii " "
  32 0x20
```
