  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x004a2920(uStack_14);
  uStack_8 = 0;
  if ((undefined4 *)((int)uStack_1c + 8) != param_2) {
    puVar5 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar5 = (undefined4 *)*param_2;
    }
    func_0x0046a660(puVar5,param_2[4]);
  }
  func_0x004a27a0(param_2);
  *(undefined4 *)((int)uStack_1c + 0x28) = param_3;
  *(undefined4 *)((int)uStack_1c + 0x2c) = param_4;
  *(undefined4 *)((int)uStack_1c + 0x30) = param_5;
  *(undefined4 *)((int)uStack_1c + 0x34) = param_6;
  *(undefined4 *)((int)uStack_1c + 0x38) = param_7;
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == *(int **)(param_1 + 0x14)) {
    func_0x00488a10(piVar2,&uStack_1c);
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    *piVar2 = (int)uStack_1c;
    piVar2[1] = (int)uStack_1c._4_4_;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 8;
  }
  uStack_8 = 0xffffffff;
  piVar2 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a1ea0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb3a4f;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uStack_2c = 0;
  func_0x00472b40(&uStack_2c,param_2,uStack_24);
  if ((int)uStack_2c == 0) {
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    uStack_14 = 0;
    piVar3 = uStack_2c._4_4_;
    if (uStack_2c._4_4_ == (int *)0x0) goto LAB_004a1ff7;
    LOCK();
    iVar2 = uStack_2c._4_4_[1] + -1;
    uStack_2c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a1ff7;
    pcVar4 = *(code **)*uStack_2c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a1ff7;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    uStack_14 = 2;
    func_0x00469da0((int)uStack_2c + 8);
    uStack_14 = 0;
    piVar3 = uStack_2c._4_4_;
    if (uStack_2c._4_4_ == (int *)0x0) goto LAB_004a1ff7;
    LOCK();
    iVar2 = uStack_2c._4_4_[1] + -1;
    uStack_2c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a1ff7;
    pcVar4 = *(code **)*uStack_2c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a1ff7;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_004a1ff7:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_004a2020(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb3a4f;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uStack_2c = 0;
  func_0x00472bc0(&uStack_2c,param_2,uStack_24);
  if ((int)uStack_2c == 0) {
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    uStack_14 = 0;
    piVar3 = uStack_2c._4_4_;
    if (uStack_2c._4_4_ == (int *)0x0) goto LAB_004a2177;
    LOCK();
    iVar2 = uStack_2c._4_4_[1] + -1;
    uStack_2c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a2177;
    pcVar4 = *(code **)*uStack_2c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a2177;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    uStack_14 = 2;
    func_0x00469da0((int)uStack_2c + 8);
    uStack_14 = 0;
    piVar3 = uStack_2c._4_4_;
    if (uStack_2c._4_4_ == (int *)0x0) goto LAB_004a2177;
    LOCK();
    iVar2 = uStack_2c._4_4_[1] + -1;
    uStack_2c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a2177;
    pcVar4 = *(code **)*uStack_2c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a2177;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_004a2177:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_004a21a0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x00472b40(&uStack_1c,param_2,uStack_14);
  piVar3 = uStack_1c._4_4_;
  if ((int)uStack_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a2298;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a2298;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a2298;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    *param_1 = *(undefined4 *)((int)uStack_1c + 0x28);
    param_1[1] = *(undefined4 *)((int)uStack_1c + 0x2c);
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a2298;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a2298;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a2298;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_004a2298:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a22c0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x00472bc0(&uStack_1c,param_2,uStack_14);
  piVar3 = uStack_1c._4_4_;
  if ((int)uStack_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a23b8;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a23b8;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a23b8;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    *param_1 = *(undefined4 *)((int)uStack_1c + 0x28);
    param_1[1] = *(undefined4 *)((int)uStack_1c + 0x2c);
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a23b8;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a23b8;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a23b8;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_004a23b8:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a23e0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x00472b40(&uStack_1c,param_2,uStack_14);
  piVar3 = uStack_1c._4_4_;
  if ((int)uStack_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a24d8;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a24d8;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a24d8;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    *param_1 = *(undefined4 *)((int)uStack_1c + 0x30);
    param_1[1] = *(undefined4 *)((int)uStack_1c + 0x34);
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a24d8;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a24d8;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a24d8;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_004a24d8:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a2500(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x00472bc0(&uStack_1c,param_2,uStack_14);
  piVar3 = uStack_1c._4_4_;
  if ((int)uStack_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a25f8;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a25f8;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a25f8;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    *param_1 = *(undefined4 *)((int)uStack_1c + 0x30);
    param_1[1] = *(undefined4 *)((int)uStack_1c + 0x34);
    uStack_8 = 0xffffffff;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_004a25f8;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_004a25f8;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_004a25f8;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_004a25f8:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a2620(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb27ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  func_0x00472b40(&uStack_20,param_1,uStack_18);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_20._4_4_;
  if (uStack_20._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_20._4_4_;
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
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004a26e0(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb27ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  func_0x00472bc0(&uStack_20,param_1,uStack_18);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_20._4_4_;
  if (uStack_20._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_20._4_4_;
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
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004a2b40(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eb3b5b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 2;
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_004a2c20(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  return param_1;
}



// Library Function - Single Match
//  public: virtual void * __thiscall std::_Facet_base::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

undefined4 * __thiscall ___G_Facet_base_std__UAEPAXI_Z(undefined4 *param_1,byte param_2)

{
  *param_1 = stdext::packed_any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



void __thiscall FUN_004a2e10(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | param_2;
  return;
}



void FUN_004a2e20(undefined4 param_1)

{
  func_0x004a55c0(1,param_1);
  return;
}



undefined4 FUN_004a2e40(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a54d0(param_1,1,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_004a2ea0(void)

{
  func_0x004a5a70(0,&stack0x00000004);
  return;
}



undefined4 __fastcall FUN_004a2ec0(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(param_1 + 0x14) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6) == '\0') {
        return *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6 + 1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(param_1 + 0x14));
  }
  return 0;
}



void FUN_004a2ef0(void)

{
  func_0x004a5a70(2,&stack0x00000004);
  return;
}



undefined4 __fastcall FUN_004a2f10(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(param_1 + 0x14) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6) == '\x02') {
        return *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6 + 1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(param_1 + 0x14));
  }
  return 0;
}



void FUN_004a2f40(void)

{
  func_0x004a5a70(4,&stack0x00000004);
  return;
}



undefined4 __fastcall FUN_004a2f60(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(param_1 + 0x14) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6) == '\x04') {
        return *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6 + 1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(param_1 + 0x14));
  }
  return 0;
}



void FUN_004a2f90(void)

{
  func_0x004a5a70(5,&stack0x00000004);
  return;
}



undefined4 __fastcall FUN_004a2fb0(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(param_1 + 0x14) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6) == '\x05') {
        return *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)bVar1 * 6 + 1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(param_1 + 0x14));
  }
  return 0;
}



void FUN_004a2fe0(undefined4 param_1)

{
  func_0x004a5850(3,param_1);
  return;
}



undefined4 FUN_004a3000(undefined4 param_1)

{
  func_0x004a57e0(param_1,3);
  return param_1;
}



undefined4 * __thiscall FUN_004a3020(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eb3be6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = House::vftable;
  iStack_8 = 3;
  if (param_1[8] != 0) {
    func_0x00486330(uVar2);
    *(undefined4 *)param_1[7] = param_1[7];
    *(undefined4 *)(param_1[7] + 4) = param_1[7];
    param_1[8] = 0;
    puStack_14 = (undefined4 *)param_1[7];
    func_0x0046c050(&puStack_14);
  }
  iStack_8._0_1_ = 2;
  if (param_1[0xe] != 0) {
    func_0x00485920(param_1[0xe]);
    func_0x0046e710(param_1[0xe],(int)(param_1[0x10] - param_1[0xe]) >> 3);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  iStack_8._0_1_ = 1;
  puStack_14 = param_1 + 6;
  func_0x0047df60();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    func_0x008ab4ad(iVar1,6,*(undefined4 *)(iVar1 + -4),FUN_00469e70);
    func_0x008ab383((int *)(iVar1 + -4),*(int *)(iVar1 + -4) * 6 + 4);
  }
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_004a3150(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  int *unaff_FS_OFFSET;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  int *piStack_24;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb3c6e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar8 = 0;
  *(uint *)(*param_2 + 0x44) = *(uint *)(*param_2 + 0x44) | 0x40;
  if (*(byte *)(param_1 + 0x14) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x10) + (uint)bVar8 * 6) == '\0') {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)bVar8 * 6 + 1);
        goto LAB_004a31b1;
      }
      bVar8 = bVar8 + 1;
    } while (bVar8 < *(byte *)(param_1 + 0x14));
  }
  uVar6 = 0;
LAB_004a31b1:
  *(undefined4 *)(*param_2 + 0x48) = uVar6;
  uStack_34 = *(undefined8 *)(*param_2 + 0x34);
  uStack_2c = *(undefined4 *)(*param_2 + 0x3c);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iStack_28 = *param_2;
  piStack_24 = (int *)param_2[1];
  uStack_8 = 0;
  uStack_18 = 1;
  func_0x00488430(auStack_20,&uStack_34,uVar5);
  piVar1 = piStack_24;
  iVar7 = 0;
  uStack_18 = 0;
  uStack_8 = 0xffffffff;
  if (piStack_24 != (int *)0x0) {
    LOCK();
    piVar2 = piStack_24 + 1;
    iVar3 = *piVar2;
    iVar7 = *piVar2;
    *piVar2 = iVar3 + -1;
    UNLOCK();
    if (iVar3 + -1 == 0) {
      pcVar4 = *(code **)*piStack_24;
      _guard_check_icall();
      iVar7 = (*pcVar4)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar4 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



undefined4 * __thiscall FUN_004a3280(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_20 [8];
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb18be;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_18 = param_2;
  uStack_14 = 0;
  iVar4 = func_0x0048ca40(auStack_20,param_3,
                          (*param_3 * 0x2000 + param_3[1]) * 0x10 + (int)(short)param_3[2],uVar3);
  iVar4 = *(int *)(iVar4 + 4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *param_2 = 0;
  param_2[1] = 0;
  if (iVar4 != iVar2) {
    if (*(int *)(iVar4 + 0x18) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(iVar4 + 0x18) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(iVar4 + 0x14);
    param_2[1] = *(undefined4 *)(iVar4 + 0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_004a3330(int param_1,int *param_2)

{
  undefined1 auStack_c [4];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (*param_2 != 0) {
    auStack_c[0] = *(undefined1 *)(param_1 + 0x44);
    func_0x004a5330(0xe,auStack_c);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    func_0x004683d0(param_2);
  }
  FUN_008ab370();
  return;
}



int __thiscall FUN_004a3390(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb3cad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 < *(uint *)(param_1 + 0x44)) {
    uStack_1c = 0;
    piStack_18 = (int *)0x0;
    uStack_8 = 2;
    iVar6 = func_0x0046ffa0(&uStack_1c);
    piVar4 = piStack_18;
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_18 + 1;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_18;
        _guard_check_icall();
        iVar6 = (*pcVar3)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          iVar6 = (*pcVar3)();
        }
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
  func_0x00469d30("Failed to remove door of id %d (would overflow), max id: %d",uVar5);
  uStack_8 = 0;
  func_0x004a5c10(&param_2,(uint *)(param_1 + 0x44));
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0047d860();
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}



void __thiscall FUN_004a40e0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_8 [4];
  
  bVar3 = 0;
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (bVar1 != 0) {
    iVar2 = *(int *)(*param_2 + 0x10);
    do {
      if (*(char *)(iVar2 + (uint)bVar3 * 6) == '\0') {
        uVar4 = *(undefined4 *)(iVar2 + (uint)bVar3 * 6 + 1);
        goto LAB_004a4117;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < bVar1);
  }
  uVar4 = 0;
LAB_004a4117:
  piVar5 = (int *)func_0x004a4ee0(auStack_8,uVar4);
  if (*piVar5 == *param_1) {
    func_0x004a5060(param_2);
  }
  return;
}



void __thiscall FUN_004a4140(int *param_1,undefined4 param_2)

{
  int *piStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piStack_c = (int *)0x0;
  func_0x004a4ee0(&piStack_c,param_2);
  if (piStack_c != (int *)*param_1) {
    *(int *)piStack_c[1] = *piStack_c;
    *(int *)(*piStack_c + 4) = piStack_c[1];
    param_1[1] = param_1[1] + -1;
    func_0x004a6050();
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_004a41a0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int iStack_28;
  int *piStack_24;
  uint uStack_20;
  int iStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb3e60;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  piStack_18 = (int *)0x0;
  func_0x004a4ee0(&piStack_18,param_3,uStack_14);
  if (piStack_18 == (int *)*param_1) {
    iStack_1c = 0;
    piVar4 = &iStack_1c;
    piStack_18 = (int *)0x0;
    uVar6 = 2;
    iVar5 = 0;
  }
  else {
    if (piStack_18[3] != 0) {
      LOCK();
      piVar4 = (int *)(piStack_18[3] + 4);
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    iVar5 = piStack_18[2];
    piVar4 = &iStack_28;
    piStack_24 = (int *)piStack_18[3];
    uVar6 = 1;
    iStack_28 = iVar5;
  }
  uStack_20 = uVar6;
  iVar2 = piVar4[1];
  param_2[1] = 0;
  *param_2 = iVar5;
  param_2[1] = iVar2;
  *piVar4 = 0;
  piVar4[1] = 0;
  uVar7 = uVar6 | 4;
  uStack_8 = 1;
  uStack_20 = uVar7;
  if (((uVar6 & 2) != 0) &&
     (uVar7 = uVar6 & 0xfffffffd | 4, uStack_20 = uVar7, piStack_18 != (int *)0x0)) {
    LOCK();
    iVar5 = piStack_18[1] + -1;
    piStack_18[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piStack_18[2] + -1;
      piStack_18[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar4 = piStack_24;
  uStack_8 = 0;
  if (((uVar7 & 1) != 0) && (uStack_20 = uVar7 & 0xfffffffe, piStack_24 != (int *)0x0)) {
    LOCK();
    iVar5 = piStack_24[1] + -1;
    piStack_24[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piStack_24;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_004a4340(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 **ppuVar7;
  int iVar8;
  undefined4 ***pppuVar9;
  undefined4 ***pppuVar10;
  uint uVar11;
  undefined4 ****ppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 ***apppuStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 ***apppuStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 ***pppuStack_20;
  uint uStack_1c;
  char cStack_15;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eb3f21;
  iStack_10 = *unaff_FS_OFFSET;
  uVar11 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_28 = param_2;
  uStack_1c = 0;
  uStack_8 = 1;
  pppuStack_20 = apppuStack_48;
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)*puVar3;
  piStack_2c = param_1;
  func_0x00469da0(&param_3,uVar11);
  uStack_8 = uStack_8 & 0xffffff00;
  for (; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
    uStack_8._1_3_ = (undefined3)(uStack_8 >> 8);
    uStack_8._0_1_ = 5;
    func_0x004a54d0(apppuStack_60,1);
    uStack_1c = 8;
    ppppuVar13 = apppuStack_48;
    if (0xf < uStack_34) {
      ppppuVar13 = (undefined4 ****)apppuStack_48[0];
    }
    ppppuVar12 = apppuStack_60;
    if (0xf < uStack_4c) {
      ppppuVar12 = (undefined4 ****)apppuStack_60[0];
    }
    cStack_15 = func_0x0046cf20(ppppuVar12,uStack_50,ppppuVar13,uStack_38);
    uStack_1c = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,4);
    if (0xf < uStack_4c) {
      func_0x0046b1f0(apppuStack_60,apppuStack_60[0],uStack_4c);
    }
    uStack_50 = 0;
    uStack_4c = 0xf;
    apppuStack_60[0] = (undefined4 ***)((uint)apppuStack_60[0] & 0xffffff00);
    if (cStack_15 != '\0') break;
  }
  uStack_8._0_1_ = 1;
  if (0xf < uStack_34) {
    func_0x0046b1f0(apppuStack_48,apppuStack_48[0],uStack_34);
  }
  puVar3 = puStack_28;
  uStack_38 = 0;
  uStack_34 = 0xf;
  apppuStack_48[0] = (undefined4 ***)((uint)apppuStack_48[0] & 0xffffff00);
  if (puVar4 == (undefined4 *)*piStack_2c) {
    uStack_30 = 0;
    puVar14 = &uStack_30;
    piStack_2c = (int *)0x0;
    uStack_8 = 8;
    uVar11 = 2;
    uVar16 = 0;
  }
  else {
    if (puVar4[3] != 0) {
      LOCK();
      piVar1 = (int *)(puVar4[3] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar16 = puVar4[2];
    puVar14 = &uStack_24;
    uStack_24 = uVar16;
    pppuStack_20 = (undefined4 ****)puVar4[3];
    uStack_8 = CONCAT31(uStack_8._1_3_,7);
    uVar11 = 1;
  }
  uStack_1c = uVar11;
  uVar5 = puVar14[1];
  *puVar14 = 0;
  puVar14[1] = 0;
  piVar1 = piStack_2c;
  puVar3[1] = 0;
  *puVar3 = uVar16;
  puVar3[1] = uVar5;
  uVar15 = uVar11 | 4;
  uStack_8 = 7;
  uStack_1c = uVar15;
  if (((uVar11 & 2) != 0) &&
     (uVar15 = uVar11 & 0xfffffffd | 4, uStack_1c = uVar15, piStack_2c != (int *)0x0)) {
    LOCK();
    iVar8 = piStack_2c[1] + -1;
    piStack_2c[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      pcVar6 = *(code **)*piStack_2c;
      _guard_check_icall();
      (*pcVar6)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar8 = *piVar2 + -1;
      *piVar2 = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar6 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar6)();
      }
    }
  }
  pppuVar10 = pppuStack_20;
  uStack_8 = 1;
  if (((uVar15 & 1) != 0) &&
     (uStack_1c = uVar15 & 0xfffffffe, (undefined4 ****)pppuStack_20 != (undefined4 ****)0x0)) {
    LOCK();
    pppuVar9 = (undefined4 ***)((int)pppuStack_20[1] + -1);
    pppuStack_20[1] = pppuVar9;
    UNLOCK();
    if (pppuVar9 == (undefined4 ***)0x0) {
      ppuVar7 = (undefined4 **)**pppuVar10;
      _guard_check_icall();
      (*(code *)ppuVar7)();
      LOCK();
      ppppuVar13 = (undefined4 ****)(pppuVar10 + 2);
      pppuVar9 = *ppppuVar13;
      *ppppuVar13 = (undefined4 ***)((int)*ppppuVar13 + -1);
      UNLOCK();
      if (pppuVar9 == (undefined4 ***)0x1) {
        ppuVar7 = (undefined4 **)(*pppuVar10)[1];
        _guard_check_icall();
        (*(code *)ppuVar7)();
      }
    }
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < in_stack_0000001c) {
    func_0x0046b1f0(&param_3,param_3,in_stack_0000001c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puStack_28;
}



void __thiscall FUN_004a45c0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  uint uStack_100;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [64];
  char cStack_68;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00eb3fbb;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_100 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_100;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  uStack_ac = param_1;
  uStack_2c = uStack_100;
  memset(auStack_a8,0,0x70);
  func_0x008794e0();
  iStack_14._0_1_ = 1;
  puVar4 = (undefined4 *)func_0x00611cf0(auStack_c8,param_2);
  iStack_14._0_1_ = 2;
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  FUN_0087b0c0(puVar4,0,0);
  iStack_14._0_1_ = 1;
  FUN_00469ba0();
  if (cStack_68 == '\0') {
    iVar5 = func_0x0047d9e0();
    if (iVar5 == 0) goto LAB_004a492e;
    cVar3 = func_0x00484e70(iVar5 + 0x20,"houses");
    if (cVar3 != '\0') goto LAB_004a492e;
    iVar5 = func_0x0047d9e0();
    while( true ) {
      if (iVar5 == 0) {
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        func_0x0047db20();
        iStack_14 = 0xffffffff;
        func_0x004a6330(param_1);
        *unaff_FS_OFFSET = iStack_1c;
        uStack_100 = 0x4a48c6;
        FUN_008ab370();
        return;
      }
      cVar3 = func_0x00484e70(iVar5 + 0x20,"house");
      if (cVar3 != '\0') break;
      func_0x00469d30("houseid");
      iStack_14._0_1_ = 7;
      uVar6 = func_0x004a5ce0(auStack_c8);
      iStack_14._0_1_ = 1;
      uStack_b0 = uVar6;
      FUN_00469ba0();
      uStack_34 = 0;
      FUN_004a41a0(&uStack_34,uVar6);
      iStack_14._0_1_ = 8;
      uVar2 = (undefined1)iStack_14;
      iStack_14._0_1_ = 8;
      if ((int)uStack_34 == 0) {
        uVar6 = func_0x004a5dc0();
        iStack_14._0_1_ = 9;
        func_0x0046ffa0(uVar6);
        iStack_14._0_1_ = 8;
        FUN_00468340();
        FUN_004a40e0(&uStack_34);
        uVar2 = (undefined1)iStack_14;
      }
      iStack_14._0_1_ = uVar2;
      func_0x004a3470(iVar5);
      iStack_14._0_1_ = 1;
      FUN_00468340();
      iVar5 = func_0x0047d990();
    }
  }
  else {
    uStack_ac = func_0x0047dba0();
    func_0x00469d30("failed to load \'%s\': %s (House XML)");
    iStack_14._0_1_ = 3;
    func_0x004852c0(param_2,&uStack_ac);
    iStack_14._0_1_ = 4;
    func_0x0047d860();
  }
  func_0x00469d30("invalid house tag.");
  iStack_14._0_1_ = 6;
  func_0x0047d860();
LAB_004a492e:
  func_0x00469d30("invalid root tag name");
  iStack_14 = CONCAT31(iStack_14._1_3_,5);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * Catch_004a47b1(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xc4) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0xa0) = uVar2;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  func_0x0046bc40("Failed to load \'%s\': %s",0x17);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0xc0),unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
    func_0x0046b1f0(unaff_EBP + -0xb8,*(undefined4 *)(unaff_EBP + -0xb8),
                    *(uint *)(unaff_EBP + -0xa4));
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return &DAT_004a488c;
}



void __thiscall FUN_004a4950(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_100;
  undefined1 auStack_cc [24];
  undefined4 uStack_b4;
  uint uStack_b0;
  char cStack_a9;
  undefined1 auStack_a8 [96];
  undefined4 uStack_48;
  undefined8 uStack_38;
  int *piStack_30;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00eb40c2;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_100 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_100;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_b4 = param_2;
  uStack_b0 = 0;
  iStack_14 = 0;
  uStack_2c = uStack_100;
  memset(auStack_a8,0,0x70);
  func_0x008794e0();
  iStack_14._0_1_ = 1;
  uStack_48 = 2;
  pvVar3 = (void *)func_0x008ab47d(0x88);
  iStack_14._0_1_ = 2;
  memset(pvVar3,0,0x88);
  uVar4 = func_0x00879d90();
  iStack_14._0_1_ = 1;
  func_0x00878ac0(uVar4);
  pvVar3 = (void *)func_0x008ab47d(0x8c);
  iStack_14._0_1_ = 3;
  memset(pvVar3,0,0x8c);
  func_0x00469d30("houses");
  iStack_14 = CONCAT31(iStack_14._1_3_,4);
  uStack_b0 = 1;
  uVar4 = func_0x00878be0(auStack_cc);
  iStack_14 = 1;
  uStack_b0 = 0;
  FUN_00469ba0();
  func_0x00878ac0(uVar4);
  piVar1 = (int *)*param_1;
  piVar6 = (int *)*piVar1;
  piStack_30 = piVar1;
  while (uVar4 = uStack_b4, piVar6 != piVar1) {
    uStack_38 = 0;
    func_0x00468490(piVar6 + 2);
    iStack_14._0_1_ = 6;
    pvVar3 = (void *)func_0x008ab47d(0x8c);
    iStack_14._0_1_ = 7;
    memset(pvVar3,0,0x8c);
    func_0x00469d30("house");
    iStack_14 = CONCAT31(iStack_14._1_3_,8);
    uStack_b0 = uStack_b0 | 2;
    piStack_30 = (int *)func_0x00878be0(auStack_cc);
    iStack_14 = 6;
    if ((uStack_b0 & 2) != 0) {
      uStack_b0 = uStack_b0 & 0xfffffffd;
      FUN_00469ba0();
    }
    func_0x004a3ba0(piStack_30);
    func_0x00878ac0(piStack_30);
    iStack_14 = CONCAT31(iStack_14._1_3_,1);
    FUN_00468340();
    piVar6 = (int *)*piVar6;
    piStack_30 = piVar6;
  }
  puVar5 = (undefined4 *)func_0x00484950(auStack_cc,&DAT_0113c58c,uStack_b4);
  iStack_14._0_1_ = 10;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  cStack_a9 = func_0x008795a0(puVar5);
  iStack_14._0_1_ = 1;
  FUN_00469ba0();
  if (cStack_a9 != '\0') {
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    func_0x0047db20();
    iStack_14 = 0xffffffff;
    *unaff_FS_OFFSET = iStack_1c;
    FUN_008ab370();
    return;
  }
  uStack_b4 = func_0x0047dba0();
  func_0x00469d30("failed to save houses XML %s: %s");
  iStack_14._0_1_ = 0xb;
  func_0x004852c0(uVar4,&uStack_b4);
  iStack_14 = CONCAT31(iStack_14._1_3_,0xc);
  func_0x0047d860();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_004a4c04(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xcc) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0xa4) = uVar2;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  func_0x0046bc40("Failed to save \'%s\': %s",0x17);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -200),unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
    func_0x0046b1f0(unaff_EBP + -0xbc,*(undefined4 *)(unaff_EBP + -0xbc),
                    *(uint *)(unaff_EBP + -0xa8));
  }
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xbc) = 0;
  return &DAT_004a4cdf;
}



int * __thiscall FUN_004a4d60(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4126;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar9 = func_0x008ab47d(0x10,uVar8);
  *(int *)iVar9 = iVar9;
  *(int *)(iVar9 + 4) = iVar9;
  *param_2 = iVar9;
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)*puVar3;
  do {
    if (puVar4 == puVar3) {
      *unaff_FS_OFFSET = iStack_10;
      return param_2;
    }
    uStack_8 = 0;
    uVar10 = 0;
    bVar2 = *(byte *)(puVar4[2] + 0x14);
    if (bVar2 != 0) {
      iVar9 = *(int *)(puVar4[2] + 0x10);
      do {
        if (*(char *)(iVar9 + uVar10 * 6) == '\x02') {
          iVar9 = *(int *)(iVar9 + uVar10 * 6 + 1);
          goto LAB_004a4e13;
        }
        bVar7 = (char)uVar10 + 1;
        uVar10 = (uint)bVar7;
      } while (bVar7 < bVar2);
    }
    iVar9 = 0;
LAB_004a4e13:
    if (iVar9 == param_3) {
      iVar9 = *param_2;
      if (param_2[1] == 0xfffffff) {
        func_0x00e701fa("list too long");
        pcVar6 = (code *)swi(3);
        piVar11 = (int *)(*pcVar6)();
        return piVar11;
      }
      uStack_8 = 1;
      piVar11 = (int *)func_0x008ab47d(0x10,uVar8);
      piVar11[2] = 0;
      piVar11[3] = 0;
      if (puVar4[3] != 0) {
        LOCK();
        piVar1 = (int *)(puVar4[3] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      piVar11[2] = puVar4[2];
      piVar11[3] = puVar4[3];
      param_2[1] = param_2[1] + 1;
      puVar5 = *(undefined4 **)(iVar9 + 4);
      *piVar11 = iVar9;
      piVar11[1] = (int)puVar5;
      *(int **)(iVar9 + 4) = piVar11;
      *puVar5 = piVar11;
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}



void FUN_004a4f50(void)

{
  func_0x004a6330();
  return;
}



int __fastcall FUN_004a52a0(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}



undefined4 * __thiscall FUN_004a6300(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 * __fastcall FUN_004a64c0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb45bc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x10,uVar1);
  *puVar2 = stdext::packed_any::placeholder::vftable;
  *puVar2 = stdext::packed_any::holder<>::vftable;
  *(undefined8 *)(puVar2 + 1) = *(undefined8 *)(param_1 + 4);
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __fastcall FUN_004a6540(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb4607;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x1c,uVar1);
  *puVar2 = stdext::packed_any::placeholder::vftable;
  uStack_8 = 1;
  *puVar2 = stdext::packed_any::holder<>::vftable;
  func_0x00469da0(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_004a65c0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb463d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::packed_any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_004a6620(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4678;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  if (0xf < (uint)param_1[6]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[6],uVar2);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::packed_any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_004a6a73(void)

{
  func_0x0046a610(4,1);
  return &DAT_004a6a8c;
}



undefined * Catch_004a6bee(void)

{
  func_0x0046a610(4,1);
  return &DAT_004a6c07;
}



undefined4 __fastcall FUN_004a6d00(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



int __fastcall FUN_004a6d10(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - (int)*(int **)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((iVar1 >> 2 != 0) && (**(int **)(param_1 + 0x18) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004a6d30(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((5 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x14) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004a6d50(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((10 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x28) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004a6d70(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0xb < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x2c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004a6d90(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0xd < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x34) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004a6db0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x11 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x44) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined2 __fastcall FUN_004a6dd0(int param_1)

{
  int iVar1;
  
  if ((0x10 < (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x40), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 4);
  }
  return 0;
}



undefined2 __fastcall FUN_004a6df0(int param_1)

{
  int iVar1;
  
  if ((0x11 < (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x44), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 4);
  }
  return 0;
}



uint __fastcall FUN_004a6e10(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if ((0x1d < uVar1) && (uVar1 = *(uint *)(*(int *)(param_1 + 0x14) + 0x74), uVar1 != 0)) {
    return CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(uVar1 + 4));
  }
  return uVar1 & 0xffffff00;
}



int __fastcall FUN_004a6e30(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((5 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x14) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004a6e70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((10 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x28) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



void __thiscall FUN_004a70f0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x34) = param_2;
  return;
}



undefined2 __fastcall FUN_004a7100(int param_1)

{
  return *(undefined2 *)(param_1 + 0x30);
}



undefined2 __fastcall FUN_004a7110(int param_1)

{
  return *(undefined2 *)(param_1 + 0x32);
}



undefined4 FUN_004a7120(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a54d0(param_1,6,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_004a7180(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004a54d0(param_1,7,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_004a7210(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x8c) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x88);
  param_2[1] = *(undefined4 *)(param_1 + 0x8c);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __thiscall FUN_004a7290(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x94) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x90);
  param_2[1] = *(undefined4 *)(param_1 + 0x94);
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined4 __thiscall FUN_004a7310(undefined4 param_1,byte param_2)

{
  func_0x004a6ef0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xbb);
  }
  return param_1;
}



int * FUN_004a76b0(int *param_1,undefined4 param_2,undefined2 param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb491e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  func_0x004a95f0(uVar2);
  uStack_8 = 0;
  pcVar1 = *(code **)(*(int *)*param_1 + 8);
  _guard_check_icall(param_2);
  (*pcVar1)();
  *(undefined2 *)(*param_1 + 0x34) = param_3;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined8 * FUN_004a7740(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eadafe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = 0;
  func_0x004a95f0(uVar1);
  uStack_8 = 0;
  func_0x004a7dc0(param_2);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_004a77b0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4977;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  uStack_11 = 0x12;
  func_0x00484b30(param_1,&uStack_11,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_004a7870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar3;
  float *pfStack_60;
  int *piStack_5c;
  int **ppiStack_58;
  undefined4 uStack_54;
  int *piStack_48;
  int iStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((short)param_1[0xc] != 0) {
    uStack_54 = param_3;
    ppiStack_58 = (int **)0x4a7890;
    uStack_3c = func_0x004a8fc0();
    ppiStack_58 = &piStack_48;
    fStack_40 = 0.0;
    piStack_5c = &iStack_44;
    iStack_44 = 0;
    pfStack_60 = &fStack_40;
    piStack_48 = (int *)0x0;
    func_0x004a8b90();
    fStack_30 = DAT_012bc26c;
    uStack_2c = DAT_012bc270;
    uStack_28 = DAT_012bc274;
    uStack_24 = DAT_012bc278;
    if ((((0.001 < ABS(*(float *)((int)param_1 + 0x47) - DAT_0145f21c)) ||
         (0.001 < ABS(*(float *)((int)param_1 + 0x4b) - DAT_0145f220))) ||
        (0.001 < ABS(*(float *)((int)param_1 + 0x4f) - DAT_0145f224))) ||
       (0.001 < ABS(*(float *)((int)param_1 + 0x53) - DAT_0145f228))) {
      uStack_2c = *(undefined4 *)((int)param_1 + 0x4b);
      uStack_28 = *(undefined4 *)((int)param_1 + 0x4f);
      uStack_24 = *(undefined4 *)((int)param_1 + 0x53);
      fStack_30 = *(float *)((int)param_1 + 0x47);
    }
    pcVar1 = *(code **)(*param_1 + 0x40);
    iStack_44 = DAT_0145ec98[1] - *DAT_0145ec98 >> 2;
    fStack_40 = fStack_30;
    uStack_3c = uStack_2c;
    uStack_38 = uStack_28;
    uStack_34 = uStack_24;
    if (param_1[0x20] == 0) {
      _guard_check_icall();
      (*pcVar1)();
      piVar3 = piStack_48;
      func_0x005bcd30(param_2,0,unaff_ESI,unaff_EDI,uStack_54,piStack_48,fStack_30,uStack_2c,
                      uStack_28,uStack_24,param_4);
    }
    else {
      _guard_check_icall();
      (*pcVar1)();
      piVar3 = param_1 + 0x1c;
      func_0x005bd650(param_2,piVar3,unaff_ESI,unaff_EDI,uStack_54,piStack_48,piVar3,param_4,
                      fStack_30,uStack_2c,uStack_28,uStack_24);
    }
    if (*(char *)((int)param_1 + 0x1e) != '\0') {
      uVar2 = func_0x005ba2e0(&pfStack_60);
      func_0x004726d0(piVar3,uVar2);
    }
  }
  return;
}



void __thiscall FUN_004a7be0(int *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb49c5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2 & 0xffff) == 0) || ((uint)(DAT_0145d8a4 - DAT_0145d8a0 >> 3) <= (param_2 & 0xffff)))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar7 = 0;
  if (bVar3) {
    uVar7 = param_2 & 0xffff;
  }
  iVar5 = DAT_0145d8f8;
  if ((((short)uVar7 != 0) && (uVar7 < (uint)(DAT_0145d8d4 - DAT_0145d8d0 >> 3))) &&
     (iVar1 = *(int *)(DAT_0145d8d0 + uVar7 * 8), iVar1 != 0)) {
    iVar5 = iVar1;
  }
  if (((uint)(*(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 2) < 0x11) ||
     (iVar5 = *(int *)(*(int *)(iVar5 + 0x14) + 0x40), iVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined2 *)(iVar5 + 4);
  }
  *(undefined2 *)((int)param_1 + 0x32) = uVar4;
  *(short *)(param_1 + 0xc) = (short)uVar7;
  if ((DAT_0145d0c4 & 0x8000000) != 0) {
    pcVar2 = *(code **)(*param_1 + 0x40);
    _guard_check_icall(uStack_14);
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      uStack_1c = 0;
      func_0x00466e70(&uStack_1c);
      iStack_8 = 0;
      if ((int)uStack_1c != 0) {
        if (param_1[0x22] == 0) {
          uVar6 = func_0x004a9460();
          iStack_8._0_1_ = 1;
          func_0x0046ffa0(uVar6);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FUN_00468340();
        }
        func_0x0046dee0(&uStack_1c);
      }
      iStack_8 = 0xffffffff;
      FUN_00468340();
      uStack_24 = 0;
      func_0x00466ef0(&uStack_24);
      iStack_8 = 2;
      if ((int)uStack_24 != 0) {
        if (param_1[0x24] == 0) {
          uVar6 = func_0x004a9460();
          iStack_8._0_1_ = 3;
          func_0x0046ffa0(uVar6);
          iStack_8 = CONCAT31(iStack_8._1_3_,2);
          FUN_00468340();
        }
        func_0x0046dee0(&uStack_24);
      }
      iStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_004a8180(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x34) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  func_0x0046bc40("Failed to unserialize OTBM item: %s",0x23);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar2 = func_0x00485670(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
    func_0x0046b1f0(unaff_EBP + -0x4c,*(undefined4 *)(unaff_EBP + -0x4c),
                    *(uint *)(unaff_EBP + -0x38));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  return &DAT_004a8225;
}



ushort __fastcall FUN_004a8880(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if (((uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2) < 0xc) ||
     (*(int *)(*(int *)(iVar2 + 0x18) + 0x2c) == 0)) {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if (((uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2) < 0xb) ||
       (*(int *)(*(int *)(iVar2 + 0x18) + 0x28) == 0)) {
      return (ushort)(DAT_0145d0fc < 0x35c);
    }
  }
  return *(ushort *)(param_1 + 0xd);
}



undefined2 __fastcall FUN_004a88f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((5 < (uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2)) &&
     (*(int *)(*(int *)(iVar2 + 0x18) + 0x14) != 0)) {
    return (short)param_1[0xd];
  }
  return 1;
}



int __fastcall FUN_004a8930(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - (int)*(int **)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((iVar3 >> 2 != 0) && (**(int **)(iVar2 + 0x18) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



undefined8 * __thiscall FUN_004a8970(undefined4 param_1,undefined8 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4b0e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_2 = 0;
  func_0x004a95f0(uVar1);
  uStack_8 = 0;
  func_0x004a89f0(param_1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_004a91e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  func_0x004a8b90(&param_2,&param_3,&param_4);
  uVar1 = func_0x004a8fc0(1);
  FUN_00467050(param_1,param_2,param_3,param_4,uVar1);
  return;
}



void __fastcall FUN_004a9220(int param_1)

{
  FUN_005c37e0(*(undefined2 *)(param_1 + 0x30),0);
  return;
}



undefined4 __fastcall FUN_004a9240(int param_1)

{
  return *(undefined4 *)(DAT_0145d8a0 + (uint)*(ushort *)(param_1 + 0x30) * 8);
}



int * __fastcall FUN_004a99a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4c10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



undefined4 * __thiscall FUN_004a9a50(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<class_Item>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,200);
  }
  return param_1;
}



undefined4 * __thiscall FUN_004a9a80(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



int __thiscall FUN_004a9b80(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4c80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)(param_1 + 0x14);
  uStack_8 = 0;
  if (*piVar1 != 0) {
    func_0x004863e0(*piVar1,uVar2);
    func_0x0046ac90(*piVar1,*(int *)(param_1 + 0x1c) - *piVar1 >> 2);
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_004aa430(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  return param_1;
}



void __fastcall FUN_004aa460(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb128c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(8,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<bool>::vftable;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_004aa4d0(void)

{
  return &TypeDescriptor_012bde8c;
}



void __fastcall FUN_004aa4e0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb128c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(8,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<>::vftable;
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_004aa550(void)

{
  return &TypeDescriptor_012bde80;
}



void __fastcall FUN_004aa750(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb4de9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_3c = param_1;
  if ((*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_014638f8) &&
     (func_0x008ab40d(&DAT_014638f8,uStack_14), DAT_014638f8 == -1)) {
    uStack_8 = 0;
    DAT_014638ec = 0;
    DAT_014638f0 = 0;
    DAT_014638f4 = 0;
    func_0x008ab7fd(FUN_00f71070);
    uStack_8 = 0xffffffff;
    func_0x008ab3bc(&DAT_014638f8);
  }
  uVar2 = *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x24) * 4;
  if ((uint)(DAT_014638f0 - DAT_014638ec) < uVar2) {
    func_0x004aad90(uVar2);
  }
  iStack_38 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    uStack_44 = 6;
    do {
      piStack_30 = (int *)0x0;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          iStack_50 = (int)piStack_30 * DAT_0145d7e0 + DAT_0145d7e0 / 2;
          iStack_40 = iStack_38 * DAT_0145d7e0 + DAT_0145d7e0 / 2;
          iStack_34 = *(int *)(param_1 + 0x24) * (int)piStack_30 + iStack_38;
          *(char *)(DAT_014638ec + iStack_34 * 4) = (char)(int)(*(float *)(param_1 + 0x4c) * 255.0);
          *(char *)(DAT_014638ec + 1 + iStack_34 * 4) =
               (char)(int)(*(float *)(param_1 + 0x50) * 255.0);
          *(char *)(DAT_014638ec + 2 + iStack_34 * 4) =
               (char)(int)(*(float *)(param_1 + 0x54) * 255.0);
          *(undefined1 *)(DAT_014638ec + 3 + iStack_34 * 4) = 0xff;
          iVar5 = *(int *)(param_1 + 0x5c);
          uStack_48 = *(uint *)(*(int *)(param_1 + 0x68) + iStack_34 * 8);
          if (uStack_48 < (uint)((*(int *)(param_1 + 0x60) - iVar5 >> 2) * -0x55555555)) {
            iStack_4c = uStack_48 * 0xc;
            do {
              piVar4 = (int *)(iStack_4c + iVar5);
              fVar7 = (float)*(byte *)((int)piVar4 + 9) * 0.2 -
                      (SQRT((float)((iStack_40 - *piVar4) * (iStack_40 - *piVar4) +
                                   (iStack_50 - piVar4[1]) * (iStack_50 - piVar4[1]))) /
                      (float)DAT_0145d7e0) * 0.2;
              if (0.01 <= fVar7) {
                uVar2 = (uint)*(byte *)(piVar4 + 2);
                if (1.0 <= fVar7) {
                  fVar7 = 1.0;
                }
                if (uVar2 - 1 < 0xd7) {
                  fVar10 = (float)(((uVar2 / 0x24) % 6) * 0x33);
                  fVar8 = (float)(((uVar2 / 6) % 6) * 0x33) * 0.003921569;
                  fVar9 = (float)((uVar2 % 6) * 0x33) * 0.003921569;
                }
                else {
                  fVar8 = 0.0;
                  fVar9 = 0.0;
                  fVar10 = 0.0;
                }
                bVar3 = *(byte *)(DAT_014638ec + iStack_34 * 4);
                iStack_2c._0_1_ = (byte)(int)(fVar7 * fVar10);
                if (bVar3 < (byte)iStack_2c) {
                  bVar3 = (byte)iStack_2c;
                }
                *(byte *)(DAT_014638ec + iStack_34 * 4) = bVar3;
                bVar3 = *(byte *)(DAT_014638ec + 1 + iStack_34 * 4);
                iStack_2c._0_1_ = (byte)(int)(fVar8 * fVar7 * 255.0);
                if (bVar3 < (byte)iStack_2c) {
                  bVar3 = (byte)iStack_2c;
                }
                iStack_2c = (int)(fVar9 * fVar7 * 255.0);
                *(byte *)(DAT_014638ec + 1 + iStack_34 * 4) = bVar3;
                bVar3 = *(byte *)(DAT_014638ec + 2 + iStack_34 * 4);
                if (bVar3 < (byte)iStack_2c) {
                  bVar3 = (byte)iStack_2c;
                }
                *(byte *)(DAT_014638ec + 2 + iStack_34 * 4) = bVar3;
                param_1 = iStack_3c;
              }
              uStack_48 = uStack_48 + 1;
              iVar5 = *(int *)(param_1 + 0x5c);
              iStack_4c = iStack_4c + 0xc;
            } while (uStack_48 < (uint)((*(int *)(param_1 + 0x60) - iVar5 >> 2) * -0x55555555));
          }
          piStack_30 = (int *)((int)piStack_30 + 1);
        } while ((int)piStack_30 < *(int *)(param_1 + 0x28));
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < *(int *)(param_1 + 0x24));
  }
  piStack_30 = (int *)(param_1 + 0x1c);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1c) + 8);
  _guard_check_icall();
  (*pcVar1)();
  func_0x0087ee70(0xde1,*(undefined4 *)(*piStack_30 + 0x10));
  iVar5 = iStack_3c;
  func_0x0087f120(0xde1,0,0x1908,*(undefined4 *)(iStack_3c + 0x24),*(undefined4 *)(iStack_3c + 0x28)
                  ,0,0x1908,0x1401,DAT_014638ec);
  iStack_2c = *(int *)(iVar5 + 0x40);
  iStack_40 = *(int *)(iVar5 + 0x3c);
  iVar6 = *(int *)(iVar5 + 0x48) - iStack_2c;
  iVar5 = *(int *)(iVar5 + 0x44) - iStack_40;
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x00618ca0();
  uStack_8 = 1;
  fVar7 = 1.0 / (float)DAT_0145d7e0;
  fStack_70 = (float)iStack_40 * fVar7;
  fStack_68 = ((float)(iVar5 + 1) * fVar7 + fStack_70) - 1.0;
  fStack_6c = (float)iStack_2c * fVar7;
  fStack_64 = ((float)(iVar6 + 1) * fVar7 + fStack_6c) - 1.0;
  fStack_5c = (float)*(int *)(iStack_3c + 0x30);
  fStack_60 = (float)*(int *)(iStack_3c + 0x2c);
  fStack_54 = ((float)((*(int *)(iStack_3c + 0x38) - *(int *)(iStack_3c + 0x30)) + 1) + fStack_5c) -
              1.0;
  fStack_58 = ((float)((*(int *)(iStack_3c + 0x34) - *(int *)(iStack_3c + 0x2c)) + 1) + fStack_60) -
              1.0;
  if ((char)uStack_28 != '\0') {
    func_0x006194c0(0);
  }
  func_0x004aa560(&fStack_60);
  func_0x004aa560(&fStack_70);
  iVar5 = DAT_0145ceb8;
  *(undefined4 *)(DAT_0145ceb8 + 0x788) = DAT_012bc26c;
  *(undefined4 *)(iVar5 + 0x78c) = DAT_012bc270;
  *(undefined4 *)(iVar5 + 0x790) = DAT_012bc274;
  *(undefined4 *)(iVar5 + 0x794) = DAT_012bc278;
  if (*(int *)(iVar5 + 0x784) != 1) {
    *(undefined4 *)(iVar5 + 0x784) = 1;
    func_0x006234d0();
    iVar5 = DAT_0145ceb8;
  }
  iVar6 = *(int *)(iVar5 + 0x780);
  if (iVar6 == 0) {
    iVar6 = *(int *)(iVar5 + 0x7fc);
  }
  *(int *)(iVar5 + 0x7f8) = iVar6;
  func_0x00623300(piStack_30);
  func_0x00623610(&uStack_28,4,extraout_ECX,0);
  if (*(int *)(DAT_0145ceb8 + 0x784) != 0) {
    *(undefined4 *)(DAT_0145ceb8 + 0x784) = 0;
    func_0x006234d0();
  }
  uStack_8 = 0xffffffff;
  func_0x00618eb0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



bool __fastcall FUN_004ab410(int param_1)

{
  return *(char *)(param_1 + 0x4e) != '\0';
}



undefined4 * __thiscall FUN_004ab470(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4f3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = Player::vftable;
  uStack_8 = 0xffffffff;
  func_0x00473420(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2f8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_004ab7b0(int param_1)

{
  if (((*(int *)(param_1 + 0x2f8) == 0xffff) && (*(int *)(param_1 + 0x2fc) == 0xffff)) &&
     (*(short *)(param_1 + 0x300) == 0xff)) {
    return 0;
  }
  return 1;
}



undefined1 __fastcall FUN_004ab7e0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x338);
}



bool __fastcall FUN_004ab8f0(int param_1)

{
  return *(int *)(param_1 + 0x334) != 0;
}



undefined8 * __thiscall FUN_004ab900(int param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x334) != 0) && ((param_3 != '\0' || (*(int *)(param_1 + 0x334) != 1)))) {
    iVar1 = *(int *)(param_1 + 0x330);
    if (param_3 == '\0') {
      iVar1 = *(int *)(iVar1 + 4);
    }
    iVar1 = *(int *)(iVar1 + 4);
    *param_2 = *(undefined8 *)(iVar1 + 8);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(iVar1 + 0x10);
    return param_2;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x18);
  return param_2;
}



undefined4 __thiscall FUN_004abc90(undefined4 param_1,byte param_2)

{
  func_0x004abcc0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x570);
  }
  return param_1;
}



void __thiscall FUN_004abee0(int *param_1,int *param_2,char param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int iVar9;
  int *unaff_ESI;
  int iVar10;
  int iVar11;
  undefined4 uStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_28;
  int aiStack_24 [6];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_6c;
  iStack_38 = param_4;
  piStack_64 = param_1;
  if (((char)param_1[0x16] == '\x02') && (param_1[0x18] == 0xd)) {
    pcVar1 = *(code **)(*param_1 + 0x2c);
    _guard_check_icall();
    cVar5 = (*pcVar1)();
    if (cVar5 == '\0') goto LAB_00473e61;
  }
  piStack_68 = (int *)(int)(float)param_1[0xa9];
  iStack_40 = DAT_0145d7e0;
  iStack_60 = (int)(float)param_1[0xa8];
  iVar10 = *param_2 - iStack_60;
  iVar9 = param_1[0x97];
  iStack_44 = (param_1[0x98] - (int)piStack_68) + param_2[1];
  pcVar1 = *(code **)(*param_1 + 0x44);
  _guard_check_icall(&iStack_58);
  piVar7 = (int *)(*pcVar1)();
  iStack_40 = ((iVar10 + iVar9) - *piVar7) + iStack_44 / 2;
  iStack_48 = (iStack_48 - piVar7[1]) + iStack_44 / 2;
  if ((char)param_1[0x90] == '\0') {
    iVar9 = param_1[0x14];
  }
  else {
    iVar9 = param_1[0x15];
  }
  iStack_28 = iStack_40;
  aiStack_24[0] = iStack_48;
  func_0x00479a40(&iStack_28,iVar9);
  if (param_3 == '\0') {
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    iVar9 = param_1[0x97];
    iVar10 = param_1[0x98];
  }
  iStack_5c = iVar10;
  iStack_54 = iVar9;
  if (((char)param_1[0x49] != '\0') && (param_3 != '\0')) {
    piStack_64 = DAT_0145ec98;
    piStack_68 = (int *)((float)DAT_0145d7e0 * 0.03125);
    iStack_58 = (int)((float)iStack_4c - (float)piStack_68 * 4.0);
    iVar2 = param_2[1];
    iVar11 = *param_2 - (int)uStack_6c;
    pcVar1 = *(code **)(*unaff_EBX + 0x44);
    _guard_check_icall(&iStack_28);
    piVar7 = (int *)(*pcVar1)();
    iVar9 = iStack_58;
    iVar10 = iStack_60;
    iStack_44 = (iStack_58 - *piVar7) + iVar11 + (int)((float)DAT_0145d7e0 * 0.0625);
    iStack_40 = ((iVar2 - (int)unaff_ESI) - piVar7[1]) + (int)((float)DAT_0145d7e0 * 0.0625) +
                iStack_60;
    iStack_3c = iStack_5c + -1 + iStack_44;
    iStack_38 = iStack_5c + -1 + iStack_40;
    func_0x00472610(&iStack_44,(int)(uStack_6c + uStack_6c),unaff_ESI + 0x3d);
    param_1 = unaff_ESI;
  }
  if ((*(char *)((int)param_1 + 0x125) != '\0') && (param_3 != '\0')) {
    piStack_68 = DAT_0145ec98;
    piStack_64 = (int *)(float)DAT_0145d7e0;
    iVar2 = param_2[1];
    iVar11 = *param_2 - (int)uStack_6c;
    pcVar1 = *(code **)(*unaff_EBX + 0x44);
    _guard_check_icall(&iStack_28);
    piVar7 = (int *)(*pcVar1)();
    iVar9 = iStack_58;
    iVar10 = iStack_60;
    iStack_44 = (iStack_58 - *piVar7) + iVar11;
    iStack_3c = iStack_50 + -1 + iStack_44;
    iStack_40 = ((iVar2 - (int)unaff_ESI) - piVar7[1]) + iStack_60;
    iStack_38 = iStack_50 + -1 + iStack_40;
    func_0x00472610(&iStack_44,(int)((float)piStack_68 * 0.0625),unaff_ESI + 0x41);
    param_1 = unaff_ESI;
  }
  if ((char)param_1[0x16] != '\x01') {
    pcVar1 = *(code **)(*param_1 + 0x44);
    _guard_check_icall(&iStack_28);
    piVar7 = (int *)(*pcVar1)();
    iVar9 = iStack_54 - *piVar7;
    iStack_5c = iVar10 - piVar7[1];
  }
  iVar10 = DAT_0145ec98[1];
  iVar2 = *DAT_0145ec98;
  piStack_64 = (int *)param_1[0x85];
  if ((char)param_1[0x90] == '\0') {
    iVar11 = param_1[0x14];
  }
  else {
    iVar11 = param_1[0x15];
  }
  piVar7 = (int *)((*param_2 - (int)uStack_6c) + iVar9);
  func_0x0058ad00(iVar11,piStack_64,1,iStack_44,0,piVar7,iStack_5c + (param_2[1] - (int)unaff_ESI));
  if (*(char *)((int)param_1 + 0x1e) != '\0') {
    uVar8 = func_0x005ba2e0(&iStack_5c);
    func_0x004726d0(iVar10 - iVar2 >> 2,uVar8);
  }
  if ((char)param_1[0x90] == '\0') {
    iVar9 = param_1[0x14];
  }
  else {
    iVar9 = param_1[0x15];
  }
  if ((iVar9 == 0) || (iVar9 == 3)) {
    puVar3 = (undefined4 *)param_1[0xb2];
    for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
      iVar9 = puVar4[2];
      iStack_44 = (int)piStack_64 - ((*(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x40)) + 1) / 2;
      iStack_40 = (int)uStack_6c - ((*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + 1) / 2;
      iStack_3c = (*(int *)(iVar9 + 0x48) - *(int *)(puVar4[2] + 0x40)) + iStack_44;
      iStack_38 = (*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + iStack_40;
      FUN_00857930(&iStack_44);
      pcVar1 = *(code **)(*(int *)puVar4[2] + 4);
      _guard_check_icall(&iStack_44,1);
      (*pcVar1)();
      param_1 = piVar7;
    }
  }
  puVar3 = (undefined4 *)param_1[0xb4];
  for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
    iVar9 = puVar4[2];
    iStack_44 = (int)piStack_64 - ((*(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x40)) + 1) / 2;
    iStack_40 = (int)uStack_6c - ((*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + 1) / 2;
    iStack_3c = (*(int *)(iVar9 + 0x48) - *(int *)(puVar4[2] + 0x40)) + iStack_44;
    iStack_38 = (*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + iStack_40;
    FUN_00857930(&iStack_44);
    pcVar1 = *(code **)(*(int *)puVar4[2] + 4);
    _guard_check_icall(&iStack_44,1);
    (*pcVar1)();
    param_1 = piVar7;
  }
  uStack_6c._2_2_ = (undefined2)((uint)uStack_6c >> 0x10);
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x30);
  _guard_check_icall();
  cVar5 = (*pcVar1)();
  if (cVar5 != '\0') {
    bVar6 = uStack_6c._2_1_;
    if (uStack_6c._2_1_ < 2) {
      bVar6 = 2;
    }
    piStack_68 = (int *)CONCAT31(piStack_68._1_3_,bVar6);
    if ((uStack_6c._3_1_ == 0) || (0xd7 < uStack_6c._3_1_)) {
      iStack_60 = CONCAT31(iStack_60._1_3_,0xd7);
    }
  }
  if (iStack_38 != 0) {
    func_0x004aa6b0(aiStack_24,iStack_60,piStack_68);
  }
LAB_00473e61:
  FUN_008ab370();
  return;
}



void __thiscall FUN_004abef0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = (int)DAT_0145db28;
  iVar1 = *(int *)(param_1 + 0x328);
  if (*(int *)(param_1 + 0x328) < uStack_c + param_2) {
    iVar1 = uStack_c + param_2;
  }
  *(int *)(param_1 + 0x328) = iVar1;
  *(int *)(param_1 + 0x32c) = iVar1 >> 0x1f;
  return;
}



void __thiscall FUN_004abf30(int *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 auStack_34 [2];
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar5 = uStack_1c;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb514d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c._0_4_ = (uint)DAT_0145db28;
  uVar4 = (uint)uStack_1c;
  uStack_1c._4_4_ = (int)((ulonglong)DAT_0145db28 >> 0x20);
  iVar11 = uStack_1c._4_4_;
  uStack_1c = uVar5;
  uStack_14 = uVar7;
  if (param_1[0xca] != 0 || param_1[0xcb] != 0) {
    uStack_1c = DAT_0145db28;
    if ((iVar11 <= param_1[0xcb]) &&
       (((iVar11 < param_1[0xcb] || (uVar4 < (uint)param_1[0xca])) && (param_3 == '\0'))))
    goto LAB_004ac20e;
  }
  if ((short)param_1[0x2d] == 0) goto LAB_004ac20e;
  if ((char)param_1[0x90] != '\0') {
    uStack_1c = DAT_0145db28;
    uVar2 = param_1[0x88];
    iVar11 = (iVar11 - param_1[0x89]) - (uint)(uVar4 < (uint)param_1[0x88]);
    uVar8 = FUN_00478c20(0,8);
    if (((iVar11 < 1) && ((iVar11 < 0 || (uVar4 - uVar2 < (uVar8 & 0xffff))))) &&
       (cVar6 = FUN_004ab7b0(), cVar6 == '\0')) {
      pcVar3 = *(code **)(*param_1 + 0x84);
      _guard_check_icall();
      cVar6 = (*pcVar3)();
      if (cVar6 == '\0') goto LAB_004ac20e;
    }
  }
  uVar13 = 1;
  uStack_1c = 0;
  pcVar3 = *(code **)(*param_1 + 0x80);
  puVar12 = auStack_34;
  _guard_check_icall(puVar12,1,uVar7);
  uVar9 = (*pcVar3)();
  piVar10 = (int *)FUN_00572b50(uVar9);
  if (piVar10[1] != 0) {
    LOCK();
    piVar1 = (int *)(piVar10[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar11 = *piVar10;
  piStack_20 = (int *)piVar10[1];
  uStack_1c = *(undefined8 *)piVar10;
  uStack_8 = 0;
  pcVar3 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall(puVar12,uVar13,uVar7);
  cVar6 = (*pcVar3)();
  if ((cVar6 == '\0') ||
     ((*(char *)((int)param_1 + 0x339) != '\0' &&
      ((iVar11 == 0 || (*(char *)(iVar11 + 0x4e) == '\0')))))) {
    if (((char)param_1[0x90] != '\0') && (cVar6 = FUN_004ab7b0(), cVar6 == '\0')) {
      pcVar3 = *(code **)(*param_1 + 0x84);
      _guard_check_icall();
      cVar6 = (*pcVar3)();
      if (cVar6 == '\0') {
        pcVar3 = *(code **)(*param_1 + 0x7c);
        _guard_check_icall();
        cVar6 = (*pcVar3)();
        if ((cVar6 == '\0') || (*(char *)((int)param_1 + 0x339) == '\0')) goto LAB_004ac1c5;
      }
    }
    uVar4 = param_1[0xcd];
    if ((uVar4 == 0) || ((DAT_0145d0c8 & 0x4000000) != 0)) {
      if (uVar4 < DAT_0145d040) {
        if ((((uVar4 != 0) &&
             (iVar11 = FUN_00471cd0(param_1 + 4,*(int *)(param_1[0xcc] + 4) + 8), iVar11 != 7)) &&
            (iVar11 != 4)) && ((iVar11 != 6 && (iVar11 != 5)))) {
          pcVar3 = *(code **)(*param_1 + 0x80);
          _guard_check_icall(auStack_34,0);
          uVar9 = (*pcVar3)();
          FUN_00572b50(uVar9);
          FUN_005c9620(0);
        }
      }
      else {
        auStack_34[0] = DAT_0145db28;
        FUN_00478c20(0,8);
      }
    }
  }
LAB_004ac1c5:
  piVar10 = piStack_20;
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    LOCK();
    iVar11 = piStack_20[1] + -1;
    piStack_20[1] = iVar11;
    UNLOCK();
    if (iVar11 == 0) {
      pcVar3 = *(code **)*piStack_20;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar10 + 2;
      iVar11 = *piVar1 + -1;
      *piVar1 = iVar11;
      UNLOCK();
      if (iVar11 == 0) {
        pcVar3 = *(code **)(*piVar10 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
LAB_004ac20e:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004ac230(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char ***pppcVar9;
  int iVar10;
  int iVar11;
  char ***_Dest;
  int *piVar12;
  int *unaff_FS_OFFSET;
  char **ppcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  char **ppcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  size_t sStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb51c6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = CONCAT44(param_1,(undefined4)uStack_18);
  if (DAT_0145efc3 != '\0') {
    uStack_20._0_4_ = (undefined4)DAT_0145db28;
    uStack_20 = CONCAT44((undefined4)uStack_20,(undefined4)uStack_20);
    sStack_28 = 0;
    ppcStack_38 = (char **)0x0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    func_0x0046bc40("[%i] LocalPlayer::walk",0x16,uVar6);
    iStack_8 = 0;
    uVar7 = func_0x00485670((int)&uStack_20 + 4);
    iStack_8._0_1_ = 1;
    FUN_005ee340(1,uVar7);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&ppcStack_50,ppcStack_50,uStack_3c);
    }
    uStack_40 = 0;
    uStack_3c = 0xf;
    ppcStack_50 = (char **)((uint)ppcStack_50 & 0xffffff00);
    iStack_8 = 0xffffffff;
    if (0xf < uStack_24) {
      func_0x0046b1f0(&ppcStack_38,ppcStack_38,uStack_24);
    }
    sStack_28 = 0;
    uStack_24 = 0xf;
    ppcStack_38 = (char **)((uint)ppcStack_38 & 0xffffff00);
  }
  param_1[0xc4] = 0;
  pcVar1 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall();
  cVar5 = (*pcVar1)();
  uVar4 = uStack_18;
  uStack_18._0_4_ = (undefined4)DAT_0145db28;
  uVar7 = (undefined4)uStack_18;
  if (cVar5 == '\0') {
    if (DAT_0145efc3 != '\0') {
      uStack_18 = CONCAT44((undefined4)uStack_18,(undefined4)uStack_18);
      sStack_28 = 0;
      ppcStack_38 = (char **)0x0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      func_0x0046bc40("[%i] LocalPlayer::walk server walk",0x22,uVar6);
      iStack_8 = 4;
      uVar7 = func_0x00485670((int)&uStack_18 + 4);
      iStack_8._0_1_ = 5;
      FUN_005ee340(1,uVar7);
      iStack_8 = CONCAT31(iStack_8._1_3_,4);
      if (0xf < uStack_3c) {
        func_0x0046b1f0(&ppcStack_50,ppcStack_50,uStack_3c);
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      ppcStack_50 = (char **)((uint)ppcStack_50 & 0xffffff00);
      iStack_8 = 0xffffffff;
      if (0xf < uStack_24) {
        func_0x0046b1f0(&ppcStack_38,ppcStack_38,uStack_24);
      }
      sStack_28 = 0;
      uStack_24 = 0xf;
      ppcStack_38 = (char **)((uint)ppcStack_38 & 0xffffff00);
      uVar4 = uStack_18;
    }
    uStack_18 = uVar4;
    iVar10 = param_1[0xc5];
    *(undefined1 *)(param_1 + 0xce) = 1;
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + 0x50) = 1;
      piVar12 = *(int **)(iVar10 + 0x4c);
      uStack_20 = CONCAT44((int *)(iVar10 + 0x28),(undefined4)uStack_20);
      uStack_18 = CONCAT44(piVar12,(undefined4)uStack_18);
      if (piVar12 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar12 + 0x10);
        _guard_check_icall(piVar12 != (int *)(iVar10 + 0x28));
        (*pcVar1)();
        *(undefined4 *)(uStack_20._4_4_ + 0x24) = 0;
      }
    }
    param_1[0xc4] = 0;
  }
  else {
    piVar12 = *(int **)param_1[0xcc];
    uStack_18 = uVar4;
    if (piVar12 != (int *)param_1[0xcc]) {
      iVar10 = *param_3;
      piVar8 = piVar12;
      do {
        if (iVar10 == piVar8[2]) {
          if ((param_3[1] == piVar8[3]) && ((short)param_3[2] == (short)piVar8[4])) {
            iVar10 = *piVar8;
            uStack_20._4_4_ = iVar10;
            if (piVar12 != (int *)iVar10) {
              piVar8 = (int *)piVar12[1];
              iVar11 = 0;
              *piVar8 = iVar10;
              *(int **)(iVar10 + 4) = piVar8;
              do {
                piVar8 = (int *)*piVar12;
                func_0x008ab812(piVar12,0x14);
                iVar11 = iVar11 + 1;
                piVar12 = piVar8;
              } while (piVar8 != (int *)uStack_20._4_4_);
              uStack_18._4_4_[0xcd] = uStack_18._4_4_[0xcd] - iVar11;
              param_1 = uStack_18._4_4_;
              uStack_20._4_4_ = iVar11;
            }
            pcVar1 = *(code **)(*param_1 + 0x7c);
            _guard_check_icall();
            cVar5 = (*pcVar1)();
            if (cVar5 == '\0') {
              pcVar1 = *(code **)(*param_1 + 0x94);
              _guard_check_icall();
              (*pcVar1)();
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
            goto LAB_004ac711;
          }
          iVar10 = *param_3;
        }
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)param_1[0xcc]);
    }
    if (DAT_0145efc3 != '\0') {
      uStack_18 = DAT_0145db28;
      uStack_40 = 0;
      uStack_3c = 0;
      ppcStack_50 = (char **)0x0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      func_0x0046bc40("[%i] LocalPlayer::walk invalid prewalk",0x26,uVar6);
      iStack_8 = 3;
      pppcVar9 = &ppcStack_50;
      if (0xf < uStack_3c) {
        pppcVar9 = (char ***)ppcStack_50;
      }
      iVar10 = _snprintf((char *)0x0,0,(char *)pppcVar9,uVar7);
      iVar11 = iVar10 + 1;
      if (SCARRY4(iVar10,1)) {
        iVar11 = -1;
      }
      func_0x00469c80(iVar11,0);
      pppcVar9 = &ppcStack_50;
      if (0xf < uStack_3c) {
        pppcVar9 = (char ***)ppcStack_50;
      }
      _Dest = &ppcStack_38;
      if (0xf < uStack_24) {
        _Dest = (char ***)ppcStack_38;
      }
      iVar10 = _snprintf((char *)_Dest,sStack_28,(char *)pppcVar9,uVar7);
      func_0x004698c0(iVar10,0);
      FUN_005ee340(1,&ppcStack_38);
      iStack_8 = CONCAT31(iStack_8._1_3_,2);
      if (0xf < uStack_24) {
        func_0x0046b1f0(&ppcStack_38,ppcStack_38,uStack_24);
      }
      sStack_28 = 0;
      uStack_24 = 0xf;
      ppcStack_38 = (char **)((uint)ppcStack_38 & 0xffffff00);
      iStack_8 = 0xffffffff;
      if (0xf < uStack_3c) {
        func_0x0046b1f0(&ppcStack_50,ppcStack_50,uStack_3c);
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      ppcStack_50 = (char **)((uint)ppcStack_50 & 0xffffff00);
    }
    puVar2 = (undefined4 *)param_1[0xcc];
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x008ab812(puVar2,0x14);
      puVar2 = puVar3;
    }
    *(int *)param_1[0xcc] = param_1[0xcc];
    *(int *)(param_1[0xcc] + 4) = param_1[0xcc];
    param_1[0xcd] = 0;
    iVar10 = param_1[0xc5];
    *(undefined1 *)(param_1 + 0xce) = 1;
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + 0x50) = 1;
      piVar12 = *(int **)(iVar10 + 0x4c);
      uStack_20 = CONCAT44((int *)(iVar10 + 0x28),(undefined4)uStack_20);
      uStack_18 = CONCAT44(piVar12,(undefined4)uStack_18);
      if (piVar12 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar12 + 0x10);
        _guard_check_icall(piVar12 != (int *)(iVar10 + 0x28));
        (*pcVar1)();
        *(undefined4 *)(uStack_20._4_4_ + 0x24) = 0;
      }
    }
  }
  FUN_00474f40(param_2,param_3);
LAB_004ac711:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_004ac730(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_38;
  int iStack_30;
  int *piStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb520d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar7 = (int *)(param_1 + 0x330);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x334) != 0) {
    uStack_28 = *(undefined8 *)(*(int *)(*piVar7 + 4) + 8);
    uVar4 = (uint)uStack_20 >> 0x10;
    uStack_20 = CONCAT22((short)uVar4,*(undefined2 *)(*(int *)(*piVar7 + 4) + 0x10));
  }
  func_0x00471be0(&uStack_38,param_2,uVar6);
  iVar1 = *(int *)(param_1 + 0x314);
  if (iVar1 != 0) {
    piStack_18 = (int *)(iVar1 + 0x28);
    *(undefined1 *)(iVar1 + 0x50) = 1;
    piStack_2c = *(int **)(iVar1 + 0x4c);
    if (piStack_2c != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_2c + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piStack_2c >> 8),piStack_2c != piStack_18));
      (*pcVar2)();
      piStack_18[9] = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x339) = 0;
  iVar1 = *piVar7;
  if (*(int *)(param_1 + 0x334) != 0xccccccc) {
    uStack_8 = 0;
    piStack_18 = (int *)0x0;
    piStack_1c = piVar7;
    piVar7 = (int *)func_0x008ab47d(0x14);
    *(undefined8 *)(piVar7 + 2) = uStack_38;
    piVar7[4] = iStack_30;
    *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) + 1;
    puVar3 = *(undefined4 **)(iVar1 + 4);
    *piVar7 = iVar1;
    piVar7[1] = (int)puVar3;
    *(int **)(iVar1 + 4) = piVar7;
    piStack_18 = (int *)0x0;
    *puVar3 = piVar7;
    piVar5 = DAT_0145d3b4;
    uStack_8 = 0xffffffff;
    piVar7 = DAT_0145d3b0;
    if (1 < *(uint *)(param_1 + 0x334)) {
      for (; piVar7 != piVar5; piVar7 = piVar7 + 2) {
        *(undefined1 *)(*piVar7 + 0x80) = 1;
      }
    }
    FUN_00474f40(&uStack_28,&uStack_38);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00e701fa("list too long");
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_004ad3b0(int *param_1,int param_2,int param_3,short param_4,char param_5)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined8 *puStack_6c;
  undefined8 *puStack_68;
  undefined4 uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined8 uStack_2c;
  int *piStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb54e0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_5c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[0xbe] = 0xffff;
  param_1[0xbf] = 0xffff;
  *(undefined2 *)(param_1 + 0xc0) = 0xff;
  param_1[0xc1] = 0xffff;
  param_1[0xc2] = 0xffff;
  *(undefined2 *)(param_1 + 0xc3) = 0xff;
  iStack_30 = param_1[199];
  uStack_14 = uStack_5c;
  if (iStack_30 != 0) {
    *(undefined1 *)(iStack_30 + 0x50) = 1;
    piVar5 = *(int **)(iStack_30 + 0x4c);
    if (piVar5 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar5 + 0x10);
      iStack_60 = CONCAT31((int3)((uint)*piVar5 >> 8),piVar5 != (int *)(iStack_30 + 0x28));
      uStack_64 = 0x4ad446;
      _guard_check_icall();
      uStack_64 = 0x4ad44a;
      (*pcVar2)();
      *(undefined4 *)(iStack_30 + 0x4c) = 0;
    }
  }
  uStack_2c = (ulonglong)(uint)uStack_2c;
  piStack_24 = (int *)0x0;
  uStack_8 = 0;
  iStack_60 = (int)&uStack_2c + 4;
  uStack_64 = 0x4ad478;
  func_0x0046ffa0();
  piVar5 = piStack_24;
  uStack_8 = 0xffffffff;
  if (piStack_24 != (int *)0x0) {
    LOCK();
    iVar6 = piStack_24[1] + -1;
    piStack_24[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*piStack_24;
      uStack_64 = 0x4ad49c;
      _guard_check_icall();
      uStack_64 = 0x4ad4a0;
      (*pcVar2)();
      LOCK();
      piVar1 = piVar5 + 2;
      iVar6 = *piVar1 + -1;
      *piVar1 = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        uStack_64 = 0x4ad4b7;
        _guard_check_icall();
        uStack_64 = 0x4ad4bb;
        (*pcVar2)();
      }
    }
  }
  cVar3 = param_5;
  if (param_5 == '\0') {
    param_1[0xc4] = 0;
  }
  uStack_64 = 0;
  pcVar2 = *(code **)(*param_1 + 0x80);
  puStack_68 = &uStack_2c;
  puStack_6c = (undefined8 *)0x4ad4e2;
  _guard_check_icall();
  puStack_6c = (undefined8 *)0x4ad4e6;
  piVar5 = (int *)(*pcVar2)();
  if (((*piVar5 != param_2) || (piVar5[1] != param_3)) || ((short)piVar5[2] != param_4)) {
    puStack_6c = &uStack_1c;
    *(short *)(param_1 + 0xc0) = param_4;
    param_1[0xbe] = param_2;
    param_1[0xbf] = param_3;
    uStack_1c = 0;
    uStack_70 = 0x4ad529;
    func_0x004ab7f0();
    uStack_8 = 1;
    uStack_70 = 0;
    pcVar2 = *(code **)(*param_1 + 0x80);
    puStack_74 = auStack_4c;
    puStack_78 = (undefined1 *)0x4ad546;
    _guard_check_icall();
    puStack_78 = (undefined1 *)0x4ad54a;
    iStack_30 = (*pcVar2)();
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    puStack_34 = (undefined1 *)&ppuStack_9c;
    puStack_38 = (undefined1 *)&ppuStack_9c;
    puStack_3c = (undefined1 *)&ppuStack_9c;
    puStack_78 = (undefined1 *)&ppuStack_9c;
    puStack_40 = &uStack_98;
    ppuStack_9c = std::_Func_impl_no_alloc<>::vftable;
    uStack_98 = (undefined4)uStack_1c;
    iStack_94 = (int)uStack_1c._4_4_;
    uStack_2c = uStack_2c & 0xffffffff;
    piStack_24 = (int *)0x0;
    uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
    func_0x00576950(iStack_30,&param_2);
    if (cVar3 == '\0') {
      uStack_2c = DAT_0145db28;
      uVar4 = uStack_2c;
      uStack_2c._0_4_ = (uint)DAT_0145db28;
      iVar6 = param_1[0xca];
      if (param_1[0xca] < (int)((uint)uStack_2c + 200)) {
        iVar6 = (uint)uStack_2c + 200;
      }
      param_1[0xca] = iVar6;
      param_1[0xcb] = iVar6 >> 0x1f;
      uStack_2c = uVar4;
    }
    uStack_8 = 0xffffffff;
    piVar5 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        puStack_6c = (undefined8 *)0x4ad62d;
        _guard_check_icall();
        puStack_6c = (undefined8 *)0x4ad631;
        (*pcVar2)();
        LOCK();
        piVar1 = piVar5 + 2;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          pcVar2 = *(code **)(*piVar5 + 4);
          puStack_6c = (undefined8 *)0x4ad646;
          _guard_check_icall();
          puStack_6c = (undefined8 *)0x4ad64a;
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  uStack_5c = 0x4ad664;
  FUN_008ab370();
  return;
}



int __fastcall FUN_004adbf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 *puVar7;
  undefined4 uStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(param_1 + 0x2f8) = 0xffff;
  *(undefined2 *)(param_1 + 0x300) = 0xff;
  *(undefined2 *)(param_1 + 0x30c) = 0xff;
  piStack_14 = (int *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x2fc) = 0xffff;
  *(undefined4 *)(param_1 + 0x304) = 0xffff;
  *(undefined4 *)(param_1 + 0x308) = 0xffff;
  iVar6 = *piStack_14;
  if (iVar6 != 0) {
    *(undefined1 *)(iVar6 + 0x50) = 1;
    piVar3 = *(int **)(iVar6 + 0x4c);
    if (piVar3 != (int *)0x0) {
      pcVar4 = *(code **)(*piVar3 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piVar3 >> 8),piVar3 != (int *)(iVar6 + 0x28)),uVar5)
      ;
      (*pcVar4)();
      *(undefined4 *)(iVar6 + 0x4c) = 0;
    }
    uStack_1c = 0;
    piStack_18 = (int *)0x0;
    uStack_8 = 0;
    puVar7 = &uStack_1c;
    iVar6 = func_0x0046ffa0(puVar7);
    piVar3 = piStack_18;
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_18 + 1;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)*piStack_18;
        _guard_check_icall(puVar7,uVar5);
        iVar6 = (*pcVar4)();
        LOCK();
        piVar1 = piVar3 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar4 = *(code **)(*piVar3 + 4);
          _guard_check_icall(puVar7,uVar5);
          iVar6 = (*pcVar4)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __fastcall FUN_004add10(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint auStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined8 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5635;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (DAT_0145efc3 != '\0') {
    uStack_18._0_4_ = (undefined4)DAT_0145db28;
    uStack_18 = CONCAT44((undefined4)uStack_18,(undefined4)uStack_18);
    uStack_20 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_1c = 0;
    func_0x0046bc40("[%i] stopWalk",0xd,uVar4);
    iStack_8 = 0;
    uVar5 = func_0x00485670((int)&uStack_18 + 4);
    iStack_8._0_1_ = 1;
    FUN_005ee340(1,uVar5);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_1c) {
      func_0x0046b1f0(&uStack_30,uStack_30,uStack_1c);
    }
    uStack_20 = 0;
    uStack_1c = 0xf;
    uStack_30 = uStack_30 & 0xffffff00;
  }
  if ((char)param_1[0x90] != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x98);
    _guard_check_icall();
    (*pcVar1)();
  }
  puVar2 = (undefined4 *)param_1[0xcc];
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x14);
    puVar2 = puVar3;
  }
  *(int *)param_1[0xcc] = param_1[0xcc];
  *(int *)(param_1[0xcc] + 4) = param_1[0xcc];
  param_1[0xcd] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_004ade80(int *param_1,byte param_2,byte param_3)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)(param_1 + (uint)param_3 * 2 + 0x97);
  pcVar1 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall();
  cVar3 = (*pcVar1)();
  *puVar5 = 0;
  puVar5[1] = 0;
  iVar2 = param_1[0x15];
  if (cVar3 == '\0') {
    if (((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 7)) {
      puVar5[1] = DAT_0145d7e0 - (uint)param_2;
    }
    else if (((iVar2 == 2) || (iVar2 == 5)) || (iVar2 == 6)) {
      puVar5[1] = (uint)param_2 - DAT_0145d7e0;
    }
    iVar2 = param_1[0x15];
    if (((iVar2 != 1) && (iVar2 != 4)) && (iVar2 != 5)) {
      if (((iVar2 != 3) && (iVar2 != 7)) && (iVar2 != 6)) {
        return;
      }
      *puVar5 = DAT_0145d7e0 - (uint)param_2;
      return;
    }
    *puVar5 = (uint)param_2 - DAT_0145d7e0;
    return;
  }
  if (((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 7)) {
    uVar4 = -(uint)param_2;
  }
  else {
    if (((iVar2 != 2) && (iVar2 != 5)) && (iVar2 != 6)) goto LAB_004adee7;
    uVar4 = (uint)param_2;
  }
  puVar5[1] = uVar4;
LAB_004adee7:
  iVar2 = param_1[0x15];
  if (((iVar2 == 1) || (iVar2 == 4)) || (iVar2 == 5)) {
    *puVar5 = (uint)param_2;
    return;
  }
  if (((iVar2 != 3) && (iVar2 != 7)) && (iVar2 != 6)) {
    return;
  }
  *puVar5 = -(uint)param_2;
  return;
}



void __fastcall FUN_004adfb0(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uStack_c;
  int iStack_8;
  
  if (((char)param_1[0x90] != '\0') && (FUN_00476c60(), (char)param_1[0x90] != '\0')) {
    uStack_c = (uint)DAT_0145db28;
    iStack_8 = (int)((ulonglong)DAT_0145db28 >> 0x20);
    uVar1 = param_1[0x88];
    iVar5 = (iStack_8 - param_1[0x89]) - (uint)(uStack_c < (uint)param_1[0x88]);
    uVar4 = FUN_00478c20(0,8);
    if ((-1 < iVar5) && ((0 < iVar5 || ((uVar4 & 0xffff) <= uStack_c - uVar1)))) {
      *(undefined1 *)((int)param_1 + 0x339) = 1;
      pcVar2 = *(code **)(*param_1 + 0x7c);
      _guard_check_icall();
      cVar3 = (*pcVar2)();
      if (cVar3 == '\0') {
        pcVar2 = *(code **)(*param_1 + 0x98);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  return;
}



void __fastcall FUN_004ae050(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined **ppuStack_74;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined ***pppuStack_50;
  undefined1 auStack_4c [4];
  undefined ***pppuStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined ***pppuStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined ***pppuStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb56db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar7;
  if (DAT_0145efc3 != '\0') {
    uStack_1c = DAT_0145db28;
    uVar6 = uStack_1c;
    uStack_1c._4_4_ = (undefined ***)((ulonglong)DAT_0145db28 >> 0x20);
    uStack_1c._0_4_ = (undefined ***)DAT_0145db28;
    pppuStack_48 = uStack_1c._4_4_;
    pppuStack_20 = (undefined ***)uStack_1c;
    uStack_28 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    uStack_1c = uVar6;
    func_0x0046bc40("[%i] terminateWalk",0x12,uVar7);
    iStack_8 = 0;
    uVar8 = func_0x00485670(&pppuStack_20);
    iStack_8._0_1_ = 1;
    FUN_005ee340(1,uVar8);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_78) {
      func_0x0046b1f0(auStack_8c,auStack_8c[0],uStack_78);
    }
    uStack_7c = 0;
    uStack_78 = 0xf;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_24) {
      func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
    }
    uStack_28 = 0;
    uStack_24 = 0xf;
    uStack_38 = uStack_38 & 0xffffff00;
  }
  FUN_00476eb0();
  uVar6 = DAT_0145db28;
  uStack_1c._0_4_ = (undefined ***)DAT_0145db28;
  uStack_1c._4_4_ = (undefined ***)((ulonglong)DAT_0145db28 >> 0x20);
  *(undefined ****)(param_1 + 0x498) = (undefined ***)uStack_1c;
  *(undefined ****)(param_1 + 0x49c) = uStack_1c._4_4_;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x330);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  uStack_1c = uVar6;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x14);
    puVar1 = puVar2;
  }
  *(undefined4 *)*(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(int *)(*(int *)(param_1 + 0x330) + 4) = *(int *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  if (*(char *)(param_1 + 0x338) != '\0') {
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 != 0) {
      pppuStack_3c = (undefined ***)(iVar3 + 0x28);
      *(undefined1 *)(iVar3 + 0x50) = 1;
      pppuStack_20 = *(undefined ****)(iVar3 + 0x4c);
      if (pppuStack_20 != (undefined ***)0x0) {
        pcVar4 = (code *)(*pppuStack_20)[4];
        _guard_check_icall(CONCAT31((int3)((uint)*pppuStack_20 >> 8),pppuStack_20 != pppuStack_3c));
        (*pcVar4)();
        pppuStack_3c[9] = (undefined **)0x0;
      }
    }
    uStack_1c = 0;
    func_0x004ab7f0(&uStack_1c);
    if (uStack_1c._4_4_ != (undefined ***)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    pppuStack_3c = &ppuStack_74;
    pppuStack_20 = &ppuStack_70;
    ppuStack_74 = std::_Func_impl_no_alloc<>::vftable;
    ppuStack_70 = (undefined **)(undefined ***)uStack_1c;
    iStack_6c = (int)uStack_1c._4_4_;
    uStack_44 = 0;
    uStack_40 = 0;
    iStack_8._1_3_ = 0;
    pppuStack_50 = &ppuStack_74;
    iStack_8._0_1_ = 8;
    uStack_28 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    func_0x0046bc40("LocalPlayer::terminateWalk",0x1a);
    iStack_8._0_1_ = 9;
    uVar8 = FUN_005e4dd0(auStack_4c,&uStack_38,&ppuStack_74,100);
    iStack_8._0_1_ = 10;
    func_0x0046ffa0(uVar8);
    iStack_8._0_1_ = 9;
    pppuStack_20 = pppuStack_48;
    if (pppuStack_48 != (undefined ***)0x0) {
      LOCK();
      ppuVar5 = (undefined **)((int)pppuStack_48[1] + -1);
      pppuStack_48[1] = ppuVar5;
      UNLOCK();
      if (ppuVar5 == (undefined **)0x0) {
        pcVar4 = (code *)**pppuStack_48;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        ppuVar5 = (undefined **)((int)pppuStack_20[2] + -1);
        pppuStack_20[2] = ppuVar5;
        UNLOCK();
        if (ppuVar5 == (undefined **)0x0) {
          pcVar4 = (code *)(*pppuStack_20)[1];
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
    iStack_8._0_1_ = 8;
    if (0xf < uStack_24) {
      func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
    }
    uStack_28 = 0;
    uStack_24 = 0xf;
    uStack_38 = uStack_38 & 0xffffff00;
    iStack_8 = CONCAT31(iStack_8._1_3_,4);
    if (pppuStack_50 != (undefined ***)0x0) {
      pcVar4 = (code *)(*pppuStack_50)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_74 >> 8),pppuStack_50 != &ppuStack_74));
      (*pcVar4)();
      pppuStack_50 = (undefined ***)0x0;
    }
    iStack_8 = 0xffffffff;
    pppuStack_20 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (undefined ***)0x0) {
      LOCK();
      ppuVar5 = (undefined **)((int)uStack_1c._4_4_[1] + -1);
      uStack_1c._4_4_[1] = ppuVar5;
      UNLOCK();
      if (ppuVar5 == (undefined **)0x0) {
        pcVar4 = (code *)**uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        ppuVar5 = (undefined **)((int)pppuStack_20[2] + -1);
        pppuStack_20[2] = ppuVar5;
        UNLOCK();
        if (ppuVar5 == (undefined **)0x0) {
          pcVar4 = (code *)(*pppuStack_20)[1];
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  func_0x0046bc40("onWalkFinish",0xc,uVar7);
  iStack_8 = 0xd;
  uVar7 = func_0x00470bf0(&uStack_38);
  if (0 < (int)uVar7) {
    func_0x00d66d90(DAT_0145e9f0,~uVar7);
  }
  iStack_8 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  uStack_28 = 0;
  uStack_24 = 0xf;
  uStack_38 = uStack_38 & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall thunk_FUN_00475740(int *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_34 [7];
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae6bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1[0x95];
  if (iVar1 != 0) {
    piStack_18 = (int *)(iVar1 + 0x28);
    *(undefined1 *)(iVar1 + 0x50) = 1;
    piStack_14 = *(int **)(iVar1 + 0x4c);
    if (piStack_14 != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_14 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piStack_14 >> 8),piStack_14 != piStack_18),uVar3);
      (*pcVar2)();
      piStack_18[9] = 0;
    }
    auStack_34[6] = 0;
    piStack_18 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(auStack_34 + 6);
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = piStack_18[1] + -1;
      piStack_18[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar1 = piStack_18[2] + -1;
        piStack_18[2] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  if (*(char *)((int)param_1 + 0x126) != '\0') {
    pcVar2 = *(code **)(*param_1 + 0x74);
    _guard_check_icall();
    (*pcVar2)();
    *(undefined1 *)((int)param_1 + 0x126) = 0;
    auStack_34[4] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    auStack_34[5] = 0;
    func_0x0046bc40("onAppear",8);
    uStack_8 = 1;
    uVar3 = func_0x00470bf0(auStack_34);
    if (0 < (int)uVar3) {
      func_0x00d66d90(DAT_0145e9f0,~uVar3);
    }
    uStack_8 = 0xffffffff;
    if (0xf < auStack_34[5]) {
      func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
LAB_004759cf:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piStack_14 = (int *)param_1[0xa2];
  iVar1 = param_1[4];
  if ((((int *)iVar1 == piStack_14) && (param_1[5] == param_1[0xa3])) &&
     ((short)param_1[6] == (short)param_1[0xa4])) {
LAB_004759f7:
    if ((param_1[5] == param_1[0xa3]) && ((short)param_1[6] == (short)param_1[0xa4]))
    goto LAB_00475b1c;
  }
  else {
    uVar3 = (int)piStack_14 - iVar1 >> 0x1f;
    if ((((int)(((int)piStack_14 - iVar1 ^ uVar3) - uVar3) < 2) &&
        (uVar3 = param_1[0xa3] - param_1[5] >> 0x1f,
        (int)((param_1[0xa3] - param_1[5] ^ uVar3) - uVar3) < 2)) &&
       ((uVar3 = (int)(short)param_1[0xa4] - (int)(short)param_1[6], uVar4 = (int)uVar3 >> 0x1f,
        uVar3 = uVar3 ^ uVar4, uVar3 == uVar4 || (int)(uVar3 - uVar4) < 0 &&
        (*(char *)((int)param_1 + 0x241) != '\0')))) {
      *(undefined1 *)((int)param_1 + 0x241) = 0;
      pcVar2 = *(code **)(*param_1 + 0x70);
      _guard_check_icall(param_1 + 0xa2,param_1 + 4);
      (*pcVar2)();
      auStack_34[4] = 0;
      auStack_34[5] = 0;
      auStack_34[0] = 0;
      auStack_34[1] = 0;
      auStack_34[2] = 0;
      auStack_34[3] = 0;
      func_0x0046bc40("onWalk",6);
      uStack_8 = 2;
      func_0x0047a5a0(auStack_34,param_1 + 0xa2,param_1 + 4);
      uStack_8 = 0xffffffff;
      if (0xf < auStack_34[5]) {
        func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
      }
      goto LAB_004759cf;
    }
    if ((int *)iVar1 == piStack_14) goto LAB_004759f7;
  }
  pcVar2 = *(code **)(*param_1 + 0x74);
  _guard_check_icall();
  (*pcVar2)();
  auStack_34[4] = 0;
  auStack_34[5] = 0;
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 0;
  auStack_34[3] = 0;
  func_0x0046bc40("onDisappear",0xb);
  uStack_8 = 3;
  uVar3 = func_0x00470bf0(auStack_34);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = 0xffffffff;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[4] = 0;
  auStack_34[5] = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  func_0x0046bc40("onAppear",8);
  uStack_8 = 4;
  uVar3 = func_0x00470bf0(&uStack_4c);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_38) {
    func_0x0046b1f0(&uStack_4c,uStack_4c,uStack_38);
  }
LAB_00475b1c:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_004ae4a0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_38[4] = 0;
  auStack_38[5] = 0;
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  auStack_38[2] = 0;
  auStack_38[3] = 0;
  func_0x0046bc40("onPositionChange",0x10,uVar1);
  uStack_14 = 0;
  uVar1 = func_0x0047ac20(auStack_38,param_2,param_3);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_14 = 0xffffffff;
  if (0xf < auStack_38[5]) {
    func_0x0046b1f0();
  }
  auStack_38[4] = 0;
  auStack_38[5] = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  if (((*(int *)(param_1 + 0x2f8) == *param_2) && (*(int *)(param_1 + 0x2fc) == param_2[1])) &&
     (*(short *)(param_1 + 0x300) == (short)param_2[2])) {
    FUN_004adbf0();
  }
  else if (((((*(int *)(param_1 + 0x2f8) != 0xffff) || (*(int *)(param_1 + 0x2fc) != 0xffff)) ||
            (*(short *)(param_1 + 0x300) != 0xff)) &&
           ((*(int *)(param_1 + 0x304) == *param_2 && (*(int *)(param_1 + 0x308) == param_2[1]))))
          && (*(short *)(param_1 + 0x30c) == (short)param_2[2])) {
    FUN_004ad3b0(*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x300),0);
  }
  func_0x004ab4e0(param_2);
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004ae610(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb571d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_24 = *(int *)(param_1 + 0x4d8);
  if (iStack_24 != param_2) {
    *(int *)(param_1 + 0x4d8) = param_2;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    func_0x0046bc40("onStatesChange",0xe,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x004afff0(&uStack_3c,&param_2,&iStack_24);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_28) {
      func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004ae700(int param_1,byte param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_2c = (int *)(param_1 + 0x4a8);
  piStack_30 = (int *)(uint)param_2;
  iStack_24 = param_1;
  puVar3 = &stack0xfffffffc;
  if ((uint)(*(int *)(param_1 + 0x4ac) - *piStack_2c >> 2) <= piStack_30) {
    iStack_28 = 0;
    iVar1 = (int)piStack_30 + 1;
    func_0x004af880(iVar1,&iStack_28,uVar4);
    iStack_28 = 0;
    func_0x004af880(iVar1,&iStack_28);
    iStack_28 = 0;
    func_0x004af880(iVar1,&iStack_28);
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  iStack_28 = *(int *)(*piStack_2c + (int)piStack_30 * 4);
  piVar2 = (int *)(*piStack_2c + (int)piStack_30 * 4);
  piStack_2c = *(int **)(*(int *)(param_1 + 0x4c0) + (int)piStack_30 * 4);
  if ((param_3 != iStack_28) || (param_4 != piStack_2c)) {
    *piVar2 = param_3;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    *(int **)(*(int *)(param_1 + 0x4c0) + (int)piStack_30 * 4) = param_4;
    piStack_30 = piVar2;
    func_0x0046bc40("onSkillChange",0xd);
    uStack_14 = 0;
    uVar4 = func_0x004b0360(&uStack_48,&param_2,&param_3,&param_4,&iStack_28,&piStack_2c);
    if (0 < (int)uVar4) {
      func_0x00d66d90(DAT_0145e9f0,~uVar4);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_34) {
      func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



// WARNING: Type propagation algorithm not settling

void __thiscall FUN_004ae890(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint auStack_2c [3];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb26bd;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_2c[0] = (uint)param_2;
  auStack_2c[2] = param_1;
  puVar3 = &stack0xfffffffc;
  if ((uint)(*(int *)(param_1 + 0x4ac) - *(int *)(param_1 + 0x4a8) >> 2) <= auStack_2c[0]) {
    auStack_2c[1] = 0;
    iVar1 = auStack_2c[0] + 1;
    func_0x004af880(iVar1,auStack_2c + 1,uVar4);
    auStack_2c[1] = 0;
    func_0x004af880(iVar1,auStack_2c + 1);
    auStack_2c[1] = 0;
    func_0x004af880(iVar1,auStack_2c + 1);
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  puVar2 = (uint *)(*(int *)(param_1 + 0x4b4) + auStack_2c[0] * 4);
  auStack_2c[0] = *puVar2;
  if (param_3 != auStack_2c[0]) {
    *puVar2 = param_3;
    uStack_34 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    func_0x0046bc40("onBaseSkillChange",0x11);
    uStack_14 = 0;
    uVar4 = func_0x004b0730(&uStack_44,&param_2,&param_3,auStack_2c);
    if (0 < (int)uVar4) {
      func_0x00d66d90(DAT_0145e9f0,~uVar4);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_30) {
      func_0x0046b1f0(&uStack_44,uStack_44,uStack_30);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004ae9f0(int *param_1,double param_2,double param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  uint auStack_48 [6];
  double dStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_30 = *(double *)(param_1 + 0x13a);
  if ((dStack_30 != param_2) || (*(double *)(param_1 + 0x13c) != param_3)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x13c);
    *(double *)(param_1 + 0x13a) = param_2;
    *(double *)(param_1 + 0x13c) = param_3;
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    auStack_48[2] = 0;
    auStack_48[3] = 0;
    auStack_48[4] = 0;
    auStack_48[5] = 0;
    func_0x0046bc40("onHealthChange",0xe,uVar3);
    uStack_14 = 0;
    uVar3 = func_0x004b0ac0(auStack_48,&param_2,&param_3,&dStack_30,&uStack_28);
    if (0 < (int)uVar3) {
      func_0x00d66d90(DAT_0145e9f0,~uVar3);
    }
    uStack_14 = 0xffffffff;
    if (0xf < auStack_48[5]) {
      func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    if (param_2 == 0.0) {
      pcVar1 = *(code **)(*param_1 + 0x7c);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        pcVar1 = *(code **)(*param_1 + 0x74);
        _guard_check_icall();
        (*pcVar1)();
      }
      uStack_28._0_4_ = (int)DAT_0145db28;
      iVar4 = param_1[0xca];
      if (param_1[0xca] < (int)uStack_28 + 200) {
        iVar4 = (int)uStack_28 + 200;
      }
      param_1[0xca] = iVar4;
      param_1[0xcb] = iVar4 >> 0x1f;
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004aeb90(int param_1,double param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  double dStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaeb6d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_28 = *(double *)(param_1 + 0x4f8);
  if (dStack_28 != param_2) {
    *(double *)(param_1 + 0x4f8) = param_2;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onFreeCapacityChange",0x14,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x0047b9a0(&uStack_40,&param_2,&dStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004aec90(int param_1,double param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  double dStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaeb6d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_28 = *(double *)(param_1 + 0x500);
  if (dStack_28 != param_2) {
    *(double *)(param_1 + 0x500) = param_2;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onTotalCapacityChange",0x15,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x0047b9a0(&uStack_40,&param_2,&dStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004aed90(int param_1,double param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  double dStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaeb6d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_28 = *(double *)(param_1 + 0x508);
  if (dStack_28 != param_2) {
    *(double *)(param_1 + 0x508) = param_2;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onExperienceChange",0x12,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x0047b9a0(&uStack_40,&param_2,&dStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004aee90(int param_1,double param_2,double param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  double dStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_30 = *(double *)(param_1 + 0x510);
  if ((dStack_30 != param_2) || (*(double *)(param_1 + 0x518) != param_3)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x518);
    *(double *)(param_1 + 0x510) = param_2;
    *(double *)(param_1 + 0x518) = param_3;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0046bc40("onLevelChange",0xd,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x004b0ac0(&uStack_48,&param_2,&param_3,&dStack_30,&uStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_34) {
      func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004aefd0(int param_1,double param_2,double param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  double dStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_30 = *(double *)(param_1 + 0x520);
  if ((dStack_30 != param_2) || (*(double *)(param_1 + 0x528) != param_3)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x528);
    *(double *)(param_1 + 0x520) = param_2;
    *(double *)(param_1 + 0x528) = param_3;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0046bc40("onManaChange",0xc,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x004b0ac0(&uStack_48,&param_2,&param_3,&dStack_30,&uStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_34) {
      func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004af110(int param_1,double param_2,double param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  double dStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_30 = *(double *)(param_1 + 0x530);
  if ((dStack_30 != param_2) || (*(double *)(param_1 + 0x538) != param_3)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x538);
    *(double *)(param_1 + 0x530) = param_2;
    *(double *)(param_1 + 0x538) = param_3;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0046bc40("onMagicLevelChange",0x12,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x004b0ac0(&uStack_48,&param_2,&param_3,&dStack_30,&uStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_34) {
      func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004af350(int param_1,double param_2,double param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  double dStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_30 = *(double *)(param_1 + 0x548);
  if ((dStack_30 != param_2) || (*(double *)(param_1 + 0x550) != param_3)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x550);
    *(double *)(param_1 + 0x548) = param_2;
    *(double *)(param_1 + 0x550) = param_3;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0046bc40("onSoulChange",0xc,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x004b0ac0(&uStack_48,&param_2,&dStack_30,&param_3,&uStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_34) {
      func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004af490(int param_1,double param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  double dStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaeb6d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_28 = *(double *)(param_1 + 0x558);
  if (dStack_28 != param_2) {
    *(double *)(param_1 + 0x558) = param_2;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onStaminaChange",0xf,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x0047b9a0(&uStack_40,&param_2,&dStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004af590(int param_1,undefined1 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_74;
  uint *puStack_70;
  undefined1 **ppuStack_6c;
  int *piStack_68;
  undefined8 *puStack_64;
  uint *puStack_60;
  char *pcStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined1 *puStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb5795;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_48 = param_2;
  uStack_24 = uStack_54;
  if ((int)param_2 < 0x10) {
    iVar3 = (int)param_2 * 8 + 0x414;
    puVar7 = (undefined8 *)(iVar3 + param_1);
    puVar5 = &stack0xfffffffc;
    if (*(int *)(iVar3 + param_1) != *param_3) {
      iVar3 = *(int *)((int)puVar7 + 4);
      if (iVar3 != 0) {
        LOCK();
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      uStack_2c = *puVar7;
      uStack_14 = 2;
      piStack_58 = param_3;
      pcStack_5c = (char *)0x4af6cb;
      func_0x004683d0();
      pcStack_5c = (char *)0x11;
      uStack_34 = 0;
      puStack_60 = (uint *)0x113d1cc;
      piStack_30 = (int *)0x0;
      pcStack_44 = (char *)0x0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      puStack_64 = (undefined8 *)0x4af6ef;
      func_0x0046bc40();
      uStack_14 = CONCAT31(uStack_14._1_3_,3);
      puStack_64 = &uStack_2c;
      piStack_68 = param_3;
      ppuStack_6c = &puStack_48;
      puStack_70 = (uint *)&pcStack_44;
      uStack_74 = 0x4af707;
      uVar6 = func_0x004b0e30();
      if (0 < (int)uVar6) {
        piStack_58 = (int *)~uVar6;
        pcStack_5c = DAT_0145e9f0;
        puStack_60 = (uint *)0x4af719;
        func_0x00d66d90();
      }
      uStack_14 = CONCAT31(uStack_14._1_3_,2);
      if (&DAT_0000000f < piStack_30) {
        piStack_58 = piStack_30;
        pcStack_5c = pcStack_44;
        puStack_60 = (uint *)&pcStack_44;
        puStack_64 = (undefined8 *)0x4af735;
        func_0x0046b1f0();
      }
      uStack_34 = 0;
      piStack_30 = (int *)0xf;
      pcStack_44 = (char *)((uint)pcStack_44 & 0xffffff00);
      uStack_14 = 0xffffffff;
      piVar1 = uStack_2c._4_4_;
      puVar5 = puStack_20;
      if (uStack_2c._4_4_ != (int *)0x0) {
        LOCK();
        iVar3 = uStack_2c._4_4_[1] + -1;
        uStack_2c._4_4_[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar4 = *(code **)*uStack_2c._4_4_;
          piStack_58 = (int *)0x4af76e;
          _guard_check_icall();
          piStack_58 = (int *)0x4af772;
          (*pcVar4)();
          LOCK();
          piVar2 = piVar1 + 2;
          iVar3 = *piVar2 + -1;
          *piVar2 = iVar3;
          UNLOCK();
          puVar5 = puStack_20;
          if (iVar3 == 0) {
            pcVar4 = *(code **)(*piVar1 + 4);
            piStack_58 = (int *)0x4af789;
            _guard_check_icall();
            piStack_58 = (int *)0x4af78d;
            (*pcVar4)();
            puVar5 = puStack_20;
          }
        }
      }
    }
  }
  else {
    piStack_58 = (int *)0xc;
    uStack_34 = 0;
    pcStack_5c = "invalid slot";
    piStack_30 = (int *)0x0;
    pcStack_44 = (char *)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    puStack_60 = (uint *)0x4af606;
    puStack_20 = &stack0xfffffffc;
    func_0x0046bc40();
    uStack_14 = 0;
    puStack_48 = (undefined1 *)&uStack_74;
    uStack_74 = 0;
    puStack_70 = (uint *)0x0;
    ppuStack_6c = (undefined1 **)0x0;
    piStack_68 = (int *)0x0;
    puStack_64 = (undefined8 *)0x0;
    puStack_60 = (uint *)0x0;
    func_0x0046bc40("?setInventoryItem@LocalPlayer@@QAEXW4InventorySlot@Otc@@ABV?$shared_ptr@VItem@@@std@@@Z"
                    ,0x57);
    uStack_14 = uStack_14 & 0xffffff00;
    func_0x005eea60(3,&pcStack_44);
    uStack_14 = 0xffffffff;
    if (&DAT_0000000f < piStack_30) {
      piStack_58 = piStack_30;
      pcStack_5c = pcStack_44;
      puStack_60 = (uint *)&pcStack_44;
      puStack_64 = (undefined8 *)0x4af664;
      func_0x0046b1f0();
    }
    uStack_34 = 0;
    piStack_30 = (int *)0xf;
    pcStack_44 = (char *)((uint)pcStack_44 & 0xffffff00);
    puVar5 = puStack_20;
  }
  puStack_20 = puVar5;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



uint __thiscall FUN_004af7b0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0x10) - *param_2;
  uVar2 = (int)uVar1 >> 0x1f;
  uVar2 = (uVar1 ^ uVar2) - uVar2;
  if ((((int)uVar2 <= DAT_0145d42c + -1) &&
      (uVar1 = *(int *)(param_1 + 0x14) - param_2[1], uVar2 = (int)uVar1 >> 0x1f,
      uVar2 = (uVar1 ^ uVar2) - uVar2, (int)uVar2 <= DAT_0145d420 + -1)) &&
     (uVar1 = (int)*(short *)(param_1 + 0x18) - (int)(short)param_2[2], uVar2 = (int)uVar1 >> 0x1f,
     uVar2 = (uVar1 ^ uVar2) - uVar2, (int)uVar2 < 1)) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}



TypeDescriptor * FUN_004b1bf0(void)

{
  return &`protected:_virtual_void___thiscall_LocalPlayer::terminateWalk(void)'::__l8::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_004b1c00(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x338) = 0;
  return;
}



void __thiscall FUN_004b1c10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_004b1c90(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_004b1d10(void)

{
  return &`public:_bool___thiscall_LocalPlayer::autoWalk(class_Position,bool)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_004b1d20(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb184d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_8 = 0xffffffff;
  func_0x004ad670();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_004b1da0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_004b1e20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __thiscall FUN_004b1ea0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb59e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ad320(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __fastcall FUN_004b1f20(int param_1)

{
  return param_1 + 8;
}



TypeDescriptor * FUN_004b1f30(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_004b1f40(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _guard_check_icall(*(undefined8 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c),
                     *(undefined1 *)(param_1 + 0x10));
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_004b1f80(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5a20;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x004b2240(param_1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_004b2000(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_004b2010(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5a20;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x004b2240(param_1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



void __fastcall FUN_004b22e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac5b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = LuaException::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 9;
  if (0xf < (uint)param_1[0xe]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0xe],uVar2);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  FUN_004668a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_004b2360(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac5b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = LuaException::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 9;
  if (0xf < (uint)param_1[0xe]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0xe],uVar2);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  FUN_004668a0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined2 __fastcall FUN_004b2430(int param_1)

{
  return *(undefined2 *)(param_1 + 0x12);
}



undefined1 __fastcall FUN_004b2440(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



int __thiscall FUN_004b2450(int param_1,byte param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if (((uint)param_2 < (uint)(iVar1 >> 2)) &&
     (*(int *)(*(int *)(param_1 + 0x18) + (uint)param_2 * 4) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



void __thiscall FUN_004b2480(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  param_2[1] = uVar1;
  return;
}



undefined4 __fastcall FUN_004b24a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



undefined4 __fastcall FUN_004b24b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



undefined4 __fastcall FUN_004b24c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



undefined4 __fastcall FUN_004b24d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



undefined2 __fastcall FUN_004b24e0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) - (int)*(int **)(param_1 + 0x18) >> 2 != 0) &&
     (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 4);
  }
  return 0;
}



undefined2 __fastcall FUN_004b2500(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(int *)(param_1 + 0x1c) - iVar1 >> 2;
  if (uVar2 < 10) {
    if (uVar2 < 9) {
      return 0;
    }
  }
  else if (*(int *)(iVar1 + 0x24) != 0) {
    return *(undefined2 *)(*(int *)(iVar1 + 0x24) + 4);
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    return 0;
  }
  return *(undefined2 *)(*(int *)(iVar1 + 0x20) + 4);
}



undefined2 __fastcall FUN_004b2540(int param_1)

{
  int iVar1;
  
  if ((0x1c < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x70), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 4);
  }
  return 0;
}



undefined2 __fastcall FUN_004b2570(int param_1)

{
  int iVar1;
  
  if ((0x1d < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x74), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 4);
  }
  return 0;
}



undefined2 __fastcall FUN_004b25a0(int param_1)

{
  int iVar1;
  
  if ((0x20 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x80), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 4);
  }
  return 0;
}



undefined4 FUN_004b25d0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5b0e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_11 = 0x21;
  func_0x004c8070(param_1,&uStack_11,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __fastcall FUN_004b2640(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((1 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 4) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2660(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((2 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 8) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2680(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((3 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0xc) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b26a0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((4 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x10) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b26c0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((6 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x18) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b26e0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((7 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x1c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2700(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((8 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x20) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2720(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0xfe < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x3f8) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2750(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((9 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x24) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2770(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0xc < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x30) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2790(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0xe < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x38) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b27b0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0xf < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x3c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b27d0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x10 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x40) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b27f0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x12 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x48) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2810(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x13 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x4c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2830(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x14 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x50) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2850(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x15 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x54) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2870(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x16 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x58) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2890(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x17 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x5c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b28b0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x18 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x60) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b28d0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x19 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 100) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b28f0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x1a < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x68) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2910(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x1b < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x6c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2930(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x1c < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x70) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2950(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x1d < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x74) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2970(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x1e < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x78) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2990(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x1f < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x7c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b29b0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x20 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x80) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b29d0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x21 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x84) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b29f0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x22 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x88) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2a10(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x23 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x8c) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2a30(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x24 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x90) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



int __fastcall FUN_004b2a50(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar2 = (uint3)(iVar1 >> 10);
  if ((0x25 < (uint)(iVar1 >> 2)) && (*(int *)(*(int *)(param_1 + 0x18) + 0x94) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined4 __thiscall FUN_004b2a70(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5b4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004afb40(param_1 + 0x8c,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int * __thiscall FUN_004b2ad0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5b9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = func_0x008ab47d(0x14,uVar6);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  *param_2 = iVar7;
  uStack_8 = 1;
  uVar8 = func_0x0052aca0(*(undefined4 *)(*(int *)(param_1 + 0x48) + 4),*param_2);
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)*param_2;
  param_2[1] = *(int *)(param_1 + 0x4c);
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar5 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar3 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    *piVar2 = (int)piVar3;
    iVar7 = *(int *)(*param_2 + 4);
    iVar4 = *(int *)(iVar7 + 8);
    cVar1 = *(char *)(iVar4 + 0xd);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar7 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *(int *)(*param_2 + 8) = iVar7;
  }
  else {
    *piVar2 = (int)piVar2;
    *(int *)(*param_2 + 8) = *param_2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined2 __fastcall FUN_004b2bd0(int param_1)

{
  return *(undefined2 *)(param_1 + 0x70);
}



undefined1 __fastcall FUN_004b2be0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



undefined1 __fastcall FUN_004b2bf0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x62);
}



void __thiscall FUN_004b2c50(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x1e) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x1e) = 1;
  puVar1 = (undefined4 *)func_0x0086d6e0(param_2);
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  return;
}



undefined2 __fastcall FUN_004b2ca0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((0x20 < (uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2)) &&
     (iVar2 = *(int *)(*(int *)(iVar2 + 0x18) + 0x80), iVar2 != 0)) {
    return *(undefined2 *)(iVar2 + 4);
  }
  return 0;
}



int __fastcall FUN_004b2ce0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((1 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 4) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2d20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((2 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 8) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2d60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((3 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0xc) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2da0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((4 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x10) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2de0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((6 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x18) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2e20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((7 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x1c) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2e60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0xd < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x34) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2ea0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x10 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x40) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2ee0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x12 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x48) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2f20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x14 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x50) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2f60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x17 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x5c) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2fa0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x1a < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x68) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b2fe0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x1e < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x78) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b3020(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x1f < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x7c) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b3060(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x21 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x84) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b30a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x22 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x88) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b30e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x23 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x8c) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b3120(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x24 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x90) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



int __fastcall FUN_004b3160(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18);
  uVar4 = (uint3)(iVar3 >> 10);
  if ((0x25 < (uint)(iVar3 >> 2)) && (*(int *)(*(int *)(iVar2 + 0x18) + 0x94) != 0)) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}



undefined4 __thiscall FUN_004b31a0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5c27;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall(uVar2);
  (*pcVar1)();
  uStack_8 = 1;
  uStack_11 = 0x21;
  func_0x004c8070(param_2,&uStack_11);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __fastcall FUN_004b3240(int param_1)

{
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return;
}



void __fastcall FUN_004b3250(int param_1)

{
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



void __thiscall FUN_004b3260(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1f) = param_2;
  return;
}



undefined1 __fastcall FUN_004b3270(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



void __thiscall FUN_004b3280(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1 + 0x58) != param_2) {
    puVar1 = param_2 + 4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    func_0x0046a660(param_2,*puVar1);
  }
  return;
}



void __thiscall FUN_004b32b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return;
}



void __thiscall FUN_004b32c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1 + 0x70) != param_2) {
    puVar1 = param_2 + 4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    func_0x0046a660(param_2,*puVar1);
  }
  return;
}



undefined4 __thiscall FUN_004b32f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0x58,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __fastcall FUN_004b3350(int param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



undefined4 __thiscall FUN_004b3360(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0x70,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined2 __fastcall FUN_004b33c0(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(param_1 + 0x3a) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x36) + (uint)bVar1 * 6) == '\x05') {
        return *(undefined2 *)(*(int *)(param_1 + 0x36) + (uint)bVar1 * 6 + 1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(param_1 + 0x3a));
  }
  return 0;
}



undefined2 __fastcall FUN_004b33f0(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(param_1 + 0x3a) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x36) + (uint)bVar1 * 6) == '\x04') {
        return *(undefined2 *)(*(int *)(param_1 + 0x36) + (uint)bVar1 * 6 + 1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(param_1 + 0x3a));
  }
  return 0;
}



void FUN_004b3420(void)

{
  func_0x004a92c0(4,&stack0x00000004);
  return;
}



void FUN_004b3440(void)

{
  func_0x004a92c0(5,&stack0x00000004);
  return;
}



void FUN_004b3460(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb39ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x004a55c0(7,&param_1,uVar1);
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004b34e0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb39ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x004a55c0(6,&param_1,uVar1);
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_004b3560(undefined4 param_1)

{
  func_0x004a57e0(param_1,8);
  return param_1;
}



void FUN_004b3580(undefined4 param_1)

{
  func_0x004a5850(8,param_1);
  return;
}



void __thiscall FUN_004b35a0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int *piVar9;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5c7e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar8 = *(int *)(param_1 + 0x3f) - *(int *)(param_1 + 0x3b) >> 3;
  piVar9 = param_2;
  if (uVar8 != 0) {
    if (0x1fffffff < uVar8) {
      func_0x0046e700(uVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = func_0x004706c0(uVar8);
    *param_2 = iVar5;
    param_2[1] = iVar5;
    param_2[2] = iVar5 + uVar8 * 8;
    puVar7 = (undefined4 *)*param_2;
    puVar2 = *(undefined4 **)(param_1 + 0x3f);
    for (puVar6 = *(undefined4 **)(param_1 + 0x3b); puVar6 != puVar2; puVar6 = puVar6 + 2) {
      *puVar7 = 0;
      puVar7[1] = 0;
      if (puVar6[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar6[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar7 = puVar7 + 2;
    }
    param_2[1] = (int)puVar7;
  }
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar9,1);
  return;
}



void __thiscall FUN_004b36d0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x3b) + param_3 * 8);
  *param_2 = 0;
  param_2[1] = 0;
  if (puVar2[1] != 0) {
    LOCK();
    piVar1 = (int *)(puVar2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  *unaff_FS_OFFSET = iVar3;
  return;
}



void FUN_004b3750(undefined4 param_1)

{
  func_0x004683d0(param_1);
  return;
}



void __thiscall FUN_004b3770(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3f);
  if (puVar2 != *(undefined4 **)(param_1 + 0x43)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    *(int *)(param_1 + 0x3f) = *(int *)(param_1 + 0x3f) + 8;
    return;
  }
  func_0x004ea380(puVar2,param_2);
  return;
}



int FUN_004b37c0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  piStack_18 = (int *)0x0;
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(&uStack_1c,uVar5);
  piVar4 = piStack_18;
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __fastcall FUN_004b3870(int param_1)

{
  if (*(int *)(param_1 + 0x3b) != *(int *)(param_1 + 0x3f)) {
    func_0x00485920(*(int *)(param_1 + 0x3b));
    *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_1 + 0x3b);
  }
  return;
}



void FUN_004b3890(undefined4 param_1)

{
  func_0x004c8260(param_1,&stack0x00000008);
  return;
}



undefined8 __thiscall FUN_004b38b0(int param_1,short param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0xba) != 0) {
    do {
      if (*(short *)(uVar2 * 7 + *(int *)(param_1 + 0xb6)) == param_2) {
        return *(undefined8 *)(*(int *)(uVar2 * 7 + 2 + *(int *)(param_1 + 0xb6)) + 4);
      }
      bVar1 = (char)uVar2 + 1;
      uVar2 = (uint)bVar1;
    } while (bVar1 < *(byte *)(param_1 + 0xba));
  }
  return 0;
}



void __thiscall FUN_004b3920(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  *param_2 = *(undefined4 *)(param_1 + 0x9c);
  param_2[1] = uVar1;
  return;
}



undefined4 __thiscall FUN_004b3940(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac107;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x00469da0(param_1 + 0x50,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 FUN_004b39c0(void)

{
  undefined4 extraout_ECX;
  
  func_0x0086d800();
  return extraout_ECX;
}



void __thiscall FUN_004b39e0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int *piVar9;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5cde;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar8 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3;
  piVar9 = param_2;
  if (uVar8 != 0) {
    if (0x1fffffff < uVar8) {
      func_0x0046e700(uVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = func_0x0048cb90();
    *param_2 = iVar5;
    param_2[1] = iVar5;
    param_2[2] = iVar5 + uVar8 * 8;
    puVar7 = (undefined4 *)*param_2;
    puVar2 = *(undefined4 **)(param_1 + 0x2c);
    for (puVar6 = *(undefined4 **)(param_1 + 0x28); puVar6 != puVar2; puVar6 = puVar6 + 2) {
      *puVar7 = 0;
      puVar7[1] = 0;
      if (puVar6[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar6[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar7 = puVar7 + 2;
    }
    param_2[1] = (int)puVar7;
  }
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar9,1);
  return;
}



void __thiscall FUN_004b3b20(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int *piVar9;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5cde;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar8 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3;
  piVar9 = param_2;
  if (uVar8 != 0) {
    if (0x1fffffff < uVar8) {
      func_0x0046e700(uVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = func_0x0048cb90();
    *param_2 = iVar5;
    param_2[1] = iVar5;
    param_2[2] = iVar5 + uVar8 * 8;
    puVar7 = (undefined4 *)*param_2;
    puVar2 = *(undefined4 **)(param_1 + 0x20);
    for (puVar6 = *(undefined4 **)(param_1 + 0x1c); puVar6 != puVar2; puVar6 = puVar6 + 2) {
      *puVar7 = 0;
      puVar7[1] = 0;
      if (puVar6[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar6[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar7 = puVar7 + 2;
    }
    param_2[1] = (int)puVar7;
  }
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar9,1);
  return;
}



int __fastcall FUN_004b3c60(int param_1)

{
  return (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3) +
         (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3);
}



void __thiscall FUN_004b3c80(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x41) = param_2;
  return;
}



void __thiscall FUN_004b3c90(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & ~param_2;
  return;
}



void __thiscall FUN_004b3ca0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



bool __thiscall FUN_004b3cb0(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x44) & param_2) == param_2;
}



undefined4 __fastcall FUN_004b3cd0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



undefined1 __fastcall FUN_004b3ce0(int param_1)

{
  if ((*(int *)(param_1 + 0x48) != 0) && ((*(byte *)(param_1 + 0x44) & 0x40) != 0)) {
    return 1;
  }
  return 0;
}



void __fastcall FUN_004b3d00(int param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}



void __fastcall FUN_004b3d10(int param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}



undefined1 __fastcall FUN_004b3d20(int param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



int FUN_004b3d30(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb391d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = func_0x004683d0(&param_1,uVar5);
  piVar4 = param_2;
  uStack_8 = 0xffffffff;
  if (param_2 != (int *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*param_2;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



int * __fastcall FUN_004b3dd0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eadefd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00856da0(uVar5);
    uStack_18 = 0;
    piStack_14 = (int *)0x0;
    uStack_8 = 0;
    piVar6 = (int *)func_0x0046ffa0(&uStack_18);
    piVar4 = piStack_14;
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_14 + 1;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        _guard_check_icall();
        piVar6 = (int *)(*pcVar3)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          piVar6 = (int *)(*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void __thiscall FUN_004b3e80(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4d) = param_2;
  return;
}



void __thiscall FUN_004b3e90(int param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0x125) = 1;
  *(undefined4 *)(param_1 + 0x104) = *param_2;
  *(undefined4 *)(param_1 + 0x108) = param_2[1];
  *(undefined4 *)(param_1 + 0x10c) = param_2[2];
  *(undefined4 *)(param_1 + 0x110) = param_2[3];
  return;
}



void __fastcall FUN_004b3ed0(int param_1)

{
  *(undefined1 *)(param_1 + 0x125) = 0;
  return;
}



void __thiscall FUN_004b3ee0(int param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0x184) = 1;
  *(undefined4 *)(param_1 + 0x174) = *param_2;
  *(undefined4 *)(param_1 + 0x178) = param_2[1];
  *(undefined4 *)(param_1 + 0x17c) = param_2[2];
  *(undefined4 *)(param_1 + 0x180) = param_2[3];
  return;
}



void __fastcall FUN_004b3f20(int param_1)

{
  *(undefined1 *)(param_1 + 0x184) = 0;
  FUN_004772e0(*(undefined1 *)(param_1 + 0x4c));
  return;
}



void __thiscall FUN_004b3f40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18c);
  *param_2 = *(undefined4 *)(param_1 + 0x188);
  param_2[1] = uVar1;
  return;
}



void __thiscall FUN_004b3f60(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x188) = param_2;
  *(undefined4 *)(param_1 + 0x18c) = param_3;
  return;
}



void FUN_004b3f80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  func_0x0046bc40(&DAT_0112e1b4,0,uVar1);
  uStack_14 = 0;
  FUN_00479380(&uStack_38,&DAT_012bc26c);
  uStack_14 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __fastcall FUN_004b4040(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 ***pppuVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 **ppuStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb5d2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  iStack_24 = param_1;
  func_0x0046bc40(&DAT_0112e1b4,0,uVar5);
  iStack_14 = 0;
  uStack_34 = 0;
  ppuStack_44 = (undefined4 ***)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40(&DAT_0112e1b4,0);
  iStack_14._0_1_ = 1;
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1d4)) {
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d0);
  }
  if ((undefined4 ***)(param_1 + 0x1b8) != &ppuStack_44) {
    pppuVar6 = &ppuStack_44;
    if (0xf < uStack_30) {
      pppuVar6 = (undefined4 ***)ppuStack_44;
    }
    func_0x0046a660(pppuVar6,uStack_34);
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    uStack_2c = 0xffffffff;
    piStack_28 = (int *)0xffffffff;
    func_0x00617c40((undefined4 ***)(param_1 + 0x1b8),5,&uStack_2c);
    *(undefined4 *)(param_1 + 0x1dc) = uStack_2c;
    *(int **)(param_1 + 0x1e0) = piStack_28;
  }
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  if (iStack_4c != 0) {
    uVar7 = func_0x0061cc30(&uStack_2c,&uStack_5c);
    iStack_14._0_1_ = 2;
    func_0x00467260(uVar7);
    piVar4 = piStack_28;
    iStack_14._0_1_ = 1;
    if (piStack_28 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_28[1] + -1;
      piStack_28[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_28;
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
  }
  *(undefined4 *)(iStack_24 + 0x204) = DAT_012bc26c;
  *(undefined4 *)(iStack_24 + 0x208) = DAT_012bc270;
  *(undefined4 *)(iStack_24 + 0x20c) = DAT_012bc274;
  *(undefined4 *)(iStack_24 + 0x210) = DAT_012bc278;
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if (0xf < uStack_30) {
    func_0x0046b1f0(&ppuStack_44,ppuStack_44,uStack_30);
  }
  uStack_34 = 0;
  uStack_30 = 0xf;
  ppuStack_44 = (undefined4 **)((uint)ppuStack_44 & 0xffffff00);
  iStack_14 = 0xffffffff;
  if (0xf < uStack_48) {
    func_0x0046b1f0(&uStack_5c,uStack_5c,uStack_48);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



undefined4 __thiscall FUN_004b4250(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac107;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x00469da0(param_1 + 0x1b8,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_004b42d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0x34,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined1 __fastcall FUN_004b4330(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4c);
}



undefined1 __fastcall FUN_004b4340(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4d);
}



undefined4 __fastcall FUN_004b4350(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



undefined4 __thiscall FUN_004b4360(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5d6e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004728b0(param_1 + 0x58,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined2 __fastcall FUN_004b43c0(int param_1)

{
  return *(undefined2 *)(param_1 + 0xb4);
}



float10 __fastcall FUN_004b43d0(int param_1)

{
  return (float10)*(double *)(param_1 + 0xb8);
}



undefined1 __fastcall FUN_004b43e0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



undefined1 __fastcall FUN_004b43f0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc1);
}



undefined1 __fastcall FUN_004b4400(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc2);
}



undefined1 __fastcall FUN_004b4410(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc3);
}



undefined1 __fastcall FUN_004b4420(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}



float10 __fastcall FUN_004b4430(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  
  bVar4 = (uint)(float)DAT_0145db28 < (uint)*(float *)(param_1 + 0x220);
  iVar3 = (int)(float)DAT_0145db28 - (int)*(float *)(param_1 + 0x220);
  iVar1 = DAT_0145db28._4_4_ - *(int *)(param_1 + 0x224);
  fVar5 = (float)DAT_0145db28;
  uVar2 = FUN_00478c20(0,8);
  func_0x00e87ec0(iVar3,iVar1 - (uint)bVar4,uVar2,0);
  func_0x008abfd0();
  return (float10)fVar5;
}



int __fastcall FUN_004b4490(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_c;
  
  uStack_c = (int)DAT_0145db28;
  iVar1 = *(int *)(param_1 + 0x220);
  uVar2 = FUN_00478c20(0,8);
  return (uVar2 & 0xffff) - (uStack_c - iVar1);
}



undefined8 __fastcall FUN_004b44d0(int param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (uint)DAT_0145db28;
  uStack_8 = (int)((ulonglong)DAT_0145db28 >> 0x20);
  return CONCAT44((uStack_8 - *(int *)(param_1 + 0x224)) -
                  (uint)(uStack_c < *(uint *)(param_1 + 0x220)),
                  uStack_c - *(uint *)(param_1 + 0x220));
}



undefined1 __fastcall FUN_004b4500(int param_1)

{
  return *(undefined1 *)(param_1 + 0x124);
}



void __thiscall FUN_004b4510(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xf8);
  uVar2 = *(undefined4 *)(param_1 + 0xfc);
  uVar3 = *(undefined4 *)(param_1 + 0x100);
  *param_2 = *(undefined4 *)(param_1 + 0xf4);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}



undefined1 __fastcall FUN_004b4530(int param_1)

{
  return *(undefined1 *)(param_1 + 0x125);
}



void __thiscall FUN_004b4540(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  uVar2 = *(undefined4 *)(param_1 + 0x10c);
  uVar3 = *(undefined4 *)(param_1 + 0x110);
  *param_2 = *(undefined4 *)(param_1 + 0x104);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}



undefined4 __thiscall FUN_004b4560(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5dae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004c7e60(param_1 + 0x44,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __fastcall FUN_004b45c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



undefined4 __thiscall FUN_004b45d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0x20,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined1 __fastcall FUN_004b4630(int param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



undefined1 __fastcall FUN_004b4640(int param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



undefined1 __fastcall FUN_004b4650(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



undefined1 __fastcall FUN_004b4660(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}



undefined4 __fastcall FUN_004b4670(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



undefined4 __fastcall FUN_004b4680(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



void __fastcall FUN_004b4690(int param_1)

{
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  return;
}



uint __fastcall FUN_004b46b0(int param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = *(uint *)(param_1 + 0x328) | *(uint *)(param_1 + 0x32c);
  if (uStack_8 != 0) {
    uStack_c = (uint)DAT_0145db28;
    uStack_8 = (uint)((ulonglong)DAT_0145db28 >> 0x20);
    if (((int)uStack_8 <= *(int *)(param_1 + 0x32c)) &&
       (((int)uStack_8 < *(int *)(param_1 + 0x32c) || (uStack_c < *(uint *)(param_1 + 0x328))))) {
      return CONCAT31((int3)((ulonglong)DAT_0145db28 >> 0x28),1);
    }
  }
  return uStack_8 & 0xffffff00;
}



void __thiscall FUN_004b4700(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x411) = param_2;
  return;
}



undefined4 __fastcall FUN_004b4710(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4d8);
}



undefined4 __thiscall FUN_004b4720(int param_1,byte param_2)

{
  if ((uint)param_2 < (uint)(*(int *)(param_1 + 0x4ac) - *(int *)(param_1 + 0x4a8) >> 2)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x4a8) + (uint)param_2 * 4);
  }
  return 0;
}



undefined4 __thiscall FUN_004b4750(int param_1,byte param_2)

{
  if ((uint)param_2 < (uint)(*(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x4b4) + (uint)param_2 * 4);
  }
  return 0;
}



undefined4 __thiscall FUN_004b4780(int param_1,byte param_2)

{
  if ((uint)param_2 < (uint)(*(int *)(param_1 + 0x4c4) - *(int *)(param_1 + 0x4c0) >> 2)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x4c0) + (uint)param_2 * 4);
  }
  return 0;
}



undefined4 __fastcall FUN_004b47b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4dc);
}



float10 __fastcall FUN_004b47c0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x4e8);
}



float10 __fastcall FUN_004b47d0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x4f0);
}



float10 __fastcall FUN_004b47e0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x4f8);
}



float10 __fastcall FUN_004b47f0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x500);
}



float10 __fastcall FUN_004b4800(int param_1)

{
  return (float10)*(double *)(param_1 + 0x508);
}



float10 __fastcall FUN_004b4810(int param_1)

{
  return (float10)*(double *)(param_1 + 0x510);
}



float10 __fastcall FUN_004b4820(int param_1)

{
  return (float10)*(double *)(param_1 + 0x518);
}



float10 __fastcall FUN_004b4830(int param_1)

{
  return (float10)*(double *)(param_1 + 0x530);
}



float10 __fastcall FUN_004b4840(int param_1)

{
  return (float10)*(double *)(param_1 + 0x538);
}



float10 __fastcall FUN_004b4850(int param_1)

{
  return (float10)*(double *)(param_1 + 0x540);
}



float10 __fastcall FUN_004b4860(int param_1)

{
  return (float10)*(double *)(param_1 + 0x548);
}



float10 __fastcall FUN_004b4870(int param_1)

{
  return (float10)*(double *)(param_1 + 0x550);
}



float10 __fastcall FUN_004b4880(int param_1)

{
  return (float10)*(double *)(param_1 + 0x558);
}



float10 __fastcall FUN_004b4890(int param_1)

{
  return (float10)*(double *)(param_1 + 0x560);
}



float10 __fastcall FUN_004b48a0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x568);
}



void __thiscall FUN_004b48b0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_1 = param_1 + param_3 * 8;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x418) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x418) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x414);
  param_2[1] = *(undefined4 *)(param_1 + 0x418);
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined4 __fastcall FUN_004b4930(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4e0);
}



undefined1 __fastcall FUN_004b4940(int param_1)

{
  return *(undefined1 *)(param_1 + 0x411);
}



undefined1 __fastcall FUN_004b4950(int param_1)

{
  return *(undefined1 *)(param_1 + 0x410);
}



void __thiscall FUN_004b4960(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [160];
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb5e46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  uStack_18 = uVar1;
  memset(auStack_c8,0,0xb0);
  func_0x004687a0(1,uVar1);
  uStack_8 = 2;
  puVar3 = (undefined4 *)(param_1 + 0x348);
  iStack_d0 = 7;
  uVar2 = extraout_ECX;
  do {
    iVar5 = 7;
    puVar4 = puVar3;
    do {
      uVar2 = func_0x00482d80(*puVar4,uVar2,&DAT_0113d240);
      func_0x0046b6e0(uVar2);
      puVar4 = puVar4 + 7;
      iVar5 = iVar5 + -1;
      uVar2 = extraout_ECX_00;
    } while (iVar5 != 0);
    func_0x0046b6e0(auStack_b8,&DAT_0113d23c);
    puVar3 = puVar3 + 1;
    iStack_d0 = iStack_d0 + -1;
    uVar2 = extraout_ECX_01;
  } while (iStack_d0 != 0);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  func_0x0046a470(param_2);
  uStack_8 = 1;
  func_0x004673c0();
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004b4ad0(int param_1)

{
  *(undefined1 *)(param_1 + 0x338) = 0;
  return;
}



undefined4 __fastcall FUN_004b4ae0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



undefined4 __fastcall FUN_004b4af0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



undefined4 __fastcall FUN_004b4b00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



void __thiscall FUN_004b4b10(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x85);
  uVar1 = *(undefined1 *)(param_1 + 0x8b);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x89);
  *(undefined1 *)((int)param_2 + 6) = uVar1;
  return;
}



undefined4 __fastcall FUN_004b4b40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



void __thiscall FUN_004b4b50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}



void __fastcall FUN_004b4b60(int param_1)

{
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



void __thiscall FUN_004b4b80(int param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0x86) {
    param_1 = param_1 + (param_2 >> 6) * 8;
    uVar3 = 1 << (param_2 & 0x1f);
    uVar4 = 0;
    if (0x1f < (param_2 & 0x3f)) {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 ^ uVar4;
    if (0x3f < (param_2 & 0x3f)) {
      uVar4 = uVar3;
    }
    puVar1 = (uint *)(param_1 + 0xd0);
    *puVar1 = *puVar1 | uVar3;
    puVar1 = (uint *)(param_1 + 0xd4);
    *puVar1 = *puVar1 | uVar4;
    return;
  }
  func_0x0046a370();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_004b4bd0(int param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0x86) {
    param_1 = param_1 + (param_2 >> 6) * 8;
    uVar3 = 1 << (param_2 & 0x1f);
    uVar4 = 0;
    if (0x1f < (param_2 & 0x3f)) {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 ^ uVar4;
    if (0x3f < (param_2 & 0x3f)) {
      uVar4 = uVar3;
    }
    puVar1 = (uint *)(param_1 + 0xd0);
    *puVar1 = *puVar1 & ~uVar3;
    puVar1 = (uint *)(param_1 + 0xd4);
    *puVar1 = *puVar1 & ~uVar4;
    return;
  }
  func_0x0046a370();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



int __thiscall FUN_004b4c20(int param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 + 0xd0;
  if (0x85 < param_2) {
    func_0x0046a370();
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar2 = *(uint *)(param_1 + 0xd4 + (param_2 >> 6) * 8);
  puVar1 = (uint *)(iVar5 + (param_2 >> 6) * 8);
  uVar4 = 1 << (param_2 & 0x1f);
  uVar6 = 0;
  if (0x1f < (param_2 & 0x3f)) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < (param_2 & 0x3f)) {
    uVar6 = uVar4;
  }
  if (param_3 != '\0') {
    *puVar1 = *puVar1 | uVar4;
    puVar1[1] = uVar2 | uVar6;
    return iVar5;
  }
  puVar1[1] = uVar2 & ~uVar6;
  *puVar1 = *puVar1 & ~uVar4;
  return iVar5;
}



void __thiscall FUN_004b4c30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}



int __fastcall FUN_004b4c40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x104);
  }
  return iVar1;
}



void __thiscall FUN_004b4c60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x128) = param_2;
  return;
}



undefined1 __fastcall FUN_004b4c70(int param_1)

{
  if ((*(char *)(param_1 + 0x30) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    return 1;
  }
  return 0;
}



undefined1 __fastcall FUN_004b4c90(int param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



undefined4 __fastcall FUN_004b4ca0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



int * __thiscall FUN_004b4cb0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5e9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = func_0x008ab47d(0x1c,uVar6);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  *param_2 = iVar7;
  uStack_8 = 1;
  uVar8 = func_0x0052ab90(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),*param_2);
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)*param_2;
  param_2[1] = *(int *)(param_1 + 0x24);
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar5 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar3 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    *piVar2 = (int)piVar3;
    iVar7 = *(int *)(*param_2 + 4);
    iVar4 = *(int *)(iVar7 + 8);
    cVar1 = *(char *)(iVar4 + 0xd);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar7 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *(int *)(*param_2 + 8) = iVar7;
  }
  else {
    *piVar2 = (int)piVar2;
    *(int *)(*param_2 + 8) = *param_2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int * __thiscall FUN_004b4dc0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5eee;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = func_0x008ab47d(0x50,uVar6);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  *param_2 = iVar7;
  uStack_8 = 1;
  uVar8 = func_0x0052aa40(*(undefined4 *)(*(int *)(param_1 + 0x28) + 4),*param_2);
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)*param_2;
  param_2[1] = *(int *)(param_1 + 0x2c);
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar5 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar3 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    *piVar2 = (int)piVar3;
    iVar7 = *(int *)(*param_2 + 4);
    iVar4 = *(int *)(iVar7 + 8);
    cVar1 = *(char *)(iVar4 + 0xd);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar7 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *(int *)(*param_2 + 8) = iVar7;
  }
  else {
    *piVar2 = (int)piVar2;
    *(int *)(*param_2 + 8) = *param_2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_004b4ed0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __thiscall FUN_004b4f50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined1 __fastcall FUN_004b4fd0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



undefined4 __thiscall FUN_004b4fe0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0xa0,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_004b5040(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0xb8,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_004b50a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5f2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004c7f10(param_1 + 0x94,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __fastcall FUN_004b5100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
}



undefined4 __fastcall FUN_004b5110(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



void __thiscall FUN_004b5120(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 300) = param_2;
  *(undefined4 *)(param_1 + 0x130) = param_3;
  return;
}



undefined4 __fastcall FUN_004b5140(int param_1)

{
  return *(undefined4 *)(param_1 + 300);
}



undefined4 __fastcall FUN_004b5150(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}



void __thiscall FUN_004b5160(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x134) = param_2;
  return;
}



void __thiscall FUN_004b5170(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x135) = param_2;
  return;
}



void __thiscall FUN_004b5180(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x136) = param_2;
  return;
}



undefined1 __fastcall FUN_004b5190(int param_1)

{
  return *(undefined1 *)(param_1 + 0x136);
}



undefined4 __fastcall FUN_004b51a0(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x138);
  }
  return 0;
}



undefined4 __fastcall FUN_004b51c0(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x13c);
  }
  return 0;
}



void __thiscall FUN_004b51e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (iVar1 != 0) {
    func_0x00804460(param_2,param_3,iVar1);
  }
  return;
}



undefined8 __fastcall FUN_004b5210(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (iVar1 != 0) {
    return *(undefined8 *)(iVar1 + 0x10);
  }
  return 0;
}



float10 __fastcall FUN_004b5240(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0x2c);
  }
  return (float10)0.0;
}



void __thiscall FUN_004b5270(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if ((iVar1 != 0) && (param_2 != *(float *)(iVar1 + 0x2c))) {
    *(float *)(iVar1 + 0x2c) = param_2;
  }
  return;
}



undefined8 __fastcall FUN_004b52a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (iVar1 != 0) {
    return *(undefined8 *)(iVar1 + 0x20);
  }
  return 0;
}



undefined8 __fastcall FUN_004b52d0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (iVar1 != 0) {
    puVar2 = *(uint **)(*(int *)(iVar1 + 0x3c) +
                       (*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x48) + -1 &
                       *(int *)(iVar1 + 0x40) - 1U) * 4);
    puVar3 = *(uint **)(*(int *)(iVar1 + 0x50) +
                       (*(int *)(iVar1 + 0x54) - 1U & *(uint *)(iVar1 + 0x58)) * 4);
    uVar4 = *puVar2;
    return CONCAT44((puVar2[1] - puVar3[1]) - (uint)(uVar4 < *puVar3),uVar4 - *puVar3);
  }
  return 0;
}



void FUN_004b5330(int *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = 0;
  bVar1 = *(byte *)(*param_1 + 0x3a);
  if (bVar1 != 0) {
    iVar2 = *(int *)(*param_1 + 0x36);
    do {
      if (*(char *)(iVar2 + uVar4 * 6) == '\x0e') {
        FUN_004a3390(*(undefined1 *)(iVar2 + uVar4 * 6 + 1));
        return;
      }
      bVar3 = (char)uVar4 + 1;
      uVar4 = (uint)bVar3;
    } while (bVar3 < bVar1);
  }
  FUN_004a3390(0);
  return;
}



void __fastcall FUN_004b5390(int *param_1)

{
  func_0x004a5fa0();
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}



undefined4 * __thiscall FUN_004b53b0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5f6e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x004e7890(*(undefined4 *)*param_1,(undefined4 *)*param_1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_004b5420(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



void __thiscall FUN_004b5430(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1 + 0x14) != param_2) {
    puVar1 = param_2 + 4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    func_0x0046a660(param_2,*puVar1);
  }
  return;
}



void __thiscall FUN_004b5460(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = param_2[1];
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 2);
  return;
}



undefined4 __thiscall FUN_004b5480(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0x14,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_004b54e0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



int __thiscall FUN_004b5500(int param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb5fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x28),uVar2);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined2 __fastcall FUN_004b5590(int param_1)

{
  return *(undefined2 *)(param_1 + 0x4c);
}



void __thiscall FUN_004b55a0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *param_2 = *(undefined8 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



void __thiscall FUN_004b55c0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  *param_2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



void __thiscall FUN_004b55e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  *param_2 = *(undefined4 *)(param_1 + 100);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}



undefined1 __fastcall FUN_004b5600(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}



void FUN_004b5610(undefined4 param_1)

{
  func_0x004a55c0(0xd,param_1);
  return;
}

