  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 4) = angle::Subject::vftable;
  puVar5 = *(undefined4 **)(iVar3 + 0x28);
  puVar1 = puVar5 + *(int *)(iVar3 + 0x2c);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  if (*(int *)(iVar3 + 0x28) != iVar3 + 8) {
    func_0x008ab37e(*(int *)(iVar3 + 0x28));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44593(void)

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



void Unwind_00f4459b(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  piVar2 = (int *)(iVar1 + 0x40);
  if (*piVar2 != 0) {
    func_0x004e7c10(*piVar2,*(undefined4 *)(iVar1 + 0x44),piVar2);
    func_0x004c7ff0(*piVar2,(*(int *)(iVar1 + 0x48) - *piVar2 >> 3) * -0x55555555);
    *piVar2 = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  return;
}



void Unwind_00f445a6(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x4c);
  if (iVar1 != 0) {
    uVar4 = ((*(int *)(iVar2 + 0x54) - iVar1) / 0xc) * 0xc;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *(int *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
  }
  return;
}



void Unwind_00f445b1(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  int iVar8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  piVar6 = (int *)(iVar4 + 0x58);
  puVar7 = (undefined4 *)*piVar6;
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(iVar4 + 0x5c);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 0x36) {
      pcVar2 = *(code **)*puVar7;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    iVar3 = *piVar6;
    uVar5 = ((*(int *)(iVar4 + 0x60) - iVar3) / 0xd8) * 0xd8;
    iVar8 = iVar3;
    if (0xfff < uVar5) {
      iVar8 = *(int *)(iVar3 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar3 - iVar8) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar8,uVar5);
    *piVar6 = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    *(undefined4 *)(iVar4 + 0x60) = 0;
  }
  return;
}



void Unwind_00f445bc(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0x90);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x98) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
  }
  func_0x0097c250((undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x88));
  func_0x008ab812(*(undefined4 *)(iVar2 + 0x88),0x28);
  return;
}



void Unwind_00f445ca(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x5b0);
  return;
}



void Unwind_00f445dc(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xa8);
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



void Unwind_00f445ea(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3c970;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(iVar3 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar4 = piVar1[1] + -1;
    piVar1[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar5);
      (*pcVar2)();
      LOCK();
      iVar4 = piVar1[2] + -1;
      piVar1[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  func_0x0097d960();
  func_0x0097dad0();
  func_0x009743a0();
  FUN_004c7ec0();
  uVar5 = *(uint *)(iVar3 + 0x54);
  if (0xf < uVar5) {
    iVar4 = *(int *)(iVar3 + 0x40);
    uVar7 = uVar5 + 1;
    iVar6 = iVar4;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar4 + -4);
      uVar7 = uVar5 + 0x24;
      if (0x1f < (iVar4 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
  }
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x54) = 0xf;
  *(undefined1 *)(iVar3 + 0x40) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f445f5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
  func_0x0097c1d0(puVar1,*puVar1);
  func_0x008ab812(*puVar1,0x24);
  return;
}



void Unwind_00f44600(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x14) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f4460b(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x100);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x108) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0x100) = 0;
    *(undefined4 *)(iVar2 + 0x104) = 0;
    *(undefined4 *)(iVar2 + 0x108) = 0;
  }
  func_0x0097c1d0((undefined4 *)(iVar2 + 0xf8),*(undefined4 *)(iVar2 + 0xf8));
  func_0x008ab812(*(undefined4 *)(iVar2 + 0xf8),0x24);
  return;
}



void Unwind_00f44619(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x120);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x128) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
    *(undefined4 *)(iVar2 + 0x128) = 0;
  }
  func_0x0097c250((undefined4 *)(iVar2 + 0x118),*(undefined4 *)(iVar2 + 0x118));
  func_0x008ab812(*(undefined4 *)(iVar2 + 0x118),0x28);
  return;
}



void Unwind_00f44627(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x140);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x148) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(undefined4 *)(iVar2 + 0x140) = 0;
    *(undefined4 *)(iVar2 + 0x144) = 0;
    *(undefined4 *)(iVar2 + 0x148) = 0;
  }
  func_0x0097c250((undefined4 *)(iVar2 + 0x138),*(undefined4 *)(iVar2 + 0x138));
  func_0x008ab812(*(undefined4 *)(iVar2 + 0x138),0x28);
  return;
}



void Unwind_00f44635(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x158);
  if (iVar1 != 0) {
    func_0x0097dd70(iVar1);
  }
  return;
}



void Unwind_00f44670(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
  func_0x0097c250(puVar1,*puVar1);
  func_0x008ab812(*puVar1,0x28);
  return;
}



void Unwind_00f4467b(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x14) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f446b0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x2c) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f446f0(void)

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



void Unwind_00f446f8(void)

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



void Unwind_00f44730(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x94);
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



void Unwind_00f4474c(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe4) + 4) + -8 + unaff_EBP + -0xdc) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0xe4) + 4);
  *(int *)(iVar1 + -0xc + unaff_EBP + -0xdc) = iVar1 + -8;
  return;
}



void Unwind_00f44757(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44762(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffff7;
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



void Unwind_00f4477b(void)

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



void Unwind_00f44783(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 0x10) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xffffffef;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4479c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f447e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1e4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1e4) = *(uint *)(unaff_EBP + -0x1e4) & 0xfffffffe;
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



void Unwind_00f447ff(void)

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



void Unwind_00f44807(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + -0xa4);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xb8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb8) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0xbc);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xd0);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xd0) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0xec);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xe4) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0xec) = 0;
    *(undefined4 *)(unaff_EBP + -0xe8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0xf0);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x104);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xf4) = 0;
  *(undefined4 *)(unaff_EBP + -0xf0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x104) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x108);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x11c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  *(undefined4 *)(unaff_EBP + -0x108) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x11c) = 0;
  return;
}



void Unwind_00f44812(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  uVar5 = *(uint *)(unaff_EBP + -0x158);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x16c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x15c) = 0;
  *(undefined4 *)(unaff_EBP + -0x158) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x16c) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x170);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x184);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x174) = 0;
  *(undefined4 *)(unaff_EBP + -0x170) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x184) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0x1a0);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x198) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
    *(undefined4 *)(unaff_EBP + -0x19c) = 0;
    *(undefined4 *)(unaff_EBP + -0x198) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0x1a4);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x1b8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x1b8) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x1bc);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x1d0);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0;
  *(undefined4 *)(unaff_EBP + -0x1bc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x1d0) = 0;
  return;
}



void Unwind_00f4481d(void)

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



void Unwind_00f44825(void)

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



void Unwind_00f44860(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44872(void)

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



void Unwind_00f448b0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c4);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(unaff_EBP + -0x1bc) - iVar1);
    *(int *)(unaff_EBP + -0x1c4) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c0) = 0;
    *(undefined4 *)(unaff_EBP + -0x1bc) = 0;
  }
  return;
}



void Unwind_00f448bb(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1b8) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1b8) = *(uint *)(unaff_EBP + -0x1b8) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x1a0) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x1a0) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f448dd(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x100) = gl::ActiveVariable::vftable;
  uVar5 = *(uint *)(unaff_EBP + -0x78);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0x8c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x8c) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0x90);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xa4);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa4) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(unaff_EBP + -0xc0);
  if (iVar1 != 0) {
    uVar5 = *(int *)(unaff_EBP + -0xb8) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0xc4);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xd8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -200) = 0;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xd8) = 0;
  uVar5 = *(uint *)(unaff_EBP + -0xdc);
  if (0xf < uVar5) {
    iVar1 = *(int *)(unaff_EBP + -0xf0);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xf0) = 0;
  return;
}



void Unwind_00f448e8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1b8) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1b8) = *(uint *)(unaff_EBP + -0x1b8) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x1a0) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x1a0) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f4490a(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + -400,0x18,6,FUN_00469ba0,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44915(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1b8) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1b8) = *(uint *)(unaff_EBP + -0x1b8) & 0xfffffffe;
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



void Unwind_00f44934(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1b8) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1b8) = *(uint *)(unaff_EBP + -0x1b8) & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x1a0) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x1a0) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44990(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x10) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  return;
}



void Unwind_00f449c0(void)

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



void Unwind_00f449c8(void)

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



void Unwind_00f44a00(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
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



void Unwind_00f44a40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
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



void Unwind_00f44a90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -100) & 1) != 0) {
    *(uint *)(unaff_EBP + -100) = *(uint *)(unaff_EBP + -100) & 0xfffffffe;
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



void Unwind_00f44ae0(void)

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



void Unwind_00f44b10(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  func_0x00961680(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f44b18(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x30);
  }
  return;
}



void Unwind_00f44b20(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x30);
  }
  return;
}



void Unwind_00f44b50(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44b58(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x2c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44b60(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f1f3ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x20),0x2c,uVar1,unaff_EBP + -0x24,unaff_EBP + -0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44b90(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xdc) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xdc) + 4);
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



void Unwind_00f44bd0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xe4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xe4) + 4);
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



void Unwind_00f44c10(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x60);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x58) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  return;
}



void Unwind_00f44c18(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x48) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44c20(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x48) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44c28(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x48) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44c41(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x48),0xb0);
  return;
}



void Unwind_00f44c80(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x154));
  return;
}



void Unwind_00f44c8b(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x150));
  return;
}



void Unwind_00f44c96(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x150),0x4d0);
  return;
}



void Unwind_00f44cab(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x150) + 4);
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



void Unwind_00f44cb6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x180) != 0) {
    func_0x0097dd70(*(int *)(unaff_EBP + -0x180));
  }
  return;
}



void Unwind_00f44cc1(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBP + -0x17c);
  if (iVar1 != 0) {
    uVar3 = ((*(int *)(unaff_EBP + -0x174) - iVar1) / 0xc) * 0xc;
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
    *(int *)(unaff_EBP + -0x17c) = 0;
    *(undefined4 *)(unaff_EBP + -0x178) = 0;
    *(undefined4 *)(unaff_EBP + -0x174) = 0;
  }
  return;
}



void Unwind_00f44ccc(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3e520;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + -0x70,0xc,6,FUN_0096c360,uVar1);
  uStack_8 = 1;
  func_0x008ab4ad(unaff_EBP + -0xb8,0xc,6,FUN_0096c3e0);
  uStack_8 = 2;
  func_0x008ab4ad(unaff_EBP + -0x100,0xc,6,FUN_0096c3e0);
  uStack_8 = 3;
  func_0x008ab4ad(unaff_EBP + -0x148,0xc,6,FUN_0096c3e0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44cd7(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x170) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x170) = *(uint *)(unaff_EBP + -0x170) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x168) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x168) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44cf9(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x150),0xb0);
  return;
}



void Unwind_00f44d40(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + -0x58,0xc,6,FUN_0096c3e0,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f44d48(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x8c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x8c) = *(uint *)(unaff_EBP + -0x8c) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x6c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x6c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44d67(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x6c),0xb0);
  return;
}



void Unwind_00f44db0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 8) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffff7;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x28) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44dc9(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44ddb(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44df4(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44e06(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x24) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44e0e(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x24) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44e16(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44e2f(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44e41(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 4) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffb;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44e5a(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44e6c(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x10) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xffffffef;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44e85(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44e97(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x20) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xffffffdf;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44eb0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44ec2(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x80) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xffffff7f;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44ee0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44ef2(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x200) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffdff;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44f10(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44f22(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x40) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xffffffbf;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44f3b(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44f4d(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x100) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffeff;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x30) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44f6b(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x30),0xb0);
  return;
}



void Unwind_00f44fa0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x18) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f44fb9(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0xb0);
  return;
}



void Unwind_00f44fcb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x0097dd70(*(int *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f44fd3(void)

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



void Unwind_00f44fdb(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x4d0);
  return;
}



void Unwind_00f44fed(void)

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



void Unwind_00f45020(void)

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



void Unwind_00f45028(void)

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



void Unwind_00f45030(void)

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



void Unwind_00f45070(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
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



void Unwind_00f450b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x0097dd70(*(int *)(unaff_EBP + -0x24));
  }
  return;
}



void Unwind_00f450b8(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_00f450f0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x30) - iVar1;
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
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f450f8(void)

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



void Unwind_00f45100(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x98);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0x100) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x100) + 4);
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



void Unwind_00f4510b(void)

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



void Unwind_00f45150(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x3c);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(unaff_EBP + -0x34) - iVar1 >> 2);
    *(int *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  return;
}



void Unwind_00f45180(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x5b0);
  return;
}



void Unwind_00f451c0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x10) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f451d9(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0xb0);
  return;
}



void Unwind_00f45210(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    iVar2 = *(int *)(unaff_EBP + -0x34);
    for (iVar4 = *(int *)(unaff_EBP + -0x38); iVar4 != iVar2; iVar4 = iVar4 + 0x10) {
      func_0x0097db60();
    }
    iVar4 = *(int *)(unaff_EBP + -0x40);
    uVar3 = *(int *)(unaff_EBP + -0x3c) * 0x10;
    iVar2 = iVar4;
    if (0xfff < uVar3) {
      iVar2 = *(int *)(iVar4 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar4 - iVar2) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar2,uVar3);
  }
  return;
}



void Unwind_00f45218(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  for (iVar2 = *(int *)(unaff_EBP + -0x30); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    func_0x0097db60();
  }
  return;
}



void Unwind_00f45250(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = angle::RefCountObject<>::vftable;
  return;
}



void Unwind_00f45258(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0x18) = gl::LabeledObject::vftable;
  return;
}



void Unwind_00f45263(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0x1c) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f4526e(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 0x20) = angle::Subject::vftable;
  puVar5 = *(undefined4 **)(iVar3 + 0x44);
  puVar1 = puVar5 + *(int *)(iVar3 + 0x48);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  if (*(int *)(iVar3 + 0x44) != iVar3 + 0x24) {
    func_0x008ab37e(*(int *)(iVar3 + 0x44));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45279(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f45284(void)

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



void Unwind_00f4528c(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x5b0);
  return;
}



void Unwind_00f4529e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar3 + 0x8c);
  if (iVar1 != 0) {
    func_0x00974450();
    func_0x008ab812(iVar1,0x5b0);
  }
  *(undefined4 *)(iVar3 + 0x8c) = 0;
  uVar2 = *(uint *)(iVar3 + 0x68);
  if (0xf < uVar2) {
    iVar1 = *(int *)(iVar3 + 0x54);
    uVar6 = uVar2 + 1;
    iVar5 = iVar1;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0xf;
  *(undefined1 *)(iVar3 + 0x54) = 0;
  return;
}



void Unwind_00f452a9(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)(iVar1 + 0x94);
  iVar6 = *piVar5;
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar1 + 0x98);
    for (; iVar6 != iVar3; iVar6 = iVar6 + 0x10) {
      FUN_00953180();
    }
    iVar6 = *piVar5;
    uVar4 = *(int *)(iVar1 + 0x9c) - iVar6 & 0xfffffff0;
    iVar3 = iVar6;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar6 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar6 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
  }
  return;
}



void Unwind_00f452b7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar6 = (undefined4 *)(iVar4 + 0xa0);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar4 + 0xac);
  *puVar6 = angle::ObserverBinding::vftable;
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar7 = *(int *)(iVar2 + 0x28) - 1;
    if (uVar7 != 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      do {
        if (*(undefined4 **)(iVar3 + uVar5 * 4) == puVar6) {
          *(undefined4 *)(iVar3 + uVar5 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  *puVar6 = angle::ObserverBindingBase::vftable;
  *(undefined4 *)(iVar4 + 0xac) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f452f0(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if (iVar1 != 0) {
    uVar3 = ((*(int *)(unaff_EBP + -0x1c) - iVar1) / 0xc) * 0xc;
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
    *(int *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  return;
}



void Unwind_00f452f8(void)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45300(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3e520;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + 0x518,0xc,6,FUN_0096c360,uVar1);
  uStack_8 = 1;
  func_0x008ab4ad(unaff_EBP + 0x4d0,0xc,6,FUN_0096c3e0);
  uStack_8 = 2;
  func_0x008ab4ad(unaff_EBP + 0x488,0xc,6,FUN_0096c3e0);
  uStack_8 = 3;
  func_0x008ab4ad(unaff_EBP + 0x440,0xc,6,FUN_0096c3e0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4530b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(unaff_EBP + 0x564,0xc,6,FUN_0096c3e0,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45316(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x78);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x70) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  func_0x0097c250((undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x80));
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x80),0x28);
  return;
}



void Unwind_00f45321(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x58);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x50) - iVar1 & 0xfffffffc;
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
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  func_0x0097c250((undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x60));
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x60),0x28);
  return;
}



void Unwind_00f45360(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x2c);
  *puVar2 = gl::ShaderVariableBuffer::vftable;
  iVar1 = puVar2[4];
  if (iVar1 != 0) {
    uVar5 = puVar2[6] - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
  }
  *puVar2 = gl::ActiveVariable::vftable;
  return;
}



void Unwind_00f45368(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x30));
  }
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f453a0(void)

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



void Unwind_00f453a8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -100) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -100) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f453b0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x6c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x6c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f453b8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -100) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -100) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f453c0(void)

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



void Unwind_00f453c8(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x60) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x60) = *(uint *)(unaff_EBP + -0x60) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cff0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = false;
  uVar6 = 0;
  if (*(int *)(unaff_EBP + -0x7c) != 0) {
    func_0x0046a470(auStack_2c,uStack_14);
    bVar3 = true;
    if (iStack_1c != 0) {
      bVar2 = true;
      goto LAB_008c2b74;
    }
  }
  bVar2 = false;
LAB_008c2b74:
  if (bVar3) {
    if (0xf < uStack_18) {
      uVar4 = uStack_18 + 1;
      uVar5 = auStack_2c[0];
      if (0xfff < uVar4) {
        uVar5 = *(uint *)(auStack_2c[0] - 4);
        uVar4 = uStack_18 + 0x24;
        if (0x1f < (auStack_2c[0] - uVar5) - 4) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(uVar5,uVar4);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  if (bVar2) {
    func_0x004849e0(*(int *)(unaff_EBP + -0x7c) + 0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void Unwind_00f453e1(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x80),0xb0);
  return;
}



void Unwind_00f45420(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f45428(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x18) + 4) = gl::LabeledObject::vftable;
  return;
}



void Unwind_00f45433(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 8) = angle::Subject::vftable;
  puVar5 = *(undefined4 **)(iVar3 + 0x2c);
  puVar1 = puVar5 + *(int *)(iVar3 + 0x30);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  if (*(int *)(iVar3 + 0x2c) != iVar3 + 0xc) {
    func_0x008ab37e(*(int *)(iVar3 + 0x2c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4543e(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f45449(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(uVar1,0x2c,8,FUN_008e8b00,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45451(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f45640;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar2 + 0x188);
  while (iVar1 != 0) {
    *(int *)(iVar2 + 0x188) = iVar1 + -1;
    uVar4 = FUN_00968b30(uVar3);
    func_0x00968bc0(uVar4);
    FUN_008e8b00();
    iVar1 = *(int *)(iVar2 + 0x188);
  }
  uStack_8 = 0;
  func_0x008ab4ad(iVar2 + 0x28,0x2c,8,FUN_008e8b00);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4545c(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f4546a(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45478(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar3 + 0x208);
  while (iVar2 != 0) {
    *(int *)(iVar3 + 0x208) = iVar2 + -1;
    *(undefined4 *)(iVar3 + 0x1e8 + (iVar2 + -1) * 4) = 0;
    iVar2 = *(int *)(iVar3 + 0x208);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45486(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45494(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f454a2(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f454b0(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f454be(void)

{
  int iVar1;
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
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_008e8b00(uVar4);
  FUN_008e8b00();
  FUN_008e8b00();
  FUN_008e8b00();
  iVar1 = *(int *)(iVar2 + 0x240);
  while (iVar1 != 0) {
    *(int *)(iVar2 + 0x240) = iVar1 + -1;
    *(undefined4 *)(iVar2 + 0x220 + (iVar1 + -1) * 4) = 0;
    iVar1 = *(int *)(iVar2 + 0x240);
  }
  FUN_008e8b00(uVar4);
  FUN_008e8b00();
  func_0x0098a9c0();
  uVar4 = *(uint *)(iVar2 + 0x5c);
  if (0xf < uVar4) {
    iVar1 = *(int *)(iVar2 + 0x48);
    uVar6 = uVar4 + 1;
    iVar5 = iVar1;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar6 = uVar4 + 0x24;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0xf;
  *(undefined1 *)(iVar2 + 0x48) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f454c9(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar2 + 0x3c8);
  while (iVar1 != 0) {
    *(int *)(iVar2 + 0x3c8) = iVar1 + -1;
    uVar4 = FUN_00953120(uVar3);
    func_0x009532b0(uVar4);
    FUN_00953180();
    iVar1 = *(int *)(iVar2 + 0x3c8);
  }
  uStack_8 = 0;
  func_0x008ab4ad(iVar2 + 0x348,0x10,8,FUN_00953180);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f454d7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puVar6 = (undefined4 *)(iVar4 + 0x3cc);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar4 + 0x3d8);
  *puVar6 = angle::ObserverBinding::vftable;
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar7 = *(int *)(iVar2 + 0x28) - 1;
    if (uVar7 != 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      do {
        if (*(undefined4 **)(iVar3 + uVar5 * 4) == puVar6) {
          *(undefined4 *)(iVar3 + uVar5 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  *puVar6 = angle::ObserverBindingBase::vftable;
  *(undefined4 *)(iVar4 + 0x3d8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f454e5(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puVar6 = (undefined4 *)(iVar4 + 0x3dc);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar4 + 1000);
  *puVar6 = angle::ObserverBinding::vftable;
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar7 = *(int *)(iVar2 + 0x28) - 1;
    if (uVar7 != 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      do {
        if (*(undefined4 **)(iVar3 + uVar5 * 4) == puVar6) {
          *(undefined4 *)(iVar3 + uVar5 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  *puVar6 = angle::ObserverBindingBase::vftable;
  *(undefined4 *)(iVar4 + 1000) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f454f3(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 0x3fc);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f45530(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = angle::ObserverInterface::vftable;
  return;
}



void Unwind_00f45538(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 4) = gl::LabeledObject::vftable;
  return;
}



void Unwind_00f45543(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 8) = angle::Subject::vftable;
  puVar5 = *(undefined4 **)(iVar3 + 0x2c);
  puVar1 = puVar5 + *(int *)(iVar3 + 0x30);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  if (*(int *)(iVar3 + 0x2c) != iVar3 + 0xc) {
    func_0x008ab37e(*(int *)(iVar3 + 0x2c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4554e(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  if (0xf < *(uint *)(iVar1 + 0x24)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f45559(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(uVar1,0x2c,8,FUN_008e8b00,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45561(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f45640;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar2 + 0x188);
  while (iVar1 != 0) {
    *(int *)(iVar2 + 0x188) = iVar1 + -1;
    uVar4 = FUN_00968b30(uVar3);
    func_0x00968bc0(uVar4);
    FUN_008e8b00();
    iVar1 = *(int *)(iVar2 + 0x188);
  }
  uStack_8 = 0;
  func_0x008ab4ad(iVar2 + 0x28,0x2c,8,FUN_008e8b00);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4556c(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f4557a(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45588(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar3 + 0x208);
  while (iVar2 != 0) {
    *(int *)(iVar3 + 0x208) = iVar2 + -1;
    *(undefined4 *)(iVar3 + 0x1e8 + (iVar2 + -1) * 4) = 0;
    iVar2 = *(int *)(iVar3 + 0x208);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45596(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f455a4(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f455b2(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f455c0(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f455ce(void)

{
  int iVar1;
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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_008e8b00(uVar4);
  FUN_008e8b00();
  FUN_008e8b00();
  FUN_008e8b00();
  iVar1 = *(int *)(iVar2 + 0x240);
  while (iVar1 != 0) {
    *(int *)(iVar2 + 0x240) = iVar1 + -1;
    *(undefined4 *)(iVar2 + 0x220 + (iVar1 + -1) * 4) = 0;
    iVar1 = *(int *)(iVar2 + 0x240);
  }
  FUN_008e8b00(uVar4);
  FUN_008e8b00();
  func_0x0098a9c0();
  uVar4 = *(uint *)(iVar2 + 0x5c);
  if (0xf < uVar4) {
    iVar1 = *(int *)(iVar2 + 0x48);
    uVar6 = uVar4 + 1;
    iVar5 = iVar1;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar6 = uVar4 + 0x24;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0xf;
  *(undefined1 *)(iVar2 + 0x48) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f455d9(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar2 + 0x3c8);
  while (iVar1 != 0) {
    *(int *)(iVar2 + 0x3c8) = iVar1 + -1;
    uVar4 = FUN_00953120(uVar3);
    func_0x009532b0(uVar4);
    FUN_00953180();
    iVar1 = *(int *)(iVar2 + 0x3c8);
  }
  uStack_8 = 0;
  func_0x008ab4ad(iVar2 + 0x348,0x10,8,FUN_00953180);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f455e7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar6 = (undefined4 *)(iVar4 + 0x3cc);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar4 + 0x3d8);
  *puVar6 = angle::ObserverBinding::vftable;
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar7 = *(int *)(iVar2 + 0x28) - 1;
    if (uVar7 != 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      do {
        if (*(undefined4 **)(iVar3 + uVar5 * 4) == puVar6) {
          *(undefined4 *)(iVar3 + uVar5 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  *puVar6 = angle::ObserverBindingBase::vftable;
  *(undefined4 *)(iVar4 + 0x3d8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f455f5(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puVar6 = (undefined4 *)(iVar4 + 0x3dc);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(iVar4 + 1000);
  *puVar6 = angle::ObserverBinding::vftable;
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar7 = *(int *)(iVar2 + 0x28) - 1;
    if (uVar7 != 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      do {
        if (*(undefined4 **)(iVar3 + uVar5 * 4) == puVar6) {
          *(undefined4 *)(iVar3 + uVar5 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  *puVar6 = angle::ObserverBindingBase::vftable;
  *(undefined4 *)(iVar4 + 1000) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45603(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 0x3fc);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00f45660(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf8) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf8) + 4);
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



void Unwind_00f4566b(void)

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



void Unwind_00f456b0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = angle::RefCountObject<>::vftable;
  return;
}



void Unwind_00f456b8(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0x18) = gl::LabeledObject::vftable;
  return;
}



void Unwind_00f456f0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = angle::RefCountObject<>::vftable;
  return;
}



void Unwind_00f45720(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    for (iVar4 = *(int *)(unaff_EBP + -0x20); iVar4 != iVar2; iVar4 = iVar4 + 0x1c) {
      func_0x009539c0();
    }
    iVar4 = *(int *)(unaff_EBP + -0x28);
    uVar3 = *(int *)(unaff_EBP + -0x24) * 0x1c;
    iVar2 = iVar4;
    if (0xfff < uVar3) {
      iVar2 = *(int *)(iVar4 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar4 - iVar2) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar2,uVar3);
  }
  return;
}



void Unwind_00f45750(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x2c4);
  return;
}



void Unwind_00f457b0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x2f0);
  return;
}



void Unwind_00f457c2(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),0x2f4);
  return;
}



void Unwind_00f45800(void)

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
  func_0x008c43a0(0,*(undefined4 *)(unaff_EBP + -0x14),uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45830(void)

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
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    func_0x008c9b20(0xc11,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45838(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x5c) = gl::PixelLocalStoragePlane::ClearCommands::vftable;
  return;
}



void Unwind_00f45870(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -200);
  if (iVar1 != 0) {
    uVar3 = *(int *)(unaff_EBP + -0xc4) * 0x1c;
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
  }
  return;
}



void Unwind_00f4587b(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0xb0);
  for (iVar2 = *(int *)(unaff_EBP + -0xb4); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    func_0x009539c0();
  }
  return;
}



void Unwind_00f45886(void)

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
  func_0x008c3f90(*(undefined4 *)(*(int *)(unaff_EBP + -0xac) + 0x38),uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45891(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  while (iVar2 != 0) {
    *(int *)(unaff_EBP + -0x3c) = iVar2 + -1;
    *(undefined4 *)(unaff_EBP + -0x5c + (iVar2 + -1) * 4) = 0;
    iVar2 = *(int *)(unaff_EBP + -0x3c);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45899(void)

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
  if (*(int *)(unaff_EBP + -0xc4) != 0) {
    func_0x008c9b20(0xc11,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f458a4(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x60);
  while (iVar2 != 0) {
    *(int *)(unaff_EBP + -0x60) = iVar2 + -1;
    *(undefined4 *)(unaff_EBP + -0x80 + (iVar2 + -1) * 4) = 0;
    iVar2 = *(int *)(unaff_EBP + -0x60);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f458ac(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  undefined1 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3c970;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(char *)(*(int *)(unaff_EBP + -0x38) + 0x129d) == '\0') &&
     (*(char *)(*(int *)(unaff_EBP + -0x38) + 0x129e) == '\0')) {
    func_0x008c51e0(*(undefined1 *)(unaff_EBP + -0x30),*(undefined1 *)(unaff_EBP + -0x2f),
                    *(undefined1 *)(unaff_EBP + -0x2e),*(undefined1 *)(unaff_EBP + -0x2d));
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puVar3 = (undefined1 *)(unaff_EBP + -0x2e);
    do {
      func_0x008c5230(iVar2,puVar3[-2],puVar3[-1],*puVar3,puVar3[1],uVar1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar2 < *(int *)(unaff_EBP + -0x34));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f458b4(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0xc0) = gl::PixelLocalStoragePlane::ClearCommands::vftable;
  return;
}



void Unwind_00f458f0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = *(int *)(unaff_EBP + -0x14);
  while (iVar2 != 0) {
    *(int *)(unaff_EBP + -0x14) = iVar2 + -1;
    *(undefined4 *)(unaff_EBP + -0x34 + (iVar2 + -1) * 4) = 0;
    iVar2 = *(int *)(unaff_EBP + -0x14);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00f45950(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
  if (*piVar2 != 0) {
    func_0x009923e0(*piVar2,piVar2[1],piVar2);
    iVar1 = *piVar2;
    uVar4 = ((piVar2[2] - iVar1) / 0x88) * 0x88;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}



void Unwind_00f45958(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x14);
  cVar1 = *(char *)((int)*(int **)(*piVar3 + 4) + 0xd);
  piVar4 = *(int **)(*piVar3 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar3,piVar4[2]);
    piVar2 = (int *)*piVar4;
    func_0x008ab812(piVar4,0x14);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar3,0x14);
  return;
}



void Unwind_00f45990(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
  if (*piVar2 != 0) {
    func_0x009923e0(*piVar2,piVar2[1],piVar2);
    iVar1 = *piVar2;
    uVar4 = ((piVar2[2] - iVar1) / 0x88) * 0x88;
    iVar5 = iVar1;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar4);
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}



void Unwind_00f45998(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(iVar2 + 0x18) - iVar1);
    *(int *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  return;
}



void Unwind_00f459a3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f459ae(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x38);
  if (0xf < *(uint *)(iVar1 + 0x4c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x4c));
  }
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f459b9(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xa4);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x00992640(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x24);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x24);
  return;
}



void Unwind_00f459c7(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f3cf60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0xf4,8,0x10,thunk_FUN_00993470,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f459d5(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x174);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x00992520(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x1c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x1c);
  return;
}



void Unwind_00f459e3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x180);
  if (0xf < *(uint *)(iVar1 + 0x194)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x194));
  }
  *(undefined4 *)(iVar1 + 400) = 0;
  *(undefined4 *)(iVar1 + 0x194) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f459f1(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  puVar1 = (undefined4 *)*piVar6;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)puVar1[4];
    puVar3 = (undefined4 *)*puVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar5 = piVar2[1] + -1;
      piVar2[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)*piVar2;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        iVar5 = piVar2[2] + -1;
        piVar2[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar4 = *(code **)(*piVar2 + 4);
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
    func_0x008ab812(puVar1,0x14);
    puVar1 = puVar3;
  }
  func_0x008ab812(*piVar6,0x14);
  return;
}



void Unwind_00f459fc(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x14) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f45a07(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar6 = *(int *)(unaff_EBP + -0x10);
  if (*(undefined4 **)(iVar6 + 0x230) != (undefined4 *)0x0) {
    pcVar5 = *(code **)**(undefined4 **)(iVar6 + 0x230);
    _guard_check_icall(1);
    (*pcVar5)();
  }
  iVar1 = *(int *)(iVar6 + 0x218);
  if (iVar1 != 0) {
    uVar8 = *(int *)(iVar6 + 0x220) - iVar1 & 0xfffffffc;
    iVar7 = iVar1;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar1 + -4);
      uVar8 = uVar8 + 0x23;
      if (0x1f < (iVar1 - iVar7) - 4U) {
        func_0x008aaf66();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar8);
    *(undefined4 *)(iVar6 + 0x218) = 0;
    *(undefined4 *)(iVar6 + 0x21c) = 0;
    *(undefined4 *)(iVar6 + 0x220) = 0;
  }
  puVar2 = *(undefined4 **)(iVar6 + 0x210);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)puVar2[4];
    puVar4 = (undefined4 *)*puVar2;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar1 = piVar3[1] + -1;
      piVar3[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar5 = *(code **)*piVar3;
        _guard_check_icall(unaff_EDI,unaff_ESI);
        (*pcVar5)();
        LOCK();
        iVar1 = piVar3[2] + -1;
        piVar3[2] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar5 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar5)();
        }
      }
    }
    func_0x008ab812(puVar2,0x14);
    puVar2 = puVar4;
  }
  func_0x008ab812(*(int *)(iVar6 + 0x210),0x14,unaff_EBX);
  return;
}



void Unwind_00f45a15(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar3 = (int *)(iVar1 + 0x23c);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00993430(uVar2);
  func_0x00992900((undefined4 *)(iVar1 + 0x5a4),*(undefined4 *)(*(int *)(iVar1 + 0x5a4) + 4));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x5a4),0x3c);
  func_0x00992680((undefined4 *)(iVar1 + 0x59c),*(undefined4 *)(*(int *)(iVar1 + 0x59c) + 4));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x59c),0x314);
  uStack_8 = 0;
  func_0x008ab4ad(iVar1 + 0x29c,0x30,0x10,FUN_00993ed0);
  FUN_00993470();
  func_0x009927c0((undefined4 *)(iVar1 + 0x28c),*(undefined4 *)(*(int *)(iVar1 + 0x28c) + 4));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x28c),0x1c);
  func_0x00992830((undefined4 *)(iVar1 + 0x284),*(undefined4 *)(*(int *)(iVar1 + 0x284) + 4));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x284),0x1c);
  func_0x008acf70();
  func_0x00992560((undefined4 *)(iVar1 + 0x274),*(undefined4 *)(*(int *)(iVar1 + 0x274) + 4));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x274),0x20);
  func_0x008acf70();
  func_0x00993430();
  func_0x00993430();
  func_0x009936a0();
  func_0x00992560((undefined4 *)(iVar1 + 0x244),*(undefined4 *)(*(int *)(iVar1 + 0x244) + 4));
  func_0x008ab812(*(undefined4 *)(iVar1 + 0x244),0x20);
  func_0x00992560(piVar3,*(undefined4 *)(*piVar3 + 4));
  func_0x008ab812(*piVar3,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45a23(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  
  iVar5 = *(int *)(unaff_EBP + -0x10);
  FUN_004c7ec0();
  FUN_004c7ec0();
  FUN_004c7ec0();
  FUN_004c7ec0();
  FUN_004c7ec0();
  FUN_004c7ec0();
  FUN_004c7ec0();
  uVar3 = *(uint *)(iVar5 + 0x640);
  if (0xf < uVar3) {
    iVar4 = *(int *)(iVar5 + 0x62c);
    uVar8 = uVar3 + 1;
    iVar7 = iVar4;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar8 = uVar3 + 0x24;
      if (0x1f < (iVar4 - iVar7) - 4U) goto LAB_00993d4f;
    }
    func_0x008ab812(iVar7,uVar8);
  }
  *(undefined4 *)(iVar5 + 0x63c) = 0;
  *(undefined4 *)(iVar5 + 0x640) = 0xf;
  *(undefined1 *)(iVar5 + 0x62c) = 0;
  uVar3 = *(uint *)(iVar5 + 0x628);
  if (0xf < uVar3) {
    iVar4 = *(int *)(iVar5 + 0x614);
    uVar8 = uVar3 + 1;
    iVar7 = iVar4;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar8 = uVar3 + 0x24;
      if (0x1f < (iVar4 - iVar7) - 4U) goto LAB_00993d4f;
    }
    func_0x008ab812(iVar7,uVar8);
  }
  *(undefined4 *)(iVar5 + 0x624) = 0;
  *(undefined4 *)(iVar5 + 0x628) = 0xf;
  *(undefined1 *)(iVar5 + 0x614) = 0;
  uVar3 = *(uint *)(iVar5 + 0x610);
  if (0xf < uVar3) {
    iVar4 = *(int *)(iVar5 + 0x5fc);
    uVar8 = uVar3 + 1;
    iVar7 = iVar4;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar8 = uVar3 + 0x24;
      if (0x1f < (iVar4 - iVar7) - 4U) goto LAB_00993d4f;
    }
    func_0x008ab812(iVar7,uVar8);
  }
  *(undefined4 *)(iVar5 + 0x60c) = 0;
  *(undefined4 *)(iVar5 + 0x610) = 0xf;
  *(undefined1 *)(iVar5 + 0x5fc) = 0;
  uVar3 = *(uint *)(iVar5 + 0x5f8);
  if (0xf < uVar3) {
    iVar4 = *(int *)(iVar5 + 0x5e4);
    uVar8 = uVar3 + 1;
    iVar7 = iVar4;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar8 = uVar3 + 0x24;
      if (0x1f < (iVar4 - iVar7) - 4U) goto LAB_00993d4f;
    }
    func_0x008ab812(iVar7,uVar8);
  }
  piVar1 = (int *)(iVar5 + 0x5d4);
  *(undefined4 *)(iVar5 + 0x5f4) = 0;
  piVar2 = (int *)(iVar5 + 0x5dc);
  *(undefined4 *)(iVar5 + 0x5f8) = 0xf;
  *(undefined1 *)(iVar5 + 0x5e4) = 0;
  func_0x009928b0(piVar2,*(undefined4 *)(*piVar2 + 4));
  func_0x008ab812(*piVar2,0x20);
  func_0x009925b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  uVar3 = *(uint *)(iVar5 + 0x5c8);
  if (0xf < uVar3) {
    iVar4 = *(int *)(iVar5 + 0x5b4);
    uVar8 = uVar3 + 1;
    iVar7 = iVar4;
    if (0xfff < uVar8) {
      iVar7 = *(int *)(iVar4 + -4);
      uVar8 = uVar3 + 0x24;
      if (0x1f < (iVar4 - iVar7) - 4U) {
LAB_00993d4f:
        func_0x008aaf66();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar8);
  }
  *(undefined4 *)(iVar5 + 0x5c4) = 0;
  *(undefined4 *)(iVar5 + 0x5c8) = 0xf;
  *(undefined1 *)(iVar5 + 0x5b4) = 0;
  return;
}



void Unwind_00f45a31(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x6a0);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x6a8) - iVar1 >> 2);
    *(int *)(iVar2 + 0x6a0) = 0;
    *(undefined4 *)(iVar2 + 0x6a4) = 0;
    *(undefined4 *)(iVar2 + 0x6a8) = 0;
  }
  return;
}



void Unwind_00f45a3f(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x6ac);
  func_0x0092d4d0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  return;
}



void Unwind_00f45a70(void)

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



void Unwind_00f45a78(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  func_0x009925b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f45ab0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  func_0x00992560(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f45ab8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
  func_0x00992560(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f45ac3(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  piVar5 = (int *)(iVar2 + 0x10);
  if (*piVar5 != 0) {
    func_0x009923e0(*piVar5,*(undefined4 *)(iVar2 + 0x14),piVar5);
    iVar1 = *piVar5;
    uVar4 = ((*(int *)(iVar2 + 0x18) - iVar1) / 0x88) * 0x88;
    iVar6 = iVar1;
    if (0xfff < uVar4) {
      iVar6 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar4);
    *piVar5 = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  return;
}



void Unwind_00f45ace(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x009924e0(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x18);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x18);
  return;
}



void Unwind_00f45ad9(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x24);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x009924e0(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x18);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x18);
  return;
}



void Unwind_00f45ae4(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x30);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f45aef(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x38);
  func_0x00992560(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f45afa(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x40);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f45b05(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x48);
  func_0x00992830(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x1c);
  return;
}



void Unwind_00f45b10(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x50);
  func_0x009927c0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x1c);
  return;
}



void Unwind_00f45b1b(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x58);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x00992520(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x1c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x1c);
  return;
}



void Unwind_00f45b26(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3dc70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab4ad(iVar1 + 0x60,0x30,0x10,FUN_00993ed0,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45b31(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x360);
  func_0x00992680(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x314);
  return;
}



void Unwind_00f45b3f(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x368);
  func_0x00992900(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x3c);
  return;
}



void Unwind_00f45b70(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x10);
  func_0x00992560(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f45b78(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
  func_0x00992560(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  return;
}



void Unwind_00f45b83(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x10);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f45b8e(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x18);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f45b99(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBP;
  
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x20);
  cVar1 = *(char *)((int)*(int **)(*piVar4 + 4) + 0xd);
  piVar3 = *(int **)(*piVar4 + 4);
  while (cVar1 == '\0') {
    func_0x008ace00(piVar4,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x14);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*piVar4,0x14);
  return;
}



void Unwind_00f45bd0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = angle::RefCountObject<>::vftable;
  return;
}



void Unwind_00f45bd8(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0x18) = gl::LabeledObject::vftable;
  return;
}



void Unwind_00f45be3(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 0x1c) = angle::Subject::vftable;
  puVar5 = *(undefined4 **)(iVar3 + 0x40);
  puVar1 = puVar5 + *(int *)(iVar3 + 0x44);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  if (*(int *)(iVar3 + 0x40) != iVar3 + 0x20) {
    func_0x008ab37e(*(int *)(iVar3 + 0x40));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45c10(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x10) + 0xc) = angle::BindingPointer<>::vftable;
  return;
}



void Unwind_00f45c40(void)

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



void Unwind_00f45c48(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = angle::WorkerThreadPool::vftable;
    func_0x008ab812(puVar1,8);
  }
  return;
}



void Unwind_00f45c50(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x8c);
  return;
}



void Unwind_00f45c62(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = angle::WorkerThreadPool::vftable;
  return;
}



void Unwind_00f45c6a(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar2 + 0x70) != 0) {
    do {
      func_0x009ae580();
      iVar5 = *(int *)(iVar2 + 0x70) + -1;
      *(int *)(iVar2 + 0x70) = iVar5;
    } while (iVar5 != 0);
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  if (*(int *)(iVar2 + 100) != 0) {
    iVar5 = *(int *)(iVar2 + 0x68);
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      iVar4 = *(int *)(*(int *)(iVar2 + 100) + iVar5 * 4);
      if (iVar4 != 0) {
        func_0x008ab812(iVar4,0x10);
      }
    }
    iVar5 = *(int *)(iVar2 + 100);
    uVar6 = *(int *)(iVar2 + 0x68) * 4;
    iVar4 = iVar5;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar5 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar5 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar6);
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(iVar2 + 0x60) = 0;
  func_0x008ab812(uVar1,8);
  return;
}



void Unwind_00f45c75(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int iVar7;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar7 = *(int *)(iVar3 + 0x84);
  piVar1 = (int *)(iVar3 + 0x78);
  if (iVar7 != 0) {
    do {
      uVar6 = iVar7 + *(int *)(iVar3 + 0x80) + -1;
      if (*(int *)(*(int *)(*piVar1 + (uVar6 >> 1 & *(int *)(iVar3 + 0x7c) - 1U) * 4) + 4 +
                  (uVar6 & 1) * 8) != 0) goto LAB_009ae571;
      iVar7 = iVar7 + -1;
      *(int *)(iVar3 + 0x84) = iVar7;
    } while (iVar7 != 0);
    *(undefined4 *)(iVar3 + 0x80) = 0;
  }
  if (*piVar1 != 0) {
    iVar7 = *(int *)(iVar3 + 0x7c);
    while (0 < iVar7) {
      iVar7 = iVar7 + -1;
      iVar5 = *(int *)(*piVar1 + iVar7 * 4);
      if (iVar5 != 0) {
        func_0x008ab812(iVar5,0x10);
      }
    }
    iVar7 = *(int *)(iVar3 + 0x78);
    uVar6 = *(int *)(iVar3 + 0x7c) * 4;
    iVar5 = iVar7;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar7 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar7 - iVar5) - 4U) {
        func_0x008aaf66();
LAB_009ae571:
        func_0x009af6f0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
    *(int *)(iVar3 + 0x78) = 0;
    *(undefined4 *)(iVar3 + 0x7c) = 0;
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x74);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  func_0x008ab812(uVar2,8);
  return;
}



void Unwind_00f45c80(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_009ae6f0(1);
  }
  return;
}



void Unwind_00f45c88(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = angle::WorkerThreadPool::vftable;
    func_0x008ab812(puVar1,4);
  }
  return;
}



void Unwind_00f45cc0(void)

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



void Unwind_00f45cc8(void)

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



void Unwind_00f45cd0(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x24));
  return;
}



void Unwind_00f45cd8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x1c),0x10);
  }
  return;
}



void Unwind_00f45ce0(void)

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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
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



void Unwind_00f45d10(void)

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



void Unwind_00f45d18(void)

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



void Unwind_00f45d50(void)

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



void Unwind_00f45d80(void)

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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x34);
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



void Unwind_00f45db0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0xbc);
  }
  return;
}



void Unwind_00f45db8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    func_0x009afc20(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00f45df0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0xbc);
  }
  return;
}



void Unwind_00f45e20(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    uVar5 = piVar2[2] - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}



void Unwind_00f45e60(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xcc))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xd8);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xcc) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xcc);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f45e7c(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x30) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x30));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45e84(void)

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



void Unwind_00f45ec0(void)

{
  func_0x008ab391(&DAT_013de2a4);
  return;
}



void Unwind_00f45ef0(void)

{
  func_0x008ab391(&DAT_013de2ac);
  return;
}



void Unwind_00f45f20(void)

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



void Unwind_00f45f28(void)

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



void Unwind_00f45f30(void)

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



void Unwind_00f45f38(void)

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



void Unwind_00f45f70(void)

{
  func_0x008ab391(&DAT_013de2b4);
  return;
}



void Unwind_00f45fa0(void)

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
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x20) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x20));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f45fa8(void)

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



void Unwind_00f45fe0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  func_0x00961680(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x30);
  return;
}



void Unwind_00f45fe8(void)

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



void Unwind_00f46020(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(unaff_EBP + -0x1c);
  puStack_c = &DAT_00f1ee5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00775520(piVar1,*(undefined4 *)(*piVar1 + 4),uVar2);
  func_0x008ab812(*piVar1,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46028(void)

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



void Unwind_00f46060(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffb;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x50);
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



void Unwind_00f4607c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x34);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f46087(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf4) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf4) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46092(void)

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



void Unwind_00f4609a(void)

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



void Unwind_00f460e0(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x10) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  return;
}



void Unwind_00f46110(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x10) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  return;
}



void Unwind_00f46140(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x20) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f46148(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x18) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f46150(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f46180(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x30) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f46188(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x28) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x28));
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}



void Unwind_00f46190(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x38));
  return;
}



void Unwind_00f461d0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x254);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x24c) - iVar1;
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
    *(int *)(unaff_EBP + -0x254) = 0;
    *(undefined4 *)(unaff_EBP + -0x250) = 0;
    *(undefined4 *)(unaff_EBP + -0x24c) = 0;
  }
  return;
}



void Unwind_00f461db(void)

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



void Unwind_00f46220(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x18) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f46228(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f46260(void)

{
  int unaff_EBP;
  
  if (*(void **)(unaff_EBP + -0x18) != (void *)0x0) {
    free(*(void **)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f46268(void)

{
  int unaff_EBP;
  
  func_0x00e730b2(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



void Unwind_00f462a0(void)

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



void Unwind_00f462a8(void)

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



void Unwind_00f462e0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x15c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x15c) = *(uint *)(unaff_EBP + -0x15c) & 0xfffffffe;
    piVar1 = *(int **)(unaff_EBP + -0x17c);
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



void Unwind_00f46302(void)

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



void Unwind_00f4630a(void)

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



void Unwind_00f46350(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x90);
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



void Unwind_00f4636c(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf0) + 4) + -0x18 + unaff_EBP + -0xd8) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0xf0) + 4);
  *(int *)(iVar1 + -0x1c + unaff_EBP + -0xd8) = iVar1 + -0x18;
  return;
}



void Unwind_00f46377(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf0) + 4) + -0x60 + (int)puVar1) =
       std::basic_istringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf0) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x60;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf0) + 4) + -0x60 + (int)puVar1) =
       std::basic_istream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf0) + 4);
  *(int *)(iVar2 + -100 + (int)puVar1) = iVar2 + -0x18;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46382(void)

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



void Unwind_00f4638a(void)

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



void Unwind_00f46392(void)

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



void Unwind_00f463d0(void)

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



void Unwind_00f463d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (*(int *)(unaff_EBP + -0x34) != unaff_EBP + -0x23c) {
    func_0x008ab37e(*(int *)(unaff_EBP + -0x34));
  }
  return;
}



void Unwind_00f46420(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = rx::EGLImplFactory::vftable;
  return;
}



void Unwind_00f46428(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41cd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar3 + 8) = angle::Subject::vftable;
  puVar5 = *(undefined4 **)(iVar3 + 0x2c);
  puVar1 = puVar5 + *(int *)(iVar3 + 0x30);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 4);
    _guard_check_icall(uVar4);
    (*pcVar2)();
  }
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  if (*(int *)(iVar3 + 0x2c) != iVar3 + 0xc) {
    func_0x008ab37e(*(int *)(iVar3 + 0x2c));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46460(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),4);
  return;
}



void Unwind_00f464a0(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -200) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -200) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f464ab(void)

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



void Unwind_00f464f0(void)

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



void Unwind_00f46520(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x38);
  if (iVar1 != 0) {
    uVar4 = *(int *)(unaff_EBP + -0x30) - iVar1 & 0xfffffffc;
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
    *(int *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}



void Unwind_00f46528(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[5];
    if (0xf < uVar2) {
      iVar3 = *piVar1;
      uVar6 = uVar2 + 1;
      iVar5 = iVar3;
      if (0xfff < uVar6) {
        iVar5 = *(int *)(iVar3 + -4);
        uVar6 = uVar2 + 0x24;
        if (0x1f < (iVar3 - iVar5) - 4U) {
          func_0x008aaf66();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar6);
    }
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
    func_0x008ab812(piVar1,0x18);
  }
  return;
}



void Unwind_00f46530(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char ****ppppcVar4;
  undefined4 ****ppppuVar5;
  FILE *_File;
  char ****ppppcVar6;
  uint uVar7;
  int unaff_EBP;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  code *pcStack_50;
  char *pcStack_4c;
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x54) & 2) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffd;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f41c40;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar8 = DAT_013de244;
  pcStack_50 = (code *)0x0;
  bVar1 = false;
  if (DAT_013de244 == (code *)0x0) {
LAB_009527c7:
    if ((DAT_013de240 != (int *)0x0) && (1 < *(int *)(unaff_EBP + -0xf0))) {
      pcVar8 = *(code **)(*DAT_013de240 + 0x14);
      _guard_check_icall(unaff_EBP + -0xfc);
      (*pcVar8)();
LAB_0095293e:
      if (bVar1) {
        func_0x00e730b2(pcStack_50);
      }
      if (*(int *)(unaff_EBP + -0xf0) != 4) {
LAB_00952963:
        func_0x005d3940();
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      cVar2 = func_0x009c58b0();
      if (cVar2 != '\0') {
        func_0x009c55d0();
        goto LAB_00952963;
      }
      DAT_00000000 = 0;
LAB_0095298d:
      iVar3 = func_0x00e7304a(5);
      goto LAB_00952994;
    }
    func_0x0046a470(apppcStack_44);
    pcVar8 = *(code **)(unaff_EBP + -0xf0);
    ppppcVar4 = apppcStack_44;
    if (0xf < uStack_30) {
      ppppcVar4 = (char ****)apppcStack_44[0];
    }
    if ((pcVar8 != (code *)&DAT_00000004) && (pcVar8 != (code *)0x3)) {
LAB_009528fe:
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        ppppcVar4 = (char ****)apppcStack_44[0];
        if (0xfff < uVar7) {
          ppppcVar4 = (char ****)apppcStack_44[0][-1];
          uVar7 = uStack_30 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_44[0] + (-4 - (int)ppppcVar4)))
          goto LAB_009529a4;
        }
        func_0x008ab812(ppppcVar4,uVar7);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
      goto LAB_0095293e;
    }
    uStack_1c = 0;
    uStack_18 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppppcVar6 = ppppcVar4;
    do {
      cVar2 = *(char *)ppppcVar6;
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
    } while (cVar2 != '\0');
    func_0x0046bc40(ppppcVar4,(int)ppppcVar6 - (int)((int)ppppcVar4 + 1));
    if ((((pcVar8 == (code *)&DAT_00000004) || (pcVar8 == (code *)0x3)) || (pcVar8 == (code *)0x2))
       || (pcVar8 == (code *)0x1)) {
      ppppuVar5 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)pppuStack_2c;
      }
      if (&DAT_00000004 < pcVar8) {
        pcStack_4c = "UNKNOWN";
      }
      else {
        pcStack_4c = (&PTR_s_EVENT_00facdf0)[(int)pcVar8];
      }
      _File = (FILE *)func_0x00e8798f((1 < (int)pcVar8) + '\x01');
      fprintf(_File,"%s: %s\n",pcStack_4c,ppppuVar5);
    }
    if (uStack_18 < 0x10) {
LAB_009528e6:
      uStack_1c = 0;
      uStack_18 = 0xf;
      pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
      goto LAB_009528fe;
    }
    uVar7 = uStack_18 + 1;
    ppppuVar5 = (undefined4 ****)pppuStack_2c;
    if (uVar7 < 0x1000) {
LAB_009528dc:
      func_0x008ab812(ppppuVar5,uVar7);
      goto LAB_009528e6;
    }
    ppppuVar5 = (undefined4 ****)pppuStack_2c[-1];
    uVar7 = uStack_18 + 0x24;
    if ((uint)((int)pppuStack_2c + (-4 - (int)ppppuVar5)) < 0x20) goto LAB_009528dc;
  }
  else {
    pcStack_50 = DAT_013de244;
    iVar3 = func_0x00e7307f(DAT_013de244,uStack_14);
    if (iVar3 != 0) goto LAB_0095298d;
    iVar3 = *(int *)(pcVar8 + 0x2c);
    if (iVar3 != 0x7fffffff) {
      bVar1 = true;
      goto LAB_009527c7;
    }
LAB_00952994:
    *(int *)(pcVar8 + 0x2c) = iVar3 + -1;
    func_0x00e7304a(6);
  }
  func_0x008aaf66();
LAB_009529a4:
  func_0x008aaf66();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



void Unwind_00f4654c(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xec) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xec) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xec) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xec) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46557(void)

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



void Unwind_00f46590(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x10);
  return;
}



void Unwind_00f465d0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x7c);
  return;
}



void Unwind_00f46610(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xf4) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xf4) + 4);
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



void Unwind_00f46650(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f4665b(void)

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



void Unwind_00f466a0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f46990;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  uStack_8 = 0;
  iVar4 = *(int *)(*piVar1 + 4);
  if ((*(int *)(iVar4 + 0xc + (int)piVar1) == 0) &&
     ((*(byte *)(iVar4 + 0x14 + (int)piVar1) & 2) != 0)) {
    pcVar2 = *(code **)(**(int **)(iVar4 + 0x38 + (int)piVar1) + 0x34);
    _guard_check_icall(uVar3);
    iVar4 = (*pcVar2)();
    if (iVar4 == -1) {
      func_0x00464710(*(uint *)(*(int *)(*piVar1 + 4) + 0xc + (int)piVar1) | 4,0);
    }
  }
  uStack_8 = 1;
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x38 + (int)piVar1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f466d0(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f46990;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x34);
  uStack_8 = 0;
  iVar4 = *(int *)(*piVar1 + 4);
  if ((*(int *)(iVar4 + 0xc + (int)piVar1) == 0) &&
     ((*(byte *)(iVar4 + 0x14 + (int)piVar1) & 2) != 0)) {
    pcVar2 = *(code **)(**(int **)(iVar4 + 0x38 + (int)piVar1) + 0x34);
    _guard_check_icall(uVar3);
    iVar4 = (*pcVar2)();
    if (iVar4 == -1) {
      func_0x00464710(*(uint *)(*(int *)(*piVar1 + 4) + 0xc + (int)piVar1) | 4,0);
    }
  }
  uStack_8 = 1;
  piVar1 = *(int **)(unaff_EBP + -0x34);
  piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x38 + (int)piVar1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f466d8(void)

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



void Unwind_00f46710(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x54) + 8);
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



void Unwind_00f46718(void)

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



void Unwind_00f46720(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x54) + 8);
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



void Unwind_00f46728(void)

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



void Unwind_00f46760(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f46768(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x18);
  }
  return;
}



void Unwind_00f467a0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
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



void Unwind_00f467a8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x44);
  return;
}



void Unwind_00f467b7(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x18) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x18);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f467f0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
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



void Unwind_00f467f8(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),8);
  return;
}



void Unwind_00f46807(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x14);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f46840(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
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



void Unwind_00f46848(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x14);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00f46880(void)

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
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x50);
    puStack_c = &DAT_00f3cf60;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    uStack_8 = 0;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00f4689c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x1c) + 8);
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



void Unwind_00f468a4(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -8;
  return;
}



void Unwind_00f468e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  *puVar1 = rx::DisplayGL::vftable;
  puVar1[2] = rx::DisplayGL::vftable;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3cfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = rx::DisplayImpl::vftable;
  puVar1[2] = rx::DisplayImpl::vftable;
  func_0x00953210(uVar2);
  *puVar1 = rx::EGLImplFactory::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f468e8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x9c);
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



void Unwind_00f468f6(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  puVar1 = (undefined4 *)*piVar3;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x18);
    puVar1 = puVar2;
  }
  func_0x008ab812(*piVar3,0x18);
  return;
}



void Unwind_00f46901(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    uVar5 = *(int *)(iVar2 + 0x14) - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00f4690c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar4 + 0xac);
  if (iVar1 != 0) {
    uVar7 = *(int *)(iVar4 + 0xb4) - iVar1 & 0xfffffffc;
    iVar6 = iVar1;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar1 + -4);
      uVar7 = uVar7 + 0x23;
      if (0x1f < (iVar1 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
    *(undefined4 *)(iVar4 + 0xac) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    *(undefined4 *)(iVar4 + 0xb4) = 0;
  }
  puVar2 = *(undefined4 **)(iVar4 + 0xa4);
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    func_0x008ab812(puVar2,0x18);
    puVar2 = puVar3;
  }
  func_0x008ab812(*(undefined4 *)(iVar4 + 0xa4),0x18);
  return;
}



void Unwind_00f4691a(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  if (*(int *)(iVar1 + 0xe4) != iVar1 + 0xd4) {
    func_0x008ab37e(*(int *)(iVar1 + 0xe4));
  }
  return;
}



void Unwind_00f46950(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3c8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(*(int *)(*(int *)*piVar2 + 4) + 0x38 + *piVar2);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46958(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f46990;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  uStack_8 = 0;
  iVar4 = *(int *)(*piVar1 + 4);
  if ((*(int *)(iVar4 + 0xc + (int)piVar1) == 0) &&
     ((*(byte *)(iVar4 + 0x14 + (int)piVar1) & 2) != 0)) {
    pcVar2 = *(code **)(**(int **)(iVar4 + 0x38 + (int)piVar1) + 0x34);
    _guard_check_icall(uVar3);
    iVar4 = (*pcVar2)();
    if (iVar4 == -1) {
      func_0x00464710(*(uint *)(*(int *)(*piVar1 + 4) + 0xc + (int)piVar1) | 4,0);
    }
  }
  uStack_8 = 1;
  piVar1 = *(int **)(unaff_EBP + -0x20);
  piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x38 + (int)piVar1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f469b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
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



void Unwind_00f469c9(void)

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
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -0x50;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xd0) + 4) + -0x50 + (int)puVar1) =
       std::basic_ostream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xd0) + 4);
  *(int *)(iVar2 + -0x54 + (int)puVar1) = iVar2 + -8;
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f46a10(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x4c),0x18);
  return;
}



void Unwind_00f46a1f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffe;
    puStack_c = &DAT_00eabd0f;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 6;
    func_0x00e7055f(unaff_EBP + -0x84,uVar1);
    iStack_8._0_1_ = 5;
    if (*(void **)(unaff_EBP + -0x58) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x58));
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    iStack_8._0_1_ = 4;
    if (*(void **)(unaff_EBP + -0x60) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x60));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    iStack_8._0_1_ = 3;
    if (*(void **)(unaff_EBP + -0x68) != (void *)0x0) {
