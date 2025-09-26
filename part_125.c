    }
    uStack_8 = 1;
    func_0x0068de80(uVar1);
    uStack_8 = 0xffffffff;
    func_0x006fb910();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0844a(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05ec4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -200) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xcc) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xcc) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006fb910();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08455(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0845d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08468(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08473(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0847b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08483(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0848b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08493(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3a8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0849b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084a3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084ab(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084b3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084bb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084c3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084ce(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084d6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084de(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084e6(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084ee(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084f6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f084fe(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08530(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x10) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x14) = 0xffffffff;
  }
  return;
}



void Unwind_00f08538(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x88);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08543(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeeef6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    pcVar3 = (code *)**(undefined4 **)(unaff_EBP + -0x6c);
    _guard_check_icall(unaff_EBP + -0x78,uVar5);
    (*pcVar3)();
  }
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(unaff_EBP + -0x88);
  if (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar3 = *(code **)(*piVar4 + 8);
      _guard_check_icall();
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0854e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    puStack_c = &DAT_00f089ec;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    if ((*(char *)(unaff_EBP + -200) != '\0') &&
       (*(undefined1 **)(unaff_EBP + -0xcc) != (undefined1 *)0x0)) {
      **(undefined1 **)(unaff_EBP + -0xcc) = 0;
    }
    uStack_8 = 1;
    func_0x0068de80(uVar1);
    uStack_8 = 0xffffffff;
    func_0x006fb860();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0856a(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05e64;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -200) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xcc) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xcc) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006fb860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08575(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0857d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08588(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08593(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0859b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085a3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085ab(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085b3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3a8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085bb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085c3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085cb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085d3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085db(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085e3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085ee(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085f6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f085fe(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08606(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0860e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08616(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0861e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08650(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x10) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x14) = 0xffffffff;
  }
  return;
}



void Unwind_00f08658(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x88);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08663(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeeef6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    pcVar3 = (code *)**(undefined4 **)(unaff_EBP + -0x6c);
    _guard_check_icall(unaff_EBP + -0x78,uVar5);
    (*pcVar3)();
  }
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(unaff_EBP + -0x88);
  if (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar3 = *(code **)(*piVar4 + 8);
      _guard_check_icall();
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0866e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    puStack_c = &DAT_00f08a4c;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    if ((*(char *)(unaff_EBP + -200) != '\0') &&
       (*(undefined1 **)(unaff_EBP + -0xcc) != (undefined1 *)0x0)) {
      **(undefined1 **)(unaff_EBP + -0xcc) = 0;
    }
    uStack_8 = 1;
    func_0x0068de80(uVar1);
    uStack_8 = 0xffffffff;
    func_0x006fb7b0();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0868a(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05e04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -200) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xcc) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xcc) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006fb7b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08695(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0869d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086a8(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086b3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086bb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086c3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086cb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086d3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3a8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086db(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086e3(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086eb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086f3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f086fb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08703(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xa0);
    _guard_check_icall(unaff_EBP + -0xac,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0870e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08716(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0871e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08726(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0872e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x68);
    _guard_check_icall(unaff_EBP + -0x74,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08736(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0873e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08770(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00f08a85;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006ba870(uVar1,unaff_EBP + -0x108,unaff_EBP + -0x108);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0878c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef397e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(iVar4 + 0xa0);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08794(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar1,unaff_EBP + -0x108);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0879f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar1,unaff_EBP + -0x108);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f087aa(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef397e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(iVar4 + 0xa0);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f087e0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = unaff_EBP + -0x118;
    puStack_c = &DAT_00f08ad0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2,iVar1,iVar1,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f087fc(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08804(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x118);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0880f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8cc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x118,unaff_EBP + -0x118);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0881a(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08822(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0xb8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08860(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = unaff_EBP + -0x128;
    puStack_c = &DAT_00f08b10;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2,iVar1,iVar1,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0887c(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef3a10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08884(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c88;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x128,unaff_EBP + -0x128);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0888f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c88;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0x128,unaff_EBP + -0x128);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0889a(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef3a10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f088a2(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 200);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f088e0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = unaff_EBP + -0xf8;
    puStack_c = &DAT_00f08b50;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2,iVar1,iVar1,iVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f088fc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xf8,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08907(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8c48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xf8,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08912(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0891a(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x9c);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08950(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f05ec4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x14c) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x148), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006fb910();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08958(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f06061;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x118) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 300) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x128);
      _guard_check_icall(iVar2 + 0x11c,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x118) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08960(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0896e(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x14c) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x148), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f0897c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f089b0(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f05e64;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x144) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x140), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006fb860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f089b8(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f05ff1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x110) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x124) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x120);
      _guard_check_icall(iVar2 + 0x114,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x110) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f089c0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x138);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f089ce(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x144) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x140), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f089dc(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f08a10(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f05e04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0xa4) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0xa0), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006fb7b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08a18(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f05f81;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x70) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x84) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x80);
      _guard_check_icall(iVar2 + 0x74,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x70) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08a20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x98);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08a2e(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0xa4) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0xa0), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f08a3c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f08a70(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef8cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08a78(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef397e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(iVar4 + 0xa0);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08ab0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef8cc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08ab8(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef39b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08ac0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0xb8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08af0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef8c88;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08af8(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef3a10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b00(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 200);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b30(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef8c48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b38(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b40(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x9c);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar3 = *(code **)(*piVar2 + 8);
      _guard_check_icall(uVar5);
      (*pcVar3)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b70(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00efae45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf160(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b7b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef8d2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf160(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08b83(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef8e76;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xf4) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x108) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x104);
      _guard_check_icall(iVar2 + 0xf8,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xf4) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bec40();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08bb0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0415b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x130) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 300);
    _guard_check_icall(iVar2 + 0x120,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006cf020();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08be0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f040fb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x130) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 300);
    _guard_check_icall(iVar2 + 0x120,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006cf0c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08c10(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0409b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x148) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x144);
    _guard_check_icall(iVar2 + 0x138,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006cf160();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08c40(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f0403b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xfc);
    _guard_check_icall(iVar2 + 0xf0,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08c70(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f08c7b(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x160) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x15c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08c86(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x1a0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x19c);
    _guard_check_icall(iVar2 + 400,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x184) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x180);
    _guard_check_icall(iVar2 + 0x174,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08c94(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00efda46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xe4) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xf8) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf4);
      _guard_check_icall(iVar2 + 0xe8,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xe4) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08c9c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08caa(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x118) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x114), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f08cb8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f08cf0(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f08cc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x194);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x160) != '\0') && (*(undefined1 **)(iVar1 + 0x15c) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x15c) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006df8f0();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x28);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x194) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x198);
  if (_Memory != (undefined1 *)0x0) {
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar5 + 0x18) == '\0') {
      func_0x008abb44();
      piVar5 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar5 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar5 + 0xc4) + 4), iVar1 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar1 + iVar4 * 4) == 0) {
          *_Memory = _Memory[0x1ac];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00707599;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00707599:
    *(undefined4 *)(unaff_EBP + -0x198) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08cfb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1a0);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d06(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d0e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d16(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1a8);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d21(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1a4);
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d2c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d34(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d3c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x78) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x7c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x7c) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d47(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x78) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x7c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x7c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08d52(void)

{
  return;
}



void Unwind_00f08d90(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f08d9b(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x14c) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x148), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08da6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x184) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x180);
    _guard_check_icall(iVar2 + 0x174,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x168) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x164);
    _guard_check_icall(iVar2 + 0x158,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08db4(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00efda46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xe4) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xf8) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf4);
      _guard_check_icall(iVar2 + 0xe8,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xe4) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006c7940();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08dbc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08dca(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x118) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x114), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f08dd8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f08e10(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f08de8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -400);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x14c) != '\0') && (*(undefined1 **)(iVar1 + 0x148) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x148) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006df8f0();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x28);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
    *(undefined4 *)(unaff_EBP + -400) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x194);
  if (_Memory != (undefined1 *)0x0) {
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar5 + 0x18) == '\0') {
      func_0x008abb44();
      piVar5 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar5 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar5 + 0xc4) + 4), iVar1 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar1 + iVar4 * 4) == 0) {
          *_Memory = _Memory[400];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00707879;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00707879:
    *(undefined4 *)(unaff_EBP + -0x194) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e1b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18c);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e26(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e2e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e36(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1a4);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e41(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1a0);
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e4c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e54(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e5c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x70) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x74) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x74) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e67(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x70) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x74) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x74) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08e72(void)

{
  return;
}



void Unwind_00f08eb0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x24);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f08ebb(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efd9de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0xb8) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0xb4), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006df990();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08ec6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0xf0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xec);
    _guard_check_icall(iVar2 + 0xe0,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xd4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xd0);
    _guard_check_icall(iVar2 + 0xc4,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08ed4(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00efdab6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x48) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x58);
      _guard_check_icall(iVar2 + 0x4c,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x48) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08edc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08ee7(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x7c) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x78), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f08ef2(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f08f20(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f08f02;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0xfc);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0xb8) != '\0') && (*(undefined1 **)(iVar1 + 0xb4) != (undefined1 *)0x0))
    {
      **(undefined1 **)(iVar1 + 0xb4) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006df990();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x24);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
    *(undefined4 *)(unaff_EBP + -0xfc) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x100);
  if (_Memory != (undefined1 *)0x0) {
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar5 + 0x18) == '\0') {
      func_0x008abb44();
      piVar5 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar5 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar5 + 0xc4) + 4), iVar1 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar1 + iVar4 * 4) == 0) {
          *_Memory = _Memory[0xfc];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00707b9c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00707b9c:
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f2b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x108);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f36(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f3e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f46(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xf8);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f51(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xf4);
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f5c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x30);
    _guard_check_icall(unaff_EBP + -0x3c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f64(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x30);
    _guard_check_icall(unaff_EBP + -0x3c,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f6c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd9de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df990();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f77(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f00676;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df990();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f82(void)

{
  return;
}



void Unwind_00f08f8d(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd9de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x74) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x78) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x78) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df990();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08f98(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xf8);
  puStack_c = &DAT_00efdab6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x48) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x58);
      _guard_check_icall(iVar2 + 0x4c,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x48) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bfa00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08fa3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xf8);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f08fb1(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0xf8) + 0x7c) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0xf8) + 0x78), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f08fbf(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0xf4) + 4);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
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
  }
  return;
}



void Unwind_00f09000(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    puStack_c = &DAT_00ee8f38;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658e30(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09019(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09021(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09029(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8f38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x38,unaff_EBP + -0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09031(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
    puStack_c = &DAT_00ee8f38;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658e30(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0904a(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x68) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x68) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void Unwind_00f09055(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -100);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0905d(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09065(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x88);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09070(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = unaff_EBP + -0x88;
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(unaff_EBP + -0x80),4);
  switch((uint)*(byte *)(unaff_EBP + -0x80)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(unaff_EBP + -0x80) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0907b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09083(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x60);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0908b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar1,unaff_EBP + -0x38);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09093(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar5;
  undefined6 uVar6;
  char acStack_79 [77];
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_14 = *(int *)(unaff_EBP + -0x60);
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(iStack_14 + 8),4);
  switch((uint)*(byte *)(iStack_14 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iStack_14 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar2 = (code *)swi(0x29);
  uVar6 = (*pcVar2)();
  piVar4 = (int *)uVar6;
  if (bVar5) {
    cVar3 = (char)uVar6;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar3;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    *(char *)piVar4 = (char)*piVar4 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  cVar3 = (char)((uint6)uVar6 >> 0x28);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)((int)piVar4 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar3;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar6 >> 0x20);
  in((short)((uint6)uVar6 >> 0x20));
  uStack_18 = 0xffffffff;
  puStack_1c = &DAT_00ee33a8;
  iStack_20 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uStack_2c = 0x658ed5;
  func_0x0052ae10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f090d0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    puStack_c = &DAT_00ee8f78;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658db0(uVar1,unaff_EBP + -0x74,unaff_EBP + -0x7c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f090e9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar1,unaff_EBP + -0x74);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f090f1(void)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658dff:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar2)();
    cVar3 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar3;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f090f9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8f78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar1,unaff_EBP + -0x38,unaff_EBP + -0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09101(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
    puStack_c = &DAT_00ee8f78;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658db0(uVar1,unaff_EBP + -0x94,unaff_EBP + -0x9c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0911d(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar1,unaff_EBP + -0xb4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09128(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(unaff_EBP + -0xa4)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658dff:
    *(undefined1 *)(unaff_EBP + -0xa4) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    piVar4 = (int *)(*pcVar1)();
    cVar2 = (char)piVar4;
    *(char *)(in_GS_OFFSET + (int)piVar4) = *(char *)(in_GS_OFFSET + (int)piVar4) + cVar2;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    *(char *)piVar4 = (char)*piVar4 + cVar2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



void Unwind_00f09133(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar1,unaff_EBP + -0x94);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0913e(void)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658dff:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar2)();
    cVar3 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar3;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f09146(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar1,unaff_EBP + -0x38);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0914e(void)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x00658dff;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658dff:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar2)();
    cVar3 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar3;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar3;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f09190(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    puStack_c = &DAT_00ee8fb8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658d30(uVar1,unaff_EBP + -0x50,unaff_EBP + -0x58);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f091a9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x50);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f091b1(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f091b9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8fb8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x30,unaff_EBP + -0x38);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f091c1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffd;
    puStack_c = &DAT_00ee8fb8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658d30(uVar1,unaff_EBP + -0x50,unaff_EBP + -0x58);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f091da(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x6c) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x6c) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    pcVar3 = (char *)(*pcVar1)();
    cVar2 = (char)pcVar3;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    *pcVar3 = *pcVar3 + cVar2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f091e5(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x68);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f091ed(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x50);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f091f5(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x7c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f091fd(void)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar6;
  bool bVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar4 = (uint)*(byte *)(unaff_EBP + -0x74);
  bVar6 = uVar4 < 9;
  bVar7 = uVar4 == 9;
  if (uVar4 < 10) {
    bVar1 = *(byte *)(uVar4 + 0x658d98);
    *(undefined1 *)(unaff_EBP + -0x74) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar2 = (code *)swi(0x29);
  pcVar5 = (char *)(*pcVar2)(unaff_EBP + -0x7c);
  if (!bVar6 && !bVar7) {
    return pcVar5;
  }
  cVar3 = (char)pcVar5;
  pcVar5[in_GS_OFFSET] = pcVar5[in_GS_OFFSET] + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar2 = (code *)swi(3);
  pcVar5 = (char *)(*pcVar2)();
  return pcVar5;
}



void Unwind_00f09205(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x50);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f0920d(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x5c);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f09215(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar1,unaff_EBP + -0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00f0921d(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar7;
  bool bVar8;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x5c);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 8);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 8) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2);
  if (!bVar7 && !bVar8) {
    return pcVar6;
  }
  cVar4 = (char)pcVar6;
  pcVar6[in_GS_OFFSET] = pcVar6[in_GS_OFFSET] + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar3 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar3)();
  return pcVar6;
}



void Unwind_00f09260(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    puStack_c = &DAT_00ee8ff8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09279(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f09281(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x18);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f09289(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee8ff8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x38,unaff_EBP + -0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09291(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
    puStack_c = &DAT_00ee8ff8;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b10(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f092aa(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x68) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x68) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f092b5(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -100);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f092bd(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f092c5(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x88);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f092d0(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  undefined1 *unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  puVar5 = unaff_EBP + -0x88;
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(puVar5[8]) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      puVar5[8] = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(puVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined1 **)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    puVar5 = (undefined1 *)(extraout_ECX + 4);
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = puVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f092db(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f092e3(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x60);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f092eb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar1,unaff_EBP + -0x38);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f092f3(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  iVar5 = *(int *)(unaff_EBP + -0x60);
  do {
    puStack_c = &DAT_00ee3200;
    iStack_10 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    switch(*(undefined1 *)(iVar5 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined1 *)(iVar5 + 8) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    puStack_4 = unaff_EBP;
    pcVar4 = (char *)(*pcVar2)(iVar5);
    cVar3 = (char)pcVar4;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    *pcVar4 = *pcVar4 + cVar3;
    unaff_EBP = puStack_4 + -4;
    puVar6 = puStack_4 + -4;
    *(undefined1 ***)(puStack_4 + -4) = &puStack_4;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    *(undefined **)(puStack_4 + -0xc) = &DAT_00ee3230;
    *(int *)(puStack_4 + -0x10) = *unaff_FS_OFFSET;
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(int *)(puStack_4 + -0x18) = unaff_ESI;
    puVar7 = puStack_4 + -0x1c;
    *(uint *)(puStack_4 + -0x1c) = DAT_0128fd40 ^ (uint)(puStack_4 + -4);
    *unaff_FS_OFFSET = (int)(puStack_4 + -0x10);
    *(int *)(puStack_4 + -0x14) = extraout_ECX;
    *(undefined4 *)(puStack_4 + -8) = 0xffffffff;
    iVar5 = extraout_ECX + 4;
    switch(*(undefined1 *)(extraout_ECX + 0x10)) {
    case 0:
    case 2:
    case 3:
      *(undefined1 *)(extraout_ECX + 0x10) = 0;
      *unaff_FS_OFFSET = *(int *)(puStack_4 + -0x10);
      return;
    case 1:
      unaff_ESI = iVar5;
      break;
    default:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      *(undefined1 **)(puVar7 + -4) = puVar6;
      puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
      *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while( true );
}



void Unwind_00f09330(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffe;
    puStack_c = &DAT_00ee9038;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar1,unaff_EBP + -0x8c,unaff_EBP + -0x94);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0934c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x8c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09357(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0935f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9038;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x40,unaff_EBP + -0x48);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09367(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffd;
    puStack_c = &DAT_00ee9038;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658c50(uVar1,unaff_EBP + -100,unaff_EBP + -0x6c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09380(void)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  char extraout_CL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar4 = *(int *)(unaff_EBP + -0x9c);
  switch(*(undefined1 *)(iVar4 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x0065980c;
  case 1:
    func_0x00658b10();
code_r0x0065980c:
    *(undefined1 *)(iVar4 + 0x10) = 0;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(iVar4 + 4);
    *(char *)(in_GS_OFFSET + unaff_EDI) = *(char *)(in_GS_OFFSET + unaff_EDI) + (char)(uVar3 | 0x98)
    ;
    iVar4 = (int)(short)(uVar3 | 0x98);
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar1 = (char *)(in_GS_OFFSET + iVar4 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + extraout_CL;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0938e(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x98);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f09399(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -100);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f093a1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f093ac(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(unaff_EBP + -0xb4)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar2);
code_r0x00658c98:
    *(undefined1 *)(unaff_EBP + -0xb4) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



void Unwind_00f093b7(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -100);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f093bf(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x74);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f093c7(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar1,unaff_EBP + -0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f093cf(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x74);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x10)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto code_r0x00658c98;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658c98:
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f09410(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffe;
    puStack_c = &DAT_00ee9078;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar1,unaff_EBP + -100,unaff_EBP + -0x6c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09429(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -100);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09431(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f09439(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee9078;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x40,unaff_EBP + -0x48);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09441(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffd;
    puStack_c = &DAT_00ee9078;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x00658b80(uVar1,unaff_EBP + -100,unaff_EBP + -0x6c);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0945a(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  char extraout_DL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x78);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x0065985c;
  case 1:
    func_0x00658b10();
code_r0x0065985c:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    sVar4 = (*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + unaff_EDI + -0x68);
    *pcVar1 = *pcVar1 + extraout_DL;
    pcVar1 = (char *)(in_GS_OFFSET + sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar1 = (char *)(sVar4 + 0x65 + unaff_EBX * 4);
    *pcVar1 = *pcVar1 + (char)unaff_EBX;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f09465(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x74);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0946d(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -100);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09475(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0xa0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09480(void)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(unaff_EBP + -0x90)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658bc8:
    *(undefined1 *)(unaff_EBP + -0x90) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void Unwind_00f0948b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -100);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09493(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x70);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f0949b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar1,unaff_EBP + -0x40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f094a3(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x70);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x10)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar1 = (uint *)(unaff_EBX + -0x7437ff9b);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00f094e0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x1b4) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x1b8) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x1b8) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f094eb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x1b4) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x1b8) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x1b8) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f094f6(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0950f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09528(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffb;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09541(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x118) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x114), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09549(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x80) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x84) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x84) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09554(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0955c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0c5eb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006e8dd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09567(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x80) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x84) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x84) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09572(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0957a(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09582(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0958a(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09592(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f095d0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x1c4) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x1c8) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x1c8) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f095db(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x1c4) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x1c8) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x1c8) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f095e6(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f095ff(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09618(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffb;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
      _guard_check_icall(unaff_EBP + -0x30,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09631(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00efd984;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x118) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x114), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09639(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x88) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x8c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x8c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09644(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0964c(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0c63b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006e8dd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09657(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f006dc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x88) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x8c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x8c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006df8f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09662(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0966a(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09672(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x40);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0967a(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09682(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f096c0(void)

{
  undefined1 *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f0b524;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006bfa00();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x20);
  if (_Memory != (undefined1 *)0x0) {
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44();
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar4 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4), iVar1 != 0)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0xd4];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0070f159;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0070f159:
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f096c8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x58,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f096d3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f096db(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
      _guard_check_icall(unaff_EBP + -0x4c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f096f4(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f096ff(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09707(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
    _guard_check_icall(unaff_EBP + -0x4c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0970f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 200) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc4);
    _guard_check_icall(iVar2 + 0xb8,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xac) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xa8);
    _guard_check_icall(iVar2 + 0x9c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09740(void)

{
  undefined1 *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f0b411;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006c7940();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x30);
  if (_Memory != (undefined1 *)0x0) {
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44();
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar4 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4), iVar1 != 0)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0x174];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0070eec9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0070eec9:
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09748(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f01668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x5c,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09753(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0975b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
      _guard_check_icall(unaff_EBP + -0x58,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f09774(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
      _guard_check_icall(unaff_EBP + -0x58,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0978d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09798(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb3fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f097a0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
    _guard_check_icall(unaff_EBP + -0x58,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f097a8(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x168) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x164);
    _guard_check_icall(iVar2 + 0x158,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x14c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x148);
    _guard_check_icall(iVar2 + 0x13c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f097f0(void)

{
  undefined1 *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f0b301;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006c7940();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x30);
  if (_Memory != (undefined1 *)0x0) {
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44();
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar4 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4), iVar1 != 0)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0x17c];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0070ec39;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0070ec39:
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f097f8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00f01628;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 100,iVar1 + 0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f09803(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  puStack_c = &DAT_00ee06ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0980b(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x4c);
      _guard_check_icall(unaff_EBP + -0x58,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
