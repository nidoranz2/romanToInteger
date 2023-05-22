## Roman Numeral to Integer Converter \\ローマ数字を数字化するプログラム

This is a simple C program that converts a Roman numeral to its equivalent integer value. It accepts a Roman numeral as a command-line argument and outputs the corresponding integer value.
このプログラムは、与えられたローマ数字を対応する整数に変換するシンプルなCプログラムです。コマンドライン引数としてローマ数字を指定し、対応する整数値を出力します。

### Prerequisites

Before running this program, ensure that you have a C compiler installed on your system.
このプログラムを実行する前に、システムにCコンパイラがインストールされていることを確認してください。

### Usage

1. Clone or download the repository to your local machine.
2. Open a terminal and navigate to the project directory.
3. Compile the program using the following command:

`gcc -o romantoint romantoint.c`


4. Run the program by providing a Roman numeral as a command-line argument:

`./romantoint [Roman Numeral]`

Replace `[Roman Numeral]` with the Roman numeral you want to convert.

1．リポジトリをクローンするか、ダウンロードしてローカルマシンに保存します。

2. ターミナルを開き、プロジェクトディレクトリに移動します。

3. 次のコマンドを使用してプログラムをコンパイルします。
`gcc -o romantoint romantoint.c`
4. ローマ数字をコマンドライン引数として指定してプログラムを実行します。
`./romantoint [ローマ数字]`
[ローマ数字] の部分を変換したいローマ数字に置き換えてください。

### Example

`./romantoint XVII`

Output:
17


### Limitations

- The program assumes that the provided Roman numeral is valid.
- It only supports Roman numerals up to the value of 3999.
