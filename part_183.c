        uStack_48 = 0xdf0dd9;
        iVar5 = (*(code *)**(undefined4 **)ppuStack_44[0x1e])();
        *unaff_FS_OFFSET = iStack_10;
        return iVar5;
      }
      puVar3 = (undefined4 *)*ppuStack_44;
      ppuStack_44 = (undefined **)0x1;
      uStack_48 = 0xdf0df1;
      iVar5 = (*(code *)*puVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



void Unwind_00f6d4b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6d4b8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),8);
  }
  return;
}



void Unwind_00f6d4f0(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[9];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2 != piVar1);
      piVar1[9] = 0;
    }
    func_0x008ab812(piVar1,0x28);
  }
  return;
}



void FUN_00f6d520(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6d540(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 != 0) {
    uStack_8 = 0;
    func_0x00e756ac(iVar1,uVar2);
    func_0x008ab812(iVar1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d570(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x3c));
  return;
}



void Unwind_00f6d578(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x38),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d5b0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x28);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x20) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f6d5b8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x28);
  return;
}



void Unwind_00f6d5c7(void)

{
  int unaff_EBP;
  
  func_0x00e75356(*(int *)(unaff_EBP + -0x14) + 4);
  return;
}



void Unwind_00f6d5d2(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



void Unwind_00f6d600(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x30);
  }
  return;
}



void Unwind_00f6d608(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f6d640(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x10);
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



void Unwind_00f6d648(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x34);
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



void Unwind_00f6d650(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[2] + -1;
    piVar1[2] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
                    // WARNING: Could not recover jumptable at 0x00df0ba3. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  return;
}



void Unwind_00f6d658(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[2] + -1;
    piVar1[2] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
                    // WARNING: Could not recover jumptable at 0x00df0ba3. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  return;
}



void Unwind_00f6d690(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6d6c0(void)

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
                    // WARNING: Could not recover jumptable at 0x00df0e39. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d6f0(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + 8))(1);
  }
  return;
}



void Unwind_00f6d720(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00f6d750(void)

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
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -0x38),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d790(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x28);
  return;
}



void Unwind_00f6d79f(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f6d7a7(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[9];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2 != piVar1);
      piVar1[9] = 0;
    }
    func_0x008ab812(piVar1,0x28);
  }
  return;
}



void Unwind_00f6d7af(void)

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
                    // WARNING: Could not recover jumptable at 0x00df0e39. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}



void Unwind_00f6d7e0(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + 8))(1);
  }
  return;
}



void Unwind_00f6d7e8(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x18);
  return;
}



void Unwind_00f6d820(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + 8);
  return;
}



void Unwind_00f6d828(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x10) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f6d830(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x1c);
  return;
}



void Unwind_00f6d860(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x10) != '\0') {
    func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f6d890(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x18);
  return;
}



void Unwind_00f6d8c0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_EBP;
  
  uVar1 = unaff_EBP[0xb];
  if (0xf < uVar1) {
    iVar2 = unaff_EBP[6];
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  unaff_EBP[10] = 0;
  unaff_EBP[0xb] = 0xf;
  *(undefined1 *)(unaff_EBP + 6) = 0;
  uVar1 = unaff_EBP[5];
  if (0xf < uVar1) {
    iVar2 = *unaff_EBP;
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  unaff_EBP[4] = 0;
  unaff_EBP[5] = 0xf;
  *(undefined1 *)unaff_EBP = 0;
  return;
}



void Unwind_00f6d8c8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x48);
  if (0xf < *(uint *)(unaff_EBP + 0x5c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x5c));
  }
  *(undefined4 *)(unaff_EBP + 0x58) = 0;
  *(undefined4 *)(unaff_EBP + 0x5c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6d8d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x30);
  if (0xf < *(uint *)(unaff_EBP + 0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x44));
  }
  *(undefined4 *)(unaff_EBP + 0x40) = 0;
  *(undefined4 *)(unaff_EBP + 0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6d910(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d918(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d950(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6d980(void)

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



void Unwind_00f6d988(void)

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



void Unwind_00f6d990(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6d998(void)

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



void Unwind_00f6d9a0(void)

{
  int unaff_EBP;
  
  PropVariantClear((PROPVARIANT *)(unaff_EBP + -0x6c));
  return;
}



void Unwind_00f6d9a8(void)

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



void Unwind_00f6d9e0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0xb0);
  return;
}



void Unwind_00f6d9f2(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6d9fa(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6da30(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = (int *)unaff_EBP[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != unaff_EBP,uVar3);
    (*pcVar2)();
    unaff_EBP[9] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6da38(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0x40));
    *(undefined4 *)(unaff_EBP + 100) = 0;
  }
  return;
}



void Unwind_00f6da40(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + 0x28);
  piVar1 = (int *)piVar2[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != piVar2);
    piVar2[9] = 0;
  }
  return;
}



void Unwind_00f6da48(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x38) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + 0x38),0x30);
  }
  return;
}



void Unwind_00f6da50(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + 0x30);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00f6da58(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x38));
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f6da60(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _guard_check_icall(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6da68(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + 0x2c);
  return;
}



int Unwind_00f6daa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  piVar5 = (int *)(unaff_EBP + -0x2c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6d410;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = *piVar5;
  if ((iVar4 != 0) &&
     (((*(char *)(unaff_EBP + -0x28) == '\0' || (*(char *)(iVar4 + 0x6c) == '\0')) &&
      (*(int *)(iVar4 + 0x70) == 0)))) {
    ppuStack_44 = &PTR_vftable_012bc31c;
    uStack_48 = 1;
    uStack_4c = 0xdf0d1d;
    func_0x008370d0();
    uStack_58 = 0;
    func_0x008ab0ac(auStack_2c,&uStack_58,std::exception::vftable);
    uStack_50 = uStack_24;
    uStack_4c = uStack_20;
    func_0x008390f0(auStack_1c,std::future_error::vftable);
    if ((*piVar5 == 0) ||
       ((*(char *)(unaff_EBP + -0x28) != '\0' && (*(char *)(*piVar5 + 0x6c) != '\0')))) {
      uStack_4c = 4;
      uStack_50 = 0xdf0e0a;
      func_0x00837270();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uStack_4c = 0;
    uStack_58 = ZEXT48(auStack_1c);
    uStack_50 = 0;
    func_0x00e7522e((int)&uStack_58 + 4);
    uStack_58._0_4_ = 0xdf0d9f;
    func_0x00df3dc0();
    uStack_58 = CONCAT44(uStack_58._4_4_,auStack_1c);
    func_0x00e75356();
    iVar4 = func_0x008ab0a6(auStack_2c);
  }
  ppuStack_44 = (undefined **)*piVar5;
  if (ppuStack_44 != (undefined **)0x0) {
    LOCK();
    piVar5 = (int *)(ppuStack_44 + 1);
    iVar1 = *piVar5;
    iVar4 = *piVar5;
    *piVar5 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      if ((undefined4 *)ppuStack_44[0x1e] != (undefined4 *)0x0) {
        uStack_48 = 0xdf0dd9;
        iVar4 = (*(code *)**(undefined4 **)ppuStack_44[0x1e])();
        *unaff_FS_OFFSET = iStack_10;
        return iVar4;
      }
      puVar2 = (undefined4 *)*ppuStack_44;
      ppuStack_44 = (undefined **)0x1;
      uStack_48 = 0xdf0df1;
      iVar4 = (*(code *)*puVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4;
}



void Unwind_00f6daa8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dae0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6dae8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}



void Unwind_00f6db20(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x68);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6db28(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x68);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6db60(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x68);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6dba0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dbab(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xb8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dbb6(void)

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



void Unwind_00f6dbbe(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x74);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x88);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x88) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x8c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0xa0);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return;
}



void Unwind_00f6dc00(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dc0b(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x8c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dc16(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dc21(void)

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



void Unwind_00f6dc29(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x5c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x70);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x74);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x88);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
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
  return;
}



void Unwind_00f6dc70(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (-1 < *(int *)(unaff_EBP + -0x14)) {
    func_0x00df1f50(uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dc78(void)

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



void Unwind_00f6dc91(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6dc99(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6dcd0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dcd8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dce0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dce8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f6dd20(void)

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
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6d410;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *piVar1;
  if ((iVar5 != 0) &&
     (((*(char *)(unaff_EBP + -0x1c) == '\0' || (*(char *)(iVar5 + 0x6c) == '\0')) &&
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
       ((*(char *)(unaff_EBP + -0x1c) != '\0' && (*(char *)(*piVar1 + 0x6c) != '\0')))) {
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
        uStack_48 = 0xdf0dd9;
        iVar5 = (*(code *)**(undefined4 **)ppuStack_44[0x1e])();
        *unaff_FS_OFFSET = iStack_10;
        return iVar5;
      }
      puVar3 = (undefined4 *)*ppuStack_44;
      ppuStack_44 = (undefined **)0x1;
      uStack_48 = 0xdf0df1;
      iVar5 = (*(code *)*puVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



uint Unwind_00f6dd28(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  
  uVar4 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar4 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  puVar3 = (undefined4 *)**(int **)(unaff_EBP + 8);
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar1 = puVar3 + 1;
    uVar2 = *puVar1;
    uVar4 = *puVar1;
    *puVar1 = uVar2 - 1;
    UNLOCK();
    if (uVar2 - 1 == 0) {
      if ((undefined4 *)puVar3[0x1e] != (undefined4 *)0x0) {
        uVar4 = (*(code *)**(undefined4 **)puVar3[0x1e])(puVar3);
        return uVar4;
      }
      uVar4 = (**(code **)*puVar3)(1);
    }
  }
  return uVar4;
}



void Unwind_00f6dd41(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



int Unwind_00f6dd49(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  piVar5 = (int *)(unaff_EBP + -0x2c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6d410;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = *piVar5;
  if ((iVar4 != 0) &&
     (((*(char *)(unaff_EBP + -0x28) == '\0' || (*(char *)(iVar4 + 0x6c) == '\0')) &&
      (*(int *)(iVar4 + 0x70) == 0)))) {
    ppuStack_44 = &PTR_vftable_012bc31c;
    uStack_48 = 1;
    uStack_4c = 0xdf0d1d;
    func_0x008370d0();
    uStack_58 = 0;
    func_0x008ab0ac(auStack_2c,&uStack_58,std::exception::vftable);
    uStack_50 = uStack_24;
    uStack_4c = uStack_20;
    func_0x008390f0(auStack_1c,std::future_error::vftable);
    if ((*piVar5 == 0) ||
       ((*(char *)(unaff_EBP + -0x28) != '\0' && (*(char *)(*piVar5 + 0x6c) != '\0')))) {
      uStack_4c = 4;
      uStack_50 = 0xdf0e0a;
      func_0x00837270();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uStack_4c = 0;
    uStack_58 = ZEXT48(auStack_1c);
    uStack_50 = 0;
    func_0x00e7522e((int)&uStack_58 + 4);
    uStack_58._0_4_ = 0xdf0d9f;
    func_0x00df3dc0();
    uStack_58 = CONCAT44(uStack_58._4_4_,auStack_1c);
    func_0x00e75356();
    iVar4 = func_0x008ab0a6(auStack_2c);
  }
  ppuStack_44 = (undefined **)*piVar5;
  if (ppuStack_44 != (undefined **)0x0) {
    LOCK();
    piVar5 = (int *)(ppuStack_44 + 1);
    iVar1 = *piVar5;
    iVar4 = *piVar5;
    *piVar5 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      if ((undefined4 *)ppuStack_44[0x1e] != (undefined4 *)0x0) {
        uStack_48 = 0xdf0dd9;
        iVar4 = (*(code *)**(undefined4 **)ppuStack_44[0x1e])();
        *unaff_FS_OFFSET = iStack_10;
        return iVar4;
      }
      puVar2 = (undefined4 *)*ppuStack_44;
      ppuStack_44 = (undefined **)0x1;
      uStack_48 = 0xdf0df1;
      iVar4 = (*(code *)*puVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4;
}



int Unwind_00f6dd80(void)

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
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6d410;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *piVar1;
  if ((iVar5 != 0) &&
     (((*(char *)(unaff_EBP + -0x1c) == '\0' || (*(char *)(iVar5 + 0x6c) == '\0')) &&
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
       ((*(char *)(unaff_EBP + -0x1c) != '\0' && (*(char *)(*piVar1 + 0x6c) != '\0')))) {
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
        uStack_48 = 0xdf0dd9;
        iVar5 = (*(code *)**(undefined4 **)ppuStack_44[0x1e])();
        *unaff_FS_OFFSET = iStack_10;
        return iVar5;
      }
      puVar3 = (undefined4 *)*ppuStack_44;
      ppuStack_44 = (undefined **)0x1;
      uStack_48 = 0xdf0df1;
      iVar5 = (*(code *)*puVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



uint Unwind_00f6dd88(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBP;
  
  uVar4 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar4 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  puVar3 = (undefined4 *)**(int **)(unaff_EBP + 8);
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar1 = puVar3 + 1;
    uVar2 = *puVar1;
    uVar4 = *puVar1;
    *puVar1 = uVar2 - 1;
    UNLOCK();
    if (uVar2 - 1 == 0) {
      if ((undefined4 *)puVar3[0x1e] != (undefined4 *)0x0) {
        uVar4 = (*(code *)**(undefined4 **)puVar3[0x1e])(puVar3);
        return uVar4;
      }
      uVar4 = (**(code **)*puVar3)(1);
    }
  }
  return uVar4;
}



void Unwind_00f6dda1(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



int Unwind_00f6dda9(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  piVar5 = (int *)(unaff_EBP + -0x2c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6d410;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = *piVar5;
  if ((iVar4 != 0) &&
     (((*(char *)(unaff_EBP + -0x28) == '\0' || (*(char *)(iVar4 + 0x6c) == '\0')) &&
      (*(int *)(iVar4 + 0x70) == 0)))) {
    ppuStack_44 = &PTR_vftable_012bc31c;
    uStack_48 = 1;
    uStack_4c = 0xdf0d1d;
    func_0x008370d0();
    uStack_58 = 0;
    func_0x008ab0ac(auStack_2c,&uStack_58,std::exception::vftable);
    uStack_50 = uStack_24;
    uStack_4c = uStack_20;
    func_0x008390f0(auStack_1c,std::future_error::vftable);
    if ((*piVar5 == 0) ||
       ((*(char *)(unaff_EBP + -0x28) != '\0' && (*(char *)(*piVar5 + 0x6c) != '\0')))) {
      uStack_4c = 4;
      uStack_50 = 0xdf0e0a;
      func_0x00837270();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uStack_4c = 0;
    uStack_58 = ZEXT48(auStack_1c);
    uStack_50 = 0;
    func_0x00e7522e((int)&uStack_58 + 4);
    uStack_58._0_4_ = 0xdf0d9f;
    func_0x00df3dc0();
    uStack_58 = CONCAT44(uStack_58._4_4_,auStack_1c);
    func_0x00e75356();
    iVar4 = func_0x008ab0a6(auStack_2c);
  }
  ppuStack_44 = (undefined **)*piVar5;
  if (ppuStack_44 != (undefined **)0x0) {
    LOCK();
    piVar5 = (int *)(ppuStack_44 + 1);
    iVar1 = *piVar5;
    iVar4 = *piVar5;
    *piVar5 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      if ((undefined4 *)ppuStack_44[0x1e] != (undefined4 *)0x0) {
        uStack_48 = 0xdf0dd9;
        iVar4 = (*(code *)**(undefined4 **)ppuStack_44[0x1e])();
        *unaff_FS_OFFSET = iStack_10;
        return iVar4;
      }
      puVar2 = (undefined4 *)*ppuStack_44;
      ppuStack_44 = (undefined **)0x1;
      uStack_48 = 0xdf0df1;
      iVar4 = (*(code *)*puVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4;
}



void Unwind_00f6dde0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f6de10(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x40);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6de50(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6de5b(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xb4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dea0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xa8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6deab(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0xb0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6deb6(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x84);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6dec1(void)

{
  int unaff_EBP;
  
  PropVariantClear((PROPVARIANT *)(unaff_EBP + -0xc0));
  return;
}



void Unwind_00f6df00(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6df08(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x10);
  }
  return;
}



void Unwind_00f6df10(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6df40(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6df48(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x10);
  }
  return;
}



void Unwind_00f6df50(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6df80(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    iVar2 = puVar1[1] + -1;
    puVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)puVar1[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[0x1e])(puVar1);
        return;
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void Unwind_00f6dfb0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00f6dfe0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void FUN_00f6e000(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void FUN_00f6e020(void)

{
  FUN_008ab370();
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6e050(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e05b(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e0a0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e0a8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e0b0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e0b8(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e0f0(void)

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



void Unwind_00f6e140(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x46c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e14b(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x470);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e156(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x474);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e161(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x490);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e16c(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x494);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e177(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x498);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e182(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x478);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e18d(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x47c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e1d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x40),8);
  }
  return;
}



void Unwind_00f6e210(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x60) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x48);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x5c);
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
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f6e250(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x40),8);
  }
  return;
}



void Unwind_00f6e290(void)

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



void Unwind_00f6e298(void)

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



void Unwind_00f6e2a0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0xdc) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xdc) + 8);
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



void Unwind_00f6e2ab(void)

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



void Unwind_00f6e2b3(void)

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



void Unwind_00f6e2be(void)

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



void Unwind_00f6e2c6(void)

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



void Unwind_00f6e2d1(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x8c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0xa0);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0xa4);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0xb8);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  return;
}



void Unwind_00f6e310(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x18);
  if (0xf < *(uint *)(unaff_EBP + 0x2c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x2c));
  }
  *(undefined4 *)(unaff_EBP + 0x28) = 0;
  *(undefined4 *)(unaff_EBP + 0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6e318(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00e36840(uVar1);
  uStack_8 = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = std::ios_base::vftable;
  func_0x00e706cb((undefined4 *)(unaff_EBP + -0x74));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e323(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x30);
  if (0xf < *(uint *)(unaff_EBP + 0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x44));
  }
  *(undefined4 *)(unaff_EBP + 0x40) = 0;
  *(undefined4 *)(unaff_EBP + 0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6e32b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00e36840(uVar1);
  uStack_8 = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = std::ios_base::vftable;
  func_0x00e706cb((undefined4 *)(unaff_EBP + -0x74));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e336(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x2c) != '\0') {
    if (7 < *(uint *)(unaff_EBP + -0x14)) {
      iVar2 = *(int *)(unaff_EBP + -0x28);
      iVar1 = *(uint *)(unaff_EBP + -0x14) * 2;
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
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 7;
    *(undefined2 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f6e33e(void)

{
  undefined1 *unaff_EBP;
  
  if (0xf < *(uint *)(unaff_EBP + 0x14)) {
    func_0x0046b1f0();
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  *(undefined4 *)(unaff_EBP + 0x14) = 0xf;
  *unaff_EBP = 0;
  return;
}



void Unwind_00f6e346(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -300);
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



void Unwind_00f6e362(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00e36840(uVar1);
  uStack_8 = 0;
  *(undefined4 *)(unaff_EBP + -300) = std::ios_base::vftable;
  func_0x00e706cb((undefined4 *)(unaff_EBP + -300));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e3a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xb0) = *(uint *)(unaff_EBP + -0xb0) & 0xfffffffe;
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



void Unwind_00f6e3c2(void)

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



void Unwind_00f6e3ca(void)

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



void Unwind_00f6e3d2(void)

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



void Unwind_00f6e410(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x20) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x20));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e418(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x20) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x20));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e450(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x58) == '\0') {
    return;
  }
  if (*(char *)(unaff_EBP + -0x58) != '\0') {
    MXCSR = *(undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -0x58) = 0;
  }
  return;
}



void Unwind_00f6e480(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x3c) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x24);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x38);
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
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f6e4b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x3c),uVar4);
  }
  iVar2 = *(int *)(unaff_EBP + -0x40);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + -4);
    uStack_8 = 0;
    func_0x008ab4ad(iVar2,0x3c,*(undefined4 *)(iVar2 + -4),FUN_00e06470);
    func_0x008ab383(piVar1,(*piVar1 * 0x10 - *piVar1) * 4 + 4);
  }
  uVar4 = *(uint *)(unaff_EBP + -0x60);
  if (0xf < uVar4) {
    iVar2 = *(int *)(unaff_EBP + -0x74);
    uVar6 = uVar4 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar4 + 0x24;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x74) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e4b8(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x94) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x7c);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x90);
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
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x90) = 0;
  }
  return;
}



void Unwind_00f6e500(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBP + -0x40);
  if (iVar1 != 0) {
    uVar3 = ((*(int *)(unaff_EBP + -0x38) - iVar1) / 0xc) * 0xc;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
    *(int *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f6e508(void)

{
  int unaff_EBP;
  
  func_0x00e06500(*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6e540(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x4c) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0x34);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -0x48);
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
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined1 *)(unaff_EBP + -0x48) = 0;
  }
  return;
}



void Unwind_00f6e548(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x20));
  }
  return;
}



void Unwind_00f6e580(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x94);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  }
  return;
}



void Unwind_00f6e58b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x88);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  return;
}



void Unwind_00f6e596(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x5c));
  }
  return;
}



void Unwind_00f6e59e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xb4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xb4) = *(uint *)(unaff_EBP + -0xb4) & 0xfffffffe;
    if (*(int *)(unaff_EBP + -0x58) != 0) {
      func_0x00ddbb20(*(int *)(unaff_EBP + -0x58));
    }
    return;
  }
  return;
}



void Unwind_00f6e5bd(void)

{
  int unaff_EBP;
  
  func_0x00e06500(*(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x7c));
  return;
}



void Unwind_00f6e600(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x9c) != 0) {
    func_0x00e3dbd0(uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e60b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x68),0x834);
  }
  return;
}



void Unwind_00f6e613(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0xcc) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + -0xb4);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + -200);
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
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
    *(undefined4 *)(unaff_EBP + -0xb4) = 0xf;
    *(undefined1 *)(unaff_EBP + -200) = 0;
  }
  return;
}



void Unwind_00f6e61e(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    func_0x00e3dbd0(uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e626(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -100) != 0) {
    func_0x00e3dbd0(uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6e660(void)

{
  int unaff_EBP;
  
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xd0) != 0) {
                    // WARNING: Could not recover jumptable at 0x005e0856. Too many branches
                    // WARNING: Treating indirect jump as call
    terminate();
    return;
  }
  return;
}



void Unwind_00f6e690(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x174);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



void Unwind_00f6e69e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 500);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(iVar2 + 500) = 0;
    *(undefined4 *)(iVar2 + 0x1f8) = 0;
    *(undefined4 *)(iVar2 + 0x1fc) = 0;
  }
  return;
}



void FUN_00f6e6d0(void)

{
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6e6f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x10));
  }
  return;
}



void Unwind_00f6e720(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x10));
  }
  return;
}



void Unwind_00f6e750(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x28));
  }
  return;
}



void Unwind_00f6e758(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    pcStack_c = FUN_00f3e8d0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar1 = *(int *)(unaff_EBP + 8);
    if (iVar1 != 0) {
      uStack_8 = 0;
      func_0x008ab4ad(iVar1,0x210,*(undefined4 *)(iVar1 + -4),FUN_00dc70b0,uVar2);
      func_0x00ddbb20(iVar1 + -4);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6e771(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_00f6e7a0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    pcStack_c = FUN_00f3e8d0;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar1 = *(int *)(unaff_EBP + -0x10);
    if (iVar1 != 0) {
      uStack_8 = 0;
      func_0x008ab4ad(iVar1,0x134,*(undefined4 *)(iVar1 + -4),FUN_00dc7040,uVar2);
      func_0x00ddbb20(iVar1 + -4);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6e7e0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x18);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x2c);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x2c) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x30);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x44);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x44) = 0;
  return;
}



void Unwind_00f6e820(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f6e850(void)

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



void Unwind_00f6e858(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f6e860(void)

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



void Unwind_00f6e8a0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f6e8a8(void)

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



void Unwind_00f6e8e0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x274));
  return;
}



void Unwind_00f6e8eb(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *piVar8;
  
  if ((*(uint *)(unaff_EBP + -0x264) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x264) = *(uint *)(unaff_EBP + -0x264) & 0xfffffffe;
  puVar4 = *(undefined4 **)(unaff_EBP + -0x270);
  piVar8 = (int *)*puVar4;
  if (piVar8 != (int *)0x0) {
    piVar1 = (int *)puVar4[1];
    for (; piVar8 != piVar1; piVar8 = piVar8 + 6) {
      uVar2 = piVar8[5];
      if (0xf < uVar2) {
        iVar3 = *piVar8;
        uVar7 = uVar2 + 1;
        iVar6 = iVar3;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar3 + -4);
          uVar7 = uVar2 + 0x24;
          if (0x1f < (iVar3 - iVar6) - 4U) {
            func_0x008aaf66();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        func_0x008ab812(iVar6,uVar7);
      }
      piVar8[4] = 0;
      piVar8[5] = 0xf;
      *(undefined1 *)piVar8 = 0;
    }
    func_0x00ddbb20(*puVar4);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  return;
}



void Unwind_00f6e90d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x248);
  if (0xf < *(uint *)(unaff_EBP + -0x234)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x234));
  }
  *(undefined4 *)(unaff_EBP + -0x238) = 0;
  *(undefined4 *)(unaff_EBP + -0x234) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6e918(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x230);
  if (0xf < *(uint *)(unaff_EBP + -0x21c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x21c));
  }
  *(undefined4 *)(unaff_EBP + -0x220) = 0;
  *(undefined4 *)(unaff_EBP + -0x21c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6e923(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x290) != '\0') {
    if (7 < *(uint *)(unaff_EBP + -0x278)) {
      iVar2 = *(int *)(unaff_EBP + -0x28c);
      iVar1 = *(uint *)(unaff_EBP + -0x278) * 2;
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
    *(undefined4 *)(unaff_EBP + -0x27c) = 0;
    *(undefined4 *)(unaff_EBP + -0x278) = 7;
    *(undefined2 *)(unaff_EBP + -0x28c) = 0;
  }
  return;
}



void Unwind_00f6e960(void)

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



void Unwind_00f6e9a0(void)

{
  int unaff_EBP;
  
  func_0x00e75356(unaff_EBP + -0x20);
  return;
}



void Unwind_00f6e9d0(void)

{
  int unaff_EBP;
  
  func_0x00e06500(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6ea10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
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



void Unwind_00f6ea40(void)

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



void Unwind_00f6ea48(void)

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



void Unwind_00f6ea80(void)

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



void Unwind_00f6ea88(void)

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



void Unwind_00f6eac0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x98);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x90) - iVar1 & 0xfffffff8;
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
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
  }
  return;
}



void Unwind_00f6eacb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xb0) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0xb0));
  }
  return;
}



void Unwind_00f6ead6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x4c));
  }
  return;
}



void Unwind_00f6eade(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xb4) != 0) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0xb4));
  }
  return;
}



void Unwind_00f6eae9(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x5c);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x54) - iVar1 & 0xfffffff0;
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
    *(int *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  return;
}



void Unwind_00f6eb20(void)

{
  int unaff_EBP;
  
  func_0x00e06500(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0x14));
  return;
}



void Unwind_00f6eb31(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00f6eb39(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x20) == '\0') {
    return;
  }
  if (*(char *)(unaff_EBP + -0x20) != '\0') {
    MXCSR = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f6eb70(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x70) == '\0') {
    return;
  }
  if (*(char *)(unaff_EBP + -0x70) != '\0') {
    MXCSR = *(undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -0x70) = 0;
  }
  return;
}



void Unwind_00f6eba0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x70);
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



void Unwind_00f6ebbc(void)

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



void Unwind_00f6ebf0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + 0x20));
  }
  return;
}



void Unwind_00f6ebf8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x2000);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
  }
  return;
}



void Unwind_00f6ec06(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x2008);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(iVar2 + 0x2008) = 0;
    *(undefined4 *)(iVar2 + 0x200c) = 0;
    *(undefined4 *)(iVar2 + 0x2010) = 0;
  }
  return;
}



void Unwind_00f6ec40(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x24) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + 0x24));
  }
  return;
}



void Unwind_00f6ec48(void)

{
  int unaff_EBP;
  
  func_0x00dbc050(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Unwind_00f6ec80(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x00e05530(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                    *(undefined4 *)(unaff_EBP + -0x2c));
    func_0x00ddbb20(*(undefined4 *)(unaff_EBP + -0x28));
  }
  return;
}



void Unwind_00f6ecb0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    func_0x00e37af0(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                    *(undefined4 *)(unaff_EBP + -0x3c));
    func_0x00ddbb20(*(undefined4 *)(unaff_EBP + -0x38));
  }
  return;
}



void Unwind_00f6ece0(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x34);
    for (iVar2 = *(int *)(unaff_EBP + -0x38); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
      func_0x00dc6fb0();
    }
    func_0x00ddbb20(*(undefined4 *)(unaff_EBP + -0x40));
  }
  return;
}



void Unwind_00f6ece8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x24);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ecf0(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  for (iVar2 = *(int *)(unaff_EBP + -0x30); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    func_0x00dc6fb0();
  }
  return;
}



void Unwind_00f6ecf8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ed30(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  for (iVar2 = *(int *)(unaff_EBP + -0x18); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    func_0x00dc6fb0();
  }
  return;
}



void Unwind_00f6ed38(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ed70(void)

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



void Unwind_00f6ed78(void)

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



void Unwind_00f6ed83(void)

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



void Unwind_00f6ed8e(void)

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



void Unwind_00f6ed96(void)

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



void Unwind_00f6ed9e(void)

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



void Unwind_00f6eda6(void)

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



void Unwind_00f6edae(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x2c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x40);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x44);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x58);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f6edb6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0xac);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6edf0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x9c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x9c) = *(uint *)(unaff_EBP + -0x9c) & 0xfffffffe;
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



void Unwind_00f6ee12(void)

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



void Unwind_00f6ee1a(void)

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



void Unwind_00f6ee22(void)

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



void Unwind_00f6ee2a(void)

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



void Unwind_00f6ee32(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + -0x44);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x58);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00dc7037;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x58) = 0;
  uVar1 = *(uint *)(unaff_EBP + -0x5c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x70);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00dc7037:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return;
}



void Unwind_00f6ee3a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x9c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6ee80(void)

{
  int unaff_EBP;
  
  func_0x00e06500(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0xc));
  return;
}



void Unwind_00f6eec0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    if (**(int **)(unaff_EBP + 8) != 0) {
      func_0x00ddbb20(**(int **)(unaff_EBP + 8));
    }
    return;
  }
  return;
}



void Unwind_00f6ef00(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    uVar1 = *(uint *)(unaff_EBP + 0x24);
    if (0xf < uVar1) {
      iVar2 = *(int *)(unaff_EBP + 0x10);
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
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0x24) = 0xf;
    *(undefined1 *)(unaff_EBP + 0x10) = 0;
  }
  return;
}



void Unwind_00f6ef08(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -100));
  return;
}



void Unwind_00f6ef10(void)

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



void Unwind_00f6ef18(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *piVar8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1c);
  piVar8 = (int *)*puVar1;
  if (piVar8 != (int *)0x0) {
    piVar2 = *(int **)(unaff_EBP + -0x18);
    for (; piVar8 != piVar2; piVar8 = piVar8 + 6) {
      uVar3 = piVar8[5];
      if (0xf < uVar3) {
        iVar4 = *piVar8;
        uVar7 = uVar3 + 1;
        iVar6 = iVar4;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar4 + -4);
          uVar7 = uVar3 + 0x24;
          if (0x1f < (iVar4 - iVar6) - 4U) {
            func_0x008aaf66();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        func_0x008ab812(iVar6,uVar7);
      }
      piVar8[4] = 0;
      piVar8[5] = 0xf;
      *(undefined1 *)piVar8 = 0;
    }
    func_0x00ddbb20(*puVar1);
    *puVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f6ef20(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *piVar8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1c);
  piVar8 = (int *)*puVar1;
  if (piVar8 != (int *)0x0) {
    piVar2 = *(int **)(unaff_EBP + -0x18);
    for (; piVar8 != piVar2; piVar8 = piVar8 + 6) {
      uVar3 = piVar8[5];
      if (0xf < uVar3) {
        iVar4 = *piVar8;
        uVar7 = uVar3 + 1;
        iVar6 = iVar4;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar4 + -4);
          uVar7 = uVar3 + 0x24;
          if (0x1f < (iVar4 - iVar6) - 4U) {
            func_0x008aaf66();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        func_0x008ab812(iVar6,uVar7);
      }
      piVar8[4] = 0;
      piVar8[5] = 0xf;
      *(undefined1 *)piVar8 = 0;
    }
    func_0x00ddbb20(*puVar1);
    *puVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f6ef28(void)

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



void Unwind_00f6ef30(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *piVar8;
  
  if ((*(uint *)(unaff_EBP + -0x58) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x58) = *(uint *)(unaff_EBP + -0x58) & 0xfffffffe;
  puVar4 = *(undefined4 **)(unaff_EBP + -0x60);
  piVar8 = (int *)*puVar4;
  if (piVar8 != (int *)0x0) {
    piVar1 = (int *)puVar4[1];
    for (; piVar8 != piVar1; piVar8 = piVar8 + 6) {
      uVar2 = piVar8[5];
      if (0xf < uVar2) {
        iVar3 = *piVar8;
        uVar7 = uVar2 + 1;
        iVar6 = iVar3;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar3 + -4);
          uVar7 = uVar2 + 0x24;
          if (0x1f < (iVar3 - iVar6) - 4U) {
            func_0x008aaf66();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        func_0x008ab812(iVar6,uVar7);
      }
      piVar8[4] = 0;
      piVar8[5] = 0xf;
      *(undefined1 *)piVar8 = 0;
    }
    func_0x00ddbb20(*puVar4);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  return;
}



void Unwind_00f6ef80(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x8a8));
  return;
}



void Unwind_00f6ef8b(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x8ac));
  return;
}



void Unwind_00f6ef96(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x84c);
  if (piVar1 != (int *)0x0) {
    (*(code *)**(undefined4 **)((int)piVar1 + *(int *)(*piVar1 + 4)))(1);
  }
  return;
}



void Unwind_00f6efa1(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x830),0x98);
  return;
}



void Unwind_00f6efb6(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x884) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x884) = *(uint *)(unaff_EBP + -0x884) & 0xfffffff7;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x830) + 0x50);
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



void Unwind_00f6efdb(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x830);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_istream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -0x18;
  return;
}



void Unwind_00f6efe9(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x830) + 0x44);
  *(undefined ***)(*(int *)(unaff_EBP + -0x830) + 0x10) = std::basic_streambuf<>::vftable;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 4) + 8))();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    func_0x008ab812(iVar1,8);
  }
  return;
}



void Unwind_00f6eff7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x838) != 0) {
    func_0x00ddbb20(*(int *)(unaff_EBP + -0x838));
  }
  return;
}



void Unwind_00f6f002(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x884) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x884) = *(uint *)(unaff_EBP + -0x884) & 0xfffffffd;
    uStack_8 = 0xffffffff;
    pcStack_c = FUN_00f3e140;
    iStack_10 = *unaff_FS_OFFSET;
    uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iVar1 = *(int *)(unaff_EBP + -0x8b0);
    if (iVar1 != 0) {
      func_0x00e36840(uVar2);
      uStack_8 = 0;
      *(undefined4 *)(iVar1 + 0x70) = std::ios_base::vftable;
      func_0x00e706cb((undefined4 *)(iVar1 + 0x70));
      func_0x008ab812(iVar1,0xb8);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6f024(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x830),0xb8);
  return;
}



void Unwind_00f6f039(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x830);
  if (iVar1 != 0) {
    func_0x00e36840(uVar2);
    uStack_8 = 0;
    *(undefined4 *)(iVar1 + 0x70) = std::ios_base::vftable;
    func_0x00e706cb((undefined4 *)(iVar1 + 0x70));
    func_0x008ab812(iVar1,0xb8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f044(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x870);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x868) - iVar1 & 0xfffffff8;
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
    *(undefined4 *)(unaff_EBP + -0x870) = 0;
    *(undefined4 *)(unaff_EBP + -0x86c) = 0;
    *(undefined4 *)(unaff_EBP + -0x868) = 0;
  }
  return;
}



void Unwind_00f6f04f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x864);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x864) = 0;
    *(undefined4 *)(unaff_EBP + -0x860) = 0;
    *(undefined4 *)(unaff_EBP + -0x85c) = 0;
  }
  return;
}



void Unwind_00f6f090(void)

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



void Unwind_00f6f098(void)

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



void Unwind_00f6f0a0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x5c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  return;
}



void Unwind_00f6f0e0(void)

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



void Unwind_00f6f0e8(void)

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



void Unwind_00f6f0f0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x54);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  return;
}



void Unwind_00f6f130(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0x24) = 0;
  }
  return;
}



void Unwind_00f6f138(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x54);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + 0x54) = 0;
    *(undefined4 *)(unaff_EBP + 0x58) = 0;
    *(undefined4 *)(unaff_EBP + 0x5c) = 0;
  }
  return;
}



void Unwind_00f6f140(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x30);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + 0x34) = 0;
    *(undefined4 *)(unaff_EBP + 0x38) = 0;
  }
  return;
}



void Unwind_00f6f148(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x3c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + 0x3c) = 0;
    *(undefined4 *)(unaff_EBP + 0x40) = 0;
    *(undefined4 *)(unaff_EBP + 0x44) = 0;
  }
  return;
}



void Unwind_00f6f150(void)

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



void Unwind_00f6f158(void)

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



void Unwind_00f6f160(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 4);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + 4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  return;
}



void Unwind_00f6f1a0(void)

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



void Unwind_00f6f1a8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f6f1b0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f6f1b8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x5c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  return;
}



void Unwind_00f6f1f0(void)

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



void Unwind_00f6f1f8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  if (iVar1 != 0) {
    func_0x00ddbb20(iVar1);
    *(int *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  return;
}



void Unwind_00f6f230(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f6f260(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x34) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x34));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f268(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x34) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x34));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f270(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x38) + 8);
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



void FUN_00f6f2a0(void)

{
  FUN_008ab370();
  FUN_008ab370();
                    // WARNING: Could not recover jumptable at 0x008ab0a0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler3();
  return;
}



void Unwind_00f6f2d0(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  pcVar3 = *(char **)(unaff_EBP + 8);
  if (*pcVar3 != '\0') {
    uVar1 = *(uint *)(pcVar3 + 0x18);
    if (0xf < uVar1) {
      iVar2 = *(int *)(pcVar3 + 4);
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
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    pcVar3[0x18] = '\x0f';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[4] = '\0';
  }
  return;
}



void Unwind_00f6f310(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x2c) - iVar1 & 0xfffffff8;
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
    *(int *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f6f33a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f6f342(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f36f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00f6f399(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x20);
  return;
}



void Unwind_00f6f3c8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f6f3f2(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eabd0f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 6;
  func_0x00e7055f(unaff_EBP + -0x48,uVar1);
  iStack_8._0_1_ = 5;
  if (*(void **)(unaff_EBP + -0x1c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_8._0_1_ = 4;
  if (*(void **)(unaff_EBP + -0x24) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iStack_8._0_1_ = 3;
  if (*(void **)(unaff_EBP + -0x2c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iStack_8._0_1_ = 2;
  if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iStack_8._0_1_ = 1;
  if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (*(void **)(unaff_EBP + -0x44) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  iStack_8 = 0xffffffff;
  func_0x00e6ffe4();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f3fa(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f6f424(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x18);
  return;
}



void Unwind_00f6f431(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f6f45b(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar1 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
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



void Unwind_00f6f474(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f6f49e(void)

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



void Unwind_00f6f4c8(void)

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



void Unwind_00f6f4f2(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x5c);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 0x60,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f51f(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x5c);
  puStack_c = &DAT_00f6f4d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  func_0x008ab0a6(iVar1 + 0x60,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f6f54c(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
    return iVar5;
  }
  return in_EAX;
}



int Unwind_00f6f576(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + -0x10);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
    return iVar5;
  }
  return in_EAX;
}



void Unwind_00f6f5a0(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x5c);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 0x60,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f5cd(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x5c);
  puStack_c = &DAT_00f6f4d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  func_0x008ab0a6(iVar1 + 0x60,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f5fa(void)

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



void Unwind_00f6f602(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x5c);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 0x60,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f60d(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6f502;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  FUN_004632a0(uVar1,&PTR_vftable_012babe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f639(void)

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



void Unwind_00f6f641(void)

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
  puVar3 = (undefined4 *)(iVar1 + 0x5c);
  puStack_c = &DAT_00f6f4d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  func_0x008ab0a6(iVar1 + 0x60,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f64c(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6f52f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  FID_conflict__bad_alloc(uVar1,&PTR_vftable_012bab78);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f6f678(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
    return iVar5;
  }
  return in_EAX;
}



int Unwind_00f6f680(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
    return iVar5;
  }
  return in_EAX;
}



int Unwind_00f6f688(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
    return iVar5;
  }
  return in_EAX;
}



int Unwind_00f6f690(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_EAX;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
    return iVar5;
  }
  return in_EAX;
}



uint Unwind_00f6f6ba(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
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
    uVar7 = *puVar1;
    uVar6 = *puVar1;
    *puVar1 = uVar7 - 1;
    UNLOCK();
    if (uVar7 - 1 == 0) {
      pcVar4 = *(code **)*piVar5;
      _guard_check_icall();
      uVar6 = (*pcVar4)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar4 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar6 = (*pcVar4)();
      }
    }
    return uVar6;
  }
  return uVar7;
}



void Unwind_00f6f6f5(void)

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
  piVar1 = *(int **)(unaff_EBP + 0x2c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + 8),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f6f71f(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6c) + 8);
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



void Unwind_00f6f727(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x14) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6f72f(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -100) + 8);
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



void Unwind_00f6f737(void)

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



void Unwind_00f6f76b(void)

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



void Unwind_00f6f773(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x50) + 8);
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



void Unwind_00f6f7a7(void)

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



void Unwind_00f6f7af(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x4c) + 8);
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



void Unwind_00f6f7e3(void)

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



void Unwind_00f6f7eb(void)

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



void Unwind_00f6f822(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  if (0xf < *(uint *)(unaff_EBP + -100)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f6f82a(void)

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



void Unwind_00f6f861(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00f6f869(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x10) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x10);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f6f893(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00f6f8bd(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x34);
  return;
}



void Unwind_00f6f8ec(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x34),0x10);
  return;
}



void Unwind_00f6f8f9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x28);
    if (0xf < *(uint *)(unaff_EBP + -0x14)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6f93e(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x44);
  return;
}



void Unwind_00f6f96d(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),8);
  return;
}



void Unwind_00f6f99c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x58);
  return;
}



void Unwind_00f6f9a9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00eabd0f;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 6;
    func_0x00e7055f(unaff_EBP + -0x48,uVar1);
    iStack_8._0_1_ = 5;
    if (*(void **)(unaff_EBP + -0x1c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_8._0_1_ = 4;
    if (*(void **)(unaff_EBP + -0x24) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x24));
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_8._0_1_ = 3;
    if (*(void **)(unaff_EBP + -0x2c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    iStack_8._0_1_ = 2;
    if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iStack_8._0_1_ = 1;
    if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (*(void **)(unaff_EBP + -0x44) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    iStack_8 = 0xffffffff;
    func_0x00e6ffe4();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6f9c2(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = std::_Facet_base::vftable;
  return;
}



void Unwind_00f6f9ec(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x18);
  return;
}



void Unwind_00f6f9f9(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00eabd0f;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 6;
    func_0x00e7055f(unaff_EBP + -0x48,uVar1);
    iStack_8._0_1_ = 5;
    if (*(void **)(unaff_EBP + -0x1c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_8._0_1_ = 4;
    if (*(void **)(unaff_EBP + -0x24) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x24));
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_8._0_1_ = 3;
    if (*(void **)(unaff_EBP + -0x2c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    iStack_8._0_1_ = 2;
    if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iStack_8._0_1_ = 1;
    if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (*(void **)(unaff_EBP + -0x44) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    iStack_8 = 0xffffffff;
    func_0x00e6ffe4();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6fa12(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f6fa3c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x44);
  return;
}



void Unwind_00f6fa49(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puStack_c = &DAT_00eabd0f;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 6;
    func_0x00e7055f(unaff_EBP + -0x48,uVar1);
    iStack_8._0_1_ = 5;
    if (*(void **)(unaff_EBP + -0x1c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_8._0_1_ = 4;
    if (*(void **)(unaff_EBP + -0x24) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x24));
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_8._0_1_ = 3;
    if (*(void **)(unaff_EBP + -0x2c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    iStack_8._0_1_ = 2;
    if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iStack_8._0_1_ = 1;
    if (*(void **)(unaff_EBP + -0x3c) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (*(void **)(unaff_EBP + -0x44) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x44));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    iStack_8 = 0xffffffff;
    func_0x00e6ffe4();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f6fa84(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0xc);
  return;
}



void Unwind_00f6fab3(void)

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



void Unwind_00f6fadd(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x100) + 8);
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



void Unwind_00f6fae8(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x100) + 8);
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



void Unwind_00f6faf3(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x14) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6fafb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x128);
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



void Unwind_00f6fb1d(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x100) + 8);
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



void Unwind_00f6fb28(void)

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



void Unwind_00f6fb33(void)

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



void Unwind_00f6fb3b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffd;
    if (7 < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x00e7ec74();
      func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x70),*(int *)(unaff_EBP + -0x5c) * 2 + 2);
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 7;
    *(undefined2 *)(unaff_EBP + -0x70) = 0;
    return;
  }
  return;
}



void Unwind_00f6fb5a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffb;
    if (7 < *(uint *)(unaff_EBP + -0x8c)) {
      func_0x00e7ec74();
      func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0xa0),*(int *)(unaff_EBP + -0x8c) * 2 + 2);
    }
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 7;
    *(undefined2 *)(unaff_EBP + -0xa0) = 0;
    return;
  }
  return;
}



void Unwind_00f6fb7c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffff7;
    if (7 < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x00e7ec74();
      func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x70),*(int *)(unaff_EBP + -0x5c) * 2 + 2);
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 7;
    *(undefined2 *)(unaff_EBP + -0x70) = 0;
    return;
  }
  return;
}



void Unwind_00f6fb9b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xffffffef;
    if (7 < *(uint *)(unaff_EBP + -0xa4)) {
      func_0x00e7ec74();
      func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0xb8),*(int *)(unaff_EBP + -0xa4) * 2 + 2);
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 7;
    *(undefined2 *)(unaff_EBP + -0xb8) = 0;
    return;
  }
  return;
}



void Unwind_00f6fbbd(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xffffffdf;
    if (7 < *(uint *)(unaff_EBP + -0xbc)) {
      func_0x00e7ec74();
      func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0xd0),*(int *)(unaff_EBP + -0xbc) * 2 + 2);
    }
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 7;
    *(undefined2 *)(unaff_EBP + -0xd0) = 0;
    return;
  }
  return;
}



void Unwind_00f6fbdf(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x44)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x58),*(int *)(unaff_EBP + -0x44) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 7;
  *(undefined2 *)(unaff_EBP + -0x58) = 0;
  return;
}



void Unwind_00f6fc16(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x100) + 8);
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



void Unwind_00f6fc21(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x100) + 8);
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



void Unwind_00f6fc2c(void)

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



void Unwind_00f6fc34(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x128);
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



void Unwind_00f6fc56(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x100) + 8);
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



void Unwind_00f6fc61(void)

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



void Unwind_00f6fc6c(void)

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



void Unwind_00f6fc74(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x70);
    if (7 < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6fc93(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
    if (7 < *(uint *)(unaff_EBP + -0x8c)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c));
    }
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6fcb5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x70);
    if (7 < *(uint *)(unaff_EBP + -0x5c)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x5c));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6fcd4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
    if (7 < *(uint *)(unaff_EBP + -0xa4)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4));
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6fcf6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
    if (7 < *(uint *)(unaff_EBP + -0xbc)) {
      func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
    }
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f6fd18(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  if (7 < *(uint *)(unaff_EBP + -0x44)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x44));
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f6fd4f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  if (iVar1 == 0) {
    return;
  }
  free(*(void **)(iVar1 + 8));
  free(*(void **)(iVar1 + 0x10));
  free(*(void **)(iVar1 + 0x14));
  free(*(void **)(iVar1 + 0x18));
  return;
}



void Unwind_00f6fd79(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  if (iVar1 == 0) {
    return;
  }
  free(*(void **)(iVar1 + 8));
  free(*(void **)(iVar1 + 0x10));
  free(*(void **)(iVar1 + 0x14));
  return;
}



void Unwind_00f6fdad(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  if (iVar1 == 0) {
    return;
  }
  free(*(void **)(iVar1 + 8));
  free(*(void **)(iVar1 + 0xc));
  free(*(void **)(iVar1 + 0x10));
  return;
}



void Unwind_00f6fdd7(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x4c) + 8);
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



void Unwind_00f6fddf(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x14) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6fde7(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x4c) + 8);
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



void Unwind_00f6fdef(void)

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



void Unwind_00f6fe23(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x18);
  return;
}



void Unwind_00f6fe30(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f6fe38(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x58);
  return;
}



void Unwind_00f6fe45(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = std::_Facet_base::vftable;
  return;
}



void Unwind_00f6fe4d(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x58);
  return;
}



void Unwind_00f6fe5a(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = std::_Facet_base::vftable;
  return;
}



void Unwind_00f6fe62(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x44);
  return;
}



void Unwind_00f6fe91(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + 0x38)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + 0x24),*(int *)(unaff_EBP + 0x38) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + 0x34) = 0;
  *(undefined4 *)(unaff_EBP + 0x38) = 7;
  *(undefined2 *)(unaff_EBP + 0x24) = 0;
  return;
}



void Unwind_00f6fe99(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f6fea1(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f6fea9(void)

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



void Unwind_00f6feb1(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x14) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f6feb9(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x40),*(int *)(unaff_EBP + -0x2c) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f6fef0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + 0x24);
  if (7 < *(uint *)(unaff_EBP + 0x38)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + 0x38));
  }
  *(undefined4 *)(unaff_EBP + 0x34) = 0;
  *(undefined4 *)(unaff_EBP + 0x38) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f6fef8(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f6ff00(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f6ff08(void)

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



void Unwind_00f6ff10(void)

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



void Unwind_00f6ff18(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f6ff4f(void)

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



void Unwind_00f6ff83(void)

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



void Unwind_00f6ffb7(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3c) + 8);
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



void Unwind_00f6ffeb(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3c) + 8);
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



void Unwind_00f7001f(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x330) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x330) + 8);
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



void Unwind_00f70059(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x38) + 8);
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



void Unwind_00f7008d(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x38) + 8);
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



void Unwind_00f700c1(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f700c9(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x34)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x48),*(int *)(unaff_EBP + -0x34) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 7;
  *(undefined2 *)(unaff_EBP + -0x48) = 0;
  return;
}



void Unwind_00f700d1(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x60),*(int *)(unaff_EBP + -0x4c) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(undefined2 *)(unaff_EBP + -0x60) = 0;
  return;
}



void Unwind_00f700d9(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x60),*(int *)(unaff_EBP + -0x4c) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(undefined2 *)(unaff_EBP + -0x60) = 0;
  return;
}



void Unwind_00f700e1(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f70115(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f7011d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (7 < *(uint *)(unaff_EBP + -0x34)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f70125(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  if (7 < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f7012d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x60);
  if (7 < *(uint *)(unaff_EBP + -0x4c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f70135(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x78) + 8);
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



void Unwind_00f70169(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x10) + 8);
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



void Unwind_00f70193(void)

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



void Unwind_00f701bd(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x10) + 8);
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



void Unwind_00f701e7(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x14) + 8);
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



void Unwind_00f70211(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x48) + 8);
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



void Unwind_00f70219(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x40),*(int *)(unaff_EBP + -0x2c) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)(unaff_EBP + -0x40) = 0;
  return;
}



void Unwind_00f7024d(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -100) + 8);
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



void Unwind_00f70255(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x50),*(int *)(unaff_EBP + -0x3c) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 7;
  *(undefined2 *)(unaff_EBP + -0x50) = 0;
  return;
}



void Unwind_00f70289(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x48) + 8);
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



void Unwind_00f70291(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x40);
  if (7 < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f702c5(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -100) + 8);
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



void Unwind_00f702cd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (7 < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f70301(void)

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



void Unwind_00f70335(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x44) + 8);
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



void Unwind_00f7033d(void)

{
  int unaff_EBP;
  
  if (7 < *(uint *)(unaff_EBP + -0x14)) {
    func_0x00e7ec74();
    func_0x0046bce0(*(undefined4 *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x14) * 2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 7;
  *(undefined2 *)(unaff_EBP + -0x28) = 0;
  return;
}



void Unwind_00f70371(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34);
  if (7 < *(uint *)(unaff_EBP + -0x20)) {
    func_0x005895e0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 7;
  *(undefined2 *)puVar1 = 0;
  return;
}



void Unwind_00f703a5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (7 < (uint)puVar1[5]) {
      func_0x00e7ec74();
      func_0x0046bce0(*puVar1,puVar1[5] * 2 + 2);
    }
    puVar1[4] = 0;
    puVar1[5] = 7;
    *(undefined2 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f703e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
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



void Unwind_00f7041b(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x104) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x104) + 8);
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



void Unwind_00f70426(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x104) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x104) + 8);
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



void Unwind_00f70431(void)

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



void Unwind_00f70439(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x134);
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



void Unwind_00f7045b(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x114) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x114) + 8);
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



void Unwind_00f70466(void)

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



void Unwind_00f70471(void)

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



void Unwind_00f70479(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffd;
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



void Unwind_00f70498(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0xa0);
    if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8c));
    }
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f704ba(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xfffffff7;
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



void Unwind_00f704d9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb8);
    if (0xf < *(uint *)(unaff_EBP + -0xa4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa4));
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f704fb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe0) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0xe0) = *(uint *)(unaff_EBP + -0xe0) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xd0);
    if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbc));
    }
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f7051d(void)

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



void Unwind_00f70554(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x58);
  return;
}

