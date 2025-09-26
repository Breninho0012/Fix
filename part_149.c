    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x24);
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



void Unwind_00f2ae40(void)

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
  if (*(char *)(unaff_EBP + -0x14) != '\0') {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x18));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2ae70(void)

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



int * Unwind_00f2ae78(void)

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
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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



undefined4 * Unwind_00f2ae83(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00f2ae8b(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f2afdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar2,iVar1 + 0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * Unwind_00f2aec0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00f2aec8(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f2afdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00634c70(uVar2,iVar1 + 0x14);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f2aed3(void)

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
  
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2af00(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x74);
  return;
}



uint Unwind_00f2af0f(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x14) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
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



void Unwind_00f2af28(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2af30(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4c);
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x38));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2af60(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2af68(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
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



void Unwind_00f2af70(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00f2af78(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
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



int * Unwind_00f2af80(void)

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
  
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x24);
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
  piVar3 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00f2af88(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00f2af90(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
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



int Unwind_00f2afd0(void)

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



int Unwind_00f2b000(void)

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
  
  piVar5 = *(int **)(unaff_EBP + -0x48);
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



void Unwind_00f2b040(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 *_Memory;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2b0ec;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    iStack_8._1_3_ = 0;
    iStack_8._0_1_ = 1;
    if (*(int *)(iVar1 + 0x184) != 0) {
      pcVar2 = (code *)**(undefined4 **)(iVar1 + 0x180);
      _guard_check_icall(iVar1 + 0x174,uStack_14);
      (*pcVar2)();
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x005d8390();
    iStack_8 = 0xffffffff;
    if (*(int *)(iVar1 + 0x28) != -1) {
      uStack_18 = 0;
      uStack_20 = 0;
      func_0x0062f0c0(1,&uStack_20);
    }
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
          *_Memory = _Memory[400];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0080cc4b;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0080cc4b:
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00f2b048(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar1 + 0x28) != -1) {
    uStack_18 = 0;
    uStack_20 = 0;
    func_0x0062f0c0(1,&uStack_20,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * Unwind_00f2b053(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0x170);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar7 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 0x168);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar5 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      piVar7 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



void Unwind_00f2b061(void)

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



void Unwind_00f2b069(void)

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
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x184) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x180);
    _guard_check_icall(iVar2 + 0x174,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b0a0(void)

{
  int iVar1;
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
  puStack_c = &DAT_00ece810;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(iVar1 + 0x28) != -1) {
    uStack_18 = 0;
    uStack_20 = 0;
    func_0x0062f0c0(1,&uStack_20,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * Unwind_00f2b0ab(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0x170);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar7 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 0x168);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar5 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      piVar7 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



void Unwind_00f2b0b9(void)

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
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x184) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x180);
    _guard_check_icall(iVar2 + 0x174,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b0c7(void)

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



void Unwind_00f2b0cf(void)

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
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b0d7(void)

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



void Unwind_00f2b0df(void)

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



void Unwind_00f2b120(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 *_Memory;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2b0ec;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x90);
  if (iVar1 != 0) {
    iStack_8._1_3_ = 0;
    iStack_8._0_1_ = 1;
    if (*(int *)(iVar1 + 0x184) != 0) {
      pcVar2 = (code *)**(undefined4 **)(iVar1 + 0x180);
      _guard_check_icall(iVar1 + 0x174,uStack_14);
      (*pcVar2)();
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x005d8390();
    iStack_8 = 0xffffffff;
    if (*(int *)(iVar1 + 0x28) != -1) {
      uStack_18 = 0;
      uStack_20 = 0;
      func_0x0062f0c0(1,&uStack_20);
    }
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x94);
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
          *_Memory = _Memory[400];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0080cc4b;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    _aligned_free(_Memory);
LAB_0080cc4b:
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Unwind_00f2b12b(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x8c);
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



void Unwind_00f2b136(void)

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



void Unwind_00f2b13e(void)

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



void Unwind_00f2b146(void)

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



int * Unwind_00f2b14e(void)

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
  
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x68);
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
  piVar3 = *(int **)(unaff_EBP + -0x70);
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



void Unwind_00f2b156(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2ab4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8390(uVar1,unaff_EBP + -0x74);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b15e(void)

{
  return;
}



int * Unwind_00f2b169(void)

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
  
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x68);
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
  piVar3 = *(int **)(unaff_EBP + -0x70);
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



void Unwind_00f2b171(void)

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



void Unwind_00f2b179(void)

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



void Unwind_00f2b181(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x8c);
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



void Unwind_00f2b18c(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x8c);
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



int * Unwind_00f2b1d0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0xc);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar7 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar5 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      piVar7 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



void Unwind_00f2b1d8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2ab4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8390(uVar1,unaff_EBP + -0x58);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b1e0(void)

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
  puStack_c = &DAT_00f2b258;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uStack_8 = 0xffffffff;
    func_0x005d8390(uVar2);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x1c);
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
          *_Memory = _Memory[0x24];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0080d529;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0080d529:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2b1e8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x5c);
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0xc);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar7 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar5 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      piVar7 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



void Unwind_00f2b1f0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00f2ab4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8390(uVar2,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2b1fb(void)

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
  
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x4c);
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
  piVar3 = *(int **)(unaff_EBP + -0x54);
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



void Unwind_00f2b203(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b20b(void)

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
  *(undefined4 *)(unaff_EBP + -0x20) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x1c,uVar1,(undefined4 *)(unaff_EBP + -0x20));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b240(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f2ab4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8390(uVar2,iVar1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2b24b(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar7 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar7;
  uStack_8 = 0;
  piVar3 = *(int **)(iVar5 + 0xc);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar7 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(iVar5 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar5 = *piVar1;
    piVar7 = (int *)*piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
      piVar7 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar6);
        piVar7 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar7;
}



void Unwind_00f2b280(void)

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
  puStack_c = &DAT_00f2b258;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    uStack_8 = 0xffffffff;
    func_0x005d8390(uVar2);
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x38);
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
          *_Memory = _Memory[0x24];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0080d529;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0080d529:
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2b288(void)

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
  
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x24);
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
  piVar3 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00f2b290(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2ab4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8390(uVar1,unaff_EBP + -0x30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00f2b298(void)

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
  
  puStack_c = &DAT_00ecdca8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(unaff_EBP + -0x24);
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
  piVar3 = *(int **)(unaff_EBP + -0x2c);
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



int * Unwind_00f2b2d0(void)

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
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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



void Unwind_00f2b2db(void)

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
  puStack_c = &DAT_00f2b3f3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x18);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x20) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0080e250();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b2e6(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x2c);
  if (0xf < *(uint *)(iVar1 + 0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x40));
  }
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b2f1(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x44);
  if (0xf < *(uint *)(iVar1 + 0x58)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x58));
  }
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b2fc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x5c);
  if (0xf < *(uint *)(iVar1 + 0x70)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x70));
  }
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b307(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2b42b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0080e250();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b30f(void)

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
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x0080e4a0(uVar3);
    func_0x008ab812(puVar1,0x2c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b31a(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f2b325(void)

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



void Unwind_00f2b350(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
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



int * Unwind_00f2b358(void)

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
  piVar2 = *(int **)(iVar4 + 8);
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



void Unwind_00f2b363(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x1c) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x0080e4a0(uVar3);
    func_0x008ab812(puVar1,0x2c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b36e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f2b379(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f2b42b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0080e250();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b381(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2b3f3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x18);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x20) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0080e250();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b38c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x2c);
  if (0xf < *(uint *)(iVar1 + 0x40)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x40));
  }
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b397(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x44);
  if (0xf < *(uint *)(iVar1 + 0x58)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x58));
  }
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b3a2(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x5c);
  if (0xf < *(uint *)(iVar1 + 0x70)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x70));
  }
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b3d0(void)

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
  puStack_c = &DAT_00f2b42b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0080e250();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b3d8(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x0080e4a0(uVar3);
    func_0x008ab812(puVar1,0x2c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b3e3(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f2b410(void)

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
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x0080e4a0(uVar3);
    func_0x008ab812(puVar1,0x2c);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b41b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



undefined4 * Unwind_00f2b450(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f2b332;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = OTMLNode::vftable;
  iStack_8 = 3;
  puVar7 = puVar5 + 0x17;
  if (0xf < (uint)puVar5[0x1c]) {
    func_0x0046b1f0(puVar7,*puVar7,puVar5[0x1c],uVar6);
  }
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0xf;
  *(undefined1 *)puVar7 = 0;
  iStack_8._0_1_ = 2;
  puVar7 = puVar5 + 0x11;
  if (0xf < (uint)puVar5[0x16]) {
    func_0x0046b1f0(puVar7,*puVar7,puVar5[0x16],uVar6);
  }
  puVar5[0x15] = 0;
  puVar5[0x16] = 0xf;
  *(undefined1 *)puVar7 = 0;
  iStack_8._0_1_ = 1;
  puVar7 = puVar5 + 0xb;
  if (0xf < (uint)puVar5[0x10]) {
    func_0x0046b1f0(puVar7,*puVar7,puVar5[0x10],uVar6);
  }
  puVar5[0xf] = 0;
  puVar5[0x10] = 0xf;
  *(undefined1 *)puVar7 = 0;
  iStack_8._0_1_ = 6;
  iVar2 = puVar5[6];
  if (iVar2 != 0) {
    func_0x0046ac90(iVar2,puVar5[8] - iVar2 >> 2);
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0080e250();
  puVar7 = puVar5 + 1;
  iStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00f2b480(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd8) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b48b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0xe8);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2b496(void)

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



uint Unwind_00f2b49e(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0xdc) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0xdc) = *(uint *)(unaff_EBP + -0xdc) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0xe4) + 4);
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



void Unwind_00f2b4f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2b573;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb8) + 4) + -0x60 + (int)puVar1) =
       std::basic_istringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb8) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x60;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xb8) + 4) + -0x60 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xb8) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f2b4fb(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0xbc) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0xbc) = *(uint *)(unaff_EBP + -0xbc) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0xc4) + 4);
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



void Unwind_00f2b550(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x60) + 4) + -0x18 + iVar2 + -0x48) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x60) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -0x48) = iVar1 + -0x18;
  return;
}



void Unwind_00f2b55b(void)

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
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + -0x50) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(iVar1 + -0x14) & 1) != 0) {
    if (**(int **)(iVar1 + -0x30) == 0) {
      iVar3 = **(int **)(iVar1 + -0x24) + **(int **)(iVar1 + -0x34);
    }
    else {
      iVar3 = **(int **)(iVar1 + -0x20) + **(int **)(iVar1 + -0x30);
    }
    func_0x0046aa00(**(int **)(iVar1 + -0x44),iVar3 - **(int **)(iVar1 + -0x44),uVar2);
  }
  **(undefined4 **)(iVar1 + -0x44) = 0;
  **(undefined4 **)(iVar1 + -0x34) = 0;
  **(undefined4 **)(iVar1 + -0x24) = 0;
  **(undefined4 **)(iVar1 + -0x40) = 0;
  **(undefined4 **)(iVar1 + -0x30) = 0;
  **(undefined4 **)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x14) = *(uint *)(iVar1 + -0x14) & 0xfffffffe;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b566(void)

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
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b590(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x60),0x7c);
  return;
}



undefined4 * Unwind_00f2b59f(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x60);
  puStack_c = &DAT_00f2b332;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = OTMLNode::vftable;
  iStack_8 = 3;
  puVar7 = puVar5 + 0x17;
  if (0xf < (uint)puVar5[0x1c]) {
    func_0x0046b1f0(puVar7,*puVar7,puVar5[0x1c],uVar6);
  }
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0xf;
  *(undefined1 *)puVar7 = 0;
  iStack_8._0_1_ = 2;
  puVar7 = puVar5 + 0x11;
  if (0xf < (uint)puVar5[0x16]) {
    func_0x0046b1f0(puVar7,*puVar7,puVar5[0x16],uVar6);
  }
  puVar5[0x15] = 0;
  puVar5[0x16] = 0xf;
  *(undefined1 *)puVar7 = 0;
  iStack_8._0_1_ = 1;
  puVar7 = puVar5 + 0xb;
  if (0xf < (uint)puVar5[0x10]) {
    func_0x0046b1f0(puVar7,*puVar7,puVar5[0x10],uVar6);
  }
  puVar5[0xf] = 0;
  puVar5[0x10] = 0xf;
  *(undefined1 *)puVar7 = 0;
  iStack_8._0_1_ = 6;
  iVar2 = puVar5[6];
  if (iVar2 != 0) {
    func_0x0046ac90(iVar2,puVar5[8] - iVar2 >> 2);
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0080e250();
  puVar7 = puVar5 + 1;
  iStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



uint Unwind_00f2b5a7(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -100) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -100) = *(uint *)(unaff_EBP + -100) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x70) + 4);
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



void Unwind_00f2b5c0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x60) + 4);
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



int Unwind_00f2b5c8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2b66f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  piVar3 = *(int **)(unaff_EBP + -0x20);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar6 = piVar3[1] + -1;
    piVar3[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      iVar6 = piVar3[2] + -1;
      piVar3[2] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  iVar6 = *(int *)(unaff_EBP + -0x38);
  if (iVar6 != 0) {
    func_0x0046ac90(iVar6,*(int *)(unaff_EBP + -0x30) - iVar6 >> 2);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  iStack_8._0_1_ = 1;
  iVar6 = func_0x005d96c0();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar3 = *(int **)(unaff_EBP + -0x48);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x50);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      iVar6 = (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00f2b5d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x60);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2b5d8(void)

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



void Unwind_00f2b620(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc);
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



void Unwind_00f2b62b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x14);
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



void Unwind_00f2b636(void)

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
  puStack_c = &DAT_00ecde83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x24);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x2c) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b641(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x3c);
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



void Unwind_00f2b64c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ecdebb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b654(void)

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
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x005d8390(uVar3);
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b65f(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f2b690(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2b698(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2b6a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
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



void Unwind_00f2b6b9(void)

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



void Unwind_00f2b700(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x60);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar2 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1,puVar2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f2b71c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_istream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -0x18;
  return;
}



void Unwind_00f2b727(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + 0x10) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(iVar1 + 0x4c) & 1) != 0) {
    if (**(int **)(iVar1 + 0x30) == 0) {
      iVar3 = **(int **)(iVar1 + 0x3c) + **(int **)(iVar1 + 0x2c);
    }
    else {
      iVar3 = **(int **)(iVar1 + 0x40) + **(int **)(iVar1 + 0x30);
    }
    func_0x0046aa00(**(int **)(iVar1 + 0x1c),iVar3 - **(int **)(iVar1 + 0x1c),uVar2);
  }
  **(undefined4 **)(iVar1 + 0x1c) = 0;
  **(undefined4 **)(iVar1 + 0x2c) = 0;
  **(undefined4 **)(iVar1 + 0x3c) = 0;
  **(undefined4 **)(iVar1 + 0x20) = 0;
  **(undefined4 **)(iVar1 + 0x30) = 0;
  **(undefined4 **)(iVar1 + 0x40) = 0;
  *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) & 0xfffffffe;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b760(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x1c);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f2b768(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  return;
}



void Unwind_00f2b777(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x28);
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



void Unwind_00f2b77f(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
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



void Unwind_00f2b7b0(void)

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



void Unwind_00f2b7b8(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar2 = (int *)(iVar1 + 0x18);
  if (*piVar2 != 0) {
    func_0x00485920(*piVar2);
    func_0x0046e710(*piVar2,*(int *)(iVar1 + 0x20) - *piVar2 >> 3);
    *piVar2 = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return;
}



void Unwind_00f2b7f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b7fb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xf4) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xf4) = *(uint *)(unaff_EBP + -0xf4) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x40);
    if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2b81a(void)

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



void Unwind_00f2b822(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x34);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x2c) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f2b82a(void)

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



void Unwind_00f2b835(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xf4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xf4) = *(uint *)(unaff_EBP + -0xf4) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x120);
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



void Unwind_00f2b857(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xf4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xf4) = *(uint *)(unaff_EBP + -0xf4) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x120);
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



void Unwind_00f2b8b0(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b8b8(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b8f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
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



void Unwind_00f2b8fb(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x114);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b909(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x114);
  puStack_c = &DAT_00eac538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = stdext::exception::vftable;
  uStack_8 = 0;
  puVar1 = puVar2 + 3;
  if (0xf < (uint)puVar2[8]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[8],uVar3);
  }
  puVar2[7] = 0;
  puVar2[8] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *puVar2 = std::exception::vftable;
  __std_exception_destroy(puVar2 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b914(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x114);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b922(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b92d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xd0) = *(uint *)(unaff_EBP + -0xd0) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0xe8);
    if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd4));
    }
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
    *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2b94f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xd0) = *(uint *)(unaff_EBP + -0xd0) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0xe8);
    if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd4));
    }
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
    *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2b971(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xd0) = *(uint *)(unaff_EBP + -0xd0) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x110);
    if (0xf < *(uint *)(unaff_EBP + -0xfc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xfc));
    }
    *(undefined4 *)(unaff_EBP + -0x100) = 0;
    *(undefined4 *)(unaff_EBP + -0xfc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2b9d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x114);
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



void Unwind_00f2b9db(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x114);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2b9e9(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x114);
  puStack_c = &DAT_00eac538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = stdext::exception::vftable;
  uStack_8 = 0;
  puVar1 = puVar2 + 3;
  if (0xf < (uint)puVar2[8]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[8],uVar3);
  }
  puVar2[7] = 0;
  puVar2[8] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *puVar2 = std::exception::vftable;
  __std_exception_destroy(puVar2 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2b9f4(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x114);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2ba02(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2ba0d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xd0) = *(uint *)(unaff_EBP + -0xd0) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0xec);
    if (0xf < *(uint *)(unaff_EBP + -0xd8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd8));
    }
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
    *(undefined4 *)(unaff_EBP + -0xd8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2ba2f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xd0) = *(uint *)(unaff_EBP + -0xd0) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0xec);
    if (0xf < *(uint *)(unaff_EBP + -0xd8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd8));
    }
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
    *(undefined4 *)(unaff_EBP + -0xd8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2ba51(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xd0) = *(uint *)(unaff_EBP + -0xd0) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x10c);
    if (0xf < *(uint *)(unaff_EBP + -0xf8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xf8));
    }
    *(undefined4 *)(unaff_EBP + -0xfc) = 0;
    *(undefined4 *)(unaff_EBP + -0xf8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bab0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 8);
  if (0xf < *(uint *)(unaff_EBP + 0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x1c));
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2bab8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x7c);
  return;
}



uint Unwind_00f2bac7(void)

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



void Unwind_00f2bb10(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2bb18(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



uint Unwind_00f2bb20(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x1c) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x54) + 4);
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



uint Unwind_00f2bb70(void)

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
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
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



void Unwind_00f2bb89(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2bb91(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2bb99(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2bbd0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bbe9(void)

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



void Unwind_00f2bbf1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bc40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x34);
    if (0xf < *(uint *)(unaff_EBP + -0x20)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bc90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
    if (0xf < *(uint *)(unaff_EBP + -0x58)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58));
    }
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bca9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
    if (0xf < *(uint *)(unaff_EBP + -0x28)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bcc2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x54);
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bcdb(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x70);
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



void Unwind_00f2bd10(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x60);
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



void Unwind_00f2bd18(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bd31(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x44);
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2bd70(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x28);
    if (*piVar1 != 0) {
      func_0x00485920(*piVar1);
      func_0x0046e710(*piVar1,piVar1[2] - *piVar1 >> 3);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    return;
  }
  return;
}



void Unwind_00f2bdc0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x7c);
  return;
}



uint Unwind_00f2bdcf(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x20) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x28) + 4);
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



void Unwind_00f2bde8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
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



void Unwind_00f2be20(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2be28(void)

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



void Unwind_00f2be70(void)

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



void Unwind_00f2be78(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2be80(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2be88(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2bec0(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2bec8(void)

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



void Unwind_00f2bed0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  piVar2 = (int *)(iVar1 + 0x18);
  if (*piVar2 != 0) {
    func_0x00485920(*piVar2);
    func_0x0046e710(*piVar2,*(int *)(iVar1 + 0x20) - *piVar2 >> 3);
    *piVar2 = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return;
}



void Unwind_00f2bedb(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2b7c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (puVar1[6] != 0) {
    func_0x00485920(puVar1[6],uVar2);
    func_0x0046e710(puVar1[6],(int)(puVar1[8] - puVar1[6]) >> 3);
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  uStack_8 = 0xffffffff;
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2bee3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2bf2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x0080e4a0(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2beeb(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2bf20(void)

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
    func_0x008ab812(iVar1,0x2c,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2bf50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x30);
  if (iVar3 == 0) {
    return;
  }
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(uint *)(iVar3 + 8) != 0) {
    iStack_14 = iVar3;
    if (*(uint *)(iVar3 + 8) < *(uint *)(iVar3 + 0x1c) >> 3) {
      func_0x00810680(**(undefined4 **)(iVar3 + 4),*(undefined4 **)(iVar3 + 4));
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar1 = *(undefined4 **)(iVar3 + 4);
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)*puVar1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      func_0x0080e4a0(uVar4);
      func_0x008ab812(puVar1,0x2c);
      puVar1 = puVar2;
    }
    *(undefined4 *)*(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
    *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 8) = 0;
    iStack_14 = *(int *)(iVar3 + 4);
    func_0x0046c050(&iStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2bf80(void)

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



void Unwind_00f2bf88(void)

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



void Unwind_00f2bf90(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x38);
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



void Unwind_00f2bf98(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x40);
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



void Unwind_00f2bfa0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x48);
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



void Unwind_00f2bfe0(void)

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



void Unwind_00f2bfe8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x28);
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



void Unwind_00f2c020(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2c028(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2c060(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c090(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x10);
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



void Unwind_00f2c098(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc);
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



void Unwind_00f2c0a3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x14);
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



void Unwind_00f2c0ae(void)

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
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*piVar4;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x005d8390(uVar3);
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar4,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c0b9(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f2c0c4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ecdebb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c0cc(void)

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
  puStack_c = &DAT_00ecde83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(iVar2 + 0x24);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x2c) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x005d96c0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c0d7(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x3c);
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



void Unwind_00f2c110(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 8);
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



void Unwind_00f2c150(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x24);
  if (0xf < *(uint *)(unaff_EBP + -0x10)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c158(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x24);
  if (0xf < *(uint *)(unaff_EBP + -0x10)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c190(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (undefined4 *)(iVar2 + 8);
  if (0xf < *(uint *)(iVar2 + 0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x1c));
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c19b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c1a3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c1d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x80));
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c1db(void)

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



void Unwind_00f2c1e3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x220);
  if (0xf < *(uint *)(unaff_EBP + -0x20c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20c));
  }
  *(undefined4 *)(unaff_EBP + -0x210) = 0;
  *(undefined4 *)(unaff_EBP + -0x20c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c1ee(void)

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



void Unwind_00f2c1f6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x220);
  if (0xf < *(uint *)(unaff_EBP + -0x20c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20c));
  }
  *(undefined4 *)(unaff_EBP + -0x210) = 0;
  *(undefined4 *)(unaff_EBP + -0x20c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c201(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c);
  if (0xf < *(uint *)(unaff_EBP + -0x68)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x68));
  }
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c209(void)

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



void Unwind_00f2c211(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1d4) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1d4) = *(uint *)(unaff_EBP + -0x1d4) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c230(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1e4);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c23b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x60);
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



void Unwind_00f2c243(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1f0);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c24e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x220);
  if (0xf < *(uint *)(unaff_EBP + -0x20c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20c));
  }
  *(undefined4 *)(unaff_EBP + -0x210) = 0;
  *(undefined4 *)(unaff_EBP + -0x20c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c259(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1d4) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x1d4) = *(uint *)(unaff_EBP + -0x1d4) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x44);
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c278(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1d4) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x1d4) = *(uint *)(unaff_EBP + -0x1d4) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c297(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1d4) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x1d4) = *(uint *)(unaff_EBP + -0x1d4) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x208);
    if (0xf < *(uint *)(unaff_EBP + -500)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -500));
    }
    *(undefined4 *)(unaff_EBP + -0x1f8) = 0;
    *(undefined4 *)(unaff_EBP + -500) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c2b9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1d4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1d4) = *(uint *)(unaff_EBP + -0x1d4) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x44);
    if (0xf < *(uint *)(unaff_EBP + -0x30)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c2d8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1d4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1d4) = *(uint *)(unaff_EBP + -0x1d4) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x5c);
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x48));
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c2f7(void)

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



void Unwind_00f2c2ff(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1dc);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c30a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1dc);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c318(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1dc);
  puVar2 = (undefined4 *)(iVar1 + 0x30);
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x44));
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c326(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0xe8);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
  if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0xd4),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c331(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2c3d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00625e80(uVar1,unaff_EBP + -0xf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c33c(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2c408;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x108);
  if (0xf < *(uint *)(unaff_EBP + -0xf4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xf4),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0xf8) = 0;
  *(undefined4 *)(unaff_EBP + -0xf4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x00625e80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c347(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2c408;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x178);
  if (0xf < *(uint *)(unaff_EBP + -0x164)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x164),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x168) = 0;
  *(undefined4 *)(unaff_EBP + -0x164) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x00625e80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c352(void)

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



void Unwind_00f2c35a(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x1d0);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0x1a0);
  if (0xf < *(uint *)(unaff_EBP + -0x18c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -400) = 0;
  *(undefined4 *)(unaff_EBP + -0x18c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x1bc)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x1bc),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0;
  *(undefined4 *)(unaff_EBP + -0x1bc) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c365(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x178);
  if (0xf < *(uint *)(unaff_EBP + -0x164)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x164));
  }
  *(undefined4 *)(unaff_EBP + -0x168) = 0;
  *(undefined4 *)(unaff_EBP + -0x164) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c370(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x160);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0x130);
  if (0xf < *(uint *)(unaff_EBP + -0x11c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x11c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x120) = 0;
  *(undefined4 *)(unaff_EBP + -0x11c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0x148);
  if (0xf < *(uint *)(unaff_EBP + -0x134)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x134),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x138) = 0;
  *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x14c),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c37b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x108);
  if (0xf < *(uint *)(unaff_EBP + -0xf4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xf4));
  }
  *(undefined4 *)(unaff_EBP + -0xf8) = 0;
  *(undefined4 *)(unaff_EBP + -0xf4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c386(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0xe8);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
  if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
  if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0xd4)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0xd4),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c3c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puVar4 = (undefined4 *)(iVar2 + 8);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(iVar2 + 0x38);
  if (0xf < *(uint *)(iVar2 + 0x4c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x4c),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(iVar2 + 0x20);
  if (0xf < *(uint *)(iVar2 + 0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x34),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar2 + 0x1c)) {
    func_0x0046b1f0(puVar4,*puVar4,*(uint *)(iVar2 + 0x1c),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0xf;
  *(undefined1 *)puVar4 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c3f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xc;
  if (0xf < (uint)puVar2[0x11]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x11],uVar3);
  }
  puVar2[0x10] = 0;
  puVar2[0x11] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
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



void Unwind_00f2c3f8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x58);
  if (0xf < *(uint *)(iVar1 + 0x6c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x6c));
  }
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c430(void)

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



void Unwind_00f2c438(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c443(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 0x30);
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x44));
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c44e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xc;
  if (0xf < (uint)puVar2[0x11]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x11],uVar3);
  }
  puVar2[0x10] = 0;
  puVar2[0x11] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
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



void Unwind_00f2c456(void)

{
  undefined4 *puVar1;
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
    puStack_c = &DAT_00f2c408;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0;
    puVar1 = (undefined4 *)(iVar2 + 0x58);
    if (0xf < *(uint *)(iVar2 + 0x6c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x6c),uVar3);
    }
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    uStack_8 = 0xffffffff;
    func_0x00625e80();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f2c4a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar3 + 8);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = (undefined4 *)(iVar3 + 0x38);
  if (0xf < *(uint *)(iVar3 + 0x4c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar3 + 0x4c),uVar4);
  }
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(iVar3 + 0x20);
  if (0xf < *(uint *)(iVar3 + 0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar3 + 0x34),uVar4);
  }
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar3 + 0x1c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar3 + 0x1c),uVar4);
  }
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c4ab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c4b3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c4be(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puVar2 = (undefined4 *)(iVar1 + 0x30);
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x44));
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c4c9(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ed9d43;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  puVar1 = puVar2 + 0xc;
  if (0xf < (uint)puVar2[0x11]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[0x11],uVar3);
  }
  puVar2[0x10] = 0;
  puVar2[0x11] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
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



void Unwind_00f2c4d1(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 0x58);
  if (0xf < *(uint *)(iVar1 + 0x6c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x6c));
  }
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c500(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c508(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -100);
  if (0xf < *(uint *)(unaff_EBP + -0x50)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x50));
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c510(void)

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
  *(undefined4 *)(unaff_EBP + -0x4c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x48,uVar1,(undefined4 *)(unaff_EBP + -0x4c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c518(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -100);
  if (0xf < *(uint *)(unaff_EBP + -0x50)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x50));
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c520(void)

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
  *(undefined4 *)(unaff_EBP + -0x4c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x48,uVar1,(undefined4 *)(unaff_EBP + -0x4c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c550(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x2c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c558(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb01dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x2c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c560(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x2c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c590(void)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2c679;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 6;
  iStack_8._1_3_ = 0;
  if (DAT_0145eb8c != (int *)0x0) {
    pcVar1 = *(code **)(*DAT_0145eb8c + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*DAT_0145eb8c >> 8),
                                DAT_0145eb8c != (int *)&DAT_0145eb68),uVar3);
    (*pcVar1)();
    DAT_0145eb8c = (int *)0x0;
    uVar2 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar2;
  iStack_8._0_1_ = 5;
  if (DAT_0145eb64 != (int *)0x0) {
    pcVar1 = *(code **)(*DAT_0145eb64 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*DAT_0145eb64 >> 8),
                                DAT_0145eb64 != (int *)&DAT_0145eb40),uVar3);
    (*pcVar1)();
    DAT_0145eb64 = (int *)0x0;
  }
  iStack_8._0_1_ = 4;
  if (DAT_0145eb3c != (int *)0x0) {
    pcVar1 = *(code **)(*DAT_0145eb3c + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*DAT_0145eb3c >> 8),
                                DAT_0145eb3c != (int *)&DAT_0145eb18),uVar3);
    (*pcVar1)();
    DAT_0145eb3c = (int *)0x0;
  }
  iStack_8._0_1_ = 3;
  if (0xf < DAT_0145eae4) {
    func_0x0046b1f0(&DAT_0145ead0,DAT_0145ead0,DAT_0145eae4);
  }
  DAT_0145eae0 = 0;
  DAT_0145eae4 = 0xf;
  DAT_0145ead0 = DAT_0145ead0 & 0xffffff00;
  iStack_8._0_1_ = 2;
  func_0x00499750();
  iStack_8._0_1_ = 1;
  func_0x00499750();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0058da40();
  iStack_8 = 0xffffffff;
  func_0x00814f10();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00f2c59a(void)

{
  if (DAT_0145eb90 != 0) {
    func_0x0046ac90(DAT_0145eb90,DAT_0145eb98 - DAT_0145eb90 >> 2);
    DAT_0145eb90 = 0;
    _DAT_0145eb94 = 0;
    DAT_0145eb98 = 0;
  }
  return;
}



void Unwind_00f2c5d0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2c6ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00814f10(uVar2,iVar1 + 8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c5db(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f2c6dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0058da40(uVar2,iVar1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c5e6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eb1a3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00499750(uVar2,iVar1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c5f1(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eb1a3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00499750(uVar2,iVar1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c5fc(void)

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
  puStack_c = &DAT_00ed1290;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x70);
  if (0xf < *(uint *)(iVar2 + 0x84)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x84),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c607(void)

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
  piVar1 = *(int **)(iVar3 + 0xdc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xb8),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0xdc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c615(void)

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
  piVar1 = *(int **)(iVar3 + 0x104);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0xe0),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 0x104) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c623(void)

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
  piVar1 = *(int **)(iVar3 + 300);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(iVar3 + 0x108),uVar4);
    (*pcVar2)();
    *(undefined4 *)(iVar3 + 300) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c631(void)

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



void Unwind_00f2c639(void)

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



void Unwind_00f2c641(void)

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



void Unwind_00f2c649(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f2c654(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0049a500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c65c(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0049a500(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x20);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c664(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0058dac0(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x10);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c66c(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x00814f90(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c6a0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x00814f90(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x18);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x18);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c6d0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x0058dac0(piVar3,piVar4[2],uVar5);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x10);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c700(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c708(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f2c710(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c718(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4c);
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x38));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c720(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c728(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c730(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c770(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x68));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f2c778(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x68),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c780(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c788(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x68));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f2c7c0(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x68));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f2c7c8(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x68),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c7d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c7d8(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x44);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x68));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f2c7e0(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c7e8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec524d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x10,uVar1,unaff_EBP + -0x24,unaff_EBP + -0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c7f0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec5215;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x10,uVar1,unaff_EBP + -0x24,unaff_EBP + -0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c7f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec524d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x10,uVar1,unaff_EBP + -0x24,unaff_EBP + -0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c800(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c840(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x60));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f2c848(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x60),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c850(void)

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



void Unwind_00f2c858(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x60));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f2c890(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x70));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f2c898(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x70),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c8a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c8a8(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x70));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f2c8e0(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c8e8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb2ebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c8f0(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb2e25;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c8f8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb2ebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1,unaff_EBP + -0x14,unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c900(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c930(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x310);
  if (0xf < *(uint *)(unaff_EBP + -0x2fc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2fc));
  }
  *(undefined4 *)(unaff_EBP + -0x300) = 0;
  *(undefined4 *)(unaff_EBP + -0x2fc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c93b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2d8) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2d8) = *(uint *)(unaff_EBP + -0x2d8) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2f8);
    if (0xf < *(uint *)(unaff_EBP + -0x2e4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2e4));
    }
    *(undefined4 *)(unaff_EBP + -0x2e8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2e4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c95d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x340);
  if (0xf < *(uint *)(unaff_EBP + -0x32c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x32c));
  }
  *(undefined4 *)(unaff_EBP + -0x330) = 0;
  *(undefined4 *)(unaff_EBP + -0x32c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c968(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2d8) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2d8) = *(uint *)(unaff_EBP + -0x2d8) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x328);
    if (0xf < *(uint *)(unaff_EBP + -0x314)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x314));
    }
    *(undefined4 *)(unaff_EBP + -0x318) = 0;
    *(undefined4 *)(unaff_EBP + -0x314) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2c9c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f2c9cb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c9d6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c9e1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1ec);
  if (0xf < *(uint *)(unaff_EBP + -0x1d8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1d8));
  }
  *(undefined4 *)(unaff_EBP + -0x1dc) = 0;
  *(undefined4 *)(unaff_EBP + -0x1d8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c9ec(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2c9f7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2ca02(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1ec);
    if (0xf < *(uint *)(unaff_EBP + -0x1d8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1d8));
    }
    *(undefined4 *)(unaff_EBP + -0x1dc) = 0;
    *(undefined4 *)(unaff_EBP + -0x1d8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2ca24(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1ec);
  if (0xf < *(uint *)(unaff_EBP + -0x1d8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1d8));
  }
  *(undefined4 *)(unaff_EBP + -0x1dc) = 0;
  *(undefined4 *)(unaff_EBP + -0x1d8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2ca2f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
    if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
    }
    *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2ca51(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2ca5c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
    if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
    }
    *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2ca7e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2ca89(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
    if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
    }
    *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2caab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1ec);
  if (0xf < *(uint *)(unaff_EBP + -0x1d8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1d8));
  }
  *(undefined4 *)(unaff_EBP + -0x1dc) = 0;
  *(undefined4 *)(unaff_EBP + -0x1d8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cab6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cac1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cacc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cad7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
    if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
    }
    *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f2caf9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1b8);
  if (0xf < *(uint *)(unaff_EBP + -0x1a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a4));
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f2cb04(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1d4);
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c0));
  }
