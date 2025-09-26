}



void Unwind_00edd6d3(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd6de(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x10) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x14) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd710(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00edd718(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
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



void Unwind_00edd720(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd72b(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd736(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x10) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x14) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd770(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    func_0x008ab812(iVar1,0x30,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd7a0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::detail::win_thread::func_base::vftable;
  return;
}



void Unwind_00edd7d0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1,(undefined4 *)(unaff_EBP + -0x2c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd7d8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1,(undefined4 *)(unaff_EBP + -0x2c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd810(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x20) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x24));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd818(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x18,uVar1,(undefined4 *)(unaff_EBP + -0x1c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd820(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x28) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x24,uVar1,(undefined4 *)(unaff_EBP + -0x28));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd850(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x30) != '\0') {
    *(char *)(unaff_EBP + -0x30) = '\0';
  }
  return;
}



void Unwind_00edd858(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  if (*(char *)(unaff_EBP + -0x30) != '\0') {
    *(char *)(unaff_EBP + -0x30) = '\0';
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edd860(void)

{
  int unaff_EBP;
  
  if (**(char **)(unaff_EBP + -0x3c) != '\0') {
    **(char **)(unaff_EBP + -0x3c) = '\0';
  }
  return;
}



void Unwind_00edd868(void)

{
  int iVar1;
  char *pcVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    pcVar2 = *(char **)(unaff_EBP + -0x3c);
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
    }
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edd881(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x30) != '\0') {
    *(char *)(unaff_EBP + -0x30) = '\0';
  }
  return;
}



void Unwind_00edd889(void)

{
  int unaff_EBP;
  
  if (**(char **)(unaff_EBP + -0x3c) != '\0') {
    **(char **)(unaff_EBP + -0x3c) = '\0';
  }
  return;
}



int * Unwind_00edd8c0(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00edd8c8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edd8d3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edd8de(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edca7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006345f0(uVar2,iVar1 + 0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd8e9(void)

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
  piVar1 = *(int **)(iVar3 + 0x8c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x68),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x8c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd8f4(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x94);
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



void Unwind_00edd902(void)

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



void Unwind_00edd910(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0xe8);
  if (0xf < *(uint *)(iVar1 + 0xfc)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0xfc));
  }
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edd91e(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x108);
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



void Unwind_00edd92c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x110);
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



void Unwind_00edd93a(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x118);
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



void Unwind_00edd948(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x11c);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(*(int *)(unaff_EBP + -0x14) + 300) - iVar1);
  }
  return;
}



void Unwind_00edd956(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edbfad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006336f0(uVar2,iVar1 + 0x134);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd964(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = puVar4[4];
  if (iVar6 != 0) {
    do {
      puVar1 = *(undefined4 **)(puVar4[1] + (iVar6 + puVar4[3] + -1 & puVar4[2] - 1) * 4);
      if (0xf < (uint)puVar1[5]) {
        func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar5);
      }
      puVar1[4] = 0;
      puVar1[5] = 0xf;
      *(undefined1 *)puVar1 = 0;
      iVar6 = puVar4[4] + -1;
      puVar4[4] = iVar6;
    } while (iVar6 != 0);
    puVar4[3] = 0;
  }
  if (puVar4[1] != 0) {
    iVar6 = puVar4[2];
    while (0 < iVar6) {
      iVar6 = iVar6 + -1;
      iVar2 = *(int *)(puVar4[1] + iVar6 * 4);
      if (iVar2 != 0) {
        func_0x008ab812(iVar2,0x18);
      }
    }
    func_0x0046ac90(puVar4[1],puVar4[2]);
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  uVar3 = *puVar4;
  *puVar4 = 0;
  func_0x008ab812(uVar3,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd96c(void)

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



void Unwind_00edd974(void)

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



int Unwind_00edd97c(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edcd0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar6 = func_0x0057fe40(uVar5);
  uStack_8 = uStack_8 & 0xffffff00;
  if (*(int *)(iVar4 + 0x1c) != 0) {
    pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x18);
    _guard_check_icall(iVar4 + 0xc);
    iVar6 = (*pcVar2)();
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar4 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar4 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar2 = *(code **)*piVar3;
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00edd984(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



int * Unwind_00edd9b0(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00edd9b8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edd9c3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edd9ce(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcab5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd9d9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edca7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006345f0(uVar2,iVar1 + 0xa0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd9e7(void)

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
  piVar1 = *(int **)(iVar3 + 0xec);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 200),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xec) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edd9f5(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xf4);
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



void Unwind_00edda03(void)

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



void Unwind_00edda11(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x148);
  if (0xf < *(uint *)(iVar1 + 0x15c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x15c));
  }
  *(undefined4 *)(iVar1 + 0x158) = 0;
  *(undefined4 *)(iVar1 + 0x15c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edda1f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x164);
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



void Unwind_00edda2d(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x16c);
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



void Unwind_00edda3b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x170);
  if (iVar1 != 0) {
    func_0x00638060(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x180) - iVar1);
  }
  return;
}



void Unwind_00edda49(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edbd08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar2 + 0x1b8);
  uStack_8 = 0;
  if (0xf < *(uint *)(iVar2 + 0x1cc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x1cc),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x1c8) = 0;
  *(undefined4 *)(iVar2 + 0x1cc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x006352d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edda57(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint3 uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edbda2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar4 = iStack_8._1_3_;
  iStack_8._0_1_ = 2;
  iStack_8._1_3_ = 0;
  piVar1 = *(int **)(iVar3 + 700);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar1 >> 8),piVar1 != (int *)(iVar3 + 0x298)),uVar5);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 700) = 0;
    uVar4 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar4;
  iStack_8._0_1_ = 1;
  piVar1 = *(int **)(iVar3 + 0x294);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar1 >> 8),piVar1 != (int *)(iVar3 + 0x270)),uVar5);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x294) = 0;
  }
  iStack_8._0_1_ = 6;
  func_0x00638430(iVar3 + 0x24c);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006352d0();
  iStack_8 = 0xffffffff;
  if (*(int *)(iVar3 + 0x1f8) != 0) {
    func_0x008ab37e(*(int *)(iVar3 + 0x1f8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edda65(void)

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



void Unwind_00edda6d(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00edda78(void)

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



void Unwind_00edda80(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00edda88(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00edda90(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



int Unwind_00edda98(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edcd0b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar6 = func_0x0057fe40(uVar5);
  uStack_8 = uStack_8 & 0xffffff00;
  if (*(int *)(iVar4 + 0x1c) != 0) {
    pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x18);
    _guard_check_icall(iVar4 + 0xc);
    iVar6 = (*pcVar2)();
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar4 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar4 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar2 = *(code **)*piVar3;
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00eddaa0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcd3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00eddaa8(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar5 = *(int **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edce96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 1;
  iVar7 = *piVar5;
  func_0x0062f760(piVar5 + 1,uVar6);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  piVar4 = piVar5 + 6;
  if (*(int **)(iVar7 + 0x40) == piVar5 + 1) {
    *(int *)(iVar7 + 0x40) = *piVar4;
  }
  piVar1 = piVar5 + 7;
  if (piVar5[7] != 0) {
    *(int *)(*piVar1 + 0x14) = *piVar4;
  }
  if (*piVar4 != 0) {
    *(int *)(*piVar4 + 0x18) = *piVar1;
  }
  *piVar4 = 0;
  *piVar1 = 0;
  iStack_8._0_1_ = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x28));
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar7 = extraout_EAX;
  if (piVar5[0x15] != 0) {
    pcVar3 = *(code **)piVar5[0x14];
    _guard_check_icall(piVar5 + 0x11);
    iVar7 = (*pcVar3)();
  }
  iStack_8 = 0xffffffff;
  piVar4 = (int *)piVar5[4];
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar5 = piVar4 + 1;
    iVar2 = *piVar5;
    iVar7 = *piVar5;
    *piVar5 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      LOCK();
      piVar5 = piVar4 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void Unwind_00eddab0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



uint Unwind_00eddae0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar6 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edc898;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(iVar6 + 0x10);
  uVar8 = *(uint *)(iVar6 + 0x24);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8,uVar7);
  }
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(iVar6 + 8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    puVar2 = (uint *)(piVar4 + 1);
    uVar7 = *puVar2;
    uVar8 = *puVar2;
    *puVar2 = uVar7 - 1;
    UNLOCK();
    if (uVar7 - 1 == 0) {
      pcVar5 = *(code **)*piVar4;
      _guard_check_icall();
      uVar8 = (*pcVar5)();
      LOCK();
      piVar3 = piVar4 + 2;
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar5 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        uVar8 = (*pcVar5)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



void Unwind_00eddb10(void)

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
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddb18(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
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



void Unwind_00eddb20(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



uint Unwind_00eddb2b(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar6 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edc898;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(iVar6 + 0x10);
  uVar8 = *(uint *)(iVar6 + 0x24);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8,uVar7);
  }
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(iVar6 + 8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    puVar2 = (uint *)(piVar4 + 1);
    uVar7 = *puVar2;
    uVar8 = *puVar2;
    *puVar2 = uVar7 - 1;
    UNLOCK();
    if (uVar7 - 1 == 0) {
      pcVar5 = *(code **)*piVar4;
      _guard_check_icall();
      uVar8 = (*pcVar5)();
      LOCK();
      piVar3 = piVar4 + 2;
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar5 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        uVar8 = (*pcVar5)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



uint Unwind_00eddb60(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar6 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edc6e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(iVar6 + 0x24);
  if (0xf < *(uint *)(iVar6 + 0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar6 + 0x38),uVar7);
  }
  *(undefined4 *)(iVar6 + 0x34) = 0;
  *(undefined4 *)(iVar6 + 0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(iVar6 + 0xc);
  uVar8 = *(uint *)(iVar6 + 0x20);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8,uVar7);
  }
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  *(undefined4 *)(iVar6 + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(iVar6 + 8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    puVar2 = (uint *)(piVar4 + 1);
    uVar7 = *puVar2;
    uVar8 = *puVar2;
    *puVar2 = uVar7 - 1;
    UNLOCK();
    if (uVar7 - 1 == 0) {
      pcVar5 = *(code **)*piVar4;
      _guard_check_icall();
      uVar8 = (*pcVar5)();
      LOCK();
      piVar3 = piVar4 + 2;
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar5 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        uVar8 = (*pcVar5)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



void Unwind_00eddb90(void)

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
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x40,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddb98(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
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



void Unwind_00eddba0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 8);
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1c));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eddbab(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



uint Unwind_00eddbb6(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar6 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edc6e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(iVar6 + 0x24);
  if (0xf < *(uint *)(iVar6 + 0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar6 + 0x38),uVar7);
  }
  *(undefined4 *)(iVar6 + 0x34) = 0;
  *(undefined4 *)(iVar6 + 0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(iVar6 + 0xc);
  uVar8 = *(uint *)(iVar6 + 0x20);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8,uVar7);
  }
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  *(undefined4 *)(iVar6 + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(iVar6 + 8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    puVar2 = (uint *)(piVar4 + 1);
    uVar7 = *puVar2;
    uVar8 = *puVar2;
    *puVar2 = uVar7 - 1;
    UNLOCK();
    if (uVar7 - 1 == 0) {
      pcVar5 = *(code **)*piVar4;
      _guard_check_icall();
      uVar8 = (*pcVar5)();
      LOCK();
      piVar3 = piVar4 + 2;
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar5 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        uVar8 = (*pcVar5)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



void Unwind_00eddbf0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x38) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x34,uVar1,(undefined4 *)(unaff_EBP + -0x38));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddbf8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x38) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x34,uVar1,(undefined4 *)(unaff_EBP + -0x38));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddc30(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),100);
  return;
}



void Unwind_00eddc70(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0xc);
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



int * Unwind_00eddc7b(void)

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
  puStack_c = &DAT_00edaa90;
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



int * Unwind_00eddc83(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00edced8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x10);
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



void Unwind_00eddc8e(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eddc96(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eddc9e(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eddca6(void)

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



void Unwind_00eddcae(void)

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



void Unwind_00eddcb6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00edb435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x50);
    _guard_check_icall(iVar2 + 0x44,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddcc1(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x30);
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



void Unwind_00eddcc9(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x30) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x34));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddd00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),4);
  }
  return;
}



void Unwind_00eddd40(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x18,uVar1,(undefined4 *)(unaff_EBP + -0x1c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddd80(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eddd88(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eddd90(void)

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



void Unwind_00edddc0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar2);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edddc8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00edde00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = puVar2 + 6;
  if (0xf < (uint)puVar2[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar2[5]) {
    func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
  }
  puVar2[4] = 0;
  puVar2[5] = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edde30(void)

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
  puStack_c = &DAT_00ec9bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 4);
  if (0xf < *(uint *)(iVar2 + 0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x18),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edde38(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00edde70(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edde89(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edded0(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00eddee9(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00eddf02(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00eddf1b(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00eddf34(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00eddf70(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eddf78(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddf80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00edddd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddf88(void)

{
  return;
}



void Unwind_00eddf90(void)

{
  int iVar1;
  undefined1 *_Memory;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede520;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x48);
  if (iVar1 != 0) {
    puVar5 = (undefined4 *)(iVar1 + 0x20);
    uStack_8 = 0xffffffff;
    if (0xf < *(uint *)(iVar1 + 0x34)) {
      func_0x0046b1f0(puVar5,*puVar5,*(uint *)(iVar1 + 0x34),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xf;
    *(undefined1 *)puVar5 = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x4c);
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
          *_Memory = _Memory[0x48];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c7d0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c7d0:
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddf98(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x58);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eddfa0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x54);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar2);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddfa8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puVar3 = (undefined4 *)(iVar1 + 0x20);
  puStack_c = &DAT_00edddd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x34),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddfe0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddfe8(void)

{
  return;
}



void Unwind_00eddff0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x40),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eddff8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x40),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede000(void)

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
  puStack_c = &DAT_00ede558;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    uStack_8 = 0xffffffff;
    func_0x004ea6a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -100);
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
          *_Memory = _Memory[100];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c979;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c979:
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede008(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x70);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede010(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x70);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede01b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x6c);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = puVar2 + 6;
  if (0xf < (uint)puVar2[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar2[5]) {
    func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
  }
  puVar2[4] = 0;
  puVar2[5] = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede023(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x5c);
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar2,iVar1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede060(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x3c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede068(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar1,unaff_EBP + -0x50);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede070(void)

{
  return;
}



void Unwind_00ede078(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x3c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede080(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x3c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede088(void)

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
  puStack_c = &DAT_00ede558;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    uStack_8 = 0xffffffff;
    func_0x004ea6a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x5c);
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
          *_Memory = _Memory[0x60];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c8a9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c8a9:
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede090(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -100);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = puVar2 + 6;
  if (0xf < (uint)puVar2[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar2[5]) {
    func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
  }
  puVar2[4] = 0;
  puVar2[5] = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede098(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar2,iVar1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede0d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede0d8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede0e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00edddd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede0e8(void)

{
  return;
}



void Unwind_00ede0f0(void)

{
  int iVar1;
  undefined1 *_Memory;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede520;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x48);
  if (iVar1 != 0) {
    puVar5 = (undefined4 *)(iVar1 + 0x20);
    uStack_8 = 0xffffffff;
    if (0xf < *(uint *)(iVar1 + 0x34)) {
      func_0x0046b1f0(puVar5,*puVar5,*(uint *)(iVar1 + 0x34),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xf;
    *(undefined1 *)puVar5 = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x4c);
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
          *_Memory = _Memory[0x48];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c7d0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c7d0:
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede0f8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x58);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede100(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x54);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar2);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede108(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puVar3 = (undefined4 *)(iVar1 + 0x20);
  puStack_c = &DAT_00edddd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x34),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede140(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec9bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede148(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edde48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede150(void)

{
  return;
}



void Unwind_00ede158(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede4e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x40);
  if (iVar2 != 0) {
    uStack_8 = 0xffffffff;
    puVar1 = (undefined4 *)(iVar2 + 0x24);
    if (0xf < *(uint *)(iVar2 + 0x38)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x38),uVar3);
    }
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0xf;
    *(undefined1 *)puVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x44);
  if (_Memory != (undefined1 *)0x0) {
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar5 + 0x18) == '\0') {
      func_0x008abb44();
      piVar5 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar5 + 0xc4) != 0) &&
       (iVar2 = *(int *)(*(int *)(*piVar5 + 0xc4) + 4), iVar2 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar2 + iVar4 * 4) == 0) {
          *_Memory = _Memory[0x44];
          *(undefined1 **)(iVar2 + iVar4 * 4) = _Memory;
          goto LAB_0063c6d9;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c6d9:
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede160(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00ec9bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 4);
  if (0xf < *(uint *)(iVar2 + 0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x18),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede168(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00edde48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x24);
  if (0xf < *(uint *)(iVar2 + 0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x38),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede1a0(void)

{
  return;
}



void Unwind_00ede1a8(void)

{
  undefined1 *_Memory;
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_FS_OFFSET;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x20);
  if (_Memory != (undefined1 *)0x0) {
    piVar3 = *(int **)(unaff_FS_OFFSET + 0x2c);
    if (*(char *)(*piVar3 + 0x18) == '\0') {
      func_0x008abb44();
      piVar3 = *(int **)(unaff_FS_OFFSET + 0x2c);
    }
    if ((*(int *)(*piVar3 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar3 + 0xc4) + 4), iVar1 != 0)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar1 + iVar2 * 4) == 0) {
          *_Memory = _Memory[0x2c];
          *(undefined1 **)(iVar1 + iVar2 * 4) = _Memory;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
    }
    _aligned_free(_Memory);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00ede1e0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x38);
  return;
}



void Unwind_00ede1ef(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00ede1f7(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = boost::asio::execution_context::service::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ede1ff(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede20a(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),100);
  return;
}



void Unwind_00ede219(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00ede224(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 != 0) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
    func_0x008ab812(iVar1,0xc,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede22f(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edba06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  func_0x0062f890(uVar4);
  iStack_8._0_1_ = 1;
  iVar1 = *(int *)(iVar3 + 0x34);
  if (iVar1 != 0) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
    func_0x008ab812(iVar1,0xc);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (*(undefined4 **)(iVar3 + 0x30) != (undefined4 *)0x0) {
    pcVar2 = *(code **)**(undefined4 **)(iVar3 + 0x30);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  iStack_8 = 0xffffffff;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede260(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x30);
  return;
}



void Unwind_00ede2a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede2d0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede2db(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede310(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede318(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede350(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede380(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede388(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede393(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = puVar2 + 6;
  if (0xf < (uint)puVar2[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar2[5]) {
    func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
  }
  puVar2[4] = 0;
  puVar2[5] = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede3c0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00ede3c8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = boost::asio::execution_context::service::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ede3d0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::asio::detail::timer_queue_base::vftable;
  return;
}



void Unwind_00ede3d8(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 4);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00ede3e3(void)

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
  puStack_c = &DAT_00edcc18;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0x20);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(iVar2 + 0x28) - iVar1 >> 4,uVar3);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  *(undefined ***)(iVar2 + 0x14) = boost::asio::detail::timer_queue_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede410(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede440(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede448(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede480(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = boost::asio::execution_context::service::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ede488(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edba06;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  func_0x0062f890(uVar4);
  iStack_8._0_1_ = 1;
  iVar1 = *(int *)(iVar3 + 0x34);
  if (iVar1 != 0) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
    func_0x008ab812(iVar1,0xc);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (*(undefined4 **)(iVar3 + 0x30) != (undefined4 *)0x0) {
    pcVar2 = *(code **)**(undefined4 **)(iVar3 + 0x30);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  iStack_8 = 0xffffffff;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede493(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00ede4c0(void)

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
  puStack_c = &DAT_00edde48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x24);
  if (0xf < *(uint *)(iVar2 + 0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x38),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede4cb(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ec9bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 4);
  if (0xf < *(uint *)(iVar2 + 0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x18),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede4d3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede500(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 0x20);
  puStack_c = &DAT_00edddd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x34),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede50b(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5],uVar2);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede513(void)

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



void Unwind_00ede540(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar2,iVar1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede54b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = puVar2 + 6;
  if (0xf < (uint)puVar2[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar2[5]) {
    func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
  }
  puVar2[4] = 0;
  puVar2[5] = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede580(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede588(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x18),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede5c0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x44);
  return;
}



void Unwind_00ede5cf(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00ede5d7(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = boost::asio::execution_context::service::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ede5df(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x14));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede5ea(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ede960;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x28));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede620(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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
  return;
}



void Unwind_00ede660(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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
  return;
}



void Unwind_00ede679(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ede681(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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
  return;
}



void Unwind_00ede6c0(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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
  return;
}



uint Unwind_00ede6d9(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = *(uint *)(iVar3 + 4);
  if ((uVar5 & 0xfffffffc) != 0) {
    LOCK();
    puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
    uVar2 = *puVar1;
    uVar5 = *puVar1;
    *puVar1 = uVar2 - 1;
    UNLOCK();
    if (uVar2 - 1 == 0) {
      uVar5 = func_0x0062e210(uVar4);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar5;
}



void Unwind_00ede6e1(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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
  return;
}



void Unwind_00ede720(void)

{
  undefined1 *_Memory;
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_FS_OFFSET;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x24);
  if (_Memory != (undefined1 *)0x0) {
    piVar3 = *(int **)(unaff_FS_OFFSET + 0x2c);
    if (*(char *)(*piVar3 + 0x18) == '\0') {
      func_0x008abb44();
      piVar3 = *(int **)(unaff_FS_OFFSET + 0x2c);
    }
    if ((*(int *)(*piVar3 + 0xc4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*piVar3 + 0xc4) + 4), iVar1 != 0)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar1 + iVar2 * 4) == 0) {
          *_Memory = _Memory[0x2c];
          *(undefined1 **)(iVar1 + iVar2 * 4) = _Memory;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
    }
    _aligned_free(_Memory);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  return;
}



void Unwind_00ede728(void)

{
  return;
}



void Unwind_00ede760(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede4e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x38);
  if (iVar2 != 0) {
    uStack_8 = 0xffffffff;
    puVar1 = (undefined4 *)(iVar2 + 0x24);
    if (0xf < *(uint *)(iVar2 + 0x38)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x38),uVar3);
    }
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0xf;
    *(undefined1 *)puVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x3c);
  if (_Memory != (undefined1 *)0x0) {
    piVar5 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar5 + 0x18) == '\0') {
      func_0x008abb44();
      piVar5 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar5 + 0xc4) != 0) &&
       (iVar2 = *(int *)(*(int *)(*piVar5 + 0xc4) + 4), iVar2 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar2 + iVar4 * 4) == 0) {
          *_Memory = _Memory[0x44];
          *(undefined1 **)(iVar2 + iVar4 * 4) = _Memory;
          goto LAB_0063c6d9;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c6d9:
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede768(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec9bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede770(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edde48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede778(void)

{
  return;
}



void Unwind_00ede780(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec9bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede788(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  puVar2 = (undefined4 *)(iVar1 + 4);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x18));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede7c0(void)

{
  int iVar1;
  undefined1 *_Memory;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede520;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x40);
  if (iVar1 != 0) {
    puVar5 = (undefined4 *)(iVar1 + 0x20);
    uStack_8 = 0xffffffff;
    if (0xf < *(uint *)(iVar1 + 0x34)) {
      func_0x0046b1f0(puVar5,*puVar5,*(uint *)(iVar1 + 0x34),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xf;
    *(undefined1 *)puVar5 = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x44);
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
          *_Memory = _Memory[0x48];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c7d0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c7d0:
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede7c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede7d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede7d8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00edddd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede7e0(void)

{
  return;
}



void Unwind_00ede7e8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede7f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede830(void)

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
  puStack_c = &DAT_00ede558;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    uStack_8 = 0xffffffff;
    func_0x004ea6a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x58);
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
          *_Memory = _Memory[0x60];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c8a9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c8a9:
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede838(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x3c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede840(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar1,unaff_EBP + -0x50);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede848(void)

{
  return;
}



void Unwind_00ede850(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x50);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x3c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede890(void)

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
  puStack_c = &DAT_00ede558;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    uStack_8 = 0xffffffff;
    func_0x004ea6a0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x5c);
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
          *_Memory = _Memory[100];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0063c979;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0063c979:
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede898(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -100);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ede8a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -100);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ede8ab(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x40),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede8b3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edde0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar1,unaff_EBP + -0x54);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede8bb(void)

{
  return;
}



void Unwind_00ede8c3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00eb9fa8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x40),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede900(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = boost::asio::execution_context::service::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ede908(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ede960;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x28));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede913(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x14));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede91e(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00ede950(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x14));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ede980(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + 8);
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



void Unwind_00ede988(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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
  return;
}



void Unwind_00ede9d0(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00ede9e9(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edea02(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edea1b(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



uint Unwind_00edea60(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edea79(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edea92(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edeaab(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edeaf0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(uint *)(unaff_EBP + 0xc);
  if ((uVar4 & 0xfffffffc) != 0) {
    LOCK();
    puVar1 = (uint *)(*(int *)((uVar4 & 0xfffffffc) + 8) + 0x18);
    uVar2 = *puVar1;
    uVar4 = *puVar1;
    *puVar1 = uVar2 - 1;
    UNLOCK();
    if (uVar2 - 1 == 0) {
      uVar4 = func_0x0062e210(uVar3);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar4;
}



uint Unwind_00edeaf8(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(uint *)(unaff_EBP + -0x18);
  if ((uVar4 & 0xfffffffc) != 0) {
    LOCK();
    puVar1 = (uint *)(*(int *)((uVar4 & 0xfffffffc) + 8) + 0x18);
    uVar2 = *puVar1;
    uVar4 = *puVar1;
    *puVar1 = uVar2 - 1;
    UNLOCK();
    if (uVar2 - 1 == 0) {
      uVar4 = func_0x0062e210(uVar3);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar4;
}



void Unwind_00edeb00(void)

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



void Unwind_00edeb30(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edeb38(void)

{
  return;
}



void Unwind_00edeb40(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 *_Memory;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edeb90;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    uStack_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x20) + 0x20);
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = (code *)*puVar1;
      _guard_check_icall(puVar1,0,uVar4);
      (*pcVar2)();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x24);
  if (_Memory != (undefined1 *)0x0) {
    piVar6 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar6 + 0x18) == '\0') {
      func_0x008abb44();
      piVar6 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar6 + 0xc4) != 0) &&
       (iVar3 = *(int *)(*(int *)(*piVar6 + 0xc4) + 4), iVar3 != 0)) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar3 + iVar5 * 4) == 0) {
          *_Memory = _Memory[0x28];
          *(undefined1 **)(iVar3 + iVar5 * 4) = _Memory;
          goto LAB_0063de1b;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
    _aligned_free(_Memory);
LAB_0063de1b:
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edeb48(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edeb80(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(iVar3 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar4);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edebb0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 *_Memory;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edeb90;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    uStack_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x1c) + 0x20);
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = (code *)*puVar1;
      _guard_check_icall(puVar1,0,uVar4);
      (*pcVar2)();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x20);
  if (_Memory != (undefined1 *)0x0) {
    piVar6 = (int *)unaff_FS_OFFSET[0xb];
    if (*(char *)(*piVar6 + 0x18) == '\0') {
      func_0x008abb44();
      piVar6 = (int *)unaff_FS_OFFSET[0xb];
    }
    if ((*(int *)(*piVar6 + 0xc4) != 0) &&
       (iVar3 = *(int *)(*(int *)(*piVar6 + 0xc4) + 4), iVar3 != 0)) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar3 + iVar5 * 4) == 0) {
          *_Memory = _Memory[0x28];
          *(undefined1 **)(iVar3 + iVar5 * 4) = _Memory;
          goto LAB_0063de1b;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
    _aligned_free(_Memory);
LAB_0063de1b:
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edebb8(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edebc0(void)

{
  return;
}



uint Unwind_00edec00(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edec19(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edec60(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edec79(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edec92(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



uint Unwind_00edecab(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar3 = *(int *)(unaff_EBP + 8);
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00eab8a0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uVar5 = *(uint *)(iVar3 + 4);
    if ((uVar5 & 0xfffffffc) != 0) {
      LOCK();
      puVar1 = (uint *)(*(int *)((uVar5 & 0xfffffffc) + 8) + 0x18);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        uVar5 = func_0x0062e210(uVar4);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  return 0;
}



void Unwind_00edecf0(void)

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



void Unwind_00edecf8(void)

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



void Unwind_00eded30(void)

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



void Unwind_00eded38(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + 8);
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



void Unwind_00eded40(void)

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



void Unwind_00eded48(void)

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
    iVar2 = *(int *)(unaff_EBP + 8);
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



void Unwind_00eded90(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x5c) != -1) {
    uStack_18 = 0;
    uStack_20 = 0;
    func_0x0062f0c0(1,&uStack_20,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00eded98(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x58) != -1) {
    uStack_18 = 0;
    uStack_20 = 0;
    func_0x0062f0c0(1,&uStack_20,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00ededa0(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x50) != -1) {
    uStack_18 = 0;
    uStack_20 = 0;
    func_0x0062f0c0(1,&uStack_20,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00edee10(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x2c) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x30));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edee50(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = boost::asio::execution_context::service::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edee58(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edee63(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edede0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = uVar2;
  if (*(int *)(iVar1 + 0x30) != -1) {
    func_0x0062f0c0(1,&uStack_20,uVar2);
  }
  if (*(int *)(iVar1 + 0x34) != -1) {
    func_0x0062f0c0(1,&uStack_20,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00edee6e(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(*(int *)(unaff_EBP + -0x24) + 0x38,0x1c,4,FUN_00641100);
  return;
}



void Unwind_00edee84(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(*(int *)(unaff_EBP + -0x24) + 0xa8,0xc,3,FUN_0063f290);
  return;
}



void Unwind_00edee9c(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x24) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00edeed0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edff1b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x008ab37e(*(undefined4 *)(iVar1 + 0x14),uVar2);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0064c000();
  uStack_8 = 0xffffffff;
  func_0x0064c000();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edeed8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee0058;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    uStack_8 = 0xffffffff;
    func_0x004694a0(uVar3);
    func_0x008ab812(puVar1,0x14);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edeee3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee0058;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    uStack_8 = 0xffffffff;
    func_0x004694a0(uVar3);
    func_0x008ab812(puVar1,0x14);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef10(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x50) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x54));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef18(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eacca0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    pcVar4 = *(code **)(iVar2 + 0x18);
    uStack_1c = 0;
    uStack_14 = 0;
    _guard_check_icall(0,iVar2,&uStack_1c,0,uVar5);
    (*pcVar4)();
    iVar2 = *piVar1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef20(void)

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
  
  piVar4 = *(int **)(unaff_EBP + -0x58);
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



void Unwind_00edef28(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004694a0(uVar1,unaff_EBP + -0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef30(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcc88;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004694a0(uVar1,unaff_EBP + -0x24,unaff_EBP + -0x28);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef38(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004694a0(uVar1,unaff_EBP + -0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef40(void)

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
  
  piVar4 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00edef80(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x48) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x4c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef88(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eacca0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    pcVar4 = *(code **)(iVar2 + 0x18);
    uStack_1c = 0;
    uStack_14 = 0;
    _guard_check_icall(0,iVar2,&uStack_1c,0,uVar5);
    (*pcVar4)();
    iVar2 = *piVar1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edef90(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x24) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x28));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edefd0(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x4c) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x50));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf010(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x2c) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x30));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf018(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eacca0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    pcVar4 = *(code **)(iVar2 + 0x18);
    uStack_1c = 0;
    uStack_14 = 0;
    _guard_check_icall(0,iVar2,&uStack_1c,0,uVar5);
    (*pcVar4)();
    iVar2 = *piVar1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf020(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x34) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x38));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf060(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x24) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x28));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf068(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x2c),0xc);
  return;
}



void Unwind_00edf0b0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x18) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x14,uVar1,(undefined4 *)(unaff_EBP + -0x18));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf0e0(void)

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



void Unwind_00edf0e8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf120(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf150(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::detail::timer_queue_base::vftable;
  return;
}



void Unwind_00edf158(void)

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
  puStack_c = &DAT_00edcc18;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(iVar2 + 0x1c) - iVar1 >> 4,uVar3);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  *(undefined ***)(iVar2 + 8) = boost::asio::detail::timer_queue_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf163(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::asio::detail::timer_queue_base::vftable;
  return;
}



void Unwind_00edf16b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 4);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00edf1a0(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(unaff_EBP + -0x1c) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x20));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf1a8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0xc);
  return;
}



void Unwind_00edf1b7(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  return;
}



void Unwind_00edf1c6(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = boost::asio::detail::win_thread::func_base::vftable;
  return;
}



void Unwind_00edf1f0(void)

{
  func_0x008ab391(&DAT_0145f2ac);
  return;
}



void Unwind_00edf220(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x18) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x14,uVar1,(undefined4 *)(unaff_EBP + -0x18));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00edf250(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00edf269(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x20);
  return;
}



void Unwind_00edf2a0(void)

{
  func_0x008ab391(&DAT_0145f2b0);
  return;
}



void Unwind_00edf2d0(void)

{
  func_0x008ab391(&DAT_01462630);
  return;
}



int * Unwind_00edf300(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x34);
  puStack_c = &DAT_00eac9bd;
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



void Unwind_00edf340(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*piVar2 != 0) {
    iVar4 = func_0x00d00780(*piVar2,0,uVar3);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)func_0x00d00780(*piVar2,0);
      if (puVar5 != (undefined4 *)0x0) {
        pcVar1 = *(code **)*puVar5;
        _guard_check_icall(1);
        (*pcVar1)();
      }
      func_0x00d01070(*piVar2,0,0);
    }
  }
  if (piVar2[1] != 0) {
    func_0x00baa8e0(piVar2[1]);
  }
  if (*piVar2 != 0) {
    func_0x00d003d0(*piVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf348(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edfe2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0064b700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf353(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edfe2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0064b700(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf35e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x98);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xa0) - iVar1);
    *(int *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
  }
  return;
}



void Unwind_00edf36c(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xac);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0xb4) - iVar1);
    *(int *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = 0;
  }
  return;
}



void Unwind_00edf37a(void)

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
    func_0x0064d770(*piVar2 + 0x14,piVar2 + 5,0xffffffff,uVar3);
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



void Unwind_00edf382(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edcd9e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  if ((char)piVar2[4] != '\0') {
    func_0x0064d770(*piVar2 + 0x14,piVar2 + 5,0xffffffff,uVar3);
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



void Unwind_00edf3b0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00edf3b8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
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



int * Unwind_00edf3c0(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x20);
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



void Unwind_00edf3c8(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf3d3(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf3de(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf3e9(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xfffffffd;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edf40b(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xfffffffb;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edf42d(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



int * Unwind_00edf438(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xfffffff7;
    puStack_c = &DAT_00ee11d5;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    piVar6 = &iStack_10;
    *unaff_FS_OFFSET = (int)piVar6;
    uStack_8 = 0xffffffff;
    piVar3 = *(int **)(unaff_EBP + -0x10a4);
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
  return (int *)0x0;
}



void Unwind_00edf45a(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x109c) + 4);
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



int * Unwind_00edf465(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x10a4);
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



int * Unwind_00edf470(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x10a4);
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



void Unwind_00edf47b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10ac) + 4);
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



void Unwind_00edf486(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf491(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
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



void Unwind_00edf499(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x84);
  puStack_c = &DAT_00edf6ee;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  if (0xf < *(uint *)(unaff_EBP + -0x58)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x70)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x70),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf4a4(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
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



void Unwind_00edf4ac(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



int * Unwind_00edf4b4(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00edf4bc(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf4c7(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf4d2(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf4dd(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xffffffdf;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edf4ff(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xffffffbf;
    iVar1 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)auStack_10;
    *unaff_FS_OFFSET = iVar1;
    return;
  }
  return;
}



void Unwind_00edf521(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



int * Unwind_00edf52c(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xffffff7f;
    puStack_c = &DAT_00ee11d5;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    piVar6 = &iStack_10;
    *unaff_FS_OFFSET = (int)piVar6;
    uStack_8 = 0xffffffff;
    piVar3 = *(int **)(unaff_EBP + -0x10a4);
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
  return (int *)0x0;
}



void Unwind_00edf553(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x109c) + 4);
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



int * Unwind_00edf55e(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x10a4);
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



int * Unwind_00edf569(void)

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
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x10a4);
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



void Unwind_00edf574(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10ac) + 4);
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



void Unwind_00edf57f(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00edf58a(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00edf592(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10c4);
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



void Unwind_00edf59d(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0x10c0,unaff_EBP + -0x10c0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00edf5a8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,unaff_EBP + -0x10c0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00edf5b3(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10ac);
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



void Unwind_00edf5c1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x90) != unaff_EBP + -0x1090) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x90));
  }
  return;
}



uint Unwind_00edf5cc(void)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + -0x1094) & 0x100;
  if (uVar5 != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xfffffeff;
    piVar3 = *(int **)(unaff_EBP + -0x18);
    if (piVar3 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar3 + 2);
      uVar2 = *puVar1;
      uVar5 = *puVar1;
      *puVar1 = uVar2 - 1;
      UNLOCK();
      if (uVar2 - 1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        uVar5 = (*pcVar4)();
      }
    }
    return uVar5;
  }
  return 0;
}



void Unwind_00edf5f0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10ac);
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



void Unwind_00edf5fb(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10c4);
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



void Unwind_00edf606(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1094) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x1094) = *(uint *)(unaff_EBP + -0x1094) & 0xfffffdff;
    puStack_c = &DAT_00edf728;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    func_0x0052b260(uVar1,unaff_EBP + -0x10c0,unaff_EBP + -0x10c0);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00edf62d(void)

{
  int *piVar1;
  int *piVar2;
