  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00efffa6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 0x48,iVar1 + 0x1c,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05748(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x114) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x128) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x124);
      _guard_check_icall(iVar2 + 0x118,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x114) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05756(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f0429f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x114) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x128) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x124);
      _guard_check_icall(iVar2 + 0x118,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x114) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0575e(void)

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
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05766(void)

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
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0576e(void)

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



void Unwind_00f05779(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x13c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05787(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x1c) + 0x148) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x1c) + 0x144), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f057c0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
      _guard_check_icall(unaff_EBP + -0x44,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f057d9(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
      _guard_check_icall(unaff_EBP + -0x44,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f057f2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef8c13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar2,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f057fd(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00efff5e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar2,iVar1 + 0x20,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05808(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x1a8) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x1bc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1b8);
      _guard_check_icall(iVar2 + 0x1ac,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x1a8) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05816(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f04317;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x1a8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x1bc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1b8);
      _guard_check_icall(iVar2 + 0x1ac,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x1a8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006ba870();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0581e(void)

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
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05826(void)

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
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x38);
    _guard_check_icall(unaff_EBP + -0x44,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0582e(void)

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



void Unwind_00f05839(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x1d4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05847(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x1c) + 0x1e0) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x1c) + 0x1dc), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f05880(void)

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
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x24);
    _guard_check_icall(unaff_EBP + -0x30,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05888(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    puStack_c = &DAT_00efaec5;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006cf020(uVar1,unaff_EBP + -0x1a8,unaff_EBP + -0x1a8);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f058a4(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8a2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar1,unaff_EBP + -0x1a8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058af(void)

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
  if (*(int *)(unaff_EBP + -0x74) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
    _guard_check_icall(unaff_EBP + -0x84,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058ba(void)

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
  if (*(int *)(unaff_EBP + -0x74) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
    _guard_check_icall(unaff_EBP + -0x84,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058c5(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x44);
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



void Unwind_00f058cd(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058d5(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058dd(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058e5(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058ed(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8a2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar1,unaff_EBP + -0x2c8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f058f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efaec5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar1,unaff_EBP + -0x2c8,unaff_EBP + -0x2c8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05903(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8a2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar1,unaff_EBP + -0x2c8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0590e(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ef8d96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xe0) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xf4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf0);
      _guard_check_icall(iVar2 + 0xe4,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xe0) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bed90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05916(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0591e(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05926(void)

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
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x5c);
    _guard_check_icall(unaff_EBP + -0x68,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0592e(void)

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



void Unwind_00f05936(void)

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



void Unwind_00f0593e(void)

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
  if (*(int *)(unaff_EBP + -0x74) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x78);
    _guard_check_icall(unaff_EBP + -0x84,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05949(void)

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



void Unwind_00f05951(void)

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



void Unwind_00f05959(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef8a2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar1,unaff_EBP + -0x1a8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05964(void)

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
  puStack_c = &DAT_00ef8d96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xe0) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xf4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf0);
      _guard_check_icall(iVar2 + 0xe4,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xe0) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bed90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0596c(void)

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



void Unwind_00f05974(void)

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



void Unwind_00f0597c(void)

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



void Unwind_00f05984(void)

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



void Unwind_00f059c0(void)

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
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x50);
    _guard_check_icall(unaff_EBP + -0x5c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f059c8(void)

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
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x50);
    _guard_check_icall(unaff_EBP + -0x5c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f059d0(void)

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



void Unwind_00f059d8(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f059e0(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f059e8(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f059f0(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f059f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar1,unaff_EBP + -0x15c,unaff_EBP + -0x184);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a03(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f04220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar1,unaff_EBP + -0x15c,unaff_EBP + -0x184,unaff_EBP + -0x184);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a0e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar1,unaff_EBP + -0x15c,unaff_EBP + -0x184);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a19(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00ef480d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a24(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ef48cb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a36a0(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a2c(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a34(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a3c(void)

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
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x34);
    _guard_check_icall(unaff_EBP + -0x40,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a44(void)

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



void Unwind_00f05a4c(void)

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



void Unwind_00f05a54(void)

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
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x50);
    _guard_check_icall(unaff_EBP + -0x5c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05a5c(void)

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



void Unwind_00f05a64(void)

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



void Unwind_00f05aa0(void)

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
  puStack_c = &DAT_00f02df0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0xe0) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006a36a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0xe4);
  if (_Memory != (undefined1 *)0x0) {
    piVar4 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar4 + 0x18) == '\0') {
      func_0x008abb44();
      piVar4 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar4 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar4 + 0xc4) + 4), iVar1 != 0)) {
      iVar3 = 4;
      do {
        if (*(int *)(iVar1 + iVar3 * 4) == 0) {
          *_Memory = _Memory[0xcc];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_006f0789;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_006f0789:
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05aab(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xdc);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x84);
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



void Unwind_00f05ab6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1c9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xd8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05ac1(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f00715;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xd8,unaff_EBP + -0xd8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05acc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1c9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar1,unaff_EBP + -0xd8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05ad7(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xdc);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x84);
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



void Unwind_00f05b20(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efc9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bec40(uVar2,iVar1 + 0x2c,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05b2b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00f05b33(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee0e55;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05b3b(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee0e1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05b43(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x11c) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x130) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 300);
      _guard_check_icall(iVar2 + 0x120,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x11c) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05b51(void)

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
  puStack_c = &DAT_00f01761;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x11c) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x130) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 300);
      _guard_check_icall(iVar2 + 0x120,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x11c) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006bec40();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05b59(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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



void Unwind_00f05b64(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x144);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05b72(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0x150) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0x14c), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f05bb0(void)

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
  func_0x00658e30(uVar1,unaff_EBP + -0x2c,unaff_EBP + -0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05bb8(void)

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
  func_0x00658e30(uVar1,unaff_EBP + -0x44,unaff_EBP + -0x4c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05bc0(void)

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
  func_0x00658e30(uVar1,unaff_EBP + -0x74);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05bc8(void)

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
  
  iStack_14 = unaff_EBP + -0x74;
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar5 = SBORROW4((uint)*(byte *)(unaff_EBP + -0x6c),4);
  switch((uint)*(byte *)(unaff_EBP + -0x6c)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(unaff_EBP + -0x6c) = 0;
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



void Unwind_00f05bd0(void)

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
  func_0x00658e30(uVar1,unaff_EBP + -0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05bd8(void)

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
  
  iStack_14 = *(int *)(unaff_EBP + -0x58);
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



void Unwind_00f05be0(void)

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
  func_0x00658e30(uVar1,unaff_EBP + -0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05be8(void)

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



void Unwind_00f05c20(void)

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



void Unwind_00f05c28(void)

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



void Unwind_00f05c60(void)

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
  func_0x00658b10(uVar1,unaff_EBP + -0x2c,unaff_EBP + -0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05c68(void)

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
  func_0x00658b10(uVar1,unaff_EBP + -0x44,unaff_EBP + -0x4c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05c70(void)

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
  func_0x00658b10(uVar1,unaff_EBP + -0x74);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f05c78(void)

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
  
  puVar5 = unaff_EBP + -0x74;
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



void Unwind_00f05c80(void)

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
  func_0x00658b10(uVar1,unaff_EBP + -0x44);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f05c88(void)

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
  
  iVar5 = *(int *)(unaff_EBP + -0x58);
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



void Unwind_00f05c90(void)

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
  func_0x00658b10(uVar1,unaff_EBP + -0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00f05c98(void)

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



void Unwind_00f05cd0(void)

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
  func_0x00658c50(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05cd8(void)

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
  func_0x00658c50(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05ce0(void)

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



void Unwind_00f05ceb(void)

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
  switch(*(undefined1 *)(unaff_EBP + -0x7c)) {
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
    *(undefined1 *)(unaff_EBP + -0x7c) = 0;
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



void Unwind_00f05cf6(void)

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
  func_0x00658c50(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05cfe(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x68);
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



void Unwind_00f05d06(void)

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
  func_0x00658c50(uVar1,unaff_EBP + -0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05d0e(void)

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



void Unwind_00f05d50(void)

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
  func_0x00658b80(uVar1,unaff_EBP + -0x34,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05d58(void)

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
  func_0x00658b80(uVar1,unaff_EBP + -0x54,unaff_EBP + -0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05d60(void)

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
  func_0x00658b80(uVar1,unaff_EBP + -0x8c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05d6b(void)

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
  switch(*(undefined1 *)(unaff_EBP + -0x7c)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar3);
code_r0x00658bc8:
    *(undefined1 *)(unaff_EBP + -0x7c) = 0;
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



void Unwind_00f05d76(void)

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
  func_0x00658b80(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05d7e(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x68);
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



void Unwind_00f05d86(void)

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
  func_0x00658b80(uVar1,unaff_EBP + -0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05d8e(void)

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



void Unwind_00f05dd0(void)

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



void Unwind_00f05dd8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x98);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05de6(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0xa4) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0xa0), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f05df4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



void Unwind_00f05e30(void)

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



void Unwind_00f05e38(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x138);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05e46(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0x144) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0x140), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f05e54(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



void Unwind_00f05e90(void)

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



void Unwind_00f05e98(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x140);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05ea6(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0x14c) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0x148), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f05eb4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



void Unwind_00f05ef0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef8a5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05efb(void)

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
  puStack_c = &DAT_00ef8e06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xe0) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xf4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf0);
      _guard_check_icall(iVar2 + 0xe4,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xe0) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006becd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05f30(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f016ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x2c,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05f3b(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x70) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x84) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x80);
      _guard_check_icall(iVar2 + 0x74,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x70) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05f46(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee0e1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05f4e(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee0e55;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05f56(void)

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



void Unwind_00f05f5e(void)

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



void Unwind_00f05f66(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00efa7a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006bfa00(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05f71(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef4c29;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if (*(int *)(iVar5 + 0x40) != 0) {
    func_0x008ab812(*(int *)(iVar5 + 0x40),0xa0,uVar6);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  piVar3 = *(int **)(iVar5 + 0x3c);
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
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    pcVar4 = (code *)**(undefined4 **)(iVar5 + 0x28);
    _guard_check_icall(iVar5 + 0x1c);
    (*pcVar4)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05fa0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f01668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x30,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05fab(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x110) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x124) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x120);
      _guard_check_icall(iVar2 + 0x114,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x110) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05fb9(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee0e1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05fc1(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee0e55;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05fc9(void)

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



void Unwind_00f05fd1(void)

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



void Unwind_00f05fd9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef6e3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f05fe4(void)

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
  puStack_c = &DAT_00ef6ea3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006b4cf0(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06010(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f01628;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x38,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0601b(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x118) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 300) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x128);
      _guard_check_icall(iVar2 + 0x11c,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x118) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06029(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee0e1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06031(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee0e55;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*pcVar2 != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      pcVar1 = (code *)**(undefined4 **)(pcVar2 + 0x10);
      _guard_check_icall(pcVar2 + 4,uVar3);
      (*pcVar1)();
    }
    *pcVar2 = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06039(void)

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



void Unwind_00f06041(void)

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



void Unwind_00f06049(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef6e3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,iVar1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06054(void)

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
  puStack_c = &DAT_00ef6ea3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006b4cf0(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x28);
    _guard_check_icall(iVar2 + 0x1c);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06080(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05f08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar1,unaff_EBP + -0x158,unaff_EBP + -0x180);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0608b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f10af3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar1,unaff_EBP + -0x158,unaff_EBP + -0x180,unaff_EBP + -0x198);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06096(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f05f08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar1,unaff_EBP + -0x158,unaff_EBP + -0x180);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f060a1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ef8a5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar2,iVar1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f060ac(void)

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
  puStack_c = &DAT_00ef8e06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xe0) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xf4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf0);
      _guard_check_icall(iVar2 + 0xe4,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xe0) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006becd0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f060e0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f0c6b1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x50) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x40);
      _guard_check_icall(unaff_EBP + -0x4c,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x50) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006cf0c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f060eb(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar1,unaff_EBP + -0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f060f3(void)

{
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + -0x1c) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x20) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f060fb(void)

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



void Unwind_00f06130(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef8a2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06138(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efaec5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf020(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06140(void)

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



void Unwind_00f06148(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 300) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x128);
    _guard_check_icall(iVar2 + 0x11c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06180(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef8a5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06188(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efae85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf0c0(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06190(void)

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



void Unwind_00f06198(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 300) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x128);
    _guard_check_icall(iVar2 + 0x11c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f061d0(void)

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



void Unwind_00f061d8(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efae45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf160(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f061e0(void)

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



void Unwind_00f061e8(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x144) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x140);
    _guard_check_icall(iVar2 + 0x134,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06220(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef6e3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06228(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00efa835;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006c7940(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06230(void)

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



void Unwind_00f06238(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xfc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xf8);
    _guard_check_icall(iVar2 + 0xec,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06270(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x10) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x14) = 0xffffffff;
  }
  return;
}



void Unwind_00f06278(void)

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



void Unwind_00f06283(void)

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



void Unwind_00f0628e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    puStack_c = &DAT_00f066fc;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    if ((*(char *)(unaff_EBP + -0xd0) != '\0') &&
       (*(undefined1 **)(unaff_EBP + -0xd4) != (undefined1 *)0x0)) {
      **(undefined1 **)(unaff_EBP + -0xd4) = 0;
    }
    uStack_8 = 1;
    func_0x0068de80(uVar1);
    uStack_8 = 0xffffffff;
    func_0x006f4630();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f062aa(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f03fd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0xd0) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xd4) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xd4) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006f4630();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f062b5(void)

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



void Unwind_00f062bd(void)

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



void Unwind_00f062c8(void)

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



void Unwind_00f062d3(void)

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



void Unwind_00f062db(void)

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



void Unwind_00f062e3(void)

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



void Unwind_00f062eb(void)

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



void Unwind_00f062f3(void)

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



void Unwind_00f062fb(void)

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



void Unwind_00f06303(void)

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



void Unwind_00f0630b(void)

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



void Unwind_00f06313(void)

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



void Unwind_00f0631b(void)

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



void Unwind_00f06323(void)

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



void Unwind_00f0632e(void)

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



void Unwind_00f06336(void)

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



void Unwind_00f0633e(void)

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



void Unwind_00f06346(void)

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



void Unwind_00f0634e(void)

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



void Unwind_00f06356(void)

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



void Unwind_00f0635e(void)

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



void Unwind_00f06390(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x10) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x14) = 0xffffffff;
  }
  return;
}



void Unwind_00f06398(void)

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



void Unwind_00f063a3(void)

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



void Unwind_00f063ae(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    puStack_c = &DAT_00f0675c;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    if ((*(char *)(unaff_EBP + -0xd0) != '\0') &&
       (*(undefined1 **)(unaff_EBP + -0xd4) != (undefined1 *)0x0)) {
      **(undefined1 **)(unaff_EBP + -0xd4) = 0;
    }
    uStack_8 = 1;
    func_0x0068de80(uVar1);
    uStack_8 = 0xffffffff;
    func_0x006f4570();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f063ca(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f03f74;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0xd0) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xd4) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xd4) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006f4570();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f063d5(void)

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



void Unwind_00f063dd(void)

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



void Unwind_00f063e8(void)

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



void Unwind_00f063f3(void)

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



void Unwind_00f063fb(void)

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



void Unwind_00f06403(void)

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



void Unwind_00f0640b(void)

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



void Unwind_00f06413(void)

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



void Unwind_00f0641b(void)

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



void Unwind_00f06423(void)

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



void Unwind_00f0642b(void)

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



void Unwind_00f06433(void)

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



void Unwind_00f0643b(void)

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



void Unwind_00f06443(void)

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



void Unwind_00f0644e(void)

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



void Unwind_00f06456(void)

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



void Unwind_00f0645e(void)

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



void Unwind_00f06466(void)

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



void Unwind_00f0646e(void)

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



void Unwind_00f06476(void)

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



void Unwind_00f0647e(void)

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



void Unwind_00f064b0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef8d2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006cf160(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f064e0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00f0678d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006c9e70(uVar1,unaff_EBP + -0x138);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f064fc(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef5da4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x104) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x100), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4350();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06504(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef770c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x34) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x38) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x38) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4350();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0650f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef770c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x34) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x38) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x38) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4350();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06540(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00f067bd;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006c9de0(uVar1,unaff_EBP + -0x168);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0655c(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef5e04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x130) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 300), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4400();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06564(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef76ac;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x38) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x3c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x3c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4400();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0656f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef76ac;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x38) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x3c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x3c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4400();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f065a0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00f067ed;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006c9d50(uVar1,unaff_EBP + -0x158);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f065bc(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef5e64;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x120) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x11c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c44b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f065c4(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef764c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x38) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x3c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x3c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c44b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f065cf(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef764c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x38) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x3c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x3c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c44b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06600(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00f0681d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006c9cc0(uVar1,unaff_EBP + -0xb8);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0661c(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef5ebe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x80) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x7c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4560();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06624(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef75e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x38) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x3c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x3c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4560();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0662f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef75e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x38) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x3c) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x3c) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4560();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06660(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00f0684d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006c9c30(uVar1,unaff_EBP + -0x1d0);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f0667c(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef5f14;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x120) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x11c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4600();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06684(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef758c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0xb0) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xb4) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xb4) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4600();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0668f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef758c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0xb0) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0xb4) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0xb4) = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006c4600();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f066c0(void)

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
  puStack_c = &DAT_00f03fd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x1e0) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x1dc), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006f4630();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f066c8(void)

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
  puStack_c = &DAT_00f04317;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x1a8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x1bc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1b8);
      _guard_check_icall(iVar2 + 0x1ac,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x1a8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006ba870();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f066d0(void)

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
  func_0x0068de80(uVar2,iVar1 + 0x1d4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f066de(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x1e0) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x1dc), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f066ec(void)

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



void Unwind_00f06720(void)

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
  puStack_c = &DAT_00f03f74;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x148) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x144), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006f4570();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06728(void)

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
  puStack_c = &DAT_00f0429f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x114) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x128) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x124);
      _guard_check_icall(iVar2 + 0x118,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x114) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06730(void)

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
  func_0x0068de80(uVar2,iVar1 + 0x13c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0673e(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x148) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x144), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f0674c(void)

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



void Unwind_00f06780(void)

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
  puStack_c = &DAT_00ef770c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x104) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x100), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4350();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f067b0(void)

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
  puStack_c = &DAT_00ef76ac;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x130) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 300), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4400();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f067e0(void)

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
  puStack_c = &DAT_00ef764c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x120) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x11c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c44b0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06810(void)

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
  puStack_c = &DAT_00ef75e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x80) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x7c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4560();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06840(void)

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
  puStack_c = &DAT_00ef758c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x120) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x11c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 1;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006c4600();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06870(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 8;
  puStack_c = &DAT_00effffb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0687b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef8c13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06883(void)

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
  piVar2 = *(int **)(iVar4 + 0x148);
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



void Unwind_00f068c0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  iVar3 = iVar1 + 4;
  puStack_c = &DAT_00f00083;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 0x30,iVar3,iVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f068cb(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef8b9b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 0x2c,iVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f068d3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ef39e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f068de(void)

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



void Unwind_00f06910(void)

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
  puStack_c = &DAT_00f028a3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x108) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x104);
    _guard_check_icall(iVar2 + 0xf8,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006ba870();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0691b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ef8cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006ba870(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06923(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x100) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xfc);
    _guard_check_icall(iVar2 + 0xf0,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06931(void)

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



void Unwind_00f06939(void)

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



void Unwind_00f06941(void)

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



void Unwind_00f06970(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00f02850;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006529c0(uVar1,iVar2,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f0697b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee66a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006529c0(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06983(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3e20;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006529c0(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f0698b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00ee1828;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x40);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f069c0(void)

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
  puStack_c = &DAT_00f0280e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x10c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x108);
    _guard_check_icall(iVar2 + 0xfc,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f069f0(void)

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
  puStack_c = &DAT_00f027ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0x11c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x118);
    _guard_check_icall(iVar2 + 0x10c,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06a20(void)

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
  puStack_c = &DAT_00f0274e;
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
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06a50(void)

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



void Unwind_00f06a5b(void)

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
  puStack_c = &DAT_00efc884;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x208) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x204), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006dbf00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06a66(void)

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
  if (*(int *)(iVar2 + 0x244) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x240);
    _guard_check_icall(iVar2 + 0x234,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x228) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x224);
    _guard_check_icall(iVar2 + 0x218,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06a74(void)

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
  puStack_c = &DAT_00efca5c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 400) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x1a4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1a0);
      _guard_check_icall(iVar2 + 0x194,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 400) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006ba870();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06a7c(void)

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
  func_0x0068de80(uVar2,iVar1 + 0x1bc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06a8a(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x1c8) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x1c4), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f06a98(void)

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



void Unwind_00f06ad0(void)

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
  puStack_c = &DAT_00f06aa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x244);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x208) != '\0') && (*(undefined1 **)(iVar1 + 0x204) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x204) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006dbf00();
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
    *(undefined4 *)(unaff_EBP + -0x244) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x248);
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
          *_Memory = _Memory[0x250];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_006fff79;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_006fff79:
    *(undefined4 *)(unaff_EBP + -0x248) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06adb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x250);
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



void Unwind_00f06ae6(void)

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



void Unwind_00f06aee(void)

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



void Unwind_00f06af6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -600);
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



void Unwind_00f06b01(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x254);
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



void Unwind_00f06b0c(void)

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



void Unwind_00f06b14(void)

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



void Unwind_00f06b1c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc884;
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
  func_0x006dbf00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06b27(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efe31c;
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
  func_0x006dbf00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06b32(void)

{
  return;
}



void Unwind_00f06b70(void)

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



void Unwind_00f06b7b(void)

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
  puStack_c = &DAT_00efc8e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x174) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x170), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006dbfb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06b86(void)

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
  if (*(int *)(iVar2 + 0x1ac) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1a8);
    _guard_check_icall(iVar2 + 0x19c,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 400) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x18c);
    _guard_check_icall(iVar2 + 0x180,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06b94(void)

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
  puStack_c = &DAT_00efcad4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x104) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x118) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x114);
      _guard_check_icall(iVar2 + 0x108,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x104) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06b9c(void)

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
  func_0x0068de80(uVar2,iVar1 + 300);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06baa(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x138) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x134), puVar1 != (undefined1 *)0x0))
  {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f06bb8(void)

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



void Unwind_00f06bf0(void)

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
  puStack_c = &DAT_00f06bc8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x1b4);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x174) != '\0') && (*(undefined1 **)(iVar1 + 0x170) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x170) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006dbfb0();
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
    *(undefined4 *)(unaff_EBP + -0x1b4) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1b8);
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
          *_Memory = _Memory[0x1b8];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00700259;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00700259:
    *(undefined4 *)(unaff_EBP + -0x1b8) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06bfb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c0);
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



void Unwind_00f06c06(void)

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



void Unwind_00f06c0e(void)

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



void Unwind_00f06c16(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c8);
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



void Unwind_00f06c21(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c4);
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



void Unwind_00f06c2c(void)

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



void Unwind_00f06c34(void)

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



void Unwind_00f06c3c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc8e4;
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
  func_0x006dbfb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06c47(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efe2bc;
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
  func_0x006dbfb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06c52(void)

{
  return;
}



void Unwind_00f06c90(void)

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



void Unwind_00f06c9b(void)

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
  puStack_c = &DAT_00efc944;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar2 + 0x170) != '\0') &&
     (puVar1 = *(undefined1 **)(iVar2 + 0x16c), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar3);
  uStack_8 = 0xffffffff;
  func_0x006dc060();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06ca6(void)

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
  if (*(int *)(iVar2 + 0x1a8) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x1a4);
    _guard_check_icall(iVar2 + 0x198,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x18c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x188);
    _guard_check_icall(iVar2 + 0x17c,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06cb4(void)

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
  puStack_c = &DAT_00efcb54;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xfc) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x110) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x10c);
      _guard_check_icall(iVar2 + 0x100,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xfc) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06cbc(void)

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
  func_0x0068de80(uVar2,iVar1 + 0x124);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06cca(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x130) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 300), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00f06cd8(void)

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



void Unwind_00f06d10(void)

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
  puStack_c = &DAT_00f06ce8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x1ac);
  if (iVar1 != 0) {
    iStack_8 = 1;
    func_0x0065e600(uVar3);
    if ((*(char *)(iVar1 + 0x170) != '\0') && (*(undefined1 **)(iVar1 + 0x16c) != (undefined1 *)0x0)
       ) {
      **(undefined1 **)(iVar1 + 0x16c) = 0;
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 3;
    func_0x0068de80();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x006dc060();
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
    *(undefined4 *)(unaff_EBP + -0x1ac) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1b0);
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
          *_Memory = _Memory[0x1b4];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00700529;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00700529:
    *(undefined4 *)(unaff_EBP + -0x1b0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06d1b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1b8);
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



void Unwind_00f06d26(void)

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



void Unwind_00f06d2e(void)

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



void Unwind_00f06d36(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c0);
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



void Unwind_00f06d41(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1bc);
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



void Unwind_00f06d4c(void)

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



void Unwind_00f06d54(void)

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



void Unwind_00f06d5c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00efc944;
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
  func_0x006dc060();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f06d67(void)

{
