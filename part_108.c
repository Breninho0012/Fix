  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1460;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef131b(void)

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
  puStack_c = &DAT_00eed953;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1323(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  puStack_c = &DAT_00ef12ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    func_0x0069a8f0(iVar1,uVar2,piVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef132e(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcb8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1339(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0x13c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x118),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x13c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1347(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x848);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00ef1355(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x878);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1363(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x87c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1371(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x880);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef137f(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x884);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef138d(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x888);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef139b(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x88c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef13a9(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x890);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef13b7(void)

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
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c0) + 4);
  _guard_check_icall(iVar2 + 0x8a0,uVar3);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef13c5(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00ef13cd(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edcd9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if ((char)piVar2[4] != '\0') {
    func_0x006364a0(*piVar2 + 0x14,piVar2 + 5,0xffffffff,uVar3);
    *(undefined1 *)(piVar2 + 4) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (piVar2[0xe] != 0) {
    pcVar1 = *(code **)piVar2[0xd];
    _guard_check_icall(piVar2 + 10);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x004694a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef13d5(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x18) != 0) {
    func_0x0069a8f0(**(int **)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00ef13dd(void)

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
  puStack_c = &DAT_00eee4e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef13e8(void)

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
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef13f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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
  return;
}



void Unwind_00ef13fb(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1403(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef140b(void)

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



void Unwind_00ef1440(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1448(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1450(void)

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



void Unwind_00ef1480(void)

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
  puStack_c = &DAT_00ee0d8e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x14) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
      _guard_check_icall(iVar2 + 0x18,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x14) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1488(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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
  return;
}



void Unwind_00ef1493(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x40);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef14c0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x20) + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
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
  return;
}



int * Unwind_00ef14c8(void)

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
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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



int * Unwind_00ef14d3(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ebc668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0xc);
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



void Unwind_00ef14de(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef14e6(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 4;
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef14f1(void)

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



void Unwind_00ef14f9(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x28);
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



void Unwind_00ef1501(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x24);
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



void Unwind_00ef1509(void)

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
  if (*(char *)(iVar2 + 0x14) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
      _guard_check_icall(iVar2 + 0x18,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x14) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1540(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x40);
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



void Unwind_00ef1548(void)

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
  puStack_c = &DAT_00ee0d8e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x14) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
      _guard_check_icall(iVar2 + 0x18,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x14) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1550(void)

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
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x40);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef155b(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
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
  return;
}



void Unwind_00ef1590(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef161e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00648180(uVar1);
  uStack_8 = 2;
  func_0x006a90f0();
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1598(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef15a3(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edf38f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 3;
  iVar1 = *(int *)(iVar2 + 0xbc);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xc4) - iVar1,uVar3);
    *(int *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
  }
  iStack_8._0_1_ = 2;
  iVar1 = *(int *)(iVar2 + 0xa8);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xb0) - iVar1,uVar3);
    *(int *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
  }
  iStack_8._0_1_ = 1;
  func_0x0064b700();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0064b700();
  iStack_8 = 0xffffffff;
  func_0x00647b80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef15ae(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef15b6(void)

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



void Unwind_00ef15f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef16b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a90f0(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0068de80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef15fb(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edf38f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 3;
  iVar1 = *(int *)(iVar2 + 0xbc);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xc4) - iVar1,uVar3);
    *(int *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
  }
  iStack_8._0_1_ = 2;
  iVar1 = *(int *)(iVar2 + 0xa8);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xb0) - iVar1,uVar3);
    *(int *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
  }
  iStack_8._0_1_ = 1;
  func_0x0064b700();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0064b700();
  iStack_8 = 0xffffffff;
  func_0x00647b80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1606(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef160e(void)

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



void Unwind_00ef1640(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eacca0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      piVar4[1] = 0;
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    pcVar3 = *(code **)(iVar1 + 0x18);
    uStack_1c = 0;
    uStack_14 = 0;
    _guard_check_icall(0,iVar1,&uStack_1c,0,uVar5);
    (*pcVar3)();
    iVar1 = *piVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1648(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00edcc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004694a0(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1653(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edce28;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004694a0(uVar2,iVar1 + 0x14,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef165e(void)

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
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x34);
    _guard_check_icall(iVar2 + 0x28,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1669(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edcd9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if ((char)piVar2[4] != '\0') {
    func_0x006364a0(*piVar2 + 0x14,piVar2 + 5,0xffffffff,uVar3);
    *(undefined1 *)(piVar2 + 4) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (piVar2[0xe] != 0) {
    pcVar1 = *(code **)piVar2[0xd];
    _guard_check_icall(piVar2 + 10);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x004694a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef16a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef16a8(void)

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



void Unwind_00ef16e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edbe00;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *(int *)(iVar2 + 0x28);
  if (iVar1 != 0) {
    func_0x008ab37e(iVar1,uVar3,iVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef16e8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edcf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  do {
    if (puVar3 == (undefined4 *)(iVar2 + 0x10)) {
      func_0x00638680(iVar2 + 0x18,0,0);
      func_0x00638680(iVar2 + 0x20,0,0);
      uStack_8 = 0xffffffff;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    puVar1 = (undefined4 *)*puVar3;
    uVar6 = *(ushort *)(puVar3 + 6) + 0x25 + (uint)*(ushort *)((int)puVar3 + 0x1a) & 0xfffffffc;
    puVar5 = puVar3;
    if (0xfff < uVar6) {
      puVar5 = (undefined4 *)puVar3[-1];
      uVar6 = uVar6 + 0x23;
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(puVar5,uVar6,uVar4);
    puVar3 = puVar1;
  } while( true );
}



void Unwind_00ef16f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edbcbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006352d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef16f8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ef1700(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar3 = (undefined4 *)(iVar1 + 0x30);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x44),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef170b(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edbd08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar2 + 0x78);
  uStack_8 = 0;
  if (0xf < *(uint *)(iVar2 + 0x8c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x8c),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1716(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x1c);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00ef171e(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xbc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x98),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xbc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef172c(void)

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



void Unwind_00ef1734(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xe4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xc0),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xe4) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1770(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar2 = *(int *)(unaff_EBP + -0x14);
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
  return;
}



void Unwind_00ef1789(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar2 = *(int *)(unaff_EBP + -0x14);
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
  return;
}



void Unwind_00ef17a2(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar2 = *(int *)(unaff_EBP + -0x14);
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
  return;
}



void Unwind_00ef17e0(void)

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
    puStack_c = &DAT_00ee06a8;
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
  return;
}



void Unwind_00ef17f9(void)

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
  if (*(int *)(unaff_EBP + -0x94) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x98);
    _guard_check_icall(unaff_EBP + -0xa4,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1804(void)

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
  if (*(int *)(unaff_EBP + -0x78) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
    _guard_check_icall(unaff_EBP + -0x88,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef180f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xffffffef;
    puStack_c = &DAT_00ee06a8;
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
  return;
}



void Unwind_00ef1828(void)

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



void Unwind_00ef1830(void)

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



void Unwind_00ef1838(void)

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



void Unwind_00ef1840(void)

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
  if (*(int *)(unaff_EBP + -0x78) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
    _guard_check_icall(unaff_EBP + -0x88,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef184b(void)

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



void Unwind_00ef1853(void)

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



void Unwind_00ef185b(void)

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
  if (*(int *)(unaff_EBP + -0x94) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x98);
    _guard_check_icall(unaff_EBP + -0xa4,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1866(void)

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
  if (*(int *)(unaff_EBP + -0x94) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x98);
    _guard_check_icall(unaff_EBP + -0xa4,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1871(void)

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



void Unwind_00ef1879(void)

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



void Unwind_00ef1881(void)

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



void Unwind_00ef1889(void)

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



void Unwind_00ef18c0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x9c8);
  return;
}



void Unwind_00ef18d2(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::detail::sp_counted_base::vftable;
  return;
}



void Unwind_00ef18da(void)

{
  code *pcVar1;
  char *pcVar2;
  int unaff_EBP;
  
  pcVar2 = (char *)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (*pcVar2 != '\0') {
    pcVar1 = (code *)**(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x18);
    _guard_check_icall(0);
    (*pcVar1)();
    *pcVar2 = '\0';
  }
  return;
}



void Unwind_00ef1910(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x8f8);
  return;
}



void Unwind_00ef1922(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::detail::sp_counted_base::vftable;
  return;
}



void Unwind_00ef192a(void)

{
  code *pcVar1;
  char *pcVar2;
  int unaff_EBP;
  
  pcVar2 = (char *)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (*pcVar2 != '\0') {
    pcVar1 = (code *)**(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x18);
    _guard_check_icall(0);
    (*pcVar1)();
    *pcVar2 = '\0';
  }
  return;
}



void Unwind_00ef1960(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef1bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar2);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1968(void)

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
  puStack_c = &DAT_00ef1d7b;
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
  func_0x006a0530();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef19a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef1bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar2);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef19a8(void)

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
  puStack_c = &DAT_00ef1d7b;
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
  func_0x006a0530();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef19e0(void)

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
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1a10(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x88);
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



void Unwind_00ef1a1b(void)

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
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1a29(void)

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



void Unwind_00ef1a31(void)

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



void Unwind_00ef1a39(void)

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



void Unwind_00ef1a41(void)

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



void Unwind_00ef1a70(void)

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
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x40);
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
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1a7b(void)

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
  func_0x006a36a0(uVar1,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1a86(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0xcc);
  puStack_c = &DAT_00ef1c9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1a94(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0xcc);
  puStack_c = &DAT_00ef24bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xf4) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xe8) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xe4);
      _guard_check_icall(iVar2 + 0xd8,uVar3);
      (*pcVar1)();
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xcc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
    _guard_check_icall(iVar2 + 0xbc,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1aa5(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -200);
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



void Unwind_00ef1ab0(void)

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
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x40);
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
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1af0(void)

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
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x40);
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
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1afb(void)

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
  func_0x006a36a0(uVar1,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1b06(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -200);
  puStack_c = &DAT_00ef1c9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006a36a0(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1b14(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -200);
  puStack_c = &DAT_00ef24bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xf4) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xe8) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xe4);
      _guard_check_icall(iVar2 + 0xd8,uVar3);
      (*pcVar1)();
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xcc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
    _guard_check_icall(iVar2 + 0xbc,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1b25(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xcc);
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



void Unwind_00ef1b30(void)

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
  
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x40);
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
  func_0x006a3730();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1b70(void)

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
  
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x50);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1b7b(void)

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
  
  puStack_c = &DAT_00ef156b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar3 = *(int **)(unaff_EBP + -0x50);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1b86(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x94);
  puStack_c = &DAT_00ef156b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(iVar4 + 0x48);
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



void Unwind_00ef1b94(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x94);
  puStack_c = &DAT_00ef24bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xc0) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xb4) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xb0);
      _guard_check_icall(iVar2 + 0xa4,uVar3);
      (*pcVar1)();
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x98) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x94);
    _guard_check_icall(iVar2 + 0x88,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1be0(void)

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
  puStack_c = &DAT_00ef1d7b;
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
  func_0x006a0530();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1c10(void)

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
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x44);
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



void Unwind_00ef1c1b(void)

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



void Unwind_00ef1c23(void)

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



void Unwind_00ef1c2b(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x1c);
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



void Unwind_00ef1c33(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x58) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x6c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x68);
      _guard_check_icall(iVar2 + 0x5c,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x58) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1c3e(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eef339;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar4 + 0x58) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar4 + 0x6c) != 0) {
      pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x68);
      _guard_check_icall(iVar4 + 0x5c,uVar5);
      (*pcVar2)();
    }
    *(char *)(iVar4 + 0x58) = '\0';
  }
  uStack_8 = 6;
  piVar3 = *(int **)(iVar4 + 0x44);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar2 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1c46(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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
  return;
}



void Unwind_00ef1c51(void)

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
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1c90(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ef1cc0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::detail::sp_counted_base::vftable;
  return;
}



void Unwind_00ef1cc8(void)

{
  code *pcVar1;
  char *pcVar2;
  int unaff_EBP;
  
  pcVar2 = (char *)(*(int *)(unaff_EBP + -0x10) + 0x10);
  if (*pcVar2 != '\0') {
    pcVar1 = (code *)**(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x18);
    _guard_check_icall(0);
    (*pcVar1)();
    *pcVar2 = '\0';
  }
  return;
}



void Unwind_00ef1d00(void)

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
  puStack_c = &DAT_00ee0d8e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x14) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
      _guard_check_icall(iVar2 + 0x18,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x14) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1d08(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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
  return;
}



void Unwind_00ef1d13(void)

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
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x40);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1d40(void)

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
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eee9db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0x48);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  *(undefined ***)(iVar5 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 3;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1d4b(void)

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



void Unwind_00ef1d56(void)

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



void Unwind_00ef1d5e(void)

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



void Unwind_00ef1d66(void)

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



void Unwind_00ef1d6e(void)

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



void Unwind_00ef1da0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    iVar2 = *(int *)(unaff_EBP + -0x18);
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
  return;
}



void Unwind_00ef1db9(void)

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
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1dc1(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1265;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1dc9(void)

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



void Unwind_00ef1dd1(void)

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



void Unwind_00ef1dd9(void)

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



void Unwind_00ef1de1(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1265;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xc4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -200);
    _guard_check_icall(unaff_EBP + -0xd4,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1dec(void)

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
  
  puStack_c = &DAT_00eee9db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x74);
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
  *(undefined ***)(unaff_EBP + -0xb8) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 3;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1df7(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef223b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a0530(uVar2);
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xc4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -200);
    _guard_check_icall(unaff_EBP + -0xd4);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1e02(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef20fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b4cf0(uVar1,unaff_EBP + -0xec);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1e0d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef223b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a0530(uVar2);
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xc4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -200);
    _guard_check_icall(unaff_EBP + -0xd4);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1e18(void)

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
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x28);
    _guard_check_icall(unaff_EBP + -0x34,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1e20(void)

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



void Unwind_00ef1e28(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x48);
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



void Unwind_00ef1e30(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x48);
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



void Unwind_00ef1e60(void)

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



void Unwind_00ef1e79(void)

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



void Unwind_00ef1e92(void)

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
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00eee9db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0x48);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  *(undefined ***)(iVar5 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 3;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1e9d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50);
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



void Unwind_00ef1ea8(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ef1d7b;
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
  func_0x006a0530();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1eb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x50);
  puStack_c = &DAT_00ef1bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar2);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1eb8(void)

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



void Unwind_00ef1ec0(void)

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



void Unwind_00ef1ec8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0xd8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1ed0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xffffffef;
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



void Unwind_00ef1ee9(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xffffffdf;
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



void Unwind_00ef1f02(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -300) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 1;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1f0d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
      _guard_check_icall(unaff_EBP + -0x88,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x8c) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1f18(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef49ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
      _guard_check_icall(unaff_EBP + -0x88,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x8c) = '\0';
  }
  *(undefined ***)(unaff_EBP + -300) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1f23(void)

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



void Unwind_00ef1f2b(void)

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



void Unwind_00ef1f33(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef49ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
      _guard_check_icall(unaff_EBP + -0x88,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x8c) = '\0';
  }
  *(undefined ***)(unaff_EBP + -300) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1f70(void)

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
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
      _guard_check_icall(unaff_EBP + -0x48,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef1f89(void)

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
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00eee9db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0x48);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  *(undefined ***)(iVar5 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 3;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1f94(void)

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



void Unwind_00ef1f9f(void)

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
  puStack_c = &DAT_00ef1d7b;
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
  func_0x006a0530();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1fa7(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ef1bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar2);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1faf(void)

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
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1fb7(void)

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
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1fbf(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0xd8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1fc7(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffff7;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
      _guard_check_icall(unaff_EBP + -0x48,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef1fe0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef19b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -300) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 1;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1feb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
      _guard_check_icall(unaff_EBP + -0x88,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x8c) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef1ff6(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef493e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
      _guard_check_icall(unaff_EBP + -0x88,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x8c) = '\0';
  }
  *(undefined ***)(unaff_EBP + -300) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2001(void)

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
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2009(void)

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
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x3c);
    _guard_check_icall(unaff_EBP + -0x48,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2011(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef493e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x8c) != '\0') {
    uStack_8 = 0;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x7c);
      _guard_check_icall(unaff_EBP + -0x88,uVar2);
      (*pcVar1)();
    }
    *(char *)(unaff_EBP + -0x8c) = '\0';
  }
  *(undefined ***)(unaff_EBP + -300) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x006b3bb0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2050(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_c = &DAT_00eeda80;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x0068de80(uVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef2069(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00ef2071(void)

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
  func_0x0068de80(uVar1,unaff_EBP + -0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2079(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x30) + 4);
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



void Unwind_00ef2084(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00ef20c0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eee989;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar1 + 0x4c) != '\0') && (*(undefined1 **)(iVar1 + 0x48) != (undefined1 *)0x0)) {
    **(undefined1 **)(iVar1 + 0x48) = 0;
  }
  if ((*(char *)(iVar1 + 0x44) != '\0') && (*(undefined1 **)(iVar1 + 0x40) != (undefined1 *)0x0)) {
    **(undefined1 **)(iVar1 + 0x40) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar2);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef20f0(void)

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
  puStack_c = &DAT_00ef223b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x006a0530(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2120(void)

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
  puStack_c = &DAT_00ef229b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x34) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x44);
      _guard_check_icall(iVar2 + 0x38,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x34) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006529c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2128(void)

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
  func_0x0068de80(uVar2,iVar1 + 0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2133(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0x68) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 100), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00ef213e(void)

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



void Unwind_00ef2170(void)

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
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2178(void)

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
  func_0x0068de80(uVar2,iVar1 + 0xe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2186(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 0xec) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0xe8), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00ef2194(void)

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



void Unwind_00ef21d0(void)

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
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2200(void)

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
  puStack_c = &DAT_00ee1265;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef220b(void)

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
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eee9db;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0x78);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar4 = *(code **)(*piVar3 + 8);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  *(undefined ***)(iVar5 + 0x34) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 3;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2216(void)

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



void Unwind_00ef221e(void)

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



void Unwind_00ef2226(void)

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



void Unwind_00ef222e(void)

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



int * Unwind_00ef2260(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee1828;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x2c);
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



void Unwind_00ef226b(void)

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
  if (*(char *)(iVar2 + 0x34) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x44);
      _guard_check_icall(iVar2 + 0x38,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x34) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2276(void)

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



void Unwind_00ef227e(void)

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



void Unwind_00ef2286(void)

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



void Unwind_00ef228e(void)

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



void Unwind_00ef22c0(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x84c) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x850) = 0xffffffff;
  }
  return;
}



void Unwind_00ef22cb(void)

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
  if (*(int *)(unaff_EBP + -0x834) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x838);
    _guard_check_icall(unaff_EBP + -0x844,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef22d6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x848) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x848) = *(uint *)(unaff_EBP + -0x848) & 0xfffffffe;
    puStack_c = &DAT_00ef2465;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006b2a50(uVar1,unaff_EBP + -0x9a0,unaff_EBP + -0x9a0);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef22f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef19ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar1,unaff_EBP + -0x9a0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2303(void)

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
  if (*(int *)(unaff_EBP + -0x88c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x890);
    _guard_check_icall(unaff_EBP + -0x89c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef230e(void)

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
  if (*(int *)(unaff_EBP + -0x88c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x890);
    _guard_check_icall(unaff_EBP + -0x89c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2319(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x85c);
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



void Unwind_00ef2324(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef232f(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef233a(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2345(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2350(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef19ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar1,unaff_EBP + -0x110);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef235b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef2465;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar1,unaff_EBP + -0x110,unaff_EBP + -0x110);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2366(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef19ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar1,unaff_EBP + -0x110);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2371(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x858);
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef237c(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2387(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2392(void)

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
  if (*(int *)(unaff_EBP + -0x870) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x874);
    _guard_check_icall(unaff_EBP + -0x880,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef239d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x854);
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



void Unwind_00ef23a8(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x854);
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



void Unwind_00ef23b3(void)

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
  if (*(int *)(unaff_EBP + -0x88c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x890);
    _guard_check_icall(unaff_EBP + -0x89c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef23be(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x864);
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



void Unwind_00ef23c9(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x864);
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



void Unwind_00ef23d4(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef19ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar1,unaff_EBP + -0x9a0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef23df(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x860);
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef23ea(void)

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
  if (*(int *)(unaff_EBP + -0x834) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x838);
    _guard_check_icall(unaff_EBP + -0x844,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef23f5(void)

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
  if (*(int *)(unaff_EBP + -0x834) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x838);
    _guard_check_icall(unaff_EBP + -0x844,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2400(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x860);
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



void Unwind_00ef240b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x860);
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



void Unwind_00ef2450(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ef19ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006b2a50(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2458(void)

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
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2490(void)

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
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2498(void)

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



void Unwind_00ef24a0(void)

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



void Unwind_00ef24a8(void)

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



void Unwind_00ef24b0(void)

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



void Unwind_00ef24e0(void)

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
  puStack_c = &DAT_00ef2f1b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006a1c50();
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
          *_Memory = _Memory[0xa0];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_006b7ed9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_006b7ed9:
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef24e8(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00eeeef6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar4 + 0x58) != 0) {
    pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x54);
    _guard_check_icall(iVar4 + 0x48,uVar5);
    (*pcVar2)();
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar4 + 0x38);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      pcVar2 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef24f3(void)

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



void Unwind_00ef24fb(void)

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



void Unwind_00ef2514(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
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



void Unwind_00ef252d(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
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



void Unwind_00ef2546(void)

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



void Unwind_00ef2551(void)

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



void Unwind_00ef2559(void)

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



void Unwind_00ef2561(void)

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
  if (*(int *)(iVar2 + 0x94) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x90);
    _guard_check_icall(iVar2 + 0x84,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x78) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x74);
    _guard_check_icall(iVar2 + 0x68,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2590(void)

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
  puStack_c = &DAT_00ef2e2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    uStack_8 = 0;
    func_0x0065e600(uVar2);
    uStack_8 = 0xffffffff;
    func_0x006a04a0();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x24);
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
          *_Memory = _Memory[200];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_006b7c2c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_006b7c2c:
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2598(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eee989;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(iVar1 + 0x8c) != '\0') && (*(undefined1 **)(iVar1 + 0x88) != (undefined1 *)0x0)) {
    **(undefined1 **)(iVar1 + 0x88) = 0;
  }
  if ((*(char *)(iVar1 + 0x84) != '\0') && (*(undefined1 **)(iVar1 + 0x80) != (undefined1 *)0x0)) {
    **(undefined1 **)(iVar1 + 0x80) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar2);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef25a3(void)

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



void Unwind_00ef25ab(void)

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
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x44);
      _guard_check_icall(unaff_EBP + -0x50,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef25c4(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puStack_c = &DAT_00edb435;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x44);
      _guard_check_icall(unaff_EBP + -0x50,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef25dd(void)

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



void Unwind_00ef25e8(void)

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
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x44);
    _guard_check_icall(unaff_EBP + -0x50,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef25f0(void)

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
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x44);
    _guard_check_icall(unaff_EBP + -0x50,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef25f8(void)

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
  puStack_c = &DAT_00ee46b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(iVar2 + 0xbc) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xb8);
    _guard_check_icall(iVar2 + 0xac,uVar3);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xa0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x9c);
    _guard_check_icall(iVar2 + 0x90,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2630(void)

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



void Unwind_00ef2649(void)

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



int * Unwind_00ef2662(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00ee1828;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x2c);
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



void Unwind_00ef266d(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x34) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x44);
      _guard_check_icall(iVar2 + 0x38,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x34) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2678(void)

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
  puStack_c = &DAT_00ef229b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x34) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x48) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x44);
      _guard_check_icall(iVar2 + 0x38,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x34) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006529c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2680(void)

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



void Unwind_00ef2688(void)

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



void Unwind_00ef2690(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x3c) + 4);
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



void Unwind_00ef269b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0x5c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef26a6(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x40) + 0x68) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x40) + 100), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00ef26b1(void)

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



void Unwind_00ef26b9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xffffffef;
    puStack_c = &DAT_00ee418d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x006529c0(uVar1,unaff_EBP + -0x80);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



int * Unwind_00ef26d2(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1828;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x58);
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
      piVar6 = (int *)(*pcVar4)();
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * Unwind_00ef26da(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1828;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x58);
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
      piVar6 = (int *)(*pcVar4)();
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ef26e2(void)

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



void Unwind_00ef26ea(void)

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



void Unwind_00ef26f2(void)

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



void Unwind_00ef26fa(void)

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



void Unwind_00ef2730(void)

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



void Unwind_00ef2749(void)

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



void Unwind_00ef2762(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x88);
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



void Unwind_00ef276d(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef277b(void)

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
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2783(void)

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



void Unwind_00ef278b(void)

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



void Unwind_00ef2793(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x20) + 4);
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



void Unwind_00ef279e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0xe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef27ac(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x24) + 0xec) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x24) + 0xe8), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00ef27e0(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
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
  return;
}



void Unwind_00ef27f9(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
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
  return;
}



void Unwind_00ef2812(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00eef2b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x88);
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



void Unwind_00ef281d(void)

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
  puStack_c = &DAT_00ee0dd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef282b(void)

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
  puStack_c = &DAT_00ef1a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0xb8) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0xcc) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 200);
      _guard_check_icall(iVar2 + 0xbc,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0xb8) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x006a36a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2833(void)

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
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef283b(void)

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
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x48);
    _guard_check_icall(unaff_EBP + -0x54,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2843(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x20) + 4);
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



void Unwind_00ef284e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00eeda80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0068de80(uVar2,iVar1 + 0xe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef285c(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x38) + 0xec) != '\0') &&
     (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x38) + 0xe8), puVar1 != (undefined1 *)0x0)) {
    *puVar1 = 0;
  }
  return;
}



void Unwind_00ef2890(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eee933;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar2 = *(int **)(iVar4 + 0x40);
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



void Unwind_00ef2898(void)

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
  if (*(int *)(iVar2 + 0x90) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x8c);
    _guard_check_icall(iVar2 + 0x80,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef28a6(void)

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



void Unwind_00ef28ae(void)

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



void Unwind_00ef28b6(void)

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
  puStack_c = &DAT_00ee0d8e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(iVar2 + 0x14) != '\0') {
    uStack_8 = 0;
    if (*(int *)(iVar2 + 0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
      _guard_check_icall(iVar2 + 0x18,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x14) = '\0';
  }
  uStack_8 = 0xffffffff;
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef28be(void)

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
  puStack_c = &DAT_00eeda50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x40);
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef28c9(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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
  return;
}



void Unwind_00ef2900(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 0x14)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 0x14) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void Unwind_00ef2930(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ef2938(void)

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
  if (*(int *)(iVar2 + 0xc4) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc0);
    _guard_check_icall(iVar2 + 0xb4,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef2946(void)

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



void Unwind_00ef294e(void)

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



void Unwind_00ef2980(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x34) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x38) = 0xffffffff;
  }
  return;
}



void Unwind_00ef2988(void)

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
  piVar3 = *(int **)(unaff_EBP + -0x90);
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



void Unwind_00ef2993(void)

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
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    pcVar3 = (code *)**(undefined4 **)(unaff_EBP + -0x74);
    _guard_check_icall(unaff_EBP + -0x80,uVar5);
    (*pcVar3)();
  }
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(unaff_EBP + -0x90);
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



void Unwind_00ef299e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x54) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffe;
    puStack_c = &DAT_00ef2d8c;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    if ((*(char *)(unaff_EBP + -0x104) != '\0') &&
       (*(undefined1 **)(unaff_EBP + -0x108) != (undefined1 *)0x0)) {
      **(undefined1 **)(unaff_EBP + -0x108) = 0;
    }
    uStack_8 = 1;
    func_0x0068de80(uVar1);
    uStack_8 = 0xffffffff;
    func_0x006b2a50();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ef29ba(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ef21a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(unaff_EBP + -0x104) != '\0') &&
     (*(undefined1 **)(unaff_EBP + -0x108) != (undefined1 *)0x0)) {
    **(undefined1 **)(unaff_EBP + -0x108) = 0;
  }
  uStack_8 = 0;
  func_0x0068de80(uVar1);
  uStack_8 = 0xffffffff;
  func_0x006b2a50();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef29c5(void)

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
  if (*(int *)(unaff_EBP + -0x6c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x70);
    _guard_check_icall(unaff_EBP + -0x7c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef29cd(void)

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
  if (*(int *)(unaff_EBP + -0xc0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xc4);
    _guard_check_icall(unaff_EBP + -0xd0,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ef29d8(void)

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
