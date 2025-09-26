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



void Unwind_00f37e35(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x54);
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



void Unwind_00f37e3d(void)

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



uint Unwind_00f37e45(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x8000000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xf7ffffff;
  piVar5 = *(int **)(unaff_EBP + -0x48);
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



uint Unwind_00f37e63(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x80;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffffff7f;
  piVar5 = *(int **)(unaff_EBP + -0x1c);
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



uint Unwind_00f37e81(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x100;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffeff;
  piVar5 = *(int **)(unaff_EBP + -0x48);
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



uint Unwind_00f37e9f(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x200;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffdff;
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



uint Unwind_00f37ebd(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x400;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffbff;
  piVar5 = *(int **)(unaff_EBP + -0x54);
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



uint Unwind_00f37edb(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x800;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffff7ff;
  piVar5 = *(int **)(unaff_EBP + -0x6c);
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



uint Unwind_00f37ef9(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x1000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffffefff;
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



uint Unwind_00f37f17(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x2000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffffdfff;
  piVar5 = *(int **)(unaff_EBP + -0x5c);
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



uint Unwind_00f37f35(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x4000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffffbfff;
  piVar5 = *(int **)(unaff_EBP + -0x1c);
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



uint Unwind_00f37f53(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x8000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffff7fff;
  piVar5 = *(int **)(unaff_EBP + -0x48);
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



uint Unwind_00f37f71(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x10000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffeffff;
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



uint Unwind_00f37f8f(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x20000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffdffff;
  piVar5 = *(int **)(unaff_EBP + -0x54);
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



uint Unwind_00f37fad(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x400000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffbfffff;
  piVar5 = *(int **)(unaff_EBP + -0x54);
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



uint Unwind_00f37fcb(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x800000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xff7fffff;
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



uint Unwind_00f37fe9(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x1000000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfeffffff;
  piVar5 = *(int **)(unaff_EBP + -0x6c);
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



uint Unwind_00f38007(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x40000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffbffff;
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



uint Unwind_00f38025(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x80000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfff7ffff;
  piVar5 = *(int **)(unaff_EBP + -0x54);
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



uint Unwind_00f38043(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x100000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffefffff;
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



uint Unwind_00f38061(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x200000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xffdfffff;
  piVar5 = *(int **)(unaff_EBP + -0x6c);
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



void Unwind_00f3807f(void)

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



void Unwind_00f38087(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x6c);
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



void Unwind_00f3808f(void)

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



uint Unwind_00f38097(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x3c) & 0x2000000;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfdffffff;
  piVar5 = *(int **)(unaff_EBP + -0x48);
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



void Unwind_00f380b5(void)

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
  uVar1 = *(undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  func_0x008ab812(uVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f380f0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x44);
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



void Unwind_00f380f8(void)

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



int * Unwind_00f38100(void)

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



void Unwind_00f38108(void)

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



void Unwind_00f38113(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x4c) + 4);
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



int * Unwind_00f3811b(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0xb4);
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



void Unwind_00f38129(void)

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



void Unwind_00f38134(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xcc);
  if (0xf < *(uint *)(unaff_EBP + -0xb8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb8));
  }
  *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3813f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0xb4);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3814a(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x54);
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



void Unwind_00f38152(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x18) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f3815a(void)

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



void Unwind_00f38162(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x98) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x98) = *(uint *)(unaff_EBP + -0x98) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0xe4);
    if (0xf < *(uint *)(unaff_EBP + -0xd0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd0));
    }
    *(undefined4 *)(unaff_EBP + -0xd4) = 0;
    *(undefined4 *)(unaff_EBP + -0xd0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38184(void)

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



void Unwind_00f3818c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x44);
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



void Unwind_00f38194(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -100);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x5c) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  return;
}



void Unwind_00f3819c(void)

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



void Unwind_00f381a7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x98) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x98) = *(uint *)(unaff_EBP + -0x98) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x120);
    if (0xf < *(uint *)(unaff_EBP + -0x10c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10c));
    }
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
    *(undefined4 *)(unaff_EBP + -0x10c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f381c9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x98) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x98) = *(uint *)(unaff_EBP + -0x98) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0x138);
    if (0xf < *(uint *)(unaff_EBP + -0x124)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
    }
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
    *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f381eb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6c));
  }
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f381f3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xe4);
  if (0xf < *(uint *)(unaff_EBP + -0xd0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd0));
  }
  *(undefined4 *)(unaff_EBP + -0xd4) = 0;
  *(undefined4 *)(unaff_EBP + -0xd0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f381fe(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0x1c),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0x18) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f38206(void)

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



void Unwind_00f3820e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x98) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x98) = *(uint *)(unaff_EBP + -0x98) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0xcc);
    if (0xf < *(uint *)(unaff_EBP + -0xb8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb8));
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38230(void)

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



void Unwind_00f38270(void)

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



void Unwind_00f38278(void)

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



void Unwind_00f38280(void)

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



void Unwind_00f38288(void)

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



void Unwind_00f38290(void)

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



void Unwind_00f38298(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x44);
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



void Unwind_00f382a0(void)

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



void Unwind_00f382a8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x40);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f382b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f382f0(void)

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



void Unwind_00f38320(void)

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



void Unwind_00f38328(void)

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



void Unwind_00f38360(void)

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



void Unwind_00f38368(void)

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



void Unwind_00f383a0(void)

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



void Unwind_00f383a8(void)

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



void Unwind_00f383e0(void)

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



void Unwind_00f38410(void)

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



void Unwind_00f38418(void)

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



void Unwind_00f38420(void)

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



void Unwind_00f38460(void)

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
  uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x008ab812(uVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f384a0(void)

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
  uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x008ab812(uVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f384e0(void)

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



void Unwind_00f38510(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    func_0x00584760(iVar1,*(int *)(unaff_EBP + -0x14) - iVar1 >> 4);
    *(int *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  return;
}



void Unwind_00f38550(void)

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
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f38558(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30,uVar1,unaff_EBP + -0x18,unaff_EBP + -0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f38560(void)

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



void Unwind_00f38568(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  puVar2 = (undefined4 *)(iVar1 + 8);
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1c));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



uint Unwind_00f38573(void)

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
  
  iVar6 = *(int *)(unaff_EBP + -0x2c);
  puStack_c = &DAT_00ec78f8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(iVar6 + 8);
  uVar8 = *(uint *)(iVar6 + 0x1c);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8,uVar7);
  }
  *(undefined4 *)(iVar6 + 0x18) = 0;
  *(undefined4 *)(iVar6 + 0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(iVar6 + 4);
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



void Unwind_00f3857b(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd5e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x005a2dc0(uVar1);
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f38583(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd77d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30,uVar1,unaff_EBP + -0x18,unaff_EBP + -0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3858b(void)

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
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),0x30,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f385c0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x4c);
  return;
}



void Unwind_00f385cf(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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



uint Unwind_00f385d7(void)

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



void Unwind_00f38620(void)

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



void Unwind_00f38650(void)

{
  int unaff_EBP;
  
  func_0x0047aa40(unaff_EBP + -0x24);
  return;
}



void Unwind_00f38690(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x48);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38698(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f386a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00eb1185;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f386a8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00eb37ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f386b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x4c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f386b8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f386c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ebd138;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  uStack_8 = 0;
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x30),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f386c8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00ebd138;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  uStack_8 = 0;
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(unaff_EBP + -0x30),uVar3);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f38700(void)

{
  int *piVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  piVar1 = (int *)(unaff_EBP + -0x30);
  iVar3 = *piVar1;
  if ((iVar3 != 0) && (piVar2 = piVar1, *(uint *)(unaff_EBP + -0x2c) < *(uint *)(iVar3 + 0x10))) {
    do {
      func_0x0047aa40(piVar2);
      piVar2 = (int *)(iVar3 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
      else {
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
      }
      iVar3 = *piVar1;
      piVar2 = extraout_ECX;
    } while (*(uint *)(unaff_EBP + -0x2c) < *(uint *)(iVar3 + 0x10));
  }
  return;
}



void Unwind_00f38708(void)

{
  int *piVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if ((iVar2 != 0) && (*(uint *)(unaff_EBP + -0x2c) < *(uint *)(iVar2 + 0x10))) {
    do {
      func_0x0047aa40(*(undefined4 *)(iVar2 + 0xc));
      piVar1 = (int *)(iVar2 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      iVar2 = *(int *)(unaff_EBP + -0x30);
    } while (*(uint *)(unaff_EBP + -0x2c) < *(uint *)(iVar2 + 0x10));
  }
  return;
}



void Unwind_00f38740(void)

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
    func_0x008ab812(*(int *)(unaff_EBP + -0x10),0x1c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f38748(void)

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



int * Unwind_00f38750(void)

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



void Unwind_00f38780(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
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



void Unwind_00f38799(void)

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



void Unwind_00f387e0(void)

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
  if (iRam0145ef3c != 0) {
    func_0x0046ac90(iRam0145ef3c,iRam0145ef44 - iRam0145ef3c >> 2,uVar1);
    iRam0145ef3c = 0;
    uRam0145ef40 = 0;
    iRam0145ef44 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(DAT_0145ef34,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f38810(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x48);
    if (0xf < *(uint *)(unaff_EBP + -0x34)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38829(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x48);
    if (0xf < *(uint *)(unaff_EBP + -0x34)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38842(void)

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



void Unwind_00f3884a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x78);
    if (0xf < *(uint *)(unaff_EBP + -100)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38890(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x18) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f38898(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x31c);
  if (0xf < *(uint *)(unaff_EBP + -0x308)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x308));
  }
  *(undefined4 *)(unaff_EBP + -0x30c) = 0;
  *(undefined4 *)(unaff_EBP + -0x308) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f388a3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffffff7;
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



void Unwind_00f388c5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffff7fff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2a0);
    if (0xf < *(uint *)(unaff_EBP + -0x28c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28c));
    }
    *(undefined4 *)(unaff_EBP + -0x290) = 0;
    *(undefined4 *)(unaff_EBP + -0x28c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f388ec(void)

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



void Unwind_00f388f4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffdffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x210);
    if (0xf < *(uint *)(unaff_EBP + -0x1fc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1fc));
    }
    *(undefined4 *)(unaff_EBP + -0x200) = 0;
    *(undefined4 *)(unaff_EBP + -0x1fc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3891b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffbffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x228);
    if (0xf < *(uint *)(unaff_EBP + -0x214)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x214));
    }
    *(undefined4 *)(unaff_EBP + -0x218) = 0;
    *(undefined4 *)(unaff_EBP + -0x214) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38942(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x334);
  if (0xf < *(uint *)(unaff_EBP + -800)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -800));
  }
  *(undefined4 *)(unaff_EBP + -0x324) = 0;
  *(undefined4 *)(unaff_EBP + -800) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3894d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfff7ffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x240);
    if (0xf < *(uint *)(unaff_EBP + -0x22c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x22c));
    }
    *(undefined4 *)(unaff_EBP + -0x230) = 0;
    *(undefined4 *)(unaff_EBP + -0x22c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38974(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x100000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffefffff;
    puVar1 = (undefined4 *)(unaff_EBP + -600);
    if (0xf < *(uint *)(unaff_EBP + -0x244)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x244));
    }
    *(undefined4 *)(unaff_EBP + -0x248) = 0;
    *(undefined4 *)(unaff_EBP + -0x244) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3899b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x200000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffdfffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x270);
    if (0xf < *(uint *)(unaff_EBP + -0x25c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x25c));
    }
    *(undefined4 *)(unaff_EBP + -0x260) = 0;
    *(undefined4 *)(unaff_EBP + -0x25c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f389c2(void)

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



void Unwind_00f389ca(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2e8);
  if (0xf < *(uint *)(unaff_EBP + -0x2d4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2d4));
  }
  *(undefined4 *)(unaff_EBP + -0x2d8) = 0;
  *(undefined4 *)(unaff_EBP + -0x2d4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f389d5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x34c);
  if (0xf < *(uint *)(unaff_EBP + -0x338)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x338));
  }
  *(undefined4 *)(unaff_EBP + -0x33c) = 0;
  *(undefined4 *)(unaff_EBP + -0x338) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f389e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1f8);
    if (0xf < *(uint *)(unaff_EBP + -0x1e4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1e4));
    }
    *(undefined4 *)(unaff_EBP + -0x1e8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1e4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38a02(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1e0);
    if (0xf < *(uint *)(unaff_EBP + -0x1cc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1cc));
    }
    *(undefined4 *)(unaff_EBP + -0x1d0) = 0;
    *(undefined4 *)(unaff_EBP + -0x1cc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38a29(void)

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



void Unwind_00f38a34(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffffdff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2b8);
    if (0xf < *(uint *)(unaff_EBP + -0x2a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2a4));
    }
    *(undefined4 *)(unaff_EBP + -0x2a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38a5b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffffbff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x288);
    if (0xf < *(uint *)(unaff_EBP + -0x274)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x274));
    }
    *(undefined4 *)(unaff_EBP + -0x278) = 0;
    *(undefined4 *)(unaff_EBP + -0x274) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38a82(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x364);
  if (0xf < *(uint *)(unaff_EBP + -0x350)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x350));
  }
  *(undefined4 *)(unaff_EBP + -0x354) = 0;
  *(undefined4 *)(unaff_EBP + -0x350) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38a8d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffff7ff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b0);
    if (0xf < *(uint *)(unaff_EBP + -0x19c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x19c));
    }
    *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
    *(undefined4 *)(unaff_EBP + -0x19c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38ab4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffffefff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x198);
    if (0xf < *(uint *)(unaff_EBP + -0x184)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x184));
    }
    *(undefined4 *)(unaff_EBP + -0x188) = 0;
    *(undefined4 *)(unaff_EBP + -0x184) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38adb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffffdfff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1c8);
    if (0xf < *(uint *)(unaff_EBP + -0x1b4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1b4));
    }
    *(undefined4 *)(unaff_EBP + -0x1b8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1b4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38b02(void)

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



void Unwind_00f38b0d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2d0);
  if (0xf < *(uint *)(unaff_EBP + -700)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -700));
  }
  *(undefined4 *)(unaff_EBP + -0x2c0) = 0;
  *(undefined4 *)(unaff_EBP + -700) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38b18(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x40);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x38) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  return;
}



void Unwind_00f38b20(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3ec);
    if (0xf < *(uint *)(unaff_EBP + -0x3d8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3d8));
    }
    *(undefined4 *)(unaff_EBP + -0x3dc) = 0;
    *(undefined4 *)(unaff_EBP + -0x3d8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38b42(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x404);
    if (0xf < *(uint *)(unaff_EBP + -0x3f0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3f0));
    }
    *(undefined4 *)(unaff_EBP + -0x3f4) = 0;
    *(undefined4 *)(unaff_EBP + -0x3f0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38b64(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfffffffb;
    puVar1 = (undefined4 *)(unaff_EBP + -0x41c);
    if (0xf < *(uint *)(unaff_EBP + -0x408)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x408));
    }
    *(undefined4 *)(unaff_EBP + -0x40c) = 0;
    *(undefined4 *)(unaff_EBP + -0x408) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38b86(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x434);
    if (0xf < *(uint *)(unaff_EBP + -0x420)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x420));
    }
    *(undefined4 *)(unaff_EBP + -0x424) = 0;
    *(undefined4 *)(unaff_EBP + -0x420) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38ba8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x44c);
    if (0xf < *(uint *)(unaff_EBP + -0x438)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x438));
    }
    *(undefined4 *)(unaff_EBP + -0x43c) = 0;
    *(undefined4 *)(unaff_EBP + -0x438) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38bca(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4c4);
  if (0xf < *(uint *)(unaff_EBP + -0x4b0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4b0));
  }
  *(undefined4 *)(unaff_EBP + -0x4b4) = 0;
  *(undefined4 *)(unaff_EBP + -0x4b0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38bd5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x800000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xff7fffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x464);
    if (0xf < *(uint *)(unaff_EBP + -0x450)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x450));
    }
    *(undefined4 *)(unaff_EBP + -0x454) = 0;
    *(undefined4 *)(unaff_EBP + -0x450) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38bfc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4f4);
  if (0xf < *(uint *)(unaff_EBP + -0x4e0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4e0));
  }
  *(undefined4 *)(unaff_EBP + -0x4e4) = 0;
  *(undefined4 *)(unaff_EBP + -0x4e0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38c07(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x1000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfeffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x47c);
    if (0xf < *(uint *)(unaff_EBP + -0x468)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x468));
    }
    *(undefined4 *)(unaff_EBP + -0x46c) = 0;
    *(undefined4 *)(unaff_EBP + -0x468) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38c2e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x2000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfdffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3d4);
    if (0xf < *(uint *)(unaff_EBP + -0x3c0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c0));
    }
    *(undefined4 *)(unaff_EBP + -0x3c4) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38c55(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x4000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xfbffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x494);
    if (0xf < *(uint *)(unaff_EBP + -0x480)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x480));
    }
    *(undefined4 *)(unaff_EBP + -0x484) = 0;
    *(undefined4 *)(unaff_EBP + -0x480) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38c7c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x8000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xf7ffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x4ac);
    if (0xf < *(uint *)(unaff_EBP + -0x498)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x498));
    }
    *(undefined4 *)(unaff_EBP + -0x49c) = 0;
    *(undefined4 *)(unaff_EBP + -0x498) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38ca3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x10000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xefffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x38c);
    if (0xf < *(uint *)(unaff_EBP + -0x378)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x378));
    }
    *(undefined4 *)(unaff_EBP + -0x37c) = 0;
    *(undefined4 *)(unaff_EBP + -0x378) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38cca(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x20000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xdfffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3a4);
    if (0xf < *(uint *)(unaff_EBP + -0x390)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x390));
    }
    *(undefined4 *)(unaff_EBP + -0x394) = 0;
    *(undefined4 *)(unaff_EBP + -0x390) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38cf1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x40000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0xbfffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x3bc);
    if (0xf < *(uint *)(unaff_EBP + -0x3a8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3a8));
    }
    *(undefined4 *)(unaff_EBP + -0x3ac) = 0;
    *(undefined4 *)(unaff_EBP + -0x3a8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38d18(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x16c) & 0x80000000) != 0) {
    *(uint *)(unaff_EBP + -0x16c) = *(uint *)(unaff_EBP + -0x16c) & 0x7fffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2d0);
    if (0xf < *(uint *)(unaff_EBP + -700)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -700));
    }
    *(undefined4 *)(unaff_EBP + -0x2c0) = 0;
    *(undefined4 *)(unaff_EBP + -700) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38d3f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2e8);
    if (0xf < *(uint *)(unaff_EBP + -0x2d4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2d4));
    }
    *(undefined4 *)(unaff_EBP + -0x2d8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2d4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38d61(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffffffd;
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



void Unwind_00f38d83(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffffffb;
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



void Unwind_00f38da5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x524);
  if (0xf < *(uint *)(unaff_EBP + -0x510)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x510));
  }
  *(undefined4 *)(unaff_EBP + -0x514) = 0;
  *(undefined4 *)(unaff_EBP + -0x510) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38db0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x5b4);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38dbb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50c);
  if (0xf < *(uint *)(unaff_EBP + -0x4f8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4f8));
  }
  *(undefined4 *)(unaff_EBP + -0x4fc) = 0;
  *(undefined4 *)(unaff_EBP + -0x4f8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38dc6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2b8);
    if (0xf < *(uint *)(unaff_EBP + -0x2a4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2a4));
    }
    *(undefined4 *)(unaff_EBP + -0x2a8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2a4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38de8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x4dc);
  if (0xf < *(uint *)(unaff_EBP + -0x4c8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c8));
  }
  *(undefined4 *)(unaff_EBP + -0x4cc) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38df3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x5b8);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38dfe(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x53c);
  if (0xf < *(uint *)(unaff_EBP + -0x528)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x528));
  }
  *(undefined4 *)(unaff_EBP + -0x52c) = 0;
  *(undefined4 *)(unaff_EBP + -0x528) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38e09(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0x288);
    if (0xf < *(uint *)(unaff_EBP + -0x274)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x274));
    }
    *(undefined4 *)(unaff_EBP + -0x278) = 0;
    *(undefined4 *)(unaff_EBP + -0x274) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38e2b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b0);
    if (0xf < *(uint *)(unaff_EBP + -0x19c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x19c));
    }
    *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
    *(undefined4 *)(unaff_EBP + -0x19c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38e52(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffffeff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1c8);
    if (0xf < *(uint *)(unaff_EBP + -0x1b4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1b4));
    }
    *(undefined4 *)(unaff_EBP + -0x1b8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1b4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38e79(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffffdff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1e0);
    if (0xf < *(uint *)(unaff_EBP + -0x1cc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1cc));
    }
    *(undefined4 *)(unaff_EBP + -0x1d0) = 0;
    *(undefined4 *)(unaff_EBP + -0x1cc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38ea0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffffbff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1f8);
    if (0xf < *(uint *)(unaff_EBP + -0x1e4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1e4));
    }
    *(undefined4 *)(unaff_EBP + -0x1e8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1e4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38ec7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffff7ff;
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



void Unwind_00f38eeb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffffefff;
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



void Unwind_00f38f0f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffffdfff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x210);
    if (0xf < *(uint *)(unaff_EBP + -0x1fc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1fc));
    }
    *(undefined4 *)(unaff_EBP + -0x200) = 0;
    *(undefined4 *)(unaff_EBP + -0x1fc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38f36(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffffbfff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x228);
    if (0xf < *(uint *)(unaff_EBP + -0x214)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x214));
    }
    *(undefined4 *)(unaff_EBP + -0x218) = 0;
    *(undefined4 *)(unaff_EBP + -0x214) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38f5d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xffff7fff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x240);
    if (0xf < *(uint *)(unaff_EBP + -0x22c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x22c));
    }
    *(undefined4 *)(unaff_EBP + -0x230) = 0;
    *(undefined4 *)(unaff_EBP + -0x22c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38f84(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x5bc);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f38f8f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffeffff;
    puVar1 = (undefined4 *)(unaff_EBP + -600);
    if (0xf < *(uint *)(unaff_EBP + -0x244)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x244));
    }
    *(undefined4 *)(unaff_EBP + -0x248) = 0;
    *(undefined4 *)(unaff_EBP + -0x244) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38fb6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffdffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x270);
    if (0xf < *(uint *)(unaff_EBP + -0x25c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x25c));
    }
    *(undefined4 *)(unaff_EBP + -0x260) = 0;
    *(undefined4 *)(unaff_EBP + -0x25c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f38fdd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfffbffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x2a0);
    if (0xf < *(uint *)(unaff_EBP + -0x28c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28c));
    }
    *(undefined4 *)(unaff_EBP + -0x290) = 0;
    *(undefined4 *)(unaff_EBP + -0x28c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39004(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x168) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x168) = *(uint *)(unaff_EBP + -0x168) & 0xfff7ffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x198);
    if (0xf < *(uint *)(unaff_EBP + -0x184)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x184));
    }
    *(undefined4 *)(unaff_EBP + -0x188) = 0;
    *(undefined4 *)(unaff_EBP + -0x184) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3902b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x7dc);
  if (0xf < *(uint *)(unaff_EBP + -0x7c8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7c8));
  }
  *(undefined4 *)(unaff_EBP + -0x7cc) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39036(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x7f4);
  if (0xf < *(uint *)(unaff_EBP + -0x7e0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7e0));
  }
  *(undefined4 *)(unaff_EBP + -0x7e4) = 0;
  *(undefined4 *)(unaff_EBP + -0x7e0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39041(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x80c);
  if (0xf < *(uint *)(unaff_EBP + -0x7f8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7f8));
  }
  *(undefined4 *)(unaff_EBP + -0x7fc) = 0;
  *(undefined4 *)(unaff_EBP + -0x7f8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3904c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x824);
  if (0xf < *(uint *)(unaff_EBP + -0x810)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x810));
  }
  *(undefined4 *)(unaff_EBP + -0x814) = 0;
  *(undefined4 *)(unaff_EBP + -0x810) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39057(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x83c);
  if (0xf < *(uint *)(unaff_EBP + -0x828)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x828));
  }
  *(undefined4 *)(unaff_EBP + -0x82c) = 0;
  *(undefined4 *)(unaff_EBP + -0x828) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39062(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x854);
  if (0xf < *(uint *)(unaff_EBP + -0x840)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x840));
  }
  *(undefined4 *)(unaff_EBP + -0x844) = 0;
  *(undefined4 *)(unaff_EBP + -0x840) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3906d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x86c);
  if (0xf < *(uint *)(unaff_EBP + -0x858)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x858));
  }
  *(undefined4 *)(unaff_EBP + -0x85c) = 0;
  *(undefined4 *)(unaff_EBP + -0x858) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39078(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x368);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39083(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x884);
  if (0xf < *(uint *)(unaff_EBP + -0x870)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x870));
  }
  *(undefined4 *)(unaff_EBP + -0x874) = 0;
  *(undefined4 *)(unaff_EBP + -0x870) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3908e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x89c);
  if (0xf < *(uint *)(unaff_EBP + -0x888)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x888));
  }
  *(undefined4 *)(unaff_EBP + -0x88c) = 0;
  *(undefined4 *)(unaff_EBP + -0x888) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39099(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6bc);
  if (0xf < *(uint *)(unaff_EBP + -0x6a8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6a8));
  }
  *(undefined4 *)(unaff_EBP + -0x6ac) = 0;
  *(undefined4 *)(unaff_EBP + -0x6a8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390a4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8b4);
  if (0xf < *(uint *)(unaff_EBP + -0x8a0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8a0));
  }
  *(undefined4 *)(unaff_EBP + -0x8a4) = 0;
  *(undefined4 *)(unaff_EBP + -0x8a0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390af(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xcc);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -200),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0xc4) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  }
  return;
}



void Unwind_00f390ba(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8cc);
  if (0xf < *(uint *)(unaff_EBP + -0x8b8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8b8));
  }
  *(undefined4 *)(unaff_EBP + -0x8bc) = 0;
  *(undefined4 *)(unaff_EBP + -0x8b8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390c5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8e4);
  if (0xf < *(uint *)(unaff_EBP + -0x8d0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8d0));
  }
  *(undefined4 *)(unaff_EBP + -0x8d4) = 0;
  *(undefined4 *)(unaff_EBP + -0x8d0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x8fc);
  if (0xf < *(uint *)(unaff_EBP + -0x8e8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x8e8));
  }
  *(undefined4 *)(unaff_EBP + -0x8ec) = 0;
  *(undefined4 *)(unaff_EBP + -0x8e8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390db(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x7c4);
  if (0xf < *(uint *)(unaff_EBP + -0x7b0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x7b0));
  }
  *(undefined4 *)(unaff_EBP + -0x7b4) = 0;
  *(undefined4 *)(unaff_EBP + -0x7b0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390e6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x92c);
  if (0xf < *(uint *)(unaff_EBP + -0x918)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x918));
  }
  *(undefined4 *)(unaff_EBP + -0x91c) = 0;
  *(undefined4 *)(unaff_EBP + -0x918) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390f1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x944);
  if (0xf < *(uint *)(unaff_EBP + -0x930)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x930));
  }
  *(undefined4 *)(unaff_EBP + -0x934) = 0;
  *(undefined4 *)(unaff_EBP + -0x930) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f390fc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6d4);
  if (0xf < *(uint *)(unaff_EBP + -0x6c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6c0));
  }
  *(undefined4 *)(unaff_EBP + -0x6c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39107(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x95c);
  if (0xf < *(uint *)(unaff_EBP + -0x948)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x948));
  }
  *(undefined4 *)(unaff_EBP + -0x94c) = 0;
  *(undefined4 *)(unaff_EBP + -0x948) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39112(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xf4);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0xf0),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0xec) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0xf0) = 0;
    *(undefined4 *)(unaff_EBP + -0xec) = 0;
  }
  return;
}



void Unwind_00f3911d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x974);
  if (0xf < *(uint *)(unaff_EBP + -0x960)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x960));
  }
  *(undefined4 *)(unaff_EBP + -0x964) = 0;
  *(undefined4 *)(unaff_EBP + -0x960) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39128(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x98c);
  if (0xf < *(uint *)(unaff_EBP + -0x978)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x978));
  }
  *(undefined4 *)(unaff_EBP + -0x97c) = 0;
  *(undefined4 *)(unaff_EBP + -0x978) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39133(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9a4);
  if (0xf < *(uint *)(unaff_EBP + -0x990)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x990));
  }
  *(undefined4 *)(unaff_EBP + -0x994) = 0;
  *(undefined4 *)(unaff_EBP + -0x990) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3913e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9bc);
  if (0xf < *(uint *)(unaff_EBP + -0x9a8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9a8));
  }
  *(undefined4 *)(unaff_EBP + -0x9ac) = 0;
  *(undefined4 *)(unaff_EBP + -0x9a8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39149(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9d4);
  if (0xf < *(uint *)(unaff_EBP + -0x9c0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9c0));
  }
  *(undefined4 *)(unaff_EBP + -0x9c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39154(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9ec);
  if (0xf < *(uint *)(unaff_EBP + -0x9d8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9d8));
  }
  *(undefined4 *)(unaff_EBP + -0x9dc) = 0;
  *(undefined4 *)(unaff_EBP + -0x9d8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3915f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa04);
  if (0xf < *(uint *)(unaff_EBP + -0x9f0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x9f0));
  }
  *(undefined4 *)(unaff_EBP + -0x9f4) = 0;
  *(undefined4 *)(unaff_EBP + -0x9f0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3916a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa1c);
  if (0xf < *(uint *)(unaff_EBP + -0xa08)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa08));
  }
  *(undefined4 *)(unaff_EBP + -0xa0c) = 0;
  *(undefined4 *)(unaff_EBP + -0xa08) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39175(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa34);
  if (0xf < *(uint *)(unaff_EBP + -0xa20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa20));
  }
  *(undefined4 *)(unaff_EBP + -0xa24) = 0;
  *(undefined4 *)(unaff_EBP + -0xa20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39180(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa4c);
  if (0xf < *(uint *)(unaff_EBP + -0xa38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa38));
  }
  *(undefined4 *)(unaff_EBP + -0xa3c) = 0;
  *(undefined4 *)(unaff_EBP + -0xa38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3918b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc74);
  if (0xf < *(uint *)(unaff_EBP + -0xc60)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc60));
  }
  *(undefined4 *)(unaff_EBP + -0xc64) = 0;
  *(undefined4 *)(unaff_EBP + -0xc60) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39196(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x914);
  if (0xf < *(uint *)(unaff_EBP + -0x900)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x900));
  }
  *(undefined4 *)(unaff_EBP + -0x904) = 0;
  *(undefined4 *)(unaff_EBP + -0x900) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391a1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa64);
  if (0xf < *(uint *)(unaff_EBP + -0xa50)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa50));
  }
  *(undefined4 *)(unaff_EBP + -0xa54) = 0;
  *(undefined4 *)(unaff_EBP + -0xa50) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391ac(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa7c);
  if (0xf < *(uint *)(unaff_EBP + -0xa68)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa68));
  }
  *(undefined4 *)(unaff_EBP + -0xa6c) = 0;
  *(undefined4 *)(unaff_EBP + -0xa68) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391b7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xa94);
  if (0xf < *(uint *)(unaff_EBP + -0xa80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa80));
  }
  *(undefined4 *)(unaff_EBP + -0xa84) = 0;
  *(undefined4 *)(unaff_EBP + -0xa80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391c2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xaac);
  if (0xf < *(uint *)(unaff_EBP + -0xa98)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa98));
  }
  *(undefined4 *)(unaff_EBP + -0xa9c) = 0;
  *(undefined4 *)(unaff_EBP + -0xa98) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391cd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xac4);
  if (0xf < *(uint *)(unaff_EBP + -0xab0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xab0));
  }
  *(undefined4 *)(unaff_EBP + -0xab4) = 0;
  *(undefined4 *)(unaff_EBP + -0xab0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391d8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391e3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6ec);
  if (0xf < *(uint *)(unaff_EBP + -0x6d8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6d8));
  }
  *(undefined4 *)(unaff_EBP + -0x6dc) = 0;
  *(undefined4 *)(unaff_EBP + -0x6d8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f391ee(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x34);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0x30),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0x2c) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  return;
}



void Unwind_00f391f6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xadc);
  if (0xf < *(uint *)(unaff_EBP + -0xac8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xac8));
  }
  *(undefined4 *)(unaff_EBP + -0xacc) = 0;
  *(undefined4 *)(unaff_EBP + -0xac8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39201(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xaf4);
  if (0xf < *(uint *)(unaff_EBP + -0xae0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xae0));
  }
  *(undefined4 *)(unaff_EBP + -0xae4) = 0;
  *(undefined4 *)(unaff_EBP + -0xae0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3920c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb0c);
  if (0xf < *(uint *)(unaff_EBP + -0xaf8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xaf8));
  }
  *(undefined4 *)(unaff_EBP + -0xafc) = 0;
  *(undefined4 *)(unaff_EBP + -0xaf8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39217(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb24);
  if (0xf < *(uint *)(unaff_EBP + -0xb10)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb10));
  }
  *(undefined4 *)(unaff_EBP + -0xb14) = 0;
  *(undefined4 *)(unaff_EBP + -0xb10) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39222(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb3c);
  if (0xf < *(uint *)(unaff_EBP + -0xb28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb28));
  }
  *(undefined4 *)(unaff_EBP + -0xb2c) = 0;
  *(undefined4 *)(unaff_EBP + -0xb28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3922d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb54);
  if (0xf < *(uint *)(unaff_EBP + -0xb40)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb40));
  }
  *(undefined4 *)(unaff_EBP + -0xb44) = 0;
  *(undefined4 *)(unaff_EBP + -0xb40) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39238(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb6c);
  if (0xf < *(uint *)(unaff_EBP + -0xb58)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb58));
  }
  *(undefined4 *)(unaff_EBP + -0xb5c) = 0;
  *(undefined4 *)(unaff_EBP + -0xb58) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39243(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb84);
  if (0xf < *(uint *)(unaff_EBP + -0xb70)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb70));
  }
  *(undefined4 *)(unaff_EBP + -0xb74) = 0;
  *(undefined4 *)(unaff_EBP + -0xb70) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3924e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xb9c);
  if (0xf < *(uint *)(unaff_EBP + -0xb88)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb88));
  }
  *(undefined4 *)(unaff_EBP + -0xb8c) = 0;
  *(undefined4 *)(unaff_EBP + -0xb88) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39259(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xbb4);
  if (0xf < *(uint *)(unaff_EBP + -0xba0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xba0));
  }
  *(undefined4 *)(unaff_EBP + -0xba4) = 0;
  *(undefined4 *)(unaff_EBP + -0xba0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39264(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xbcc);
  if (0xf < *(uint *)(unaff_EBP + -3000)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -3000));
  }
  *(undefined4 *)(unaff_EBP + -0xbbc) = 0;
  *(undefined4 *)(unaff_EBP + -3000) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3926f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xbe4);
  if (0xf < *(uint *)(unaff_EBP + -0xbd0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbd0));
  }
  *(undefined4 *)(unaff_EBP + -0xbd4) = 0;
  *(undefined4 *)(unaff_EBP + -0xbd0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3927a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xbfc);
  if (0xf < *(uint *)(unaff_EBP + -0xbe8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xbe8));
  }
  *(undefined4 *)(unaff_EBP + -0xbec) = 0;
  *(undefined4 *)(unaff_EBP + -0xbe8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39285(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc14);
  if (0xf < *(uint *)(unaff_EBP + -0xc00)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc00));
  }
  *(undefined4 *)(unaff_EBP + -0xc04) = 0;
  *(undefined4 *)(unaff_EBP + -0xc00) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39290(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc2c);
  if (0xf < *(uint *)(unaff_EBP + -0xc18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc18));
  }
  *(undefined4 *)(unaff_EBP + -0xc1c) = 0;
  *(undefined4 *)(unaff_EBP + -0xc18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3929b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x148);
  if (0xf < *(uint *)(unaff_EBP + -0x134)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x134));
  }
  *(undefined4 *)(unaff_EBP + -0x138) = 0;
  *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392a6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x614);
  if (0xf < *(uint *)(unaff_EBP + -0x600)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x600));
  }
  *(undefined4 *)(unaff_EBP + -0x604) = 0;
  *(undefined4 *)(unaff_EBP + -0x600) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392b1(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x20);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0x1c),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0x18) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}



void Unwind_00f392b9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc44);
  if (0xf < *(uint *)(unaff_EBP + -0xc30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc30));
  }
  *(undefined4 *)(unaff_EBP + -0xc34) = 0;
  *(undefined4 *)(unaff_EBP + -0xc30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392c4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc5c);
  if (0xf < *(uint *)(unaff_EBP + -0xc48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc48));
  }
  *(undefined4 *)(unaff_EBP + -0xc4c) = 0;
  *(undefined4 *)(unaff_EBP + -0xc48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392cf(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x7ac);
  if (0xf < *(uint *)(unaff_EBP + -0x798)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x798));
  }
  *(undefined4 *)(unaff_EBP + -0x79c) = 0;
  *(undefined4 *)(unaff_EBP + -0x798) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392da(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc8c);
  if (0xf < *(uint *)(unaff_EBP + -0xc78)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc78));
  }
  *(undefined4 *)(unaff_EBP + -0xc7c) = 0;
  *(undefined4 *)(unaff_EBP + -0xc78) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392e5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xca4);
  if (0xf < *(uint *)(unaff_EBP + -0xc90)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc90));
  }
  *(undefined4 *)(unaff_EBP + -0xc94) = 0;
  *(undefined4 *)(unaff_EBP + -0xc90) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xcbc);
  if (0xf < *(uint *)(unaff_EBP + -0xca8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xca8));
  }
  *(undefined4 *)(unaff_EBP + -0xcac) = 0;
  *(undefined4 *)(unaff_EBP + -0xca8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f392fb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xcd4);
  if (0xf < *(uint *)(unaff_EBP + -0xcc0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcc0));
  }
  *(undefined4 *)(unaff_EBP + -0xcc4) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39306(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xcec);
  if (0xf < *(uint *)(unaff_EBP + -0xcd8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcd8));
  }
  *(undefined4 *)(unaff_EBP + -0xcdc) = 0;
  *(undefined4 *)(unaff_EBP + -0xcd8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39311(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd04);
  if (0xf < *(uint *)(unaff_EBP + -0xcf0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xcf0));
  }
  *(undefined4 *)(unaff_EBP + -0xcf4) = 0;
  *(undefined4 *)(unaff_EBP + -0xcf0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3931c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd1c);
  if (0xf < *(uint *)(unaff_EBP + -0xd08)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd08));
  }
  *(undefined4 *)(unaff_EBP + -0xd0c) = 0;
  *(undefined4 *)(unaff_EBP + -0xd08) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39327(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd34);
  if (0xf < *(uint *)(unaff_EBP + -0xd20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd20));
  }
  *(undefined4 *)(unaff_EBP + -0xd24) = 0;
  *(undefined4 *)(unaff_EBP + -0xd20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39332(void)

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



void Unwind_00f3933d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd4c);
  if (0xf < *(uint *)(unaff_EBP + -0xd38)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd38));
  }
  *(undefined4 *)(unaff_EBP + -0xd3c) = 0;
  *(undefined4 *)(unaff_EBP + -0xd38) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39348(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x644);
  if (0xf < *(uint *)(unaff_EBP + -0x630)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x630));
  }
  *(undefined4 *)(unaff_EBP + -0x634) = 0;
  *(undefined4 *)(unaff_EBP + -0x630) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39353(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x62c);
  if (0xf < *(uint *)(unaff_EBP + -0x618)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x618));
  }
  *(undefined4 *)(unaff_EBP + -0x61c) = 0;
  *(undefined4 *)(unaff_EBP + -0x618) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3935e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd64);
  if (0xf < *(uint *)(unaff_EBP + -0xd50)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd50));
  }
  *(undefined4 *)(unaff_EBP + -0xd54) = 0;
  *(undefined4 *)(unaff_EBP + -0xd50) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39369(void)

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



void Unwind_00f39371(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x550);
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



void Unwind_00f3937c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x548);
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



void Unwind_00f39387(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x560);
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



void Unwind_00f39392(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x558);
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



void Unwind_00f3939d(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x570);
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



void Unwind_00f393a8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x568);
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



void Unwind_00f393b3(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x580);
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



void Unwind_00f393be(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x578);
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



void Unwind_00f393c9(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x590);
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



void Unwind_00f393d4(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x588);
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



void Unwind_00f393df(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x65c);
  if (0xf < *(uint *)(unaff_EBP + -0x648)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x648));
  }
  *(undefined4 *)(unaff_EBP + -0x64c) = 0;
  *(undefined4 *)(unaff_EBP + -0x648) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f393ea(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd7c);
  if (0xf < *(uint *)(unaff_EBP + -0xd68)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd68));
  }
  *(undefined4 *)(unaff_EBP + -0xd6c) = 0;
  *(undefined4 *)(unaff_EBP + -0xd68) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f393f5(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xd0);
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



void Unwind_00f39400(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xd8);
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



void Unwind_00f3940b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xbc);
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



void Unwind_00f39416(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x598);
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



void Unwind_00f39421(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xd94);
  if (0xf < *(uint *)(unaff_EBP + -0xd80)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd80));
  }
  *(undefined4 *)(unaff_EBP + -0xd84) = 0;
  *(undefined4 *)(unaff_EBP + -0xd80) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3942c(void)

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



void Unwind_00f39437(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdac);
  if (0xf < *(uint *)(unaff_EBP + -0xd98)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd98));
  }
  *(undefined4 *)(unaff_EBP + -0xd9c) = 0;
  *(undefined4 *)(unaff_EBP + -0xd98) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39442(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc4);
  if (0xf < *(uint *)(unaff_EBP + -0xdb0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xdb0));
  }
  *(undefined4 *)(unaff_EBP + -0xdb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xdb0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3944d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x5c0);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39458(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xddc);
  if (0xf < *(uint *)(unaff_EBP + -0xdc8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xdc8));
  }
  *(undefined4 *)(unaff_EBP + -0xdcc) = 0;
  *(undefined4 *)(unaff_EBP + -0xdc8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39463(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6a4);
  if (0xf < *(uint *)(unaff_EBP + -0x690)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x690));
  }
  *(undefined4 *)(unaff_EBP + -0x694) = 0;
  *(undefined4 *)(unaff_EBP + -0x690) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3946e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdf4);
  if (0xf < *(uint *)(unaff_EBP + -0xde0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xde0));
  }
  *(undefined4 *)(unaff_EBP + -0xde4) = 0;
  *(undefined4 *)(unaff_EBP + -0xde0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39479(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0xe8);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0xe4),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0xe0) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
  }
  return;
}



void Unwind_00f39484(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x130);
  if (0xf < *(uint *)(unaff_EBP + -0x11c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x11c));
  }
  *(undefined4 *)(unaff_EBP + -0x120) = 0;
  *(undefined4 *)(unaff_EBP + -0x11c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3948f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x540);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3949a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x71c);
  if (0xf < *(uint *)(unaff_EBP + -0x708)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x708));
  }
  *(undefined4 *)(unaff_EBP + -0x70c) = 0;
  *(undefined4 *)(unaff_EBP + -0x708) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394a5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x734);
  if (0xf < *(uint *)(unaff_EBP + -0x720)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x720));
  }
  *(undefined4 *)(unaff_EBP + -0x724) = 0;
  *(undefined4 *)(unaff_EBP + -0x720) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x74c);
  if (0xf < *(uint *)(unaff_EBP + -0x738)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x738));
  }
  *(undefined4 *)(unaff_EBP + -0x73c) = 0;
  *(undefined4 *)(unaff_EBP + -0x738) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394bb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x764);
  if (0xf < *(uint *)(unaff_EBP + -0x750)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x750));
  }
  *(undefined4 *)(unaff_EBP + -0x754) = 0;
  *(undefined4 *)(unaff_EBP + -0x750) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394c6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x704);
  if (0xf < *(uint *)(unaff_EBP + -0x6f0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6f0));
  }
  *(undefined4 *)(unaff_EBP + -0x6f4) = 0;
  *(undefined4 *)(unaff_EBP + -0x6f0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394d1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x77c);
  if (0xf < *(uint *)(unaff_EBP + -0x768)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x768));
  }
  *(undefined4 *)(unaff_EBP + -0x76c) = 0;
  *(undefined4 *)(unaff_EBP + -0x768) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394dc(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x100);
  if (*piVar1 != 0) {
    func_0x004e7c10(*piVar1,*(undefined4 *)(unaff_EBP + -0xfc),piVar1);
    func_0x004c7ff0(*piVar1,(*(int *)(unaff_EBP + -0xf8) - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0xfc) = 0;
    *(undefined4 *)(unaff_EBP + -0xf8) = 0;
  }
  return;
}



void Unwind_00f394e7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x794);
  if (0xf < *(uint *)(unaff_EBP + -0x780)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x780));
  }
  *(undefined4 *)(unaff_EBP + -0x784) = 0;
  *(undefined4 *)(unaff_EBP + -0x780) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f394f2(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x5a8);
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



void Unwind_00f394fd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39508(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x544);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39513(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x5b0);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3951e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39529(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39534(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3953f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3954a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39555(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39560(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x300);
  if (0xf < *(uint *)(unaff_EBP + -0x2ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2ec));
  }
  *(undefined4 *)(unaff_EBP + -0x2f0) = 0;
  *(undefined4 *)(unaff_EBP + -0x2ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f395a0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00f395a8(void)

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



void Unwind_00f395e0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x3c);
  return;
}



void Unwind_00f395ef(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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



uint Unwind_00f395f7(void)

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



void Unwind_00f39640(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x38);
  return;
}



void Unwind_00f3964f(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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



uint Unwind_00f39657(void)

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



void Unwind_00f396a0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x44);
  return;
}



void Unwind_00f396af(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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



uint Unwind_00f396b7(void)

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



void Unwind_00f39700(void)

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
  if (iRam0145ef5c != 0) {
    func_0x0046ac90(iRam0145ef5c,iRam0145ef64 - iRam0145ef5c >> 2,uVar1);
    iRam0145ef5c = 0;
    uRam0145ef60 = 0;
    iRam0145ef64 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145ef54,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int Unwind_00f39730(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eae063;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = func_0x00618eb0(uVar5);
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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



void Unwind_00f39738(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x30);
  if (0xf < *(uint *)(iVar1 + 0x44)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x44));
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00f39770(void)

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



void Unwind_00f39778(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x270);
    if (0xf < *(uint *)(unaff_EBP + -0x25c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x25c));
    }
    *(undefined4 *)(unaff_EBP + -0x260) = 0;
    *(undefined4 *)(unaff_EBP + -0x25c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39794(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -600);
    if (0xf < *(uint *)(unaff_EBP + -0x244)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x244));
    }
    *(undefined4 *)(unaff_EBP + -0x248) = 0;
    *(undefined4 *)(unaff_EBP + -0x244) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f397b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x288);
  if (0xf < *(uint *)(unaff_EBP + -0x274)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x274));
  }
  *(undefined4 *)(unaff_EBP + -0x278) = 0;
  *(undefined4 *)(unaff_EBP + -0x274) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f397bb(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffff7;
    puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
    if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc4));
    }
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f397d7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2b8);
  if (0xf < *(uint *)(unaff_EBP + -0x2a4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2a4));
  }
  *(undefined4 *)(unaff_EBP + -0x2a8) = 0;
  *(undefined4 *)(unaff_EBP + -0x2a4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f397e2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2ec);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f397ed(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2a0);
  if (0xf < *(uint *)(unaff_EBP + -0x28c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28c));
  }
  *(undefined4 *)(unaff_EBP + -0x290) = 0;
  *(undefined4 *)(unaff_EBP + -0x28c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f397f8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xf0);
    if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xdc));
    }
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39814(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2d0);
  if (0xf < *(uint *)(unaff_EBP + -700)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -700));
  }
  *(undefined4 *)(unaff_EBP + -0x2c0) = 0;
  *(undefined4 *)(unaff_EBP + -700) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3981f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0x108);
    if (0xf < *(uint *)(unaff_EBP + -0xf4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xf4));
    }
    *(undefined4 *)(unaff_EBP + -0xf8) = 0;
    *(undefined4 *)(unaff_EBP + -0xf4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39840(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffeff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x120);
    if (0xf < *(uint *)(unaff_EBP + -0x10c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x10c));
    }
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
    *(undefined4 *)(unaff_EBP + -0x10c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39861(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffdff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x138);
    if (0xf < *(uint *)(unaff_EBP + -0x124)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x124));
    }
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
    *(undefined4 *)(unaff_EBP + -0x124) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39882(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffbff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x150);
    if (0xf < *(uint *)(unaff_EBP + -0x13c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x13c));
    }
    *(undefined4 *)(unaff_EBP + -0x140) = 0;
    *(undefined4 *)(unaff_EBP + -0x13c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f398a3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffff7ff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x168);
    if (0xf < *(uint *)(unaff_EBP + -0x154)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x154));
    }
    *(undefined4 *)(unaff_EBP + -0x158) = 0;
    *(undefined4 *)(unaff_EBP + -0x154) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f398c4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffefff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x180);
    if (0xf < *(uint *)(unaff_EBP + -0x16c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x16c));
    }
    *(undefined4 *)(unaff_EBP + -0x170) = 0;
    *(undefined4 *)(unaff_EBP + -0x16c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f398e5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffdfff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x198);
    if (0xf < *(uint *)(unaff_EBP + -0x184)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x184));
    }
    *(undefined4 *)(unaff_EBP + -0x188) = 0;
    *(undefined4 *)(unaff_EBP + -0x184) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39906(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffffbfff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1b0);
    if (0xf < *(uint *)(unaff_EBP + -0x19c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x19c));
    }
    *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
    *(undefined4 *)(unaff_EBP + -0x19c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39927(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffff7fff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1c8);
    if (0xf < *(uint *)(unaff_EBP + -0x1b4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1b4));
    }
    *(undefined4 *)(unaff_EBP + -0x1b8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1b4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39948(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffeffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1e0);
    if (0xf < *(uint *)(unaff_EBP + -0x1cc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1cc));
    }
    *(undefined4 *)(unaff_EBP + -0x1d0) = 0;
    *(undefined4 *)(unaff_EBP + -0x1cc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39969(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffdffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x1f8);
    if (0xf < *(uint *)(unaff_EBP + -0x1e4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1e4));
    }
    *(undefined4 *)(unaff_EBP + -0x1e8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1e4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3998a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffbffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x210);
    if (0xf < *(uint *)(unaff_EBP + -0x1fc)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1fc));
    }
    *(undefined4 *)(unaff_EBP + -0x200) = 0;
    *(undefined4 *)(unaff_EBP + -0x1fc) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f399ab(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfff7ffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x228);
    if (0xf < *(uint *)(unaff_EBP + -0x214)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x214));
    }
    *(undefined4 *)(unaff_EBP + -0x218) = 0;
    *(undefined4 *)(unaff_EBP + -0x214) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f399cc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x100000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffefffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x240);
    if (0xf < *(uint *)(unaff_EBP + -0x22c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x22c));
    }
    *(undefined4 *)(unaff_EBP + -0x230) = 0;
    *(undefined4 *)(unaff_EBP + -0x22c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f399ed(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x200000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffdfffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x48);
    if (0xf < *(uint *)(unaff_EBP + -0x34)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39a0b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x400000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xffbfffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x60);
    if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
    }
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39a29(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x800000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xff7fffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x78);
    if (0xf < *(uint *)(unaff_EBP + -100)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39a47(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x1000000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfeffffff;
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



void Unwind_00f39a68(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x2000000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfdffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0xa8);
    if (0xf < *(uint *)(unaff_EBP + -0x94)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x94));
    }
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    *(undefined4 *)(unaff_EBP + -0x94) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39a89(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2e8);
  if (0xf < *(uint *)(unaff_EBP + -0x2d4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x2d4));
  }
  *(undefined4 *)(unaff_EBP + -0x2d8) = 0;
  *(undefined4 *)(unaff_EBP + -0x2d4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39a94(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 0x4000000) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfbffffff;
    puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
    if (0xf < *(uint *)(unaff_EBP + -0xac)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xac));
    }
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + -0xac) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39af0(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x18),0x48);
  return;
}



int Unwind_00f39aff(void)

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
  
  iVar4 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eae063;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar6 = func_0x00618eb0(uVar5);
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
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



void Unwind_00f39b07(void)

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



void Unwind_00f39b50(void)

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



uint Unwind_00f39b58(void)

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
  piVar5 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00f39b71(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x78);
  return;
}



void Unwind_00f39bb0(void)

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



void Unwind_00f39bbb(void)

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



void Unwind_00f39bc3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xf8);
  if (0xf < *(uint *)(unaff_EBP + -0xe4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe4));
  }
  *(undefined4 *)(unaff_EBP + -0xe8) = 0;
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39bce(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xdc);
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



void Unwind_00f39bd9(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0xdc);
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



void Unwind_00f39c20(void)

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
  if (iRam0145ef7c != 0) {
    func_0x0046ac90(iRam0145ef7c,iRam0145ef84 - iRam0145ef7c >> 2,uVar1);
    iRam0145ef7c = 0;
    uRam0145ef80 = 0;
    iRam0145ef84 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145ef74,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f39c50(void)

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



void Unwind_00f39c58(void)

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



void Unwind_00f39c60(void)

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



void Unwind_00f39c68(void)

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



void Unwind_00f39c70(void)

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



void Unwind_00f39c78(void)

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



void Unwind_00f39cb0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)(unaff_EBP + -0x28);
  if (*piVar1 != 0) {
    func_0x00485920(*piVar1);
    func_0x0046e710(*piVar1,*(int *)(unaff_EBP + -0x20) - *piVar1 >> 3);
    *piVar1 = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



void Unwind_00f39cb8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
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



void Unwind_00f39cd1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1d8);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39cdc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffd;
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



void Unwind_00f39cf5(void)

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



void Unwind_00f39d00(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffb;
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



void Unwind_00f39d1c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffff7;
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



void Unwind_00f39d38(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffef;
    puVar1 = (undefined4 *)(unaff_EBP + -0xb4);
    if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xa0));
    }
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
    *(undefined4 *)(unaff_EBP + -0xa0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39d54(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffdf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xcc);
    if (0xf < *(uint *)(unaff_EBP + -0xb8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xb8));
    }
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39d70(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffffbf;
    puVar1 = (undefined4 *)(unaff_EBP + -0xe4);
    if (0xf < *(uint *)(unaff_EBP + -0xd0)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xd0));
    }
    *(undefined4 *)(unaff_EBP + -0xd4) = 0;
    *(undefined4 *)(unaff_EBP + -0xd0) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39d8c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffff7f;
    puVar1 = (undefined4 *)(unaff_EBP + -0xfc);
    if (0xf < *(uint *)(unaff_EBP + -0xe8)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe8));
    }
    *(undefined4 *)(unaff_EBP + -0xec) = 0;
    *(undefined4 *)(unaff_EBP + -0xe8) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39dad(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1e0);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39db8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffeff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x114);
    if (0xf < *(uint *)(unaff_EBP + -0x100)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x100));
    }
    *(undefined4 *)(unaff_EBP + -0x104) = 0;
    *(undefined4 *)(unaff_EBP + -0x100) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39dd9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1bc);
  if (0xf < *(uint *)(unaff_EBP + -0x1a8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1a8));
  }
  *(undefined4 *)(unaff_EBP + -0x1ac) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39de4(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffdff;
    puVar1 = (undefined4 *)(unaff_EBP + -300);
    if (0xf < *(uint *)(unaff_EBP + -0x118)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x118));
    }
    *(undefined4 *)(unaff_EBP + -0x11c) = 0;
    *(undefined4 *)(unaff_EBP + -0x118) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39e05(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffbff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x144);
    if (0xf < *(uint *)(unaff_EBP + -0x130)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x130));
    }
    *(undefined4 *)(unaff_EBP + -0x134) = 0;
    *(undefined4 *)(unaff_EBP + -0x130) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39e26(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x15c);
  if (0xf < *(uint *)(unaff_EBP + -0x148)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x148));
  }
  *(undefined4 *)(unaff_EBP + -0x14c) = 0;
  *(undefined4 *)(unaff_EBP + -0x148) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39e31(void)

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



void Unwind_00f39e3c(void)

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



void Unwind_00f39e44(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1a4);
  if (0xf < *(uint *)(unaff_EBP + -400)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -400));
  }
  *(undefined4 *)(unaff_EBP + -0x194) = 0;
  *(undefined4 *)(unaff_EBP + -400) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39e4f(void)

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



void Unwind_00f39e5a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffff7ff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x174);
    if (0xf < *(uint *)(unaff_EBP + -0x160)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x160));
    }
    *(undefined4 *)(unaff_EBP + -0x164) = 0;
    *(undefined4 *)(unaff_EBP + -0x160) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39e7b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xffffefff;
    puVar1 = (undefined4 *)(unaff_EBP + -0x18c);
    if (0xf < *(uint *)(unaff_EBP + -0x178)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x178));
    }
    *(undefined4 *)(unaff_EBP + -0x17c) = 0;
    *(undefined4 *)(unaff_EBP + -0x178) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f39e9c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1e8);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39ea7(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x1a4);
  if (0xf < *(uint *)(unaff_EBP + -400)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -400));
  }
  *(undefined4 *)(unaff_EBP + -0x194) = 0;
  *(undefined4 *)(unaff_EBP + -400) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39ef0(void)

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



void Unwind_00f39ef8(void)

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



void Unwind_00f39f40(void)

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



void Unwind_00f39f48(void)

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



void Unwind_00f39f50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x160);
  if (0xf < *(uint *)(unaff_EBP + -0x14c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14c));
  }
  *(undefined4 *)(unaff_EBP + -0x150) = 0;
  *(undefined4 *)(unaff_EBP + -0x14c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f39f5b(void)

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



void Unwind_00f39f66(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x180) + 0xc);
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



void Unwind_00f39f74(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x180);
  puStack_c = &DAT_00ed5e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
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



void Unwind_00f39f7f(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed5dd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x44) + 8);
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



void Unwind_00f39f87(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed5ce3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00607c50(uVar2);
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x44) + 8);
    _guard_check_icall();
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



void Unwind_00f39f8f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x84);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x7c) - iVar1 >> 2) * -0x55555555);
    *(int *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  return;
}



void Unwind_00f39f9a(void)

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
  iVar1 = *(int *)(unaff_EBP + -0x84);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x7c) - iVar1 >> 2) * -0x55555555,uVar2);
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f39fa5(void)

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
  iVar1 = *(int *)(unaff_EBP + -0xe4);
  if (iVar1 != 0) {
    func_0x0046e710(iVar1,*(int *)(unaff_EBP + -0xdc) - iVar1 >> 3,uVar2);
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
    *(undefined4 *)(unaff_EBP + -0xe0) = 0;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0060aec0();
  uStack_8 = 0xffffffff;
  func_0x0060aec0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f39fb0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x84);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x7c) - iVar1 >> 2) * -0x55555555);
    *(int *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  return;
}



void Unwind_00f39fbb(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed5dd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x44) + 8);
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



void Unwind_00f39fc3(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0x184);
  puStack_c = &DAT_00ed5e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
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



void Unwind_00f39fce(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x184) + 0xc);
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



void Unwind_00f39fdc(void)

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



void Unwind_00f3a020(void)

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



void Unwind_00f3a028(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0xa0) + 0xc);
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



void Unwind_00f3a036(void)

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
  
  iVar3 = *(int *)(unaff_EBP + -0xa0);
  puStack_c = &DAT_00ed5e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
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



void Unwind_00f3a041(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed5dd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x48) + 8);
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



void Unwind_00f3a049(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed5ce3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00607c50(uVar2);
  uStack_8 = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x48) + 8);
    _guard_check_icall();
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



void Unwind_00f3a051(void)

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
  iVar1 = *(int *)(unaff_EBP + -0x88);
  if (iVar1 != 0) {
    func_0x004aaee0(iVar1,(*(int *)(unaff_EBP + -0x80) - iVar1 >> 2) * -0x55555555,uVar2);
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a05c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0xd8);
    if (0xf < *(uint *)(unaff_EBP + -0xc4)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xc4));
    }
    *(undefined4 *)(unaff_EBP + -200) = 0;
    *(undefined4 *)(unaff_EBP + -0xc4) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00f3a07e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffd;
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



void Unwind_00f3a09d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
  if (0xf < *(uint *)(unaff_EBP + -0xac)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xac));
  }
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a0a8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0xac)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xac),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00f3a0b3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0xfc);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00f3a0be(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xc0);
  if (0xf < *(uint *)(unaff_EBP + -0xac)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xac));
