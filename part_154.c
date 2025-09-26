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



void Unwind_00f32dc8(void)

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



void Unwind_00f32dd0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
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



void Unwind_00f32e00(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x88);
  return;
}



uint Unwind_00f32e12(void)

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



void Unwind_00f32e2b(void)

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



void Unwind_00f32e33(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
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



void Unwind_00f32e60(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x5c));
  return;
}



void Unwind_00f32e68(void)

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



void Unwind_00f32e70(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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



void Unwind_00f32e78(void)

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



void Unwind_00f32e80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f32e88(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33010;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  uStack_8 = 0;
  uVar8 = *(uint *)(unaff_EBP + -0x34);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8,uVar7);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar5 = *(int **)(unaff_EBP + -0x4c);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar2 = (uint *)(piVar5 + 1);
    uVar7 = *puVar2;
    uVar8 = *puVar2;
    *puVar2 = uVar7 - 1;
    UNLOCK();
    if (uVar7 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar8 = (*pcVar6)();
      LOCK();
      piVar3 = piVar5 + 2;
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar8 = (*pcVar6)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



void Unwind_00f32e90(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x6c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x90));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  return;
}



void Unwind_00f32e9b(void)

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
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x54),0x24,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32ea3(void)

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



void Unwind_00f32eab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f32eb3(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  puVar3 = (undefined4 *)(iVar1 + 8);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f32ebe(void)

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
  
  iVar6 = *(int *)(unaff_EBP + -100);
  puStack_c = &DAT_00f33010;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar6 + 0xc);
  uStack_8 = 0;
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



void Unwind_00f32ec9(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x6c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x90),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32ed4(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32edc(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x28);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f32ee4(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec28a5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    uStack_8 = 0;
    piVar2 = *(int **)(iVar1 + 0x2c);
    if (piVar2 != (int *)0x0) {
      pcVar3 = *(code **)(*piVar2 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(iVar1 + 8)),uVar4);
      (*pcVar3)();
      *(undefined4 *)(iVar1 + 0x2c) = 0;
    }
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32eec(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x6c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x90));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  return;
}



void Unwind_00f32ef7(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x4c);
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



void Unwind_00f32eff(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32f07(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x28);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



int * Unwind_00f32f0f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) == 0) {
    return (int *)0x0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
  puStack_c = &DAT_00f32acd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      if ((undefined4 *)puVar3[0x1f] != (undefined4 *)0x0) {
        pcVar4 = (code *)**(undefined4 **)puVar3[0x1f];
        _guard_check_icall(puVar3,uVar5);
        piVar6 = (int *)(*pcVar4)();
        *unaff_FS_OFFSET = iStack_10;
        return piVar6;
      }
      pcVar4 = *(code **)*puVar3;
      _guard_check_icall(1,uVar5);
      piVar6 = (int *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f32f28(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar3 = puVar1[1] + -1;
    puVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      if ((undefined4 *)puVar1[0x1f] != (undefined4 *)0x0) {
        pcVar2 = (code *)**(undefined4 **)puVar1[0x1f];
        _guard_check_icall(puVar1);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)*puVar1;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f32f30(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)**(int **)(unaff_EBP + -0x58);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar3 = puVar1[1] + -1;
    puVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      if ((undefined4 *)puVar1[0x1f] != (undefined4 *)0x0) {
        pcVar2 = (code *)**(undefined4 **)puVar1[0x1f];
        _guard_check_icall(puVar1);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)*puVar1;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



int * Unwind_00f32f38(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) == 0) {
    return (int *)0x0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  piVar4 = *(int **)(unaff_EBP + -0x58);
  puStack_c = &DAT_00f32acd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  puVar2 = (undefined4 *)*piVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    piVar6 = (int *)*piVar4;
    *piVar4 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      if ((undefined4 *)puVar2[0x1f] != (undefined4 *)0x0) {
        pcVar3 = (code *)**(undefined4 **)puVar2[0x1f];
        _guard_check_icall(puVar2,uVar5);
        piVar6 = (int *)(*pcVar3)();
        *unaff_FS_OFFSET = iStack_10;
        return piVar6;
      }
      pcVar3 = *(code **)*puVar2;
      _guard_check_icall(1,uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f32f80(void)

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
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32f88(void)

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
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20,uVar1,unaff_EBP + -0x1c,unaff_EBP + -0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32f90(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x24) + 4);
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



void Unwind_00f32f98(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)**(int **)(unaff_EBP + -0x14);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar3 = puVar1[1] + -1;
    puVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      if ((undefined4 *)puVar1[0x1f] != (undefined4 *)0x0) {
        pcVar2 = (code *)**(undefined4 **)puVar1[0x1f];
        _guard_check_icall(puVar1);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)*puVar1;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



int * Unwind_00f32fa0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00f32acd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  puVar2 = *(undefined4 **)(iVar4 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      if ((undefined4 *)puVar2[0x1f] != (undefined4 *)0x0) {
        pcVar3 = (code *)**(undefined4 **)puVar2[0x1f];
        _guard_check_icall(puVar2,uVar5);
        piVar6 = (int *)(*pcVar3)();
        *unaff_FS_OFFSET = iStack_10;
        return piVar6;
      }
      pcVar3 = *(code **)*puVar2;
      _guard_check_icall(1,uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int Unwind_00f32fab(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00f33118;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = func_0x00838990(uVar5);
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void Unwind_00f32fb3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eda9f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x0083a3f0(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32fbb(void)

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
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20,uVar1,unaff_EBP + -0x1c,unaff_EBP + -0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32fc3(void)

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
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x18),0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f32ff0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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



void Unwind_00f32ff8(void)

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
  puVar3 = (undefined4 *)(iVar1 + 8);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33003(void)

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



void Unwind_00f33030(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x14) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00f33038(void)

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



void Unwind_00f33070(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x18);
  return;
}



void Unwind_00f3307f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x24),0x80);
  return;
}



void Unwind_00f33091(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0xc);
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



void Unwind_00f3309c(void)

{
  int unaff_EBP;
  
  func_0x00e75356(*(int *)(unaff_EBP + -0x24) + 0x10);
  return;
}



void Unwind_00f330a7(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)**(int **)(unaff_EBP + -0x20);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar3 = puVar1[1] + -1;
    puVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      if ((undefined4 *)puVar1[0x1f] != (undefined4 *)0x0) {
        pcVar2 = (code *)**(undefined4 **)puVar1[0x1f];
        _guard_check_icall(puVar1);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)*puVar1;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



int * Unwind_00f330af(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f32acd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  puVar2 = (undefined4 *)*piVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    piVar6 = (int *)*piVar4;
    *piVar4 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      if ((undefined4 *)puVar2[0x1f] != (undefined4 *)0x0) {
        pcVar3 = (code *)**(undefined4 **)puVar2[0x1f];
        _guard_check_icall(puVar2,uVar5);
        piVar6 = (int *)(*pcVar3)();
        *unaff_FS_OFFSET = iStack_10;
        return piVar6;
      }
      pcVar3 = *(code **)*puVar2;
      _guard_check_icall(1,uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



uint Unwind_00f330b7(void)

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
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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



void Unwind_00f33100(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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



int * Unwind_00f33108(void)

{
  int *piVar1;
  undefined4 *puVar2;
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
  puStack_c = &DAT_00f32acd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  puVar2 = *(undefined4 **)(iVar4 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      if ((undefined4 *)puVar2[0x1f] != (undefined4 *)0x0) {
        pcVar3 = (code *)**(undefined4 **)puVar2[0x1f];
        _guard_check_icall(puVar2,uVar5);
        piVar6 = (int *)(*pcVar3)();
        *unaff_FS_OFFSET = iStack_10;
        return piVar6;
      }
      pcVar3 = *(code **)*puVar2;
      _guard_check_icall(1,uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



uint Unwind_00f33140(void)

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
  puStack_c = &DAT_00f33010;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar6 + 0xc);
  uStack_8 = 0;
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



void Unwind_00f33170(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x24,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33178(void)

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



void Unwind_00f33180(void)

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



void Unwind_00f33188(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar3 = (undefined4 *)(iVar1 + 8);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar3 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f33193(void)

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
  puStack_c = &DAT_00f33010;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(iVar6 + 0xc);
  uStack_8 = 0;
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



int * Unwind_00f331c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = *(int **)(unaff_EBP + -0x4c);
  puStack_c = &DAT_00f32acd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  puVar2 = (undefined4 *)*piVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    piVar6 = (int *)*piVar4;
    *piVar4 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      if ((undefined4 *)puVar2[0x1f] != (undefined4 *)0x0) {
        pcVar3 = (code *)**(undefined4 **)puVar2[0x1f];
        _guard_check_icall(puVar2,uVar5);
        piVar6 = (int *)(*pcVar3)();
        *unaff_FS_OFFSET = iStack_10;
        return piVar6;
      }
      pcVar3 = *(code **)*puVar2;
      _guard_check_icall(1,uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00f331c8(void)

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
  *(undefined ***)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f331d0(void)

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
  *(undefined4 *)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1,(undefined4 *)(unaff_EBP + -0x2c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f331d8(void)

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



void Unwind_00f331e0(void)

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



void Unwind_00f331e8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
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



void Unwind_00f331f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
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



void Unwind_00f331f8(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x48);
  return;
}



void Unwind_00f33200(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x34);
  return;
}



void Unwind_00f33208(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x14) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00f33210(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x40);
  return;
}



void Unwind_00f33218(void)

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
  *(undefined4 *)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1,(undefined4 *)(unaff_EBP + -0x2c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33220(void)

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
  *(undefined ***)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33260(void)

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



int * Unwind_00f33268(void)

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



undefined4 * Unwind_00f33273(void)

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



void Unwind_00f3327b(void)

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



void Unwind_00f33286(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x34);
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



undefined4 * Unwind_00f332c0(void)

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



void Unwind_00f332c8(void)

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



void Unwind_00f332d3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x34);
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



void Unwind_00f33300(void)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f332e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = SoundSource::vftable;
  iStack_8 = 2;
  if (puVar4[4] != 0) {
    FUN_0083ab70(uVar6);
    FUN_00dd73c0(1,puVar4 + 4);
  }
  iStack_8._0_1_ = 1;
  piVar2 = (int *)puVar4[0xd];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = puVar4 + 6;
  if (0xf < (uint)puVar4[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xb]);
  }
  puVar4[10] = 0;
  puVar4[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33308(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x50);
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



void Unwind_00f33313(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(*(undefined4 *)(unaff_EBP + -0x10),8,4,FUN_00468340);
  return;
}



void Unwind_00f33326(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14) + 0x54;
  puStack_c = &DAT_00f333e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(iVar2,8,4,FUN_00468340,uVar1,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33331(void)

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



void Unwind_00f33339(void)

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



void Unwind_00f33370(void)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar4 = *(undefined4 **)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f332e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar4 = SoundSource::vftable;
  iStack_8 = 2;
  if (puVar4[4] != 0) {
    FUN_0083ab70(uVar6);
    FUN_00dd73c0(1,puVar4 + 4);
  }
  iStack_8._0_1_ = 1;
  piVar2 = (int *)puVar4[0xd];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = puVar4 + 6;
  if (0xf < (uint)puVar4[0xb]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar4[0xb]);
  }
  puVar4[10] = 0;
  puVar4[0xb] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33378(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x50);
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



void Unwind_00f33383(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c) + 0x54;
  puStack_c = &DAT_00f333e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(iVar2,8,4,FUN_00468340,uVar1,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3338e(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(*(undefined4 *)(unaff_EBP + -0x18),8,4,FUN_00468340);
  return;
}



void Unwind_00f333d0(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(*(undefined4 *)(unaff_EBP + -0x10),8,4,FUN_00468340);
  return;
}



void Unwind_00f33410(void)

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



void Unwind_00f33418(void)

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



void Unwind_00f33450(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x68);
  if (0xf < *(uint *)(unaff_EBP + -0x54)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f33458(void)

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



void Unwind_00f33460(void)

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



void Unwind_00f33468(void)

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



void Unwind_00f33470(void)

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



void Unwind_00f33478(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x68);
  if (0xf < *(uint *)(unaff_EBP + -0x54)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f33480(void)

{
  func_0x008ab391(&DAT_01464f7c);
  return;
}



void Unwind_00f334b0(void)

{
  func_0x008ab391(&DAT_0146671c);
  return;
}



void Unwind_00f334bc(void)

{
  func_0x008ab391(&DAT_01466718);
  return;
}



void Unwind_00f334f0(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f33520(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f3352b(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar3 = *(int *)(unaff_EBP + -0x14);
    puStack_c = &DAT_00f33500;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    piVar1 = *(int **)(iVar3 + 8);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      _guard_check_icall(uVar4);
      puVar5 = (undefined4 *)(*pcVar2)();
      if (puVar5 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar5;
        _guard_check_icall(1);
        (*pcVar2)();
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f33570(void)

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



void Unwind_00f33578(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x30);
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



void Unwind_00f33591(void)

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



void Unwind_00f33599(void)

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



void Unwind_00f335a1(void)

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



void Unwind_00f335a9(void)

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



void Unwind_00f335b1(void)

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



void Unwind_00f335e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xac) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xac) = *(uint *)(unaff_EBP + -0xac) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0xcc);
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



void Unwind_00f33602(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xa8) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xa8) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3360d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xac) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xac) = *(uint *)(unaff_EBP + -0xac) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0xc4);
    if (0xf < *(uint *)(unaff_EBP + -0xb0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb0));
    }
    *(undefined4 *)(unaff_EBP + -0xb4) = 0;
    *(undefined4 *)(unaff_EBP + -0xb0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f33660(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x60 + (int)puVar1) =
       std::basic_istringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x60;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x60 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f336a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
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



void Unwind_00f336e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20014) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20014) = *(uint *)(unaff_EBP + -0x20014) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x2001c);
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



void Unwind_00f33740(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10014) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10014) = *(uint *)(unaff_EBP + -0x10014) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x1001c);
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



void Unwind_00f337a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f337b9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
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



void Unwind_00f33800(void)

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



void Unwind_00f33808(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33840(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x20);
    if (*piVar1 != 0) {
      func_0x004e7c10(*piVar1,piVar1[1],piVar1);
      func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    return;
  }
  return;
}



void Unwind_00f33859(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x54);
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f33861(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x34)) && (*(int *)(unaff_EBP + -0x3c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x3c));
  }
  return;
}



void Unwind_00f33869(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x28))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x28), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f33871(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < (uint)piVar1[2]) && (*piVar1 != 0)) {
    func_0x008ab37e(*piVar1,uVar2,piVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f338a0(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x2c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f338a8(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x30) + 8);
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



void Unwind_00f338c1(void)

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



void Unwind_00f338f0(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    if ((8 < (uint)(*(int **)(unaff_EBP + -0x18))[2]) &&
       (iVar1 = **(int **)(unaff_EBP + -0x18), iVar1 != 0)) {
      func_0x008ab37e(iVar1);
    }
    return;
  }
  return;
}



void Unwind_00f33930(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x30) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x30));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33938(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x30) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x30));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33940(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x34) + 8);
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



void Unwind_00f33948(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x30) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x30));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33980(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x10))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x10), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f339b0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x10) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f339b8(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f339c3(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x28) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f339cb(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x20) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f339d6(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f339de(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x28) + 8);
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



void Unwind_00f339e6(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x20) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f339f1(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x24);
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar4);
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f339f9(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x10) + 8);
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



void Unwind_00f33a30(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (*(int *)(unaff_EBP + 8) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + 8));
  }
  return;
}



void Unwind_00f33a38(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x10)) && (*(int *)(unaff_EBP + -0x18) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x18));
  }
  return;
}



void Unwind_00f33a40(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x28))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x28), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f33a48(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x28);
    puStack_c = &DAT_00f3398d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    if ((8 < (uint)piVar1[2]) && (*piVar1 != 0)) {
      func_0x008ab37e(*piVar1,uVar2,piVar1);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f33a90(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (iVar1 = *(int *)(unaff_EBP + 8), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + 8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33a98(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0xa4))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0xa4), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f33aa3(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + -0xb0)) && (iVar1 = *(int *)(unaff_EBP + -0xb8), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + -0xb8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33aae(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + -0xb0)) && (iVar1 = *(int *)(unaff_EBP + -0xb8), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + -0xb8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ab9(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0xa4))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0xa4), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f33ac4(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0xbc);
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < (uint)piVar1[2]) && (*piVar1 != 0)) {
    func_0x008ab37e(*piVar1,uVar2,piVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33acf(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa8);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ada(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0xb0)) && (*(int *)(unaff_EBP + -0xb8) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0xb8));
  }
  return;
}



void Unwind_00f33ae5(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc4);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33af0(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0xa0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x98,unaff_EBP + -0x98,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0xa0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33afb(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b06(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc4);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b11(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xbc);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b1c(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x60);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x58,unaff_EBP + -0x58,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x60) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b24(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa4);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b2f(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa4);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b3a(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa8);
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b45(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc0);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b50(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc0);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b5b(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -200);
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b66(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0x18),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f33b6e(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x60);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x58,unaff_EBP + -0x58,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x60) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b76(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x60);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x58,unaff_EBP + -0x58,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x60) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b7e(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc0);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b89(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc0);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b94(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0xa0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x98,unaff_EBP + -0x98,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0xa0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33b9f(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0xa0);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x98,unaff_EBP + -0x98,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0xa0) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33baa(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc0);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33bb5(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xc0);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33bc0(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (*(int *)(unaff_EBP + 8) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + 8));
  }
  return;
}



void Unwind_00f33c00(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x10))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x10), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f33c30(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33c38(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33c70(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33c78(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33c80(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33c88(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33cc0(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33cf0(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33cf8(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d00(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d30(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d38(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d70(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x10) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d78(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f33d83(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d8b(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33d93(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 8);
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



void Unwind_00f33d9b(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 8);
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



void Unwind_00f33da3(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x10) + 8);
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



void Unwind_00f33dd0(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x10,unaff_EBP + 0x10,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 8) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33dd8(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33de0(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33de8(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar3 = *(uint **)(unaff_EBP + -0x18);
    puStack_c = &DAT_00f33c95;
    iStack_10 = *unaff_FS_OFFSET;
    uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0xffffffff;
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        pcVar2 = *(code **)(uVar1 & 0xfffffffe);
        if (pcVar2 != (code *)0x0) {
          _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
          (*pcVar2)();
        }
      }
      *puVar3 = 0;
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f33e01(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x10,unaff_EBP + 0x10,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 8) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e09(void)

{
  uint uVar1;
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
  uVar1 = *(uint *)(unaff_EBP + 8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x10,unaff_EBP + 0x10,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 8) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e40(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 0x4c);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x54,unaff_EBP + 0x54,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e48(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x14,unaff_EBP + 0x14,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 0xc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e50(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x94);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x8c,unaff_EBP + -0x8c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x94) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e5b(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x94);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x8c,unaff_EBP + -0x8c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x94) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e66(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x94);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x8c,unaff_EBP + -0x8c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x94) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e71(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x54);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x4c,unaff_EBP + -0x4c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x54) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e79(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x54);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x4c,unaff_EBP + -0x4c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x54) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e81(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x54);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x4c,unaff_EBP + -0x4c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x54) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e89(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x9c);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,piVar1[1],piVar1);
    func_0x004c7ff0(*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}



void Unwind_00f33e94(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa4);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33e9f(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa4);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33eaa(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa0);
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33eb5(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xac);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ec0(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xac);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ecb(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0xa8);
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ed6(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x54);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x4c,unaff_EBP + -0x4c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x54) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ede(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x54);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x4c,unaff_EBP + -0x4c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x54) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ee6(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ef1(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33efc(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x94);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x8c,unaff_EBP + -0x8c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x94) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f07(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + -0x94);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + -0x8c,unaff_EBP + -0x8c,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + -0x94) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f12(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f1d(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f28(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x14,unaff_EBP + 0x14,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 0xc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f30(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x14,unaff_EBP + 0x14,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 0xc) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f38(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f43(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f4e(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 0x4c);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x54,unaff_EBP + 0x54,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f56(void)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *(uint *)(unaff_EBP + 0x4c);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(unaff_EBP + 0x54,unaff_EBP + 0x54,2,uVar3);
        (*pcVar2)();
      }
    }
    *(uint *)(unaff_EBP + 0x4c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f5e(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33f69(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x98);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33fb0(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x24)) && (*(int *)(unaff_EBP + -0x2c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x2c));
  }
  return;
}



void Unwind_00f33fb8(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x24)) && (*(int *)(unaff_EBP + -0x2c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x2c));
  }
  return;
}



void Unwind_00f33ff0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x18) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f33ff8(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x24) + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00f34003(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3400b(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f33500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 8);
    _guard_check_icall(uVar2);
    puVar3 = (undefined4 *)(*pcVar1)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34013(void)

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



void Unwind_00f3401b(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + 0x18) + 8);
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



void Unwind_00f34023(void)

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



void Unwind_00f34050(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (iVar1 = *(int *)(unaff_EBP + 8), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + 8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34058(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x30))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x30), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f34060(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + -0x24)) && (iVar1 = *(int *)(unaff_EBP + -0x2c), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + -0x2c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34068(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x30))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x30), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f34070(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + -0x14)) && (iVar1 = *(int *)(unaff_EBP + -0x1c), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + -0x1c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34078(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x34))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x34), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f34080(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + -0x30);
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < (uint)piVar1[2]) && (*piVar1 != 0)) {
    func_0x008ab37e(*piVar1,uVar2,piVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34088(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x14)) && (*(int *)(unaff_EBP + -0x1c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f34090(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x24)) && (*(int *)(unaff_EBP + -0x2c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x2c));
  }
  return;
}



void Unwind_00f34098(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x38);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f340a0(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (*(int *)(unaff_EBP + 8) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + 8));
  }
  return;
}



void Unwind_00f340d0(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (uint *)(iVar4 + 0x48);
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 0x50;
      pcVar3 = *(code **)(uVar2 & 0xfffffffe);
      if (pcVar3 != (code *)0x0) {
        _guard_check_icall(iVar4,iVar4,2,uVar5);
        (*pcVar3)();
      }
    }
    *puVar1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f340db(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (uint *)(iVar4 + 8);
  puStack_c = &DAT_00f33c95;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 0x10;
      pcVar3 = *(code **)(uVar2 & 0xfffffffe);
      if (pcVar3 != (code *)0x0) {
        _guard_check_icall(iVar4,iVar4,2,uVar5);
        (*pcVar3)();
      }
    }
    *puVar1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f340e6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f340ff(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34118(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34131(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3414a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x30);
    if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34163(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (uint *)(iVar4 + 8);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 0x10;
      pcVar3 = *(code **)(uVar2 & 0xfffffffe);
      if (pcVar3 != (code *)0x0) {
        _guard_check_icall(iVar4,iVar4,2,uVar5);
        (*pcVar3)();
      }
    }
    *puVar1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3416e(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (uint *)(iVar4 + 8);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 0x10;
      pcVar3 = *(code **)(uVar2 & 0xfffffffe);
      if (pcVar3 != (code *)0x0) {
        _guard_check_icall(iVar4,iVar4,2,uVar5);
        (*pcVar3)();
      }
    }
    *puVar1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34179(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34181(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34189(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (uint *)(iVar4 + 0x48);
  puStack_c = &DAT_00f33d0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 0x50;
      pcVar3 = *(code **)(uVar2 & 0xfffffffe);
      if (pcVar3 != (code *)0x0) {
        _guard_check_icall(iVar4,iVar4,2,uVar5);
        (*pcVar3)();
      }
    }
    *puVar1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34194(void)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar1 = (uint *)(iVar4 + 0x48);
  puStack_c = &DAT_00f33c45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 0x50;
      pcVar3 = *(code **)(uVar2 & 0xfffffffe);
      if (pcVar3 != (code *)0x0) {
        _guard_check_icall(iVar4,iVar4,2,uVar5);
        (*pcVar3)();
      }
    }
    *puVar1 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3419f(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00f33ccd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f341a7(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = *(uint **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(uVar1 & 0xfffffffe);
      if (pcVar2 != (code *)0x0) {
        _guard_check_icall(puVar3 + 2,puVar3 + 2,2,uVar4);
        (*pcVar2)();
      }
    }
    *puVar3 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f341e0(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x10))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x10), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f341e8(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x10))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x10), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f34220(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (iVar1 = *(int *)(unaff_EBP + 8), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + 8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34228(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x20))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x20), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f34230(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + -0x14)) && (iVar1 = *(int *)(unaff_EBP + -0x1c), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + -0x1c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34238(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3398d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((8 < *(uint *)(unaff_EBP + -0x28)) && (iVar1 = *(int *)(unaff_EBP + -0x30), iVar1 != 0)) {
    func_0x008ab37e(iVar1,uVar2,(int *)(unaff_EBP + -0x30));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34240(void)

{
  int iVar1;
  int unaff_EBP;
  
  if ((8 < (uint)(*(int **)(unaff_EBP + -0x20))[2]) &&
     (iVar1 = **(int **)(unaff_EBP + -0x20), iVar1 != 0)) {
    func_0x008ab37e(iVar1);
  }
  return;
}



void Unwind_00f34248(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x28)) && (*(int *)(unaff_EBP + -0x30) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x30));
  }
  return;
}



void Unwind_00f34250(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x14)) && (*(int *)(unaff_EBP + -0x1c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f34258(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + -0x14)) && (*(int *)(unaff_EBP + -0x1c) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f34260(void)

{
  int unaff_EBP;
  
  if ((8 < *(uint *)(unaff_EBP + 0x10)) && (*(int *)(unaff_EBP + 8) != 0)) {
    func_0x008ab37e(*(int *)(unaff_EBP + 8));
  }
  return;
}



void Unwind_00f34290(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x194);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3429b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x194);
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (0xf < *(uint *)(iVar1 + 0x2c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x2c));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f342a9(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x194);
  puVar2 = (undefined4 *)(iVar1 + 0x30);
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x44));
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f342b7(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x194);
  puVar2 = (undefined4 *)(iVar1 + 0x48);
  if (0xf < *(uint *)(iVar1 + 0x5c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x5c));
  }
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f342c5(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xfffffffe;
    puVar2 = *(undefined4 **)(unaff_EBP + -0x194);
    puStack_c = &DAT_00edf6ee;
    iStack_10 = *unaff_FS_OFFSET;
    uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 2;
    puVar1 = puVar2 + 0x12;
    if (0xf < (uint)puVar2[0x17]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar2[0x17],uVar3);
    }
    puVar2[0x16] = 0;
    puVar2[0x17] = 0xf;
    *(undefined1 *)puVar1 = 0;
    iStack_8._0_1_ = 1;
    puVar1 = puVar2 + 0xc;
    if (0xf < (uint)puVar2[0x11]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar2[0x11],uVar3);
    }
    puVar2[0x10] = 0;
    puVar2[0x11] = 0xf;
    *(undefined1 *)puVar1 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    puVar1 = puVar2 + 6;
    if (0xf < (uint)puVar2[0xb]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar2[0xb],uVar3);
    }
    puVar2[10] = 0;
    puVar2[0xb] = 0xf;
    *(undefined1 *)puVar1 = 0;
    iStack_8 = 0xffffffff;
    if (0xf < (uint)puVar2[5]) {
      func_0x0046b1f0(puVar2,*puVar2,puVar2[5],uVar3);
    }
    puVar2[4] = 0;
    puVar2[5] = 0xf;
    *(undefined1 *)puVar2 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f342e7(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed3ed0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x3c) - iVar1 >> 2) * -0x55555555,uVar2);
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f342ef(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed6a13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar1 = *(int *)(unaff_EBP + -0x90);
  if (iVar1 != 0) {
    func_0x0046e710(iVar1,*(int *)(unaff_EBP + -0x88) - iVar1 >> 3,uVar2);
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0060aec0();
  uStack_8 = 0xffffffff;
  func_0x0060aec0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f342fa(void)

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



void Unwind_00f34305(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0xe0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xe0) + 8);
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



void Unwind_00f34310(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x100);
    if (0xf < *(uint *)(unaff_EBP + -0xec)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
    }
    *(undefined4 *)(unaff_EBP + -0xf0) = 0;
    *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34332(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x130);
    if (0xf < *(uint *)(unaff_EBP + -0x11c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x11c));
    }
    *(undefined4 *)(unaff_EBP + -0x120) = 0;
    *(undefined4 *)(unaff_EBP + -0x11c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34354(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x130);
    if (0xf < *(uint *)(unaff_EBP + -0x11c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x11c));
    }
    *(undefined4 *)(unaff_EBP + -0x120) = 0;
    *(undefined4 *)(unaff_EBP + -0x11c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34376(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x148);
    if (0xf < *(uint *)(unaff_EBP + -0x134)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x134));
    }
    *(undefined4 *)(unaff_EBP + -0x138) = 0;
    *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34398(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x160);
    if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
    }
    *(undefined4 *)(unaff_EBP + -0x150) = 0;
    *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f343ba(void)

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



void Unwind_00f343c5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x100);
    if (0xf < *(uint *)(unaff_EBP + -0xec)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xec));
    }
    *(undefined4 *)(unaff_EBP + -0xf0) = 0;
    *(undefined4 *)(unaff_EBP + -0xec) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f343e7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x178);
    if (0xf < *(uint *)(unaff_EBP + -0x164)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x164));
    }
    *(undefined4 *)(unaff_EBP + -0x168) = 0;
    *(undefined4 *)(unaff_EBP + -0x164) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3440e(void)

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



void Unwind_00f34419(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xfffffeff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x118);
    if (0xf < *(uint *)(unaff_EBP + -0x104)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x104));
    }
    *(undefined4 *)(unaff_EBP + -0x108) = 0;
    *(undefined4 *)(unaff_EBP + -0x104) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34440(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd4) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0xd4) = *(uint *)(unaff_EBP + -0xd4) & 0xfffffdff;
    puVar1 = (undefined4 *)(unaff_EBP + -400);
    if (0xf < *(uint *)(unaff_EBP + -0x17c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x17c));
    }
    *(undefined4 *)(unaff_EBP + -0x180) = 0;
    *(undefined4 *)(unaff_EBP + -0x17c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34467(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x3c) - iVar1 >> 2) * -0x55555555);
    *(int *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  return;
}



void Unwind_00f3446f(void)

{
  func_0x008ab391(&DAT_0146673c);
  return;
}



void Unwind_00f344b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (puVar1 != (undefined4 *)0x0) {
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  return;
}



void Unwind_00f344e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145ed0c != 0) {
    func_0x0046ac90(iRam0145ed0c,iRam0145ed14 - iRam0145ed0c >> 2,uVar1);
    iRam0145ed0c = 0;
    uRam0145ed10 = 0;
    iRam0145ed14 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145ed04,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00f34510(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x28) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
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



void Unwind_00f34529(void)

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



void Unwind_00f34531(void)

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



void Unwind_00f34539(void)

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



void Unwind_00f34541(void)

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



void Unwind_00f34549(void)

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



void Unwind_00f34580(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x14);
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



void Unwind_00f34588(void)

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



void Unwind_00f34590(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
    if (0xf < *(uint *)(unaff_EBP + -0x88)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
    }
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f345ac(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x84);
    if (0xf < *(uint *)(unaff_EBP + -0x70)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x70));
    }
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f345c8(void)

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



void Unwind_00f345d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
  }
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f345db(void)

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



uint Unwind_00f345e3(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffd;
  piVar5 = *(int **)(unaff_EBP + -100);
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



void Unwind_00f345fc(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xb8) + 4);
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



void Unwind_00f34640(void)

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



void Unwind_00f34670(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x38);
  return;
}



void Unwind_00f3467f(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x24) + 4);
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



int * Unwind_00f34687(void)

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



void Unwind_00f34692(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puVar2 = (undefined4 *)(iVar1 + 0x14);
  if (0xf < *(uint *)(iVar1 + 0x28)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x28));
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



uint Unwind_00f3469d(void)

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



void Unwind_00f346b6(void)

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



void Unwind_00f346be(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
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



void Unwind_00f346f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145ed2c != 0) {
    func_0x0046ac90(iRam0145ed2c,iRam0145ed34 - iRam0145ed2c >> 2,uVar1);
    iRam0145ed2c = 0;
    uRam0145ed30 = 0;
    iRam0145ed34 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145ed24,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34720(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0xc);
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



void Unwind_00f34728(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



void Unwind_00f34730(void)

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
  puStack_c = &DAT_00ecdd38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(iVar3 + 0x1c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
      (*pcVar2)();
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
  }
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34760(void)

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
  puStack_c = &DAT_00ecdd38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(iVar3 + 0x1c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
      (*pcVar2)();
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
  }
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34790(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f34798(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
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



void Unwind_00f347b1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x58);
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34800(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145ed4c != 0) {
    func_0x0046ac90(iRam0145ed4c,iRam0145ed54 - iRam0145ed4c >> 2,uVar1);
    iRam0145ed4c = 0;
    uRam0145ed50 = 0;
    iRam0145ed54 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145ed44,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34830(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x14) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f34838(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
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



void Unwind_00f34851(void)

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



void Unwind_00f3485c(void)

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



void Unwind_00f34867(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x58);
    if (0xf < *(uint *)(unaff_EBP + -0x44)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34880(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x70);
    if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f34899(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x88);
    if (0xf < *(uint *)(unaff_EBP + -0x74)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x74));
    }
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f348b5(void)

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



void Unwind_00f348c0(void)

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



void Unwind_00f348cb(void)

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



void Unwind_00f34910(void)

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



void Unwind_00f34918(void)

{
  undefined4 uVar1;
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
  func_0x00792a10(uVar2);
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  func_0x008ab812(uVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34950(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145ed6c != 0) {
    func_0x0046ac90(iRam0145ed6c,iRam0145ed74 - iRam0145ed6c >> 2,uVar1);
    iRam0145ed6c = 0;
    uRam0145ed70 = 0;
    iRam0145ed74 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145ed64,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f34980(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  if (*piVar1 != 0) {
