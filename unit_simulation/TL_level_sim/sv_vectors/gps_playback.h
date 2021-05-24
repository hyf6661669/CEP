//************************************************************************
// Copyright 2021 Massachusetts Institute of Technology
//
// This file is auto-generated for test: gps. Do not modify!!!
//
// Generated on: May 19 2021 14:35:16
//************************************************************************
`ifndef gps_playback_H
`define gps_playback_H

`ifndef PLAYBACK_CMD_H
`define PLAYBACK_CMD_H
// Write to : <physicalAdr> <writeData>
`define WRITE__CMD  1
// Read and compare: <physicalAdr> <Data2Compare>
`define RDnCMP_CMD  2
// Read and spin until match : <physicalAdr> <Data2Match> <mask> <timeout>
`define RDSPIN_CMD  3

`define WRITE__CMD_SIZE  3
`define RDnCMP_CMD_SIZE  3
`define RDSPIN_CMD_SIZE  5
`endif

// gps command sequences to playback
longint gps_playback[] = { 
	  `WRITE__CMD, 'h70090038, 'h0000000000000001 // 1
	, `WRITE__CMD, 'h70090038, 'h0000000000000001 // 2
	, `WRITE__CMD, 'h70090038, 'h0000000000000001 // 3
	, `WRITE__CMD, 'h70090038, 'h0000000000000001 // 4
	, `WRITE__CMD, 'h70090038, 'h0000000000000001 // 5
	, `WRITE__CMD, 'h70090038, 'h0000000000000000 // 6
	, `WRITE__CMD, 'h70090030, 'h0000000000000000 // 7
	, `WRITE__CMD, 'h70090040, 'haaaaaaaaaaaaaaaa // 8
	, `WRITE__CMD, 'h70090048, 'haaaaaaaaaaaaaaaa // 9
	, `WRITE__CMD, 'h70090050, 'haaaaaaaaaaaaaaaa // 10
	, `WRITE__CMD, 'h70090030, 'h0000000000000001 // 11
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 12
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 13
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 14
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001907 // 15
	, `RDnCMP_CMD, 'h70090010, 'h924110552bd74e7f // 16
	, `RDnCMP_CMD, 'h70090018, 'hc62d21cd7f83b3f9 // 17
	, `RDnCMP_CMD, 'h70090020, 'h0609e8f9dc6348b0 // 18
	, `RDnCMP_CMD, 'h70090028, 'he718fdc8b191a85d // 19
	, `WRITE__CMD, 'h70090040, 'haaaaaaaaaaaaaaaa // 20
	, `WRITE__CMD, 'h70090048, 'haaaaaaaaaaaaaaaa // 21
	, `WRITE__CMD, 'h70090050, 'haaaaaaaaaaaaaaaa // 22
	, `WRITE__CMD, 'h70090030, 'h0000000000000001 // 23
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 24
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 25
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 26
	, `RDnCMP_CMD, 'h70090008, 'h0000000000000527 // 27
	, `RDnCMP_CMD, 'h70090010, 'ha4cc77e4c4a5df08 // 28
	, `RDnCMP_CMD, 'h70090018, 'h1e90b013d5d49f81 // 29
	, `RDnCMP_CMD, 'h70090020, 'he0ac4307eefef3ea // 30
	, `RDnCMP_CMD, 'h70090028, 'h1b8bef47549c2231 // 31
	, `WRITE__CMD, 'h70090040, 'h5555555555555555 // 32
	, `WRITE__CMD, 'h70090048, 'h5555555555555555 // 33
	, `WRITE__CMD, 'h70090050, 'h5555555555555555 // 34
	, `WRITE__CMD, 'h70090030, 'h0000000000000002 // 35
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 36
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 37
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 38
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001c87 // 39
	, `RDnCMP_CMD, 'h70090010, 'h800d9d1eb5ef85ca // 40
	, `RDnCMP_CMD, 'h70090018, 'h7b25290c95bf1c92 // 41
	, `RDnCMP_CMD, 'h70090020, 'h1c5c70ef948d4185 // 42
	, `RDnCMP_CMD, 'h70090028, 'hbca1f30b29bf728b // 43
	, `WRITE__CMD, 'h70090040, 'h4e1181bb2af6ff26 // 44
	, `WRITE__CMD, 'h70090048, 'h69fbf3e25cc91c14 // 45
	, `WRITE__CMD, 'h70090050, 'h84902601ed13de17 // 46
	, `WRITE__CMD, 'h70090030, 'h0000000000000003 // 47
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 48
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 49
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 50
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001e47 // 51
	, `RDnCMP_CMD, 'h70090010, 'h892bdbbb7af3e010 // 52
	, `RDnCMP_CMD, 'h70090018, 'ha5a12d6c60a14b27 // 53
	, `RDnCMP_CMD, 'h70090020, 'h864830ce58e1d9fc // 54
	, `RDnCMP_CMD, 'h70090028, 'hc4b35ef4550776fd // 55
	, `WRITE__CMD, 'h70090040, 'h9eec2c17e5be0e11 // 56
	, `WRITE__CMD, 'h70090048, 'h8b4f9ffc2be699bc // 57
	, `WRITE__CMD, 'h70090050, 'h3b2b3100bde268d8 // 58
	, `WRITE__CMD, 'h70090030, 'h0000000000000004 // 59
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 60
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 61
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 62
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f27 // 63
	, `RDnCMP_CMD, 'h70090010, 'h8db8f8e99d7dd2fd // 64
	, `RDnCMP_CMD, 'h70090018, 'hcae32f5c1a2e60fd // 65
	, `RDnCMP_CMD, 'h70090020, 'h2c4b1e61b431ea12 // 66
	, `RDnCMP_CMD, 'h70090028, 'he00bd299952db878 // 67
	, `WRITE__CMD, 'h70090040, 'head13aec166535c8 // 68
	, `WRITE__CMD, 'h70090048, 'h99b5412da177432a // 69
	, `WRITE__CMD, 'h70090050, 'hb1b5bcc8f69009d8 // 70
	, `WRITE__CMD, 'h70090030, 'h0000000000000005 // 71
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 72
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 73
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 74
	, `RDnCMP_CMD, 'h70090008, 'h00000000000012d8 // 75
	, `RDnCMP_CMD, 'h70090010, 'h8ff16940eebacb8b // 76
	, `RDnCMP_CMD, 'h70090018, 'h7d422e442769f510 // 77
	, `RDnCMP_CMD, 'h70090020, 'hac8ce95c62a8aab8 // 78
	, `RDnCMP_CMD, 'h70090028, 'hd2a812aed12adb10 // 79
	, `WRITE__CMD, 'h70090040, 'h4ae4933b999d7504 // 80
	, `WRITE__CMD, 'h70090048, 'h88d3a1fe736fef34 // 81
	, `WRITE__CMD, 'h70090050, 'hb76bca08ab045f31 // 82
	, `WRITE__CMD, 'h70090030, 'h0000000000000006 // 83
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 84
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 85
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 86
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001968 // 87
	, `RDnCMP_CMD, 'h70090010, 'h8ed5a19457594730 // 88
	, `RDnCMP_CMD, 'h70090018, 'h2692aec839ca3fe6 // 89
	, `RDnCMP_CMD, 'h70090020, 'h58f6834241864714 // 90
	, `RDnCMP_CMD, 'h70090028, 'hcbffda8ef3cbda5d // 91
	, `WRITE__CMD, 'h70090040, 'hecb96f2f34d9242d // 92
	, `WRITE__CMD, 'h70090048, 'h0c2f4ae8465d2fdd // 93
	, `WRITE__CMD, 'h70090050, 'h50b726f72681711e // 94
	, `WRITE__CMD, 'h70090030, 'h0000000000000007 // 95
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 96
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 97
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 98
	, `RDnCMP_CMD, 'h70090008, 'h00000000000012cf // 99
	, `RDnCMP_CMD, 'h70090010, 'h8e47c5fe0ba8816d // 100
	, `RDnCMP_CMD, 'h70090018, 'h8b7aee8e369bda9d // 101
	, `RDnCMP_CMD, 'h70090020, 'ha8abfd7f63e64d55 // 102
	, `RDnCMP_CMD, 'h70090028, 'hbd7c40d1465454ca // 103
	, `WRITE__CMD, 'h70090040, 'h49dd5226bbd8fde3 // 104
	, `WRITE__CMD, 'h70090048, 'hb2a327e7546c8ddc // 105
	, `WRITE__CMD, 'h70090050, 'h3367bf2f53c8e6dc // 106
	, `WRITE__CMD, 'h70090030, 'h0000000000000008 // 107
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 108
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 109
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 110
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001963 // 111
	, `RDnCMP_CMD, 'h70090010, 'h8e0ef7cb25d06243 // 112
	, `RDnCMP_CMD, 'h70090018, 'h5d8ecead31332820 // 113
	, `RDnCMP_CMD, 'h70090020, 'h059a5695feef47a7 // 114
	, `RDnCMP_CMD, 'h70090028, 'h98060d5068bdab92 // 115
	, `WRITE__CMD, 'h70090040, 'ha44133376cd4081b // 116
	, `WRITE__CMD, 'h70090048, 'ha68820376ff6b8d0 // 117
	, `WRITE__CMD, 'h70090050, 'hdb4e7d0db35c1a30 // 118
	, `WRITE__CMD, 'h70090030, 'h0000000000000009 // 119
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 120
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 121
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 122
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001cb5 // 123
	, `RDnCMP_CMD, 'h70090010, 'h8e2a6ed1b2ec13d4 // 124
	, `RDnCMP_CMD, 'h70090018, 'h36f4debcb2e7517e // 125
	, `RDnCMP_CMD, 'h70090020, 'hb4f70803bd74121f // 126
	, `RDnCMP_CMD, 'h70090028, 'h2b910ef203c0ab7f // 127
	, `WRITE__CMD, 'h70090040, 'h2e06fcf57095831d // 128
	, `WRITE__CMD, 'h70090048, 'h8a4d71bf7cb16dc6 // 129
	, `WRITE__CMD, 'h70090050, 'hf447cf06d3d3d227 // 130
	, `WRITE__CMD, 'h70090030, 'h000000000000000a // 131
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 132
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 133
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 134
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001a25 // 135
	, `RDnCMP_CMD, 'h70090010, 'h8e38225cf9722b1f // 136
	, `RDnCMP_CMD, 'h70090018, 'h8349d6b4730d6dd1 // 137
	, `RDnCMP_CMD, 'h70090020, 'heaa7248e9df5b2de // 138
	, `RDnCMP_CMD, 'h70090028, 'h586d1da8b12f1f5b // 139
	, `WRITE__CMD, 'h70090040, 'hc0d5dcc0bd718609 // 140
	, `WRITE__CMD, 'h70090048, 'h1acbd22eff381916 // 141
	, `WRITE__CMD, 'h70090050, 'h7ea324ff9e42ba0e // 142
	, `WRITE__CMD, 'h70090030, 'h000000000000000b // 143
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 144
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 145
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 146
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001d16 // 147
	, `RDnCMP_CMD, 'h70090010, 'h8e31041a5cbd377a // 148
	, `RDnCMP_CMD, 'h70090018, 'h599752b013f87386 // 149
	, `RDnCMP_CMD, 'h70090020, 'h29d31aef814e7cf0 // 150
	, `RDnCMP_CMD, 'h70090028, 'h9a9157f99a7875ef // 151
	, `WRITE__CMD, 'h70090040, 'h0256e7fa1be4942b // 152
	, `WRITE__CMD, 'h70090048, 'hc8e7e1d0ce7b9935 // 153
	, `WRITE__CMD, 'h70090050, 'h8727dac8ab4f1508 // 154
	, `WRITE__CMD, 'h70090030, 'h000000000000000c // 155
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 156
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 157
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 158
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f43 // 159
	, `RDnCMP_CMD, 'h70090010, 'h8e3597390e5ab948 // 160
	, `RDnCMP_CMD, 'h70090018, 'hb4f810b22382fcad // 161
	, `RDnCMP_CMD, 'h70090020, 'hc8af4ef9da115806 // 162
	, `RDnCMP_CMD, 'h70090028, 'hb17e0bfb6e8df2b6 // 163
	, `WRITE__CMD, 'h70090040, 'hb4a3a115e929b5ea // 164
	, `WRITE__CMD, 'h70090048, 'h49ce2bc78feb270e // 165
	, `WRITE__CMD, 'h70090050, 'h3b167cda31f0d5cc // 166
	, `WRITE__CMD, 'h70090030, 'h000000000000000d // 167
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 168
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 169
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 170
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001fa5 // 171
	, `RDnCMP_CMD, 'h70090010, 'h8e37dea8a7297e51 // 172
	, `RDnCMP_CMD, 'h70090018, 'hc24fb1b33bbfbb38 // 173
	, `RDnCMP_CMD, 'h70090020, 'h889a104fc177f297 // 174
	, `RDnCMP_CMD, 'h70090028, 'h0a085c67e2b3e1e1 // 175
	, `WRITE__CMD, 'h70090040, 'h5ebc35c3744f8b22 // 176
	, `WRITE__CMD, 'h70090048, 'h2f2d5dbba4c46c37 // 177
	, `WRITE__CMD, 'h70090050, 'hc1015df79512701b // 178
	, `WRITE__CMD, 'h70090030, 'h000000000000000e // 179
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 180
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 181
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 182
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001fd6 // 183
	, `RDnCMP_CMD, 'h70090010, 'h8e36fa6073909ddd // 184
	, `RDnCMP_CMD, 'h70090018, 'h79146133b7a118f2 // 185
	, `RDnCMP_CMD, 'h70090020, 'h783f69c0a7b1ecb5 // 186
	, `RDnCMP_CMD, 'h70090028, 'ha4904882d2ffef64 // 187
	, `WRITE__CMD, 'h70090040, 'h0c8d383cea5a5ecc // 188
	, `WRITE__CMD, 'h70090048, 'h26bdaa142b177a0f // 189
	, `WRITE__CMD, 'h70090050, 'h510469ef4e3507fc // 190
	, `WRITE__CMD, 'h70090030, 'h000000000000000f // 191
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 192
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 193
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 194
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001fef // 195
	, `RDnCMP_CMD, 'h70090010, 'h8e36680419cc6c1b // 196
	, `RDnCMP_CMD, 'h70090018, 'h24b98973f1ae4917 // 197
	, `RDnCMP_CMD, 'h70090020, 'heacc1f2fd341b270 // 198
	, `RDnCMP_CMD, 'h70090028, 'h87dac151c68b45a4 // 199
	, `WRITE__CMD, 'h70090040, 'h5e5718bd72dbf321 // 200
	, `WRITE__CMD, 'h70090048, 'h31e7912d00cc7abb // 201
	, `WRITE__CMD, 'h70090050, 'h8ff799080cc20001 // 202
	, `WRITE__CMD, 'h70090030, 'h0000000000000010 // 203
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 204
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 205
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 206
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001ff3 // 207
	, `RDnCMP_CMD, 'h70090010, 'h8e3621362ce214f8 // 208
	, `RDnCMP_CMD, 'h70090018, 'h0a6f7d53d2a9e1e5 // 209
	, `RDnCMP_CMD, 'h70090020, 'h4a9c374be17902f5 // 210
	, `RDnCMP_CMD, 'h70090028, 'hc2147bfcaa83ada2 // 211
	, `WRITE__CMD, 'h70090040, 'h1f74631ca2330706 // 212
	, `WRITE__CMD, 'h70090048, 'hdf4023c93f1887df // 213
	, `WRITE__CMD, 'h70090050, 'hda077733162f74ca // 214
	, `WRITE__CMD, 'h70090030, 'h0000000000000011 // 215
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 216
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 217
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 218
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001370 // 219
	, `RDnCMP_CMD, 'h70090010, 'h8e3605af36752889 // 220
	, `RDnCMP_CMD, 'h70090018, 'h9d040743c32a359c // 221
	, `RDnCMP_CMD, 'h70090020, 'h79df355d0d885f88 // 222
	, `RDnCMP_CMD, 'h70090028, 'h7c8af5e9376678e6 // 223
	, `WRITE__CMD, 'h70090040, 'hd1ab88d05298b7fb // 224
	, `WRITE__CMD, 'h70090048, 'hfeaf9c10da57f7f9 // 225
	, `WRITE__CMD, 'h70090050, 'h628ae0e63b883ffe // 226
	, `WRITE__CMD, 'h70090030, 'h0000000000000012 // 227
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 228
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 229
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 230
	, `RDnCMP_CMD, 'h70090008, 'h00000000000019bc // 231
	, `RDnCMP_CMD, 'h70090010, 'h8e3617e3bb3eb6b1 // 232
	, `RDnCMP_CMD, 'h70090018, 'h56b1ba4bcbebdfa0 // 233
	, `RDnCMP_CMD, 'h70090020, 'h207995349e806ea5 // 234
	, `RDnCMP_CMD, 'h70090028, 'h20a5d54766322add // 235
	, `WRITE__CMD, 'h70090040, 'h0b6b6ace99fe3f15 // 236
	, `WRITE__CMD, 'h70090048, 'h441beafee291fdf1 // 237
	, `WRITE__CMD, 'h70090050, 'h1ac9f80458ddd91b // 238
	, `WRITE__CMD, 'h70090030, 'h0000000000000013 // 239
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 240
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 241
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 242
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001cda // 243
	, `RDnCMP_CMD, 'h70090010, 'h8e361ec5fd9b79ad // 244
	, `RDnCMP_CMD, 'h70090018, 'h336b64cfcf8b2abe // 245
	, `RDnCMP_CMD, 'h70090020, 'h4f624e804ab4011b // 246
	, `RDnCMP_CMD, 'h70090028, 'h4fa8574f10d2003c // 247
	, `WRITE__CMD, 'h70090040, 'h1cd1b42b8607c4d4 // 248
	, `WRITE__CMD, 'h70090048, 'ha9c438f0a8475401 // 249
	, `WRITE__CMD, 'h70090050, 'h4dd1e5c3f98546d4 // 250
	, `WRITE__CMD, 'h70090030, 'h0000000000000014 // 251
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 252
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 253
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 254
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001e69 // 255
	, `RDnCMP_CMD, 'h70090010, 'h8e361a56dec99e23 // 256
	, `RDnCMP_CMD, 'h70090018, 'h01860b8dcdbb5031 // 257
	, `RDnCMP_CMD, 'h70090020, 'he7a29cc2c792ed8b // 258
	, `RDnCMP_CMD, 'h70090028, 'h7169771bf9d7f9e8 // 259
	, `WRITE__CMD, 'h70090040, 'h151f0533637ce2e3 // 260
	, `WRITE__CMD, 'h70090048, 'h626e0ec00bab5102 // 261
	, `WRITE__CMD, 'h70090050, 'h0f0b6de634743aec // 262
	, `WRITE__CMD, 'h70090030, 'h0000000000000015 // 263
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 264
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 265
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 266
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f30 // 267
	, `RDnCMP_CMD, 'h70090010, 'h8e36181f4f60ede4 // 268
	, `RDnCMP_CMD, 'h70090018, 'h18f0bc2ccca36d76 // 269
	, `RDnCMP_CMD, 'h70090020, 'h48e5925fd2e98981 // 270
	, `RDnCMP_CMD, 'h70090028, 'h2f9c0cd458f7b701 // 271
	, `WRITE__CMD, 'h70090040, 'hf5186a368395caf0 // 272
	, `WRITE__CMD, 'h70090048, 'h450a28e8eaad1a37 // 273
	, `WRITE__CMD, 'h70090050, 'h62b7d10072d10319 // 274
	, `WRITE__CMD, 'h70090030, 'h0000000000000016 // 275
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 276
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 277
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 278
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f9c // 279
	, `RDnCMP_CMD, 'h70090010, 'h8e36193b87b45407 // 280
	, `RDnCMP_CMD, 'h70090018, 'h944be7fc4c2f73d5 // 281
	, `RDnCMP_CMD, 'h70090020, 'h6e70c6098278da82 // 282
	, `RDnCMP_CMD, 'h70090028, 'h175a016577b6b305 // 283
	, `WRITE__CMD, 'h70090040, 'h436969ef7d5061c6 // 284
	, `WRITE__CMD, 'h70090048, 'h71d5a9e83e7ccfd0 // 285
	, `WRITE__CMD, 'h70090050, 'h9d115624b9c03522 // 286
	, `WRITE__CMD, 'h70090030, 'h0000000000000017 // 287
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 288
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 289
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 290
	, `RDnCMP_CMD, 'h70090008, 'h000000000000119e // 291
	, `RDnCMP_CMD, 'h70090010, 'h8e3619a9e3de08f6 // 292
	, `RDnCMP_CMD, 'h70090018, 'h52164a140c697c84 // 293
	, `RDnCMP_CMD, 'h70090020, 'h5195b9be8c2f641a // 294
	, `RDnCMP_CMD, 'h70090028, 'hf5c525b427d57b69 // 295
	, `WRITE__CMD, 'h70090040, 'h1df045095be2982b // 296
	, `WRITE__CMD, 'h70090048, 'h8eedd3c13b070809 // 297
	, `WRITE__CMD, 'h70090050, 'hc2d3fd115e447e15 // 298
	, `WRITE__CMD, 'h70090030, 'h0000000000000018 // 299
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 300
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 301
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 302
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001e34 // 303
	, `RDnCMP_CMD, 'h70090010, 'h8e3619e0d1eb268e // 304
	, `RDnCMP_CMD, 'h70090018, 'hb1389ce02c4a7b2c // 305
	, `RDnCMP_CMD, 'h70090020, 'h44c5fb0e38a471bf // 306
	, `RDnCMP_CMD, 'h70090028, 'hf15b8989f682deb1 // 307
	, `WRITE__CMD, 'h70090040, 'h5d689c1c982a35f9 // 308
	, `WRITE__CMD, 'h70090048, 'h66c92ce111a31dcd // 309
	, `WRITE__CMD, 'h70090050, 'h09b080f87b4e5bf2 // 310
	, `WRITE__CMD, 'h70090030, 'h0000000000000019 // 311
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 312
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 313
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 314
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f1e // 315
	, `RDnCMP_CMD, 'h70090010, 'h8e3619c448f1b1b2 // 316
	, `RDnCMP_CMD, 'h70090018, 'hc0aff79a3c5bf8f8 // 317
	, `RDnCMP_CMD, 'h70090020, 'hb202c434b1d387ba // 318
	, `RDnCMP_CMD, 'h70090028, 'h66d254e0320ee5cd // 319
	, `WRITE__CMD, 'h70090040, 'he853ccc2ef4cf3fe // 320
	, `WRITE__CMD, 'h70090048, 'h74e499373387ee33 // 321
	, `WRITE__CMD, 'h70090050, 'h7daeb9cebc630ef7 // 322
	, `WRITE__CMD, 'h70090030, 'h000000000000001a // 323
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 324
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 325
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 326
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f8b // 327
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d6047cfa2c // 328
	, `RDnCMP_CMD, 'h70090018, 'hf864422734533912 // 329
	, `RDnCMP_CMD, 'h70090020, 'h418d7e0ba8dc604b // 330
	, `RDnCMP_CMD, 'h70090028, 'h3f906fa4cac69061 // 331
	, `WRITE__CMD, 'h70090040, 'h5e7be612d9758af2 // 332
	, `WRITE__CMD, 'h70090048, 'he38415cb5909cedf // 333
	, `WRITE__CMD, 'h70090050, 'hc9cd26f452e6fe01 // 334
	, `WRITE__CMD, 'h70090030, 'h000000000000001b // 335
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 336
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 337
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 338
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001fc1 // 339
	, `RDnCMP_CMD, 'h70090010, 'h8e3619df223a5fe3 // 340
	, `RDnCMP_CMD, 'h70090018, 'he40198f9b05759e7 // 341
	, `RDnCMP_CMD, 'h70090020, 'h49c7cd235cf0f872 // 342
	, `RDnCMP_CMD, 'h70090028, 'h05e1a05da42cc955 // 343
	, `WRITE__CMD, 'h70090040, 'h3ad3cf13151b68d1 // 344
	, `WRITE__CMD, 'h70090048, 'h97b03c0ed105c826 // 345
	, `WRITE__CMD, 'h70090050, 'h5f5d332f189a7537 // 346
	, `WRITE__CMD, 'h70090030, 'h000000000000001c // 347
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 348
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 349
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 350
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001fe4 // 351
	, `RDnCMP_CMD, 'h70090010, 'h8e3619dbb1190d04 // 352
	, `RDnCMP_CMD, 'h70090018, 'h6a337596f255699d // 353
	, `RDnCMP_CMD, 'h70090020, 'hdefe97aabb623875 // 354
	, `RDnCMP_CMD, 'h70090028, 'hf9631fcede356e37 // 355
	, `WRITE__CMD, 'h70090040, 'h49af2f1ccc178fe4 // 356
	, `WRITE__CMD, 'h70090048, 'h075b9ae21a3a4410 // 357
	, `WRITE__CMD, 'h70090050, 'hfc0cfad17775680d // 358
	, `WRITE__CMD, 'h70090030, 'h000000000000001d // 359
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 360
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 361
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 362
	, `RDnCMP_CMD, 'h70090008, 'h00000000000012bc // 363
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d9f888a477 // 364
	, `RDnCMP_CMD, 'h70090018, 'had2a0321535471a0 // 365
	, `RDnCMP_CMD, 'h70090020, 'hb4e6b664eda7a753 // 366
	, `RDnCMP_CMD, 'h70090028, 'hd7a8aefa8bfd6179 // 367
	, `WRITE__CMD, 'h70090040, 'h373f6de12fefa4c7 // 368
	, `WRITE__CMD, 'h70090048, 'hbc34fac50a98aff6 // 369
	, `WRITE__CMD, 'h70090050, 'h5da0efe0b01ad1c0 // 370
	, `WRITE__CMD, 'h70090030, 'h000000000000001e // 371
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 372
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 373
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 374
	, `RDnCMP_CMD, 'h70090008, 'h000000000000195a // 375
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d8dc4070ce // 376
	, `RDnCMP_CMD, 'h70090018, 'h4ea6b87a83d4fdbe // 377
	, `RDnCMP_CMD, 'h70090020, 'hdce7c7b7bab88433 // 378
	, `RDnCMP_CMD, 'h70090028, 'h50d0f1ff6b6a3cba // 379
	, `WRITE__CMD, 'h70090040, 'h9f37c4e3b914a6f4 // 380
	, `WRITE__CMD, 'h70090048, 'h1ec72fc1b94d1c21 // 381
	, `WRITE__CMD, 'h70090050, 'h9ddf15e9717ba1e4 // 382
	, `WRITE__CMD, 'h70090030, 'h000000000000001f // 383
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 384
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 385
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 386
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001ca9 // 387
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d84e241a92 // 388
	, `RDnCMP_CMD, 'h70090018, 'hbf60e5d76b94bbb1 // 389
	, `RDnCMP_CMD, 'h70090020, 'h6eec9742e34d9194 // 390
	, `RDnCMP_CMD, 'h70090028, 'hacaf7d53a512b2ce // 391
	, `WRITE__CMD, 'h70090040, 'h12d508ca0e569af8 // 392
	, `WRITE__CMD, 'h70090048, 'h6cb79ad6d8f05120 // 393
	, `WRITE__CMD, 'h70090050, 'hc4c0d6dbb6d0b723 // 394
	, `WRITE__CMD, 'h70090030, 'h0000000000000020 // 395
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 396
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 397
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 398
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001e50 // 399
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d807162fbc // 400
	, `RDnCMP_CMD, 'h70090018, 'hc783cb019fb498b6 // 401
	, `RDnCMP_CMD, 'h70090020, 'hf760a25b530123c1 // 402
	, `RDnCMP_CMD, 'h70090028, 'h276d315841147f27 // 403
	, `WRITE__CMD, 'h70090040, 'h64dc0111690d16ff // 404
	, `WRITE__CMD, 'h70090048, 'hce005dd065ddbcd1 // 405
	, `WRITE__CMD, 'h70090050, 'hc4fb47fc81f54bea // 406
	, `WRITE__CMD, 'h70090030, 'h0000000000000021 // 407
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 408
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 409
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 410
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001f2c // 411
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d8238f352b // 412
	, `RDnCMP_CMD, 'h70090018, 'hfbf25c6ae5a48935 // 413
	, `RDnCMP_CMD, 'h70090020, 'h0e64e1097e052c06 // 414
	, `RDnCMP_CMD, 'h70090028, 'h85b3b17a2531f364 // 415
	, `WRITE__CMD, 'h70090040, 'h9e5d9f1cebe5f726 // 416
	, `WRITE__CMD, 'h70090048, 'h2ca484f23759da01 // 417
	, `WRITE__CMD, 'h70090050, 'hf3a4ae03a905e3f0 // 418
	, `WRITE__CMD, 'h70090030, 'h0000000000000022 // 419
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 420
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 421
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 422
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001e5b // 423
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d831c3b860 // 424
	, `RDnCMP_CMD, 'h70090018, 'h65ca97df58ac81f4 // 425
	, `RDnCMP_CMD, 'h70090020, 'hb1bb3dcd65c8142a // 426
	, `RDnCMP_CMD, 'h70090028, 'h195830e6dfb03c06 // 427
	, `WRITE__CMD, 'h70090040, 'h70ad5818edad19da // 428
	, `WRITE__CMD, 'h70090048, 'h0e6444d17a4fe0bf // 429
	, `WRITE__CMD, 'h70090050, 'h2f07dc0946fe6038 // 430
	, `WRITE__CMD, 'h70090030, 'h0000000000000023 // 431
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 432
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 433
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 434
	, `RDnCMP_CMD, 'h70090008, 'h00000000000012e1 // 435
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d838e5fec5 // 436
	, `RDnCMP_CMD, 'h70090018, 'haad6f20586288594 // 437
	, `RDnCMP_CMD, 'h70090020, 'h60a0b51106ac5ae0 // 438
	, `RDnCMP_CMD, 'h70090028, 'h56a6070dbd226169 // 439
	, `WRITE__CMD, 'h70090040, 'h72e5edf93c4295f1 // 440
	, `WRITE__CMD, 'h70090048, 'hc66236301f441d00 // 441
	, `WRITE__CMD, 'h70090050, 'hfb39922fc8657516 // 442
	, `WRITE__CMD, 'h70090030, 'h0000000000000024 // 443
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 444
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 445
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 446
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001974 // 447
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d83c76dd97 // 448
	, `RDnCMP_CMD, 'h70090018, 'h4d58c0e8e96a87a4 // 449
	, `RDnCMP_CMD, 'h70090020, 'h8a01c68151e57ade // 450
	, `RDnCMP_CMD, 'h70090028, 'h9b8c8e33bb006b28 // 451
	, `WRITE__CMD, 'h70090040, 'h8ef1cb1666c08222 // 452
	, `WRITE__CMD, 'h70090048, 'h50fc86edf9fde3f0 // 453
	, `WRITE__CMD, 'h70090050, 'h540c101f2e2937c4 // 454
	, `WRITE__CMD, 'h70090030, 'h0000000000000025 // 455
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 456
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 457
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 458
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001e5b // 459
	, `RDnCMP_CMD, 'h70090010, 'h8e3619d83e3f4c3e // 460
	, `RDnCMP_CMD, 'h70090018, 'h3e9fd99e5ecb86bc // 461
	, `RDnCMP_CMD, 'h70090020, 'h7035e454d622328d // 462
	, `RDnCMP_CMD, 'h70090028, 'h244801577d58d1af // 463
	, `WRITE__CMD, 'h70090040, 'h84d04fca2583e8c0 // 464
	, `WRITE__CMD, 'h70090048, 'h39796223762f3a36 // 465
	, `WRITE__CMD, 'h70090050, 'h4be38d2630ac5fdd // 466
	, `WRITE__CMD, 'h70090030, 'h0000000000000001 // 467
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 468
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 469
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 470
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001907 // 471
	, `RDnCMP_CMD, 'h70090010, 'h924110552bd74e7f // 472
	, `RDnCMP_CMD, 'h70090018, 'hc62d21cd7f83b3f9 // 473
	, `RDnCMP_CMD, 'h70090020, 'hf196091adde45741 // 474
	, `RDnCMP_CMD, 'h70090028, 'h883f039eddb4dfad // 475
	, `WRITE__CMD, 'h70090030, 'h0000000000000000 // 476
	, `WRITE__CMD, 'h70090040, 'he7a7ff1e32044f31 // 477
	, `WRITE__CMD, 'h70090048, 'h10c16a332e4c9cbf // 478
	, `WRITE__CMD, 'h70090050, 'h575f72f1a87819fe // 479
	, `WRITE__CMD, 'h70090060, 'h00005c22fee52078 // 480
	, `WRITE__CMD, 'h70090058, 'h000000002aaab0a3 // 481
	, `WRITE__CMD, 'h70090030, 'h0000000000000001 // 482
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 483
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 484
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 485
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001907 // 486
	, `RDnCMP_CMD, 'h70090010, 'h5b01abdf2d263f34 // 487
	, `RDnCMP_CMD, 'h70090018, 'h908af5d6c06af7cb // 488
	, `RDnCMP_CMD, 'h70090020, 'h4cd0a379ae616012 // 489
	, `RDnCMP_CMD, 'h70090028, 'hef2aa14bc95f9198 // 490
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 491
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 492
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 493
	, `RDnCMP_CMD, 'h70090008, 'h0000000000000527 // 494
	, `RDnCMP_CMD, 'h70090010, 'h498fcd2422bd75b0 // 495
	, `RDnCMP_CMD, 'h70090018, 'h1abc641906411d0c // 496
	, `RDnCMP_CMD, 'h70090020, 'h10fc5203831d10a0 // 497
	, `RDnCMP_CMD, 'h70090028, 'h28813f1e88716ada // 498
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 499
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 500
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 501
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001289 // 502
	, `RDnCMP_CMD, 'h70090010, 'ha6db4d9f3de26e10 // 503
	, `RDnCMP_CMD, 'h70090018, 'hc192b5c5c52b67cf // 504
	, `RDnCMP_CMD, 'h70090020, 'hd702b9dda08a6adb // 505
	, `RDnCMP_CMD, 'h70090028, 'h40649a52f2077036 // 506
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 507
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 508
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 509
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001ead // 510
	, `RDnCMP_CMD, 'h70090010, 'h789b843064ad7170 // 511
	, `RDnCMP_CMD, 'h70090018, 'h803c81679ddc92d6 // 512
	, `RDnCMP_CMD, 'h70090020, 'h38eb15ddbd3c2c6c // 513
	, `RDnCMP_CMD, 'h70090028, 'h808c3f78c3a53880 // 514
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 515
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 516
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 517
	, `RDnCMP_CMD, 'h70090008, 'h000000000000022a // 518
	, `RDnCMP_CMD, 'h70090010, 'h4faf558a4d150984 // 519
	, `RDnCMP_CMD, 'h70090018, 'h023114894462010c // 520
	, `RDnCMP_CMD, 'h70090020, 'h19cccfbcfaf61efa // 521
	, `RDnCMP_CMD, 'h70090028, 'hb5d6675bdb0ce9a2 // 522
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 523
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 524
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 525
	, `RDnCMP_CMD, 'h70090008, 'h0000000000001647 // 526
	, `RDnCMP_CMD, 'h70090010, 'h854261008c44e8b4 // 527
	, `RDnCMP_CMD, 'h70090018, 'h6a215b01abdf2d26 // 528
	, `RDnCMP_CMD, 'h70090020, 'h712df95326b02a6f // 529
	, `RDnCMP_CMD, 'h70090028, 'h29e803f7191a5630 // 530
	, `WRITE__CMD, 'h70090000, 'h0000000000000001 // 531
	, `WRITE__CMD, 'h70090000, 'h0000000000000000 // 532
	, `RDSPIN_CMD, 'h70090000, 'h0000000000000002, 'h2, 'h1f4 // 533
	, `RDnCMP_CMD, 'h70090008, 'h00000000000014fd // 534
	, `RDnCMP_CMD, 'h70090010, 'h3f34908af5d6c06a // 535
	, `RDnCMP_CMD, 'h70090018, 'hf7cb498fcd2422bd // 536
	, `RDnCMP_CMD, 'h70090020, 'h0d7ee9ba066143c2 // 537
	, `RDnCMP_CMD, 'h70090028, 'h0024d8d49e883ec3 // 538
};

`define gps_adrBase 'h0070090000
`define gps_adrSize 'h10000
`define gps_size 1706
`define gps_cmdCnt4Single 43
`define gps_totalCommands 538
`endif
