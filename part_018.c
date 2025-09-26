      _guard_check_icall(param_1 + 0x84,FUN_006eec00,auStack_d8);
      (*pcVar1)();
    }
    uStack_38 = 0;
    uStack_14 = 0xffffffff;
    func_0x006e1850();
    *unaff_FS_OFFSET = iStack_1c;
    FUN_008ab370();
    return;
  }
  func_0x0062ce80();
  uStack_14 = CONCAT31(uStack_14._1_3_,9);
  func_0x00635070();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_006decb0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_60 [44];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efd76d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_60,0,0x48);
  func_0x006c4c80(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x30);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006d9fe0();
  if (param_2 != '\0') {
    func_0x006dcb90();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006bfa00();
  iStack_8 = 0xffffffff;
  func_0x006d9fe0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006deda0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_60 [44];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efd76d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_60,0,0x48);
  func_0x006c4c80(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x30);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006d9fe0();
  if (param_2 != '\0') {
    func_0x006dc9b0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006bfa00();
  iStack_8 = 0xffffffff;
  func_0x006d9fe0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006dee90(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_12c [280];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efd7bb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_12c,0,0x114);
  func_0x006d5850(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006d9f10();
  if (param_2 != '\0') {
    func_0x006dc8e0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006cea60();
  uStack_8 = 0xffffffff;
  func_0x006d9f10();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006def60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [236];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efd82c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_110,0,0xf8);
  func_0x006ba280(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1c = *(undefined4 *)(param_1 + 0xf8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006d9e30();
  if (param_2 != '\0') {
    func_0x006b4e20(uStack_24,uStack_1c,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b2a50();
  uStack_8 = 0xffffffff;
  func_0x006d9e30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_006df070(undefined4 param_1,int param_2)

{
  func_0x006b7440(*(undefined8 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x7c),
                  *(undefined4 *)(param_2 + 0x80),param_1);
  return;
}



void __thiscall FUN_006df0a0(undefined4 param_1,int param_2)

{
  func_0x006b6f30(*(undefined8 *)(param_2 + 0x100),*(undefined4 *)(param_2 + 0x108),
                  *(undefined4 *)(param_2 + 0x10c),param_1);
  return;
}



void __thiscall FUN_006df0d0(undefined4 param_1,int param_2)

{
  func_0x006b6900(*(undefined8 *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x118),
                  *(undefined4 *)(param_2 + 0x11c),param_1);
  return;
}



void FUN_006df100(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [80];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efd895;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_74,0,0x5c);
  func_0x006b7920(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x54);
  uStack_1c = *(undefined4 *)(param_1 + 0x5c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006d9d50();
  if (param_2 != '\0') {
    func_0x006bd3d0(uStack_24,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a04a0();
  uStack_8 = 0xffffffff;
  func_0x006d9d50();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006df1f0(int param_1)

{
  func_0x006a1dd0(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 0x54),1);
  return;
}



void FUN_006df220(int param_1)

{
  func_0x006a21d0(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 0x54),1);
  return;
}



int __thiscall FUN_006df670(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc884;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x1c8) != '\0') &&
     (*(undefined1 **)(param_1 + 0x1c4) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x1c4) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006dbf00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1d8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006df710(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc8e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x138) != '\0') &&
     (*(undefined1 **)(param_1 + 0x134) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x134) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006dbfb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x144);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006df7b0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc944;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(undefined1 **)(param_1 + 300) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 300) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006dc060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x13c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006df850(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc9a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x148) != '\0') &&
     (*(undefined1 **)(param_1 + 0x144) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x144) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006dc110();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x154);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_006e1fa0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [272];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efe6a2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x14c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x168);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115d5b0;
  }
  memset(auStack_17c,0,0x120);
  func_0x006d40a0(param_2 + 0x3c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006e1e60();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006e64d0(auStack_17c,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006c9e70();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e1e60();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e2270(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1ac [316];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efe7c2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x17c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x198);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115cd80;
  }
  memset(auStack_1ac,0,0x14c);
  func_0x006d3f60(param_2 + 0x40);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006e2130();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006e66e0(auStack_1ac,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006c9de0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e2130();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e2550(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_19c [300];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efe8e2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x16c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x188);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115c82c;
  }
  memset(auStack_19c,0,0x13c);
  func_0x006d3e20(param_2 + 0x40);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006e2410();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006e68f0(auStack_19c,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006c9d50();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e2410();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e2830(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [124];
  undefined1 *puStack_80;
  char cStack_7c;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efea32;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 200,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xe4);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d520;
  }
  memset(auStack_fc,0,0x9c);
  func_0x006d3cf0(param_2 + 0x3c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006e26f0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006c85a0(uStack_70,uStack_68,uStack_64);
    }
    else {
      func_0x006eecf0(auStack_fc);
    }
  }
  if ((cStack_7c != '\0') && (puStack_80 != (undefined1 *)0x0)) {
    *puStack_80 = 0;
  }
  iStack_8._0_1_ = 0xc;
  func_0x0068de80();
  iStack_8._0_1_ = 7;
  func_0x006c4560();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e26f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e2b70(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_214 [424];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efeb52;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x260,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x27c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115d954;
  }
  memset(auStack_214,0,0x1b8);
  func_0x006d3bc0(param_2 + 0xb8);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006e2a30();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006e6b00(auStack_214,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006c9c30();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e2a30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e5260(int param_1)

{
  func_0x006a97a0(*(undefined8 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),
                  *(undefined4 *)(param_1 + 0x30),0);
  return;
}



void FUN_006e5290(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [180];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f005a7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_e4;
  func_0x006b33e0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0xb4);
  uStack_2c = *(undefined8 *)(param_1 + 0xb8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc0);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006eb170(auStack_e4);
  uStack_14 = 0;
  puStack_1c = auStack_e4;
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006e52a0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [220];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eff7ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_110,0,0xf8);
  func_0x006d91c0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xe0);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006dd530();
  if (param_2 != '\0') {
    func_0x006e1570();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006bed90();
  iStack_8 = 0xffffffff;
  func_0x006dd530();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e53c0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [220];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eff88d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_110,0,0xf8);
  func_0x006d92b0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xe0);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006dd420();
  if (param_2 != '\0') {
    func_0x006e14d0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006becd0();
  iStack_8 = 0xffffffff;
  func_0x006dd420();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e54e0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [288];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eff904;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_154,0,0x13c);
  func_0x006d9860(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006dd320();
  if (param_2 != '\0') {
    func_0x006e1410();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b7a70();
  iStack_8 = 0xffffffff;
  func_0x006dd320();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e55e0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [272];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eff974;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_144,0,300);
  func_0x006d97c0(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006dd220();
  if (param_2 != '\0') {
    func_0x006e1350();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b7a70();
  iStack_8 = 0xffffffff;
  func_0x006dd220();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e56e0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b8 [164];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eff9bb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_b8,0,0xa0);
  func_0x006d9720(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006dd150();
  if (param_2 != '\0') {
    func_0x006e1110();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006d4b90();
  uStack_8 = 0xffffffff;
  func_0x006dd150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e57b0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_9c [100];
  undefined1 *puStack_38;
  char cStack_34;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00effa56;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_9c,0,0x84);
  func_0x006be460(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x80);
  uStack_28 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c = *(undefined4 *)(param_1 + 0x84);
  iStack_8 = CONCAT31((int3)((uint)iStack_8 >> 8),2);
  func_0x006dd040();
  if (param_2 != '\0') {
    func_0x006b7440(uStack_28,uStack_20,uStack_1c);
  }
  if ((cStack_34 != '\0') && (puStack_38 != (undefined1 *)0x0)) {
    *puStack_38 = 0;
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 4;
  func_0x0068de80();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b4d80();
  iStack_8 = 0xffffffff;
  func_0x006dd040();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e58f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_128 [256];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00effaa6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_128,0,0x110);
  func_0x006be380(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x10c);
  uStack_28 = *(undefined8 *)(param_1 + 0x104);
  uStack_1c = *(undefined4 *)(param_1 + 0x110);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006dcf70();
  if (param_2 != '\0') {
    func_0x006b6f30(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b7a70();
  uStack_8 = 0xffffffff;
  func_0x006dcf70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e5a00(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_13c [272];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00effaf6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_13c,0,0x120);
  func_0x006be2a0(param_1 + 4,uVar1);
  uStack_24 = *(undefined4 *)(param_1 + 0x11c);
  uStack_2c = *(undefined8 *)(param_1 + 0x114);
  uStack_20 = *(undefined4 *)(param_1 + 0x120);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006dcea0();
  if (param_2 != '\0') {
    func_0x006b6900(uStack_2c,uStack_24,uStack_20);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b7a70();
  uStack_8 = 0xffffffff;
  func_0x006dcea0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e5b10(int param_1)

{
  func_0x006bb4d0(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0),0xffffffff,0);
  return;
}



void FUN_006e5b40(int param_1)

{
  func_0x006bac80(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100),0xffffffff,0);
  return;
}



void FUN_006e5b70(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [84];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00effb53;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_7c,0,100);
  func_0x006b1be0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x58);
  uStack_24 = *(undefined8 *)(param_1 + 0x5c);
  uStack_1c = *(undefined4 *)(param_1 + 100);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006dcdd0();
  if (param_2 != '\0') {
    func_0x006a1dd0(uStack_24,uStack_1c,uStack_28,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b1e20();
  uStack_8 = 0xffffffff;
  func_0x006dcdd0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e5c60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [84];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00effb53;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_7c,0,100);
  func_0x006b1d70(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x58);
  uStack_24 = *(undefined8 *)(param_1 + 0x5c);
  uStack_1c = *(undefined4 *)(param_1 + 100);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006dcdd0();
  if (param_2 != '\0') {
    func_0x006a21d0(uStack_24,uStack_1c,uStack_28,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b1e20();
  uStack_8 = 0xffffffff;
  func_0x006dcdd0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006e5d50(undefined4 param_1)

{
  func_0x006b5db0(param_1);
  return;
}



void __fastcall FUN_006e5d60(undefined4 param_1)

{
  func_0x006b5d60(param_1);
  return;
}



void __fastcall FUN_006e5d70(undefined4 param_1)

{
  func_0x006b5d10(param_1);
  return;
}



void __fastcall FUN_006e5d80(undefined4 param_1)

{
  func_0x006b5cc0(param_1);
  return;
}



int __thiscall FUN_006e6dd0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x118) != '\0') &&
     (*(undefined1 **)(param_1 + 0x114) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x114) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,300);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006e6e70(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x118) != '\0') &&
     (*(undefined1 **)(param_1 + 0x114) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x114) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x124);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006e6f10(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd9de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x7c) != '\0') && (*(undefined1 **)(param_1 + 0x78) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 0x78) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df990();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x88);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006e6fa0(undefined4 param_1,byte param_2)

{
  func_0x006dbf00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1b8);
  }
  return param_1;
}



undefined4 __thiscall FUN_006e7030(undefined4 param_1,byte param_2)

{
  func_0x006dbfb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x128);
  }
  return param_1;
}



undefined4 __thiscall FUN_006e70c0(undefined4 param_1,byte param_2)

{
  func_0x006dc060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x120);
  }
  return param_1;
}



undefined4 __thiscall FUN_006e7150(undefined4 param_1,byte param_2)

{
  func_0x006dc110();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x138);
  }
  return param_1;
}



void FUN_006e9160(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [248];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f008c9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x128,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x144);
  iStack_8._0_1_ = 7;
  memset(auStack_154,0,0x104);
  func_0x006e8c90(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x006e9070();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006cf9b0(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x006f3e00(auStack_154);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006a36a0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e9070();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006e93f0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1e4 [392];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [56];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f009de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x1b8,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1d4);
  iStack_8._0_1_ = 7;
  memset(auStack_1e4,0,0x198);
  func_0x006e8bd0(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x006e9300();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006eb350(auStack_1e4,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006ba870();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006e9300();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea2c0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00df5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x40);
  func_0x0065d0b0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x34);
  uStack_24 = *(undefined8 *)(param_1 + 0x38);
  uStack_1c = *(undefined4 *)(param_1 + 0x40);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006e1d80();
  if (param_2 != '\0') {
    func_0x006a97a0(uStack_24,uStack_1c,uStack_28,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x006e1d80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea3b0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f8 [196];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f00e6f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_f8,0,0xe0);
  func_0x006dc740(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006e1c70();
  if (param_2 != '\0') {
    func_0x006e8b00();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006a36a0();
  iStack_8 = 0xffffffff;
  func_0x006e1c70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea4c0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [232];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00edf;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_10c,0,0xf4);
  func_0x006d0200(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xec);
  uStack_1c = *(undefined4 *)(param_1 + 0xf4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006e1b90();
  if (param_2 != '\0') {
    func_0x006bb4d0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x006e1b90();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea5d0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_124 [248];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00f4f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_124,0,0x104);
  func_0x006d0160(param_1 + 4,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0xfc);
  uStack_24 = *(undefined4 *)(param_1 + 0x104);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006e1ab0();
  if (param_2 != '\0') {
    func_0x006bac80(uStack_2c,uStack_24,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x006e1ab0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea6e0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [168];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00fbc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_bc,0,0xa4);
  func_0x006ceb90(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006e19d0();
  if (param_2 != '\0') {
    func_0x006b5db0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b4cf0();
  uStack_8 = 0xffffffff;
  func_0x006e19d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea7c0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [168];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00fbc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_bc,0,0xa4);
  func_0x006ceb90(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006e19d0();
  if (param_2 != '\0') {
    func_0x006b5d60();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b4cf0();
  uStack_8 = 0xffffffff;
  func_0x006e19d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea8a0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [168];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00fbc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_bc,0,0xa4);
  func_0x006ceaf0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006e19d0();
  if (param_2 != '\0') {
    func_0x006b5d10();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b4cf0();
  uStack_8 = 0xffffffff;
  func_0x006e19d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ea980(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [168];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f00fbc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_bc,0,0xa4);
  func_0x006ceaf0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006e19d0();
  if (param_2 != '\0') {
    func_0x006b5cc0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b4cf0();
  uStack_8 = 0xffffffff;
  func_0x006e19d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006eaa60(undefined4 param_1)

{
  func_0x006c0140(0,0,0,param_1);
  return;
}



void __fastcall FUN_006eaa90(undefined4 param_1)

{
  func_0x006bfca0(0,0,0,param_1);
  return;
}



undefined4 __thiscall FUN_006eb960(undefined4 param_1,byte param_2)

{
  func_0x006df8f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x108);
  }
  return param_1;
}



undefined4 __thiscall FUN_006eb990(undefined4 param_1,byte param_2)

{
  func_0x006df990();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x6c);
  }
  return param_1;
}



void FUN_006ed310(int param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_194;
  undefined1 auStack_18c [296];
  undefined8 uStack_64;
  uint uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f01c28;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_194 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_20 = uStack_194;
  uStack_14 = uVar2;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x168,uVar2);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x184);
  iStack_8._0_1_ = 7;
  uVar2 = *(uint *)(param_2 + 0x28);
  if (((uVar2 & 1) != 0) && ((uVar2 != 1 || (*(int *)(param_2 + 0x20) != 0)))) {
    uStack_194 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = uVar2;
    uStack_20 = uStack_194;
  }
  iVar3 = (int)uStack_20;
  if (uVar4 == 1) {
    iVar3 = (uStack_20._4_4_ % 0x1ffff7) * 1000 + (int)uStack_20;
  }
  if (iVar3 == 0x40) {
    if ((*(int *)(param_2 + 0x3c) == 0) || (*(int *)(*(int *)(param_2 + 0x3c) + 4) == 0)) {
      if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
         ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
        uVar4 = 1;
        uStack_20._0_4_ = 0x3e3;
      }
      else {
        pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
        _guard_check_icall(0x3e3);
        uVar4 = (*pcVar1)();
        uStack_20._0_4_ = 0x3e3;
      }
    }
    else if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
            ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
      uVar4 = 1;
      uStack_20._0_4_ = 0x2746;
    }
    else {
      pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
      _guard_check_icall(0x2746);
      uVar4 = (*pcVar1)();
      uStack_20._0_4_ = 0x2746;
    }
  }
  else {
    iVar3 = (int)uStack_20;
    if (uVar4 == 1) {
      iVar3 = (int)uStack_20 + (uStack_20._4_4_ % 0x1ffff7) * 1000;
    }
    if (iVar3 != 0x4d2) goto LAB_006ed564;
    if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
       ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
      uVar4 = 1;
    }
    else {
      pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
      _guard_check_icall(0x274d);
      uVar4 = (*pcVar1)();
    }
    uStack_20._0_4_ = 0x274d;
  }
  uStack_20 = CONCAT44(&PTR_vftable_012bbee0,(int)uStack_20);
  uVar4 = (uVar4 & 0xff) + 2;
  uStack_194 = uStack_20;
LAB_006ed564:
  if ((uVar4 != 0) && (uVar4 != 1)) {
    uVar4 = uVar4 & 1 | 0x115d0f0;
  }
  memset(auStack_18c,0,0x134);
  func_0x006db110(param_2 + 0x40);
  uStack_64 = uStack_194;
  iStack_8._0_1_ = 9;
  uStack_5c = uVar4;
  func_0x006ed200();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006ef3e0(auStack_18c,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006cf160();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006ed200();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ee960(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [236];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f02362;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_110,0,0xf8);
  func_0x006ba280(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1c = *(undefined4 *)(param_1 + 0xf8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006e8f80();
  if (param_2 != '\0') {
    func_0x006b4e20(uStack_24,uStack_1c,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b2a50();
  uStack_8 = 0xffffffff;
  func_0x006e8f80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006eea80(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [48];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f023b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_44,0,0x2c);
  func_0x006c4c80(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006e8eb0();
  if (param_2 != '\0') {
    func_0x006c0140(0,0,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006bfa00();
  uStack_8 = 0xffffffff;
  func_0x006e8eb0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006eeb40(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [48];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f023b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_44,0,0x2c);
  func_0x006c4c80(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006e8eb0();
  if (param_2 != '\0') {
    func_0x006bfca0(0,0,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006bfa00();
  uStack_8 = 0xffffffff;
  func_0x006e8eb0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_006eec00(undefined4 param_1,int param_2)

{
  func_0x006b7440(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80),
                  *(undefined4 *)(param_2 + 0x74),param_1);
  return;
}



void __thiscall FUN_006eec30(undefined4 param_1,int param_2)

{
  func_0x006b6f30(*(undefined8 *)(param_2 + 0x104),*(undefined4 *)(param_2 + 0x10c),
                  *(undefined4 *)(param_2 + 0x100),param_1);
  return;
}



void __thiscall FUN_006eec60(undefined4 param_1,int param_2)

{
  func_0x006b6900(*(undefined8 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x11c),
                  *(undefined4 *)(param_2 + 0x110),param_1);
  return;
}



void __fastcall FUN_006eec90(undefined4 param_1)

{
  func_0x006c1bf0(0,0,0,param_1);
  return;
}



void __fastcall FUN_006eecc0(undefined4 param_1)

{
  func_0x006c1770(0,0,0,param_1);
  return;
}



int __thiscall FUN_006ef910(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f01454;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x150) != '\0') &&
     (*(undefined1 **)(param_1 + 0x14c) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x14c) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006eba10();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x15c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_006f3700(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_9c [116];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f03b81;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_9c,0,0x84);
  func_0x006be460(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x78);
  uStack_24 = *(undefined8 *)(param_1 + 0x7c);
  uStack_1c = *(undefined4 *)(param_1 + 0x84);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006ed130();
  if (param_2 != '\0') {
    func_0x006b7440(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e1850();
  uStack_8 = 0xffffffff;
  func_0x006ed130();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006f3810(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_128 [256];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f03bec;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_128,0,0x110);
  func_0x006be380(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x104);
  uStack_24 = *(undefined8 *)(param_1 + 0x108);
  uStack_1c = *(undefined4 *)(param_1 + 0x110);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006ed060();
  if (param_2 != '\0') {
    func_0x006b6f30(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b7a70();
  uStack_8 = 0xffffffff;
  func_0x006ed060();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006f3920(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_148 [272];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f03c5c;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_148,0,0x120);
  func_0x006be2a0(param_1 + 4,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0x114);
  uStack_34 = *(undefined8 *)(param_1 + 0x118);
  uStack_2c = *(undefined4 *)(param_1 + 0x120);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x006ecf90();
  if (param_2 != '\0') {
    func_0x006b6900(uStack_34,uStack_2c,uStack_38);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006b7a70();
  uStack_14 = 0xffffffff;
  func_0x006ecf90();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_006f3a50(int param_1,char param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [4];
  undefined **ppuStack_f0;
  char cStack_80;
  undefined1 auStack_7c [12];
  undefined4 *puStack_70;
  int iStack_6c;
  char cStack_50;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  int iStack_3c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f03d75;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar3;
  memset(auStack_f4,0,0xdc);
  func_0x006d92b0(param_1 + 4,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006eceb0();
  if (param_2 != '\0') {
    func_0x006c1bf0(0,0,0);
  }
  uVar3 = uStack_8;
  uStack_8 = uStack_8 & 0xffffff00;
  if (cStack_50 != '\0') {
    uStack_8._1_3_ = SUB43(uVar3,1);
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    if (iStack_3c != 0) {
      pcVar1 = (code *)*puStack_40;
      _guard_check_icall(auStack_4c);
      (*pcVar1)();
    }
    cStack_50 = '\0';
  }
  uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
  ppuStack_f0 = boost::beast::stable_async_base<>::vftable;
  uStack_8._0_1_ = 0xc;
  func_0x00643330();
  uVar2 = uStack_8._1_3_;
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  if (cStack_80 != '\0') {
    uStack_8 = CONCAT31(uVar2,0xd);
    if (iStack_6c != 0) {
      pcVar1 = (code *)*puStack_70;
      _guard_check_icall(auStack_7c);
      (*pcVar1)();
    }
    cStack_80 = '\0';
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a0530();
  uStack_8 = 0xffffffff;
  func_0x006eceb0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006f3c10(int param_1,char param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [4];
  undefined **ppuStack_f0;
  char cStack_80;
  undefined1 auStack_7c [12];
  undefined4 *puStack_70;
  int iStack_6c;
  char cStack_50;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  int iStack_3c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f03e85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar3;
  memset(auStack_f4,0,0xdc);
  func_0x006d91c0(param_1 + 4,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006ecdd0();
  if (param_2 != '\0') {
    func_0x006c1770(0,0,0);
  }
  uVar3 = uStack_8;
  uStack_8 = uStack_8 & 0xffffff00;
  if (cStack_50 != '\0') {
    uStack_8._1_3_ = SUB43(uVar3,1);
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    if (iStack_3c != 0) {
      pcVar1 = (code *)*puStack_40;
      _guard_check_icall(auStack_4c);
      (*pcVar1)();
    }
    cStack_50 = '\0';
  }
  uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
  ppuStack_f0 = boost::beast::stable_async_base<>::vftable;
  uStack_8._0_1_ = 0xc;
  func_0x00643330();
  uVar2 = uStack_8._1_3_;
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  if (cStack_80 != '\0') {
    uStack_8 = CONCAT31(uVar2,0xd);
    if (iStack_6c != 0) {
      pcVar1 = (code *)*puStack_70;
      _guard_check_icall(auStack_7c);
      (*pcVar1)();
    }
    cStack_80 = '\0';
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a0530();
  uStack_8 = 0xffffffff;
  func_0x006ecdd0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006f3dd0(int param_1)

{
  func_0x006abc50(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                  *(undefined4 *)(param_1 + 0xb4),1);
  return;
}



int __thiscall FUN_006f4390(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f026e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x144) != '\0') &&
     (*(undefined1 **)(param_1 + 0x140) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x140) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006ef9b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006f44e0(undefined4 param_1,byte param_2)

{
  func_0x006eba10();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x140);
  }
  return param_1;
}



void FUN_006f8520(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_170 [280];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f04f36;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x148,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x164);
  iStack_8._0_1_ = 7;
  memset(auStack_170,0,0x124);
  func_0x006f7870(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x006f8430();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006dc250(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x0070b640(auStack_170);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006bec40();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006f8430();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006fa740(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1d4 [424];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0669f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_1d4;
  func_0x006d3bc0(param_1,uVar1);
  uStack_2c = *(undefined4 *)(param_1 + 0x1a8);
  uStack_28 = *(undefined8 *)(param_1 + 0x1ac);
  uStack_20 = *(undefined4 *)(param_1 + 0x1b4);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00704890(auStack_1d4);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006c9c30();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006fa750(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [140];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0663f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_bc;
  func_0x006d3cf0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x8c);
  uStack_2c = *(undefined8 *)(param_1 + 0x90);
  uStack_24 = *(undefined4 *)(param_1 + 0x98);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x007046b0(auStack_bc);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006c9cc0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006fa760(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_15c [300];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f065df;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_15c;
  func_0x006d3e20(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 300);
  uStack_2c = *(undefined8 *)(param_1 + 0x130);
  uStack_24 = *(undefined4 *)(param_1 + 0x138);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x007044d0(auStack_15c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006c9d50();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006fa770(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [316];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0657f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_16c;
  func_0x006d3f60(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x13c);
  uStack_2c = *(undefined8 *)(param_1 + 0x140);
  uStack_24 = *(undefined4 *)(param_1 + 0x148);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x007042f0(auStack_16c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006c9de0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006fa780(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_13c [272];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0651f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_13c;
  func_0x006d40a0(param_1,uVar1);
  uStack_2c = *(undefined4 *)(param_1 + 0x110);
  uStack_28 = *(undefined8 *)(param_1 + 0x114);
  uStack_20 = *(undefined4 *)(param_1 + 0x11c);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00704110(auStack_13c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006c9e70();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_006fa790(undefined4 param_1,int param_2)

{
  func_0x006c9600(*(undefined8 *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x118),
                  *(undefined4 *)(param_2 + 0x11c),param_1);
  return;
}



void __thiscall FUN_006fa7c0(undefined4 param_1,int param_2)

{
  func_0x006c90a0(*(undefined8 *)(param_2 + 0x13c),*(undefined4 *)(param_2 + 0x144),
                  *(undefined4 *)(param_2 + 0x148),param_1);
  return;
}



void __thiscall FUN_006fa7f0(undefined4 param_1,int param_2)

{
  func_0x006c8b40(*(undefined8 *)(param_2 + 300),*(undefined4 *)(param_2 + 0x134),
                  *(undefined4 *)(param_2 + 0x138),param_1);
  return;
}



void __thiscall FUN_006fa820(undefined4 param_1,int param_2)

{
  func_0x006c85a0(*(undefined8 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x94),
                  *(undefined4 *)(param_2 + 0x98),param_1);
  return;
}



void __thiscall FUN_006fa850(undefined4 param_1,int param_2)

{
  func_0x006c8050(*(undefined8 *)(param_2 + 0x1a8),*(undefined4 *)(param_2 + 0x1b0),
                  *(undefined4 *)(param_2 + 0x1b4),param_1);
  return;
}



void FUN_006fa880(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_dc [180];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f05ae7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_dc,0,0xc4);
  func_0x006b33e0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0xb8);
  uStack_24 = *(undefined8 *)(param_1 + 0xbc);
  uStack_1c = *(undefined4 *)(param_1 + 0xc4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x006f06d0();
  if (param_2 != '\0') {
    func_0x006abc50(uStack_24,uStack_1c,uStack_28,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x006f06d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_006fb640(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f03f74;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x148) != '\0') &&
     (*(undefined1 **)(param_1 + 0x144) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x144) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006f4570();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x154);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006fb6e0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f03fd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x1e0) != '\0') &&
     (*(undefined1 **)(param_1 + 0x1dc) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x1dc) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006f4630();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1f0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006fb780(undefined4 param_1,byte param_2)

{
  func_0x006ef9b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x134);
  }
  return param_1;
}



void FUN_006fffa0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_244 [472];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f06b42;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x218,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x234);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115d674;
  }
  memset(auStack_244,0,0x1e8);
  func_0x006eaec0(param_2 + 0x40);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006ffe60();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00704a70(auStack_244,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006e17c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006ffe60();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00700280(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b4 [324];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f06c62;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x180,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x19c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d824;
  }
  memset(auStack_1b4,0,0x154);
  func_0x006ead60(param_2 + 0x3c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00700140();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00704c80(auStack_1b4,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006e1730();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00700140();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00700550(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1ac [316];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f06d82;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x17c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x198);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115cb54;
  }
  memset(auStack_1ac,0,0x14c);
  func_0x006eac20(param_2 + 0x40);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00700410();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00704e90(auStack_1ac,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006e16a0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00700410();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00700830(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c4 [340];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f06ea2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 400,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1ac);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115c87c;
  }
  memset(auStack_1c4,0,0x164);
  func_0x006eaac0(param_2 + 0x3c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x007006f0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x007050a0(auStack_1c4,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006e1610();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x007006f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00702d80(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [224];
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0892a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006f4430(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0070c0b0(auStack_fc);
  uStack_14 = 0;
  puStack_1c = auStack_fc;
  uStack_8 = 0xffffffff;
  puStack_18 = puStack_1c;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00702d90(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_12c [248];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f088b2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_12c;
  func_0x006d0160(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0xf8);
  uStack_30 = *(undefined8 *)(param_1 + 0xfc);
  uStack_28 = *(undefined4 *)(param_1 + 0x104);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0070bec0(auStack_12c);
  uStack_14 = 0;
  puStack_20 = auStack_12c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00702da0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [232];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f08832;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_11c;
  func_0x006d0200(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0xe8);
  uStack_30 = *(undefined8 *)(param_1 + 0xec);
  uStack_28 = *(undefined4 *)(param_1 + 0xf4);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0070bcd0(auStack_11c);
  uStack_14 = 0;
  puStack_20 = auStack_11c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00702db0(int param_1)

{
  func_0x006bb9e0(*(undefined8 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 0x48),0);
  return;
}



void FUN_00702de0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [224];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f087b7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_10c;
  func_0x006d0290(param_1,uVar1);
  uStack_2c = *(undefined4 *)(param_1 + 0xe0);
  uStack_28 = *(undefined8 *)(param_1 + 0xe4);
  uStack_20 = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0070baf0(auStack_10c);
  uStack_14 = 0;
  puStack_1c = auStack_10c;
  uStack_8 = 0xffffffff;
  func_0x006ba870();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00702df0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1f4 [440];
  undefined1 auStack_3c [12];
  undefined4 *puStack_30;
  int iStack_2c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f07974;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_1f4,0,0x1d8);
  func_0x006efdc0(param_1 + 8,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006f8330();
  if (param_2 != '\0') {
    func_0x006ff3e0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_2c != 0) {
    pcVar1 = (code *)*puStack_30;
    _guard_check_icall(auStack_3c);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006c9c30();
  iStack_8 = 0xffffffff;
  func_0x006f8330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00702ef0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d0 [156];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f079e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_d0,0,0xb8);
  func_0x006efd20(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006f8230();
  if (param_2 != '\0') {
    func_0x006ff320();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006c9cc0();
  iStack_8 = 0xffffffff;
  func_0x006f8230();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00702ff0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_170 [316];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f07a54;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_170,0,0x158);
  func_0x006efc80(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006f8130();
  if (param_2 != '\0') {
    func_0x006ff260();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006c9d50();
  iStack_8 = 0xffffffff;
  func_0x006f8130();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007030f0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_180 [332];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f07ac4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_180,0,0x168);
  func_0x006efbe0(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006f8030();
  if (param_2 != '\0') {
    func_0x006ff1a0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006c9de0();
  iStack_8 = 0xffffffff;
  func_0x006f8030();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007031f0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [288];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f07b34;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_154,0,0x13c);
  func_0x006efb40(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006f7f30();
  if (param_2 != '\0') {
    func_0x006ff0e0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006c9e70();
  iStack_8 = 0xffffffff;
  func_0x006f7f30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007032f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [272];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f07b86;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_138,0,0x120);
  func_0x006d40a0(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x11c);
  uStack_28 = *(undefined8 *)(param_1 + 0x114);
  uStack_1c = *(undefined4 *)(param_1 + 0x120);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006f7e60();
  if (param_2 != '\0') {
    func_0x006c9600(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9e70();
  uStack_8 = 0xffffffff;
  func_0x006f7e60();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00703400(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [316];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f07bd6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_16c,0,0x14c);
  func_0x006d3f60(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x148);
  uStack_30 = *(undefined8 *)(param_1 + 0x140);
  uStack_24 = *(undefined4 *)(param_1 + 0x14c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006f7d90();
  if (param_2 != '\0') {
    func_0x006c90a0(uStack_30,uStack_28,uStack_24);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9de0();
  uStack_8 = 0xffffffff;
  func_0x006f7d90();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00703510(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [300];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f07c26;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_154,0,0x13c);
  func_0x006d3e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x138);
  uStack_28 = *(undefined8 *)(param_1 + 0x130);
  uStack_1c = *(undefined4 *)(param_1 + 0x13c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006f7cc0();
  if (param_2 != '\0') {
    func_0x006c8b40(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9d50();
  uStack_8 = 0xffffffff;
  func_0x006f7cc0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00703620(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [124];
  undefined1 *puStack_38;
  char cStack_34;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f07cb6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_b4,0,0x9c);
  func_0x006d3cf0(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x98);
  uStack_28 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c = *(undefined4 *)(param_1 + 0x9c);
  iStack_8 = CONCAT31((int3)((uint)iStack_8 >> 8),2);
  func_0x006f7bf0();
  if (param_2 != '\0') {
    func_0x006c85a0(uStack_28,uStack_20,uStack_1c);
  }
  if ((cStack_34 != '\0') && (puStack_38 != (undefined1 *)0x0)) {
    *puStack_38 = 0;
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 4;
  func_0x0068de80();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006c4560();
  iStack_8 = 0xffffffff;
  func_0x006f7bf0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00703770(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1d4 [424];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f07d06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_1d4,0,0x1b8);
  func_0x006d3bc0(param_1 + 8,uVar1);
  uStack_24 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_2c = *(undefined8 *)(param_1 + 0x1b0);
  uStack_20 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006f7b20();
  if (param_2 != '\0') {
    func_0x006c8050(uStack_2c,uStack_24,uStack_20);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9c30();
  uStack_8 = 0xffffffff;
  func_0x006f7b20();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00703880(int param_1)

{
  func_0x006cf9b0(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100),0xffffffff,0);
  return;
}



void FUN_007038b0(int param_1)

{
  func_0x006cf2e0(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400),0xffffffff,0);
  return;
}



int __thiscall FUN_007052b0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05e04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0xa4) != '\0') && (*(undefined1 **)(param_1 + 0xa0) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 0xa0) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006fb7b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00705350(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05e64;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x144) != '\0') &&
     (*(undefined1 **)(param_1 + 0x140) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x140) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006fb860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x150);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_007053f0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05ec4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x14c) != '\0') &&
     (*(undefined1 **)(param_1 + 0x148) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x148) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006fb910();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x158);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00705490(undefined4 param_1,byte param_2)

{
  func_0x006f4570();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x138);
  }
  return param_1;
}



undefined4 __thiscall FUN_00705530(undefined4 param_1,byte param_2)

{
  func_0x006f4630();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1d0);
  }
  return param_1;
}



void FUN_007075c0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_194 [300];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f08d62;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x174,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 400);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb8c0();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115d630;
  }
  memset(auStack_194,0,0x13c);
  func_0x006ef160(param_2 + 0x48);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00707480();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x0070c280(auStack_194,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006e8dd0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00707480();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007078a0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_190;
  undefined1 auStack_18c [140];
  undefined1 auStack_100 [152];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f08e82;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x158,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x174);
  iStack_8 = CONCAT31(iStack_8._1_3_,7);
  iVar3 = param_2 + 0x2c;
  for (uVar1 = 0; (iVar3 != param_2 + 0x34 && (uVar1 < 0x40)); uVar1 = uVar1 + 1) {
    iVar2 = func_0x00e87ea0();
    if (iVar2 != 0) {
      puStack_190 = auStack_100;
      goto LAB_00707988;
    }
    iVar3 = iVar3 + 8;
  }
  puStack_190 = (undefined1 *)CONCAT31((int3)((uint)auStack_58 >> 8),1);
LAB_00707988:
  func_0x0063fb90(puStack_190,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115d6d4;
  }
  memset(auStack_18c,0,0x134);
  func_0x006ef020(param_2 + 0x34);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00707760();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x0070c490(auStack_18c,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006e8dd0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00707760();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00707bd0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [120];
  undefined1 *puStack_88;
  char cStack_84;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  int iStack_58;
  int iStack_3c;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f08fd2;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_68,0,0x38);
  func_0x0064b5b0(param_2 + 0xc4,uVar1);
  iStack_14._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xe0);
  iStack_14._0_1_ = 7;
  func_0x0063fdd0();
  uStack_70 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_70 = uStack_28 & 1 | 0x115dbe0;
  }
  memset(auStack_100,0,0x98);
  func_0x006eef00(param_2 + 0x3c);
  uStack_78 = uStack_30;
  uStack_6c = param_4;
  iStack_14._0_1_ = 9;
  func_0x00707a90();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,10);
    if ((iStack_58 == 0) && (iStack_3c == 0)) {
      func_0x006e7780(uStack_78,uStack_70,uStack_6c);
    }
    else {
      func_0x00718540(auStack_100);
    }
  }
  if ((cStack_84 != '\0') && (puStack_88 != (undefined1 *)0x0)) {
    *puStack_88 = 0;
  }
  iStack_14._0_1_ = 0xc;
  func_0x0068de80();
  iStack_14._0_1_ = 7;
  func_0x006df990();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  func_0x0065e600();
  iStack_14 = 0xffffffff;
  func_0x00707a90();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0070a1f0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [224];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0acef;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_10c;
  func_0x006dac40(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0xe0);
  uStack_24 = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00712020(auStack_10c);
  uStack_14 = 0;
  puStack_20 = auStack_10c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070a200(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [224];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0acef;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_10c;
  func_0x006dac40(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0xe0);
  uStack_24 = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00711e30(auStack_10c);
  uStack_14 = 0;
  puStack_20 = auStack_10c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070a210(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [224];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0acef;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_10c;
  func_0x006daf20(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0xe0);
  uStack_24 = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00711c40(auStack_10c);
  uStack_14 = 0;
  puStack_20 = auStack_10c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070a220(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [224];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0acef;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_10c;
  func_0x006daf20(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0xe0);
  uStack_24 = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00711a50(auStack_10c);
  uStack_14 = 0;
  puStack_20 = auStack_10c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070a230(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [296];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0ac7f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_154;
  func_0x006db110(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0x128);
  uStack_24 = *(undefined4 *)(param_1 + 0x130);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00711860(auStack_154);
  uStack_14 = 0;
  puStack_20 = auStack_154;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006cf160();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070a240(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [268];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0ac0f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_144;
  func_0x006db340(param_1,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0x10c);
  uStack_34 = *(undefined8 *)(param_1 + 0x110);
  uStack_2c = *(undefined4 *)(param_1 + 0x118);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00711670(auStack_144);
  uStack_14 = 0;
  puStack_20 = auStack_144;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006cf0c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070a250(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [268];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0ab9f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_144;
  func_0x006db4e0(param_1,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0x10c);
  uStack_34 = *(undefined8 *)(param_1 + 0x110);
  uStack_2c = *(undefined4 *)(param_1 + 0x118);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00711480(auStack_144);
  uStack_14 = 0;
  puStack_20 = auStack_144;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006cf020();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0070af60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [252];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f09dc9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_110,0,0xf8);
  func_0x006f4430(param_1 + 4,uVar1);
  uStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xe0);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x006ffd90();
  if (param_2 != '\0') {
    func_0x00706bc0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006ef670();
  uStack_8 = 0xffffffff;
  func_0x006ffd90();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070b050(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_13c [296];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f09e1b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_13c,0,0x124);
  func_0x006f4ae0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ffcc0();
  if (param_2 != '\0') {
    func_0x00706ae0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006ef700();
  uStack_8 = 0xffffffff;
  func_0x006ffcc0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070b120(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_12c [280];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f09e6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_12c,0,0x114);
  func_0x006f4a40(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ffbf0();
  if (param_2 != '\0') {
    func_0x00706a00();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006ef790();
  uStack_8 = 0xffffffff;
  func_0x006ffbf0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070b1f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_70 [72];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f09ed8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_70,0,0x58);
  func_0x006f79f0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006ffb00();
  if (param_2 != '\0') {
    func_0x006bb9e0(uStack_24,uStack_1c,uStack_28,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x006ffb00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070b2d0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_12c [240];
  undefined1 auStack_3c [12];
  undefined4 *puStack_30;
  int iStack_2c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f09f4f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_12c,0,0x110);
  func_0x006f49a0(param_1 + 8,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x006ff9f0();
  if (param_2 != '\0') {
    func_0x00706930();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_2c != 0) {
    pcVar1 = (code *)*puStack_30;
    _guard_check_icall(auStack_3c);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006ba870();
  iStack_8 = 0xffffffff;
  func_0x006ff9f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070b3e0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [248];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f09fcd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_11c,0,0x104);
  func_0x006e8c90(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xfc);
  uStack_1c = *(undefined4 *)(param_1 + 0x104);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006ff900();
  if (param_2 != '\0') {
    func_0x006cf9b0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x006ff900();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070b500(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b4 [392];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0a042;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_1b4,0,0x198);
  func_0x006e8bd0(param_1 + 8,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 400);
  uStack_24 = *(undefined4 *)(param_1 + 0x198);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006ff820();
  if (param_2 != '\0') {
    func_0x006cf2e0(uStack_2c,uStack_24,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006ba870();
  uStack_8 = 0xffffffff;
  func_0x006ff820();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0070b610(undefined4 param_1,int param_2)

{
  func_0x006d5150(*(undefined8 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 0x130),0,1,param_1);
  return;
}



undefined4 __thiscall FUN_0070ca40(undefined4 param_1,byte param_2)

{
  func_0x006fb7b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x94);
  }
  return param_1;
}



undefined4 __thiscall FUN_0070cad0(undefined4 param_1,byte param_2)

{
  func_0x006fb860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x134);
  }
  return param_1;
}



undefined4 __thiscall FUN_0070cb60(undefined4 param_1,byte param_2)

{
  func_0x006fb910();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x13c);
  }
  return param_1;
}



void FUN_0070ec60(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [276];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0b3b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x144,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x160);
  iStack_8._0_1_ = 7;
  memset(auStack_16c,0,0x120);
  func_0x0070dd30(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x0070eb70();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006ec6a0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x007224b0(auStack_16c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006c7940();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0070eb70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070eef0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_164 [268];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0b4c6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x13c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x158);
  iStack_8._0_1_ = 7;
  memset(auStack_164,0,0x118);
  func_0x0070dc90(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x0070ee00();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006ec170(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x007226a0(auStack_164);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006c7940();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0070ee00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0070f180(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c4 [108];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0b5e9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x9c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xb8);
  iStack_8._0_1_ = 7;
  memset(auStack_c4,0,0x78);
  func_0x0070dbd0(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x0070f090();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006ebcb0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00722890(auStack_c4);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006bfa00();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0070f090();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710920(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [268];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0bdbb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_120,0,0x108);
  func_0x006fe3f0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x007073b0();
  if (param_2 != '\0') {
    func_0x0070db00();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f40f0();
  uStack_8 = 0xffffffff;
  func_0x007073b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007109f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [268];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0bdbb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_120,0,0x108);
  func_0x006fe3f0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x007073b0();
  if (param_2 != '\0') {
    func_0x0070da30();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f40f0();
  uStack_8 = 0xffffffff;
  func_0x007073b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710ac0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [268];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0bdbb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_120,0,0x108);
  func_0x006fe350(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x007073b0();
  if (param_2 != '\0') {
    func_0x0070d960();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f40f0();
  uStack_8 = 0xffffffff;
  func_0x007073b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710b90(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [268];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0bdbb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_120,0,0x108);
  func_0x006fe350(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x007073b0();
  if (param_2 != '\0') {
    func_0x0070d890();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f40f0();
  uStack_8 = 0xffffffff;
  func_0x007073b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710c60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_168 [340];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0be0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_168,0,0x150);
  func_0x006fe2b0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x007072e0();
  if (param_2 != '\0') {
    func_0x0070d7c0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f4180();
  uStack_8 = 0xffffffff;
  func_0x007072e0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710d30(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_150 [316];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0be5b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_150,0,0x138);
  func_0x006fe210(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00707210();
  if (param_2 != '\0') {
    func_0x0070d6e0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f4210();
  uStack_8 = 0xffffffff;
  func_0x00707210();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710e00(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_150 [316];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0beab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_150,0,0x138);
  func_0x006fe170(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00707140();
  if (param_2 != '\0') {
    func_0x0070d600();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f42a0();
  uStack_8 = 0xffffffff;
  func_0x00707140();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00710ed0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14c [296];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0bf1c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_14c,0,0x134);
  func_0x006db110(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 300);
  uStack_1c = *(undefined4 *)(param_1 + 0x134);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00707060();
  if (param_2 != '\0') {
    func_0x006d5150(uStack_24,uStack_1c,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006cf160();
  uStack_8 = 0xffffffff;
  func_0x00707060();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00710fe0(undefined4 param_1,int param_2)

{
  func_0x006c9600(*(undefined8 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x11c),
                  *(undefined4 *)(param_2 + 0x110),param_1);
  return;
}



void __thiscall FUN_00711010(undefined4 param_1,int param_2)

{
  func_0x006c90a0(*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x148),
                  *(undefined4 *)(param_2 + 0x13c),param_1);
  return;
}



void __thiscall FUN_00711040(undefined4 param_1,int param_2)

{
  func_0x006c8b40(*(undefined8 *)(param_2 + 0x130),*(undefined4 *)(param_2 + 0x138),
                  *(undefined4 *)(param_2 + 300),param_1);
  return;
}



void __thiscall FUN_00711070(undefined4 param_1,int param_2)

{
  func_0x006c85a0(*(undefined8 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x98),
                  *(undefined4 *)(param_2 + 0x8c),param_1);
  return;
}



void __thiscall FUN_007110a0(undefined4 param_1,int param_2)

{
  func_0x006c8050(*(undefined8 *)(param_2 + 0x1ac),*(undefined4 *)(param_2 + 0x1b4),
                  *(undefined4 *)(param_2 + 0x1a8),param_1);
  return;
}



int __thiscall FUN_007126c0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0a564;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x168) != '\0') &&
     (*(undefined1 **)(param_1 + 0x164) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x164) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0070cbf0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x174);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00713b80(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c4 [348];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0cdc2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x19c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1b8);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115d9a4;
  }
  memset(auStack_1c4,0,0x16c);
  func_0x006fa9a0(param_2 + 0x40);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00713a40();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00718750(auStack_1c4,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f0640();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00713a40();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00717eb0(int param_1)

{
  func_0x006dc250(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120),0xffffffff,0);
  return;
}



void FUN_00717ee0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [272];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0d9fc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_138,0,0x120);
  func_0x006d40a0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x114);
  uStack_24 = *(undefined8 *)(param_1 + 0x118);
  uStack_1c = *(undefined4 *)(param_1 + 0x120);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0070eaa0();
  if (param_2 != '\0') {
    func_0x006c9600(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9e70();
  uStack_8 = 0xffffffff;
  func_0x0070eaa0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00717ff0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_178 [316];
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f0da6c;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_178,0,0x14c);
  func_0x006d3f60(param_1 + 4,uVar1);
  uStack_3c = *(undefined4 *)(param_1 + 0x140);
  uStack_38 = *(undefined8 *)(param_1 + 0x144);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x0070e9d0();
  if (param_2 != '\0') {
    func_0x006c90a0(uStack_38,uStack_30,uStack_3c);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006c9de0();
  uStack_14 = 0xffffffff;
  func_0x0070e9d0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00718120(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [300];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0dadc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_154,0,0x13c);
  func_0x006d3e20(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x130);
  uStack_24 = *(undefined8 *)(param_1 + 0x134);
  uStack_1c = *(undefined4 *)(param_1 + 0x13c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0070e900();
  if (param_2 != '\0') {
    func_0x006c8b40(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9d50();
  uStack_8 = 0xffffffff;
  func_0x0070e900();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00718230(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [140];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0db4c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_b4,0,0x9c);
  func_0x006d3cf0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x90);
  uStack_24 = *(undefined8 *)(param_1 + 0x94);
  uStack_1c = *(undefined4 *)(param_1 + 0x9c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0070e830();
  if (param_2 != '\0') {
    func_0x006c85a0(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c9cc0();
  uStack_8 = 0xffffffff;
  func_0x0070e830();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00718340(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1e0 [424];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f0dbbc;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_1e0,0,0x1b8);
  func_0x006d3bc0(param_1 + 8,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0x1b0);
  uStack_34 = *(undefined8 *)(param_1 + 0x1b4);
  uStack_2c = *(undefined4 *)(param_1 + 0x1bc);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x0070e760();
  if (param_2 != '\0') {
    func_0x006c8050(uStack_34,uStack_2c,uStack_38);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006c9c30();
  uStack_14 = 0xffffffff;
  func_0x0070e760();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00718470(undefined4 param_1,int param_2)

{
  func_0x006bbff0(*(undefined8 *)(param_2 + 0xe4),*(undefined4 *)(param_2 + 0xec),
                  *(undefined4 *)(param_2 + 0xe0),0,param_1);
  return;
}



void FUN_007184b0(int param_1)

{
  func_0x006bb4d0(*(undefined8 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf4),
                  *(undefined4 *)(param_1 + 0xe8),0);
  return;
}



void FUN_007184e0(int param_1)

{
  func_0x006bac80(*(undefined8 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x104),
                  *(undefined4 *)(param_1 + 0xf8),0);
  return;
}



void FUN_00718510(int param_1)

{
  func_0x006baaa0(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),
                  *(undefined4 *)(param_1 + 0xcc),0);
  return;
}



int __thiscall FUN_00718a80(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0c364;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x16c) != '\0') &&
     (*(undefined1 **)(param_1 + 0x168) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x168) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x00712760();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x178);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00718c80(undefined4 param_1,byte param_2)

{
  func_0x0070cbf0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x158);
  }
  return param_1;
}



void FUN_0071d2c0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0e9d2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x1a0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1bc);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d6f4;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703f40(param_2 + 0x54);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071d150();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724220(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071d150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071d5c0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0eb12;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x198,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1b4);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d7d4;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703e70(param_2 + 0x4c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071d450();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724430(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071d450();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071d890(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0ec32;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 400,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1ac);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d4e0;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703da0(param_2 + 0x44);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071d750();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724640(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071d750();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071db90(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0ed72;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x1a0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1bc);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115cb24;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703cd0(param_2 + 0x54);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071da20();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724850(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071da20();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071dd20(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0eb12;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x198,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1b4);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d150;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703c00(param_2 + 0x4c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071d450();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724a60(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071d450();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071e020(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0eeb2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x198,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1b4);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115c75c;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703b30(param_2 + 0x4c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071deb0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724c70(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071deb0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071e320(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0eff2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x1a0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1bc);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d120;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x00703a60(param_2 + 0x54);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071e1b0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00724e80(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071e1b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0071e620(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [332];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f0f132;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x198,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1b4);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115c8bc;
  }
  memset(auStack_1bc,0,0x15c);
  func_0x007038e0(param_2 + 0x4c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x0071e4b0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00725090(auStack_1bc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006f7a90();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0071e4b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00721c00(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_184 [340];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f10f6f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_184;
  func_0x006eaac0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x154);
  uStack_2c = *(undefined8 *)(param_1 + 0x158);
  uStack_24 = *(undefined4 *)(param_1 + 0x160);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0072db30(auStack_184);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006e1610();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00721c10(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [316];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f10f0f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_16c;
  func_0x006eac20(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x13c);
  uStack_2c = *(undefined8 *)(param_1 + 0x140);
  uStack_24 = *(undefined4 *)(param_1 + 0x148);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0072d950(auStack_16c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006e16a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00721c20(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_174 [324];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f10eaf;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_174;
  func_0x006ead60(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x144);
  uStack_2c = *(undefined8 *)(param_1 + 0x148);
  uStack_24 = *(undefined4 *)(param_1 + 0x150);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0072d770(auStack_174);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006e1730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00721c30(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_204 [472];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f10e4f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_204;
  func_0x006eaec0(param_1,uVar1);
  uStack_2c = *(undefined4 *)(param_1 + 0x1d8);
  uStack_28 = *(undefined8 *)(param_1 + 0x1dc);
  uStack_20 = *(undefined4 *)(param_1 + 0x1e4);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0072d590(auStack_204);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006e17c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00721c40(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_13c [280];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0f9ca;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_13c,0,0x124);
  func_0x006f7870(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x11c);
  uStack_1c = *(undefined4 *)(param_1 + 0x124);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00713950();
  if (param_2 != '\0') {
    func_0x006dc250(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006bec40();
  uStack_8 = 0xffffffff;
  func_0x00713950();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00721d60(undefined4 param_1,int param_2)

{
  func_0x006e0bb0(*(undefined8 *)(param_2 + 0x1d8),*(undefined4 *)(param_2 + 0x1e0),
                  *(undefined4 *)(param_2 + 0x1e4),param_1);
  return;
}



void __thiscall FUN_00721d90(undefined4 param_1,int param_2)

{
  func_0x006e0630(*(undefined8 *)(param_2 + 0x144),*(undefined4 *)(param_2 + 0x14c),
                  *(undefined4 *)(param_2 + 0x150),param_1);
  return;
}



void __thiscall FUN_00721dc0(undefined4 param_1,int param_2)

{
  func_0x006e00d0(*(undefined8 *)(param_2 + 0x13c),*(undefined4 *)(param_2 + 0x144),
                  *(undefined4 *)(param_2 + 0x148),param_1);
  return;
}



void __thiscall FUN_00721df0(undefined4 param_1,int param_2)

{
  func_0x006dfb50(*(undefined8 *)(param_2 + 0x154),*(undefined4 *)(param_2 + 0x15c),
                  *(undefined4 *)(param_2 + 0x160),param_1);
  return;
}



void FUN_00721e20(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [224];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f0fa47;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_118,0,0xf0);
  func_0x006d0290(param_1 + 8,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0xe8);
  uStack_34 = *(undefined8 *)(param_1 + 0xec);
  uStack_2c = *(undefined4 *)(param_1 + 0xf4);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x00713870();
  if (param_2 != '\0') {
    func_0x006bbff0(uStack_34,uStack_2c,uStack_38,0);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006ba870();
  uStack_14 = 0xffffffff;
  func_0x00713870();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00721f60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [232];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0fad5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_110,0,0xf8);
  func_0x006d0200(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0xec);
  uStack_24 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1c = *(undefined4 *)(param_1 + 0xf8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x00713780();
  if (param_2 != '\0') {
    func_0x006bb4d0(uStack_24,uStack_1c,uStack_28,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x00713780();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00722090(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_130 [248];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f0fb55;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_130,0,0x108);
  func_0x006d0160(param_1 + 4,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0xfc);
  uStack_34 = *(undefined8 *)(param_1 + 0x100);
  uStack_2c = *(undefined4 *)(param_1 + 0x108);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x00713690();
  if (param_2 != '\0') {
    func_0x006bac80(uStack_34,uStack_2c,uStack_38,0);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006a36a0();
  uStack_14 = 0xffffffff;
  func_0x00713690();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_007221d0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [204];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f0fbca;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_f4,0,0xdc);
  func_0x006f4430(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x007135a0();
  if (param_2 != '\0') {
    func_0x006baaa0(uStack_24,uStack_1c,uStack_28,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x007135a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007222d0(int param_1)

{
  func_0x006ff4a0(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118),
                  *(undefined4 *)(param_1 + 0x10c));
  return;
}



void FUN_00722300(int param_1)

{
  func_0x00706c70(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118),
                  *(undefined4 *)(param_1 + 0x10c));
  return;
}



void FUN_00722330(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != -1) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  }
  func_0x0063ec80();
  func_0x006d2a70(param_1,*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),0);
  return;
}



void FUN_00722390(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != -1) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  }
  func_0x0063ec80();
  func_0x006d22a0(param_1,*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),0);
  return;
}



void FUN_007223f0(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != -1) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  }
  func_0x0063ec80();
  func_0x006d1b20(param_1,*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),0);
  return;
}



void FUN_00722450(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != -1) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  }
  func_0x0063ec80();
  func_0x006d1340(param_1,*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),0);
  return;
}



undefined4 __thiscall FUN_007255a0(undefined4 param_1,byte param_2)

{
  func_0x00712760();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x15c);
  }
  return param_1;
}



void FUN_00727a30(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c4 [340];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f113b2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 400,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1ac);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115d6b4;
  }
  memset(auStack_1c4,0,0x164);
  func_0x0070b990(param_2 + 0x3c);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x007278f0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x0072dd10(auStack_1c4,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006ff600();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x007278f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00727d00(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_25c [496];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f114d2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x230,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x24c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115cfc0;
  }
  memset(auStack_25c,0,0x200);
  func_0x0070b830(param_2 + 0x40);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00727bc0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x0072df20(auStack_25c,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006ff570();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00727bc0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00728140(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fdc90(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00738540(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007282e0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fd7b0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00738730(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00728480(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fd2d0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00738920(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00728620(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fcdf0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00738b10(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007287c0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fc910(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00738d00(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00728960(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fc430(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00738ef0(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00728b00(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fbf50(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x007390e0(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00728ca0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [308];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f115e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x164,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x180);
  iStack_8._0_1_ = 7;
  memset(auStack_18c,0,0x140);
  func_0x00726e60(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00728050();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006fba70(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x007392d0(auStack_18c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006cf0c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00728050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072ba90(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1bc [392];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f134a5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_1bc;
  func_0x006e8bd0(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0x188);
  uStack_30 = *(undefined8 *)(param_1 + 0x18c);
  uStack_28 = *(undefined4 *)(param_1 + 0x194);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00734d00(auStack_1bc);
  uStack_14 = 0;
  puStack_20 = auStack_1bc;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006ba870();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0072baa0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [24];
  undefined1 auStack_11c [252];
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f13425;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x00718b20(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00734b20(auStack_134);
  uStack_14 = 0;
  puStack_1c = auStack_134;
  puStack_20 = auStack_11c;
  uStack_8 = 0xffffffff;
  puStack_18 = puStack_1c;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0072bab0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_12c [44];
  undefined1 auStack_100 [204];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f133ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_12c;
  func_0x006e8c90(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0xf8);
  uStack_30 = *(undefined8 *)(param_1 + 0xfc);
  uStack_28 = *(undefined4 *)(param_1 + 0x104);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00734920(auStack_12c);
  uStack_14 = 0;
  puStack_20 = auStack_12c;
  puStack_24 = auStack_100;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0072bac0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [24];
  undefined1 auStack_12c [268];
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f13325;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x00718bd0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00734740(auStack_144);
  uStack_14 = 0;
  puStack_1c = auStack_144;
  puStack_20 = auStack_12c;
  uStack_8 = 0xffffffff;
  puStack_18 = puStack_1c;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0072bad0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_180 [136];
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [136];
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  undefined1 auStack_10 [12];
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f132a2;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = 0;
  uStack_14 = 0;
  pcStack_3c = (code *)auStack_e8;
  iStack_44 = param_1 + 0x98;
  func_0x006eef00(param_1,uStack_24);
  uStack_60 = *(undefined4 *)(param_1 + 0x88);
  uStack_5c = *(undefined8 *)(param_1 + 0x8c);
  uStack_54 = *(undefined4 *)(param_1 + 0x94);
  uStack_14 = uStack_14 & 0xffffff00;
  uStack_38 = 1;
  if (*(int *)(param_1 + 0xa8) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0xac) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_3c = *(code **)(*(int *)(param_1 + 0xac) + 8);
      func_0x007359e0(auStack_e8);
      uStack_14._0_1_ = 3;
      puStack_30 = &uStack_31;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(pcStack_3c,4);
      uStack_28 = 0;
      uStack_14._0_1_ = 4;
      puStack_50 = puVar2 + 1;
      puStack_4c = puStack_50;
      puStack_48 = puVar2;
      puStack_2c = puVar2;
      func_0x006eef00(auStack_180);
      puVar2[0x23] = uStack_f8;
      *(undefined8 *)(puVar2 + 0x24) = uStack_f4;
      puVar2[0x26] = uStack_ec;
      *puVar2 = FUN_00748970;
      puStack_2c = (undefined4 *)0x0;
      uStack_14._0_1_ = 3;
      puStack_40 = puVar2;
      func_0x0073aba0();
      uStack_14._0_1_ = 0;
      func_0x007301b0();
      pcVar1 = pcStack_3c;
      uStack_14._0_1_ = 8;
      _guard_check_icall(iStack_44,&puStack_40);
      (*pcVar1)();
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (puStack_40 != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_40;
        _guard_check_icall(puStack_40,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0x98,FUN_0073f270,auStack_e8);
      (*pcVar1)();
    }
    uStack_38 = 0;
    uStack_14 = 0xffffffff;
    func_0x007301b0();
    *unaff_FS_OFFSET = iStack_1c;
    FUN_008ab370();
    return;
  }
  func_0x0062ce80();
  uStack_14 = CONCAT31(uStack_14._1_3_,9);
  func_0x00635070();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0072bae0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14c [292];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1320f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_14c;
  func_0x006ef020(param_1,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x124);
  uStack_24 = *(undefined8 *)(param_1 + 0x128);
  uStack_1c = *(undefined4 *)(param_1 + 0x130);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00734560(auStack_14c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006e8dd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0072baf0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [300];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f131af;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_154;
  func_0x006ef160(param_1,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 300);
  uStack_24 = *(undefined8 *)(param_1 + 0x130);
  uStack_1c = *(undefined4 *)(param_1 + 0x138);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00734380(auStack_154);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006e8dd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0072bb00(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_198 [356];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f123a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_198,0,0x180);
  func_0x00712cf0(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x0071d050();
  if (param_2 != '\0') {
    func_0x00726da0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006e1610();
  iStack_8 = 0xffffffff;
  func_0x0071d050();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072bc00(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_180 [332];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f12414;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_180,0,0x168);
  func_0x00712c50(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x0071cf50();
  if (param_2 != '\0') {
    func_0x00726ce0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006e16a0();
  iStack_8 = 0xffffffff;
  func_0x0071cf50();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072bd00(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_188 [340];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f12484;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_188,0,0x170);
  func_0x00712bb0(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x0071ce50();
  if (param_2 != '\0') {
    func_0x00726c20();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006e1730();
  iStack_8 = 0xffffffff;
  func_0x0071ce50();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072be00(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_224 [488];
  undefined1 auStack_3c [12];
  undefined4 *puStack_30;
  int iStack_2c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f124f4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_224,0,0x208);
  func_0x00712b10(param_1 + 8,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x0071cd50();
  if (param_2 != '\0') {
    func_0x00726b60();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_2c != 0) {
    pcVar1 = (code *)*puStack_30;
    _guard_check_icall(auStack_3c);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006e17c0();
  iStack_8 = 0xffffffff;
  func_0x0071cd50();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072bf00(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_204 [472];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12546;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_204,0,0x1e8);
  func_0x006eaec0(param_1 + 8,uVar1);
  uStack_24 = *(undefined4 *)(param_1 + 0x1e8);
  uStack_2c = *(undefined8 *)(param_1 + 0x1e0);
  uStack_20 = *(undefined4 *)(param_1 + 0x1ec);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0071cc80();
  if (param_2 != '\0') {
    func_0x006e0bb0(uStack_2c,uStack_24,uStack_20);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e17c0();
  uStack_8 = 0xffffffff;
  func_0x0071cc80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c010(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [324];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12596;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_16c,0,0x154);
  func_0x006ead60(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x150);
  uStack_28 = *(undefined8 *)(param_1 + 0x148);
  uStack_1c = *(undefined4 *)(param_1 + 0x154);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0071cbb0();
  if (param_2 != '\0') {
    func_0x006e0630(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e1730();
  uStack_8 = 0xffffffff;
  func_0x0071cbb0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c120(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_164 [316];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f125e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_164,0,0x14c);
  func_0x006eac20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x148);
  uStack_28 = *(undefined8 *)(param_1 + 0x140);
  uStack_1c = *(undefined4 *)(param_1 + 0x14c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0071cae0();
  if (param_2 != '\0') {
    func_0x006e00d0(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e16a0();
  uStack_8 = 0xffffffff;
  func_0x0071cae0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c230(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_184 [340];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12636;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_184,0,0x164);
  func_0x006eaac0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x160);
  uStack_30 = *(undefined8 *)(param_1 + 0x158);
  uStack_24 = *(undefined4 *)(param_1 + 0x164);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0071ca10();
  if (param_2 != '\0') {
    func_0x006dfb50(uStack_30,uStack_28,uStack_24);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e1610();
  uStack_8 = 0xffffffff;
  func_0x0071ca10();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0072c340(undefined4 param_1,int param_2)

{
  func_0x006e8220(*(undefined8 *)(param_2 + 300),*(undefined4 *)(param_2 + 0x134),
                  *(undefined4 *)(param_2 + 0x138),param_1);
  return;
}



void __thiscall FUN_0072c370(undefined4 param_1,int param_2)

{
  func_0x006e7c70(*(undefined8 *)(param_2 + 0x124),*(undefined4 *)(param_2 + 300),
                  *(undefined4 *)(param_2 + 0x130),param_1);
  return;
}



void __thiscall FUN_0072c3a0(undefined4 param_1,int param_2)

{
  func_0x006e7780(*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90),
                  *(undefined4 *)(param_2 + 0x94),param_1);
  return;
}



void FUN_0072c3d0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [268];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f126b2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_134,0,0x11c);
  func_0x006db4e0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x110);
  uStack_24 = *(undefined8 *)(param_1 + 0x114);
  uStack_1c = *(undefined4 *)(param_1 + 0x11c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c920();
  if (param_2 != '\0') {
    func_0x006ff4a0(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006cf020();
  uStack_8 = 0xffffffff;
  func_0x0071c920();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c500(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [268];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12732;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_134,0,0x11c);
  func_0x006db340(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x110);
  uStack_24 = *(undefined8 *)(param_1 + 0x114);
  uStack_1c = *(undefined4 *)(param_1 + 0x11c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c830();
  if (param_2 != '\0') {
    func_0x00706c70(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006cf0c0();
  uStack_8 = 0xffffffff;
  func_0x0071c830();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c630(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14c [296];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f127b2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_14c,0,0x134);
  func_0x006db110(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 300);
  uStack_1c = *(undefined4 *)(param_1 + 0x134);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c740();
  if (param_2 != '\0') {
    func_0x006d5150(uStack_24,uStack_1c,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006cf160();
  uStack_8 = 0xffffffff;
  func_0x0071c740();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c750(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_104 [224];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12832;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_104,0,0xec);
  func_0x006daf20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xe4);
  uStack_1c = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c650();
  if (param_2 != '\0') {
    func_0x00726b00();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c7940();
  uStack_8 = 0xffffffff;
  func_0x0071c650();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c860(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_104 [224];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12832;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_104,0,0xec);
  func_0x006daf20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xe4);
  uStack_1c = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c650();
  if (param_2 != '\0') {
    func_0x00726aa0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c7940();
  uStack_8 = 0xffffffff;
  func_0x0071c650();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072c970(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_104 [224];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12832;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_104,0,0xec);
  func_0x006dac40(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xe4);
  uStack_1c = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c650();
  if (param_2 != '\0') {
    func_0x00726a40();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c7940();
  uStack_8 = 0xffffffff;
  func_0x0071c650();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0072ca80(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_104 [224];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f12832;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_104,0,0xec);
  func_0x006dac40(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xe4);
  uStack_1c = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0071c650();
  if (param_2 != '\0') {
    func_0x007269e0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c7940();
  uStack_8 = 0xffffffff;
  func_0x0071c650();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_0072e250(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f10994;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x164) != '\0') &&
     (*(undefined1 **)(param_1 + 0x160) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x160) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x00725630();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x170);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_0072e2f0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f109f4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x15c) != '\0') &&
     (*(undefined1 **)(param_1 + 0x158) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x158) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x007256f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x168);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_0072e390(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f10a54;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0xbc) != '\0') && (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 0xb8) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x007257b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,200);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00730990(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [176];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f139f2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xf0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x10c);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115d8f0;
  }
  memset(auStack_118,0,0xc0);
  func_0x00711350(param_2 + 0x40);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00730850();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00734ef0(auStack_118,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x00706e60();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00730850();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00730c70(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b8 [336];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f13b12;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 400,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1ac);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115d240;
  }
  memset(auStack_1b8,0,0x160);
  func_0x00711210(param_2 + 0x40);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00730b30();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00735100(auStack_1b8,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x00706dd0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00730b30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00730f50(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c0 [344];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f13c32;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x198,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1b4);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115daf0;
  }
  memset(auStack_1c0,0,0x168);
  func_0x007110d0(param_2 + 0x40);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00730e10();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x00735310(auStack_1c0,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x00706d40();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00730e10();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007338f0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [224];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1521f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_110;
  func_0x006dac40(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0xe0);
  uStack_2c = *(undefined8 *)(param_1 + 0xe4);
  uStack_24 = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00739ca0(auStack_110);
  uStack_14 = 0;
  puStack_20 = auStack_110;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00733900(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_110 [224];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1521f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_110;
  func_0x006dac40(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0xe0);
  uStack_2c = *(undefined8 *)(param_1 + 0xe4);
  uStack_24 = *(undefined4 *)(param_1 + 0xec);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00739ab0(auStack_110);
  uStack_14 = 0;
  puStack_20 = auStack_110;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00733910(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_70 [84];
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f151b1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x00725500(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x007398e0(auStack_70);
  uStack_14 = 0;
  puStack_1c = auStack_70;
  uStack_8 = 0xffffffff;
  puStack_18 = puStack_1c;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00733920(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1d4 [448];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1458b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_1d4,0,0x1b8);
  func_0x00719650(param_1 + 8,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00727820();
  if (param_2 != '\0') {
    func_0x0072fed0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00712290();
  uStack_8 = 0xffffffff;
  func_0x00727820();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_007339f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [304];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f145f9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_144,0,300);
  func_0x00718b20(param_1 + 4,uVar1);
  uStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x114);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x00727750();
  if (param_2 != '\0') {
    func_0x0072fe10();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00712320();
  uStack_8 = 0xffffffff;
  func_0x00727750();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00733ae0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_13c [296];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1464b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_13c,0,0x124);
  func_0x007195b0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00727680();
  if (param_2 != '\0') {
    func_0x0072fd20();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x007123c0();
  uStack_8 = 0xffffffff;
  func_0x00727680();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00733bb0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [320];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f146b9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_154,0,0x13c);
  func_0x00718bd0(param_1 + 4,uVar1);
  uStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x124);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x007275b0();
  if (param_2 != '\0') {
    func_0x0072fc60();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00712460();
  uStack_8 = 0xffffffff;
  func_0x007275b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00733ca0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_cc [184];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1470b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_cc,0,0xb4);
  func_0x00719510(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x007274e0();
  if (param_2 != '\0') {
    func_0x0072fa10();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00712500();
  uStack_8 = 0xffffffff;
  func_0x007274e0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00733d70(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_168 [308];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f14784;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_168,0,0x150);
  func_0x00719470(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x007273e0();
  if (param_2 != '\0') {
    func_0x0072f950();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006e8dd0();
  iStack_8 = 0xffffffff;
  func_0x007273e0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00733e70(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_170 [316];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f147f4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_170,0,0x158);
  func_0x007193d0(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x007272e0();
  if (param_2 != '\0') {
    func_0x0072f890();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006e8dd0();
  iStack_8 = 0xffffffff;
  func_0x007272e0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00733f70(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [300];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f14846;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_154,0,0x13c);
  func_0x006ef160(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x138);
  uStack_28 = *(undefined8 *)(param_1 + 0x130);
  uStack_1c = *(undefined4 *)(param_1 + 0x13c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00727210();
  if (param_2 != '\0') {
    func_0x006e8220(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e8dd0();
  uStack_8 = 0xffffffff;
  func_0x00727210();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00734080(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14c [292];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f14896;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_14c,0,0x134);
  func_0x006ef020(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x130);
  uStack_28 = *(undefined8 *)(param_1 + 0x128);
  uStack_1c = *(undefined4 *)(param_1 + 0x134);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00727140();
  if (param_2 != '\0') {
    func_0x006e7c70(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e8dd0();
  uStack_8 = 0xffffffff;
  func_0x00727140();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00734190(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c0 [120];
  undefined1 *puStack_48;
  char cStack_44;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f14926;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_c0,0,0x98);
  func_0x006eef00(param_1 + 4,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x94);
  uStack_38 = *(undefined8 *)(param_1 + 0x8c);
  uStack_2c = *(undefined4 *)(param_1 + 0x98);
  iStack_14 = CONCAT31((int3)((uint)iStack_14 >> 8),2);
  func_0x00727030();
  if (param_2 != '\0') {
    func_0x006e7780(uStack_38,uStack_30,uStack_2c);
  }
  if ((cStack_44 != '\0') && (puStack_48 != (undefined1 *)0x0)) {
    *puStack_48 = 0;
  }
  iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
  iStack_14._0_1_ = 4;
  func_0x0068de80();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  func_0x006df990();
  iStack_14 = 0xffffffff;
  func_0x00727030();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_007342f0(int param_1)

{
  func_0x006ec6a0(*(undefined8 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x11c),0xffffffff,0);
  return;
}



void FUN_00734320(int param_1)

{
  func_0x006ec170(*(undefined8 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x114),0xffffffff,0);
  return;
}



void FUN_00734350(int param_1)

{
  func_0x006ebcb0(*(undefined8 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74),0xffffffff,0);
  return;
}



undefined4 __thiscall FUN_00735620(undefined4 param_1,byte param_2)

{
  func_0x00725630();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x154);
  }
  return param_1;
}



undefined4 __thiscall FUN_007356c0(undefined4 param_1,byte param_2)

{
  func_0x007256f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14c);
  }
  return param_1;
}



undefined4 __thiscall FUN_00735760(undefined4 param_1,byte param_2)

{
  func_0x007257b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xac);
  }
  return param_1;
}



void __thiscall FUN_00735850(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  uVar2 = param_1[0xd];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar2;
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00737e60(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_184 [348];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f160ef;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_184;
  func_0x006fa9a0(param_1,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x15c);
  uStack_24 = *(undefined8 *)(param_1 + 0x160);
  uStack_1c = *(undefined4 *)(param_1 + 0x168);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0073f360(auStack_184);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f0640();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00737e70(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_124 [272];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1572b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_124,0,0x10c);
  func_0x00726840(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00730780();
  if (param_2 != '\0') {
    func_0x007366b0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00718960();
  uStack_8 = 0xffffffff;
  func_0x00730780();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00737f40(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_124 [272];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1572b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_124,0,0x10c);
  func_0x00726840(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00730780();
  if (param_2 != '\0') {
    func_0x007365d0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00718960();
  uStack_8 = 0xffffffff;
  func_0x00730780();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00738010(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [116];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f15799;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_88,0,0x70);
  func_0x00725500(param_1 + 4,uVar1);
  uStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x58);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x007306c0();
  if (param_2 != '\0') {
    func_0x00736530();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x007189f0();
  uStack_8 = 0xffffffff;
  func_0x007306c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00738100(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [276];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1581a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_138,0,0x120);
  func_0x0070dd30(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x118);
  uStack_1c = *(undefined4 *)(param_1 + 0x120);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x007305d0();
  if (param_2 != '\0') {
    func_0x006ec6a0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c7940();
  uStack_8 = 0xffffffff;
  func_0x007305d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00738220(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_130 [268];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1589a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_130,0,0x118);
  func_0x0070dc90(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x110);
  uStack_1c = *(undefined4 *)(param_1 + 0x118);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x007304e0();
  if (param_2 != '\0') {
    func_0x006ec170(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006c7940();
  uStack_8 = 0xffffffff;
  func_0x007304e0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00738340(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [108];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1591d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_90,0,0x78);
  func_0x0070dbd0(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c = *(undefined4 *)(param_1 + 0x78);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x007303f0();
  if (param_2 != '\0') {
    func_0x006ebcb0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006bfa00();
  uStack_8 = 0xffffffff;
  func_0x007303f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00738450(undefined4 param_1,int param_2)

{
  func_0x006efe60(*(undefined8 *)(param_2 + 0x15c),*(undefined4 *)(param_2 + 0x164),
                  *(undefined4 *)(param_2 + 0x168),param_1);
  return;
}



void __thiscall FUN_00738480(undefined4 param_1,int param_2)

{
  func_0x006e0bb0(*(undefined8 *)(param_2 + 0x1dc),*(undefined4 *)(param_2 + 0x1e4),
                  *(undefined4 *)(param_2 + 0x1d8),param_1);
  return;
}



void __thiscall FUN_007384b0(undefined4 param_1,int param_2)

{
  func_0x006e0630(*(undefined8 *)(param_2 + 0x148),*(undefined4 *)(param_2 + 0x150),
                  *(undefined4 *)(param_2 + 0x144),param_1);
  return;
}



void __thiscall FUN_007384e0(undefined4 param_1,int param_2)

{
  func_0x006e00d0(*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x148),
                  *(undefined4 *)(param_2 + 0x13c),param_1);
  return;
}



void __thiscall FUN_00738510(undefined4 param_1,int param_2)

{
  func_0x006dfb50(*(undefined8 *)(param_2 + 0x158),*(undefined4 *)(param_2 + 0x160),
                  *(undefined4 *)(param_2 + 0x154),param_1);
  return;
}



void FUN_0073b1f0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1dc [372];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f164d2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x1b0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x1cc);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115d3b0;
  }
  memset(auStack_1dc,0,0x184);
  func_0x00722a90(param_2 + 0x3c);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x0073b0b0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x0073f540(auStack_1dc,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x00713510();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0073b0b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0073e970(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14c [40];
  undefined1 auStack_124 [240];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1748a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_14c;
  func_0x006f7870(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0x118);
  uStack_30 = *(undefined8 *)(param_1 + 0x11c);
  uStack_28 = *(undefined4 *)(param_1 + 0x124);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749eb0(auStack_14c);
  uStack_14 = 0;
  puStack_20 = auStack_14c;
  puStack_24 = auStack_124;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006bec40();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e980(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x007038e0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749cd0(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e990(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703a60(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749af0(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e9a0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703b30(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749910(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e9b0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703c00(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749730(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e9c0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703cd0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749550(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e9d0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703da0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749370(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e9e0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703e70(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00749190(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073e9f0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_17c [332];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f1740f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_17c;
  func_0x00703f40(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x14c);
  uStack_2c = *(undefined8 *)(param_1 + 0x150);
  uStack_24 = *(undefined4 *)(param_1 + 0x158);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00748fb0(auStack_17c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006f7a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0073ea00(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1a0 [364];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f16bf4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_1a0,0,0x188);
  func_0x0072e6f0(param_1 + 4,uVar2);
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  func_0x00736c00();
  if (param_2 != '\0') {
    func_0x0073a6a0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 2;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006f0640();
  iStack_8 = 0xffffffff;
  func_0x00736c00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0073eb00(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_184 [348];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f16c46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_184,0,0x16c);
  func_0x006fa9a0(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x168);
  uStack_28 = *(undefined8 *)(param_1 + 0x160);
  uStack_1c = *(undefined4 *)(param_1 + 0x16c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00736b30();
  if (param_2 != '\0') {
    func_0x006efe60(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006f0640();
  uStack_8 = 0xffffffff;
  func_0x00736b30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0073ec10(undefined4 param_1,int param_2)

{
  func_0x006f7210(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073ec40(undefined4 param_1,int param_2)

{
  func_0x006f6d40(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073ec70(undefined4 param_1,int param_2)

{
  func_0x006f6700(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073eca0(undefined4 param_1,int param_2)

{
  func_0x006f6230(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073ecd0(undefined4 param_1,int param_2)

{
  func_0x006f5d60(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073ed00(undefined4 param_1,int param_2)

{
  func_0x006f56e0(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073ed30(undefined4 param_1,int param_2)

{
  func_0x006f5050(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void __thiscall FUN_0073ed60(undefined4 param_1,int param_2)

{
  func_0x006f4b80(*(undefined8 *)(param_2 + 0x14c),*(undefined4 *)(param_2 + 0x154),
                  *(undefined4 *)(param_2 + 0x158),param_1);
  return;
}



void FUN_0073ed90(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_210 [472];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f16cac;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_210,0,0x1e8);
  func_0x006eaec0(param_1 + 8,uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0x1e0);
  uStack_34 = *(undefined8 *)(param_1 + 0x1e4);
  uStack_2c = *(undefined4 *)(param_1 + 0x1ec);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x00736a60();
  if (param_2 != '\0') {
    func_0x006e0bb0(uStack_34,uStack_2c,uStack_38);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006e17c0();
  uStack_14 = 0xffffffff;
  func_0x00736a60();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0073eec0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [324];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f16d1c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_16c,0,0x154);
  func_0x006ead60(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x148);
  uStack_24 = *(undefined8 *)(param_1 + 0x14c);
  uStack_1c = *(undefined4 *)(param_1 + 0x154);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x00736990();
  if (param_2 != '\0') {
    func_0x006e0630(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e1730();
  uStack_8 = 0xffffffff;
  func_0x00736990();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0073efd0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_164 [316];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f16d8c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_164,0,0x14c);
  func_0x006eac20(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x140);
  uStack_24 = *(undefined8 *)(param_1 + 0x144);
  uStack_1c = *(undefined4 *)(param_1 + 0x14c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x007368c0();
  if (param_2 != '\0') {
    func_0x006e00d0(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006e16a0();
  uStack_8 = 0xffffffff;
  func_0x007368c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0073f0e0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_190 [340];
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f16dfc;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_24 = uVar1;
  memset(auStack_190,0,0x164);
  func_0x006eaac0(param_1 + 4,uVar1);
  uStack_3c = *(undefined4 *)(param_1 + 0x158);
  uStack_38 = *(undefined8 *)(param_1 + 0x15c);
  uStack_30 = *(undefined4 *)(param_1 + 0x164);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x007367f0();
  if (param_2 != '\0') {
    func_0x006dfb50(uStack_38,uStack_30,uStack_3c);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x006e1610();
  uStack_14 = 0xffffffff;
  func_0x007367f0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0073f210(undefined4 param_1,int param_2)
