        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * Unwind_00ee2368(void)

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
  
  puStack_c = &DAT_00ee11d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00ee2370(void)

{
  return;
}



int * Unwind_00ee2378(void)

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
  piVar3 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00ee2380(void)

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



void Unwind_00ee23c0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x30);
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



void Unwind_00ee23cb(void)

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
  puStack_c = &DAT_00ee0aab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(iVar2 + 0x6c);
  if (0xf < *(uint *)(iVar2 + 0x80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x80),uVar3);
  }
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(iVar2 + 0x54);
  if (0xf < *(uint *)(iVar2 + 0x68)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(iVar2 + 0x68),uVar3);
  }
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee23d6(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 0x88;
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee23e4(void)

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
  puStack_c = &DAT_00ee1975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0xa8) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xa4);
    _guard_check_icall(iVar2 + 0x98,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee23f2(void)

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



void Unwind_00ee23fa(void)

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
  if (*(int *)(iVar2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0xc);
    _guard_check_icall(iVar2,uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2402(void)

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



void Unwind_00ee240a(void)

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



void Unwind_00ee2412(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee241a(void)

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



void Unwind_00ee2450(void)

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
  puStack_c = &DAT_00ee242a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x94);
  if (iVar1 != 0) {
    iStack_8 = 3;
    if (*(int *)(iVar1 + 0xb4) != 0) {
      freeaddrinfo(*(int *)(iVar1 + 0xb4));
    }
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 2;
    if (*(int *)(iVar1 + 0xa8) != 0) {
      pcVar2 = (code *)**(undefined4 **)(iVar1 + 0xa4);
      _guard_check_icall(iVar1 + 0x98,uVar3);
      (*pcVar2)();
    }
    iStack_8._0_1_ = 1;
    func_0x0052b260();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x0064fbd0();
    iStack_8 = 0xffffffff;
    piVar5 = *(int **)(iVar1 + 0x30);
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
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x98);
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
          *_Memory = _Memory[0xb8];
          *(undefined1 **)(iVar1 + iVar4 * 4) = _Memory;
          goto LAB_00655d60;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    _aligned_free(_Memory);
LAB_00655d60:
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee245b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffb;
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



void Unwind_00ee2477(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x90);
    if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ee2493(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x60);
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



void Unwind_00ee249b(void)

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



void Unwind_00ee24a3(void)

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



void Unwind_00ee24ab(void)

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



void Unwind_00ee24b3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x74);
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



int * Unwind_00ee24bb(void)

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
  piVar3 = *(int **)(unaff_EBP + -0x74);
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



int * Unwind_00ee24c3(void)

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
  
  puStack_c = &DAT_00ee2665;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x74);
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



void Unwind_00ee24cb(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xd4) + 4);
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



int * Unwind_00ee24d6(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xd0);
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



int * Unwind_00ee24e4(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xcc);
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



void Unwind_00ee24f2(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0xd8);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee24fd(void)

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
  func_0x0052b260(uVar1,unaff_EBP + -0x3c,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2505(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -100) + 4);
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



int * Unwind_00ee250d(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -100);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ee2515(void)

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
  
  puStack_c = &DAT_00ee2665;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x1c);
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



void Unwind_00ee251d(void)

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
  
  puStack_c = &DAT_00ee26cb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(unaff_EBP + -0x1c);
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
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee2525(void)

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
  piVar3 = *(int **)(unaff_EBP + -0x74);
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



void Unwind_00ee252d(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x74);
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



void Unwind_00ee2535(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x90);
    if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c));
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ee2551(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffd;
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



int * Unwind_00ee256d(void)

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
  
  puStack_c = &DAT_00ee2665;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x74);
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



void Unwind_00ee2575(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -100);
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



void Unwind_00ee257d(void)

{
  return;
}



void Unwind_00ee2588(void)

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
  
  puStack_c = &DAT_00ee26cb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(unaff_EBP + -0xa8);
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
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2593(void)

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
  puStack_c = &DAT_00ee3eb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    uStack_8 = 0xffffffff;
    func_0x006564c0(uVar2);
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  _Memory = *(undefined1 **)(unaff_EBP + -0x74);
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
          *_Memory = _Memory[0x30];
          *(undefined1 **)(iVar1 + iVar3 * 4) = _Memory;
          goto LAB_0065c65d;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
    _aligned_free(_Memory);
LAB_0065c65d:
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee259b(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -100);
  puStack_c = &DAT_00ee26cb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(iVar3 + 0x24);
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
  func_0x0052b260();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee25a6(void)

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
  puVar1 = *(undefined4 **)(unaff_EBP + -0x60);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,0,uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee25ae(void)

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
  func_0x0052b260(uVar1,unaff_EBP + -0x3c,unaff_EBP + -0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee25b6(void)

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
  
  puStack_c = &DAT_00ee2665;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x1c);
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



int * Unwind_00ee25be(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -100);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee25c6(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -100) + 4);
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



void Unwind_00ee25ce(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -100);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee25d6(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xd4);
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



int * Unwind_00ee25e4(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xd0);
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



void Unwind_00ee25f2(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xcc) + 4);
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



void Unwind_00ee25fd(void)

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



void Unwind_00ee2605(void)

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



void Unwind_00ee260d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -100);
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



void Unwind_00ee2615(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -100);
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



int * Unwind_00ee2650(void)

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
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee2658(void)

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



void Unwind_00ee2690(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee2698(void)

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
  puStack_c = &DAT_00ee2665;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 0x20);
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



int * Unwind_00ee26a3(void)

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
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee26ab(void)

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



void Unwind_00ee26b3(void)

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



int * Unwind_00ee26bb(void)

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



void Unwind_00ee26f0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0xac) + 4);
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



int * Unwind_00ee26fb(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xac);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ee2706(void)

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
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
    iVar4 = *(int *)(unaff_EBP + -0xac);
    puStack_c = &DAT_00ee2665;
    iStack_10 = *unaff_FS_OFFSET;
    uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    piVar6 = &iStack_10;
    *unaff_FS_OFFSET = (int)piVar6;
    uStack_8 = 0xffffffff;
    piVar2 = *(int **)(iVar4 + 4);
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
  return (int *)0x0;
}



void Unwind_00ee2722(void)

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



void Unwind_00ee272a(void)

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



void Unwind_00ee2735(void)

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



void Unwind_00ee273d(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee27ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x74);
  if (0xf < *(uint *)(unaff_EBP + -0x60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x60),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(unaff_EBP + -0x8c);
  if (0xf < *(uint *)(unaff_EBP + -0x78)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x78),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2748(void)

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



void Unwind_00ee2753(void)

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



void Unwind_00ee2790(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x30));
  }
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ee279b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x34);
  if (0xf < *(uint *)(iVar1 + 0x48)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x48));
  }
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ee27d0(void)

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



void Unwind_00ee27d8(void)

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



void Unwind_00ee27e0(void)

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



void Unwind_00ee27e8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee129d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651a90(uVar1,unaff_EBP + -0xb4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee27f3(void)

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
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -100);
    _guard_check_icall(unaff_EBP + -0x70,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee27fb(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3dc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -100);
    _guard_check_icall(unaff_EBP + -0x70,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x00651a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2806(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee129d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651a90(uVar1,unaff_EBP + -0xb4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2811(void)

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
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -100);
    _guard_check_icall(unaff_EBP + -0x70,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2819(void)

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



void Unwind_00ee2821(void)

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



void Unwind_00ee2829(void)

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
  puStack_c = &DAT_00ee133e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0052b260(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x24) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x20);
    _guard_check_icall(iVar2 + 0x14);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2831(void)

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



void Unwind_00ee2839(void)

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



void Unwind_00ee2841(void)

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



void Unwind_00ee2849(void)

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



void Unwind_00ee2851(void)

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



void Unwind_00ee2890(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee06a8;
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



void Unwind_00ee2898(void)

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



void Unwind_00ee28b1(void)

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



void Unwind_00ee28b9(void)

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
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x30);
    _guard_check_icall(unaff_EBP + -0x3c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee28c1(void)

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



void Unwind_00ee28c9(void)

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



void Unwind_00ee28d1(void)

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



void Unwind_00ee28d9(void)

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
  if (*(int *)(unaff_EBP + -0xd0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xd4);
    _guard_check_icall(unaff_EBP + -0xe0,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee28e4(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee129d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651a90(uVar1,unaff_EBP + -0xc4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee28ef(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar2);
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xd0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xd4);
    _guard_check_icall(unaff_EBP + -0xe0);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee28fa(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3ded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065c300(uVar1,unaff_EBP + -0xf8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2905(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee3e83;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00651a90(uVar2);
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0xd0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xd4);
    _guard_check_icall(unaff_EBP + -0xe0);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2910(void)

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



void Unwind_00ee2918(void)

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



void Unwind_00ee2920(void)

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



void Unwind_00ee2928(void)

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



void Unwind_00ee2930(void)

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
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x58);
    _guard_check_icall(unaff_EBP + -100,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2938(void)

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



void Unwind_00ee2940(void)

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



void Unwind_00ee2948(void)

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



void Unwind_00ee2980(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x24) != '\0') {
    *(char *)(unaff_EBP + -0x24) = '\0';
  }
  return;
}



void Unwind_00ee2988(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  if (*(char *)(unaff_EBP + -0x24) != '\0') {
    *(char *)(unaff_EBP + -0x24) = '\0';
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ee2990(void)

{
  int unaff_EBP;
  
  if (**(char **)(unaff_EBP + -0x30) != '\0') {
    **(char **)(unaff_EBP + -0x30) = '\0';
  }
  return;
}



void Unwind_00ee2998(void)

{
  int iVar1;
  char *pcVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
    pcVar2 = *(char **)(unaff_EBP + -0x30);
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



void Unwind_00ee29b1(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x24) != '\0') {
    *(char *)(unaff_EBP + -0x24) = '\0';
  }
  return;
}



void Unwind_00ee29b9(void)

{
  int unaff_EBP;
  
  if (**(char **)(unaff_EBP + -0x30) != '\0') {
    **(char **)(unaff_EBP + -0x30) = '\0';
  }
  return;
}



void Unwind_00ee29f0(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    pcVar2 = *(char **)(unaff_EBP + -0x14);
    puStack_c = &DAT_00ee0dd5;
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
  return;
}



void Unwind_00ee2a30(void)

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



void Unwind_00ee2a70(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00ee2a7b(void)

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
  
  iVar5 = *(int *)(unaff_EBP + -0x14);
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



void Unwind_00ee2a83(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee310d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b80(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2a8e(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee2a96(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee313d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658c50(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2aa1(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee2aa9(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee30dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658b10(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00ee2ab4(void)

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
  
  iVar5 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee2abc(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee316d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658d30(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00ee2ac7(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee2acf(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee319d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658db0(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2ada(void)

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
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee2ae2(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee31cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00658e30(uVar2,iVar1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2aed(void)

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
  
  iStack_14 = *(int *)(unaff_EBP + -0x10);
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



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00ee2b20(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int extraout_ECX;
  int iVar5;
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
  
  iVar5 = *(int *)(unaff_EBP + -0x10) + 4;
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



void Unwind_00ee2b2b(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3230;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar2 + 0x1c)) {
  case 0:
  case 2:
  case 3:
    goto code_r0x00658bc8;
  case 1:
    func_0x00658b10(uVar4);
code_r0x00658bc8:
    *(undefined1 *)(iVar2 + 0x1c) = 0;
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



void Unwind_00ee2b36(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3270;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2b3e(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee32a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x34)) {
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
    *(undefined1 *)(iVar1 + 0x34) = 0;
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



void Unwind_00ee2b49(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee33a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2b51(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3420;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee2b59(void)

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
  puStack_c = &DAT_00ebc435;
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



void Unwind_00ee2b64(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee32dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00ee2b6c(void)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int extraout_ECX;
  int iVar5;
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
  
  iVar5 = *(int *)(unaff_EBP + -0x18) + 0x20;
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



void Unwind_00ee2b77(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee33e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2b7f(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ebd08d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee2b87(void)

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
  puStack_c = &DAT_00ebc435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee2b8f(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee32dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00ee2b97(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3310;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  uVar5 = (uint)*(byte *)(iVar2 + 0x3c);
  bVar7 = uVar5 < 9;
  bVar8 = uVar5 == 9;
  if (uVar5 < 10) {
    bVar1 = *(byte *)(uVar5 + 0x658d98);
    *(undefined1 *)(iVar2 + 0x3c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return (char *)(uint)bVar1;
  }
  pcVar3 = (code *)swi(0x29);
  pcVar6 = (char *)(*pcVar3)(iVar2 + 0x34);
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



void Unwind_00ee2ba2(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee33e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2baa(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ebd08d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee2bb2(void)

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
  puStack_c = &DAT_00ebc435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee2bba(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3270;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2bc2(void)

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
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee3340;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar1 + 0x48)) {
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
    *(undefined1 *)(iVar1 + 0x48) = 0;
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



void Unwind_00ee2bcd(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee33a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2bd5(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3420;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee2bdd(void)

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
  puStack_c = &DAT_00ebc435;
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



void Unwind_00ee2be8(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int in_GS_OFFSET;
  bool bVar6;
  undefined6 uVar7;
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
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iStack_14 = iVar2 + 0x14;
  puStack_c = &DAT_00ee3370;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  bVar6 = SBORROW4((uint)*(byte *)(iVar2 + 0x1c),4);
  switch((uint)*(byte *)(iVar2 + 0x1c)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(iVar2 + 0x1c) = 0;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcVar3 = (code *)swi(0x29);
  uVar7 = (*pcVar3)();
  piVar5 = (int *)uVar7;
  if (bVar6) {
    cVar4 = (char)uVar7;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar4;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar1 = (char *)((int)piVar5 + in_GS_OFFSET + -0x72);
  cVar4 = (char)((uint6)uVar7 >> 0x28);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)((int)piVar5 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)((int)piVar5 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)((int)piVar5 + in_GS_OFFSET + -0x72);
  *pcVar1 = *pcVar1 + cVar4;
  acStack_79[in_GS_OFFSET] = acStack_79[in_GS_OFFSET] + (char)((uint6)uVar7 >> 0x20);
  in((short)((uint6)uVar7 >> 0x20));
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



void Unwind_00ee2c20(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x00659920(*(int *)(unaff_EBP + -0x14));
  }
  return;
}



void Unwind_00ee2c28(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  return;
}



void Unwind_00ee2c37(void)

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



void Unwind_00ee2c70(void)

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
  puStack_c = &DAT_00ee2ceb;
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
  *(undefined ***)(iVar2 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2ca0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee0ce5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 1;
  func_0x00643330(uVar2);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2cab(void)

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
  if (*(char *)(iVar2 + 0x48) != '\0') {
    uStack_8 = 0xffffffff;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x58);
      _guard_check_icall(iVar2 + 0x4c,uVar3);
      (*pcVar1)();
    }
    *(char *)(iVar2 + 0x48) = '\0';
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2cb6(void)

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



void Unwind_00ee2cbe(void)

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



void Unwind_00ee2cc6(void)

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



void Unwind_00ee2cce(void)

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



void Unwind_00ee2cd6(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00ee0d1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar2);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2cde(void)

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



void Unwind_00ee2d10(void)

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



int * Unwind_00ee2d18(void)

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
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee2d50(void)

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



void Unwind_00ee2d69(void)

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



void Unwind_00ee2d82(void)

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



void Unwind_00ee2dc0(void)

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
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
      _guard_check_icall(unaff_EBP + -0x38,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ee2dd9(void)

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



void Unwind_00ee2de1(void)

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



void Unwind_00ee2de9(void)

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



void Unwind_00ee2df1(void)

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
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2df9(void)

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
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x2c);
    _guard_check_icall(unaff_EBP + -0x38,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2e30(void)

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



void Unwind_00ee2e60(void)

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



void Unwind_00ee2e79(void)

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



void Unwind_00ee2e81(void)

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



void Unwind_00ee2e89(void)

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



void Unwind_00ee2e91(void)

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



void Unwind_00ee2ed0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    if (**(int **)(unaff_EBP + -0x18) != 0) {
      func_0x008ab37e(**(int **)(unaff_EBP + -0x18));
    }
    return;
  }
  return;
}



void Unwind_00ee2f10(void)

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



void Unwind_00ee2f18(void)

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



void Unwind_00ee2f20(void)

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



void Unwind_00ee2f28(void)

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



void Unwind_00ee2f33(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x2c) + 4);
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



int * Unwind_00ee2f3b(void)

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



int * Unwind_00ee2f46(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x24);
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



void Unwind_00ee2f51(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x20);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2f59(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10) + 0x34;
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1,iVar2,iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2f64(void)

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
  puStack_c = &DAT_00ee13ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0052b260(uVar3);
  uStack_8 = 0xffffffff;
  if (*(int *)(iVar2 + 0x28) != 0) {
    pcVar1 = (code *)**(undefined4 **)(iVar2 + 0x24);
    _guard_check_icall(iVar2 + 0x18);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee2f90(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x38);
  return;
}



void Unwind_00ee2f9f(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::asio::execution_context::service::vftable;
  return;
}



void Unwind_00ee2fa7(void)

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



void Unwind_00ee2faf(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::asio::detail::timer_queue_base::vftable;
  return;
}



void Unwind_00ee2fb7(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = boost::asio::detail::timer_queue_base::vftable;
  return;
}



void Unwind_00ee2fbf(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 4);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00ee2fca(void)

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



void Unwind_00ee2fd5(void)

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
  puStack_c = &DAT_00edf17b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(iVar2 + 0x14) = boost::asio::detail::timer_queue<>::vftable;
  uStack_8 = 2;
  iVar1 = *(int *)(iVar2 + 0x28);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(iVar2 + 0x30) - iVar1 >> 4,uVar3);
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
  }
  *(undefined ***)(iVar2 + 0x1c) = boost::asio::detail::timer_queue_base::vftable;
  *(undefined4 *)(iVar2 + 0x14) = boost::asio::detail::timer_queue_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3010(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    for (iVar2 = *(int *)(unaff_EBP + -0x18); iVar2 != iVar1; iVar2 = iVar2 + 0x4c) {
      func_0x00656850();
    }
    func_0x00659a50(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00ee3050(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee1220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3058(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00edf728;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3060(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00edf760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee3068(void)

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



void Unwind_00ee30a0(void)

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
  puStack_c = &DAT_00ee2ceb;
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
  *(undefined ***)(iVar2 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00658bc3: Changing call to branch
// WARNING: Unable to track spacebase fully for stack

void Unwind_00ee30d0(void)

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
  
  iVar5 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee3100(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee3130(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
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



// WARNING: Switch with 1 destination removed at 0x00658d70 : 10 cases all go to same destination

char * Unwind_00ee3160(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee3190(void)

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
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee31c0(void)

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
  
  iStack_14 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee31f0(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
}



void Unwind_00ee3220(void)

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
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee3250(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee33a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3258(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ee3420;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee3260(void)

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
  puStack_c = &DAT_00ebc435;
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



void Unwind_00ee3290(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
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



void Unwind_00ee32c0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee33e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}


undefined DAT_00ee2c7d;
undefined DAT_00ee45b6;
undefined DAT_00ee3a8d;
undefined DAT_00ee58c8;
undefined DAT_00ee3f03;
undefined DAT_00ee522d;
undefined DAT_00ee51f5;
undefined DAT_00ee51bd;
undefined DAT_00ee5175;
undefined DAT_00ee4d93;
undefined DAT_00ee4066;
undefined DAT_00ee418d;
undefined DAT_00ee512b;
undefined DAT_00ee470e;
undefined DAT_00ee46b8;
undefined DAT_00ee6ad3;
undefined DAT_00ee4df5;
undefined DAT_00ee7538;
undefined DAT_00ee6c91;
undefined DAT_00ee50c5;
undefined DAT_00ee448d;
undefined DAT_00ee613e;
undefined DAT_00ee60d8;
undefined DAT_00ee8dc8;
undefined DAT_00ee5a15;
undefined DAT_00ee64f0;
undefined DAT_00ee64c0;
undefined DAT_00ee6480;
undefined DAT_00ee6561;
undefined DAT_00ee6435;
undefined DAT_00ee66a8;
undefined DAT_00ee8733;
undefined DAT_00ee6dac;
undefined DAT_00ee7820;
undefined DAT_00eeaa37;
undefined DAT_00ee6c3d;
undefined DAT_00ee6f60;
undefined DAT_00ee7871;
undefined DAT_00ee7f98;
undefined DAT_00eead13;
undefined DAT_00eeaf01;
undefined DAT_00ee860b;
undefined DAT_00eea9d0;
undefined DAT_00ee866b;
undefined DAT_00eea9a0;
undefined DAT_00ee90cb;
undefined DAT_00ee9121;
undefined DAT_00ee9078;
undefined DAT_00ee8ff8;
undefined DAT_00ee9038;
undefined DAT_00ee8fb8;
undefined DAT_00ee8f78;
undefined DAT_00ee8f38;
undefined DAT_00eea970;
undefined DAT_00eebf63;
undefined DAT_00eec041;
undefined DAT_00eeab6b;
undefined DAT_00eeb01c;
undefined DAT_00eec657;
undefined DAT_00eeae6d;
undefined DAT_00eeaead;
undefined DAT_00eeb150;
undefined DAT_00eebb00;
undefined DAT_00eebab8;
undefined DAT_00eeba68;
undefined DAT_00eebfe6;
undefined DAT_00eec15c;
undefined DAT_00eec44b;
undefined DAT_00eec290;
undefined DAT_00eec78b;
undefined DAT_00eeca7b;
undefined DAT_00eeccc7;
undefined DAT_00eecf56;
undefined DAT_00eecdfb;
undefined DAT_00eed106;
undefined4 DAT_0146263c;
undefined4 DAT_01462fa8;
undefined4 DAT_01463888;
undefined DAT_00eed5b0;
undefined DAT_00eed7b8;
undefined DAT_00eed61d;
undefined DAT_00eed838;
undefined DAT_00eed800;
undefined4 DAT_0146388c;
undefined DAT_00eeda50;
undefined DAT_00eee4e8;
undefined DAT_00eeda80;
undefined DAT_00eee1a5;
undefined DAT_01463898;
undefined4 DAT_01462fac;
undefined DAT_00eeeef6;
undefined DAT_00ef20cd;
undefined DAT_00eee989;
undefined DAT_00ef0912;
undefined DAT_00ef0876;
undefined DAT_00eef339;
undefined DAT_00ef1d7b;
undefined DAT_00ef28d9;
undefined DAT_00ef2910;
undefined DAT_00ef397e;
undefined DAT_00ef156b;
undefined DAT_00ef24bd;
undefined DAT_00eeffdb;
undefined DAT_00ef3ecb;
undefined DAT_00ef229b;
undefined DAT_00eef2b6;
undefined DAT_00ef39b0;
undefined DAT_00ef39e0;
undefined DAT_00ef3a10;
undefined DAT_00ef295b;
undefined DAT_00ef1a4e;
undefined DAT_00ef16b8;
undefined DAT_00ef161e;
undefined DAT_00ef15c6;
undefined DAT_00ef12be;
undefined DAT_00eed953;
undefined DAT_00ef12ed;
undefined DAT_00ef1460;
undefined DAT_00ef1c9d;
undefined DAT_00eee9db;
undefined DAT_00ef223b;
undefined DAT_00ef20fd;
undefined DAT_00ef49ae;
undefined DAT_00ef493e;
undefined DAT_00ef2465;
undefined DAT_00ef19ed;
undefined DAT_00ef2f1b;
undefined DAT_00ef2e2e;
undefined DAT_00ef2d8c;
undefined DAT_00ef2de6;
undefined DAT_00ef307d;
undefined DAT_00ef4ae0;
undefined DAT_00ef4aa6;
undefined DAT_00ef3a45;
undefined DAT_00ef6099;
undefined DAT_00ef8b5b;
undefined DAT_00ef6109;
undefined DAT_00ef8b9b;
undefined DAT_00ef8bdb;
undefined DAT_00ef6179;
undefined DAT_00ef61e6;
undefined DAT_00ef624e;
undefined DAT_00ef8c13;
undefined DAT_00ef418d;
undefined DAT_00ef77b8;
undefined DAT_00ef48cb;
undefined DAT_00ef480d;
undefined DAT_00ef6e13;
undefined DAT_00efbc15;
undefined DAT_00ef4c29;
undefined DAT_00ef651d;
undefined DAT_00efa7a0;
undefined DAT_00ef5f68;
undefined DAT_00ef53b0;
undefined DAT_00ef65e8;
undefined DAT_00ef65a8;
undefined DAT_00ef486d;
undefined DAT_00ef8d96;
undefined DAT_00ef483d;
undefined DAT_00ef8e06;
undefined DAT_00ef7778;
undefined DAT_00ef7740;
undefined DAT_00ef781b;
undefined DAT_00ef6641;
undefined DAT_00efc12d;
undefined DAT_00efa603;
undefined DAT_00efa653;
undefined DAT_00ef6ea3;
undefined DAT_00ef6e3d;
undefined DAT_00ef7b08;
undefined DAT_00ef79e8;
undefined DAT_00ef7892;
undefined DAT_00ef9203;
undefined DAT_00efc060;
undefined DAT_00ef758c;
undefined DAT_00ef75e6;
undefined DAT_00ef764c;
undefined DAT_00ef76ac;
undefined DAT_00ef770c;
undefined DAT_00efa69b;
undefined DAT_00efa6eb;
undefined DAT_00ef89f8;
undefined DAT_00ef8abb;
undefined DAT_00efc090;
undefined DAT_00efaf5e;
undefined DAT_00ef9359;
undefined DAT_00ef9249;
undefined DAT_00ef8c48;
undefined DAT_00ef8c88;
undefined DAT_00ef8cc8;
undefined DAT_00ef8cfd;
undefined DAT_00ef8e76;
undefined DAT_00efcf10;
undefined DAT_00efff5e;
undefined DAT_00efca5c;
undefined DAT_00efcad4;
undefined DAT_00efffa6;
undefined DAT_00efcb54;
undefined DAT_00efcbd4;
undefined DAT_00ef91a5;
undefined DAT_00efbc73;
undefined DAT_00efa76c;
undefined DAT_00efcfa0;
undefined DAT_00efc0e3;
undefined DAT_00efa835;
undefined DAT_00efda46;
undefined DAT_00f01628;
undefined DAT_00f01668;
undefined DAT_00efc020;
undefined DAT_00efe4f3;
undefined DAT_00efe4b3;
undefined DAT_00f016ab;
undefined DAT_00efdab6;
undefined DAT_00efae45;
undefined DAT_00ef8d2d;
undefined DAT_00efae85;
undefined DAT_00ef8a5d;
undefined DAT_00efaec5;
undefined DAT_00ef8a2d;
undefined DAT_00efaefd;
undefined DAT_00efd11e;
undefined DAT_00efd0be;
undefined DAT_00efd056;
undefined DAT_00efcff6;
undefined DAT_00efcf71;
undefined DAT_00f05f08;
undefined DAT_00f02906;
undefined DAT_00efced8;
undefined DAT_00efbfd5;
undefined DAT_00f0274e;
undefined DAT_00f02850;
undefined DAT_00efc9e8;
undefined DAT_00efe590;
undefined DAT_00efe54e;
undefined DAT_00efe470;
undefined DAT_00f041a3;
undefined DAT_00f01761;
undefined DAT_00efce9d;
undefined DAT_00f00758;
undefined DAT_00efeabb;
undefined DAT_00efe962;
undefined DAT_00efe848;
undefined DAT_00efe728;
undefined DAT_00efe608;
undefined DAT_00f00083;
undefined DAT_00f007a8;
undefined DAT_00efe1fc;
undefined DAT_00efe25c;
undefined DAT_00efe2bc;
undefined DAT_00efe31c;
undefined DAT_00efe37e;
undefined DAT_00f01b30;
undefined DAT_00efe3ad;
undefined DAT_00efe3e5;
undefined DAT_00efe425;
undefined DAT_00f014ab;
undefined DAT_00f014fb;
undefined DAT_00f0154b;
undefined DAT_00f0159b;
undefined DAT_00f015eb;
undefined DAT_00f0092c;
undefined DAT_00f00804;
undefined DAT_00effffb;
undefined DAT_00f00043;
undefined DAT_00f000c3;
undefined DAT_00f01af8;
undefined DAT_00f01ac0;
undefined DAT_00f01a80;
undefined DAT_00f04c50;
undefined DAT_00f04c20;
undefined DAT_00f04bf0;
undefined DAT_00f04b90;
undefined DAT_00f0429f;
undefined DAT_00f04317;
undefined DAT_00f00676;
undefined DAT_00f006dc;
undefined DAT_00f00715;
undefined DAT_00f01b81;
undefined DAT_00f016e8;
undefined DAT_00f02df0;
undefined DAT_00f06896;
undefined DAT_00f0a6f6;
undefined DAT_00f05f81;
undefined DAT_00f0a743;
undefined DAT_00f05ff1;
undefined DAT_00f0a783;
undefined DAT_00f06061;
undefined DAT_00f027ae;
undefined DAT_00f06a00;
undefined DAT_00f0280e;
undefined DAT_00f069d0;
undefined DAT_00f028a3;
undefined DAT_00f04220;
undefined DAT_00f04e26;
undefined DAT_00f04dc6;
undefined DAT_00f04d66;
undefined DAT_00f04d06;
undefined DAT_00f04ca6;
undefined DAT_00f04bc0;
undefined DAT_00f08b90;
undefined DAT_00f02dac;
undefined DAT_00f0c439;
undefined DAT_00f0c519;
undefined DAT_00f0403b;
undefined DAT_00f08c50;
undefined DAT_00f0409b;
undefined DAT_00f08c20;
undefined DAT_00f040fb;
undefined DAT_00f08bf0;
undefined DAT_00f0415b;
undefined DAT_00f08bc0;
undefined DAT_00f04e81;
undefined DAT_00f06a30;
undefined DAT_00f0699b;
undefined DAT_00f0694e;
undefined DAT_00f068ee;
undefined DAT_00f0a8bc;
undefined DAT_00f04b5c;
undefined DAT_00f05283;
undefined DAT_00f052c3;
undefined DAT_00f05303;
undefined DAT_00f05343;
undefined DAT_00f05383;
undefined DAT_00f053c3;
undefined DAT_00f0dd9b;
undefined DAT_00f06e08;
undefined DAT_00f06ce8;
undefined DAT_00f06bc8;
undefined DAT_00f06aa8;
undefined DAT_00f10af3;
undefined DAT_00f0c6b1;
undefined DAT_00f066fc;
undefined DAT_00f0675c;
undefined DAT_00f0678d;
undefined DAT_00f067bd;
undefined DAT_00f067ed;
undefined DAT_00f0681d;
undefined DAT_00f0684d;
undefined DAT_00f0a5bb;
undefined DAT_00f0a60b;
undefined DAT_00f0a65b;
undefined DAT_00f0a6ab;
undefined DAT_00f08f02;
undefined DAT_00f08de8;
undefined DAT_00f08cc8;
undefined DAT_00f0a800;
undefined DAT_00f0a840;
undefined DAT_00f0825e;
undefined DAT_00f082a6;
undefined DAT_00f0b2a8;
undefined DAT_00f0b268;
undefined DAT_00f0b228;
undefined DAT_00f0b1e8;
undefined DAT_00f0b1a8;
undefined DAT_00f0e720;
undefined DAT_00f0e6f0;
undefined DAT_00f0e6c0;
undefined DAT_00f0e690;
undefined DAT_00f0898c;
undefined DAT_00f089ec;
undefined DAT_00f08a4c;
undefined DAT_00f08a85;
undefined DAT_00f08ad0;
undefined DAT_00f08b10;
undefined DAT_00f08b50;
undefined DAT_00f0c5eb;
undefined DAT_00f0c63b;
undefined DAT_00f0b524;
undefined DAT_00f0b411;
undefined DAT_00f0b301;
undefined DAT_00f0a7c3;
undefined DAT_00f0ccab;
undefined DAT_00f0cc60;
undefined DAT_00f0cc1b;
undefined DAT_00f0cbcb;
undefined DAT_00f0cb7b;
undefined DAT_00f110f0;
undefined DAT_00f10bec;
undefined DAT_00f10c6c;
undefined DAT_00f10cef;
undefined DAT_00f0b0ad;
undefined DAT_00f0b0ed;
undefined DAT_00f0b12d;
undefined DAT_00f0b16d;
undefined DAT_00f0c3d1;
undefined DAT_00f112a0;
undefined DAT_00f0c4a9;
undefined DAT_00f11240;
undefined DAT_00f0c59c;
undefined DAT_00f111e0;
undefined DAT_00f0cd28;
undefined DAT_00f0e896;
undefined DAT_00f0e836;
undefined DAT_00f0e7d6;
undefined DAT_00f0e776;
undefined DAT_00f0e658;
undefined DAT_00f0e608;
undefined DAT_00f0e5b8;
undefined DAT_00f0e568;
undefined DAT_00f0cb2c;

void Unwind_00ee32c8(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ebd08d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee32d0(void)

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
  puStack_c = &DAT_00ebc435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



void Unwind_00ee3300(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 8)) {
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
    *(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 8) = 0;
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



void Unwind_00ee3330(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  int unaff_EBX;
  int unaff_EBP;
  int in_GS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  switch(*(undefined1 *)(iVar2 + 0x10)) {
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
    goto code_r0x00659743;
  case 1:
    func_0x00658b10();
code_r0x00659743:
    *(undefined1 *)(iVar2 + 0x10) = 0;
    return;
  default:
    pcVar3 = (code *)swi(0x29);
    piVar5 = (int *)(*pcVar3)(iVar2 + 4);
    pcVar1 = (char *)(in_GS_OFFSET + iVar2 + 4);
    *pcVar1 = *pcVar1 + (char)((uint)(unaff_EBX + 1) >> 8);
    cVar4 = (char)piVar5;
    *(char *)(in_GS_OFFSET + (int)piVar5) = *(char *)(in_GS_OFFSET + (int)piVar5) + cVar4;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    *(char *)piVar5 = (char)*piVar5 + cVar4;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void Unwind_00ee3360(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  switch(*(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined1 *)(*(int *)(unaff_EBP + -0x10) + 8) = 0;
    return;
  default:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void Unwind_00ee3390(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ee3420;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee3398(void)

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
  puStack_c = &DAT_00ebc435;
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



void Unwind_00ee33d0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00ebd08d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * Unwind_00ee33d8(void)

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
  puStack_c = &DAT_00ebc435;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
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



int * Unwind_00ee3410(void)

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
  puStack_c = &DAT_00ebc435;
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



void Unwind_00ee3440(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x40) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x44) = 0xffffffff;
  }
  return;
}



void Unwind_00ee3448(void)

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



void Unwind_00ee3450(void)

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



void Unwind_00ee3458(void)

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



void Unwind_00ee3460(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffe;
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



void Unwind_00ee3479(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2c7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006577f0(uVar1,unaff_EBP + -0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3484(void)

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



void Unwind_00ee348f(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee45b6;
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
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee349a(void)

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



void Unwind_00ee34a2(void)

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



void Unwind_00ee34aa(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee45b6;
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
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee34b5(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2c7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006577f0(uVar1,unaff_EBP + -0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee34c0(void)

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



void Unwind_00ee34cb(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x58);
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



void Unwind_00ee34d3(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x5c);
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



void Unwind_00ee34db(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x60);
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



void Unwind_00ee34e3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x60);
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



void Unwind_00ee34eb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x54);
  puStack_c = &DAT_00ee2ceb;
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
  *(undefined ***)(iVar2 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee34f3(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x54);
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



void Unwind_00ee34fb(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x54);
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



void Unwind_00ee3540(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x40) == '\0') {
    **(undefined4 **)(unaff_EBP + -0x44) = 0xffffffff;
  }
  return;
}



void Unwind_00ee3548(void)

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



void Unwind_00ee3550(void)

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



void Unwind_00ee3558(void)

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



void Unwind_00ee3560(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2c7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006577f0(uVar1,unaff_EBP + -0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee356b(void)

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



void Unwind_00ee3576(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee45b6;
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
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3581(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee45b6;
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
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee358c(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2c7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006577f0(uVar1,unaff_EBP + -0x10c);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3597(void)

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



void Unwind_00ee35a2(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x54);
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



void Unwind_00ee35aa(void)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = *(char **)(unaff_EBP + -0x58);
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



void Unwind_00ee35b2(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x5c);
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



void Unwind_00ee35ba(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x5c);
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



void Unwind_00ee35c2(void)

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
  puStack_c = &DAT_00ee2ceb;
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
  *(undefined ***)(iVar2 + 4) = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 7;
  func_0x00643330();
  uStack_8 = 0xffffffff;
  func_0x00650860();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee35ca(void)

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



void Unwind_00ee35d2(void)

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



void Unwind_00ee3610(void)

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
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x20);
      _guard_check_icall(unaff_EBP + -0x2c,uVar2);
      (*pcVar1)();
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ee3629(void)

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



void Unwind_00ee3642(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
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



void Unwind_00ee365b(void)

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



void Unwind_00ee3674(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x20);
    _guard_check_icall(unaff_EBP + -0x2c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee367c(void)

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
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x20);
    _guard_check_icall(unaff_EBP + -0x2c,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36b0(void)

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



void Unwind_00ee36b8(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36c0(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36c8(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36d0(void)

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
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0x54);
    _guard_check_icall(unaff_EBP + -0x60,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36d8(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee12cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0xb4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36e3(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2275;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0xb4,unaff_EBP + -0xb4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee36ee(void)

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



void Unwind_00ee3707(void)

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



void Unwind_00ee3720(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ee12cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3728(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2275;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00651b30(uVar1,unaff_EBP + -0x124,unaff_EBP + -0x124);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3733(void)

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



void Unwind_00ee373e(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee58c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0xc0) != 0) {
    pcVar1 = (code *)**(undefined4 **)(unaff_EBP + -0xc4);
    _guard_check_icall(unaff_EBP + -0xd0,uVar2);
    (*pcVar1)();
  }
  uStack_8 = 0xffffffff;
  func_0x00651b30();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ee3749(void)

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



void Unwind_00ee3751(void)

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



void Unwind_00ee3759(void)

{
  uint uVar1;
