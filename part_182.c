  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x580) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x580));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69bf3(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x644) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x644) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f69bfe(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x410);
  if (0xf < *(uint *)(unaff_EBP + -0x3fc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3fc));
  }
  *(undefined4 *)(unaff_EBP + -0x400) = 0;
  *(undefined4 *)(unaff_EBP + -0x3fc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69c09(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x428);
  if (0xf < *(uint *)(unaff_EBP + -0x414)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x414));
  }
  *(undefined4 *)(unaff_EBP + -0x418) = 0;
  *(undefined4 *)(unaff_EBP + -0x414) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69c14(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x464) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x464) = *(uint *)(unaff_EBP + -0x464) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x4e0);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar1 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar1 = std::ios_base::vftable;
    func_0x00e706cb(puVar1,uVar2,puVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f69c36(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -8 + unaff_EBP + -0x528) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x528) = iVar1 + -8;
  return;
}



void Unwind_00f69c41(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecd183;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x4e0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x530) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x530) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69c4c(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x588) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x588));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69c57(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x65c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x65c) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f69c62(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x590) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x590));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69c6d(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x6b4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6b4) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f69c78(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x410);
  if (0xf < *(uint *)(unaff_EBP + -0x3fc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3fc));
  }
  *(undefined4 *)(unaff_EBP + -0x400) = 0;
  *(undefined4 *)(unaff_EBP + -0x3fc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69c83(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x428);
  if (0xf < *(uint *)(unaff_EBP + -0x414)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x414));
  }
  *(undefined4 *)(unaff_EBP + -0x418) = 0;
  *(undefined4 *)(unaff_EBP + -0x414) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69c8e(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x464) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x464) = *(uint *)(unaff_EBP + -0x464) & 0xfffffeff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5e0);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar1 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar1 = std::ios_base::vftable;
    func_0x00e706cb(puVar1,uVar2,puVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f69cb5(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x630) + 4) + -8 + unaff_EBP + -0x628) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x630) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0x628) = iVar1 + -8;
  return;
}



void Unwind_00f69cc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecd183;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x5e0);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x630) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x630) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x630) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x630) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69ccb(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x598) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x598));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69cd6(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x68c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x68c) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f69ce1(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x560) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x560));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69cec(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x6a4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6a4) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f69cf7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x458);
  if (0xf < *(uint *)(unaff_EBP + -0x444)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x444));
  }
  *(undefined4 *)(unaff_EBP + -0x448) = 0;
  *(undefined4 *)(unaff_EBP + -0x444) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69d02(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x440);
  if (0xf < *(uint *)(unaff_EBP + -0x42c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x42c));
  }
  *(undefined4 *)(unaff_EBP + -0x430) = 0;
  *(undefined4 *)(unaff_EBP + -0x42c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69d40(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x10) - iVar1 >> 2);
    *(int *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  return;
}



void Unwind_00f69d70(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f69db0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),8);
  return;
}



void Unwind_00f69df0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00f69df8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x34);
  return;
}



void Unwind_00f69e07(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::codecvt_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f69e0f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x7c);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00f69e17(void)

{
  void *_Memory;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(void **)(unaff_EBP + -0x78);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69e1f(void)

{
  void *_Memory;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(void **)(unaff_EBP + -0x70);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69e27(void)

{
  void *_Memory;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(void **)(unaff_EBP + -0x68);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69e2f(void)

{
  void *_Memory;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(void **)(unaff_EBP + -0x60);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69e37(void)

{
  void *_Memory;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(void **)(unaff_EBP + -0x58);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69e3f(void)

{
  void *_Memory;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = *(void **)(unaff_EBP + -0x50);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f69e70(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69e78(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69e80(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69ec0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00f69f00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f69f40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f69f80(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f69f88(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f69f90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69f98(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f69fd0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f69fd8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a010(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a018(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a050(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a058(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a090(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a098(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a0d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a0d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a110(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a118(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a150(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a158(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6a190(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a198(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a1d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a1d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a210(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a218(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a250(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a258(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a290(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a298(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6a2d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a2d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a310(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a318(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6a320(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f6a350(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a358(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a390(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a398(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a3d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a3d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a410(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a418(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a450(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a458(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a490(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a498(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a4d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a4d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a510(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a518(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x58));
  return;
}



void Unwind_00f6a520(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6a528(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6a530(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6a538(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6a570(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a578(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a5b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a5e0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a5e8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a620(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a628(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a660(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f6a690(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a6c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6a6c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6a700(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a730(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a738(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a770(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a778(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a7b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a7b8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a7f0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a7f8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a830(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a838(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a870(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a878(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a8b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a8e0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a8e8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6a920(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a950(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a958(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6a990(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a9c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6a9c8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6aa00(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6aa30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6aa38(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6aa70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6aaa0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6aad0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ab00(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ab08(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6ab40(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ab48(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6ab80(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ab88(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6abc0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6abf0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6ac20(void)

{
  BOOL BVar1;
  int unaff_EBP;
  
  BVar1 = InitOnceComplete(*(LPINIT_ONCE *)(unaff_EBP + -0x18),*(DWORD *)(unaff_EBP + -0x14),
                           (LPVOID)0x0);
  if (BVar1 != 0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e879b9. Too many branches
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void Unwind_00f6ac50(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x44));
  return;
}



void Unwind_00f6ac58(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ac90(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6acc0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb8);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xcc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f6accb(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb8);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xcc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f6acd6(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb8);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xcc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f6ace1(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb8);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xcc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f6acec(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb8);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xcc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f6acf7(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb8);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xcc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xcc) = 0;
  }
  return;
}



void Unwind_00f6ad02(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x54);
  if (iVar1 != 0) {
    func_0x00e0b6b0();
    func_0x00ddbb20(iVar1);
  }
  return;
}



void Unwind_00f6ad0a(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xd8) == '\0') {
    return;
  }
  if (*(char *)(unaff_EBP + -0xd8) != '\0') {
    MXCSR = *(undefined4 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -0xd8) = 0;
  }
  return;
}



void Unwind_00f6ad15(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xb0) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0xb4));
  }
  return;
}



void Unwind_00f6ad20(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x78) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x7c));
  }
  return;
}



void Unwind_00f6ad28(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x88) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x8c));
  }
  return;
}



void Unwind_00f6ad70(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xa8) != '\0') {
    if (7 < *(uint *)(unaff_EBP + -0x90)) {
      iVar2 = *(int *)(unaff_EBP + -0xa4);
      iVar1 = *(uint *)(unaff_EBP + -0x90) * 2;
      uVar5 = iVar1 + 2;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = iVar1 + 0x25;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 7;
    *(undefined2 *)(unaff_EBP + -0xa4) = 0;
  }
  return;
}



void Unwind_00f6ad7b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ad83(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ad8b(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x2c) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x14);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x28);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f6ad93(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x118) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x100);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x114);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x104) = 0;
    *(undefined4 *)(unaff_EBP + -0x100) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x114) = 0;
  }
  return;
}



void Unwind_00f6ad9e(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xc4) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x94);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xa8);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc6dd2;
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xa8) = 0;
    uVar1 = *(uint *)(unaff_EBP + -0xac);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xc0);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc6dd2:
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + -0xac) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xc0) = 0;
  }
  return;
}



void Unwind_00f6ada9(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x6c) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x54);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x68);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x68) = 0;
  }
  return;
}



void Unwind_00f6adb1(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x74);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x88);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x88) = 0;
  }
  return;
}



void Unwind_00f6adbc(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xfc) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xe4);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xf8);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xf8) = 0;
  }
  return;
}



void Unwind_00f6adc7(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xe0) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -200);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0xdc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0xf;
    *(undefined1 *)(unaff_EBP + -0xdc) = 0;
  }
  return;
}



void Unwind_00f6ae10(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f6ae18(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ae20(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6ae50(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6ae5b(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ae63(void)

{
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x1c))(1);
  }
  return;
}



void Unwind_00f6ae6b(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6ae73(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6aea0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6aea8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6aee0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6aee8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6af20(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6af28(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6af60(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x2c) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  }
  return;
}



void Unwind_00f6af68(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6af70(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x34) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x38));
  }
  return;
}



void Unwind_00f6af78(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x44);
  if (*piVar1 != 0) {
    func_0x00dc6550(*piVar1,*(undefined4 *)(unaff_EBP + -0x40),piVar1);
    func_0x00ddbb20(*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f6af80(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6afb0(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x34) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x38));
  }
  return;
}



void Unwind_00f6afb8(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6afc0(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x2c) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  }
  return;
}



void Unwind_00f6afc8(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6afd3(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6afdb(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6b010(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f6b018(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b020(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6b050(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b058(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6b090(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b098(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6b0d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b100(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void FUN_00f6b130(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6b150(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b158(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6b160(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f6b168(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00f6b1a0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b1d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b200(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b208(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b210(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b218(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b250(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b280(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b2b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b2e0(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6b2eb(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b2f3(void)

{
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x1c))(1);
  }
  return;
}



void Unwind_00f6b2fb(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6b330(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b360(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6b36b(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b373(void)

{
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x1c))(1);
  }
  return;
}



void Unwind_00f6b37b(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6b383(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6b3b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b3b8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void FUN_00f6b3f0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6b410(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x28) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  }
  return;
}



void Unwind_00f6b418(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b420(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6b428(void)

{
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x1c))(1);
  }
  return;
}



void Unwind_00f6b460(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f6b468(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b470(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6b4a0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b4d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b500(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x100);
  if (0xf < *(uint *)(unaff_EBP + -0xec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
  }
  *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b50b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xe8);
  if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd4));
  }
  *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b516(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b521(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
  if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4));
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b52c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
  if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c));
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b537(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  if (0xf < *(uint *)(unaff_EBP + -0x74)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b542(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b54a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  if (0xf < *(uint *)(unaff_EBP + -0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b552(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b55a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b562(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x118);
  if (0xf < *(uint *)(unaff_EBP + -0x104)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
  }
  *(undefined4 *)(unaff_EBP + -0x108) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b5a0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x50));
  return;
}



void Unwind_00f6b5e0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x78));
  return;
}



void Unwind_00f6b620(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b628(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b630(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  if (0xf < *(uint *)(unaff_EBP + -0x78)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x78));
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b63b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa4);
  if (0xf < *(uint *)(unaff_EBP + -0x90)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x90));
  }
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b646(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b64e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b656(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60));
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6b65e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void FUN_00f6b6a0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void FUN_00f6b6c0(void)

{
  FUN_008ab370();
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6b6f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar3 = *(int *)(unaff_EBP + -0x58);
  if (iVar3 != 0) {
    do {
      iVar3 = iVar3 + -1;
      *(int *)(unaff_EBP + -0x58) = iVar3;
    } while (iVar3 != 0);
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  if (*(int *)(unaff_EBP + -100) != 0) {
    iVar3 = *(int *)(unaff_EBP + -0x60);
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(*(int *)(unaff_EBP + -100) + iVar3 * 4);
      if (iVar1 != 0) {
        func_0x00ddbb20(iVar1);
      }
    }
    func_0x00ddbb20(*(undefined4 *)(unaff_EBP + -100));
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  uVar2 = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  func_0x00ddbb20(uVar2);
  return;
}



void Unwind_00f6b6f8(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x50) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x54));
  }
  return;
}



void Unwind_00f6b700(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x44));
  return;
}



void Unwind_00f6b708(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar3 = *(int *)(unaff_EBP + -0x30);
  if (iVar3 != 0) {
    do {
      iVar3 = iVar3 + -1;
      *(int *)(unaff_EBP + -0x30) = iVar3;
    } while (iVar3 != 0);
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    iVar3 = *(int *)(unaff_EBP + -0x38);
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x3c) + iVar3 * 4);
      if (iVar1 != 0) {
        func_0x00ddbb20(iVar1);
      }
    }
    func_0x00ddbb20(*(undefined4 *)(unaff_EBP + -0x3c));
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  uVar2 = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  func_0x00ddbb20(uVar2);
  return;
}



void Unwind_00f6b710(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x4c));
  return;
}



void Unwind_00f6b718(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x48));
  return;
}



void Unwind_00f6b750(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6b780(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b788(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



void Unwind_00f6b7c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b7c8(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x28) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  }
  return;
}



void Unwind_00f6b7d0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f6b800(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b808(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x40));
  return;
}



void Unwind_00f6b840(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b848(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x40));
  return;
}



void Unwind_00f6b880(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b888(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f6b8c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b8c8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x40));
  return;
}



void Unwind_00f6b900(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b908(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6b940(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b948(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6b980(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b988(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6b9c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6b9c8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x54));
  return;
}



void Unwind_00f6ba00(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ba08(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6ba40(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ba48(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6ba80(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ba88(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bac0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bac8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bb00(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bb30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bb38(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



void Unwind_00f6bb40(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6bb80(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bb88(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



void Unwind_00f6bb90(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6bbd0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bbd8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



void Unwind_00f6bbe0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6bc20(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bc28(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f6bc30(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f6bc70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bc78(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00f6bc80(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f6bcb0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bcb8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bcf0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bcf8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bd30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bd38(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f6bd40(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6bd70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bd78(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f6bd80(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6bdb0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bdb8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x40));
  return;
}



void Unwind_00f6bdc0(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x44) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x48));
  }
  return;
}



void Unwind_00f6bdf0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bdf8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f6be00(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f6be30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6be38(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f6be40(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}



void Unwind_00f6be70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6be78(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6beb0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6beb8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bec0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6bef0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bef8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f6bf00(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x3c));
  return;
}



void Unwind_00f6bf40(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bf48(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6bf50(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bf80(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bf88(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6bf90(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6bfc0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6bfc8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6bfd0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c000(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c008(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c010(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c040(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c048(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c050(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6c080(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c088(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c090(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6c0c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c0c8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  int iVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  iVar10 = iVar3 + 0x10;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6e6d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  LOCK();
  iVar11 = *(int *)(iVar3 + 0x40);
  *(int *)(iVar3 + 0x40) = 0;
  UNLOCK();
  iStack_14 = iVar10;
  if (iVar11 != 0) {
    func_0x00ddbb20(iVar11,uVar5);
  }
  uVar12 = (uint)(iVar11 != 0);
  LOCK();
  iVar11 = *(int *)(iVar3 + 0x20);
  *(int *)(iVar3 + 0x20) = 0;
  UNLOCK();
  while (iVar11 != 0) {
    iVar9 = *(int *)(iVar11 + 0x4c);
    uVar12 = uVar12 + 1;
    func_0x00ddbb20(iVar11,uVar5);
    iVar11 = iVar9;
  }
  if (2 < DAT_012ba4e8) {
    puVar6 = &DAT_0112e1b4;
    if (uVar12 != 1) {
      puVar6 = &DAT_01141e74;
    }
    func_0x00ddf410(3,DAT_013e0188,"Freed %zu context property object%s\n",uVar12,puVar6);
  }
  iVar9 = 0;
  LOCK();
  iVar11 = *(int *)(iVar3 + 0x28);
  *(int *)(iVar3 + 0x28) = 0;
  UNLOCK();
  if (iVar11 != 0) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      iVar3 = *(int *)(iVar11 + 0x80);
      puVar2 = *(undefined4 **)(iVar11 + 0x7c);
      if (puVar2 != (undefined4 *)0x0) {
        piVar8 = puVar2 + 1;
        LOCK();
        iVar10 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if ((iVar10 == 1) && (piVar8 != (int *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      func_0x00ddbb20(iVar11);
      iVar10 = iStack_14;
      iVar11 = iVar3;
      iStack_18 = iVar9;
    } while (iVar3 != 0);
  }
  puVar6 = &DAT_0112e1b4;
  if (2 < DAT_012ba4e8) {
    puVar7 = &DAT_0112e1b4;
    if (iVar9 != 1) {
      puVar7 = &DAT_01141e74;
    }
    func_0x00ddf410(3,DAT_013e0188,"Freed %zu AuxiliaryEffectSlot property object%s\n",iVar9,puVar7)
    ;
  }
  LOCK();
  iVar11 = *(int *)(iVar10 + 200);
  *(int *)(iVar10 + 200) = 0;
  UNLOCK();
  if (iVar11 != 0) {
    func_0x00ddbb20(iVar11);
  }
  LOCK();
  uVar1 = *(undefined4 *)(iVar10 + 0xc0);
  *(undefined4 *)(iVar10 + 0xc0) = 0;
  UNLOCK();
  func_0x00ddbb20(uVar1);
  if (*(int *)(iVar10 + 0xd8) != 0) {
    func_0x00e19070(auStack_28);
    iVar11 = 0;
    if (iStack_24 != 0) {
      iVar11 = iStack_24;
    }
    if (iStack_1c != 0) {
      iVar11 = iVar11 + iStack_1c;
    }
    if ((iVar11 != 0) && (2 < DAT_012ba4e8)) {
      if (iVar11 != 1) {
        puVar6 = &DAT_01141e74;
      }
      func_0x00ddf410(3,DAT_013e0188,"Destructed %zu orphaned event%s\n",iVar11,puVar6);
    }
    piVar8 = (int *)(*(int *)(iVar10 + 0xd8) + 4);
    LOCK();
    *piVar8 = *piVar8 + iVar11;
    UNLOCK();
  }
  puVar2 = (undefined4 *)(iVar10 + 0x104);
  if (*(int *)(iVar10 + 0x104) != 0) {
    func_0x00dc6590(*(int *)(iVar10 + 0x104),*(undefined4 *)(iVar10 + 0x108),puVar2);
    func_0x00ddbb20(*puVar2);
    *puVar2 = 0;
    *(undefined4 *)(iVar10 + 0x108) = 0;
    *(undefined4 *)(iVar10 + 0x10c) = 0;
  }
  func_0x00e0a4e0();
  puVar2 = (undefined4 *)(iVar10 + 0xec);
  if (*(int *)(iVar10 + 0xec) != 0) {
    func_0x00dc6620(*(int *)(iVar10 + 0xec),*(undefined4 *)(iVar10 + 0xf0),puVar2);
    func_0x00ddbb20(*puVar2);
    *puVar2 = 0;
    *(undefined4 *)(iVar10 + 0xf0) = 0;
    *(undefined4 *)(iVar10 + 0xf4) = 0;
  }
  func_0x00e0a4e0();
  if (*(int *)(iVar10 + 0xd8) != 0) {
    func_0x00ddbb20(*(int *)(iVar10 + 0xd8));
  }
  func_0x00e33a70();
  if (*(int *)(iVar10 + 0xd0) == 0) {
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x008aaff0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



void Unwind_00f6c0d3(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x120);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c0e1(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar3 = (int *)(iVar2 + 0x1e0);
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar2 + 0x1e4);
    for (; iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
      func_0x00dce6e0();
    }
    func_0x00ddbb20(*piVar3);
    *piVar3 = 0;
    *(undefined4 *)(iVar2 + 0x1e4) = 0;
    *(undefined4 *)(iVar2 + 0x1e8) = 0;
  }
  return;
}



void Unwind_00f6c0ef(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar3 = (int *)(iVar2 + 0x220);
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar2 + 0x224);
    for (; iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
      func_0x00de9b80();
    }
    func_0x00ddbb20(*piVar3);
    *piVar3 = 0;
    *(undefined4 *)(iVar2 + 0x224) = 0;
    *(undefined4 *)(iVar2 + 0x228) = 0;
  }
  return;
}



void Unwind_00f6c0fd(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x260);
  if (iVar1 != 0) {
    func_0x00de9a30();
    func_0x00ddbb20(iVar1);
  }
  return;
}



void Unwind_00f6c10b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x268);
  if (0xf < *(uint *)(iVar1 + 0x27c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x27c));
  }
  *(undefined4 *)(iVar1 + 0x278) = 0;
  *(undefined4 *)(iVar1 + 0x27c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f6c140(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c148(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c180(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c188(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void FUN_00f6c1c0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void FUN_00f6c1e0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6c200(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f6c230(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6c270(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f6c2a0(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6c2ab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6c2e0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  return;
}



void Unwind_00f6c320(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (7 < (uint)puVar1[5]) {
      func_0x005895e0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6c360(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6c3a0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + 8) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + 0x20);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + 0xc);
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0x20) = 0xf;
    *(undefined1 *)(unaff_EBP + 0xc) = 0;
  }
  return;
}



void Unwind_00f6c3e0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c410(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c418(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c450(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c458(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c490(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c498(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c4d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c4d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6c510(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c518(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c550(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c558(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6c590(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c598(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c5d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c5d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6c610(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c618(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c650(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c658(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c690(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c698(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c6d0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c6d8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6c710(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = al::base_exception::vftable;
  uVar1 = puVar3[8];
  if (0xf < uVar1) {
    iVar2 = puVar3[3];
    uVar6 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  puVar3[7] = 0;
  puVar3[8] = 0xf;
  *(undefined1 *)(puVar3 + 3) = 0;
  *puVar3 = std::exception::vftable;
  func_0x008ab0a6(puVar3 + 1);
  return;
}



void Unwind_00f6c740(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c748(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6c780(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c788(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c7c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c7c8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c800(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c808(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c840(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c848(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c880(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c888(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6c890(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f6c8c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c8c8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c900(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c908(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c940(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c948(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6c980(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c988(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6c9c0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c9f0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6c9f8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6ca30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ca38(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6ca70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ca78(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cab0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cab8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6caf0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6caf8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cb30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cb38(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6cb40(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f6cb70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cb78(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cbb0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cbb8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cbf0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cbf8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cc30(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cc38(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cc70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cca0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x80);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}



void Unwind_00f6ccab(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8);
  if (iVar1 != 0) {
    func_0x008ab812(iVar1,0x42c);
  }
  return;
}



void Unwind_00f6ccb9(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}



void Unwind_00f6ccf0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6cd20(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x14) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00f6cd50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}



void Unwind_00f6cd58(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x24) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x28));
  }
  return;
}



void Unwind_00f6cd60(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1c) == '\0') {
    return;
  }
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    MXCSR = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f6cd90(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cd98(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6cdd0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cdd8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f6cde0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6ce10(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ce18(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6ce50(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ce58(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f6ce60(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6ce90(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ce98(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6cea0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f6ced0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6ced8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6cf10(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cf18(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x3c));
  return;
}



void Unwind_00f6cf20(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6cf28(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6cf30(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f6cf38(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x34) == '\0') {
    return;
  }
  if (*(char *)(unaff_EBP + -0x34) != '\0') {
    MXCSR = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f6cf70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cf78(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6cfb0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cfb8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}



void Unwind_00f6cfc0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x30);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f6cff0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6cff8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6d000(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f6d030(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d038(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6d070(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d078(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6d0b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d0b8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6d0f0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d0f8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6d130(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d160(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1a4));
  return;
}



void Unwind_00f6d16b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  if (0xf < *(uint *)(unaff_EBP + -0x74)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6d176(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  if (0xf < *(uint *)(unaff_EBP + -0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6d17e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6d1c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),8);
  }
  return;
}



void Unwind_00f6d1f0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d1f8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



void Unwind_00f6d230(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  return;
}



void Unwind_00f6d260(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x40),8);
  }
  return;
}



void Unwind_00f6d2a0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    // WARNING: Could not recover jumptable at 0x00df0e39. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d2a8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar3 = *(int **)(unaff_EBP + -0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*piVar3 + 4))(uVar4);
    }
  }
  *(int *)(unaff_EBP + -0x10) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d2b0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  iVar1 = *(int *)(unaff_EBP + -0x30);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x28) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f6d2c9(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x18) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f6d310(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  piVar1 = (int *)puVar2[0x29];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != puVar2 + 0x20);
    puVar2[0x29] = 0;
  }
  *puVar2 = std::_Associated_state<long>::vftable;
  if ((*(char *)((int)puVar2 + 0x75) != '\0') && (puVar2[0x1c] == 0)) {
    func_0x00e7465d(puVar2 + 5);
  }
  func_0x00e75356(puVar2 + 3);
  return;
}



void Unwind_00f6d318(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xac);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    // WARNING: Could not recover jumptable at 0x00df0e39. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d326(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    // WARNING: Could not recover jumptable at 0x00df0e39. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d32e(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + 8) + 0xc);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar3 = (int *)*piVar5;
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*piVar3 + 4))(uVar4);
    }
  }
  *piVar5 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d360(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00df01a0(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                    *(undefined4 *)(unaff_EBP + -0x2c));
    func_0x00ddbb20(*(undefined4 *)(unaff_EBP + -0x28));
  }
  return;
}



void Unwind_00f6d390(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6d398(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0xc);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



int Unwind_00f6d3d0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *(int *)(unaff_EBP + 0x30);
  if (iVar5 != 0) {
    uVar7 = (*(int *)(unaff_EBP + 0x38) - iVar5 >> 2) * 4;
    iVar6 = iVar5;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar7 = uVar7 + 0x23;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66(uVar4);
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    func_0x008ab812(iVar6,uVar7);
    *(undefined4 *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
  }
  uStack_8 = 0;
  iVar5 = _guard_check_icall();
  piVar2 = *(int **)(unaff_EBP + 0x1c);
  uStack_8 = 1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar5 = (**(code **)(*piVar2 + 4))();
    }
  }
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  piVar2 = *(int **)(unaff_EBP + 0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar6 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar6 + -1;
    UNLOCK();
    if (iVar6 + -1 == 0) {
      iVar5 = (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        iVar5 = (**(code **)(*piVar2 + 4))();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



void Unwind_00f6d3d8(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x14) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void FUN_00f6d410(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6d430(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    // WARNING: Could not recover jumptable at 0x00df0e39. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d438(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    uStack_8 = 0xffffffff;
    pcStack_c = FUN_00f3dc70;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    _guard_check_icall(uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6d451(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[1] + -1;
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    // WARNING: Could not recover jumptable at 0x00df0bd9. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d459(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x50),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d461(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x20);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f6d469(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x18);
  return;
}



void Unwind_00f6d4a0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



int Unwind_00f6d4a8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined **ppuStack_44;
  uint uStack_40;
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6d410;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *piVar1;
  if ((iVar5 != 0) &&
     (((*(char *)(unaff_EBP + -0x2c) == '\0' || (*(char *)(iVar5 + 0x6c) == '\0')) &&
      (*(int *)(iVar5 + 0x70) == 0)))) {
    ppuStack_44 = &PTR_vftable_012bc31c;
    uStack_48 = 1;
    uStack_4c = 0xdf0d1d;
    func_0x008370d0();
    uStack_58 = 0;
    func_0x008ab0ac(auStack_2c,&uStack_58,std::exception::vftable);
    uStack_50 = uStack_24;
    uStack_4c = uStack_20;
    func_0x008390f0(auStack_1c,std::future_error::vftable);
    if ((*piVar1 == 0) ||
       ((*(char *)(unaff_EBP + -0x2c) != '\0' && (*(char *)(*piVar1 + 0x6c) != '\0')))) {
      uStack_4c = 4;
      uStack_50 = 0xdf0e0a;
      func_0x00837270();
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    uStack_4c = 0;
    uStack_58 = ZEXT48(auStack_1c);
    uStack_50 = 0;
    func_0x00e7522e((int)&uStack_58 + 4);
    uStack_58._0_4_ = 0xdf0d9f;
    func_0x00df3dc0();
    uStack_58 = CONCAT44(uStack_58._4_4_,auStack_1c);
    func_0x00e75356();
    iVar5 = func_0x008ab0a6(auStack_2c);
  }
  ppuStack_44 = (undefined **)*piVar1;
  if (ppuStack_44 != (undefined **)0x0) {
    LOCK();
    piVar1 = (int *)(ppuStack_44 + 1);
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      if ((undefined4 *)ppuStack_44[0x1e] != (undefined4 *)0x0) {
