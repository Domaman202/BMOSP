// Название шрифта          6x8 Slim
// Автор шрифта             Riva
// Дата и время генерации   06.06.2023 19:38:19
// Сгенерировано            matrixFont v1.1.0.52
// Кодовая страница         1251 (ANSI - кириллица)
// https://gitlab.com/riva-lab/matrixFont

#ifndef FONT_6X8_SLIM_H
#define FONT_6X8_SLIM_H

#ifndef FONT_TYPE_MONOSPACED
#define FONT_TYPE_MONOSPACED 0
#endif

#ifndef FONT_TYPE_PROPORTIONAL
#define FONT_TYPE_PROPORTIONAL 1
#endif

#define FONT_6X8_SLIM_LENGTH 224
#define FONT_6X8_SLIM_START_CHAR 32
#define FONT_6X8_SLIM_CHAR_WIDTH 6
#define FONT_6X8_SLIM_CHAR_HEIGHT 8
#define FONT_6X8_SLIM_FONT_TYPE (FONT_TYPE_MONOSPACED)
#define FONT_6X8_SLIM_ARRAY_LENGTH                                             \
	(FONT_6X8_SLIM_LENGTH * FONT_6X8_SLIM_CHAR_HEIGHT)

static const unsigned char font_6x8_slim[FONT_6X8_SLIM_ARRAY_LENGTH] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 32  < >
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, // Символ 33  <!>
	0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 34  <">
	0x0A, 0x0A, 0x1F, 0x0A, 0x1F, 0x0A, 0x0A, 0x00, // Символ 35  <#>
	0x04, 0x1E, 0x05, 0x0E, 0x14, 0x0F, 0x04, 0x00, // Символ 36  <$>
	0x00, 0x27, 0x15, 0x0B, 0x34, 0x2A, 0x39, 0x00, // Символ 37  <%>
	0x06, 0x09, 0x05, 0x02, 0x15, 0x19, 0x0E, 0x00, // Символ 38  <&>
	0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 39  <'>
	0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, // Символ 40  <(>
	0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, // Символ 41  <)>
	0x00, 0x0A, 0x04, 0x1F, 0x04, 0x0A, 0x00, 0x00, // Символ 42  <*>
	0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00, 0x00, // Символ 43  <+>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x01, // Символ 44  <,>
	0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, // Символ 45  <->
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, // Символ 46  <.>
	0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, // Символ 47  </>

	// Digits / Цифры
	0x06, 0x09, 0x0D, 0x0B, 0x09, 0x09, 0x06, 0x00, // Символ 48  <0>
	0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x07, 0x00, // Символ 49  <1>
	0x06, 0x09, 0x08, 0x06, 0x01, 0x01, 0x0F, 0x00, // Символ 50  <2>
	0x0F, 0x08, 0x06, 0x08, 0x08, 0x09, 0x06, 0x00, // Символ 51  <3>
	0x08, 0x0C, 0x0A, 0x09, 0x09, 0x1F, 0x08, 0x00, // Символ 52  <4>
	0x0F, 0x01, 0x07, 0x08, 0x08, 0x09, 0x06, 0x00, // Символ 53  <5>
	0x06, 0x09, 0x01, 0x07, 0x09, 0x09, 0x06, 0x00, // Символ 54  <6>
	0x0F, 0x08, 0x08, 0x04, 0x02, 0x01, 0x01, 0x00, // Символ 55  <7>
	0x06, 0x09, 0x09, 0x06, 0x09, 0x09, 0x06, 0x00, // Символ 56  <8>
	0x06, 0x09, 0x09, 0x0E, 0x08, 0x09, 0x06, 0x00, // Символ 57  <9>

	0x00, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, // Символ 58  <:>
	0x00, 0x00, 0x03, 0x03, 0x00, 0x03, 0x02, 0x01, // Символ 59  <;>
	0x00, 0x04, 0x02, 0x01, 0x02, 0x04, 0x00, 0x00, // Символ 60  <<>
	0x00, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x00, 0x00, // Символ 61  <=>
	0x00, 0x01, 0x02, 0x04, 0x02, 0x01, 0x00, 0x00, // Символ 62  <>>
	0x0E, 0x11, 0x10, 0x08, 0x04, 0x00, 0x04, 0x00, // Символ 63  <?>
	0x0E, 0x11, 0x1D, 0x15, 0x0D, 0x01, 0x0E, 0x00, // Символ 64  <@>

	// Roman Capitals / Латиница, прописные
	0x06, 0x09, 0x09, 0x0F, 0x09, 0x09, 0x09, 0x00, // Символ 65  <A>
	0x07, 0x09, 0x09, 0x07, 0x09, 0x09, 0x07, 0x00, // Символ 66  <B>
	0x06, 0x09, 0x01, 0x01, 0x01, 0x09, 0x06, 0x00, // Символ 67  <C>
	0x07, 0x09, 0x09, 0x09, 0x09, 0x09, 0x07, 0x00, // Символ 68  <D>
	0x0F, 0x01, 0x01, 0x07, 0x01, 0x01, 0x0F, 0x00, // Символ 69  <E>
	0x0F, 0x01, 0x01, 0x07, 0x01, 0x01, 0x01, 0x00, // Символ 70  <F>
	0x06, 0x09, 0x01, 0x0D, 0x09, 0x09, 0x06, 0x00, // Символ 71  <G>
	0x09, 0x09, 0x09, 0x0F, 0x09, 0x09, 0x09, 0x00, // Символ 72  <H>
	0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, 0x00, // Символ 73  <I>
	0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, // Символ 74  <J>
	0x11, 0x09, 0x05, 0x03, 0x05, 0x09, 0x11, 0x00, // Символ 75  <K>
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x00, // Символ 76  <L>
	0x11, 0x1B, 0x15, 0x11, 0x11, 0x11, 0x11, 0x00, // Символ 77  <M>
	0x11, 0x13, 0x15, 0x19, 0x11, 0x11, 0x11, 0x00, // Символ 78  <N>
	0x06, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x00, // Символ 79  <O>
	0x07, 0x09, 0x09, 0x07, 0x01, 0x01, 0x01, 0x00, // Символ 80  <P>
	0x0E, 0x11, 0x11, 0x11, 0x15, 0x09, 0x16, 0x00, // Символ 81  <Q>
	0x07, 0x09, 0x09, 0x07, 0x09, 0x09, 0x09, 0x00, // Символ 82  <R>
	0x0E, 0x01, 0x01, 0x06, 0x08, 0x08, 0x07, 0x00, // Символ 83  <S>
	0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, // Символ 84  <T>
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x00, // Символ 85  <U>
	0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04, 0x00, // Символ 86  <V>
	0x11, 0x11, 0x11, 0x15, 0x15, 0x0A, 0x0A, 0x00, // Символ 87  <W>
	0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11, 0x00, // Символ 88  <X>
	0x11, 0x11, 0x0A, 0x04, 0x04, 0x04, 0x04, 0x00, // Символ 89  <Y>
	0x1F, 0x10, 0x08, 0x04, 0x02, 0x01, 0x1F, 0x00, // Символ 90  <Z>

	0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, // Символ 91  <[>
	0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, // Символ 92  <\>
	0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, // Символ 93  <]>
	0x04, 0x0A, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 94  <^>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, // Символ 95  <_>
	0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 96  <`>

	// Roman Smalls / Латиница, строчные
	0x00, 0x00, 0x06, 0x08, 0x0E, 0x09, 0x0E, 0x00, // Символ 97  <a>
	0x01, 0x01, 0x07, 0x09, 0x09, 0x09, 0x07, 0x00, // Символ 98  <b>
	0x00, 0x00, 0x06, 0x01, 0x01, 0x01, 0x06, 0x00, // Символ 99  <c>
	0x08, 0x08, 0x0E, 0x09, 0x09, 0x09, 0x0E, 0x00, // Символ 100 <d>
	0x00, 0x00, 0x06, 0x09, 0x0F, 0x01, 0x0E, 0x00, // Символ 101 <e>
	0x0C, 0x02, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x00, // Символ 102 <f>
	0x00, 0x00, 0x0E, 0x09, 0x09, 0x0E, 0x08, 0x06, // Символ 103 <g>
	0x01, 0x01, 0x07, 0x09, 0x09, 0x09, 0x09, 0x00, // Символ 104 <h>
	0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // Символ 105 <i>
	0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, // Символ 106 <j>
	0x01, 0x01, 0x09, 0x05, 0x03, 0x05, 0x09, 0x00, // Символ 107 <k>
	0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // Символ 108 <l>
	0x00, 0x00, 0x0F, 0x15, 0x15, 0x15, 0x15, 0x00, // Символ 109 <m>
	0x00, 0x00, 0x07, 0x09, 0x09, 0x09, 0x09, 0x00, // Символ 110 <n>
	0x00, 0x00, 0x06, 0x09, 0x09, 0x09, 0x06, 0x00, // Символ 111 <o>
	0x00, 0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x01, // Символ 112 <p>
	0x00, 0x00, 0x0E, 0x09, 0x09, 0x09, 0x0E, 0x08, // Символ 113 <q>
	0x00, 0x00, 0x05, 0x03, 0x01, 0x01, 0x01, 0x00, // Символ 114 <r>
	0x00, 0x00, 0x0E, 0x01, 0x06, 0x08, 0x07, 0x00, // Символ 115 <s>
	0x02, 0x02, 0x0F, 0x02, 0x02, 0x02, 0x0C, 0x00, // Символ 116 <t>
	0x00, 0x00, 0x09, 0x09, 0x09, 0x09, 0x0E, 0x00, // Символ 117 <u>
	0x00, 0x00, 0x09, 0x09, 0x09, 0x05, 0x02, 0x00, // Символ 118 <v>
	0x00, 0x00, 0x11, 0x11, 0x15, 0x0A, 0x0A, 0x00, // Символ 119 <w>
	0x00, 0x00, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x00, // Символ 120 <x>
	0x00, 0x00, 0x09, 0x09, 0x09, 0x0E, 0x08, 0x06, // Символ 121 <y>
	0x00, 0x00, 0x0F, 0x04, 0x02, 0x01, 0x0F, 0x00, // Символ 122 <z>

	0x04, 0x02, 0x02, 0x01, 0x02, 0x02, 0x04, 0x00, // Символ 123 <{>
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // Символ 124 <|>
	0x01, 0x02, 0x02, 0x04, 0x02, 0x02, 0x01, 0x00, // Символ 125 <}>
	0x00, 0x00, 0x02, 0x15, 0x08, 0x00, 0x00, 0x00, // Символ 126 <~>
	0x0F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0F, 0x00, // Символ 127 <DELETE>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 128 <Ђ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 129 <Ѓ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x01, // Символ 130 <‚>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 131 <ѓ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x12, 0x09, // Символ 132 <„>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, // Символ 133 <…>
	0x02, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // Символ 134 <†>
	0x02, 0x07, 0x02, 0x02, 0x02, 0x02, 0x07, 0x02, // Символ 135 <‡>
	0x0C, 0x12, 0x07, 0x02, 0x07, 0x12, 0x0C, 0x00, // Символ 136 <€>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 137 <‰>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 138 <Љ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 139 <‹>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 140 <Њ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 141 <Ќ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 142 <Ћ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 143 <Џ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 144 <ђ>
	0x02, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 145 <‘>
	0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 146 <’>
	0x12, 0x09, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 147 <“>
	0x1B, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 148 <”>
	0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, // Символ 149 <•>
	0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, // Символ 150 <–>
	0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, // Символ 151 <—>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 152 <>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 153 <™>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 154 <љ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 155 <›>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 156 <њ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 157 <ќ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 158 <ћ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 159 <џ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 160 < >
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 161 <Ў>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 162 <ў>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 163 <Ј>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 164 <¤>
	0x08, 0x0F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // Символ 165 <Ґ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 166 <¦>
	0x0E, 0x01, 0x06, 0x09, 0x09, 0x06, 0x08, 0x07, // Символ 167 <§>
	0x09, 0x00, 0x0F, 0x01, 0x07, 0x01, 0x0F, 0x00, // Символ 168 <Ё>
	0x1E, 0x21, 0x2D, 0x25, 0x2D, 0x21, 0x1E, 0x00, // Символ 169 <©>
	0x06, 0x09, 0x01, 0x07, 0x01, 0x09, 0x06, 0x00, // Символ 170 <Є>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 171 <«>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 172 <¬>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 173 <­>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 174 <®>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 175 <Ї>
	0x07, 0x05, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 176 <°>
	0x04, 0x04, 0x1F, 0x04, 0x04, 0x00, 0x1F, 0x00, // Символ 177 <±>
	0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, 0x00, // Символ 178 <І>
	0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // Символ 179 <і>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 180 <ґ>
	0x00, 0x00, 0x09, 0x09, 0x09, 0x09, 0x17, 0x01, // Символ 181 <µ>
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Символ 182 <¶>
	0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, // Символ 183 <·>
	0x09, 0x00, 0x06, 0x09, 0x0F, 0x01, 0x0E, 0x00, // Символ 184 <ё>
	0x39, 0x2B, 0x3D, 0x09, 0x09, 0x09, 0x09, 0x00, // Символ 185 <№>
	0x00, 0x00, 0x0E, 0x01, 0x07, 0x01, 0x0E, 0x00, // Символ 186 <є>
	0x00, 0x00, 0x05, 0x0A, 0x14, 0x0A, 0x05, 0x00, // Символ 187 <»>
	0x02, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x01, // Символ 188 <ј>
	0x06, 0x09, 0x01, 0x06, 0x08, 0x09, 0x06, 0x00, // Символ 189 <Ѕ>
	0x00, 0x00, 0x0E, 0x01, 0x06, 0x08, 0x07, 0x00, // Символ 190 <ѕ>
	0x05, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // Символ 191 <ї>

	// Cyrillic Capitals / Кириллица, прописные
	0x06, 0x09, 0x09, 0x0F, 0x09, 0x09, 0x09, 0x00, // Символ 192 <А>
	0x0F, 0x01, 0x01, 0x07, 0x09, 0x09, 0x07, 0x00, // Символ 193 <Б>
	0x07, 0x09, 0x09, 0x07, 0x09, 0x09, 0x07, 0x00, // Символ 194 <В>
	0x0F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // Символ 195 <Г>
	0x0C, 0x0A, 0x0A, 0x0A, 0x0A, 0x1F, 0x11, 0x00, // Символ 196 <Д>
	0x0F, 0x01, 0x01, 0x07, 0x01, 0x01, 0x0F, 0x00, // Символ 197 <Е>
	0x15, 0x15, 0x15, 0x0E, 0x15, 0x15, 0x15, 0x00, // Символ 198 <Ж>
	0x06, 0x09, 0x08, 0x06, 0x08, 0x09, 0x06, 0x00, // Символ 199 <З>
	0x11, 0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x00, // Символ 200 <И>
	0x15, 0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x00, // Символ 201 <Й>
	0x11, 0x09, 0x05, 0x03, 0x05, 0x09, 0x11, 0x00, // Символ 202 <К>
	0x1C, 0x12, 0x12, 0x12, 0x12, 0x12, 0x11, 0x00, // Символ 203 <Л>
	0x11, 0x1B, 0x15, 0x11, 0x11, 0x11, 0x11, 0x00, // Символ 204 <М>
	0x09, 0x09, 0x09, 0x0F, 0x09, 0x09, 0x09, 0x00, // Символ 205 <Н>
	0x06, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x00, // Символ 206 <О>
	0x0F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x00, // Символ 207 <П>
	0x07, 0x09, 0x09, 0x07, 0x01, 0x01, 0x01, 0x00, // Символ 208 <Р>
	0x06, 0x09, 0x01, 0x01, 0x01, 0x09, 0x06, 0x00, // Символ 209 <С>
	0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, // Символ 210 <Т>
	0x09, 0x09, 0x09, 0x0E, 0x08, 0x08, 0x06, 0x00, // Символ 211 <У>
	0x04, 0x0E, 0x15, 0x15, 0x15, 0x0E, 0x04, 0x00, // Символ 212 <Ф>
	0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11, 0x00, // Символ 213 <Х>
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x1F, 0x10, // Символ 214 <Ц>
	0x09, 0x09, 0x09, 0x0E, 0x08, 0x08, 0x08, 0x00, // Символ 215 <Ч>
	0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x1F, 0x00, // Символ 216 <Ш>
	0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x3F, 0x20, // Символ 217 <Щ>
	0x03, 0x02, 0x0E, 0x12, 0x12, 0x12, 0x0E, 0x00, // Символ 218 <Ъ>
	0x21, 0x21, 0x27, 0x29, 0x29, 0x29, 0x27, 0x00, // Символ 219 <Ы>
	0x01, 0x01, 0x07, 0x09, 0x09, 0x09, 0x07, 0x00, // Символ 220 <Ь>
	0x06, 0x09, 0x08, 0x0E, 0x08, 0x09, 0x06, 0x00, // Символ 221 <Э>
	0x19, 0x25, 0x25, 0x27, 0x25, 0x25, 0x19, 0x00, // Символ 222 <Ю>
	0x0E, 0x09, 0x09, 0x0E, 0x09, 0x09, 0x09, 0x00, // Символ 223 <Я>

	// Cyrillic Smalls / Кириллица, строчные
	0x00, 0x00, 0x06, 0x08, 0x0E, 0x09, 0x0E, 0x00, // Символ 224 <а>
	0x08, 0x06, 0x01, 0x07, 0x09, 0x09, 0x06, 0x00, // Символ 225 <б>
	0x00, 0x00, 0x07, 0x09, 0x07, 0x09, 0x07, 0x00, // Символ 226 <в>
	0x00, 0x00, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, // Символ 227 <г>
	0x00, 0x00, 0x0C, 0x0A, 0x0A, 0x0A, 0x1F, 0x11, // Символ 228 <д>
	0x00, 0x00, 0x06, 0x09, 0x0F, 0x01, 0x0E, 0x00, // Символ 229 <е>
	0x00, 0x00, 0x15, 0x15, 0x0E, 0x15, 0x15, 0x00, // Символ 230 <ж>
	0x00, 0x00, 0x07, 0x08, 0x06, 0x08, 0x07, 0x00, // Символ 231 <з>
	0x00, 0x00, 0x09, 0x09, 0x0D, 0x0B, 0x09, 0x00, // Символ 232 <и>
	0x06, 0x00, 0x09, 0x09, 0x0D, 0x0B, 0x09, 0x00, // Символ 233 <й>
	0x00, 0x00, 0x09, 0x05, 0x03, 0x05, 0x09, 0x00, // Символ 234 <к>
	0x00, 0x00, 0x0C, 0x0A, 0x0A, 0x0A, 0x09, 0x00, // Символ 235 <л>
	0x00, 0x00, 0x11, 0x1B, 0x15, 0x11, 0x11, 0x00, // Символ 236 <м>
	0x00, 0x00, 0x09, 0x09, 0x0F, 0x09, 0x09, 0x00, // Символ 237 <н>
	0x00, 0x00, 0x06, 0x09, 0x09, 0x09, 0x06, 0x00, // Символ 238 <о>
	0x00, 0x00, 0x0F, 0x09, 0x09, 0x09, 0x09, 0x00, // Символ 239 <п>
	0x00, 0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x01, // Символ 240 <р>
	0x00, 0x00, 0x06, 0x01, 0x01, 0x01, 0x06, 0x00, // Символ 241 <с>
	0x00, 0x00, 0x1F, 0x04, 0x04, 0x04, 0x04, 0x00, // Символ 242 <т>
	0x00, 0x00, 0x09, 0x09, 0x09, 0x0E, 0x08, 0x06, // Символ 243 <у>
	0x00, 0x00, 0x0E, 0x15, 0x15, 0x15, 0x0E, 0x04, // Символ 244 <ф>
	0x00, 0x00, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x00, // Символ 245 <х>
	0x00, 0x00, 0x09, 0x09, 0x09, 0x09, 0x1F, 0x10, // Символ 246 <ц>
	0x00, 0x00, 0x09, 0x09, 0x0E, 0x08, 0x08, 0x00, // Символ 247 <ч>
	0x00, 0x00, 0x15, 0x15, 0x15, 0x15, 0x1F, 0x00, // Символ 248 <ш>
	0x00, 0x00, 0x15, 0x15, 0x15, 0x15, 0x3F, 0x20, // Символ 249 <щ>
	0x00, 0x00, 0x03, 0x0E, 0x12, 0x12, 0x0E, 0x00, // Символ 250 <ъ>
	0x00, 0x00, 0x11, 0x13, 0x15, 0x15, 0x13, 0x00, // Символ 251 <ы>
	0x00, 0x00, 0x01, 0x07, 0x09, 0x09, 0x07, 0x00, // Символ 252 <ь>
	0x00, 0x00, 0x07, 0x08, 0x0E, 0x08, 0x07, 0x00, // Символ 253 <э>
	0x00, 0x00, 0x09, 0x15, 0x17, 0x15, 0x09, 0x00, // Символ 254 <ю>
	0x00, 0x00, 0x0E, 0x09, 0x0E, 0x09, 0x09, 0x00  // Символ 255 <я>
};

#endif // FONT_6X8_SLIM_H