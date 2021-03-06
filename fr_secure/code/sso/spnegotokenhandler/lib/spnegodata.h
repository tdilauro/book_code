// Copyright (C) 2002 Microsoft Corporation
// All rights reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS"
// WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED
// OR IMPLIED, INCLUDING BUT NOT LIMITED
// TO THE IMPLIED WARRANTIES OF MERCHANTIBILITY
// AND/OR FITNESS FOR A PARTICULAR PURPOSE.
//
// Date    - 10/08/2002
// Author  - Sanj Surati
///////////////////////////////////////////////////

unsigned char g_ucSpnegoRespToken [] = 
{
    0xa1, 0x82, 0x01, 0x2c,  0x30, 0x82, 0x01, 0x28, 
    0xa0, 0x03, 0x0a, 0x01,  0x01, 0xa1, 0x0b, 0x06, 
    0x09, 0x2a, 0x86, 0x48,  0x82, 0xf7, 0x12, 0x01, 
    0x02, 0x02, 0xa2, 0x81,  0x88, 0x04, 0x81, 0x85, 
    0x60, 0x81, 0x82, 0x06,  0x09, 0x2a, 0x86, 0x48, 
    0x86, 0xf7, 0x12, 0x01,  0x02, 0x02, 0x03, 0x00, 
    0x7e, 0x73, 0x30, 0x71,  0xa0, 0x03, 0x02, 0x01, 
    0x05, 0xa1, 0x03, 0x02,  0x01, 0x1e, 0xa4, 0x11, 
    0x18, 0x0f, 0x32, 0x30,  0x30, 0x31, 0x31, 0x32, 
    0x31, 0x31, 0x31, 0x39,  0x34, 0x31, 0x30, 0x34, 
    0x5a, 0xa5, 0x05, 0x02,  0x03, 0x0d, 0x93, 0x98, 
    0xa6, 0x03, 0x02, 0x01,  0x25, 0xa9, 0x21, 0x1b, 
    0x1f, 0x4e, 0x4f, 0x52,  0x54, 0x48, 0x41, 0x4d, 
    0x45, 0x52, 0x49, 0x43,  0x41, 0x2e, 0x43, 0x4f, 
    0x52, 0x50, 0x2e, 0x4d,  0x49, 0x43, 0x52, 0x4f, 
    0x53, 0x4f, 0x46, 0x54,  0x2e, 0x43, 0x4f, 0x4d, 
    0xaa, 0x18, 0x30, 0x16,  0xa0, 0x03, 0x02, 0x01, 
    0x01, 0xa1, 0x0f, 0x30,  0x0d, 0x1b, 0x0b, 0x53, 
    0x41, 0x4e, 0x4a, 0x45,  0x53, 0x43, 0x50, 0x51, 
    0x31, 0x24, 0xac, 0x09,  0x04, 0x07, 0x30, 0x05, 
    0xa1, 0x03, 0x02, 0x01,  0x02, 0xa3, 0x81, 0x88, 
    0x04, 0x81, 0x85, 0x60,  0x81, 0x82, 0x06, 0x09, 
    0x2a, 0x86, 0x48, 0x86,  0xf7, 0x12, 0x01, 0x02, 
    0x02, 0x03, 0x00, 0x7e,  0x73, 0x30, 0x71, 0xa0, 
    0x03, 0x02, 0x01, 0x05,  0xa1, 0x03, 0x02, 0x01, 
    0x1e, 0xa4, 0x11, 0x18,  0x0f, 0x32, 0x30, 0x30, 
    0x31, 0x31, 0x32, 0x31,  0x31, 0x31, 0x39, 0x34, 
    0x31, 0x30, 0x34, 0x5a,  0xa5, 0x05, 0x02, 0x03, 
    0x0d, 0x93, 0x98, 0xa6,  0x03, 0x02, 0x01, 0x25, 
    0xa9, 0x21, 0x1b, 0x1f,  0x4e, 0x4f, 0x52, 0x54, 
    0x48, 0x41, 0x4d, 0x45,  0x52, 0x49, 0x43, 0x41, 
    0x2e, 0x43, 0x4f, 0x52,  0x50, 0x2e, 0x4d, 0x49, 
    0x43, 0x52, 0x4f, 0x53,  0x4f, 0x46, 0x54, 0x2e, 
    0x43, 0x4f, 0x4d, 0xaa,  0x18, 0x30, 0x16, 0xa0, 
    0x03, 0x02, 0x01, 0x01,  0xa1, 0x0f, 0x30, 0x0d, 
    0x1b, 0x0b, 0x53, 0x41,  0x4e, 0x4a, 0x45, 0x53, 
    0x43, 0x50, 0x51, 0x31,  0x24, 0xac, 0x09, 0x04, 
    0x07, 0x30, 0x05, 0xa1,  0x03, 0x02, 0x01, 0x02, 
    0x00, 0x00, 0x00, 0xff,  0xff, 0xff, 0xff, 0xff
};

#define  GSS_KERB_RESP_TOKEN_SIZE 0x85

unsigned char g_ucGSSKerbRespToken [] =
{
    0x60, 0x81, 0x82, 0x06,  0x09, 0x2a, 0x86, 0x48, 
    0x86, 0xf7, 0x12, 0x01,  0x02, 0x02, 0x03, 0x00, 
    0x7e, 0x73, 0x30, 0x71,  0xa0, 0x03, 0x02, 0x01, 
    0x05, 0xa1, 0x03, 0x02,  0x01, 0x1e, 0xa4, 0x11, 
    0x18, 0x0f, 0x32, 0x30,  0x30, 0x31, 0x31, 0x32, 
    0x31, 0x31, 0x31, 0x39,  0x34, 0x31, 0x30, 0x34, 
    0x5a, 0xa5, 0x05, 0x02,  0x03, 0x0d, 0x93, 0x98, 
    0xa6, 0x03, 0x02, 0x01,  0x25, 0xa9, 0x21, 0x1b, 
    0x1f, 0x4e, 0x4f, 0x52,  0x54, 0x48, 0x41, 0x4d, 
    0x45, 0x52, 0x49, 0x43,  0x41, 0x2e, 0x43, 0x4f, 
    0x52, 0x50, 0x2e, 0x4d,  0x49, 0x43, 0x52, 0x4f, 
    0x53, 0x4f, 0x46, 0x54,  0x2e, 0x43, 0x4f, 0x4d, 
    0xaa, 0x18, 0x30, 0x16,  0xa0, 0x03, 0x02, 0x01, 
    0x01, 0xa1, 0x0f, 0x30,  0x0d, 0x1b, 0x0b, 0x53, 
    0x41, 0x4e, 0x4a, 0x45,  0x53, 0x43, 0x50, 0x51, 
    0x31, 0x24, 0xac, 0x09,  0x04, 0x07, 0x30, 0x05, 
    0xa1, 0x03, 0x02, 0x01,  0x02, 0xff, 0xff, 0xff
};




unsigned char g_ucSpnegoInitToken [] =
{
    0x60, 0x82, 0x05, 0xf0,  0x06, 0x06, 0x2b, 0x06,	
    0x01, 0x05, 0x05, 0x02,  0xa0, 0x82, 0x05, 0xe4,	
    0x30, 0x82, 0x05, 0xe0,  0xa0, 0x24, 0x30, 0x22,	
    0x06, 0x09, 0x2a, 0x86,  0x48, 0x82, 0xf7, 0x12,	
    0x01, 0x02, 0x02, 0x06,  0x09, 0x2a, 0x86, 0x48,	
    0x86, 0xf7, 0x12, 0x01,  0x02, 0x02, 0x06, 0x0a,	
    0x2a, 0x86, 0x48, 0x86,  0xf7, 0x12, 0x01, 0x02,
    0x02, 0x03, 0xa2, 0x82,  0x05, 0xb6, 0x04, 0x82,	
    0x05, 0xb2, 0x60, 0x82,  0x05, 0xae, 0x06, 0x09,
    0x2a, 0x86, 0x48, 0x86,  0xf7, 0x12, 0x01, 0x02,
    0x02, 0x01, 0x00, 0x6e,  0x82, 0x05, 0x9d, 0x30,
    0x82, 0x05, 0x99, 0xa0,  0x03, 0x02, 0x01, 0x05,
    0xa1, 0x03, 0x02, 0x01,  0x0e, 0xa2, 0x07, 0x03,
    0x05, 0x00, 0x20, 0x00,  0x00, 0x00, 0xa3, 0x82,
    0x04, 0xb0, 0x61, 0x82,  0x04, 0xac, 0x30, 0x82,
    0x04, 0xa8, 0xa0, 0x03,  0x02, 0x01, 0x05, 0xa1,
    0x21, 0x1b, 0x1f, 0x4e,  0x4f, 0x52, 0x54, 0x48,
    0x41, 0x4d, 0x45, 0x52,  0x49, 0x43, 0x41, 0x2e,
    0x43, 0x4f, 0x52, 0x50,  0x2e, 0x4d, 0x49, 0x43,
    0x52, 0x4f, 0x53, 0x4f,  0x46, 0x54, 0x2e, 0x43,
    0x4f, 0x4d, 0xa2, 0x13,  0x30, 0x11, 0xa0, 0x03,
    0x02, 0x01, 0x01, 0xa1,  0x0a, 0x30, 0x08, 0x1b,
    0x06, 0x73, 0x61, 0x6e,  0x6a, 0x65, 0x73, 0xa3,
    0x82, 0x04, 0x67, 0x30,  0x82, 0x04, 0x63, 0xa0,
    0x03, 0x02, 0x01, 0x17,  0xa2, 0x82, 0x04, 0x5a,
    0x04, 0x82, 0x04, 0x56,  0x66, 0x16, 0x0e, 0x7a,
    0xd1, 0x1f, 0xc0, 0x5f,  0xdf, 0x53, 0x70, 0xec,
    0x22, 0xc5, 0xf3, 0x34,  0x6b, 0x64, 0x5d, 0xe4,
    0xa6, 0x94, 0x2f, 0x2e,  0xfa, 0x3e, 0xc2, 0x42,
    0x53, 0xc4, 0x33, 0xa8,  0x6a, 0x0a, 0xeb, 0x55,
    0x84, 0xed, 0xef, 0x46,  0xc3, 0xfb, 0x20, 0xf9,
    0x39, 0x17, 0xa3, 0xb1,  0x1f, 0x72, 0xa0, 0x22,
    0x70, 0xd0, 0xbe, 0x75,  0xac, 0x11, 0x16, 0x1c,
    0x2c, 0x67, 0x32, 0x8d,  0x80, 0x6b, 0xd9, 0x25,
    0x11, 0xb2, 0x01, 0x67,  0x2d, 0xb1, 0x06, 0x58,
    0x5b, 0x0c, 0xac, 0x66,  0xd0, 0x1c, 0xac, 0x59,
    0xff, 0x89, 0xc3, 0x31,  0xa1, 0x3c, 0x40, 0x4f,
    0x90, 0x06, 0x05, 0x5f,  0xa6, 0xbb, 0xcf, 0x75,
    0xc0, 0xa1, 0x01, 0x30,  0x6b, 0x7a, 0xaa, 0x24,
    0x50, 0xcc, 0x5c, 0xa8,  0x3f, 0xb0, 0xec, 0x81,
    0xd5, 0x37, 0x3f, 0x78,  0x7b, 0x99, 0x26, 0x2d,
    0xf2, 0x51, 0xb4, 0xf5,  0xf7, 0x47, 0xb1, 0xa9,
    0xbe, 0x24, 0x5a, 0x64,  0xce, 0x52, 0xa5, 0x7c,
    0x0b, 0xc8, 0x0b, 0xfc,  0x2f, 0x57, 0x74, 0x50,
    0x86, 0x6a, 0x0b, 0xc7,  0x9d, 0xa6, 0xfd, 0xa5,
    0x2b, 0x11, 0xad, 0xda,  0xc7, 0x58, 0x8d, 0xc8,
    0x44, 0xac, 0x9a, 0x2e,  0x14, 0x36, 0x52, 0xee,
    0x5c, 0xb8, 0xea, 0x92,  0x1a, 0xa6, 0xf4, 0x14,
    0x7e, 0x02, 0xe1, 0x05,  0xa4, 0xdf, 0xcd, 0x5c,
    0xf8, 0xad, 0xc1, 0xc4,  0xc1, 0xec, 0xbd, 0x8d,
    0x46, 0x1b, 0x35, 0xb3,  0x37, 0x24, 0xa0, 0xdf,
    0x9c, 0xa3, 0xef, 0xad,  0xf9, 0x18, 0xc6, 0x45,
    0xc6, 0xc3, 0x73, 0x36,  0x08, 0x71, 0x76, 0x95,
    0xe1, 0xf1, 0xad, 0xe4,  0xed, 0x28, 0x0b, 0xdc,
    0xfa, 0xb0, 0xb5, 0xa3,  0x80, 0x1c, 0x93, 0xd1,
    0x20, 0xc3, 0xde, 0x6b,  0xf0, 0x0d, 0xec, 0x63,
    0x1f, 0x51, 0xc8, 0xff,  0xb3, 0x58, 0x49, 0x94,
    0xf2, 0xca, 0x53, 0x20,  0x7d, 0x32, 0x65, 0x48,
    0x58, 0xfa, 0x8d, 0x2d,  0xe6, 0xf0, 0x08, 0x3d,
    0xac, 0x43, 0x60, 0x3d,  0xa1, 0x63, 0x92, 0xf5,
    0x70, 0x8b, 0xa2, 0x55,  0x4e, 0x89, 0x56, 0x40,
    0xe6, 0xfd, 0xcb, 0x0a,  0x62, 0x09, 0x19, 0x66,
    0xd4, 0x72, 0x64, 0x06,  0x12, 0x82, 0x1e, 0x8c,
    0xa5, 0xbb, 0x95, 0x9a,  0x09, 0x6e, 0xe8, 0x8a,
    0x25, 0xd3, 0x55, 0xa9,  0xba, 0x8f, 0xfe, 0x88,
    0x7e, 0xfb, 0xe8, 0xbe,  0x96, 0x65, 0xef, 0x1c,
    0x2b, 0xa9, 0x96, 0x0a,  0x51, 0x5f, 0xec, 0xf7,
    0xbd, 0xdf, 0xed, 0xa0,  0x45, 0x0e, 0x69, 0xa9,
    0xa8, 0x2f, 0x94, 0x79,  0x59, 0x24, 0x72, 0x8c,
    0x66, 0x91, 0xc4, 0x92,  0xb7, 0x99, 0x50, 0x81,
    0x22, 0xef, 0x3c, 0x2c,  0xf0, 0x4b, 0x07, 0x03,
    0x82, 0x84, 0xad, 0xf9,  0x54, 0x90, 0x79, 0xdb,
    0xad, 0xc0, 0x5e, 0x59,  0x8e, 0xd1, 0x74, 0xf4,
    0x7f, 0xf7, 0x36, 0xa8,  0x47, 0x39, 0xc3, 0xd8,
    0x3a, 0xac, 0xd4, 0x6d,  0xd6, 0xa9, 0x2d, 0x86,
    0x42, 0x0a, 0xc0, 0x74,  0x4a, 0x1a, 0x32, 0x29,
    0xad, 0x55, 0xda, 0x3d,  0x4f, 0x25, 0x49, 0x4a,
    0x6d, 0xc4, 0x39, 0x6a,  0xe5, 0x4b, 0x49, 0x68,
    0xc5, 0xfc, 0xcf, 0x5e,  0x55, 0x15, 0x30, 0x0a,
    0xd6, 0x14, 0xe3, 0x5a,  0xef, 0x4d, 0x82, 0xeb,
    0x9c, 0xf4, 0x1d, 0xca,  0x16, 0x4a, 0xd5, 0xea,
    0x99, 0x20, 0x58, 0x5a,  0xb8, 0x65, 0xd1, 0xee,
    0x85, 0x4b, 0x31, 0xbc,  0x9a, 0x72, 0xf0, 0xf7,
    0x97, 0xa6, 0x05, 0x1d,  0x6a, 0xce, 0x85, 0x37,
    0x29, 0x3b, 0x02, 0x2c,  0x33, 0x4a, 0x9e, 0x0e,
    0xf8, 0xe1, 0xa5, 0x23,  0x82, 0x52, 0xae, 0xa7,
    0xe2, 0xf8, 0xef, 0xaa,  0x5b, 0x23, 0xc4, 0xb5,
    0x9d, 0x6a, 0x05, 0x76,  0x97, 0xab, 0x6a, 0x54,
    0x22, 0x88, 0xd4, 0x16,  0x0a, 0xc3, 0x24, 0x57,
    0x06, 0x34, 0x44, 0x8a,  0x06, 0xb1, 0x3e, 0x0d,
    0x60, 0xc7, 0xc2, 0x84,  0x01, 0x8d, 0x6a, 0x4f,
    0x25, 0x7a, 0x6e, 0x09,  0xa1, 0x27, 0xdf, 0x1a,
    0xad, 0x83, 0x7d, 0xc8,  0xe7, 0x0f, 0x46, 0xae,
    0x90, 0xb2, 0x2d, 0x37,  0x08, 0x8e, 0xb8, 0xa0,
    0x77, 0x4f, 0x5f, 0x75,  0x88, 0xa7, 0xeb, 0xa3,
    0xc6, 0x01, 0xb3, 0xba,  0xc6, 0x86, 0xe9, 0x60,
    0xa6, 0x4d, 0x7e, 0x8d,  0x09, 0xc5, 0xf5, 0xff,
    0xde, 0x46, 0x2c, 0x37,  0xa2, 0xea, 0xf5, 0x99,
    0x6f, 0x3a, 0x9a, 0x7c,  0x69, 0x66, 0x2a, 0x2b,
    0x64, 0xba, 0x83, 0xe2,  0x4f, 0xef, 0xc7, 0x3e,
    0x68, 0x50, 0x3c, 0x8d,  0x13, 0x5c, 0x51, 0x7b,
    0x0d, 0x8f, 0x48, 0xef,  0x64, 0x8a, 0xc9, 0x0f,
    0x3a, 0x39, 0xcb, 0x05,  0x3a, 0x5f, 0xeb, 0xb5,
    0x8a, 0xc7, 0x32, 0x77,  0x86, 0x98, 0x6a, 0xa0,
    0x4e, 0xca, 0xcf, 0x2f,  0x95, 0xf1, 0x01, 0x29,
    0x14, 0x6c, 0xc3, 0x70,  0x34, 0x2d, 0xb0, 0xc6,
    0x42, 0xad, 0x5c, 0x11,  0xbf, 0xa7, 0x9a, 0xdc,
    0xf9, 0x1d, 0x4a, 0xdd,  0x15, 0x3a, 0x93, 0xaa,
    0xc3, 0x7f, 0xa6, 0xbd,  0x97, 0xd1, 0x59, 0x41,
    0x5a, 0xf5, 0x7c, 0x92,  0x4b, 0x6e, 0xf7, 0x59,
    0xbe, 0x86, 0x3f, 0xfe,  0x00, 0x24, 0xe9, 0x28,
    0x38, 0xb6, 0x74, 0xb5,  0x68, 0x91, 0x40, 0x99,
    0x41, 0xd8, 0xc3, 0xf9,  0x6a, 0x9b, 0xb2, 0x3a,
    0xd3, 0x23, 0x67, 0x88,  0x47, 0x8c, 0x51, 0x57,
    0x52, 0x63, 0x1f, 0x7d,  0x70, 0xf1, 0xe0, 0x4f,
    0x95, 0x85, 0x16, 0x3a,  0x3f, 0x50, 0xa3, 0xf2,
    0x05, 0x1e, 0xf5, 0xae,  0xbb, 0x24, 0x59, 0x2f,
    0x91, 0xdb, 0xca, 0x4c,  0x87, 0xc3, 0x7a, 0x8d,
    0x71, 0xdb, 0xaa, 0xf3,  0x95, 0x6e, 0x02, 0xd5,
    0x92, 0xc2, 0x60, 0x21,  0xa1, 0x80, 0xe0, 0xfd,
    0xe2, 0x81, 0x98, 0xef,  0x35, 0x39, 0xad, 0x0b,
    0x93, 0x9f, 0x6c, 0xc5,  0x5c, 0xf4, 0xd6, 0x10,
    0xa9, 0xa5, 0x66, 0xc4,  0xae, 0x26, 0x28, 0x65,
    0x98, 0xf2, 0xba, 0xc3,  0x27, 0x27, 0x94, 0x16,
    0xd4, 0xa4, 0x2b, 0xab,  0xb2, 0x10, 0x9d, 0x2d,
    0xfe, 0xb2, 0x79, 0x46,  0x28, 0xef, 0xf7, 0xed,
    0x40, 0xf8, 0x25, 0x24,  0x15, 0x7e, 0x5f, 0xfd,
    0x09, 0x1d, 0x3a, 0xb0,  0xa9, 0xd1, 0xc9, 0x34,
    0x9b, 0xdd, 0x0d, 0x35,  0x34, 0xa7, 0x08, 0x0a,
    0x36, 0x4a, 0xfa, 0x46,  0xcc, 0xf3, 0x87, 0x8c,
    0x52, 0xde, 0x6b, 0x49,  0x84, 0x3b, 0x5f, 0x27,
    0x95, 0xab, 0x2b, 0x47,  0x12, 0xc6, 0x17, 0xf2,
    0x91, 0xda, 0x4c, 0x10,  0xf7, 0xb7, 0xcd, 0x47,
    0x0d, 0xda, 0x83, 0xaa,  0x93, 0x87, 0x14, 0xb9,
    0x81, 0x63, 0x4c, 0xac,  0x00, 0xfc, 0xc4, 0x66,
    0x70, 0x5c, 0x92, 0x8f,  0x4b, 0xdd, 0x15, 0xc9,
    0x2b, 0x96, 0xec, 0xf4,  0x14, 0x54, 0x68, 0x0c,
    0x60, 0x26, 0xbd, 0xdd,  0x8d, 0xda, 0xe5, 0xf9,
    0xb1, 0xed, 0x19, 0xde,  0xad, 0xf1, 0x5d, 0xa8,
    0xf8, 0xae, 0xd5, 0x90,  0x67, 0xc8, 0xd7, 0x2f,
    0x09, 0x84, 0x83, 0x5c,  0xab, 0x4d, 0x8e, 0x26,
    0xa3, 0x96, 0xa2, 0xed,  0xd2, 0x0f, 0xf8, 0xb9,
    0xbb, 0x1f, 0xd8, 0x30,  0xf8, 0xf8, 0x46, 0xcd,
    0x31, 0x76, 0xa7, 0x62,  0xf7, 0x8d, 0xe2, 0x24,
    0x5e, 0x55, 0x41, 0x09,  0x4b, 0x79, 0xb7, 0x71,
    0xbf, 0x48, 0xa1, 0x73,  0x11, 0xb1, 0xbe, 0xd1,
    0xcf, 0xf0, 0xb1, 0xf5,  0x14, 0xc8, 0x98, 0xa4,
    0x6e, 0x22, 0x8d, 0x98,  0xe6, 0xe3, 0xb8, 0x38,
    0x24, 0x7a, 0x9c, 0xd6,  0x99, 0x35, 0x0c, 0xe8,
    0xc9, 0x34, 0x47, 0xe2,  0x68, 0x60, 0x13, 0xc7,
    0x33, 0x8a, 0xa5, 0x93,  0x73, 0xe5, 0x8c, 0xff,
    0x55, 0xc4, 0xc1, 0x6f,  0xda, 0x62, 0x24, 0x02,
    0x64, 0xdf, 0x82, 0xd8,  0xe0, 0x41, 0x9f, 0x8a,
    0xa0, 0x07, 0xf1, 0x5a,  0x7f, 0x70, 0x63, 0x6b,
    0xc8, 0x3e, 0x94, 0xf0,  0xae, 0xfc, 0x20, 0x5e,
    0x96, 0x86, 0x45, 0x04,  0x3f, 0x4d, 0x12, 0x64,
    0xf3, 0x0f, 0x96, 0x76,  0xdc, 0xd8, 0xce, 0xbe,
    0x4c, 0x8e, 0x0b, 0xbf,  0x38, 0xc2, 0x54, 0x3a,
    0x4c, 0x5e, 0xb4, 0x0a,  0x10, 0xb9, 0xab, 0x2a,
    0xa3, 0x25, 0x64, 0xd8,  0xf8, 0x71, 0xe0, 0x47,
    0x3d, 0x8c, 0x37, 0x4e,  0x58, 0x44, 0x10, 0x4d,
    0x57, 0x82, 0x58, 0xce,  0xb3, 0xaa, 0x44, 0x28,
    0xe5, 0xb2, 0xbe, 0x2d,  0x3a, 0x29, 0xa3, 0xe8,
    0x2f, 0x98, 0xee, 0x88,  0x7d, 0x4c, 0x2a, 0xca,
    0x9c, 0xea, 0xa4, 0x81,  0xcf, 0x30, 0x81, 0xcc,
    0xa0, 0x03, 0x02, 0x01,  0x17, 0xa2, 0x81, 0xc4,
    0x04, 0x81, 0xc1, 0x36,  0xeb, 0xaf, 0x12, 0x31,
    0x90, 0xe6, 0xc5, 0x54,  0x9f, 0xc7, 0x4b, 0x16,
    0xbd, 0xdd, 0x61, 0xd3,  0x24, 0x78, 0x92, 0xec,
    0x75, 0x04, 0x2e, 0xd3,  0xc2, 0xd6, 0x5e, 0xce,
    0x31, 0xbb, 0xec, 0x3a,  0xd7, 0xa4, 0x0a, 0x33,
    0x99, 0xb4, 0xc8, 0x40,  0x67, 0x7e, 0xce, 0xfc,
    0xbe, 0x94, 0x23, 0x0b,  0x49, 0xca, 0xc5, 0x48,
    0xbb, 0xe9, 0x7d, 0x25,  0xa7, 0x20, 0xe5, 0x03,
    0x99, 0x20, 0x87, 0xfb,  0x75, 0xc6, 0xa3, 0x1e,
    0x74, 0xc7, 0xa5, 0x50,  0xbb, 0x00, 0xc5, 0x87,
    0xab, 0xd7, 0xe4, 0xd3,  0xac, 0x40, 0xba, 0xd0,
    0xed, 0xe1, 0x99, 0xeb,  0x61, 0x0e, 0x56, 0x3c,
    0x34, 0x7e, 0xc0, 0xdf,  0xbb, 0x57, 0x1f, 0x28,
    0xac, 0xb4, 0x44, 0x55,  0xbe, 0x2e, 0x87, 0x15,
    0x7c, 0x3c, 0x84, 0xf0,  0x1a, 0xce, 0xab, 0xa8,
    0x85, 0xfa, 0x5e, 0x5e,  0x87, 0xd6, 0xed, 0xb1,
    0x79, 0xf4, 0x3c, 0x19,  0x07, 0x6a, 0x43, 0x16,
    0x60, 0x5e, 0xcb, 0x31,  0x0b, 0x04, 0x3b, 0xc5,
    0xce, 0x8c, 0xf7, 0x58,  0xcb, 0x2a, 0x58, 0x3f,
    0xda, 0x2d, 0x48, 0x83,  0x9a, 0xec, 0x35, 0x8a,
    0xc3, 0x2d, 0x93, 0xfc,  0x25, 0xb2, 0xb6, 0x07,
    0xfb, 0xd7, 0xe6, 0x25,  0xe9, 0xd2, 0x8e, 0xf1,
    0xb8, 0xfa, 0x94, 0x41,  0xb9, 0x75, 0x7b, 0xe1,
    0x2c, 0x8a, 0x19, 0xe2,  0x4f, 0x38, 0x5d, 0x5a,
    0x2d, 0x1a, 0x68, 0x2f,  0x00, 0xff, 0xff, 0xff
 };

#define  GSS_KERB_INIT_TOKEN_SIZE 0x5B2

unsigned char g_ucGSSKerbInitToken [] =
{
    0x60, 0x82, 0x05, 0xae,  0x06, 0x09,
    0x2a, 0x86, 0x48, 0x86,  0xf7, 0x12, 0x01, 0x02,
    0x02, 0x01, 0x00, 0x6e,  0x82, 0x05, 0x9d, 0x30,
    0x82, 0x05, 0x99, 0xa0,  0x03, 0x02, 0x01, 0x05,
    0xa1, 0x03, 0x02, 0x01,  0x0e, 0xa2, 0x07, 0x03,
    0x05, 0x00, 0x20, 0x00,  0x00, 0x00, 0xa3, 0x82,
    0x04, 0xb0, 0x61, 0x82,  0x04, 0xac, 0x30, 0x82,
    0x04, 0xa8, 0xa0, 0x03,  0x02, 0x01, 0x05, 0xa1,
    0x21, 0x1b, 0x1f, 0x4e,  0x4f, 0x52, 0x54, 0x48,
    0x41, 0x4d, 0x45, 0x52,  0x49, 0x43, 0x41, 0x2e,
    0x43, 0x4f, 0x52, 0x50,  0x2e, 0x4d, 0x49, 0x43,
    0x52, 0x4f, 0x53, 0x4f,  0x46, 0x54, 0x2e, 0x43,
    0x4f, 0x4d, 0xa2, 0x13,  0x30, 0x11, 0xa0, 0x03,
    0x02, 0x01, 0x01, 0xa1,  0x0a, 0x30, 0x08, 0x1b,
    0x06, 0x73, 0x61, 0x6e,  0x6a, 0x65, 0x73, 0xa3,
    0x82, 0x04, 0x67, 0x30,  0x82, 0x04, 0x63, 0xa0,
    0x03, 0x02, 0x01, 0x17,  0xa2, 0x82, 0x04, 0x5a,
    0x04, 0x82, 0x04, 0x56,  0x66, 0x16, 0x0e, 0x7a,
    0xd1, 0x1f, 0xc0, 0x5f,  0xdf, 0x53, 0x70, 0xec,
    0x22, 0xc5, 0xf3, 0x34,  0x6b, 0x64, 0x5d, 0xe4,
    0xa6, 0x94, 0x2f, 0x2e,  0xfa, 0x3e, 0xc2, 0x42,
    0x53, 0xc4, 0x33, 0xa8,  0x6a, 0x0a, 0xeb, 0x55,
    0x84, 0xed, 0xef, 0x46,  0xc3, 0xfb, 0x20, 0xf9,
    0x39, 0x17, 0xa3, 0xb1,  0x1f, 0x72, 0xa0, 0x22,
    0x70, 0xd0, 0xbe, 0x75,  0xac, 0x11, 0x16, 0x1c,
    0x2c, 0x67, 0x32, 0x8d,  0x80, 0x6b, 0xd9, 0x25,
    0x11, 0xb2, 0x01, 0x67,  0x2d, 0xb1, 0x06, 0x58,
    0x5b, 0x0c, 0xac, 0x66,  0xd0, 0x1c, 0xac, 0x59,
    0xff, 0x89, 0xc3, 0x31,  0xa1, 0x3c, 0x40, 0x4f,
    0x90, 0x06, 0x05, 0x5f,  0xa6, 0xbb, 0xcf, 0x75,
    0xc0, 0xa1, 0x01, 0x30,  0x6b, 0x7a, 0xaa, 0x24,
    0x50, 0xcc, 0x5c, 0xa8,  0x3f, 0xb0, 0xec, 0x81,
    0xd5, 0x37, 0x3f, 0x78,  0x7b, 0x99, 0x26, 0x2d,
    0xf2, 0x51, 0xb4, 0xf5,  0xf7, 0x47, 0xb1, 0xa9,
    0xbe, 0x24, 0x5a, 0x64,  0xce, 0x52, 0xa5, 0x7c,
    0x0b, 0xc8, 0x0b, 0xfc,  0x2f, 0x57, 0x74, 0x50,
    0x86, 0x6a, 0x0b, 0xc7,  0x9d, 0xa6, 0xfd, 0xa5,
    0x2b, 0x11, 0xad, 0xda,  0xc7, 0x58, 0x8d, 0xc8,
    0x44, 0xac, 0x9a, 0x2e,  0x14, 0x36, 0x52, 0xee,
    0x5c, 0xb8, 0xea, 0x92,  0x1a, 0xa6, 0xf4, 0x14,
    0x7e, 0x02, 0xe1, 0x05,  0xa4, 0xdf, 0xcd, 0x5c,
    0xf8, 0xad, 0xc1, 0xc4,  0xc1, 0xec, 0xbd, 0x8d,
    0x46, 0x1b, 0x35, 0xb3,  0x37, 0x24, 0xa0, 0xdf,
    0x9c, 0xa3, 0xef, 0xad,  0xf9, 0x18, 0xc6, 0x45,
    0xc6, 0xc3, 0x73, 0x36,  0x08, 0x71, 0x76, 0x95,
    0xe1, 0xf1, 0xad, 0xe4,  0xed, 0x28, 0x0b, 0xdc,
    0xfa, 0xb0, 0xb5, 0xa3,  0x80, 0x1c, 0x93, 0xd1,
    0x20, 0xc3, 0xde, 0x6b,  0xf0, 0x0d, 0xec, 0x63,
    0x1f, 0x51, 0xc8, 0xff,  0xb3, 0x58, 0x49, 0x94,
    0xf2, 0xca, 0x53, 0x20,  0x7d, 0x32, 0x65, 0x48,
    0x58, 0xfa, 0x8d, 0x2d,  0xe6, 0xf0, 0x08, 0x3d,
    0xac, 0x43, 0x60, 0x3d,  0xa1, 0x63, 0x92, 0xf5,
    0x70, 0x8b, 0xa2, 0x55,  0x4e, 0x89, 0x56, 0x40,
    0xe6, 0xfd, 0xcb, 0x0a,  0x62, 0x09, 0x19, 0x66,
    0xd4, 0x72, 0x64, 0x06,  0x12, 0x82, 0x1e, 0x8c,
    0xa5, 0xbb, 0x95, 0x9a,  0x09, 0x6e, 0xe8, 0x8a,
    0x25, 0xd3, 0x55, 0xa9,  0xba, 0x8f, 0xfe, 0x88,
    0x7e, 0xfb, 0xe8, 0xbe,  0x96, 0x65, 0xef, 0x1c,
    0x2b, 0xa9, 0x96, 0x0a,  0x51, 0x5f, 0xec, 0xf7,
    0xbd, 0xdf, 0xed, 0xa0,  0x45, 0x0e, 0x69, 0xa9,
    0xa8, 0x2f, 0x94, 0x79,  0x59, 0x24, 0x72, 0x8c,
    0x66, 0x91, 0xc4, 0x92,  0xb7, 0x99, 0x50, 0x81,
    0x22, 0xef, 0x3c, 0x2c,  0xf0, 0x4b, 0x07, 0x03,
    0x82, 0x84, 0xad, 0xf9,  0x54, 0x90, 0x79, 0xdb,
    0xad, 0xc0, 0x5e, 0x59,  0x8e, 0xd1, 0x74, 0xf4,
    0x7f, 0xf7, 0x36, 0xa8,  0x47, 0x39, 0xc3, 0xd8,
    0x3a, 0xac, 0xd4, 0x6d,  0xd6, 0xa9, 0x2d, 0x86,
    0x42, 0x0a, 0xc0, 0x74,  0x4a, 0x1a, 0x32, 0x29,
    0xad, 0x55, 0xda, 0x3d,  0x4f, 0x25, 0x49, 0x4a,
    0x6d, 0xc4, 0x39, 0x6a,  0xe5, 0x4b, 0x49, 0x68,
    0xc5, 0xfc, 0xcf, 0x5e,  0x55, 0x15, 0x30, 0x0a,
    0xd6, 0x14, 0xe3, 0x5a,  0xef, 0x4d, 0x82, 0xeb,
    0x9c, 0xf4, 0x1d, 0xca,  0x16, 0x4a, 0xd5, 0xea,
    0x99, 0x20, 0x58, 0x5a,  0xb8, 0x65, 0xd1, 0xee,
    0x85, 0x4b, 0x31, 0xbc,  0x9a, 0x72, 0xf0, 0xf7,
    0x97, 0xa6, 0x05, 0x1d,  0x6a, 0xce, 0x85, 0x37,
    0x29, 0x3b, 0x02, 0x2c,  0x33, 0x4a, 0x9e, 0x0e,
    0xf8, 0xe1, 0xa5, 0x23,  0x82, 0x52, 0xae, 0xa7,
    0xe2, 0xf8, 0xef, 0xaa,  0x5b, 0x23, 0xc4, 0xb5,
    0x9d, 0x6a, 0x05, 0x76,  0x97, 0xab, 0x6a, 0x54,
    0x22, 0x88, 0xd4, 0x16,  0x0a, 0xc3, 0x24, 0x57,
    0x06, 0x34, 0x44, 0x8a,  0x06, 0xb1, 0x3e, 0x0d,
    0x60, 0xc7, 0xc2, 0x84,  0x01, 0x8d, 0x6a, 0x4f,
    0x25, 0x7a, 0x6e, 0x09,  0xa1, 0x27, 0xdf, 0x1a,
    0xad, 0x83, 0x7d, 0xc8,  0xe7, 0x0f, 0x46, 0xae,
    0x90, 0xb2, 0x2d, 0x37,  0x08, 0x8e, 0xb8, 0xa0,
    0x77, 0x4f, 0x5f, 0x75,  0x88, 0xa7, 0xeb, 0xa3,
    0xc6, 0x01, 0xb3, 0xba,  0xc6, 0x86, 0xe9, 0x60,
    0xa6, 0x4d, 0x7e, 0x8d,  0x09, 0xc5, 0xf5, 0xff,
    0xde, 0x46, 0x2c, 0x37,  0xa2, 0xea, 0xf5, 0x99,
    0x6f, 0x3a, 0x9a, 0x7c,  0x69, 0x66, 0x2a, 0x2b,
    0x64, 0xba, 0x83, 0xe2,  0x4f, 0xef, 0xc7, 0x3e,
    0x68, 0x50, 0x3c, 0x8d,  0x13, 0x5c, 0x51, 0x7b,
    0x0d, 0x8f, 0x48, 0xef,  0x64, 0x8a, 0xc9, 0x0f,
    0x3a, 0x39, 0xcb, 0x05,  0x3a, 0x5f, 0xeb, 0xb5,
    0x8a, 0xc7, 0x32, 0x77,  0x86, 0x98, 0x6a, 0xa0,
    0x4e, 0xca, 0xcf, 0x2f,  0x95, 0xf1, 0x01, 0x29,
    0x14, 0x6c, 0xc3, 0x70,  0x34, 0x2d, 0xb0, 0xc6,
    0x42, 0xad, 0x5c, 0x11,  0xbf, 0xa7, 0x9a, 0xdc,
    0xf9, 0x1d, 0x4a, 0xdd,  0x15, 0x3a, 0x93, 0xaa,
    0xc3, 0x7f, 0xa6, 0xbd,  0x97, 0xd1, 0x59, 0x41,
    0x5a, 0xf5, 0x7c, 0x92,  0x4b, 0x6e, 0xf7, 0x59,
    0xbe, 0x86, 0x3f, 0xfe,  0x00, 0x24, 0xe9, 0x28,
    0x38, 0xb6, 0x74, 0xb5,  0x68, 0x91, 0x40, 0x99,
    0x41, 0xd8, 0xc3, 0xf9,  0x6a, 0x9b, 0xb2, 0x3a,
    0xd3, 0x23, 0x67, 0x88,  0x47, 0x8c, 0x51, 0x57,
    0x52, 0x63, 0x1f, 0x7d,  0x70, 0xf1, 0xe0, 0x4f,
    0x95, 0x85, 0x16, 0x3a,  0x3f, 0x50, 0xa3, 0xf2,
    0x05, 0x1e, 0xf5, 0xae,  0xbb, 0x24, 0x59, 0x2f,
    0x91, 0xdb, 0xca, 0x4c,  0x87, 0xc3, 0x7a, 0x8d,
    0x71, 0xdb, 0xaa, 0xf3,  0x95, 0x6e, 0x02, 0xd5,
    0x92, 0xc2, 0x60, 0x21,  0xa1, 0x80, 0xe0, 0xfd,
    0xe2, 0x81, 0x98, 0xef,  0x35, 0x39, 0xad, 0x0b,
    0x93, 0x9f, 0x6c, 0xc5,  0x5c, 0xf4, 0xd6, 0x10,
    0xa9, 0xa5, 0x66, 0xc4,  0xae, 0x26, 0x28, 0x65,
    0x98, 0xf2, 0xba, 0xc3,  0x27, 0x27, 0x94, 0x16,
    0xd4, 0xa4, 0x2b, 0xab,  0xb2, 0x10, 0x9d, 0x2d,
    0xfe, 0xb2, 0x79, 0x46,  0x28, 0xef, 0xf7, 0xed,
    0x40, 0xf8, 0x25, 0x24,  0x15, 0x7e, 0x5f, 0xfd,
    0x09, 0x1d, 0x3a, 0xb0,  0xa9, 0xd1, 0xc9, 0x34,
    0x9b, 0xdd, 0x0d, 0x35,  0x34, 0xa7, 0x08, 0x0a,
    0x36, 0x4a, 0xfa, 0x46,  0xcc, 0xf3, 0x87, 0x8c,
    0x52, 0xde, 0x6b, 0x49,  0x84, 0x3b, 0x5f, 0x27,
    0x95, 0xab, 0x2b, 0x47,  0x12, 0xc6, 0x17, 0xf2,
    0x91, 0xda, 0x4c, 0x10,  0xf7, 0xb7, 0xcd, 0x47,
    0x0d, 0xda, 0x83, 0xaa,  0x93, 0x87, 0x14, 0xb9,
    0x81, 0x63, 0x4c, 0xac,  0x00, 0xfc, 0xc4, 0x66,
    0x70, 0x5c, 0x92, 0x8f,  0x4b, 0xdd, 0x15, 0xc9,
    0x2b, 0x96, 0xec, 0xf4,  0x14, 0x54, 0x68, 0x0c,
    0x60, 0x26, 0xbd, 0xdd,  0x8d, 0xda, 0xe5, 0xf9,
    0xb1, 0xed, 0x19, 0xde,  0xad, 0xf1, 0x5d, 0xa8,
    0xf8, 0xae, 0xd5, 0x90,  0x67, 0xc8, 0xd7, 0x2f,
    0x09, 0x84, 0x83, 0x5c,  0xab, 0x4d, 0x8e, 0x26,
    0xa3, 0x96, 0xa2, 0xed,  0xd2, 0x0f, 0xf8, 0xb9,
    0xbb, 0x1f, 0xd8, 0x30,  0xf8, 0xf8, 0x46, 0xcd,
    0x31, 0x76, 0xa7, 0x62,  0xf7, 0x8d, 0xe2, 0x24,
    0x5e, 0x55, 0x41, 0x09,  0x4b, 0x79, 0xb7, 0x71,
    0xbf, 0x48, 0xa1, 0x73,  0x11, 0xb1, 0xbe, 0xd1,
    0xcf, 0xf0, 0xb1, 0xf5,  0x14, 0xc8, 0x98, 0xa4,
    0x6e, 0x22, 0x8d, 0x98,  0xe6, 0xe3, 0xb8, 0x38,
    0x24, 0x7a, 0x9c, 0xd6,  0x99, 0x35, 0x0c, 0xe8,
    0xc9, 0x34, 0x47, 0xe2,  0x68, 0x60, 0x13, 0xc7,
    0x33, 0x8a, 0xa5, 0x93,  0x73, 0xe5, 0x8c, 0xff,
    0x55, 0xc4, 0xc1, 0x6f,  0xda, 0x62, 0x24, 0x02,
    0x64, 0xdf, 0x82, 0xd8,  0xe0, 0x41, 0x9f, 0x8a,
    0xa0, 0x07, 0xf1, 0x5a,  0x7f, 0x70, 0x63, 0x6b,
    0xc8, 0x3e, 0x94, 0xf0,  0xae, 0xfc, 0x20, 0x5e,
    0x96, 0x86, 0x45, 0x04,  0x3f, 0x4d, 0x12, 0x64,
    0xf3, 0x0f, 0x96, 0x76,  0xdc, 0xd8, 0xce, 0xbe,
    0x4c, 0x8e, 0x0b, 0xbf,  0x38, 0xc2, 0x54, 0x3a,
    0x4c, 0x5e, 0xb4, 0x0a,  0x10, 0xb9, 0xab, 0x2a,
    0xa3, 0x25, 0x64, 0xd8,  0xf8, 0x71, 0xe0, 0x47,
    0x3d, 0x8c, 0x37, 0x4e,  0x58, 0x44, 0x10, 0x4d,
    0x57, 0x82, 0x58, 0xce,  0xb3, 0xaa, 0x44, 0x28,
    0xe5, 0xb2, 0xbe, 0x2d,  0x3a, 0x29, 0xa3, 0xe8,
    0x2f, 0x98, 0xee, 0x88,  0x7d, 0x4c, 0x2a, 0xca,
    0x9c, 0xea, 0xa4, 0x81,  0xcf, 0x30, 0x81, 0xcc,
    0xa0, 0x03, 0x02, 0x01,  0x17, 0xa2, 0x81, 0xc4,
    0x04, 0x81, 0xc1, 0x36,  0xeb, 0xaf, 0x12, 0x31,
    0x90, 0xe6, 0xc5, 0x54,  0x9f, 0xc7, 0x4b, 0x16,
    0xbd, 0xdd, 0x61, 0xd3,  0x24, 0x78, 0x92, 0xec,
    0x75, 0x04, 0x2e, 0xd3,  0xc2, 0xd6, 0x5e, 0xce,
    0x31, 0xbb, 0xec, 0x3a,  0xd7, 0xa4, 0x0a, 0x33,
    0x99, 0xb4, 0xc8, 0x40,  0x67, 0x7e, 0xce, 0xfc,
    0xbe, 0x94, 0x23, 0x0b,  0x49, 0xca, 0xc5, 0x48,
    0xbb, 0xe9, 0x7d, 0x25,  0xa7, 0x20, 0xe5, 0x03,
    0x99, 0x20, 0x87, 0xfb,  0x75, 0xc6, 0xa3, 0x1e,
    0x74, 0xc7, 0xa5, 0x50,  0xbb, 0x00, 0xc5, 0x87,
    0xab, 0xd7, 0xe4, 0xd3,  0xac, 0x40, 0xba, 0xd0,
    0xed, 0xe1, 0x99, 0xeb,  0x61, 0x0e, 0x56, 0x3c,
    0x34, 0x7e, 0xc0, 0xdf,  0xbb, 0x57, 0x1f, 0x28,
    0xac, 0xb4, 0x44, 0x55,  0xbe, 0x2e, 0x87, 0x15,
    0x7c, 0x3c, 0x84, 0xf0,  0x1a, 0xce, 0xab, 0xa8,
    0x85, 0xfa, 0x5e, 0x5e,  0x87, 0xd6, 0xed, 0xb1,
    0x79, 0xf4, 0x3c, 0x19,  0x07, 0x6a, 0x43, 0x16,
    0x60, 0x5e, 0xcb, 0x31,  0x0b, 0x04, 0x3b, 0xc5,
    0xce, 0x8c, 0xf7, 0x58,  0xcb, 0x2a, 0x58, 0x3f,
    0xda, 0x2d, 0x48, 0x83,  0x9a, 0xec, 0x35, 0x8a,
    0xc3, 0x2d, 0x93, 0xfc,  0x25, 0xb2, 0xb6, 0x07,
    0xfb, 0xd7, 0xe6, 0x25,  0xe9, 0xd2, 0x8e, 0xf1,
    0xb8, 0xfa, 0x94, 0x41,  0xb9, 0x75, 0x7b, 0xe1,
    0x2c, 0x8a, 0x19, 0xe2,  0x4f, 0x38, 0x5d, 0x5a,
    0x2d, 0x1a, 0x68, 0x2f,  0x00, 0xff, 0xff, 0xff
 };


unsigned char ucBadSpnegoInitToken [] =
{
    0x60, 0x82, 0x05, 0xf0,  0x06, 0x06, 0x2b, 0x06,	
    0x01, 0x05, 0x05, 0x02,  0xa0, 0x82, 0x05, 0xe4,	
    0xFF, 0x82, 0x05, 0xe0,  0xFF, 0x24, 0x30, 0x22,	
    0x06, 0x09, 0x2a, 0x86,  0x48, 0x82, 0xf7, 0x12,	
    0x01, 0x02, 0x02, 0x06,  0x09, 0x2a, 0x86, 0x48,	
    0x86, 0xf7, 0x12, 0x01,  0x02, 0x02, 0x06, 0x0a,	
    0x2a, 0x86, 0x48, 0x86,  0xf7, 0xFF, 0x01, 0x02,
    0x02, 0x03, 0xa2, 0x82,  0x05, 0xb6, 0x04, 0x82,	
    0x05, 0xb2, 0x60, 0x82,  0x05, 0xae, 0x06, 0x09,
    0xFF, 0x86, 0x48, 0x86,  0xf7, 0x12, 0x01, 0x02,
    0x02, 0x01, 0x00, 0x6e,  0x82, 0x05, 0x9d, 0x30,
    0x82, 0x05, 0xFF, 0xa0,  0x03, 0x02, 0x01, 0x05,
    0xa1, 0x03, 0x02, 0x01,  0x0e, 0xa2, 0x07, 0x03,
    0x05, 0x00, 0x20, 0x00,  0x00, 0x00, 0xa3, 0x82,
    0x04, 0xb0, 0x61, 0x82,  0x04, 0xac, 0x30, 0x82,
    0x04, 0xa8, 0xa0, 0x03,  0x02, 0x01, 0x05, 0xa1,
    0x21, 0x1b, 0x1f, 0x4e,  0x4f, 0x52, 0x54, 0x48,
    0x41, 0x4d, 0x45, 0x52,  0x49, 0x43, 0x41, 0x2e,
    0x43, 0x4f, 0x52, 0x50,  0x2e, 0x4d, 0x49, 0x43,
    0x52, 0x4f, 0x53, 0x4f,  0x46, 0x54, 0x2e, 0x43,
    0x4f, 0x4d, 0xa2, 0x13,  0x30, 0x11, 0xa0, 0x03,
    0x02, 0x01, 0x01, 0xa1,  0x0a, 0x30, 0x08, 0x1b,
    0x06, 0x73, 0x61, 0x6e,  0xFF, 0x65, 0x73, 0xa3,
    0x82, 0x04, 0x67, 0x30,  0x82, 0x04, 0x63, 0xa0,
    0x03, 0x02, 0x01, 0x17,  0xa2, 0x82, 0x04, 0x5a,
    0x04, 0x82, 0x04, 0x56,  0x66, 0x16, 0x0e, 0x7a,
    0xd1, 0x1f, 0xc0, 0x5f,  0xdf, 0xFF, 0x70, 0xec,
    0x22, 0xc5, 0xf3, 0x34,  0x6b, 0x64, 0x5d, 0xe4,
    0xFF, 0x94, 0x2f, 0x2e,  0xfa, 0x3e, 0xc2, 0x42,
    0x53, 0xc4, 0x33, 0xa8,  0xFF, 0x0a, 0xeb, 0x55,
    0x84, 0xed, 0xef, 0x46,  0xc3, 0xfb, 0x20, 0xf9,
    0x39, 0x17, 0xa3, 0xb1,  0x1f, 0x72, 0xa0, 0x22,
    0x70, 0xd0, 0xbe, 0x75,  0xac, 0x11, 0x16, 0x1c,
    0x2c, 0x67, 0x32, 0x8d,  0x80, 0x6b, 0xd9, 0x25,
    0x11, 0xb2, 0x01, 0x67,  0x2d, 0xb1, 0x06, 0x58,
    0x5b, 0x0c, 0xac, 0x66,  0xd0, 0x1c, 0xac, 0x59,
    0xff, 0x89, 0xc3, 0x31,  0xa1, 0x3c, 0x40, 0x4f,
    0x90, 0x06, 0x05, 0x5f,  0xa6, 0xbb, 0xcf, 0x75,
    0xc0, 0xa1, 0x01, 0x30,  0x6b, 0x7a, 0xaa, 0x24,
    0x50, 0xcc, 0x5c, 0xa8,  0x3f, 0xb0, 0xec, 0x81,
    0xd5, 0x37, 0x3f, 0x78,  0x7b, 0x99, 0x26, 0x2d,
    0xf2, 0x51, 0xb4, 0xf5,  0xf7, 0x47, 0xb1, 0xa9,
    0xbe, 0x24, 0x5a, 0x64,  0xce, 0x52, 0xa5, 0x7c,
    0x0b, 0xc8, 0x0b, 0xfc,  0x2f, 0x57, 0x74, 0x50,
    0x86, 0x6a, 0x0b, 0xc7,  0x9d, 0xa6, 0xfd, 0xa5,
    0x2b, 0x11, 0xad, 0xda,  0xc7, 0x58, 0x8d, 0xc8,
    0x44, 0xac, 0x9a, 0x2e,  0x14, 0x36, 0x52, 0xee,
    0x5c, 0xb8, 0xea, 0x92,  0x1a, 0xa6, 0xf4, 0x14,
    0x7e, 0x02, 0xe1, 0x05,  0xa4, 0xdf, 0xcd, 0x5c,
    0xf8, 0xad, 0xc1, 0xc4,  0xc1, 0xec, 0xbd, 0x8d,
    0x46, 0x1b, 0x35, 0xb3,  0x37, 0x24, 0xa0, 0xdf,
    0x9c, 0xa3, 0xef, 0xad,  0xf9, 0x18, 0xc6, 0x45,
    0xc6, 0xc3, 0x73, 0x36,  0x08, 0x71, 0x76, 0x95,
    0xe1, 0xf1, 0xad, 0xe4,  0xed, 0x28, 0x0b, 0xdc,
    0xfa, 0xb0, 0xb5, 0xa3,  0x80, 0x1c, 0x93, 0xd1,
    0x20, 0xc3, 0xde, 0x6b,  0xf0, 0x0d, 0xec, 0x63,
    0x1f, 0x51, 0xc8, 0xff,  0xb3, 0x58, 0x49, 0x94,
    0xf2, 0xca, 0x53, 0x20,  0x7d, 0x32, 0x65, 0x48,
    0x58, 0xfa, 0x8d, 0x2d,  0xe6, 0xf0, 0x08, 0x3d,
    0xac, 0x43, 0x60, 0x3d,  0xa1, 0x63, 0x92, 0xf5,
    0x70, 0x8b, 0xa2, 0x55,  0x4e, 0x89, 0x56, 0x40,
    0xe6, 0xfd, 0xcb, 0x0a,  0x62, 0x09, 0x19, 0x66,
    0xd4, 0x72, 0x64, 0x06,  0x12, 0x82, 0x1e, 0x8c,
    0xa5, 0xbb, 0x95, 0x9a,  0x09, 0x6e, 0xe8, 0x8a,
    0x25, 0xd3, 0x55, 0xa9,  0xba, 0x8f, 0xfe, 0x88,
    0x7e, 0xfb, 0xe8, 0xbe,  0x96, 0x65, 0xef, 0x1c,
    0x2b, 0xa9, 0x96, 0x0a,  0x51, 0x5f, 0xec, 0xf7,
    0xbd, 0xdf, 0xed, 0xa0,  0x45, 0x0e, 0x69, 0xa9,
    0xa8, 0x2f, 0x94, 0x79,  0x59, 0x24, 0x72, 0x8c,
    0x66, 0x91, 0xc4, 0x92,  0xb7, 0x99, 0x50, 0x81,
    0x22, 0xef, 0x3c, 0x2c,  0xf0, 0x4b, 0x07, 0x03,
    0x82, 0x84, 0xad, 0xf9,  0x54, 0x90, 0x79, 0xdb,
    0xad, 0xc0, 0x5e, 0x59,  0x8e, 0xd1, 0x74, 0xf4,
    0x7f, 0xf7, 0x36, 0xa8,  0x47, 0x39, 0xc3, 0xd8,
    0x3a, 0xac, 0xd4, 0x6d,  0xd6, 0xa9, 0x2d, 0x86,
    0x42, 0x0a, 0xc0, 0x74,  0x4a, 0x1a, 0x32, 0x29,
    0xad, 0x55, 0xda, 0x3d,  0x4f, 0x25, 0x49, 0x4a,
    0x6d, 0xc4, 0x39, 0x6a,  0xe5, 0x4b, 0x49, 0x68,
    0xc5, 0xfc, 0xcf, 0x5e,  0x55, 0x15, 0x30, 0x0a,
    0xd6, 0x14, 0xe3, 0x5a,  0xef, 0x4d, 0x82, 0xeb,
    0x9c, 0xf4, 0x1d, 0xca,  0x16, 0x4a, 0xd5, 0xea,
    0x99, 0x20, 0x58, 0x5a,  0xb8, 0x65, 0xd1, 0xee,
    0x85, 0x4b, 0x31, 0xbc,  0x9a, 0x72, 0xf0, 0xf7,
    0x97, 0xa6, 0x05, 0x1d,  0x6a, 0xce, 0x85, 0x37,
    0x29, 0x3b, 0x02, 0x2c,  0x33, 0x4a, 0x9e, 0x0e,
    0xf8, 0xe1, 0xa5, 0x23,  0x82, 0x52, 0xae, 0xa7,
    0xe2, 0xf8, 0xef, 0xaa,  0x5b, 0x23, 0xc4, 0xb5,
    0x9d, 0x6a, 0x05, 0x76,  0x97, 0xab, 0x6a, 0x54,
    0x22, 0x88, 0xd4, 0x16,  0x0a, 0xc3, 0x24, 0x57,
    0x06, 0x34, 0x44, 0x8a,  0x06, 0xb1, 0x3e, 0x0d,
    0x60, 0xc7, 0xc2, 0x84,  0x01, 0x8d, 0x6a, 0x4f,
    0x25, 0x7a, 0x6e, 0x09,  0xa1, 0x27, 0xdf, 0x1a,
    0xad, 0x83, 0x7d, 0xc8,  0xe7, 0x0f, 0x46, 0xae,
    0x90, 0xb2, 0x2d, 0x37,  0x08, 0x8e, 0xb8, 0xa0,
    0x77, 0x4f, 0x5f, 0x75,  0x88, 0xa7, 0xeb, 0xa3,
    0xc6, 0x01, 0xb3, 0xba,  0xc6, 0x86, 0xe9, 0x60,
    0xa6, 0x4d, 0x7e, 0x8d,  0x09, 0xc5, 0xf5, 0xff,
    0xde, 0x46, 0x2c, 0x37,  0xa2, 0xea, 0xf5, 0x99,
    0x6f, 0x3a, 0x9a, 0x7c,  0x69, 0x66, 0x2a, 0x2b,
    0x64, 0xba, 0x83, 0xe2,  0x4f, 0xef, 0xc7, 0x3e,
    0x68, 0x50, 0x3c, 0x8d,  0x13, 0x5c, 0x51, 0x7b,
    0x0d, 0x8f, 0x48, 0xef,  0x64, 0x8a, 0xc9, 0x0f,
    0x3a, 0x39, 0xcb, 0x05,  0x3a, 0x5f, 0xeb, 0xb5,
    0x8a, 0xc7, 0x32, 0x77,  0x86, 0x98, 0x6a, 0xa0,
    0x4e, 0xca, 0xcf, 0x2f,  0x95, 0xf1, 0x01, 0x29,
    0x14, 0x6c, 0xc3, 0x70,  0x34, 0x2d, 0xb0, 0xc6,
    0x42, 0xad, 0x5c, 0x11,  0xbf, 0xa7, 0x9a, 0xdc,
    0xf9, 0x1d, 0x4a, 0xdd,  0x15, 0x3a, 0x93, 0xaa,
    0xc3, 0x7f, 0xa6, 0xbd,  0x97, 0xd1, 0x59, 0x41,
    0x5a, 0xf5, 0x7c, 0x92,  0x4b, 0x6e, 0xf7, 0x59,
    0xbe, 0x86, 0x3f, 0xfe,  0x00, 0x24, 0xe9, 0x28,
    0x38, 0xb6, 0x74, 0xb5,  0x68, 0x91, 0x40, 0x99,
    0x41, 0xd8, 0xc3, 0xf9,  0x6a, 0x9b, 0xb2, 0x3a,
    0xd3, 0x23, 0x67, 0x88,  0x47, 0x8c, 0x51, 0x57,
    0x52, 0x63, 0x1f, 0x7d,  0x70, 0xf1, 0xe0, 0x4f,
    0x95, 0x85, 0x16, 0x3a,  0x3f, 0x50, 0xa3, 0xf2,
    0x05, 0x1e, 0xf5, 0xae,  0xbb, 0x24, 0x59, 0x2f,
    0x91, 0xdb, 0xca, 0x4c,  0x87, 0xc3, 0x7a, 0x8d,
    0x71, 0xdb, 0xaa, 0xf3,  0x95, 0x6e, 0x02, 0xd5,
    0x92, 0xc2, 0x60, 0x21,  0xa1, 0x80, 0xe0, 0xfd,
    0xe2, 0x81, 0x98, 0xef,  0x35, 0x39, 0xad, 0x0b,
    0x93, 0x9f, 0x6c, 0xc5,  0x5c, 0xf4, 0xd6, 0x10,
    0xa9, 0xa5, 0x66, 0xc4,  0xae, 0x26, 0x28, 0x65,
    0x98, 0xf2, 0xba, 0xc3,  0x27, 0x27, 0x94, 0x16,
    0xd4, 0xa4, 0x2b, 0xab,  0xb2, 0x10, 0x9d, 0x2d,
    0xfe, 0xb2, 0x79, 0x46,  0x28, 0xef, 0xf7, 0xed,
    0x40, 0xf8, 0x25, 0x24,  0x15, 0x7e, 0x5f, 0xfd,
    0x09, 0x1d, 0x3a, 0xb0,  0xa9, 0xd1, 0xc9, 0x34,
    0x9b, 0xdd, 0x0d, 0x35,  0x34, 0xa7, 0x08, 0x0a,
    0x36, 0x4a, 0xfa, 0x46,  0xcc, 0xf3, 0x87, 0x8c,
    0x52, 0xde, 0x6b, 0x49,  0x84, 0x3b, 0x5f, 0x27,
    0x95, 0xab, 0x2b, 0x47,  0x12, 0xc6, 0x17, 0xf2,
    0x91, 0xda, 0x4c, 0x10,  0xf7, 0xb7, 0xcd, 0x47,
    0x0d, 0xda, 0x83, 0xaa,  0x93, 0x87, 0x14, 0xb9,
    0x81, 0x63, 0x4c, 0xac,  0x00, 0xfc, 0xc4, 0x66,
    0x70, 0x5c, 0x92, 0x8f,  0x4b, 0xdd, 0x15, 0xc9,
    0x2b, 0x96, 0xec, 0xf4,  0x14, 0x54, 0x68, 0x0c,
    0x60, 0x26, 0xbd, 0xdd,  0x8d, 0xda, 0xe5, 0xf9,
    0xb1, 0xed, 0x19, 0xde,  0xad, 0xf1, 0x5d, 0xa8,
    0xf8, 0xae, 0xd5, 0x90,  0x67, 0xc8, 0xd7, 0x2f,
    0x09, 0x84, 0x83, 0x5c,  0xab, 0x4d, 0x8e, 0x26,
    0xa3, 0x96, 0xa2, 0xed,  0xd2, 0x0f, 0xf8, 0xb9,
    0xbb, 0x1f, 0xd8, 0x30,  0xf8, 0xf8, 0x46, 0xcd,
    0x31, 0x76, 0xa7, 0x62,  0xf7, 0x8d, 0xe2, 0x24,
    0x5e, 0x55, 0x41, 0x09,  0x4b, 0x79, 0xb7, 0x71,
    0xbf, 0x48, 0xa1, 0x73,  0x11, 0xb1, 0xbe, 0xd1,
    0xcf, 0xf0, 0xb1, 0xf5,  0x14, 0xc8, 0x98, 0xa4,
    0x6e, 0x22, 0x8d, 0x98,  0xe6, 0xe3, 0xb8, 0x38,
    0x24, 0x7a, 0x9c, 0xd6,  0x99, 0x35, 0x0c, 0xe8,
    0xc9, 0x34, 0x47, 0xe2,  0x68, 0x60, 0x13, 0xc7,
    0x33, 0x8a, 0xa5, 0x93,  0x73, 0xe5, 0x8c, 0xff,
    0x55, 0xc4, 0xc1, 0x6f,  0xda, 0x62, 0x24, 0x02,
    0x64, 0xdf, 0x82, 0xd8,  0xe0, 0x41, 0x9f, 0x8a,
    0xa0, 0x07, 0xf1, 0x5a,  0x7f, 0x70, 0x63, 0x6b,
    0xc8, 0x3e, 0x94, 0xf0,  0xae, 0xfc, 0x20, 0x5e,
    0x96, 0x86, 0x45, 0x04,  0x3f, 0x4d, 0x12, 0x64,
    0xf3, 0x0f, 0x96, 0x76,  0xdc, 0xd8, 0xce, 0xbe,
    0x4c, 0x8e, 0x0b, 0xbf,  0x38, 0xc2, 0x54, 0x3a,
    0x4c, 0x5e, 0xb4, 0x0a,  0x10, 0xb9, 0xab, 0x2a,
    0xa3, 0x25, 0x64, 0xd8,  0xf8, 0x71, 0xe0, 0x47,
    0x3d, 0x8c, 0x37, 0x4e,  0x58, 0x44, 0x10, 0x4d,
    0x57, 0x82, 0x58, 0xce,  0xb3, 0xaa, 0x44, 0x28,
    0xe5, 0xb2, 0xbe, 0x2d,  0x3a, 0x29, 0xa3, 0xe8,
    0x2f, 0x98, 0xee, 0x88,  0x7d, 0x4c, 0x2a, 0xca,
    0x9c, 0xea, 0xa4, 0x81,  0xcf, 0x30, 0x81, 0xcc,
    0xa0, 0x03, 0x02, 0x01,  0x17, 0xa2, 0x81, 0xc4,
    0x04, 0x81, 0xc1, 0x36,  0xeb, 0xaf, 0x12, 0x31,
    0x90, 0xe6, 0xc5, 0x54,  0x9f, 0xc7, 0x4b, 0x16,
    0xbd, 0xdd, 0x61, 0xd3,  0x24, 0x78, 0x92, 0xec,
    0x75, 0x04, 0x2e, 0xd3,  0xc2, 0xd6, 0x5e, 0xce,
    0x31, 0xbb, 0xec, 0x3a,  0xd7, 0xa4, 0x0a, 0x33,
    0x99, 0xb4, 0xc8, 0x40,  0x67, 0x7e, 0xce, 0xfc,
    0xbe, 0x94, 0x23, 0x0b,  0x49, 0xca, 0xc5, 0x48,
    0xbb, 0xe9, 0x7d, 0x25,  0xa7, 0x20, 0xe5, 0x03,
    0x99, 0x20, 0x87, 0xfb,  0x75, 0xc6, 0xa3, 0x1e,
    0x74, 0xc7, 0xa5, 0x50,  0xbb, 0x00, 0xc5, 0x87,
    0xab, 0xd7, 0xe4, 0xd3,  0xac, 0x40, 0xba, 0xd0,
    0xed, 0xe1, 0x99, 0xeb,  0x61, 0x0e, 0x56, 0x3c,
    0x34, 0x7e, 0xc0, 0xdf,  0xbb, 0x57, 0x1f, 0x28,
    0xac, 0xb4, 0x44, 0x55,  0xbe, 0x2e, 0x87, 0x15,
    0x7c, 0x3c, 0x84, 0xf0,  0x1a, 0xce, 0xab, 0xa8,
    0x85, 0xfa, 0x5e, 0x5e,  0x87, 0xd6, 0xed, 0xb1,
    0x79, 0xf4, 0x3c, 0x19,  0x07, 0x6a, 0x43, 0x16,
    0x60, 0x5e, 0xcb, 0x31,  0x0b, 0x04, 0x3b, 0xc5,
    0xce, 0x8c, 0xf7, 0x58,  0xcb, 0x2a, 0x58, 0x3f,
    0xda, 0x2d, 0x48, 0x83,  0x9a, 0xec, 0x35, 0x8a,
    0xc3, 0x2d, 0x93, 0xfc,  0x25, 0xb2, 0xb6, 0x07,
    0xfb, 0xd7, 0xe6, 0x25,  0xe9, 0xd2, 0x8e, 0xf1,
    0xb8, 0xfa, 0x94, 0x41,  0xb9, 0x75, 0x7b, 0xe1,
    0x2c, 0x8a, 0x19, 0xe2,  0x4f, 0x38, 0x5d, 0x5a,
    0x2d, 0x1a, 0x68, 0x2f,  0x00, 0xff, 0xff, 0xff
 };

