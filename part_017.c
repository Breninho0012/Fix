  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00687070(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec9f8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[4];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_006870f0(int param_1,uint param_2)

{
  code *pcVar1;
  
  param_2 = param_2 & 3;
  *(uint *)(param_1 + 8) = param_2;
  if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  return;
}



void FUN_00687fa0(int param_1)

{
  func_0x00672d90(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_00687fd0(int param_1)

{
  func_0x00672d90(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_00688000(int param_1)

{
  func_0x00672940(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_00688030(int param_1)

{
  func_0x00672940(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_00688060(int param_1)

{
  func_0x006724f0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_00688090(int param_1)

{
  func_0x006724f0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_006880c0(int param_1)

{
  func_0x006720a0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_006880f0(int param_1)

{
  func_0x006720a0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_00688120(int param_1)

{
  func_0x00671c50(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_00688150(int param_1)

{
  func_0x00671c50(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_00688180(int param_1)

{
  func_0x00671800(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_006881b0(int param_1)

{
  func_0x00671800(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_006881e0(int param_1)

{
  func_0x006713b0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_00688210(int param_1)

{
  func_0x006713b0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_00688240(int param_1)

{
  func_0x00670f60(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),0xffffffff,0);
  return;
}



void FUN_00688270(int param_1)

{
  func_0x00670f60(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0),
                  *(undefined4 *)(param_1 + 0xe4),0);
  return;
}



void FUN_006894d0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c56c;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00681b40(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068bb90(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00689700(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115bd44;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006819c0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068bd60(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00689930(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c2d8;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00681840(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068bf30(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00689b60(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c59c;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006816c0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068c100(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00689d90(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115bd64;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00681540(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068c2d0(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00689fc0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c098;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006813c0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068c4a0(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068a1f0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c47c;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00681240(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068c670(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068a420(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eecda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x120,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x13c);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c338;
  }
  memset(&uStack_15c,0,0x100);
  uStack_154 = *(undefined8 *)(param_2 + 0x38);
  uStack_15c = *(undefined4 *)(param_2 + 0x30);
  uStack_158 = *(undefined4 *)(param_2 + 0x34);
  uStack_14c = *(undefined4 *)(param_2 + 0x40);
  uStack_148 = *(undefined4 *)(param_2 + 0x44);
  func_0x00683e20(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 10;
  func_0x006893b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006810a0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x0068c840(&uStack_15c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006893b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068a6c0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x00672d90(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068a7e0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x00672d90(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068a910(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x00672940(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068aa30(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x00672940(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068ab60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x006724f0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068ac80(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x006724f0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068adb0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x006720a0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068aed0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x006720a0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b000(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x00671c50(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b120(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x00671c50(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b250(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x00671800(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b370(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x00671800(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b4a0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x006713b0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b5c0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x006713b0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b6f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [216];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eece6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_fc,0,0xe4);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687330();
  if (param_2 != '\0') {
    func_0x00670f60(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687330();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068b810(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [216];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeceea;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_100,0,0xe8);
  func_0x00683e20(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_28 = *(undefined8 *)(param_1 + 0xdc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00687240();
  if (param_2 != '\0') {
    func_0x00670f60(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x00687240();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068ba50(int param_1)

{
  func_0x0067bbb0(*(undefined8 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),
                  *(undefined4 *)(param_1 + 200),0);
  return;
}



void FUN_0068ba80(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [188];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eecfcd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_e4,0,0xcc);
  func_0x00689300(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068b950();
  if (param_2 != '\0') {
    func_0x0067bbb0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065c300();
  uStack_8 = 0xffffffff;
  func_0x0068b950();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068cbd0(int param_1)

{
  func_0x00681b40(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068cc00(int param_1)

{
  func_0x006819c0(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068cc30(int param_1)

{
  func_0x00681840(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068cc60(int param_1)

{
  func_0x006816c0(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068cc90(int param_1)

{
  func_0x00681540(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068ccc0(int param_1)

{
  func_0x006813c0(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068ccf0(int param_1)

{
  func_0x00681240(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068cd20(int param_1)

{
  func_0x006810a0(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                  *(undefined4 *)(param_1 + 0xfc),0);
  return;
}



void FUN_0068cd50(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x00681b40(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068ce60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x006819c0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068cf70(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x00681840(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068d080(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x006816c0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068d190(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x00681540(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068d2a0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x006813c0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068d3b0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x00681240(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0068d4c0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_118 [240];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eed17d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_118,0,0x100);
  func_0x0068ca10(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0068cad0();
  if (param_2 != '\0') {
    func_0x006810a0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0068cad0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_0068d5d0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -4;
  puStack_c = &DAT_00ee0586;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[1] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[1] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[-3] = std::exception::vftable;
  __std_exception_destroy(param_1 + -2);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



undefined4 * __thiscall FUN_0068d5e0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -1;
  puStack_c = &DAT_00ee0586;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[3] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[4] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[4] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



char * FUN_0068dde0(void)

{
  return "tr1::bad_weak_ptr";
}



void __fastcall FUN_0068de00(undefined4 *param_1)

{
  code *pcVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*param_1;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



// Library Function - Single Match
//  protected: virtual void * __thiscall MemMapBase::`scalar deleting destructor'(unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 * __thiscall ___GMemMapBase__MAEPAXI_Z(undefined4 *param_1,byte param_2)

{
  *param_1 = boost::detail::sp_counted_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



char * FUN_0068dff0(void)

{
  return "boost.beast";
}



char * FUN_0068e050(void)

{
  return "The socket was closed due to a timeout";
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0068e060(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eed1f1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463890) {
    func_0x008ab40d(&DAT_01463890,uVar1);
    if (DAT_01463890 == -1) {
      _DAT_01462f84 = 0;
      _DAT_01462f88 = 0x843c5b10;
      _DAT_01462f8c = 0x3dd0b0ce;
      _DAT_01462f90 = 0;
      _DAT_01462f98 = 0;
      _DAT_01462fa0 = 0;
      _DAT_01462f80 = boost::beast::detail::error_conditions::vftable;
      uStack_8 = 0xffffffff;
      func_0x008ab3bc(&DAT_01463890);
    }
  }
  *param_1 = 1;
  param_1[1] = &DAT_01462f80;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



char * FUN_0068e150(void)

{
  return "The operation timed out";
}



char * FUN_0068ead0(void)

{
  return "boost.beast.websocket";
}



char * FUN_0068eae0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return "The WebSocket stream was gracefully closed at both endpoints";
  case 4:
    return "The WebSocket operation caused a dynamic buffer overflow";
  case 5:
    return "The WebSocket stream produced an incomplete deflate block";
  case 6:
    return "The WebSocket message exceeded the locally configured limit";
  case 7:
    return "The WebSocket handshake was not HTTP/1.1";
  case 8:
    return "The WebSocket handshake method was not GET";
  case 9:
    return "The WebSocket handshake Host field is missing";
  case 10:
    return "The WebSocket handshake Connection field is missing";
  case 0xb:
    return "The WebSocket handshake Connection field is missing the upgrade token";
  case 0xc:
    return "The WebSocket handshake Upgrade field is missing";
  case 0xd:
    return "The WebSocket handshake Upgrade field is missing the websocket token";
  case 0xe:
    return "The WebSocket handshake Sec-WebSocket-Key field is missing";
  case 0xf:
    return "The WebSocket handshake Sec-WebSocket-Key field is invalid";
  case 0x10:
    return "The WebSocket handshake Sec-WebSocket-Version field is missing";
  case 0x11:
    return "The WebSocket handshake Sec-WebSocket-Version field is invalid";
  case 0x12:
    return "The WebSocket handshake Sec-WebSocket-Accept field is missing";
  case 0x13:
    return "The WebSocket handshake Sec-WebSocket-Accept field is invalid";
  case 0x14:
    return "The WebSocket handshake was declined by the remote peer";
  case 0x15:
    return "The WebSocket frame contained an illegal opcode";
  case 0x16:
    return "The WebSocket data frame was unexpected";
  case 0x17:
    return "The WebSocket continuation frame was unexpected";
  case 0x18:
    return "The WebSocket frame contained illegal reserved bits";
  case 0x19:
    return "The WebSocket control frame was fragmented";
  case 0x1a:
    return "The WebSocket control frame size was invalid";
  case 0x1b:
    return "The WebSocket frame was unmasked";
  case 0x1c:
    return "The WebSocket frame was masked";
  case 0x1d:
    return "The WebSocket frame size was not canonical";
  case 0x1e:
    return "The WebSocket frame payload was not valid utf8";
  case 0x1f:
    return "The WebSocket close frame reason code was invalid";
  case 0x20:
    return "The WebSocket close frame payload size was invalid";
  case 0x21:
    return "The WebSocket close frame payload was not valid utf8";
  }
}



undefined4 * __thiscall FUN_0068eca0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  switch(param_3) {
  default:
    *param_2 = param_3;
    param_2[1] = param_1;
    return param_2;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    func_0x0069ac70(1,param_1);
    return param_2;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    func_0x0069ac70(2,param_1);
    return param_2;
  }
}



char * FUN_0068ed30(int param_1)

{
  char *pcVar1;
  
  if ((param_1 == 1) || (pcVar1 = "A WebSocket protocol violation occurred", param_1 != 2)) {
    pcVar1 = "The WebSocket handshake failed";
  }
  return pcVar1;
}



int FUN_00690390(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  int aiStack_78 [5];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int aiStack_3c [2];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00eed406;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piVar6 = (int *)unaff_FS_OFFSET[0xb];
  uVar2 = *(uint *)(*piVar6 + 0xdc);
  puVar3 = &stack0xfffffffc;
  if ((uVar2 & 1) == 0) {
    *(uint *)(*piVar6 + 0xdc) = uVar2 | 1;
    uStack_14 = 0;
    iStack_24 = *(int *)unaff_FS_OFFSET[0xb];
    puVar5 = (undefined4 *)func_0x00690140(uVar4);
    LOCK();
    UNLOCK();
    iVar8 = DAT_01463894 + 1;
    DAT_01463894 = DAT_01463894 + 1;
    *(undefined4 *)(iStack_24 + 0x140) = 0;
    *(undefined4 *)(iStack_24 + 0x144) = 0;
    *(undefined4 *)(iStack_24 + 0x148) = 0x10;
    *(undefined4 *)(iStack_24 + 0x120) = *puVar5;
    *(undefined4 *)(iStack_24 + 0x124) = puVar5[1];
    *(undefined4 *)(iStack_24 + 0x128) = puVar5[2];
    *(undefined4 *)(iStack_24 + 300) = puVar5[3];
    *(undefined4 *)(iStack_24 + 0x130) = puVar5[4];
    *(undefined4 *)(iStack_24 + 0x134) = puVar5[5];
    *(int *)(iStack_24 + 0x138) = puVar5[6] + iVar8;
    *(undefined4 *)(iStack_24 + 0x13c) = puVar5[7];
    piVar6 = (int *)unaff_FS_OFFSET[0xb];
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  uStack_14 = 0xffffffff;
  iVar8 = *piVar6;
  piVar6 = (int *)(iVar8 + 0xe0);
  if (*(int *)(iVar8 + 0x148) == 0x10) {
    puVar1 = (uint *)(iVar8 + 0x140);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(iVar8 + 0x144) = *(int *)(iVar8 + 0x144) + (uint)(0xfffffffe < uVar2);
    *(undefined4 *)(iVar8 + 0x148) = 0;
    aiStack_78[4] = *(int *)(iVar8 + 0x120);
    iStack_64 = *(int *)(iVar8 + 0x124);
    iStack_60 = *(int *)(iVar8 + 0x128);
    iStack_5c = *(int *)(iVar8 + 300);
    iStack_58 = *(int *)(iVar8 + 0x130);
    iStack_54 = *(int *)(iVar8 + 0x134);
    iStack_50 = *(int *)(iVar8 + 0x138);
    iStack_4c = *(int *)(iVar8 + 0x13c);
    uStack_48 = *(uint *)(iVar8 + 0x140) >> 4 | *(uint *)(iVar8 + 0x144) << 0x1c;
    iStack_34 = 0x61707865;
    iStack_30 = 0x3320646e;
    iStack_2c = 0x79622d32;
    iStack_28 = 0x6b206574;
    uStack_44 = *(uint *)(iVar8 + 0x144) >> 4;
    aiStack_3c[0] = -0x21524111;
    iStack_40 = -0x21524111;
    aiStack_78[0] = 0x61707865;
    aiStack_78[1] = 0x3320646e;
    aiStack_78[2] = 0x79622d32;
    aiStack_78[3] = 0x6b206574;
    if ((aiStack_3c < piVar6) || ((int *)(iVar8 + 0x11cU) < aiStack_78)) {
      *piVar6 = 0x61707865;
      *(undefined4 *)(iVar8 + 0xe4) = 0x3320646e;
      *(undefined4 *)(iVar8 + 0xe8) = 0x79622d32;
      *(undefined4 *)(iVar8 + 0xec) = 0x6b206574;
      *(int *)(iVar8 + 0xf0) = aiStack_78[4];
      *(int *)(iVar8 + 0xf4) = iStack_64;
      *(int *)(iVar8 + 0xf8) = iStack_60;
      *(int *)(iVar8 + 0xfc) = iStack_5c;
      *(int *)(iVar8 + 0x100) = iStack_58;
      *(int *)(iVar8 + 0x104) = iStack_54;
      *(int *)(iVar8 + 0x108) = iStack_50;
      *(int *)(iVar8 + 0x10c) = iStack_4c;
      *(uint *)(iVar8 + 0x110) = uStack_48;
      *(uint *)(iVar8 + 0x114) = uStack_44;
      *(undefined4 *)(iVar8 + 0x118) = 0xdeadbeef;
      *(undefined4 *)(iVar8 + 0x11c) = 0xdeadbeef;
      func_0x0069a9a0();
      if ((aiStack_3c < piVar6) || ((int *)(iVar8 + 0x11cU) < aiStack_78)) {
        *piVar6 = *piVar6 + iStack_34;
        *(int *)(iVar8 + 0xe4) = *(int *)(iVar8 + 0xe4) + iStack_30;
        *(int *)(iVar8 + 0xe8) = *(int *)(iVar8 + 0xe8) + iStack_2c;
        *(int *)(iVar8 + 0xec) = *(int *)(iVar8 + 0xec) + iStack_28;
        *(int *)(iVar8 + 0xf0) = aiStack_78[4] + *(int *)(iVar8 + 0xf0);
        *(int *)(iVar8 + 0xf4) = iStack_64 + *(int *)(iVar8 + 0xf4);
        *(int *)(iVar8 + 0xf8) = iStack_60 + *(int *)(iVar8 + 0xf8);
        *(int *)(iVar8 + 0xfc) = iStack_5c + *(int *)(iVar8 + 0xfc);
        *(int *)(iVar8 + 0x100) = iStack_58 + *(int *)(iVar8 + 0x100);
        *(int *)(iVar8 + 0x104) = iStack_54 + *(int *)(iVar8 + 0x104);
        *(int *)(iVar8 + 0x108) = iStack_50 + *(int *)(iVar8 + 0x108);
        *(int *)(iVar8 + 0x10c) = iStack_4c + *(int *)(iVar8 + 0x10c);
        *(uint *)(iVar8 + 0x110) = uStack_48 + *(int *)(iVar8 + 0x110);
        *(uint *)(iVar8 + 0x114) = uStack_44 + *(int *)(iVar8 + 0x114);
        *(int *)(iVar8 + 0x118) = iStack_40 + *(int *)(iVar8 + 0x118);
        *(int *)(iVar8 + 0x11c) = aiStack_3c[0] + *(int *)(iVar8 + 0x11c);
        goto LAB_006905e0;
      }
    }
    else {
      *piVar6 = 0x61707865;
      *(undefined4 *)(iVar8 + 0xe4) = 0x3320646e;
      *(undefined4 *)(iVar8 + 0xe8) = 0x79622d32;
      *(undefined4 *)(iVar8 + 0xec) = 0x6b206574;
      *(int *)(iVar8 + 0xf0) = aiStack_78[4];
      *(int *)(iVar8 + 0xf4) = iStack_64;
      *(int *)(iVar8 + 0xf8) = iStack_60;
      *(int *)(iVar8 + 0xfc) = iStack_5c;
      *(int *)(iVar8 + 0x100) = iStack_58;
      *(int *)(iVar8 + 0x104) = iStack_54;
      *(int *)(iVar8 + 0x108) = iStack_50;
      *(int *)(iVar8 + 0x10c) = iStack_4c;
      *(uint *)(iVar8 + 0x110) = uStack_48;
      *(uint *)(iVar8 + 0x114) = uStack_44;
      *(undefined4 *)(iVar8 + 0x118) = 0xdeadbeef;
      *(undefined4 *)(iVar8 + 0x11c) = 0xdeadbeef;
      func_0x0069a9a0();
    }
    iVar9 = 0x10;
    piVar7 = piVar6;
    do {
      *piVar7 = *piVar7 + *(int *)(((int)aiStack_78 - (int)piVar6) + (int)piVar7);
      iVar9 = iVar9 + -1;
      piVar7 = piVar7 + 1;
    } while (iVar9 != 0);
  }
LAB_006905e0:
  iVar9 = piVar6[*(int *)(iVar8 + 0x148)];
  *(int *)(iVar8 + 0x148) = *(int *)(iVar8 + 0x148) + 1;
  *unaff_FS_OFFSET = iStack_1c;
  return iVar9;
}



uint FUN_00690600(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eed456;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar5 = (int *)unaff_FS_OFFSET[0xb];
  uVar1 = *(uint *)(*piVar5 + 0xd8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*piVar5 + 0xd8) = uVar1 | 1;
    uStack_8 = 0;
    func_0x006902d0(uVar3);
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
  }
  uStack_8 = 0xffffffff;
  iVar2 = *piVar5;
  uVar1 = *(uint *)(iVar2 + 0xcc);
  uVar3 = *(uint *)(iVar2 + 200);
  uVar6 = func_0x00e87d70(uVar3,uVar1,0x4c957f2d,0x5851f42d);
  *(uint *)(iVar2 + 200) = (uint)uVar6 + *(uint *)(iVar2 + 0xd0);
  uVar3 = uVar1 >> 0xd ^ (uVar3 >> 0x1b | uVar1 << 5);
  *(uint *)(iVar2 + 0xcc) =
       (int)((ulonglong)uVar6 >> 0x20) + *(int *)(iVar2 + 0xd4) +
       (uint)CARRY4((uint)uVar6,*(uint *)(iVar2 + 0xd0));
  bVar4 = (byte)(uVar1 >> 0x1b);
  *unaff_FS_OFFSET = iStack_10;
  return uVar3 >> bVar4 | uVar3 << 0x20 - bVar4;
}



char * FUN_006919d0(void)

{
  return "boost.beast.zlib";
}



char * FUN_006919e0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "need buffers";
  case 2:
    return "unexpected end of deflate stream";
  case 3:
    return "need dict";
  case 4:
    return "stream error";
  case 5:
    return "invalid block type";
  case 6:
    return "invalid stored block length";
  case 7:
    return "too many symbols";
  case 8:
    return "invalid code lengths";
  case 9:
    return "invalid bit length repeat";
  case 10:
    return "missing end of block code";
  case 0xb:
    return "invalid literal/length code";
  case 0xc:
    return "invalid distance code";
  case 0xd:
    return "invalid distance";
  case 0xe:
    return "over-subscribed length";
  case 0xf:
    return "incomplete length set";
  default:
    return "beast.zlib error";
  }
}



char __thiscall FUN_00691cc0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(int *)(param_1 + 0x18) - 5;
  uVar5 = 0xffff;
  if (uVar2 < 0xffff) {
    uVar5 = uVar2;
  }
  do {
    uVar2 = *(uint *)(param_1 + 0x74);
    if (uVar2 < 2) {
      func_0x00693730(param_2);
      uVar2 = *(uint *)(param_1 + 0x74);
      if (uVar2 == 0) {
        if (param_3 == 0) {
          return '\0';
        }
        *(undefined4 *)(param_1 + 0x16b4) = 0;
        if (param_3 != 5) {
          if ((*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x6c)) &&
             (func_0x006939f0(param_2,0), *(int *)(param_2 + 0x10) == 0)) {
            return '\0';
          }
          return '\x01';
        }
        func_0x006939f0(param_2,1);
        return (*(int *)(param_2 + 0x10) != 0) + '\x02';
      }
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    uVar2 = *(int *)(param_1 + 0x6c) + uVar2;
    uVar6 = uVar5 + iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0x74) = 0;
    if ((uVar2 == 0) || (uVar6 <= uVar2)) {
      *(uint *)(param_1 + 0x6c) = uVar6;
      *(uint *)(param_1 + 0x74) = uVar2 - uVar6;
      if (iVar4 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x38) + iVar4;
      }
      func_0x00693460(param_2,iVar3,uVar6 - iVar4,0);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x6c);
      func_0x006932f0();
      uVar2 = *(uint *)(param_2 + 0x10);
      if (*(uint *)(param_1 + 0x20) <= *(uint *)(param_2 + 0x10)) {
        uVar2 = *(size_t *)(param_1 + 0x20);
      }
      if (uVar2 != 0) {
        memcpy(*(void **)(param_2 + 0xc),*(void **)(param_1 + 0x1c),uVar2);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + uVar2;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar2;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar2;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - uVar2;
        piVar1 = (int *)(param_1 + 0x20);
        *piVar1 = *piVar1 - uVar2;
        if (*piVar1 == 0) {
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
        }
      }
      if (*(int *)(param_2 + 0x10) == 0) {
        return '\0';
      }
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    uVar2 = *(int *)(param_1 + 0x6c) - iVar4;
    if (*(int *)(param_1 + 0x2c) - 0x106U <= uVar2) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x38) + iVar4;
      }
      func_0x00693460(param_2,iVar4,uVar2,0);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x6c);
      func_0x006932f0();
      uVar2 = *(uint *)(param_2 + 0x10);
      if (*(uint *)(param_1 + 0x20) <= *(uint *)(param_2 + 0x10)) {
        uVar2 = *(size_t *)(param_1 + 0x20);
      }
      if (uVar2 != 0) {
        memcpy(*(void **)(param_2 + 0xc),*(void **)(param_1 + 0x1c),uVar2);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + uVar2;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar2;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar2;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - uVar2;
        piVar1 = (int *)(param_1 + 0x20);
        *piVar1 = *piVar1 - uVar2;
        if (*piVar1 == 0) {
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
        }
      }
      if (*(int *)(param_2 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}



char __thiscall FUN_00691cd0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  int *piStack_10;
  int *piStack_c;
  
  do {
    uVar6 = param_1[0x1d];
    if (uVar6 < 0x106) {
      func_0x00693730(param_2);
      uVar6 = param_1[0x1d];
      if ((uVar6 < 0x106) && (param_3 == 0)) {
        return '\0';
      }
      if (uVar6 == 0) {
        uVar6 = 2;
        if ((uint)param_1[0x1b] < 2) {
          uVar6 = param_1[0x1b];
        }
        param_1[0x5ad] = uVar6;
        if (param_3 != 5) {
          if ((param_1[0x5a8] != 0) && (func_0x006939f0(param_2,0), *(int *)(param_2 + 0x10) == 0))
          {
            return '\0';
          }
          return '\x01';
        }
        func_0x006939f0(param_2,1);
        return (*(int *)(param_2 + 0x10) != 0) + '\x02';
      }
    }
    piStack_10 = param_1 + 0xe;
    puVar8 = (uint *)(param_1 + 0x1b);
    if (2 < uVar6) {
      uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(*puVar8 + 2 + *piStack_10)) & param_1[0x15];
      param_1[0x12] = uVar6;
      *(undefined2 *)(param_1[0x10] + (*puVar8 & param_1[0xd]) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar6 * 2);
      uVar6 = (uint)*(ushort *)(param_1[0x10] + (*puVar8 & param_1[0xd]) * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)*puVar8;
      if ((uVar6 != 0) && (*puVar8 - uVar6 <= param_1[0xb] - 0x106U)) {
        iVar4 = func_0x00693a70(uVar6);
        param_1[0x18] = iVar4;
      }
    }
    if ((uint)param_1[0x18] < 3) {
      bVar2 = *(byte *)(*puVar8 + *piStack_10);
      *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 0;
      iVar4 = param_1[0x5a8];
      param_1[0x5a8] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + param_1[0x5a6]) = 0;
      iVar4 = param_1[0x5a8];
      param_1[0x5a8] = iVar4 + 1;
      *(byte *)(iVar4 + 1 + param_1[0x5a6]) = bVar2;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar2 + 0x25) = (short)param_1[bVar2 + 0x25] + 1;
      bVar9 = param_1[0x5a8] == param_1[0x5a9];
      param_1[0x1d] = param_1[0x1d] + -1;
      *puVar8 = *puVar8 + 1;
      uVar6 = *puVar8;
    }
    else {
      bVar2 = (char)param_1[0x18] - 3;
      uVar3 = (short)*puVar8 - (short)param_1[0x1c];
      *(char *)(param_1[0x5a8] + param_1[0x5a6]) = (char)uVar3;
      iVar4 = param_1[0x5a8];
      param_1[0x5a8] = iVar4 + 1;
      *(char *)(iVar4 + 1 + param_1[0x5a6]) = (char)(uVar3 >> 8);
      iVar4 = param_1[0x5a8];
      param_1[0x5a8] = iVar4 + 1;
      *(byte *)(iVar4 + 1 + param_1[0x5a6]) = bVar2;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + *(byte *)(bVar2 + 0x75a + *param_1) + 0x126) =
           (short)param_1[*(byte *)(bVar2 + 0x75a + *param_1) + 0x126] + 1;
      uVar6 = uVar3 - 1 & 0xffff;
      if (uVar6 < 0x100) {
        bVar2 = *(byte *)(*param_1 + 0x55a + uVar6);
      }
      else {
        bVar2 = *(byte *)((uVar6 >> 7) + 0x65a + *param_1);
      }
      *(short *)(param_1 + bVar2 + 0x262) = (short)param_1[bVar2 + 0x262] + 1;
      bVar9 = param_1[0x5a8] == param_1[0x5a9];
      iVar4 = param_1[0x1d];
      uVar6 = param_1[0x18];
      param_1[0x1d] = iVar4 - uVar6;
      if (((uint)param_1[0x20] < uVar6) || (iVar4 - uVar6 < 3)) {
        uVar6 = param_1[0x1b] + uVar6;
        param_1[0x1b] = uVar6;
        param_1[0x18] = 0;
        uVar7 = (uint)*(byte *)(param_1[0xe] + uVar6);
        param_1[0x12] = uVar7;
        param_1[0x12] =
             (uVar7 << ((byte)param_1[0x16] & 0x1f) ^ (uint)*(byte *)(param_1[0xe] + 1 + uVar6)) &
             param_1[0x15];
      }
      else {
        param_1[0x18] = uVar6 - 1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar6 = ((uint)*(byte *)(param_1[0x1b] + 2U + param_1[0xe]) ^
                  param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
          param_1[0x12] = uVar6;
          *(undefined2 *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) =
               *(undefined2 *)(param_1[0x11] + uVar6 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        uVar6 = param_1[0x1b] + 1;
        param_1[0x1b] = uVar6;
      }
    }
    piStack_c = param_1 + 0x1b;
    piStack_10 = param_1 + 0xe;
    if (bVar9) {
      iVar4 = param_1[0x17];
      if (iVar4 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piStack_10 + iVar4;
      }
      func_0x00693460(param_2,iVar5,uVar6 - iVar4,0);
      param_1[0x17] = *piStack_c;
      func_0x006932f0();
      uVar6 = *(uint *)(param_2 + 0x10);
      if ((uint)param_1[8] <= *(uint *)(param_2 + 0x10)) {
        uVar6 = param_1[8];
      }
      if (uVar6 != 0) {
        memcpy(*(void **)(param_2 + 0xc),(void *)param_1[7],uVar6);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + uVar6;
        param_1[7] = param_1[7] + uVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar6;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - uVar6;
        piVar1 = param_1 + 8;
        *piVar1 = *piVar1 - uVar6;
        if (*piVar1 == 0) {
          param_1[7] = param_1[5];
        }
      }
      if (*(int *)(param_2 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}



char __thiscall FUN_00691ce0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puStack_10;
  undefined1 uStack_5;
  
  do {
    uVar6 = param_1[0x1d];
    if (uVar6 < 0x106) {
      func_0x00693730(param_2);
      uVar6 = param_1[0x1d];
      if ((uVar6 < 0x106) && (param_3 == 0)) {
        return '\0';
      }
      puStack_10 = (uint *)(param_1 + 0x1b);
      if (uVar6 == 0) {
        if (param_1[0x1a] != 0) {
          func_0x006933f0(*(undefined1 *)(param_1[0xe] + -1 + param_1[0x1b]),&uStack_5);
          param_1[0x1a] = 0;
        }
        uVar6 = 2;
        if (*puStack_10 < 2) {
          uVar6 = *puStack_10;
        }
        param_1[0x5ad] = uVar6;
        if (param_3 != 5) {
          if ((param_1[0x5a8] != 0) && (func_0x006939f0(param_2,0), *(int *)(param_2 + 0x10) == 0))
          {
            return '\0';
          }
          return '\x01';
        }
        func_0x006939f0(param_2,1);
        return (*(int *)(param_2 + 0x10) != 0) + '\x02';
      }
    }
    puVar8 = (uint *)(param_1 + 0x1b);
    puStack_10 = (uint *)0x0;
    if (2 < uVar6) {
      uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + *puVar8)) & param_1[0x15];
      param_1[0x12] = uVar6;
      *(undefined2 *)(param_1[0x10] + (*puVar8 & param_1[0xd]) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar6 * 2);
      puStack_10 = (uint *)(uint)*(ushort *)(param_1[0x10] + (*puVar8 & param_1[0xd]) * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)*puVar8;
    }
    uVar7 = 2;
    uVar6 = param_1[0x18];
    param_1[0x19] = param_1[0x1c];
    param_1[0x1e] = uVar6;
    param_1[0x18] = 2;
    if (((puStack_10 != (uint *)0x0) && (uVar6 < (uint)param_1[0x20])) &&
       (*puVar8 - (int)puStack_10 <= param_1[0xb] - 0x106U)) {
      uVar7 = func_0x00693a70(puStack_10);
      param_1[0x18] = uVar7;
      if ((uVar7 < 6) &&
         ((param_1[0x22] == 1 || ((uVar7 == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c])))))
         )) {
        param_1[0x18] = 2;
        uVar7 = 2;
      }
    }
    uVar6 = param_1[0x1e];
    if ((uVar6 < 3) || (uVar6 < uVar7)) {
      piVar1 = param_1 + 0x1b;
      if (param_1[0x1a] == 0) {
        *piVar1 = *piVar1 + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        param_1[0x1a] = 1;
      }
      else {
        bVar3 = *(byte *)(*piVar1 + -1 + param_1[0xe]);
        *(undefined1 *)(param_1[0x5a6] + param_1[0x5a8]) = 0;
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 0;
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(byte *)(param_1[0x5a8] + param_1[0x5a6]) = bVar3;
        param_1[0x5a8] = param_1[0x5a8] + 1;
        *(short *)(param_1 + bVar3 + 0x25) = (short)param_1[bVar3 + 0x25] + 1;
        if (param_1[0x5a8] == param_1[0x5a9]) {
          iVar2 = param_1[0x17];
          if (iVar2 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_1[0xe] + iVar2;
          }
          func_0x00693460(param_2,iVar4,*piVar1 - iVar2,0);
          param_1[0x17] = *piVar1;
          func_0x006932f0();
          uVar6 = *(uint *)(param_2 + 0x10);
          if ((uint)param_1[8] <= *(uint *)(param_2 + 0x10)) {
            uVar6 = param_1[8];
          }
          if (uVar6 != 0) {
            memcpy(*(void **)(param_2 + 0xc),(void *)param_1[7],uVar6);
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + uVar6;
            param_1[7] = param_1[7] + uVar6;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar6;
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - uVar6;
            piVar1 = param_1 + 8;
            *piVar1 = *piVar1 - uVar6;
            if (*piVar1 == 0) {
              param_1[7] = param_1[5];
            }
          }
        }
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        if (*(int *)(param_2 + 0x10) == 0) {
          return '\0';
        }
      }
    }
    else {
      iVar2 = param_1[0x1d];
      puVar8 = (uint *)(param_1 + 0x1b);
      uVar7 = *puVar8;
      puStack_10._0_1_ = (char)uVar6;
      uVar5 = ((short)uVar7 - (short)param_1[0x19]) - 1;
      *(char *)(param_1[0x5a6] + param_1[0x5a8]) = (char)uVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(char *)(param_1[0x5a8] + param_1[0x5a6]) = (char)(uVar5 >> 8);
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a8] + param_1[0x5a6]) = (char)puStack_10 - 3U;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + *(byte *)((byte)((char)puStack_10 - 3U) + 0x75a + *param_1) + 0x126) =
           (short)param_1[*(byte *)((byte)((char)puStack_10 - 3U) + 0x75a + *param_1) + 0x126] + 1;
      uVar6 = uVar5 - 1 & 0xffff;
      if (uVar6 < 0x100) {
        bVar3 = *(byte *)(*param_1 + 0x55a + uVar6);
      }
      else {
        bVar3 = *(byte *)((uVar6 >> 7) + 0x65a + *param_1);
      }
      *(short *)(param_1 + bVar3 + 0x262) = (short)param_1[bVar3 + 0x262] + 1;
      uStack_5 = param_1[0x5a8] == param_1[0x5a9];
      param_1[0x1d] = param_1[0x1d] + (1 - param_1[0x1e]);
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        uVar6 = param_1[0x1b] + 1;
        param_1[0x1b] = uVar6;
        if (uVar6 <= iVar2 + -3 + uVar7) {
          uVar9 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xe] + 2 + uVar6)) & param_1[0x15];
          param_1[0x12] = uVar9;
          *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar6) * 2) =
               *(undefined2 *)(param_1[0x11] + uVar9 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)*puVar8;
          uVar6 = *puVar8;
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      param_1[0x1b] = uVar6 + 1;
      if (((bool)uStack_5) && (func_0x006939f0(param_2,0), *(int *)(param_2 + 0x10) == 0)) {
        return '\0';
      }
    }
  } while( true );
}



undefined4 * __thiscall FUN_00697180(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eed880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = param_1[0x11];
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,param_1[0x13] - iVar1 >> 2,uVar2);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00697320(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eed913;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_006974f0(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int *unaff_FS_OFFSET;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eeda0d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_8._0_1_ = 0;
  iStack_8._1_3_ = 0;
  iVar10 = func_0x00e7307f(param_1 + 0x14,uStack_14);
  if (iVar10 == 0) {
    iVar10 = *(int *)(param_1 + 0x40);
    if (iVar10 != 0x7fffffff) {
      iStack_8._0_1_ = 1;
      uVar16 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
      uStack_28 = CONCAT44(uVar16,(undefined4)uStack_28);
      if (uVar16 <= (uint)((int)puStack_18 - (int)(undefined4 *)uStack_20 >> 3)) {
LAB_00697663:
        piVar4 = *(int **)(param_1 + 0x48);
        uVar6 = uStack_20;
        for (piVar14 = *(int **)(param_1 + 0x44); uStack_20 = uVar6, piVar14 != piVar4;
            piVar14 = piVar14 + 1) {
          puVar1 = (undefined8 *)(*piVar14 + 4);
          uVar5 = *(undefined4 *)puVar1;
          iVar10 = *(int *)(*piVar14 + 8);
          uStack_28 = *puVar1;
          if (iVar10 != 0) {
            LOCK();
            *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
            UNLOCK();
          }
          iStack_8 = CONCAT31(iStack_8._1_3_,4);
          uStack_20._4_4_ = (undefined4 *)((ulonglong)uVar6 >> 0x20);
          puVar12 = uStack_20._4_4_;
          if (uStack_20._4_4_ == puStack_18) {
            func_0x0069fc40(puVar12,&uStack_28);
          }
          else {
            uStack_28._4_4_ = (int *)0x0;
            *uStack_20._4_4_ = uVar5;
            uStack_20._4_4_[1] = iVar10;
            uStack_28 = 0;
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            uStack_20._0_4_ = (undefined4 *)uVar6;
            uStack_20 = CONCAT44(uStack_20._4_4_ + 2,(undefined4 *)uStack_20);
          }
          iStack_8._0_1_ = 1;
          if (uStack_28._4_4_ != (int *)0x0) {
            piVar17 = uStack_28._4_4_ + 2;
            LOCK();
            iVar10 = *piVar17;
            *piVar17 = *piVar17 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              pcVar3 = *(code **)(*uStack_28._4_4_ + 8);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
          uVar6 = uStack_20;
        }
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        func_0x00e730b2(param_1 + 0x14);
        puVar8 = uStack_20._4_4_;
        for (puVar12 = (undefined4 *)uStack_20; puVar12 != puVar8; puVar12 = puVar12 + 2) {
          piVar14 = (int *)*puVar12;
          piVar4 = (int *)puVar12[1];
          if (piVar4 != (int *)0x0) {
            LOCK();
            piVar4[2] = piVar4[2] + 1;
            UNLOCK();
          }
          iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
          iStack_8._0_1_ = 10;
          uStack_28._0_4_ = 0;
          piVar17 = piVar4;
          if ((piVar4 != (int *)0x0) &&
             (uStack_28._4_4_ = piVar4, cVar9 = func_0x0068de20(), cVar9 == '\0')) {
            piVar17 = (int *)0x0;
          }
          piVar15 = (int *)0x0;
          if (piVar17 != (int *)0x0) {
            piVar15 = piVar14;
          }
          uStack_28 = CONCAT44(piVar17,piVar15);
          iStack_8._0_1_ = 10;
          if (piVar15 != (int *)0x0) {
            pcVar3 = *(code **)(*piVar15 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
          iStack_8._0_1_ = 9;
          if (piVar17 != (int *)0x0) {
            piVar14 = piVar17 + 1;
            LOCK();
            iVar10 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              pcVar3 = *(code **)(*piVar17 + 4);
              _guard_check_icall();
              (*pcVar3)();
              piVar14 = piVar17 + 2;
              LOCK();
              iVar10 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                pcVar3 = *(code **)(*piVar17 + 8);
                _guard_check_icall();
                (*pcVar3)();
              }
            }
          }
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          if (piVar4 != (int *)0x0) {
            piVar14 = piVar4 + 2;
            LOCK();
            iVar10 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              pcVar3 = *(code **)(*piVar4 + 8);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
        }
        iStack_8 = 0xffffffff;
        if ((undefined4 *)uStack_20 != (undefined4 *)0x0) {
          func_0x0069cb60((undefined4 *)uStack_20);
          func_0x0046e710((undefined4 *)uStack_20,
                          (int)puStack_18 - (int)(undefined4 *)uStack_20 >> 3);
          uStack_20 = 0;
          puStack_18 = (undefined4 *)0x0;
        }
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      if (uVar16 < 0x20000000) {
        iVar10 = (int)uStack_20._4_4_ - (int)(undefined4 *)uStack_20;
        iVar11 = func_0x0048cb90();
        iStack_8 = CONCAT31(iStack_8._1_3_,2);
        func_0x0069f5a0(iVar11,&uStack_20);
        if ((undefined4 *)uStack_20 != (undefined4 *)0x0) {
          iVar7 = (int)uStack_20._4_4_;
          iVar13 = (int)(undefined4 *)uStack_20;
          if ((undefined4 *)uStack_20 != uStack_20._4_4_) {
            do {
              iStack_8 = CONCAT31(iStack_8._1_3_,2);
              piVar14 = *(int **)(iVar13 + 4);
              if (piVar14 != (int *)0x0) {
                piVar4 = piVar14 + 2;
                LOCK();
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  pcVar3 = *(code **)(*piVar14 + 8);
                  _guard_check_icall();
                  (*pcVar3)();
                }
              }
              iVar13 = iVar13 + 8;
            } while (iVar13 != iVar7);
          }
          func_0x0046e710((undefined4 *)uStack_20,
                          (int)puStack_18 - (int)(undefined4 *)uStack_20 >> 3);
          uVar16 = (uint)uStack_28._4_4_;
        }
        uStack_20 = CONCAT44(iVar11 + (iVar10 >> 3) * 8,iVar11);
        puStack_18 = (undefined4 *)(iVar11 + uVar16 * 8);
        goto LAB_00697663;
      }
      goto LAB_006978bd;
    }
  }
  else {
    iVar10 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x40) = iVar10 + -1;
  func_0x00e7304a(6);
LAB_006978bd:
  func_0x0046e700();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



undefined * Catch_00697e18(void)

{
  return &DAT_00697e1e;
}



void __thiscall FUN_006988e0(code *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_54 [4];
  undefined4 *puStack_50;
  uint auStack_4c [2];
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  uint uStack_18;
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eedf53;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  pcStack_14 = param_1;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    puVar4 = (undefined4 *)(param_5 * 0x4c + *param_3);
    uStack_30 = *puVar4;
    uStack_2c = puVar4[1];
    uStack_28 = puVar4[2];
    uStack_24 = puVar4[3];
    uStack_18 = puVar4[6];
    uStack_20 = *(ulonglong *)(puVar4 + 4);
    htons(*(u_short *)(param_1 + 0x100));
    if (*(int **)(param_1 + 0x10c) == (int *)0x0) {
      iVar1 = **(int **)(param_1 + 0x104);
      func_0x00468610(&uStack_3c);
      iStack_8._0_1_ = 7;
      pcStack_14 = FUN_00698b60;
      uVar3 = func_0x0064cf90();
      iStack_8._0_1_ = 8;
      puVar4 = (undefined4 *)(param_5 * 0x4c + *param_3);
      func_0x006a0ea0(uVar3,iVar1 + 0x14,*puVar4,puVar4[1],puVar4[2],puVar4[3],
                      *(undefined8 *)(puVar4 + 4),puVar4[6]);
      func_0x006a04a0();
      puStack_50 = &uStack_24;
      iStack_8._0_1_ = 7;
      func_0x0052b260();
    }
    else {
      iVar1 = **(int **)(param_1 + 0x10c);
      func_0x00468610(auStack_54);
      iStack_8._0_1_ = 3;
      pcStack_14 = FUN_00698b60;
      uVar3 = func_0x0064cf90();
      iStack_8._0_1_ = 4;
      puVar4 = (undefined4 *)(param_5 * 0x4c + *param_3);
      func_0x006a0ea0(uVar3,iVar1 + 0x1c,*puVar4,puVar4[1],puVar4[2],puVar4[3],
                      *(undefined8 *)(puVar4 + 4),puVar4[6]);
      func_0x006a04a0();
      puStack_34 = auStack_44;
      iStack_8._0_1_ = 3;
      func_0x0052b260();
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FUN_00468340();
  }
  else {
    uVar3 = func_0x00465870(auStack_4c,uVar2);
    iStack_8._0_1_ = 1;
    uVar6 = 0xd;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    pcVar5 = "resolve error";
    func_0x0046bc40();
    iStack_8._0_1_ = 2;
    func_0x0069a1b0(&uStack_2c,uVar3,pcVar5,uVar6);
    iStack_8._0_1_ = 1;
    if (0xf < uStack_18) {
      func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
    }
    uStack_20 = uStack_20 & 0xffffffff;
    uStack_18 = 0xf;
    uStack_2c = uStack_2c & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_3c = 0;
    uStack_38 = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  }
  iStack_8 = 0xffffffff;
  func_0x00467f30();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00698b60(code *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte bVar6;
  code *pcVar7;
  code *pcVar8;
  undefined4 ****ppppuVar9;
  code *pcVar10;
  int *unaff_FS_OFFSET;
  byte bVar11;
  undefined4 uStack_1f3;
  undefined4 uStack_1ef;
  undefined4 uStack_1eb;
  undefined4 uStack_1e7;
  undefined3 uStack_1e3;
  undefined4 uStack_137;
  undefined4 uStack_133;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined8 uStack_127;
  undefined1 uStack_11f;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int *piStack_f4;
  code *pcStack_f0;
  uint uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *pcStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  code *pcStack_cc;
  undefined4 ***apppuStack_80 [5];
  uint uStack_6c;
  undefined1 auStack_68 [48];
  byte bStack_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  undefined8 uStack_27;
  undefined1 uStack_1f;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eee04d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_cc = param_1;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    pcVar10 = param_1 + 0xc;
    uStack_1c._4_4_ = pcVar10;
    if (0xf < *(uint *)(param_1 + 0x20)) {
      uStack_1c._4_4_ = *(code **)pcVar10;
    }
    if (((*(uint *)(param_1 + 0x1c) < 3) ||
        (pcVar8 = uStack_1c._4_4_ + *(uint *)(param_1 + 0x1c), pcVar7 = (code *)func_0x00e727d0(),
        pcVar7 == pcVar8)) || (pcVar7 != uStack_1c._4_4_)) {
      uVar2 = *(uint *)(param_1 + 0x1c);
      if (0xf < *(uint *)(param_1 + 0x20)) {
        pcVar10 = *(code **)pcVar10;
      }
      if (((uVar2 < 3) || (pcVar8 = (code *)func_0x00e727d0(), pcVar8 == pcVar10 + uVar2)) ||
         (pcVar8 != pcVar10)) {
        pcVar10 = pcStack_cc;
        func_0x0083f5e0();
        iStack_8 = 0xb;
        puStack_d0 = *(undefined4 **)(pcVar10 + 0x104);
        func_0x00468610();
        iStack_8._0_1_ = 0xc;
        pcStack_cc = FUN_006994f0;
        puStack_d4 = (undefined4 *)func_0x0064cf90();
        iStack_8._0_1_ = 0xd;
        ppppuVar9 = apppuStack_80;
        if (0xf < uStack_6c) {
          ppppuVar9 = (undefined4 ****)apppuStack_80[0];
        }
        uStack_1c = CONCAT44(ppppuVar9,(undefined4)uStack_1c);
        bStack_38 = 0;
        uStack_27 = 0;
        uStack_37 = 0;
        uStack_33 = 0;
        uStack_2f = 0;
        uStack_2b = 0;
        uStack_1f = 0;
        memset(auStack_68,0,0x30);
        puVar5 = puStack_d0;
        pcStack_cc = _guard_check_icall;
        func_0x0069c6e0();
        bVar11 = bStack_38;
        iStack_8 = CONCAT31(iStack_8._1_3_,0xe);
        uStack_127 = 0;
        uStack_11f = 0;
        uStack_137 = 0;
        uStack_133 = 0;
        uStack_12f = 0;
        uStack_12b = 0;
        bVar6 = 0;
        if (&uStack_137 != &uStack_37) {
          uStack_1e7 = CONCAT13(0x99,(undefined3)uStack_1e7);
          uStack_1e3 = 0x698f;
          memcpy(&uStack_137,&uStack_37,bStack_38 + 1);
          bVar6 = bVar11;
        }
        uStack_1f3 = 0;
        uStack_1ef = 0;
        uStack_1eb = 0;
        uStack_1e7 = 0;
        uStack_1e3 = 0;
        bVar11 = 0;
        if (&uStack_1f3 != &uStack_137) {
          memcpy(&uStack_1f3,&uStack_137,bVar6 + 1);
          bVar11 = bVar6;
        }
        func_0x006a1430(puStack_d4,puVar5,auStack_68,bVar11);
        func_0x006a0530();
        iStack_8._0_1_ = 0xd;
        func_0x006352d0();
        puStack_d4 = &uStack_fc;
        iStack_8._0_1_ = 0xc;
        func_0x0052b260();
        iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
        FUN_00468340();
        iStack_8 = 0xffffffff;
        func_0x00648c40();
        goto LAB_00699048;
      }
    }
    pcVar10 = pcStack_cc;
    uStack_1c = 0;
    func_0x00468610();
    iStack_118 = **(int **)(pcVar10 + 0x10c);
    if (uStack_1c._4_4_ != (code *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    pcStack_d8 = pcVar10;
    iStack_11c = iStack_118 + 0x1c;
    iStack_118 = iStack_118 + 0x28;
    puStack_d4 = &uStack_f8;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = (undefined4)uStack_1c;
    piStack_f4 = (int *)uStack_1c._4_4_;
    uStack_e0 = 0;
    uStack_dc = 0;
    iStack_8._1_3_ = 0;
    pcStack_f0 = pcVar10;
    iStack_8._0_1_ = 7;
    func_0x006a97a0();
    piVar4 = piStack_f4;
    puStack_d0 = &uStack_f8;
    iStack_8 = CONCAT31(iStack_8._1_3_,4);
    if (piStack_f4 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_f4[1] + -1;
      piStack_f4[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar10 = *(code **)*piStack_f4;
        _guard_check_icall();
        (*pcVar10)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar10 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          (*pcVar10)();
        }
      }
    }
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  else {
    func_0x00465870();
    iStack_8 = 0;
    piStack_f4 = (int *)0x0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    pcStack_f0 = (code *)0x0;
    func_0x0046bc40();
    iStack_8._0_1_ = 1;
    func_0x0069a1b0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < pcStack_f0) {
      func_0x0046b1f0();
    }
    piStack_f4 = (int *)0x0;
    pcStack_f0 = (code *)0xf;
    uStack_104 = uStack_104 & 0xffffff00;
    iStack_8 = 0xffffffff;
    if ((code *)0xf < pcStack_d8) {
      func_0x0046b1f0();
    }
    uStack_dc = 0;
    pcStack_d8 = (code *)0xf;
    uStack_ec = uStack_ec & 0xffffff00;
  }
LAB_00699048:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_006994f0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_FS_OFFSET;
  uint uStack_8c;
  uint *puStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 uStack_7c;
  uint *puStack_78;
  uint uStack_74;
  uint auStack_64 [8];
  undefined1 auStack_44 [12];
  uint uStack_38;
  undefined1 auStack_34 [8];
  uint *puStack_2c;
  code *pcStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eee279;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_24 = param_1;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      pcStack_28 = (code *)&uStack_8c;
      *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x2c) = 1;
      uStack_8c = 0;
      puStack_88 = (uint *)0x0;
      uStack_84 = 0;
      pcStack_80 = (char *)0x0;
      uStack_7c = 0;
      puStack_78 = (uint *)0x0;
      func_0x0046bc40(&DAT_0112e1b4,0);
      iStack_14 = 0xffffffff;
      func_0x0069a520(0);
      if (*(int *)(param_1 + 0x10c) == 0) {
        uVar1 = func_0x00468610(auStack_34);
        iStack_14 = 0xb;
        pcStack_28 = FUN_00699c20;
        uVar1 = func_0x0064cf90(uVar1);
        iStack_14._0_1_ = 0xc;
        func_0x006998f0(param_1 + 0x11c,uVar1);
        puStack_2c = auStack_64 + 2;
        iStack_14 = CONCAT31(iStack_14._1_3_,0xb);
        func_0x0052b260();
        iStack_14 = 0xffffffff;
        FUN_00468340();
        if (*(int *)(param_1 + 0x144) == 0) goto LAB_00699839;
        uVar1 = func_0x00468610(auStack_34);
        iStack_14 = 0xf;
        pcStack_28 = FUN_00699990;
        uVar1 = func_0x0064cf90(uVar1,extraout_ECX_00);
        iStack_14._0_1_ = 0x10;
        uVar2 = func_0x0069c510(*(undefined4 *)
                                 (*(int *)(*(int *)(iStack_24 + 0x138) +
                                          (*(int *)(iStack_24 + 0x13c) - 1U &
                                          *(uint *)(iStack_24 + 0x140)) * 4) + 0x10));
        func_0x00698840(uVar2,uVar1);
        iStack_14 = CONCAT31(iStack_14._1_3_,0xf);
      }
      else {
        uVar1 = func_0x00468610(auStack_34);
        iStack_14 = 3;
        pcStack_28 = FUN_00699c20;
        uVar1 = func_0x0064cf90(uVar1);
        iStack_14._0_1_ = 4;
        func_0x00699850(param_1 + 0x11c,uVar1);
        puStack_2c = (uint *)auStack_44;
        iStack_14 = CONCAT31(iStack_14._1_3_,3);
        func_0x0052b260();
        iStack_14 = 0xffffffff;
        FUN_00468340();
        if (*(int *)(param_1 + 0x144) == 0) goto LAB_00699839;
        uVar1 = func_0x00468610(auStack_34);
        iStack_14 = 7;
        pcStack_28 = FUN_00699990;
        uVar1 = func_0x0064cf90(uVar1,extraout_ECX);
        iStack_14._0_1_ = 8;
        uVar2 = func_0x0069c510(*(undefined4 *)
                                 (*(int *)(*(int *)(iStack_24 + 0x138) +
                                          (*(int *)(iStack_24 + 0x13c) - 1U &
                                          *(uint *)(iStack_24 + 0x140)) * 4) + 0x10));
        func_0x006987a0(uVar2,uVar1);
        iStack_14 = CONCAT31(iStack_14._1_3_,7);
      }
      puStack_2c = auStack_64 + 2;
      func_0x0052b260();
      iStack_14 = 0xffffffff;
      FUN_00468340();
    }
  }
  else {
    puStack_78 = auStack_64 + 6;
    uStack_7c = 0x699555;
    puStack_20 = &stack0xfffffffc;
    uVar1 = func_0x00465870();
    iStack_14 = 0;
    uStack_7c = 0xf;
    pcStack_80 = "handshake error";
    auStack_64[4] = 0;
    auStack_64[0] = 0;
    auStack_64[1] = 0;
    auStack_64[2] = 0;
    auStack_64[3] = 0;
    auStack_64[5] = 0;
    uStack_84 = 0x699582;
    func_0x0046bc40();
    iStack_14._0_1_ = 1;
    puStack_88 = auStack_64;
    uStack_8c = 0x699592;
    uStack_84 = uVar1;
    func_0x0069a1b0();
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_64[5]) {
      uStack_8c = auStack_64[5];
      func_0x0046b1f0(auStack_64,auStack_64[0]);
    }
    auStack_64[4] = 0;
    auStack_64[5] = 0xf;
    auStack_64[0] = auStack_64[0] & 0xffffff00;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_38) {
      uStack_8c = uStack_38;
      func_0x0046b1f0(auStack_64 + 6,auStack_64[6]);
    }
  }
LAB_00699839:
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00699990(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_FS_OFFSET;
  undefined4 auStack_58 [5];
  uint uStack_44;
  uint auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_20 [8];
  code *pcStack_18;
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eee33b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_14 = (code *)param_1;
  if (((param_2[2] & 1U) != 0) && ((param_2[2] != 1 || (*param_2 != 0)))) {
    uVar3 = func_0x00465870(auStack_58);
    iStack_8 = 0;
    uStack_30 = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    func_0x0046bc40("send error",10);
    iStack_8._0_1_ = 1;
    func_0x0069a1b0(auStack_40,uVar3);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
    }
    uStack_30 = 0;
    uStack_2c = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_44) {
      func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  puVar1 = *(undefined4 **)
            (*(int *)(param_1 + 0x138) +
            (*(int *)(param_1 + 0x13c) - 1U & *(uint *)(param_1 + 0x140)) * 4);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar2);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iVar4 = *(int *)(param_1 + 0x144) + -1;
  *(int *)(param_1 + 0x144) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  else {
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  }
  if ((*(char *)(param_1 + 0xe4) == '\0') && (iVar4 != 0)) {
    pcStack_18 = *(code **)(param_1 + 0x10c);
    if (pcStack_18 == (code *)0x0) {
      uVar3 = func_0x00468610(auStack_20);
      iStack_8 = 6;
      pcStack_18 = FUN_00699990;
      uVar3 = func_0x0064cf90(uVar3,extraout_ECX_00);
      iStack_8._0_1_ = 7;
      uVar5 = func_0x0069c510(*(undefined4 *)
                               (*(int *)(*(int *)((int)pcStack_14 + 0x138) +
                                        (*(int *)((int)pcStack_14 + 0x13c) - 1U &
                                        *(uint *)((int)pcStack_14 + 0x140)) * 4) + 0x10));
      func_0x00698840(uVar5,uVar3);
      pcStack_14 = (code *)(auStack_40 + 2);
      iStack_8 = CONCAT31(iStack_8._1_3_,6);
    }
    else {
      uVar3 = func_0x00468610(auStack_20);
      iStack_8 = 2;
      pcStack_14 = FUN_00699990;
      uVar3 = func_0x0064cf90(uVar3,extraout_ECX);
      iStack_8._0_1_ = 3;
      uVar5 = func_0x0069c510(*(undefined4 *)
                               (*(int *)(*(int *)(param_1 + 0x138) +
                                        (*(int *)(param_1 + 0x13c) - 1U & *(uint *)(param_1 + 0x140)
                                        ) * 4) + 0x10));
      func_0x006987a0(uVar5,uVar3);
      pcStack_18 = (code *)(auStack_40 + 2);
      iStack_8 = CONCAT31(iStack_8._1_3_,2);
    }
    func_0x0052b260();
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00699c20(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_94 [8];
  undefined4 uStack_8c;
  uint *puStack_88;
  uint uStack_84;
  uint uStack_80;
  uint *puStack_7c;
  undefined4 uStack_78;
  char *pcStack_74;
  undefined1 *puStack_70;
  undefined8 *puStack_6c;
  uint uStack_68;
  undefined4 auStack_5c [5];
  uint uStack_48;
  uint auStack_44 [6];
  undefined1 auStack_2c [8];
  int iStack_24;
  uint *puStack_20;
  undefined8 uStack_1c;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eee3f6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_68 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_14 = (undefined1 *)param_1;
  if (*(char *)(*(int *)(param_1 + 0x90) + 0x2e) == '\0') {
    if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
      if (*(char *)(param_1 + 0xe4) == '\0') {
        uStack_1c = (longlong)*(int *)(param_1 + 0xe0) * 1000000000;
        puStack_6c = &uStack_1c;
        puStack_70 = (undefined1 *)0x699daa;
        func_0x0064b020();
        puStack_70 = auStack_2c;
        pcStack_74 = (char *)0x699db5;
        uStack_78 = func_0x00468610();
        iStack_8 = 4;
        uStack_1c._4_4_ = FUN_0069a090;
        puStack_7c = (uint *)0x699dd0;
        uStack_78 = func_0x0064cf90();
        iStack_8._0_1_ = 5;
        pcStack_74 = (char *)(param_1 + 0xc0);
        puStack_7c = (uint *)(param_1 + 0xa0);
        uStack_80 = 0x699de7;
        func_0x006a72b0();
        puStack_20 = auStack_44 + 2;
        iStack_8 = CONCAT31(iStack_8._1_3_,4);
        uStack_80 = 0x699dfd;
        func_0x0052b260();
        iStack_8 = 0xffffffff;
        uStack_80 = 0x699e0c;
        FUN_00468340();
        puVar1 = puStack_14;
        iStack_24 = *(int *)((int)puStack_14 + 0x120);
        puStack_20 = (uint *)(*(int *)((int)puStack_14 + 0x124) - iStack_24);
        puStack_14 = auStack_94;
        func_0x0069c870();
        iStack_8 = 0xffffffff;
        func_0x0069a520(1);
        uVar2 = *(undefined4 *)((int)puVar1 + 0x11c);
        *(undefined4 *)((int)puVar1 + 0x120) = uVar2;
        *(undefined4 *)((int)puVar1 + 0x124) = uVar2;
        *(undefined4 *)((int)puVar1 + 0x128) = uVar2;
        puStack_14 = *(undefined1 **)((int)puVar1 + 0x10c);
        if (puStack_14 == (undefined1 *)0x0) {
          uVar2 = func_0x00468610(auStack_2c);
          iStack_8 = 0xd;
          uStack_1c._4_4_ = FUN_00699c20;
          uVar2 = func_0x0064cf90(uVar2);
          iStack_8._0_1_ = 0xe;
          func_0x006998f0((int)puVar1 + 0x11c,uVar2);
          iStack_8 = CONCAT31(iStack_8._1_3_,0xd);
        }
        else {
          uVar2 = func_0x00468610(auStack_2c);
          iStack_8 = 9;
          uStack_1c._4_4_ = FUN_00699c20;
          uVar2 = func_0x0064cf90(uVar2);
          iStack_8._0_1_ = 10;
          func_0x00699850((int)puVar1 + 0x11c,uVar2);
          iStack_8 = CONCAT31(iStack_8._1_3_,9);
        }
        puStack_20 = auStack_44 + 2;
        func_0x0052b260();
        iStack_8 = 0xffffffff;
        FUN_00468340();
      }
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puStack_6c = (undefined8 *)auStack_5c;
    puStack_70 = (undefined1 *)0x699d32;
    uVar2 = func_0x00465870();
    iStack_8 = 2;
    puStack_70 = (undefined1 *)0xa;
    pcStack_74 = "read error";
    auStack_44[4] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[5] = 0;
    uStack_78 = 0x699d5f;
    func_0x0046bc40();
    iStack_8._0_1_ = 3;
    puStack_7c = auStack_44;
    uStack_80 = 0x699d70;
    uStack_78 = uVar2;
    func_0x0069a1b0();
    iStack_8 = CONCAT31(iStack_8._1_3_,2);
  }
  else {
    puStack_6c = (undefined8 *)auStack_5c;
    puStack_70 = (undefined1 *)0x699c68;
    uVar2 = func_0x00465870();
    iStack_8 = 0;
    puStack_70 = (undefined1 *)0x8;
    pcStack_74 = "canceled";
    auStack_44[4] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[5] = 0;
    uStack_78 = 0x699c95;
    func_0x0046bc40();
    iStack_8._0_1_ = 1;
    puStack_7c = auStack_44;
    uStack_80 = 0x699ca6;
    uStack_78 = uVar2;
    func_0x0069a1b0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
  }
  if (0xf < auStack_44[5]) {
    uStack_80 = auStack_44[5];
    uStack_84 = auStack_44[0];
    puStack_88 = auStack_44;
    uStack_8c = 0x699cbf;
    func_0x0046b1f0();
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  if (0xf < uStack_48) {
    uStack_80 = uStack_48;
    uStack_84 = auStack_5c[0];
    puStack_88 = auStack_5c;
    uStack_8c = 0x699cf0;
    func_0x0046b1f0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0069a090(int *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [7];
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00edfd85;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  if (((param_1[2] & 1U) == 0) || ((param_1[2] == 1 && (*param_1 == 0)))) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uVar1);
    iStack_8 = 0;
    auStack_28[4] = 0;
    auStack_28[0] = 0;
    auStack_28[1] = 0;
    auStack_28[2] = 0;
    auStack_28[3] = 0;
    auStack_28[5] = 0;
    func_0x0046bc40("timeout",7);
    iStack_8._0_1_ = 1;
    func_0x0069a1b0(auStack_28,&uStack_40);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < auStack_28[5]) {
      func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
    }
    auStack_28[4] = 0;
    auStack_28[5] = 0xf;
    auStack_28[0] = auStack_28[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void __fastcall FUN_0069a2d0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x878);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x878) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x87c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x87c) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x880);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x880) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x884);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x884) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x888);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x888) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x88c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x88c) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x890);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x890) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  return;
}



void __fastcall FUN_0069a3e0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x948);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x948) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x94c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x94c) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x950);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x950) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x954);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x954) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x958);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x958) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x95c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x95c) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x960);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x960) = 0;
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall();
    (*pcVar2)();
  }
  return;
}



void __thiscall
FUN_0069a5c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_20;
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    uStack_18 = param_4;
    uStack_14 = param_5;
    uStack_20 = param_2;
    uStack_1c = param_3;
    pcVar1 = *(code **)(**(int **)(param_1 + 0xe4) + 8);
    _guard_check_icall(&uStack_20,&uStack_18);
    (*pcVar1)();
    FUN_008ab370();
    return;
  }
  uStack_20 = param_4;
  uStack_1c = param_5;
  func_0x0069ca80(&uStack_20,param_6);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_0069a660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    uStack_10 = param_4;
    uStack_c = param_5;
    uStack_18 = param_2;
    uStack_14 = param_3;
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 8);
    _guard_check_icall(&uStack_18,&uStack_10,param_6);
    (*pcVar1)();
  }
  FUN_008ab370();
  return;
}



void FUN_0069a6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  func_0x0069ca80(&uStack_10,param_3);
  return;
}



void __thiscall FUN_0069a700(int param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  if (*param_2 != '\0') {
    if ((*(int *)(param_2 + 0xc) != 0) || (0x7fffffff < *(uint *)(param_2 + 8))) {
      puVar1 = (undefined8 *)func_0x0062fd60();
      uVar2 = *(uint *)(puVar1 + 1);
      if ((uVar2 != 0) && (uVar2 != 1)) {
        uVar2 = uVar2 & 1 | 0x115cdd0;
      }
      *param_3 = *puVar1;
      *(uint *)(param_3 + 1) = uVar2;
      *(undefined1 *)(param_1 + 0x94) = 1;
      return;
    }
    func_0x005890c0(*(uint *)(param_2 + 8));
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined1 *)(param_1 + 0x94) = 1;
  return;
}



void __thiscall
FUN_0069a7a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined8 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x95) != '\0') {
    puVar1 = (undefined8 *)func_0x0062fd60();
    uVar2 = *(uint *)(puVar1 + 1);
    if ((uVar2 != 0) && (uVar2 != 1)) {
      uVar2 = uVar2 & 1 | 0x115c7ac;
    }
    *param_6 = *puVar1;
    *(uint *)(param_6 + 1) = uVar2;
    return;
  }
  *(undefined1 *)(param_1 + 0x95) = 1;
  func_0x00635590(param_2);
  *(undefined4 *)(param_1 + 0x70) = param_5;
  func_0x00638680(param_1 + 0x68,param_3,param_4);
  return;
}



void __thiscall FUN_0069cbf0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd45b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = boost::bad_weak_ptr::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0069cca0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = boost::bad_weak_ptr::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0069cd20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd45b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = std::logic_error::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0069cdd0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd553;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = std::logic_error::vftable;
  *puVar1 = std::domain_error::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0069ce90(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab9f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::domain_error::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0069cfe0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee7a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x00697440(uVar1);
  }
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0069d050(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0069cdd0(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288c0c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0069d080(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edd68c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_0069cdd0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0069d220(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0069cd20(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288b8c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0069d250(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edd68c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_0069cd20(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0069d3e0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0069cbf0(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288b7c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0069d410(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edd68c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_0069cbf0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



undefined4 * __thiscall FUN_0069d9c0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0069d9f0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * FUN_0069fb60(undefined4 param_1)

{
  uint uVar1;
  undefined4 *_Dst;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eee8af;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x50,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x50);
  *_Dst = boost::asio::execution_context::service::vftable;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = param_1;
  _Dst[4] = 0;
  *_Dst = boost::beast::detail::service_base<>::vftable;
  *_Dst = boost::beast::websocket::detail::service::vftable;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  *(undefined8 *)(_Dst + 0xc) = 0;
  _Dst[0xe] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[0xf] = 0xffffffff;
  _Dst[5] = 2;
  _Dst[0x10] = 0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



undefined4 * __thiscall FUN_006a0670(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0d1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006a1b80(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(param_1 + 0x40);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006a1c20(undefined4 param_1,byte param_2)

{
  func_0x006a04a0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 __thiscall FUN_006a1d00(undefined4 param_1,byte param_2)

{
  func_0x006a0530();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x6c);
  }
  return param_1;
}



int __thiscall FUN_006a1d30(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(param_1 + 0x40);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar5);
      (*pcVar4)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_006a6f33(void)

{
  func_0x0062e2c0();
  return &DAT_006a6f4a;
}



undefined * Catch_006a7153(void)

{
  func_0x0062e2c0();
  return &DAT_006a716a;
}



undefined * __fastcall Catch_006a7ab5(undefined4 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  func_0x0069da20(4,param_1);
  uVar2 = *(uint *)(unaff_EBP + -0x1c);
  if ((uVar2 != 0) && (uVar2 != 1)) {
    uVar2 = uVar2 & 1 | 0x115cdc0;
  }
  puVar1 = *(undefined8 **)(unaff_EBP + -0x2c);
  *puVar1 = *(undefined8 *)(unaff_EBP + -0x24);
  *(uint *)(puVar1 + 1) = uVar2;
  return &DAT_006a7aea;
}



undefined1 * Catch_006a917b(void)

{
  return &LAB_006a9158;
}



undefined4 __thiscall FUN_006a95a0(undefined4 param_1,byte param_2)

{
  func_0x006a36a0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb4);
  }
  return param_1;
}



void __fastcall FUN_006a9700(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef0091;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 2;
  if (*(int *)(param_1 + 0x120) != 0) {
    func_0x00638060(*(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x120),uVar1);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ae2c0();
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  func_0x008ab812(param_1,0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __thiscall FUN_006ae150(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef0821;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 2;
  if (*(int *)(param_1 + 0x120) != 0) {
    func_0x00638060(*(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x120),uVar1);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ae2c0();
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x140);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_006ae3e0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b0 [36];
  undefined1 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 uStack_84;
  code **ppcStack_80;
  int iStack_7c;
  int iStack_78;
  code **ppcStack_74;
  code **ppcStack_70;
  code **ppcStack_6c;
  undefined4 *puStack_68;
  undefined1 uStack_61;
  code **ppcStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int *piStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ef0a30;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_7c = param_2;
  iStack_78 = param_2;
  iStack_14 = 0;
  puStack_68 = &uStack_5c;
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  puStack_50 = (undefined4 *)0x0;
  ppcStack_80 = (code **)(param_2 + 0x30);
  func_0x0064b5b0(param_2 + 0x40,uStack_24);
  ppcStack_74 = &pcStack_40;
  pcStack_40 = *(code **)(param_2 + 0x30);
  ppcStack_70 = (code **)auStack_3c;
  auStack_3c[0] = *(undefined1 *)(param_2 + 0x34);
  ppcStack_60 = (code **)&uStack_38;
  uStack_38 = *(undefined4 *)(param_2 + 0x38);
  piStack_34 = *(int **)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
  uStack_30 = *(undefined8 *)(param_2 + 0x20);
  uStack_28 = *(undefined4 *)(param_2 + 0x28);
  iStack_14._0_1_ = 10;
  ppcStack_80 = &pcStack_40;
  ppcStack_6c = ppcStack_74;
  func_0x006539a0();
  pcVar2 = pcStack_40;
  if (param_1 != 0) {
    iStack_14._0_1_ = 0xb;
    if ((int)uStack_4c == 0) {
      _guard_check_icall(&uStack_30);
      (*pcVar2)();
    }
    else {
      pcVar2 = *(code **)(uStack_4c._4_4_ + 0xc);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = *(code **)(uStack_4c._4_4_ + 8);
        func_0x00659880(&pcStack_40);
        iStack_14._0_1_ = 0xc;
        puStack_8c = &uStack_61;
        if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
          func_0x008abb44();
        }
        puVar5 = (undefined4 *)func_0x0065c120(ppcStack_60,4);
        uStack_84 = 0;
        iStack_14._0_1_ = 0xd;
        puStack_88 = puVar5;
        ppcStack_60 = (code **)puVar5;
        func_0x00659880(auStack_b0);
        *puVar5 = FUN_0065de10;
        puStack_88 = (undefined4 *)0x0;
        iStack_14._0_1_ = 0xc;
        puStack_68 = puVar5;
        func_0x0065b450();
        ppcStack_70 = (code **)auStack_b0;
        iStack_14._0_1_ = 0xb;
        ppcStack_6c = ppcStack_70;
        func_0x0052b260();
        iStack_14._0_1_ = 0x12;
        _guard_check_icall(&uStack_5c,&puStack_68);
        (*pcVar2)();
        iStack_14._0_1_ = 0xb;
        if (puStack_68 != (undefined4 *)0x0) {
          pcVar2 = (code *)*puStack_68;
          _guard_check_icall(puStack_68,0);
          (*pcVar2)();
        }
      }
      else {
        _guard_check_icall(&uStack_5c,FUN_0065c070,&pcStack_40);
        (*pcVar2)();
      }
    }
  }
  piVar4 = piStack_34;
  ppcStack_70 = &pcStack_40;
  ppcStack_6c = (code **)auStack_3c;
  ppcStack_74 = (code **)&uStack_38;
  iStack_14._0_1_ = 4;
  if (piStack_34 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_34[1] + -1;
    piStack_34[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_34;
      ppcStack_60 = ppcStack_70;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  ppcStack_60 = (code **)&uStack_5c;
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_4c != 0) {
    pcVar2 = (code *)*puStack_50;
    _guard_check_icall(&uStack_5c);
    (*pcVar2)();
  }
  iStack_14 = 0xffffffff;
  func_0x006539a0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_006b15c0(undefined4 param_1,byte param_2)

{
  func_0x006b15f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x9b0);
  }
  return param_1;
}



undefined4 __thiscall FUN_006b18e0(undefined4 param_1,byte param_2)

{
  func_0x006b1910();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x8e0);
  }
  return param_1;
}



undefined4 __thiscall FUN_006b1bb0(undefined4 param_1,byte param_2)

{
  func_0x006a3730();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  return param_1;
}



void FUN_006b1f30(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee238d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  func_0x00653be0(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x006ade20();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_18 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00653be0(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006b2040(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee238d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  func_0x00653be0(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x006aded0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_18 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00653be0(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Catch_006b27cd(void)

{
  code *pcVar1;
  
  func_0x00e87d2e(0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_006b288d(void)

{
  code *pcVar1;
  
  func_0x00e87d2e(0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_006b28f0(undefined4 param_1,byte param_2)

{
  func_0x006ae2c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xe8);
  }
  return param_1;
}



void __fastcall FUN_006b2af0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1ac0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063ec80(uVar1);
  func_0x006b33e0(param_1 + 2);
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006a36a0();
  func_0x008ab812(param_1,0xfc);
  func_0x006abc50(0,0,0,1);
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b2bd0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1b40;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x006b33e0(param_1 + 2,uVar1);
  uStack_8 = 1;
  func_0x0063ec80();
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006a36a0();
  func_0x008ab812(param_1,0xfc);
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b2c90(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1ac0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063ec80(uVar1);
  func_0x006b35b0(param_1 + 2);
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006a36a0();
  func_0x008ab812(param_1,0xfc);
  func_0x006a9be0(0,0,0,1);
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b2d70(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1b40;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x006b35b0(param_1 + 2,uVar1);
  uStack_8 = 1;
  func_0x0063ec80();
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006a36a0();
  func_0x008ab812(param_1,0xfc);
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __fastcall FUN_006b2e30(int param_1)

{
  return param_1 + 0x10;
}



undefined4 FUN_006b2e40(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  __std_type_info_compare(param_1 + 4,0x12fa35c,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



int __thiscall FUN_006b2e90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = __std_type_info_compare(param_2 + 4,0x12fa35c,uVar1);
  param_1 = param_1 + 0x10;
  if (iVar2 != 0) {
    param_1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_006b2ef0(int param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    pcVar1 = (code *)**(undefined4 **)(param_1 + 0x18);
    _guard_check_icall(0);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



undefined4 FUN_006b2f20(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  __std_type_info_compare(param_1 + 4,0x12fa154,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



int __thiscall FUN_006b2f70(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = __std_type_info_compare(param_2 + 4,0x12fa154,uVar1);
  param_1 = param_1 + 0x10;
  if (iVar2 != 0) {
    param_1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_006b2fd0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1baa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063ec80(uVar1);
  func_0x006b3850(param_1 + 2);
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006b1e20();
  func_0x008ab812(param_1,200);
  func_0x006a5250(0,0,0,1);
  uStack_8 = 0xffffffff;
  func_0x006b1e20();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b30b0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1baa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x006b3850(param_1 + 2,uVar1);
  uStack_8 = 1;
  func_0x0063ec80();
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006b1e20();
  func_0x008ab812(param_1,200);
  uStack_8 = 0xffffffff;
  func_0x006b1e20();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b3170(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1baa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063ec80(uVar1);
  func_0x006b3a30(param_1 + 2);
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006b1e20();
  func_0x008ab812(param_1,200);
  func_0x006a38f0(0,0,0,1);
  uStack_8 = 0xffffffff;
  func_0x006b1e20();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b3250(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef1baa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x006b3a30(param_1 + 2,uVar1);
  uStack_8 = 1;
  func_0x0063ec80();
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006b1e20();
  func_0x008ab812(param_1,200);
  uStack_8 = 0xffffffff;
  func_0x006b1e20();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006b3370(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  piVar1 = *(int **)(param_1 + 0x94);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    pcVar3 = *(code **)(iVar2 + 4);
    _guard_check_icall();
    (*pcVar3)();
    *(int **)(param_1 + 0x94) = piVar1;
  }
  return;
}



undefined4 * __thiscall FUN_006b3730(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1cd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    pcVar1 = *(code **)param_1[6];
    _guard_check_icall(0,uVar2);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 4) = 0;
  }
  uStack_8 = 0xffffffff;
  *param_1 = boost::detail::sp_counted_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x8f8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006b37c0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1cd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    pcVar1 = *(code **)param_1[6];
    _guard_check_icall(0,uVar2);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 4) = 0;
  }
  uStack_8 = 0xffffffff;
  *param_1 = boost::detail::sp_counted_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x9c8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006b3b30(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006b3c50(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006b4b90(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 1;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006b4c10(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef19b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 1;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006b4c90(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef21dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xec);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006b66e0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef214e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x68) != '\0') && (*(undefined1 **)(param_1 + 100) != (undefined1 *)0x0))
  {
    **(undefined1 **)(param_1 + 100) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b4d80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006b6770(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef21a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0xec) != '\0') && (*(undefined1 **)(param_1 + 0xe8) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 0xe8) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b2a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x100);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006b6810(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef21a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0xec) != '\0') && (*(undefined1 **)(param_1 + 0xe8) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 0xe8) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b2a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x110);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006b68b0(undefined4 param_1,byte param_2)

{
  func_0x006b2a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xdc);
  }
  return param_1;
}



void FUN_006b7c50(int param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined8 uStack_c4;
  undefined1 auStack_bc [80];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef2ecd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uVar1 = uStack_18;
  uStack_c4 = uStack_20;
  if (param_1 != 0) {
    if (*(char *)(param_2 + 0x3c) == '\0') {
      uStack_c4 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(uint *)(param_2 + 0x28);
    }
    else {
      func_0x0063f640(uStack_14);
      uVar1 = uStack_18;
      uStack_c4 = uStack_20;
    }
  }
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x90);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xac);
  iStack_8._0_1_ = 7;
  if ((uVar1 != 0) && (uVar1 != 1)) {
    uVar1 = uVar1 & 1 | 0x115d550;
  }
  memset(auStack_bc,0,0x5c);
  func_0x006b7920(param_2 + 0x40);
  uStack_6c = uStack_c4;
  iStack_8._0_1_ = 9;
  uStack_64 = uVar1;
  func_0x006b7b80();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006bd3d0(uStack_6c,uStack_64);
    }
    else {
      func_0x006c0ee0(auStack_bc);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006a04a0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006b7b80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006b7f00(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_94 [56];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef2fbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x68,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x84);
  iStack_8._0_1_ = 7;
  func_0x006b79d0(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x006b7e30();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006bc430();
    }
    else {
      func_0x006c10c0(auStack_94);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x006a1c50();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006b7e30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_006ba9f0(undefined4 param_1,byte param_2)

{
  func_0x006b4d80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 __thiscall FUN_006baa20(undefined4 param_1,byte param_2)

{
  func_0x006b3bb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x94);
  }
  return param_1;
}



void FUN_006bc550(int param_1,int param_2)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [48];
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ee3fed;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puStack_34 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x60,uStack_24);
  iStack_14._0_1_ = 4;
  memset(auStack_7c,0,0x3c);
  func_0x0065d0b0(param_2 + 0x30);
  uStack_4c = *(undefined8 *)(param_2 + 0x20);
  uStack_44 = *(undefined4 *)(param_2 + 0x28);
  iStack_14._0_1_ = 6;
  func_0x0065c770();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_30 == 0) {
      func_0x006a97a0(uStack_4c,uStack_44,0xffffffff,0);
    }
    else {
      func_0x006c3780(auStack_7c);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_30 != 0) {
    pcVar1 = (code *)*puStack_34;
    _guard_check_icall(&uStack_40);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0065c770();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_006bc790(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f8 [52];
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  undefined1 uStack_9d;
  undefined4 *puStack_9c;
  undefined1 auStack_98 [16];
  int iStack_88;
  undefined1 auStack_7c [16];
  int iStack_6c;
  int iStack_68;
  undefined1 auStack_60 [28];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ef3fe9;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_9c = param_2;
  puStack_ac = param_2;
  puStack_a8 = param_2;
  iStack_14 = 0;
  puStack_b0 = param_2 + 0xc;
  uStack_24 = uVar3;
  memset(auStack_98,0,0x38);
  puStack_b4 = auStack_98;
  func_0x0064b5b0(param_2 + 0x15,uVar3);
  iStack_14._0_1_ = 3;
  puStack_bc = auStack_7c;
  puStack_b8 = puStack_bc;
  func_0x0064b5b0(param_2 + 0x1c);
  iStack_14._0_1_ = 7;
  puStack_c4 = auStack_60;
  puStack_c0 = puStack_c4;
  func_0x0064b5b0(param_2 + 0xc);
  puStack_a4 = &uStack_44;
  uStack_44 = param_2[0x13];
  uStack_40 = param_2[0x14];
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  uStack_3c = *(undefined8 *)(puStack_9c + 8);
  uStack_34 = puStack_9c[10];
  iStack_14._0_1_ = 0xe;
  puStack_b0 = (undefined4 *)auStack_60;
  func_0x006bc6c0();
  if (param_1 != 0) {
    iStack_14._0_1_ = 0xf;
    uVar2 = (undefined1)iStack_14;
    iStack_14._0_1_ = 0xf;
    if (iStack_88 == 0) {
      if (iStack_6c == 0) {
        func_0x006befc0();
        goto LAB_006bca11;
      }
    }
    else if (iStack_6c == 0) {
      iStack_14._0_1_ = uVar2;
      func_0x0062ce80();
      iStack_14 = CONCAT31(iStack_14._1_3_,0x15);
      func_0x00635070();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = *(code **)(iStack_68 + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = *(code **)(iStack_68 + 8);
      func_0x006c4be0(auStack_60);
      iStack_14._0_1_ = 0x10;
      puStack_30 = &uStack_9d;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar4 = (undefined4 *)func_0x0065c120(puStack_a4,4);
      uStack_28 = 0;
      iStack_14._0_1_ = 0x11;
      puStack_a4 = puVar4;
      puStack_2c = puVar4;
      func_0x006c4be0(auStack_f8);
      *puVar4 = FUN_006d35e0;
      puStack_2c = (undefined4 *)0x0;
      iStack_14._0_1_ = 0x10;
      puStack_9c = puVar4;
      func_0x006ca0a0();
      iStack_14._0_1_ = 0xf;
      func_0x006a95d0();
      iStack_14._0_1_ = 0x14;
      _guard_check_icall(auStack_7c,&puStack_9c);
      (*pcVar1)();
      iStack_14._0_1_ = 0xf;
      if (puStack_9c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_9c;
        _guard_check_icall(puStack_9c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(auStack_7c,FUN_006cdf40,auStack_60);
      (*pcVar1)();
    }
  }
LAB_006bca11:
  iStack_14._0_1_ = 7;
  func_0x006a95d0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  func_0x0065e600();
  iStack_14 = 0xffffffff;
  func_0x006bc6c0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_006bca80(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [56];
  undefined1 auStack_44 [28];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef40d1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_7c,0,0x38);
  func_0x0064b5b0(param_2 + 0x54,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x70);
  iStack_8._0_1_ = 7;
  memset(auStack_44,0,0x30);
  func_0x0064b5b0(param_2 + 0x30);
  uStack_28 = *(undefined4 *)(param_2 + 0x4c);
  uStack_24 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  uStack_20 = *(undefined8 *)(param_2 + 0x20);
  uStack_18 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 0xe;
  func_0x006bc6c0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 0xf;
    func_0x006be5d0(auStack_44,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006a95d0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006bc6c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006bcbf0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [56];
  undefined1 auStack_44 [28];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef40d1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_7c,0,0x38);
  func_0x0064b5b0(param_2 + 0x54,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x70);
  iStack_8._0_1_ = 7;
  memset(auStack_44,0,0x30);
  func_0x0064b5b0(param_2 + 0x30);
  uStack_28 = *(undefined4 *)(param_2 + 0x4c);
  uStack_24 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  uStack_20 = *(undefined8 *)(param_2 + 0x20);
  uStack_18 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 0xe;
  func_0x006bc6c0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 0xf;
    func_0x006be7a0(auStack_44,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006a95d0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006bc6c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Catch_006be28d(void)

{
  code *pcVar1;
  
  func_0x00e87d2e(0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_006bee50(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  __std_type_info_compare(param_1 + 4,0x12fa264,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



int __thiscall FUN_006beea0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = __std_type_info_compare(param_2 + 4,0x12fa264,uVar1);
  param_1 = param_1 + 0x10;
  if (iVar2 != 0) {
    param_1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_006bef00(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef4cda;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x10) != '\0') {
    iStack_8._0_1_ = 3;
    iStack_8._1_3_ = 0;
    func_0x00634700(uVar5);
    iStack_8._0_1_ = 2;
    func_0x00634700();
    iStack_8._0_1_ = 1;
    func_0x00634700();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x00634c70();
    iStack_8 = 0xffffffff;
    piVar3 = *(int **)(param_1 + 0x1c);
    if (piVar3 != (int *)0x0) {
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 8);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
    *(char *)(param_1 + 0x10) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_006bef10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  uVar2 = param_1[0xf];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar2;
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_006bef70(int param_1,uint param_2)

{
  if ((((*(uint *)(param_1 + 0x38) & param_2) != 0) && ((param_2 & 7) != 0)) &&
     (*(int *)(param_1 + 0x2c) != 0)) {
    func_0x00641470(*(undefined4 *)(param_1 + 0x24),param_1 + 4,*(undefined4 *)(param_1 + 0x34),
                    param_1 + 4);
  }
  return;
}



undefined4 * __thiscall FUN_006bf130(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef4a48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006bfad0(uVar1);
  uStack_8 = 0xffffffff;
  *param_1 = boost::detail::sp_counted_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x180);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_006c0ea0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  undefined4 *puStack_38;
  code *pcStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef577a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_8 = 0;
  func_0x006b3a30(param_1,uStack_14);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_28 = 1;
  if (*(int *)(param_1 + 0x90) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x94) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_34 = *(code **)(*(int *)(param_1 + 0x94) + 8);
      puStack_30 = (undefined4 *)auStack_b8;
      func_0x006b3a30(auStack_138);
      uStack_8._0_1_ = 3;
      puStack_20 = &uStack_21;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(puStack_30,8);
      uStack_18 = 0;
      uStack_8._0_1_ = 4;
      puStack_38 = puVar2 + 2;
      puStack_30 = puVar2;
      puStack_1c = puVar2;
      func_0x006b3a30(auStack_b8);
      *puVar2 = FUN_006d3ad0;
      puStack_1c = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      puStack_2c = puVar2;
      func_0x006c9f00();
      uStack_8._0_1_ = 0;
      func_0x006b1e20();
      pcVar1 = pcStack_34;
      uStack_8._0_1_ = 7;
      _guard_check_icall(param_1 + 0x80,&puStack_2c);
      (*pcVar1)();
      uStack_8 = (uint)uStack_8._1_3_ << 8;
      if (puStack_2c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_2c;
        _guard_check_icall(puStack_2c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0x80,FUN_006ce110,auStack_138);
      (*pcVar1)();
    }
    uStack_28 = 0;
    uStack_8 = 0xffffffff;
    func_0x006b1e20();
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x0062ce80();
  uStack_8 = CONCAT31(uStack_8._1_3_,8);
  func_0x00635070();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_006c0eb0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  undefined4 *puStack_38;
  code *pcStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef577a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_8 = 0;
  func_0x006b3850(param_1,uStack_14);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_28 = 1;
  if (*(int *)(param_1 + 0x90) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x94) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_34 = *(code **)(*(int *)(param_1 + 0x94) + 8);
      puStack_30 = (undefined4 *)auStack_b8;
      func_0x006b3850(auStack_138);
      uStack_8._0_1_ = 3;
      puStack_20 = &uStack_21;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(puStack_30,8);
      uStack_18 = 0;
      uStack_8._0_1_ = 4;
      puStack_38 = puVar2 + 2;
      puStack_30 = puVar2;
      puStack_1c = puVar2;
      func_0x006b3850(auStack_b8);
      *puVar2 = FUN_006d39e0;
      puStack_1c = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      puStack_2c = puVar2;
      func_0x006c9f00();
      uStack_8._0_1_ = 0;
      func_0x006b1e20();
      pcVar1 = pcStack_34;
      uStack_8._0_1_ = 7;
      _guard_check_icall(param_1 + 0x80,&puStack_2c);
      (*pcVar1)();
      uStack_8 = (uint)uStack_8._1_3_ << 8;
      if (puStack_2c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_2c;
        _guard_check_icall(puStack_2c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0x80,FUN_006ce0e0,auStack_138);
      (*pcVar1)();
    }
    uStack_28 = 0;
    uStack_8 = 0xffffffff;
    func_0x006b1e20();
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x0062ce80();
  uStack_8 = CONCAT31(uStack_8._1_3_,8);
  func_0x00635070();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_006c0ec0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b8 [184];
  undefined1 auStack_100 [184];
  undefined4 *puStack_48;
  code *pcStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
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
  puStack_18 = &DAT_00ef56e0;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = 0;
  uStack_14 = 0;
  func_0x006b35b0(param_1,uStack_24);
  uStack_14 = uStack_14 & 0xffffff00;
  uStack_38 = 1;
  if (*(int *)(param_1 + 0xc4) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 200) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_44 = *(code **)(*(int *)(param_1 + 200) + 8);
      puStack_40 = (undefined4 *)auStack_100;
      func_0x006b35b0(auStack_1b8);
      uStack_14._0_1_ = 3;
      puStack_30 = &uStack_31;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(puStack_40,4);
      uStack_28 = 0;
      uStack_14._0_1_ = 4;
      puStack_48 = puVar2 + 1;
      puStack_40 = puVar2;
      puStack_2c = puVar2;
      func_0x006b35b0(auStack_100);
      *puVar2 = FUN_006d38f0;
      puStack_2c = (undefined4 *)0x0;
      uStack_14._0_1_ = 3;
      puStack_3c = puVar2;
      func_0x006c9fd0();
      uStack_14._0_1_ = 0;
      func_0x006a36a0();
      pcVar1 = pcStack_44;
      uStack_14._0_1_ = 8;
      _guard_check_icall(param_1 + 0xb4,&puStack_3c);
      (*pcVar1)();
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (puStack_3c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_3c;
        _guard_check_icall(puStack_3c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0xb4,FUN_006ce0b0,auStack_1b8);
      (*pcVar1)();
    }
    uStack_38 = 0;
    uStack_14 = 0xffffffff;
    func_0x006a36a0();
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



void FUN_006c0ed0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b8 [184];
  undefined1 auStack_100 [184];
  undefined4 *puStack_48;
  code *pcStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
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
  puStack_18 = &DAT_00ef56e0;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = 0;
  uStack_14 = 0;
  func_0x006b33e0(param_1,uStack_24);
  uStack_14 = uStack_14 & 0xffffff00;
  uStack_38 = 1;
  if (*(int *)(param_1 + 0xc4) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 200) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_44 = *(code **)(*(int *)(param_1 + 200) + 8);
      puStack_40 = (undefined4 *)auStack_100;
      func_0x006b33e0(auStack_1b8);
      uStack_14._0_1_ = 3;
      puStack_30 = &uStack_31;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(puStack_40,4);
      uStack_28 = 0;
      uStack_14._0_1_ = 4;
      puStack_48 = puVar2 + 1;
      puStack_40 = puVar2;
      puStack_2c = puVar2;
      func_0x006b33e0(auStack_100);
      *puVar2 = FUN_006d3800;
      puStack_2c = (undefined4 *)0x0;
      uStack_14._0_1_ = 3;
      puStack_3c = puVar2;
      func_0x006c9fd0();
      uStack_14._0_1_ = 0;
      func_0x006a36a0();
      pcVar1 = pcStack_44;
      uStack_14._0_1_ = 8;
      _guard_check_icall(param_1 + 0xb4,&puStack_3c);
      (*pcVar1)();
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (puStack_3c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_3c;
        _guard_check_icall(puStack_3c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0xb4,FUN_006ce080,auStack_1b8);
      (*pcVar1)();
    }
    uStack_38 = 0;
    uStack_14 = 0xffffffff;
    func_0x006a36a0();
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



undefined4 __thiscall FUN_006c16b0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef53dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006becd0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xdc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006c1710(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef540d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bed90(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xdc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_006c3360(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b8 [164];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef5b29;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_b8,0,0xa0);
  func_0x006b3a30(param_1 + 8,uVar1);
  uStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x88);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x006bf2a0();
  if (param_2 != '\0') {
    func_0x006c2620();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b6520();
  uStack_8 = 0xffffffff;
  func_0x006bf2a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006c3450(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b8 [164];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef5b29;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_b8,0,0xa0);
  func_0x006b3850(param_1 + 8,uVar1);
  uStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x88);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x006bf2a0();
  if (param_2 != '\0') {
    func_0x006c2440();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b6520();
  uStack_8 = 0xffffffff;
  func_0x006bf2a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006c3540(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e8 [180];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef5bc2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_e8,0,0xd0);
  func_0x006b35b0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xb8);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006bf1a0();
  if (param_2 != '\0') {
    func_0x006c2250();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006a36a0();
  iStack_8 = 0xffffffff;
  func_0x006bf1a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006c3660(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e8 [180];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef5bc2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_e8,0,0xd0);
  func_0x006b33e0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xb8);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006bf1a0();
  if (param_2 != '\0') {
    func_0x006c2060();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006a36a0();
  iStack_8 = 0xffffffff;
  func_0x006bf1a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_006c4110(undefined4 param_1,byte param_2)

{
  func_0x006becd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,200);
  }
  return param_1;
}



undefined4 __thiscall FUN_006c4230(undefined4 param_1,byte param_2)

{
  func_0x006bed90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,200);
  }
  return param_1;
}



void __fastcall FUN_006c46a0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef62ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063ec80(uVar1);
  func_0x006c4c80(param_1 + 2);
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006bfa00();
  func_0x008ab812(param_1,0x74);
  func_0x006c0140(0,0);
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006c4760(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef631b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x006c4c80(param_1 + 2,uVar1);
  uStack_8 = 1;
  func_0x0063ec80();
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006bfa00();
  func_0x008ab812(param_1,0x74);
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006c4810(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef62ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063ec80(uVar1);
  func_0x006c4c80(param_1 + 2);
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006bfa00();
  func_0x008ab812(param_1,0x74);
  func_0x006bfca0(0,0);
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_006c48d0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef631b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x006c4c80(param_1 + 2,uVar1);
  uStack_8 = 1;
  func_0x0063ec80();
  *param_1 = boost::beast::saved_handler::impl<>::vftable;
  uStack_8._0_1_ = 2;
  func_0x006b5570();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006bfa00();
  func_0x008ab812(param_1,0x74);
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006c5170(int param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_15c;
  undefined1 auStack_154 [236];
  undefined8 uStack_68;
  uint uStack_60;
  undefined1 auStack_58 [56];
  undefined8 uStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef66e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_15c = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_20 = uStack_15c;
  uStack_14 = uVar2;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 300,uVar2);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x148);
  iStack_8._0_1_ = 7;
  uVar2 = *(uint *)(param_2 + 0x28);
  if (((uVar2 & 1) != 0) && ((uVar2 != 1 || (*(int *)(param_2 + 0x20) != 0)))) {
    uStack_15c = *(undefined8 *)(param_2 + 0x20);
    uVar4 = uVar2;
    uStack_20 = uStack_15c;
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
    if (iVar3 != 0x4d2) goto LAB_006c53c4;
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
  uStack_15c = uStack_20;
LAB_006c53c4:
  if ((uVar4 != 0) && (uVar4 != 1)) {
    uVar4 = uVar4 & 1 | 0x115d530;
  }
  memset(auStack_154,0,0xf8);
  func_0x006ba280(param_2 + 0x40);
  uStack_68 = uStack_15c;
  iStack_8._0_1_ = 9;
  uStack_60 = uVar4;
  func_0x006c5060();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006c7330(auStack_154,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006b2a50();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006c5060();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006c7250(int param_1)

{
  func_0x006bd3d0(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  return;
}



void FUN_006c7280(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef3e85;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((DAT_012bbee8 != 0x257edfd1) || (DAT_012bbeec != -0x4d54ee86)) &&
     ((DAT_012bbee8 != 0x257edfd0 || (DAT_012bbeec != -0x4d54ee86)))) {
    pcVar2 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall(0x3e3,uStack_14);
    (*pcVar2)();
  }
  cVar3 = func_0x0062cb40();
  if (cVar3 == '\0') {
    uStack_1c = 0;
    func_0x006a3810(&uStack_1c);
    uStack_8 = 0;
    if ((int)uStack_1c != 0) {
      uVar1 = *(uint *)(*param_1 + 0x4c);
      if ((uVar1 < (uint)param_1[5]) ||
         ((uVar1 <= (uint)param_1[5] && (*(uint *)(*param_1 + 0x48) <= (uint)param_1[4])))) {
        func_0x006a90f0();
        *(undefined1 *)(*param_1 + 0x51) = 1;
      }
    }
    uStack_8 = 0xffffffff;
    func_0x0068de80();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_006c7620(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef5da4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x104) != '\0') &&
     (*(undefined1 **)(param_1 + 0x100) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x100) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4350();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x110);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006c76c0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef5e04;
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
  func_0x006c4400();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x13c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006c7760(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef5e64;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x120) != '\0') &&
     (*(undefined1 **)(param_1 + 0x11c) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x11c) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c44b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,300);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006c7800(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef5ebe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x80) != '\0') && (*(undefined1 **)(param_1 + 0x7c) != (undefined1 *)0x0)
     ) {
    **(undefined1 **)(param_1 + 0x7c) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4560();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x8c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006c78a0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef5f14;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(param_1 + 0x120) != '\0') &&
     (*(undefined1 **)(param_1 + 0x11c) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0x11c) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4600();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1a8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006c7a10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeb8e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[5];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_006c7a90(int param_1,uint param_2)

{
  code *pcVar1;
  
  if ((*(uint *)(param_1 + 0x10) & param_2) != 0) {
    param_2 = param_2 & 3;
    *(uint *)(param_1 + 8) = param_2;
    if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
      _guard_check_icall(param_2);
      (*pcVar1)();
    }
  }
  return;
}



void FUN_006ca4b0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [100];
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
  
  puStack_c = &DAT_00ef7962;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xb4,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xd0);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb800();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_68 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_68 = uStack_18 & 1 | 0x115c84c;
  }
  memset(auStack_e4,0,0x84);
  func_0x006be460(param_2 + 0x40);
  uStack_70 = uStack_20;
  uStack_64 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006ca370();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006b7440(uStack_70,uStack_68,uStack_64);
    }
    else {
      func_0x006d72f0(auStack_e4);
    }
  }
  if ((cStack_7c != '\0') && (puStack_80 != (undefined1 *)0x0)) {
    *puStack_80 = 0;
  }
  iStack_8._0_1_ = 0xc;
  func_0x0068de80();
  iStack_8._0_1_ = 7;
  func_0x006b4d80();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006ca370();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006ca800(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_16c [256];
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
  
  puStack_c = &DAT_00ef7a82;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x148,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x164);
  iStack_8._0_1_ = 7;
  uVar2 = func_0x006cb8c0();
  func_0x0063fb90(uVar2,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115d1c0;
  }
  memset(auStack_16c,0,0x110);
  func_0x006be380(param_2 + 0x48);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006ca6c0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006ce2c0(auStack_16c,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006b7a70();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006ca6c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006caae0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_188 [272];
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [56];
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ef7ba2;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_24 = uVar2;
  memset(auStack_68,0,0x38);
  func_0x0064b5b0(param_2 + 0x174,uVar2);
  iStack_14._0_1_ = 3;
  func_0x0064b5b0(param_2 + 400);
  iStack_14._0_1_ = 7;
  iVar1 = param_2 + 0x2c;
  uStack_1c8 = (undefined4)*(undefined8 *)(param_2 + 0x54);
  uStack_1c4 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x54) >> 0x20);
  uVar3 = func_0x006ce800(iVar1,*(undefined4 *)(param_2 + 0x4c),iVar1,
                          *(undefined4 *)(param_2 + 0x3c),
                          CONCAT44(iVar1,*(undefined4 *)(param_2 + 0x34)),iVar1,
                          *(undefined4 *)(param_2 + 0x50),uStack_1c8,uStack_1c4,
                          *(undefined8 *)(param_2 + 0x5c));
  func_0x0063fb90(uVar3,&uStack_30,param_4);
  uStack_70 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_70 = uStack_28 & 1 | 0x115d220;
  }
  memset(auStack_188,0,0x120);
  func_0x006be2a0();
  uStack_78 = uStack_30;
  uStack_6c = param_4;
  iStack_14._0_1_ = 9;
  func_0x006ca9a0();
  if (param_1 != 0) {
    iStack_14._0_1_ = 10;
    func_0x006ce4d0(auStack_188,extraout_ECX);
  }
  iStack_14._0_1_ = 7;
  func_0x006b7a70();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  func_0x0065e600();
  iStack_14 = 0xffffffff;
  func_0x006ca9a0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_006cdc10(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [80];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef90de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_7c;
  func_0x006b7920(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0x50);
  uStack_24 = *(undefined4 *)(param_1 + 0x58);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006d42a0(auStack_7c);
  uStack_14 = 0;
  puStack_1c = auStack_7c;
  uStack_8 = 0xffffffff;
  func_0x006a04a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006cdc20(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_1;
  _guard_check_icall(param_1 + 5,param_1[4]);
  (*pcVar1)();
  return;
}



void FUN_006cdd80(int param_1,char param_2)

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
  
  puStack_c = &DAT_00ef8805;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_74,0,0x5c);
  func_0x006b7920(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x54);
  uStack_1c = *(undefined4 *)(param_1 + 0x5c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006c4f90();
  if (param_2 != '\0') {
    func_0x006bd3d0(uStack_24,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a04a0();
  uStack_8 = 0xffffffff;
  func_0x006c4f90();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006cde60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef8855;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006b79d0(param_1 + 8,uVar1);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006c4ec0();
  if (param_2 != '\0') {
    func_0x006bc430();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a1c50();
  uStack_8 = 0xffffffff;
  func_0x006c4ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006cdf10(int param_1)

{
  func_0x006a97a0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0xffffffff,0);
  return;
}



void FUN_006cdf40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  char cVar7;
  int *unaff_FS_OFFSET;
  int iStack_28;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ef49fd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar4 = *(uint *)(param_1 + 0x2c);
  uStack_1c = 0;
  func_0x006a3810(&uStack_1c,uStack_14);
  uStack_8 = 0;
  if ((int)uStack_1c != 0) {
    if (((DAT_012bbee8 != 0x257edfd1) || (DAT_012bbeec != -0x4d54ee86)) &&
       ((DAT_012bbee8 != 0x257edfd0 || (DAT_012bbeec != -0x4d54ee86)))) {
      pcVar5 = *(code **)(PTR_vftable_012bbee0 + 0x18);
      _guard_check_icall(0x3e3);
      (*pcVar5)();
    }
    cVar7 = func_0x0062cb40();
    if ((cVar7 == '\0') &&
       (((uVar4 & 1) == 0 || ((uVar4 == 1 && (iStack_28 = (int)uVar3, iStack_28 == 0)))))) {
      func_0x006a8870(param_1);
    }
  }
  uStack_8 = 0xffffffff;
  piVar6 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    piVar1 = uStack_1c._4_4_ + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar5 = *(code **)(*uStack_1c._4_4_ + 4);
      _guard_check_icall();
      (*pcVar5)();
      piVar1 = piVar6 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar5 = *(code **)(*piVar6 + 8);
        _guard_check_icall();
        (*pcVar5)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006cdf50(int param_1)

{
  func_0x006bf380(*(undefined8 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x2c));
  return;
}



void FUN_006cdf80(int param_1)

{
  func_0x006bf6f0(*(undefined8 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x2c));
  return;
}



void FUN_006ce080(void)

{
  func_0x006abc50(0,0,0,1);
  return;
}



void FUN_006ce0b0(void)

{
  func_0x006a9be0(0,0,0,1);
  return;
}



void FUN_006ce0e0(void)

{
  func_0x006a5250(0,0,0,1);
  return;
}



void FUN_006ce110(void)

{
  func_0x006a38f0(0,0,0,1);
  return;
}



undefined4 __thiscall FUN_006ceda0(undefined4 param_1,byte param_2)

{
  func_0x006c4350();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xf4);
  }
  return param_1;
}



undefined4 __thiscall FUN_006cee20(undefined4 param_1,byte param_2)

{
  func_0x006c4400();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x120);
  }
  return param_1;
}



undefined4 __thiscall FUN_006ceea0(undefined4 param_1,byte param_2)

{
  func_0x006c44b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x110);
  }
  return param_1;
}



undefined4 __thiscall FUN_006cef20(undefined4 param_1,byte param_2)

{
  func_0x006c4560();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  return param_1;
}



undefined4 __thiscall FUN_006cef50(undefined4 param_1,byte param_2)

{
  func_0x006c4600();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x110);
  }
  return param_1;
}



undefined4 * __thiscall FUN_006cf200(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee4e58;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[6];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_006cf290(int param_1,uint param_2)

{
  code *pcVar1;
  
  if (((*(uint *)(param_1 + 0x14) & param_2) != 0) && ((*(uint *)(param_1 + 0x10) & param_2) != 0))
  {
    param_2 = param_2 & 3;
    *(uint *)(param_1 + 8) = param_2;
    if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
      _guard_check_icall(param_2);
      (*pcVar1)();
    }
  }
  return;
}



void FUN_006d0550(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [232];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [56];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef92fb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x118,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x134);
  iStack_8._0_1_ = 7;
  memset(auStack_144,0,0xf4);
  func_0x006d0200(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x006d0470();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006d4550(auStack_144,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006a36a0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006d0470();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d0790(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_154 [248];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [56];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef940b;
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
  func_0x006d0160(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x006d06b0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 10;
    func_0x006d4760(auStack_154,extraout_ECX);
  }
  iStack_8._0_1_ = 7;
  func_0x006a36a0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006d06b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d31f0(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_1;
  _guard_check_icall(param_1 + 5);
  (*pcVar1)();
  return;
}



void FUN_006d3210(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [84];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efae06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_84;
  func_0x006b1d70(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x54);
  uStack_2c = *(undefined8 *)(param_1 + 0x58);
  uStack_24 = *(undefined4 *)(param_1 + 0x60);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006d8ef0(auStack_84);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006b1e20();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006d3220(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [84];
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efae06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_84;
  func_0x006b1be0(param_1,uVar1);
  uStack_30 = *(undefined4 *)(param_1 + 0x54);
  uStack_2c = *(undefined8 *)(param_1 + 0x58);
  uStack_24 = *(undefined4 *)(param_1 + 0x60);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006d8d00(auStack_84);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006b1e20();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006d3230(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [80];
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ef9f78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_90,0,0x78);
  func_0x006b7920(param_1 + 4,uVar2);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x54);
  uStack_38 = *(undefined4 *)(param_1 + 0x5c);
  iStack_8._0_1_ = 2;
  func_0x0064b5b0(param_1 + 0x60);
  iStack_8 = CONCAT31(iStack_8._1_3_,5);
  func_0x006ca260();
  if (param_2 != '\0') {
    func_0x006d00b0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 6;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006a04a0();
  iStack_8 = 0xffffffff;
  func_0x006ca260();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3370(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_38;
  undefined4 uStack_28;
  undefined1 auStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef9ff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006c4e10(param_1 + 4,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006ca170();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_24,uStack_28);
    (*pcStack_38)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x006ca170();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3440(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_34;
  undefined1 auStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee4c50;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006c4d70(param_1 + 4,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0065c680();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_24);
    (*pcStack_34)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0065c680();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3500(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [48];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee69b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_54,0,0x3c);
  func_0x0065d0b0(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x34);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00664d70();
  if (param_2 != '\0') {
    func_0x006a97a0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x00664d70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d35e0(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa03d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006c4be0(param_1 + 4,uStack_14,&uStack_15,param_1,param_1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ca0a0();
  if (param_2 != '\0') {
    func_0x006befc0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a95d0();
  uStack_8 = 0xffffffff;
  func_0x006ca0a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3680(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [36];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa08d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_48,0,0x30);
  func_0x006c4be0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ca0a0();
  if (param_2 != '\0') {
    func_0x006bf380(uStack_24,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a95d0();
  uStack_8 = 0xffffffff;
  func_0x006ca0a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3740(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [36];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa08d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_48,0,0x30);
  func_0x006c4be0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x006ca0a0();
  if (param_2 != '\0') {
    func_0x006bf6f0(uStack_24,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a95d0();
  uStack_8 = 0xffffffff;
  func_0x006ca0a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3800(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_cc [184];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa0f1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_cc,0,0xb4);
  func_0x006b33e0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006c9fd0();
  if (param_2 != '\0') {
    func_0x006abc50(0,0,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x006c9fd0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d38f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_cc [184];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa0f1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_cc,0,0xb4);
  func_0x006b35b0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006c9fd0();
  if (param_2 != '\0') {
    func_0x006a9be0(0,0,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006a36a0();
  uStack_8 = 0xffffffff;
  func_0x006c9fd0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d39e0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [132];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa146;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_98,0,0x80);
  func_0x006b3850(param_1 + 8,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006c9f00();
  if (param_2 != '\0') {
    func_0x006a5250(0,0,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b1e20();
  uStack_8 = 0xffffffff;
  func_0x006c9f00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d3ad0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [132];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efa146;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_98,0,0x80);
  func_0x006b3a30(param_1 + 8,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006c9f00();
  if (param_2 != '\0') {
    func_0x006a38f0(0,0,0,1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006b1e20();
  uStack_8 = 0xffffffff;
  func_0x006c9f00();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_006d4ca0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efa7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006d4d00(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efa7fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_006d4db0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efa86d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf160(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x128);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_006d6c50(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [164];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efbf9f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006ceaf0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006dbaf0(auStack_bc);
  uStack_14 = 0;
  puStack_18 = auStack_bc;
  uStack_8 = 0xffffffff;
  func_0x006b4cf0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined1 * __fastcall Catch_006d6e62(undefined4 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  func_0x00635550(7,param_1);
  uVar2 = *(uint *)(unaff_EBP + -0x40);
  if ((uVar2 != 0) && (uVar2 != 1)) {
    uVar2 = uVar2 & 1 | 0x115d4b0;
  }
  puVar1 = *(undefined8 **)(unaff_EBP + -0x38);
  *puVar1 = *(undefined8 *)(unaff_EBP + -0x48);
  *(uint *)(puVar1 + 1) = uVar2;
  return &LAB_006d6e9a;
}



void FUN_006d6f80(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [164];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efbf9f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006ceaf0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006db930(auStack_bc);
  uStack_14 = 0;
  puStack_18 = auStack_bc;
  uStack_8 = 0xffffffff;
  func_0x006b4cf0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006d6f90(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [164];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efbf9f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006ceb90(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006db770(auStack_bc);
  uStack_14 = 0;
  puStack_18 = auStack_bc;
  uStack_8 = 0xffffffff;
  func_0x006b4cf0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006d6fa0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [164];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efbf9f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006ceb90(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006db5b0(auStack_bc);
  uStack_14 = 0;
  puStack_18 = auStack_bc;
  uStack_8 = 0xffffffff;
  func_0x006b4cf0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006d6fb0(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_38;
  undefined1 auStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ef9ff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006c9b80(param_1 + 4,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x006ca170();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_24);
    (*pcStack_38)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x006ca170();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d7070(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [84];
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efb50d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_98,0,0x80);
  func_0x006b1d70(param_1 + 4,uVar2);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  uStack_44 = *(undefined4 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x5c);
  uStack_38 = *(undefined4 *)(param_1 + 100);
  iStack_8._0_1_ = 2;
  func_0x0064b5b0(param_1 + 0x68);
  iStack_8 = CONCAT31(iStack_8._1_3_,5);
  func_0x006d0370();
  if (param_2 != '\0') {
    func_0x006d5ee0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 6;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b1e20();
  iStack_8 = 0xffffffff;
  func_0x006d0370();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006d71b0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [84];
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efb50d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_98,0,0x80);
  func_0x006b1be0(param_1 + 4,uVar2);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  uStack_44 = *(undefined4 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x5c);
  uStack_38 = *(undefined4 *)(param_1 + 100);
  iStack_8._0_1_ = 2;
  func_0x0064b5b0(param_1 + 0x68);
  iStack_8 = CONCAT31(iStack_8._1_3_,5);
  func_0x006d0370();
  if (param_2 != '\0') {
    func_0x006d5e30();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 6;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b1e20();
  iStack_8 = 0xffffffff;
  func_0x006d0370();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_006d93a0(undefined4 param_1,byte param_2)

{
  func_0x006cf020();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x104);
  }
  return param_1;
}



undefined4 __thiscall FUN_006d93d0(undefined4 param_1,byte param_2)

{
  func_0x006cf0c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x104);
  }
  return param_1;
}



undefined4 __thiscall FUN_006d9400(undefined4 param_1,byte param_2)

{
  func_0x006cf160();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x118);
  }
  return param_1;
}



undefined4 * __thiscall FUN_006d94d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eec9f8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[4];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_006d9550(int param_1,uint param_2)

{
  code *pcVar1;
  
  param_2 = param_2 & 1;
  *(uint *)(param_1 + 8) = param_2;
  if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  return;
}



undefined4 * __thiscall FUN_006d95a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efbdf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[7];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_006d9630(int param_1,uint param_2)

{
  code *pcVar1;
  
  if ((((*(uint *)(param_1 + 0x18) & param_2) != 0) && ((*(uint *)(param_1 + 0x14) & param_2) != 0))
     && ((*(uint *)(param_1 + 0x10) & param_2) != 0)) {
    param_2 = param_2 & 1;
    *(uint *)(param_1 + 8) = param_2;
    if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
      _guard_check_icall(param_2);
      (*pcVar1)();
    }
  }
  return;
}



void FUN_006daa60(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a4 [44];
  undefined1 auStack_78 [48];
  undefined4 *puStack_48;
  code *pcStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
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
  puStack_18 = &DAT_00efce4a;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = 0;
  uStack_14 = 0;
  func_0x006c4c80(param_1,uStack_24);
  uStack_14 = uStack_14 & 0xffffff00;
  uStack_38 = 1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_44 = *(code **)(*(int *)(param_1 + 0x40) + 8);
      puStack_40 = (undefined4 *)auStack_78;
      func_0x006c4c80(auStack_a4);
      uStack_14._0_1_ = 3;
      puStack_30 = &uStack_31;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(puStack_40,4);
      uStack_28 = 0;
      uStack_14._0_1_ = 4;
      puStack_48 = puVar2 + 1;
      puStack_40 = puVar2;
      puStack_2c = puVar2;
      func_0x006c4c80(auStack_78);
      *puVar2 = FUN_006eeb40;
      puStack_2c = (undefined4 *)0x0;
      uStack_14._0_1_ = 3;
      puStack_3c = puVar2;
      func_0x006e8eb0();
      uStack_14._0_1_ = 0;
      func_0x006bfa00();
      pcVar1 = pcStack_44;
      uStack_14._0_1_ = 8;
      _guard_check_icall(param_1 + 0x2c,&puStack_3c);
      (*pcVar1)();
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (puStack_3c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_3c;
        _guard_check_icall(puStack_3c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0x2c,FUN_006eaa90,auStack_a4);
      (*pcVar1)();
    }
    uStack_38 = 0;
    uStack_14 = 0xffffffff;
    func_0x006bfa00();
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



void FUN_006daa70(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a4 [44];
  undefined1 auStack_78 [48];
  undefined4 *puStack_48;
  code *pcStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
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
  puStack_18 = &DAT_00efce4a;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = 0;
  uStack_14 = 0;
  func_0x006c4c80(param_1,uStack_24);
  uStack_14 = uStack_14 & 0xffffff00;
  uStack_38 = 1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_44 = *(code **)(*(int *)(param_1 + 0x40) + 8);
      puStack_40 = (undefined4 *)auStack_78;
      func_0x006c4c80(auStack_a4);
      uStack_14._0_1_ = 3;
      puStack_30 = &uStack_31;
      if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
        func_0x008abb44();
      }
      puVar2 = (undefined4 *)func_0x0065c120(puStack_40,4);
      uStack_28 = 0;
      uStack_14._0_1_ = 4;
      puStack_48 = puVar2 + 1;
      puStack_40 = puVar2;
      puStack_2c = puVar2;
      func_0x006c4c80(auStack_78);
      *puVar2 = FUN_006eea80;
      puStack_2c = (undefined4 *)0x0;
      uStack_14._0_1_ = 3;
      puStack_3c = puVar2;
      func_0x006e8eb0();
      uStack_14._0_1_ = 0;
      func_0x006bfa00();
      pcVar1 = pcStack_44;
      uStack_14._0_1_ = 8;
      _guard_check_icall(param_1 + 0x2c,&puStack_3c);
      (*pcVar1)();
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (puStack_3c != (undefined4 *)0x0) {
        pcVar1 = (code *)*puStack_3c;
        _guard_check_icall(puStack_3c,0);
        (*pcVar1)();
      }
    }
    else {
      _guard_check_icall(param_1 + 0x2c,FUN_006eaa60,auStack_a4);
      (*pcVar1)();
    }
    uStack_38 = 0;
    uStack_14 = 0xffffffff;
    func_0x006bfa00();
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



void FUN_006daa80(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [236];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efcdaf;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_11c;
  func_0x006ba280(param_1,uVar1);
  uStack_30 = *(undefined8 *)(param_1 + 0xec);
  uStack_28 = *(undefined4 *)(param_1 + 0xf4);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006df380(auStack_11c);
  uStack_14 = 0;
  puStack_20 = auStack_11c;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x006b2a50();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006daa90(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [164];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efc57d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_d8,0,0xc0);
  func_0x006ceaf0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xa8);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006d60d0();
  if (param_2 != '\0') {
    func_0x006d9c60();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b4cf0();
  iStack_8 = 0xffffffff;
  func_0x006d60d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006dace0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [164];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efc57d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_d8,0,0xc0);
  func_0x006ceaf0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xa8);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006d60d0();
  if (param_2 != '\0') {
    func_0x006d9bc0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b4cf0();
  iStack_8 = 0xffffffff;
  func_0x006d60d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006dae00(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [164];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efc57d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_d8,0,0xc0);
  func_0x006ceb90(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xa8);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006d60d0();
  if (param_2 != '\0') {
    func_0x006d9b20();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b4cf0();
  iStack_8 = 0xffffffff;
  func_0x006d60d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006dafc0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [164];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00efc57d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_d8,0,0xc0);
  func_0x006ceb90(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0xa8);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x006d60d0();
  if (param_2 != '\0') {
    func_0x006d9a80();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006b4cf0();
  iStack_8 = 0xffffffff;
  func_0x006d60d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_006db0e0(undefined4 param_1,int param_2)

{
  func_0x006b4e20(*(undefined8 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf4),0,1,param_1);
  return;
}



void FUN_006dec60(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [228];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efe19f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006d91c0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006e6310(auStack_fc);
  uStack_14 = 0;
  puStack_18 = auStack_fc;
  uStack_8 = 0xffffffff;
  func_0x006bed90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006dec70(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [228];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efe13f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x006d92b0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006e6150(auStack_fc);
  uStack_14 = 0;
  puStack_18 = auStack_fc;
  uStack_8 = 0xffffffff;
  func_0x006becd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006dec80(int param_1)

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
  
  puStack_c = &DAT_00efe0df;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_13c;
  func_0x006be2a0(param_1,uVar1);
  uStack_2c = *(undefined4 *)(param_1 + 0x110);
  uStack_28 = *(undefined8 *)(param_1 + 0x114);
  uStack_20 = *(undefined4 *)(param_1 + 0x11c);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006e5f70(auStack_13c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006b7a70();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006dec90(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_12c [256];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00efe07f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_12c;
  func_0x006be380(param_1,uVar1);
  uStack_2c = *(undefined4 *)(param_1 + 0x100);
  uStack_28 = *(undefined8 *)(param_1 + 0x104);
  uStack_20 = *(undefined4 *)(param_1 + 0x10c);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006e5d90(auStack_12c);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  func_0x006b7a70();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_006deca0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_160 [116];
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [116];
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
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
  puStack_18 = &DAT_00efe012;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = 0;
  uStack_14 = 0;
  pcStack_3c = (code *)auStack_d8;
  iStack_44 = param_1 + 0x84;
  func_0x006be460(param_1,uStack_24);
  uStack_64 = *(undefined4 *)(param_1 + 0x74);
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  uStack_58 = *(undefined4 *)(param_1 + 0x80);
  uStack_14 = uStack_14 & 0xffffff00;
  uStack_38 = 1;
  if (*(int *)(param_1 + 0x94) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x98) + 0xc);
    if (pcVar1 == (code *)0x0) {
      pcStack_3c = *(code **)(*(int *)(param_1 + 0x98) + 8);
      func_0x006e7700(auStack_d8);
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
      func_0x006be460(auStack_160);
      puVar2[0x1e] = uStack_ec;
      *(undefined8 *)(puVar2 + 0x1f) = uStack_e8;
      puVar2[0x21] = uStack_e0;
      *puVar2 = FUN_006f3700;
      puStack_2c = (undefined4 *)0x0;
      uStack_14._0_1_ = 3;
      puStack_40 = puVar2;
      func_0x006ed130();
      uStack_14._0_1_ = 0;
      func_0x006e1850();
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
