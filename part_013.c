        pcVar3 = *(code **)(*piVar1 + 0x20);
        _guard_check_icall();
        cVar5 = (*pcVar3)();
        if (cVar5 == '\0') {
          param_2[1] = 0;
          *param_2 = (int)piVar1;
          param_2[1] = (int)piVar4;
LAB_005c95e5:
          uStack_20 = 0;
          uStack_8 = uStack_8 & 0xffffff00;
          goto LAB_005c9517;
        }
        uStack_8 = uStack_8 & 0xffffff00;
        if (piVar4 != (int *)0x0) {
          LOCK();
          iVar9 = piVar4[1] + -1;
          piVar4[1] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcVar3 = *(code **)*piVar4;
            _guard_check_icall();
            (*pcVar3)();
            LOCK();
            iVar9 = piVar4[2] + -1;
            piVar4[2] = iVar9;
            UNLOCK();
            if (iVar9 == 0) {
              pcVar3 = *(code **)(*piVar4 + 4);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
        }
      }
      piVar1 = *(int **)(param_1 + 0x28);
      *param_2 = 0;
      param_2[1] = 0;
      if (piVar1[1] != 0) {
        LOCK();
        piVar4 = (int *)(piVar1[1] + 4);
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      *param_2 = *piVar1;
      param_2[1] = piVar1[1];
      uStack_8 = 0;
    }
  }
  else {
    param_2[1] = 0;
    *param_2 = (int)uStack_20;
    param_2[1] = (int)uStack_20._4_4_;
    uStack_20 = 0;
    uStack_8 = 0;
  }
LAB_005c9517:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar10);
  return;
}



void __thiscall FUN_005c9620(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecbec5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = uVar6;
  piVar7 = (int *)FUN_005c7150(&uStack_20);
  iVar8 = *piVar7;
  uStack_8 = 0xffffffff;
  piVar7 = uStack_20._4_4_;
  if (uStack_20._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*uStack_20._4_4_;
      _guard_check_icall(uVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar7 + 2;
      iVar4 = *piVar1 + -1;
      *piVar1 = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*piVar7 + 4);
        _guard_check_icall(uVar6);
        (*pcVar2)();
      }
    }
  }
  if (iVar8 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x2c);
    for (puVar9 = *(undefined4 **)(param_1 + 0x28); puVar9 != puVar3; puVar9 = puVar9 + 2) {
      pcVar2 = *(code **)(*(int *)*puVar9 + 0x40);
      _guard_check_icall(uVar6);
      iVar8 = (*pcVar2)();
      if ((0xc < (uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2)) &&
         (*(int *)(*(int *)(iVar8 + 0x18) + 0x30) != 0)) break;
      if (param_2 == '\0') {
        pcVar2 = *(code **)(*(int *)*puVar9 + 0x20);
        _guard_check_icall();
        cVar5 = (*pcVar2)();
        if (cVar5 != '\0') {
          uStack_20 = 0;
          func_0x0046b930(&uStack_20);
          uStack_8 = 1;
          if (*(char *)((int)(int *)uStack_20 + 0xf2) == '\0') {
            if (((char)((int *)uStack_20)[0x16] == '\x02') && (((int *)uStack_20)[0x18] == 0xd)) {
              pcVar2 = *(code **)(*(int *)uStack_20 + 0x2c);
              _guard_check_icall();
              cVar5 = (*pcVar2)();
              if (cVar5 == '\0') goto LAB_005c9772;
            }
            pcVar2 = *(code **)(*(int *)uStack_20 + 0x30);
            _guard_check_icall();
            cVar5 = (*pcVar2)();
            if (cVar5 == '\0') {
              uStack_8 = 0xffffffff;
              FUN_00468340();
              break;
            }
          }
LAB_005c9772:
          uStack_8 = 0xffffffff;
          piVar7 = uStack_20._4_4_;
          if (uStack_20._4_4_ != (int *)0x0) {
            LOCK();
            iVar8 = uStack_20._4_4_[1] + -1;
            uStack_20._4_4_[1] = iVar8;
            UNLOCK();
            if (iVar8 == 0) {
              pcVar2 = *(code **)*uStack_20._4_4_;
              _guard_check_icall();
              (*pcVar2)();
              LOCK();
              piVar1 = piVar7 + 2;
              iVar8 = *piVar1 + -1;
              *piVar1 = iVar8;
              UNLOCK();
              if (iVar8 == 0) {
                pcVar2 = *(code **)(*piVar7 + 4);
                _guard_check_icall();
                (*pcVar2)();
              }
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __fastcall FUN_005c9800(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  puVar5 = puVar1;
  while( true ) {
    if (puVar6 == puVar1) {
      return CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
    pcVar2 = *(code **)(*(int *)*puVar6 + 0x40);
    _guard_check_icall();
    iVar3 = (*pcVar2)();
    iVar4 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18);
    puVar5 = (undefined4 *)(iVar4 >> 2);
    if ((&DAT_0000000f < puVar5) && (*(int *)(*(int *)(iVar3 + 0x18) + 0x3c) != 0)) break;
    puVar6 = puVar6 + 2;
  }
  return (uint)(uint3)(iVar4 >> 10) << 8;
}



void FUN_005c9860(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_14 = uVar5;
  FUN_005c7150(&uStack_1c);
  uStack_8 = 0;
  if ((int *)uStack_1c != (int *)0x0) {
    pcVar2 = *(code **)(*(int *)uStack_1c + 0x40);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(uVar5);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005c9940(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb276d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_14 = uVar5;
  FUN_005c6a00(&uStack_1c,0);
  uStack_8 = 0;
  if ((int *)uStack_1c != (int *)0x0) {
    pcVar2 = *(code **)(*(int *)uStack_1c + 0x40);
    _guard_check_icall(uVar5);
    (*pcVar2)();
  }
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(uVar5);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __fastcall FUN_005c9a20(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  puVar5 = puVar1;
  while( true ) {
    if (puVar6 == puVar1) {
      return CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
    pcVar2 = *(code **)(*(int *)*puVar6 + 0x40);
    _guard_check_icall();
    iVar3 = (*pcVar2)();
    iVar4 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18);
    puVar5 = (undefined4 *)(iVar4 >> 2);
    if ((&DAT_0000000e < puVar5) && (*(int *)(*(int *)(iVar3 + 0x18) + 0x38) != 0)) break;
    puVar6 = puVar6 + 2;
  }
  return (uint)(uint3)(iVar4 >> 10) << 8;
}



uint __fastcall FUN_005c9a80(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  puVar5 = puVar1;
  while( true ) {
    if (puVar6 == puVar1) {
      return (uint)puVar5 & 0xffffff00;
    }
    pcVar2 = *(code **)(*(int *)*puVar6 + 0x40);
    _guard_check_icall();
    iVar3 = (*pcVar2)();
    iVar4 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18);
    puVar5 = (undefined4 *)(iVar4 >> 2);
    if ((&DAT_0000000e < puVar5) && (*(int *)(*(int *)(iVar3 + 0x18) + 0x38) != 0)) break;
    puVar6 = puVar6 + 2;
  }
  return CONCAT31((int3)(iVar4 >> 10),1);
}



uint __fastcall FUN_005c9ae0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x28);
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  bVar3 = false;
  bVar4 = false;
  while( true ) {
    if (puVar7 == puVar1) {
      return (uint)puVar7 & 0xffffff00;
    }
    pcVar2 = *(code **)(*(int *)*puVar7 + 0x40);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    if ((*(int *)(iVar5 + 0x1c) - (int)*(int **)(iVar5 + 0x18) >> 2 != 0) &&
       (**(int **)(iVar5 + 0x18) != 0)) {
      bVar4 = true;
    }
    pcVar2 = *(code **)(*(int *)*puVar7 + 0x40);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    uVar6 = *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2;
    if ((2 < uVar6) && (uVar6 = 0, *(int *)(*(int *)(iVar5 + 0x18) + 8) != 0)) {
      bVar3 = true;
    }
    if ((bVar4) || (bVar3)) break;
    puVar7 = puVar7 + 2;
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}



undefined4 __fastcall FUN_005c9ba0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2c) >> 8),
                  *(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x28));
}



undefined4 __fastcall FUN_005c9bb0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  while( true ) {
    if (puVar4 == puVar1) {
      return 0;
    }
    pcVar2 = *(code **)(*(int *)*puVar4 + 0x20);
    _guard_check_icall();
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') break;
    puVar4 = puVar4 + 2;
  }
  return 1;
}



undefined4 __fastcall FUN_005c9c00(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [4];
  int *piStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecbf0e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar4 = false;
  uStack_1c = 0;
  puStack_18 = *(undefined4 **)(param_1 + 0x28);
  puStack_20 = *(undefined4 **)(param_1 + 0x2c);
  if (puStack_18 != puStack_20) {
    do {
      pcVar2 = *(code **)(*(int *)*puStack_18 + 0x20);
      _guard_check_icall(uVar7);
      cVar6 = (*pcVar2)();
      puVar5 = puStack_18;
      if (cVar6 == '\0') {
LAB_005c9c99:
        cStack_11 = '\0';
      }
      else {
        piVar8 = (int *)func_0x0046b930(auStack_28);
        uStack_8 = 0;
        bVar4 = true;
        uStack_1c = 1;
        if (*(char *)(*piVar8 + 0xf2) != '\0') goto LAB_005c9c99;
        pcVar2 = *(code **)(*(int *)*puVar5 + 0x30);
        _guard_check_icall(uVar7);
        cVar6 = (*pcVar2)();
        cStack_11 = '\x01';
        if (cVar6 != '\0') goto LAB_005c9c99;
      }
      piVar8 = piStack_24;
      uStack_8 = 0xffffffff;
      if (bVar4) {
        bVar4 = false;
        uStack_1c = 0;
        if (piStack_24 != (int *)0x0) {
          LOCK();
          iVar3 = piStack_24[1] + -1;
          piStack_24[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)*piStack_24;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            piVar1 = piVar8 + 2;
            iVar3 = *piVar1 + -1;
            *piVar1 = iVar3;
            UNLOCK();
            if (iVar3 == 0) {
              pcVar2 = *(code **)(*piVar8 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
      }
      if (cStack_11 != '\0') {
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      puStack_18 = puStack_18 + 2;
    } while (puStack_18 != puStack_20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



int __fastcall FUN_005c9e80(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  iVar3 = 0;
  for (puVar5 = *(undefined4 **)(param_1 + 0x28); puVar5 != puVar1; puVar5 = puVar5 + 2) {
    pcVar2 = *(code **)(*(int *)*puVar5 + 0x40);
    _guard_check_icall();
    iVar4 = (*pcVar2)();
    iVar6 = iVar3 + 1;
    if (*(int *)(iVar4 + 0x6c) < 1) {
      iVar6 = iVar3;
    }
    iVar3 = iVar6;
  }
  return iVar3;
}



bool FUN_005c9ee0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c9e80();
  return param_1 <= iVar1;
}



void __thiscall
FUN_005ca090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb38ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar5 = func_0x0047a5d0(uVar4);
    uStack_8 = 0;
    func_0x0046ffa0(uVar5);
    uStack_8 = 0xffffffff;
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar3 = piStack_1c[1] + -1;
      piStack_1c[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_1c;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_1c + 2;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piStack_1c + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  func_0x004672c0(param_2);
  iVar3 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar3 + 100) = param_3;
  *(undefined4 *)(iVar3 + 0x68) = param_4;
  *(undefined4 *)(iVar3 + 0x6c) = param_5;
  *(undefined4 *)(iVar3 + 0x70) = param_6;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint * __thiscall FUN_005ca170(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecbf83;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  if (*(int *)(param_1 + 0x70) == 0) {
    auStack_3c[4] = 0;
    auStack_3c[5] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uVar4);
    puVar5 = auStack_3c;
    uStack_14 = 2;
    uVar4 = 2;
  }
  else {
    puStack_20 = &stack0xfffffffc;
    puVar5 = (uint *)func_0x00467330(auStack_54);
    uStack_14 = 1;
    uVar4 = 1;
  }
  auStack_3c[6] = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar5 + 4);
  puVar5[4] = 0;
  puVar5[5] = 0xf;
  *(undefined1 *)puVar5 = 0;
  auStack_3c[6] = uVar4 | 4;
  uStack_14 = 1;
  if ((uVar4 & 2) != 0) {
    auStack_3c[6] = uVar4 & 0xfffffffd | 4;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  }
  uStack_14 = 0;
  if (((auStack_3c[6] & 1) != 0) && (auStack_3c[6] = auStack_3c[6] & 0xfffffffe, 0xf < uStack_40)) {
    func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return param_2;
}



void __thiscall
FUN_005ca2e0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecbfb5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar2 = DAT_0145db28;
  if ((int)param_2 < 0xea61) {
    uStack_28 = DAT_0145db28;
    uStack_28._0_4_ = (uint)DAT_0145db28;
    *(uint *)(param_1 + 0x60) = param_2 + (uint)uStack_28;
    uStack_28._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    *(uint *)(param_1 + 100) =
         ((int)param_2 >> 0x1f) + uStack_28._4_4_ + (uint)CARRY4(param_2,(uint)uStack_28);
    if (*(int *)(param_1 + 0x68) == 0) {
      uStack_28 = uVar2;
      uVar4 = func_0x0047a5d0(uVar3);
      uStack_14 = 1;
      func_0x0046ffa0(uVar4);
      uStack_14 = 0xffffffff;
      FUN_00468340();
    }
    iVar1 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(iVar1 + 100) = param_3;
    *(undefined4 *)(iVar1 + 0x68) = param_4;
    *(undefined4 *)(iVar1 + 0x6c) = param_5;
    *(undefined4 *)(iVar1 + 0x70) = param_6;
  }
  else {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x0046bc40("Max tile timer value is 300000 (300s)!",0x26);
    uStack_14 = 0;
    FUN_005ee340(2,&uStack_40);
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



int __fastcall FUN_005ca420(int param_1)

{
  int iVar1;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uStack_c = (int)DAT_0145db28;
    uStack_c = *(int *)(param_1 + 0x60) - uStack_c;
    iVar1 = 0;
    if (0 < uStack_c) {
      iVar1 = uStack_c;
    }
    return iVar1;
  }
  return 0;
}



void __thiscall
FUN_005ca460(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  *(undefined4 *)(param_1 + 0x80) = param_4;
  *(undefined4 *)(param_1 + 0x84) = param_5;
  return;
}



void __thiscall FUN_005ca470(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [12];
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb23cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  uStack_18 = uVar4;
  FUN_00472ad0(&uStack_20);
  uStack_8 = 0;
  if ((int *)uStack_20 != (int *)0x0) {
    pcVar2 = *(code **)(*(int *)uStack_20 + 0x80);
    _guard_check_icall(auStack_2c,0,uVar4);
    (*pcVar2)();
    if (0 < param_2) {
      iVar5 = func_0x005ca5e0();
      iVar6 = func_0x005ca5e0();
      if (iVar6 < iVar5) {
        iVar6 = iVar5;
      }
      if (param_2 < iVar6) goto LAB_005ca51e;
    }
    FUN_00575b60(auStack_2c,param_1 + 0x34);
  }
LAB_005ca51e:
  uStack_8 = 0xffffffff;
  piVar3 = uStack_20._4_4_;
  if (uStack_20._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_20._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1 + -1;
      *piVar1 = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005ca9a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb41ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)*param_1;
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    if (*(int *)(puVar3[2] + 0x10) == *(int *)(*param_2 + 0x10)) goto LAB_005caa6f;
  }
  if (param_1[1] == 0xfffffff) {
    func_0x00e701fa("list too long",uVar5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_8 = 0;
  piVar6 = (int *)func_0x008ab47d(0x10);
  piVar6[2] = 0;
  piVar6[3] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar6[2] = *param_2;
  piVar6[3] = param_2[1];
  param_1[1] = param_1[1] + 1;
  puVar3 = (undefined4 *)puVar2[1];
  *piVar6 = (int)puVar2;
  piVar6[1] = (int)puVar3;
  puVar2[1] = piVar6;
  *puVar3 = piVar6;
LAB_005caa6f:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005caa90(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    while (*(int *)(piVar2[2] + 0x10) != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar1) {
        return;
      }
    }
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    param_1[1] = param_1[1] + -1;
    func_0x004a6050();
  }
  return;
}



int * __thiscall FUN_005caae0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)*param_1;
  while( true ) {
    if (puVar1 == (undefined4 *)*param_1) {
      return param_1 + 2;
    }
    if (*(int *)(puVar1[2] + 0x10) == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 2;
}



int * __thiscall FUN_005cab20(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *****pppppuVar3;
  undefined4 *****pppppuVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 ****appppuStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 ****appppuStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 ****ppppuStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecc0b6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_8 = 0;
  piVar1 = (int *)*param_1;
  ppppuStack_20 = appppuStack_3c;
  piVar5 = (int *)*piVar1;
  piStack_1c = param_1;
  func_0x00469da0(&param_2,uVar2);
  uStack_8 = uStack_8 & 0xffffff00;
  for (; piVar5 != piVar1; piVar5 = (int *)*piVar5) {
    uStack_8._1_3_ = (undefined3)(uStack_8 >> 8);
    uStack_8._0_1_ = 4;
    func_0x00469da0(piVar5[2] + 0x14);
    uStack_18 = 1;
    pppppuVar4 = appppuStack_3c;
    if (0xf < uStack_28) {
      pppppuVar4 = (undefined4 *****)appppuStack_3c[0];
    }
    pppppuVar3 = appppuStack_54;
    if (0xf < uStack_40) {
      pppppuVar3 = (undefined4 *****)appppuStack_54[0];
    }
    cStack_11 = func_0x0046cf20(pppppuVar3,uStack_44,pppppuVar4,uStack_2c);
    uStack_18 = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    if (0xf < uStack_40) {
      func_0x0046b1f0(appppuStack_54,appppuStack_54[0],uStack_40);
    }
    uStack_44 = 0;
    uStack_40 = 0xf;
    appppuStack_54[0] = (undefined4 ****)((uint)appppuStack_54[0] & 0xffffff00);
    if (cStack_11 != '\0') break;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < uStack_28) {
    func_0x0046b1f0(appppuStack_3c,appppuStack_3c[0],uStack_28);
  }
  uStack_2c = 0;
  uStack_28 = 0xf;
  appppuStack_3c[0] = (undefined4 ****)((uint)appppuStack_3c[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  if (piVar5 == (int *)*piStack_1c) {
    piVar5 = piStack_1c;
  }
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar5 + 2;
}



void FUN_005cac90(void)

{
  func_0x005cada0();
  return;
}



void __thiscall FUN_005cb120(int param_1,int *param_2)

{
  *param_2 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1;
  param_2[1] = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1;
  return;
}



void __thiscall FUN_005cb140(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  undefined8 uVar6;
  uint uVar7;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (param_2 != 1) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x40);
  iStack_24 = param_1;
  if (0.003 < *(float *)(param_1 + 0x128)) {
    func_0x008673d0(piVar1);
  }
  func_0x00869510(piVar1);
  func_0x008675b0(piVar1);
  func_0x0086b280(piVar1);
  func_0x00867470(piVar1);
  if (*(int *)(param_1 + 0x3a0) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x3a8) == '\0') goto LAB_005cb239;
  uVar7 = (uint)DAT_0145db28;
  iStack_2c = (int)((ulonglong)DAT_0145db28 >> 0x20);
  uVar6 = func_0x00e87ec0(uVar7,iStack_2c,4000,0);
  uVar6 = func_0x00e87d70(uVar6,4000,0);
  uVar5 = uVar7 - (uint)uVar6;
  uVar7 = (uint)(uVar7 < (uint)uVar6);
  uVar3 = iStack_2c - (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = uVar3 - uVar7;
  if (iVar4 < 1) {
    if ((iVar4 < 0) || (uVar5 < 1000)) {
      iVar4 = 2;
    }
    else {
      if (0 < iVar4) goto LAB_005cb226;
      if ((iVar4 < 0) || (uVar5 < 2000)) {
        iVar4 = 1;
      }
      else {
        if ((uVar3 != uVar7 && -1 < iVar4) || ((-1 < iVar4 && (2999 < uVar5)))) goto LAB_005cb226;
        iVar4 = 0;
      }
    }
  }
  else {
LAB_005cb226:
    iVar4 = 3;
  }
  if (iVar4 != *(int *)(param_1 + 0x3ac)) {
    *(int *)(param_1 + 0x3ac) = iVar4;
  }
LAB_005cb239:
  iStack_28 = *(int *)(param_1 + 0x200) + *piVar1;
  pcVar2 = *(code **)(**(int **)(param_1 + 0x3a0) + 0x68);
  iStack_24 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
  iStack_20 = (int)((float)((*(int *)(param_1 + 0x48) - *piVar1) + 1) * *(float *)(param_1 + 0x3b0))
              + iStack_28 + -1;
  iStack_1c = (int)((float)((*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1) *
                   *(float *)(param_1 + 0x3b0)) + -1 + iStack_24;
  _guard_check_icall(&iStack_28,*(undefined4 *)(unaff_ESI + 0x3ac),unaff_ESI + 0x2a0,
                     *(undefined1 *)(unaff_ESI + 0x3a9),1,*(undefined1 *)(unaff_ESI + 0x3aa));
  (*pcVar2)();
  return;
}



void __thiscall FUN_005cb2f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb38ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x3a0) == 0) {
    uVar4 = func_0x00485010(uVar3);
    uStack_8 = 0;
    func_0x0046ffa0(uVar4);
    uStack_8 = 0xffffffff;
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar2 = piStack_1c[1] + -1;
      piStack_1c[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)*piStack_1c;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar2 = piStack_1c[2] + -1;
        piStack_1c[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*piStack_1c + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3ac) = 2;
  FUN_004774e0(param_2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005cb3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 ****ppppuVar7;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  uint extraout_ECX_13;
  uint extraout_ECX_14;
  uint uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined1 auStack_56c [52];
  uint auStack_538 [4];
  undefined4 uStack_528;
  uint uStack_524;
  uint auStack_4e8 [4];
  undefined4 uStack_4d8;
  uint uStack_4d4;
  uint auStack_4cc [4];
  undefined4 uStack_4bc;
  uint uStack_4b8;
  undefined4 ***apppuStack_4b4 [4];
  undefined4 uStack_4a4;
  uint uStack_4a0;
  undefined4 ***apppuStack_49c [4];
  undefined4 uStack_48c;
  uint uStack_488;
  undefined4 ***apppuStack_484 [4];
  undefined4 uStack_474;
  uint uStack_470;
  undefined4 ***apppuStack_46c [4];
  undefined4 uStack_45c;
  uint uStack_458;
  undefined4 ***apppuStack_454 [4];
  undefined4 uStack_444;
  uint uStack_440;
  undefined4 ***apppuStack_43c [4];
  undefined4 uStack_42c;
  uint uStack_428;
  undefined4 ***apppuStack_424 [4];
  undefined4 uStack_414;
  uint uStack_410;
  undefined4 ***apppuStack_40c [4];
  undefined4 uStack_3fc;
  uint uStack_3f8;
  undefined4 ***apppuStack_3f4 [4];
  undefined4 uStack_3e4;
  uint uStack_3e0;
  undefined4 ***apppuStack_3dc [4];
  undefined4 uStack_3cc;
  uint uStack_3c8;
  undefined4 ***apppuStack_3c4 [4];
  undefined4 uStack_3b4;
  uint uStack_3b0;
  undefined4 ***apppuStack_3ac [4];
  undefined4 uStack_39c;
  uint uStack_398;
  undefined4 ***apppuStack_394 [4];
  undefined4 uStack_384;
  uint uStack_380;
  undefined4 ***apppuStack_37c [4];
  undefined4 uStack_36c;
  uint uStack_368;
  undefined4 ***apppuStack_364 [4];
  undefined4 uStack_354;
  uint uStack_350;
  int *piStack_34c;
  uint uStack_348;
  char cStack_341;
  undefined1 auStack_340 [40];
  undefined4 uStack_318;
  uint auStack_30c [4];
  undefined4 uStack_2fc;
  uint uStack_2f8;
  undefined1 auStack_2f0 [36];
  undefined4 uStack_2cc;
  uint auStack_2bc [4];
  undefined4 uStack_2ac;
  uint uStack_2a8;
  undefined1 auStack_2a0 [32];
  undefined4 uStack_280;
  uint auStack_26c [4];
  undefined4 uStack_25c;
  uint uStack_258;
  undefined1 auStack_250 [28];
  undefined4 uStack_234;
  uint auStack_21c [4];
  undefined4 uStack_20c;
  uint uStack_208;
  undefined1 auStack_200 [24];
  undefined4 uStack_1e8;
  uint auStack_1cc [4];
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined1 auStack_1b0 [20];
  undefined4 uStack_19c;
  uint auStack_17c [4];
  undefined4 uStack_16c;
  uint uStack_168;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  uint auStack_12c [4];
  undefined4 uStack_11c;
  uint uStack_118;
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  uint auStack_dc [4];
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined1 auStack_70 [52];
  uint auStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecc4a9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar8 = 0;
  uStack_348 = 0;
  uStack_14 = uVar4;
  FUN_0085b8a0(param_2,param_3);
  func_0x0080ff70(&piStack_20,uVar4);
  iStack_8._1_3_ = 0;
  piStack_34c = piStack_1c;
  piVar9 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      iStack_8._0_1_ = 1;
      func_0x00469da0(*piVar9 + 0x2c);
      uStack_348 = uVar8 | 1;
      ppppuVar7 = apppuStack_364;
      if (0xf < uStack_350) {
        ppppuVar7 = (undefined4 ****)apppuStack_364[0];
      }
      cStack_341 = func_0x0046cf20(ppppuVar7,uStack_354,"fixed-creature-size",0x13);
      iStack_8._0_1_ = 0;
      uVar4 = uStack_350;
      uStack_348 = uVar8;
      if (0xf < uStack_350) {
        func_0x0046b1f0(apppuStack_364,apppuStack_364[0],uStack_350);
        uVar4 = extraout_ECX;
      }
      uStack_354 = 0;
      uStack_350 = 0xf;
      apppuStack_364[0] = (undefined4 ***)((uint)apppuStack_364[0] & 0xffffff00);
      if (cStack_341 == '\0') {
        iStack_8._0_1_ = 2;
        func_0x00469da0(*piVar9 + 0x2c);
        uStack_348 = uVar8 | 2;
        ppppuVar7 = apppuStack_37c;
        if (0xf < uStack_368) {
          ppppuVar7 = (undefined4 ****)apppuStack_37c[0];
        }
        cStack_341 = func_0x0046cf20(ppppuVar7,uStack_36c,"outfit-id",9);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        uStack_348 = uVar8;
        if (0xf < uStack_368) {
          func_0x0046b1f0(apppuStack_37c,apppuStack_37c[0],uStack_368);
        }
        uStack_36c = 0;
        uStack_368 = 0xf;
        apppuStack_37c[0] = (undefined4 ***)((uint)apppuStack_37c[0] & 0xffffff00);
        if (cStack_341 == '\0') {
          iStack_8._0_1_ = 9;
          func_0x00469da0(*piVar9 + 0x2c);
          uStack_348 = uVar8 | 0x40;
          ppppuVar7 = apppuStack_394;
          if (0xf < uStack_380) {
            ppppuVar7 = (undefined4 ****)apppuStack_394[0];
          }
          cStack_341 = func_0x0046cf20(ppppuVar7,uStack_384,"outfit-head",0xb);
          iStack_8._0_1_ = 0;
          uStack_348 = uVar8;
          if (0xf < uStack_380) {
            func_0x0046b1f0(apppuStack_394,apppuStack_394[0],uStack_380);
          }
          uStack_384 = 0;
          uStack_380 = 0xf;
          apppuStack_394[0] = (undefined4 ***)((uint)apppuStack_394[0] & 0xffffff00);
          if (cStack_341 == '\0') {
            iStack_8._0_1_ = 0xc;
            func_0x00469da0(*piVar9 + 0x2c);
            uStack_348 = uVar8 | 0x80;
            ppppuVar7 = apppuStack_3ac;
            if (0xf < uStack_398) {
              ppppuVar7 = (undefined4 ****)apppuStack_3ac[0];
            }
            cStack_341 = func_0x0046cf20(ppppuVar7,uStack_39c,"outfit-body",0xb);
            iStack_8._0_1_ = 0;
            uStack_348 = uVar8;
            if (0xf < uStack_398) {
              func_0x0046b1f0(apppuStack_3ac,apppuStack_3ac[0],uStack_398);
            }
            uStack_39c = 0;
            uStack_398 = 0xf;
            apppuStack_3ac[0] = (undefined4 ***)((uint)apppuStack_3ac[0] & 0xffffff00);
            if (cStack_341 == '\0') {
              iStack_8._0_1_ = 0xf;
              func_0x00469da0(*piVar9 + 0x2c);
              uStack_348 = uVar8 | 0x100;
              ppppuVar7 = apppuStack_3c4;
              if (0xf < uStack_3b0) {
                ppppuVar7 = (undefined4 ****)apppuStack_3c4[0];
              }
              cStack_341 = func_0x0046cf20(ppppuVar7,uStack_3b4,"outfit-legs",0xb);
              iStack_8._0_1_ = 0;
              uStack_348 = uVar8;
              if (0xf < uStack_3b0) {
                func_0x0046b1f0(apppuStack_3c4,apppuStack_3c4[0],uStack_3b0);
              }
              uStack_3b4 = 0;
              uStack_3b0 = 0xf;
              apppuStack_3c4[0] = (undefined4 ***)((uint)apppuStack_3c4[0] & 0xffffff00);
              if (cStack_341 == '\0') {
                iStack_8._0_1_ = 0x12;
                func_0x00469da0(*piVar9 + 0x2c);
                uStack_348 = uVar8 | 0x200;
                ppppuVar7 = apppuStack_3dc;
                if (0xf < uStack_3c8) {
                  ppppuVar7 = (undefined4 ****)apppuStack_3dc[0];
                }
                cStack_341 = func_0x0046cf20(ppppuVar7,uStack_3cc,"outfit-feet",0xb);
                iStack_8._0_1_ = 0;
                uStack_348 = uVar8;
                if (0xf < uStack_3c8) {
                  func_0x0046b1f0(apppuStack_3dc,apppuStack_3dc[0],uStack_3c8);
                }
                uStack_3cc = 0;
                uStack_3c8 = 0xf;
                apppuStack_3dc[0] = (undefined4 ***)((uint)apppuStack_3dc[0] & 0xffffff00);
                if (cStack_341 == '\0') {
                  iStack_8._0_1_ = 0x15;
                  func_0x00469da0(*piVar9 + 0x2c);
                  uStack_348 = uVar8 | 0x400;
                  ppppuVar7 = apppuStack_3f4;
                  if (0xf < uStack_3e0) {
                    ppppuVar7 = (undefined4 ****)apppuStack_3f4[0];
                  }
                  cStack_341 = func_0x0046cf20(ppppuVar7,uStack_3e4,"outfit-addons",0xd);
                  iStack_8._0_1_ = 0;
                  uStack_348 = uVar8;
                  if (0xf < uStack_3e0) {
                    func_0x0046b1f0(apppuStack_3f4,apppuStack_3f4[0],uStack_3e0);
                  }
                  uStack_3e4 = 0;
                  uStack_3e0 = 0xf;
                  apppuStack_3f4[0] = (undefined4 ***)((uint)apppuStack_3f4[0] & 0xffffff00);
                  if (cStack_341 == '\0') {
                    iStack_8._0_1_ = 0x18;
                    func_0x00469da0(*piVar9 + 0x2c);
                    uStack_348 = uVar8 | 0x800;
                    ppppuVar7 = apppuStack_40c;
                    if (0xf < uStack_3f8) {
                      ppppuVar7 = (undefined4 ****)apppuStack_40c[0];
                    }
                    cStack_341 = func_0x0046cf20(ppppuVar7,uStack_3fc,"outfit-mount",0xc);
                    iStack_8._0_1_ = 0;
                    uStack_348 = uVar8;
                    if (0xf < uStack_3f8) {
                      func_0x0046b1f0(apppuStack_40c,apppuStack_40c[0],uStack_3f8);
                    }
                    uStack_3fc = 0;
                    uStack_3f8 = 0xf;
                    apppuStack_40c[0] = (undefined4 ***)((uint)apppuStack_40c[0] & 0xffffff00);
                    if (cStack_341 == '\0') {
                      iStack_8._0_1_ = 0x1b;
                      func_0x00469da0(*piVar9 + 0x2c);
                      uStack_348 = uVar8 | 0x1000;
                      ppppuVar7 = apppuStack_424;
                      if (0xf < uStack_410) {
                        ppppuVar7 = (undefined4 ****)apppuStack_424[0];
                      }
                      cStack_341 = func_0x0046cf20(ppppuVar7,uStack_414,"outfit-wings",0xc);
                      iStack_8._0_1_ = 0;
                      uStack_348 = uVar8;
                      if (0xf < uStack_410) {
                        func_0x0046b1f0(apppuStack_424,apppuStack_424[0],uStack_410);
                      }
                      uStack_414 = 0;
                      uStack_410 = 0xf;
                      apppuStack_424[0] = (undefined4 ***)((uint)apppuStack_424[0] & 0xffffff00);
                      if (cStack_341 == '\0') {
                        iStack_8._0_1_ = 0x1e;
                        func_0x00469da0(*piVar9 + 0x2c);
                        uStack_348 = uVar8 | 0x2000;
                        ppppuVar7 = apppuStack_43c;
                        if (0xf < uStack_428) {
                          ppppuVar7 = (undefined4 ****)apppuStack_43c[0];
                        }
                        cStack_341 = func_0x0046cf20(ppppuVar7,uStack_42c,"outfit-aura",0xb);
                        iStack_8._0_1_ = 0;
                        uStack_348 = uVar8;
                        if (0xf < uStack_428) {
                          func_0x0046b1f0(apppuStack_43c,apppuStack_43c[0],uStack_428);
                        }
                        uStack_42c = 0;
                        uStack_428 = 0xf;
                        apppuStack_43c[0] = (undefined4 ***)((uint)apppuStack_43c[0] & 0xffffff00);
                        if (cStack_341 == '\0') {
                          iStack_8._0_1_ = 0x21;
                          func_0x00469da0(*piVar9 + 0x2c);
                          uStack_348 = uVar8 | 0x4000;
                          ppppuVar7 = apppuStack_454;
                          if (0xf < uStack_440) {
                            ppppuVar7 = (undefined4 ****)apppuStack_454[0];
                          }
                          cStack_341 = func_0x0046cf20(ppppuVar7,uStack_444,"outfit-shader",0xd);
                          iStack_8._0_1_ = 0;
                          uStack_348 = uVar8;
                          if (0xf < uStack_440) {
                            func_0x0046b1f0(apppuStack_454,apppuStack_454[0],uStack_440);
                          }
                          uStack_444 = 0;
                          uStack_440 = 0xf;
                          apppuStack_454[0] = (undefined4 ***)((uint)apppuStack_454[0] & 0xffffff00)
                          ;
                          if (cStack_341 == '\0') {
                            iStack_8._0_1_ = 0x25;
                            func_0x00469da0(*piVar9 + 0x2c);
                            uStack_348 = uVar8 | 0x8000;
                            ppppuVar7 = apppuStack_46c;
                            if (0xf < uStack_458) {
                              ppppuVar7 = (undefined4 ****)apppuStack_46c[0];
                            }
                            cStack_341 = func_0x0046cf20(ppppuVar7,uStack_45c,"outfit-center",0xd);
                            iStack_8._0_1_ = 0;
                            uVar4 = uStack_458;
                            uStack_348 = uVar8;
                            if (0xf < uStack_458) {
                              func_0x0046b1f0(apppuStack_46c,apppuStack_46c[0],uStack_458);
                              uVar4 = extraout_ECX_11;
                            }
                            uStack_45c = 0;
                            uStack_458 = 0xf;
                            apppuStack_46c[0] =
                                 (undefined4 ***)((uint)apppuStack_46c[0] & 0xffffff00);
                            if (cStack_341 == '\0') {
                              iStack_8._0_1_ = 0x26;
                              func_0x00469da0(*piVar9 + 0x2c);
                              uStack_348 = uVar8 | 0x10000;
                              ppppuVar7 = apppuStack_484;
                              if (0xf < uStack_470) {
                                ppppuVar7 = (undefined4 ****)apppuStack_484[0];
                              }
                              cStack_341 = func_0x0046cf20(ppppuVar7,uStack_474,"scale",5);
                              iStack_8._0_1_ = 0;
                              uVar4 = uStack_470;
                              uStack_348 = uVar8;
                              if (0xf < uStack_470) {
                                func_0x0046b1f0(apppuStack_484,apppuStack_484[0],uStack_470);
                                uVar4 = extraout_ECX_12;
                              }
                              uStack_474 = 0;
                              uStack_470 = 0xf;
                              apppuStack_484[0] =
                                   (undefined4 ***)((uint)apppuStack_484[0] & 0xffffff00);
                              if (cStack_341 == '\0') {
                                iStack_8._0_1_ = 0x27;
                                func_0x00469da0(*piVar9 + 0x2c);
                                uStack_348 = uVar8 | 0x20000;
                                ppppuVar7 = apppuStack_49c;
                                if (0xf < uStack_488) {
                                  ppppuVar7 = (undefined4 ****)apppuStack_49c[0];
                                }
                                cStack_341 = func_0x0046cf20(ppppuVar7,uStack_48c,"animate",7);
                                iStack_8._0_1_ = 0;
                                uVar4 = uStack_488;
                                uStack_348 = uVar8;
                                if (0xf < uStack_488) {
                                  func_0x0046b1f0(apppuStack_49c,apppuStack_49c[0],uStack_488);
                                  uVar4 = extraout_ECX_13;
                                }
                                uStack_48c = 0;
                                uStack_488 = 0xf;
                                apppuStack_49c[0] =
                                     (undefined4 ***)((uint)apppuStack_49c[0] & 0xffffff00);
                                if (cStack_341 == '\0') {
                                  iStack_8._0_1_ = 0x28;
                                  func_0x00469da0(*piVar9 + 0x2c);
                                  uStack_348 = uVar8 | 0x40000;
                                  ppppuVar7 = apppuStack_4b4;
                                  if (0xf < uStack_4a0) {
                                    ppppuVar7 = (undefined4 ****)apppuStack_4b4[0];
                                  }
                                  cStack_341 = func_0x0046cf20(ppppuVar7,uStack_4a4,"old-scaling",
                                                               0xb);
                                  iStack_8._0_1_ = 0;
                                  uVar4 = uStack_4a0;
                                  uStack_348 = uVar8;
                                  if (0xf < uStack_4a0) {
                                    func_0x0046b1f0(apppuStack_4b4,apppuStack_4b4[0],uStack_4a0);
                                    uVar4 = extraout_ECX_14;
                                  }
                                  uStack_4a4 = 0;
                                  uStack_4a0 = 0xf;
                                  apppuStack_4b4[0] =
                                       (undefined4 ***)((uint)apppuStack_4b4[0] & 0xffffff00);
                                  if (cStack_341 != '\0') {
                                    uVar3 = func_0x005bee00(uVar4);
                                    *(undefined1 *)(param_1 + 0x3aa) = uVar3;
                                  }
                                }
                                else {
                                  uVar3 = func_0x005bee00(uVar4);
                                  *(undefined1 *)(param_1 + 0x3a9) = uVar3;
                                }
                              }
                              else {
                                func_0x005bebe0(uVar4);
                                *(undefined4 *)(param_1 + 0x3b0) = in_XMM0_Da;
                              }
                            }
                            else {
                              uVar3 = func_0x005bee00(uVar4);
                              FUN_005cc4b0(uVar3);
                            }
                          }
                          else {
                            FUN_004b5d70(auStack_70);
                            iStack_8._0_1_ = 0x22;
                            puVar6 = (uint *)func_0x005ba8a0(auStack_4cc,0);
                            iStack_8._0_1_ = 0x23;
                            if (auStack_3c != puVar6) {
                              puVar1 = puVar6 + 4;
                              if (0xf < puVar6[5]) {
                                puVar6 = (uint *)*puVar6;
                              }
                              func_0x0046a660(puVar6,*puVar1);
                            }
                            iStack_8._0_1_ = 0x22;
                            if (0xf < uStack_4b8) {
                              func_0x0046b1f0(auStack_4cc,auStack_4cc[0],uStack_4b8);
                            }
                            uStack_4bc = 0;
                            uStack_4b8 = 0xf;
                            auStack_4cc[0] = auStack_4cc[0] & 0xffffff00;
                            FUN_005cb2f0(auStack_70);
                            iStack_8._0_1_ = 0;
                            if (0xf < uStack_28) {
                              func_0x0046b1f0(auStack_3c,auStack_3c[0],uStack_28);
                            }
                            uStack_2c = 0;
                            uStack_28 = 0xf;
                            auStack_3c[0] = auStack_3c[0] & 0xffffff00;
                          }
                        }
                        else {
                          FUN_004b5d70(auStack_340);
                          iStack_8._0_1_ = 0x1f;
                          uStack_318 = func_0x005cc550(extraout_ECX_10);
                          FUN_005cb2f0(auStack_340);
                          iStack_8._0_1_ = 0;
                          if (0xf < uStack_2f8) {
                            func_0x0046b1f0(auStack_30c,auStack_30c[0],uStack_2f8);
                          }
                          uStack_2fc = 0;
                          uStack_2f8 = 0xf;
                          auStack_30c[0] = auStack_30c[0] & 0xffffff00;
                        }
                      }
                      else {
                        FUN_004b5d70(auStack_2f0);
                        iStack_8._0_1_ = 0x1c;
                        uStack_2cc = func_0x005cc550(extraout_ECX_09);
                        FUN_005cb2f0(auStack_2f0);
                        iStack_8._0_1_ = 0;
                        if (0xf < uStack_2a8) {
                          func_0x0046b1f0(auStack_2bc,auStack_2bc[0],uStack_2a8);
                        }
                        uStack_2ac = 0;
                        uStack_2a8 = 0xf;
                        auStack_2bc[0] = auStack_2bc[0] & 0xffffff00;
                      }
                    }
                    else {
                      FUN_004b5d70(auStack_2a0);
                      iStack_8._0_1_ = 0x19;
                      uStack_280 = func_0x005cc550(extraout_ECX_08);
                      FUN_005cb2f0(auStack_2a0);
                      iStack_8._0_1_ = 0;
                      if (0xf < uStack_258) {
                        func_0x0046b1f0(auStack_26c,auStack_26c[0],uStack_258);
                      }
                      uStack_25c = 0;
                      uStack_258 = 0xf;
                      auStack_26c[0] = auStack_26c[0] & 0xffffff00;
                    }
                  }
                  else {
                    FUN_004b5d70(auStack_250);
                    iStack_8._0_1_ = 0x16;
                    uStack_234 = func_0x005cc550(extraout_ECX_07);
                    FUN_005cb2f0(auStack_250);
                    iStack_8._0_1_ = 0;
                    if (0xf < uStack_208) {
                      func_0x0046b1f0(auStack_21c,auStack_21c[0],uStack_208);
                    }
                    uStack_20c = 0;
                    uStack_208 = 0xf;
                    auStack_21c[0] = auStack_21c[0] & 0xffffff00;
                  }
                }
                else {
                  FUN_004b5d70(auStack_200);
                  iStack_8._0_1_ = 0x13;
                  uStack_1e8 = func_0x005cc550(extraout_ECX_06);
                  FUN_005cb2f0(auStack_200);
                  iStack_8._0_1_ = 0;
                  if (0xf < uStack_1b8) {
                    func_0x0046b1f0(auStack_1cc,auStack_1cc[0],uStack_1b8);
                  }
                  uStack_1bc = 0;
                  uStack_1b8 = 0xf;
                  auStack_1cc[0] = auStack_1cc[0] & 0xffffff00;
                }
              }
              else {
                FUN_004b5d70(auStack_1b0);
                iStack_8._0_1_ = 0x10;
                uStack_19c = func_0x005cc550(extraout_ECX_05);
                FUN_005cb2f0(auStack_1b0);
                iStack_8._0_1_ = 0;
                if (0xf < uStack_168) {
                  func_0x0046b1f0(auStack_17c,auStack_17c[0],uStack_168);
                }
                uStack_16c = 0;
                uStack_168 = 0xf;
                auStack_17c[0] = auStack_17c[0] & 0xffffff00;
              }
            }
            else {
              FUN_004b5d70(auStack_160);
              iStack_8._0_1_ = 0xd;
              uStack_150 = func_0x005cc550(extraout_ECX_04);
              FUN_005cb2f0(auStack_160);
              iStack_8._0_1_ = 0;
              if (0xf < uStack_118) {
                func_0x0046b1f0(auStack_12c,auStack_12c[0],uStack_118);
              }
              uStack_11c = 0;
              uStack_118 = 0xf;
              auStack_12c[0] = auStack_12c[0] & 0xffffff00;
            }
          }
          else {
            FUN_004b5d70(auStack_110);
            iStack_8._0_1_ = 10;
            uStack_104 = func_0x005cc550(extraout_ECX_03);
            FUN_005cb2f0(auStack_110);
            iStack_8._0_1_ = 0;
            if (0xf < uStack_c8) {
              func_0x0046b1f0(auStack_dc,auStack_dc[0],uStack_c8);
            }
            uStack_cc = 0;
            uStack_c8 = 0xf;
            auStack_dc[0] = auStack_dc[0] & 0xffffff00;
          }
        }
        else {
          iStack_8._0_1_ = 3;
          if (*(int *)(param_1 + 0x3a0) == 0) {
            uVar5 = func_0x0058ac20();
            iStack_8 = 5;
            uVar8 = uVar8 | 8;
          }
          else {
            uVar5 = FUN_004b4360(auStack_56c);
            iStack_8 = CONCAT31(iStack_8._1_3_,4);
            uVar8 = uVar8 | 4;
          }
          uStack_348 = uVar8;
          func_0x004b5f40(uVar5);
          uVar4 = uVar8 | 0x10;
          uVar5 = extraout_ECX_00;
          uStack_348 = uVar4;
          if ((uVar8 & 8) != 0) {
            uVar4 = uVar8 & 0xfffffff7 | 0x10;
            iStack_8 = 4;
            uStack_348 = uVar4;
            if (0xf < uStack_4d4) {
              func_0x0046b1f0(auStack_4e8,auStack_4e8[0],uStack_4d4);
              uVar5 = extraout_ECX_01;
            }
            uStack_4d8 = 0;
            uStack_4d4 = 0xf;
            auStack_4e8[0] = auStack_4e8[0] & 0xffffff00;
          }
          iStack_8 = 3;
          if ((uVar4 & 4) != 0) {
            uVar4 = uVar4 & 0xfffffffb;
            iStack_8 = 3;
            uStack_348 = uVar4;
            if (0xf < uStack_524) {
              func_0x0046b1f0(auStack_538,auStack_538[0],uStack_524);
              uVar5 = extraout_ECX_02;
            }
            uStack_528 = 0;
            uStack_524 = 0xf;
            auStack_538[0] = auStack_538[0] & 0xffffff00;
          }
          uStack_bc = func_0x005cc550(uVar5);
          FUN_005cb2f0(auStack_c0);
          uVar8 = uVar4 & 0xffffffef;
          iStack_8._0_1_ = 0;
          uStack_348 = uVar8;
          if (0xf < uStack_78) {
            func_0x0046b1f0(auStack_8c,auStack_8c[0],uStack_78);
          }
          uStack_7c = 0;
          uStack_78 = 0xf;
          auStack_8c[0] = auStack_8c[0] & 0xffffff00;
        }
      }
      else {
        cVar2 = func_0x005bee00(uVar4);
        if (cVar2 == '\0') {
          in_XMM0_Da = 0;
          *(undefined4 *)(param_1 + 0x3b0) = 0;
        }
        else {
          in_XMM0_Da = 0x3f800000;
          *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
        }
      }
      piVar9 = piVar9 + 2;
    } while (piVar9 != piStack_34c);
  }
  iStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005cc4a0(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_30 = param_2;
  piStack_24 = param_3;
  piStack_28 = param_1;
  puVar2 = &stack0xfffffffc;
  if ((char)param_1[0xcd] != '\0') {
    if ((param_3[2] - *param_3 != param_2[2] - *param_2) ||
       (puVar2 = &stack0xfffffffc, param_3[3] - param_3[1] != param_2[3] - param_2[1])) {
      pcVar1 = *(code **)(*param_1 + 0x68);
      _guard_check_icall(uVar4);
      (*pcVar1)();
      puVar2 = puStack_20;
    }
  }
  puStack_20 = puVar2;
  uVar4 = param_1[0x2a];
  uStack_2c = param_1[0x2b] + uVar4;
  if (uVar4 != uStack_2c) {
    do {
      piStack_28 = (int *)(*(int *)(param_1[0x28] + (uVar4 >> 1 & param_1[0x29] - 1U) * 4) +
                          (uVar4 & 1) * 8);
      cVar3 = func_0x00858250();
      if ((cVar3 == '\0') && ((~(byte)(*(uint *)(*piStack_28 + 0x108) >> 0xc) & 1) != 0)) {
        FUN_00856880();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uStack_2c);
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("onGeometryChange",0x10);
  uStack_14 = 0;
  uVar4 = func_0x0085fef0(&uStack_48,piStack_30,piStack_24);
  if (0 < (int)uVar4) {
    func_0x00d66d90(DAT_0145e9f0,~uVar4);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_34) {
    func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_005cc4b0(undefined1 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [52];
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecc4f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = uVar1;
  FUN_004b5d70(auStack_68);
  uStack_8 = 0;
  uStack_1c = param_1;
  FUN_005cb2f0(auStack_68);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_20) {
    func_0x0046b1f0(auStack_34,auStack_34[0],uStack_20,uVar1);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



uint __fastcall FUN_005cc770(int param_1)

{
  return *(uint *)(param_1 + 0x108) >> 2 & 0xffffff01;
}



undefined4 __thiscall FUN_005cc780(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1 + 0x10,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int __thiscall FUN_005cc7e0(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecc5f3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    func_0x0046e710(iVar1,*(int *)(param_1 + 0x24) - iVar1 >> 3,uVar4);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = piVar2[1] + -1;
    piVar2[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar1 = piVar2[2] + -1;
      piVar2[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005cc9b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *param_2 = *(undefined4 *)(param_1 + 0x8c);
  param_2[1] = uVar1;
  return;
}



int __thiscall FUN_005cc9d0(int param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ecc6c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 4;
  func_0x005cf7f0(uVar2);
  iStack_8._0_1_ = 3;
  puVar1 = (undefined4 *)(param_1 + 0x3ec);
  if (0xf < *(uint *)(param_1 + 0x400)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x400));
  }
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 2;
  puVar1 = (undefined4 *)(param_1 + 0x3d4);
  if (0xf < *(uint *)(param_1 + 1000)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 1000));
  }
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 1000) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 1;
  puVar1 = (undefined4 *)(param_1 + 0x3bc);
  if (0xf < *(uint *)(param_1 + 0x3d0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x3d0));
  }
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = (undefined4 *)(param_1 + 0x3a4);
  if (0xf < *(uint *)(param_1 + 0x3b8)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x3b8));
  }
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x420);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005ccb00(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  undefined4 **ppuStack_80;
  int *piStack_7c;
  uint uStack_78;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecc7f2;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_78 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 == 1) {
    piVar8 = (int *)(param_1 + 0x40);
    piStack_1c = piVar8;
    if (0.003 < *(float *)(param_1 + 0x128)) {
      ppuStack_80 = (undefined4 **)0x5ccb50;
      piStack_7c = piVar8;
      func_0x008673d0();
    }
    ppuStack_80 = (undefined4 **)0x5ccb5d;
    piStack_7c = piVar8;
    func_0x00869510();
    if (*(char *)(param_1 + 0x3a0) != '\0') {
      ppuStack_80 = (undefined4 **)0x5ccb6d;
      func_0x005ce440();
    }
    piVar8 = *(int **)(param_1 + 0x414);
    puVar9 = *(undefined4 **)(param_1 + 0x410);
    piStack_18 = piVar8;
    if (puVar9 != piVar8) {
      iStack_6c = *(int *)(param_1 + 0x200) + *piStack_1c;
      iStack_68 = piStack_1c[1] + *(int *)(param_1 + 500);
      iStack_64 = piStack_1c[2] - *(int *)(param_1 + 0x1f8);
      iStack_60 = piStack_1c[3] - *(int *)(param_1 + 0x1fc);
      do {
        if (*(char *)(puVar9 + 0x3e) != '\0') {
          ppuStack_80 = (undefined4 **)(puVar9 + 0x38);
          puStack_84 = (undefined4 *)puVar9[0x3c];
          puStack_8c = (undefined4 *)0x5ccbe2;
          puStack_88 = puVar9;
          func_0x005cc8b0();
          piVar8 = piStack_18;
        }
        puVar9 = puVar9 + 0x3f;
      } while (puVar9 != piVar8);
      piStack_1c = *(int **)(param_1 + 0x410);
      piVar8 = *(int **)(param_1 + 0x414);
      cStack_11 = '\0';
      if (piStack_1c != piVar8) {
        puVar9 = piStack_1c + 0xb;
        piStack_18 = piVar8;
        do {
          if (((*(char *)(puVar9 + 0x33) != '\0') && (*(char *)(param_1 + 0x405) != '\0')) &&
             (piVar8 = piStack_18, (*(uint *)(param_1 + 0x108) >> 2 & 1) != 0)) {
            ppuStack_80 = (undefined4 **)&cStack_11;
            puStack_88 = (undefined4 *)0x5ccc4a;
            puStack_84 = piStack_1c;
            func_0x005ce850();
            puStack_90 = &uStack_50;
            puStack_24 = DAT_0145ec98;
            uStack_50 = puVar9[-3];
            uStack_4c = puVar9[-2];
            uStack_48 = puVar9[-1];
            uStack_44 = *puVar9;
            puStack_8c = &uStack_40;
            piStack_94 = (int *)0x5ccc7a;
            puStack_88 = puStack_90;
            func_0x005cf980();
            iStack_8 = 0;
            if (puStack_5c != puStack_58) {
              ppuStack_80 = (undefined4 **)0x2c;
              puStack_84 = (undefined4 *)0x5ccc94;
              puStack_20 = (undefined4 *)func_0x008ab47d();
              uStack_40 = 0;
              puStack_3c = (undefined1 *)0x0;
              *puStack_20 = DrawQueueItem::vftable;
              puStack_20[1] = 0;
              puStack_20[2] = 0;
              iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
              uVar2 = puVar9[0x26];
              uVar3 = puVar9[0x27];
              uVar4 = puVar9[0x28];
              puStack_20[3] = puVar9[0x25];
              puStack_20[4] = uVar2;
              puStack_20[5] = uVar3;
              puStack_20[6] = uVar4;
              iStack_8._0_1_ = 5;
              *puStack_20 = DrawQueueItemLine::vftable;
              ppuStack_80 = &puStack_5c;
              puStack_84 = (undefined4 *)0x5ccce9;
              func_0x005cf8b0();
              puStack_20[10] = 1;
              iStack_8 = (uint)iStack_8._1_3_ << 8;
              puStack_28 = puStack_20;
              puVar1 = (undefined4 *)puStack_24[1];
              if (puVar1 == (undefined4 *)puStack_24[2]) {
                ppuStack_80 = &puStack_28;
                puStack_88 = (undefined4 *)0x5ccd1d;
                puStack_84 = puVar1;
                func_0x0047c520();
              }
              else {
                *puVar1 = puStack_20;
                puStack_24[1] = puStack_24[1] + 4;
              }
            }
            iStack_8 = 0xffffffff;
            piVar8 = piStack_18;
            if (puStack_5c != (undefined4 *)0x0) {
              ppuStack_80 = (undefined4 **)(iStack_54 - (int)puStack_5c >> 3);
              puStack_84 = puStack_5c;
              puStack_88 = (undefined4 *)0x5ccd3a;
              func_0x0046e710();
              puStack_5c = (undefined4 *)0x0;
              puStack_58 = (undefined4 *)0x0;
              iStack_54 = 0;
              piVar8 = piStack_18;
            }
          }
          piStack_1c = piStack_1c + 0x3f;
          puVar9 = puVar9 + 0x3f;
        } while (piStack_1c != piVar8);
        if (cStack_11 != '\0') {
          ppuStack_80 = (undefined4 **)0x5ccd79;
          func_0x005ceda0();
        }
      }
      piStack_1c = *(int **)(param_1 + 0x410);
      piVar8 = *(int **)(param_1 + 0x414);
      if (piStack_1c != piVar8) {
        piVar10 = piStack_1c + 0x22;
        piStack_18 = piVar8;
        do {
          if ((((char)piVar10[0x1c] != '\0') && (*(char *)(param_1 + 0x405) != '\0')) &&
             (piVar8 = piStack_18, (*(uint *)(param_1 + 0x108) >> 2 & 1) != 0)) {
            ppuStack_80 = (undefined4 **)0x2c;
            puStack_28 = DAT_0145ec98;
            puStack_84 = (undefined4 *)0x5ccdd7;
            puStack_2c = (undefined4 *)func_0x008ab47d();
            uStack_40 = 0;
            puStack_3c = (undefined1 *)0x0;
            *puStack_2c = DrawQueueItem::vftable;
            puStack_2c[1] = 0;
            puStack_2c[2] = 0;
            uVar4 = DAT_012bc278;
            uVar3 = DAT_012bc274;
            uVar2 = DAT_012bc270;
            puStack_2c[3] = DAT_012bc26c;
            puStack_2c[4] = uVar2;
            puStack_2c[5] = uVar3;
            puStack_2c[6] = uVar4;
            *puStack_2c = DrawQueueItemFilledRect::vftable;
            puStack_2c[7] = piVar10[-2];
            puStack_2c[8] = piVar10[-1];
            puStack_2c[9] = *piVar10;
            puStack_2c[10] = piVar10[1];
            iStack_8 = 0xffffffff;
            puStack_84 = (undefined4 *)puStack_28[1];
            puStack_24 = puStack_2c;
            if (puStack_84 == (undefined4 *)puStack_28[2]) {
              ppuStack_80 = &puStack_24;
              puStack_88 = (undefined4 *)0x5cce65;
              func_0x0047c520();
            }
            else {
              *puStack_84 = puStack_2c;
              puStack_28[1] = puStack_28[1] + 4;
            }
            ppuStack_80 = (undefined4 **)0x2c;
            puStack_28 = DAT_0145ec98;
            puStack_84 = (undefined4 *)0x5cce74;
            puStack_24 = (undefined4 *)func_0x008ab47d();
            uStack_38 = 0;
            puStack_34 = (undefined4 *)0x0;
            *puStack_24 = DrawQueueItem::vftable;
            puStack_24[1] = 0;
            puStack_24[2] = 0;
            iVar5 = piVar10[0x17];
            iVar6 = piVar10[0x18];
            iVar7 = piVar10[0x19];
            puStack_24[3] = piVar10[0x16];
            puStack_24[4] = iVar5;
            puStack_24[5] = iVar6;
            puStack_24[6] = iVar7;
            *puStack_24 = DrawQueueItemFilledRect::vftable;
            puStack_24[7] = piVar10[-6];
            puStack_24[8] = piVar10[-5];
            puStack_24[9] = piVar10[-4];
            puStack_24[10] = piVar10[-3];
            iStack_8 = 0xffffffff;
            puStack_84 = (undefined4 *)puStack_28[1];
            puStack_20 = puStack_24;
            if (puStack_84 == (undefined4 *)puStack_28[2]) {
              ppuStack_80 = &puStack_24;
              puStack_88 = (undefined4 *)0x5ccf00;
              func_0x0047c520();
              piVar8 = piStack_18;
            }
            else {
              *puStack_84 = puStack_24;
              puStack_28[1] = puStack_28[1] + 4;
              piVar8 = piStack_18;
            }
          }
          piStack_1c = piStack_1c + 0x3f;
          piVar10 = piVar10 + 0x3f;
        } while (piStack_1c != piVar8);
      }
      piStack_18 = *(int **)(param_1 + 0x410);
      puVar9 = *(undefined4 **)(param_1 + 0x414);
      puStack_2c = puVar9;
      if (piStack_18 != puVar9) {
        piVar8 = piStack_18 + 0x16;
        do {
          piStack_1c = piVar8;
          if ((((char)piVar8[0x28] != '\0') && (*(char *)(param_1 + 0x405) != '\0')) &&
             ((*(uint *)(param_1 + 0x108) >> 2 & 1) != 0)) {
            ppuStack_80 = (undefined4 **)0x2c;
            puStack_28 = DAT_0145ec98;
            puStack_84 = (undefined4 *)0x5ccf7a;
            puStack_30 = (undefined4 *)func_0x008ab47d();
            uStack_48 = 0;
            uStack_44 = 0;
            *puStack_30 = DrawQueueItem::vftable;
            puStack_30[1] = 0;
            puStack_30[2] = 0;
            iVar5 = piVar8[0x1f];
            iVar6 = piVar8[0x20];
            iVar7 = piVar8[0x21];
            puStack_30[3] = piVar8[0x1e];
            puStack_30[4] = iVar5;
            puStack_30[5] = iVar6;
            puStack_30[6] = iVar7;
            *puStack_30 = DrawQueueItemFilledRect::vftable;
            puStack_30[7] = piVar8[-2];
            puStack_30[8] = piVar8[-1];
            puStack_30[9] = *piVar8;
            puStack_30[10] = piVar8[1];
            iStack_8 = 0xffffffff;
            puStack_84 = (undefined4 *)puStack_28[1];
            puStack_24 = puStack_30;
            if (puStack_84 == (undefined4 *)puStack_28[2]) {
              ppuStack_80 = &puStack_24;
              puStack_88 = (undefined4 *)0x5cd005;
              func_0x0047c520();
            }
            else {
              *puStack_84 = puStack_30;
              puStack_28[1] = puStack_28[1] + 4;
            }
            ppuStack_80 = (undefined4 **)&DAT_0000002c;
            puStack_28 = DAT_0145ec98;
            puStack_84 = (undefined4 *)0x5cd014;
            puStack_34 = (undefined4 *)func_0x008ab47d();
            puStack_58 = (undefined4 *)0x0;
            iStack_54 = 0;
            *puStack_34 = DrawQueueItem::vftable;
            puStack_34[1] = 0;
            puStack_34[2] = 0;
            iVar5 = piVar8[0x23];
            iVar6 = piVar8[0x24];
            iVar7 = piVar8[0x25];
            puStack_34[3] = piVar8[0x22];
            puStack_34[4] = iVar5;
            puStack_34[5] = iVar6;
            puStack_34[6] = iVar7;
            *puStack_34 = DrawQueueItemFilledRect::vftable;
            puStack_34[7] = piVar8[2];
            puStack_34[8] = piVar8[3];
            puStack_34[9] = piVar8[4];
            puStack_34[10] = piVar8[5];
            iStack_8 = 0xffffffff;
            puVar9 = (undefined4 *)puStack_28[1];
            puStack_24 = puStack_34;
            if (puVar9 == (undefined4 *)puStack_28[2]) {
              ppuStack_80 = &puStack_24;
              puStack_88 = (undefined4 *)0x5cd0a3;
              puStack_84 = puVar9;
              func_0x0047c520();
            }
            else {
              *puVar9 = puStack_34;
              puStack_28[1] = puStack_28[1] + 4;
            }
            puStack_3c = (undefined1 *)&puStack_84;
            puStack_88 = &puStack_84;
            puStack_20 = (undefined4 *)CONCAT31(puStack_20._1_3_,*(undefined1 *)(param_1 + 0x358));
            puStack_8c = (undefined4 *)0x5cd0c6;
            func_0x00468610();
            puStack_8c = puStack_20;
            puStack_90 = &DAT_012bc25c;
            piStack_94 = (int *)0x21;
            piStack_98 = piStack_1c + -6;
            piStack_9c = piStack_1c + 0xe;
            iStack_8 = 0xffffffff;
            uStack_a0 = 0x5cd0f0;
            func_0x0061ad80();
            puVar9 = puStack_2c;
          }
          piStack_18 = piStack_18 + 0x3f;
          piVar8 = piStack_1c + 0x3f;
          piStack_1c = piVar8;
        } while (piStack_18 != puVar9);
      }
      if (*(int *)(param_1 + 0x3fc) != 0) {
        puStack_3c = (undefined1 *)&puStack_84;
        if (*(int *)(param_1 + 0x33c) != 0) {
          LOCK();
          piVar8 = (int *)(*(int *)(param_1 + 0x33c) + 4);
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        puStack_84 = *(undefined4 **)(param_1 + 0x338);
        ppuStack_80 = *(undefined4 ***)(param_1 + 0x33c);
        piStack_94 = &iStack_6c;
        puStack_88 = (undefined4 *)0x0;
        puStack_8c = &DAT_012bc26c;
        puStack_90 = (undefined4 *)0x14;
        piStack_98 = (int *)(param_1 + 0x3ec);
        iStack_8 = 0xffffffff;
        piStack_9c = (int *)0x5cd17f;
        func_0x0061ad80();
      }
      if (*(char *)(param_1 + 0x404) != '\0') {
        puStack_3c = (undefined1 *)&puStack_84;
        if (*(int *)(param_1 + 0x33c) != 0) {
          LOCK();
          piVar8 = (int *)(*(int *)(param_1 + 0x33c) + 4);
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        puStack_84 = *(undefined4 **)(param_1 + 0x338);
        ppuStack_80 = *(undefined4 ***)(param_1 + 0x33c);
        piStack_94 = &iStack_6c;
        puStack_88 = (undefined4 *)0x0;
        puStack_8c = &DAT_012bc26c;
        puStack_90 = (undefined4 *)&DAT_00000006;
        piStack_98 = (int *)(param_1 + 0x3d4);
        iStack_8 = 0xffffffff;
        piStack_9c = (int *)0x5cd1ef;
        func_0x0061ad80();
        puStack_3c = (undefined1 *)&uStack_a0;
        if (*(int *)(param_1 + 0x33c) != 0) {
          LOCK();
          piVar8 = (int *)(*(int *)(param_1 + 0x33c) + 4);
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        uStack_a0 = *(undefined4 *)(param_1 + 0x338);
        piStack_9c = *(int **)(param_1 + 0x33c);
        piStack_b0 = &iStack_6c;
        uStack_a4 = 0;
        puStack_a8 = &DAT_012bc26c;
        uStack_ac = 5;
        iStack_b4 = param_1 + 0x3bc;
        iStack_8 = 0xffffffff;
        uStack_b8 = 0x5cd252;
        func_0x0061ad80();
        puStack_3c = (undefined1 *)&uStack_bc;
        if (*(int *)(param_1 + 0x33c) != 0) {
          LOCK();
          piVar8 = (int *)(*(int *)(param_1 + 0x33c) + 4);
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        uStack_bc = *(undefined4 *)(param_1 + 0x338);
        uStack_b8 = *(undefined4 *)(param_1 + 0x33c);
        iStack_8 = 0xffffffff;
        func_0x0061ad80(param_1 + 0x3a4,&iStack_6c,9,&DAT_012bc26c,0);
      }
    }
    ppuStack_80 = (undefined4 **)(param_1 + 0x40);
    puStack_84 = (undefined4 *)0x5cd2c0;
    func_0x00867470();
    puStack_84 = (undefined4 *)(param_1 + 0x40);
    puStack_88 = (undefined4 *)0x5cd2cb;
    func_0x008675b0();
    puStack_88 = (undefined4 *)(param_1 + 0x40);
    puStack_8c = (undefined4 *)0x5cd2d6;
    func_0x0086b280();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_005cd2f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x410);
  iVar1 = *(int *)(param_1 + 0x414);
  if (iVar2 != iVar1) {
    do {
      func_0x005cd890();
      iVar2 = iVar2 + 0xfc;
    } while (iVar2 != iVar1);
    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x410);
  }
  return;
}



void __thiscall FUN_005cd330(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecc83e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  uVar3 = (*(int *)(param_1 + 0x414) - *(int *)(param_1 + 0x410) >> 2) * -0x41041041;
  if (uVar3 < param_2 - 1U || uVar3 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    func_0x00469da0(param_1 + 0x10,uVar1);
    auStack_3c[6] = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("[UIGraph::setLineWidth (%s)] Graph of index %d out of bounds.",0x3d);
    iStack_14._0_1_ = 1;
    uVar2 = func_0x004852c0(auStack_54,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar2);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    auStack_3c[6] = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
  }
  else {
    *(undefined4 *)(param_2 * 0xfc + -0xc + *(int *)(param_1 + 0x410)) = param_3;
    *(undefined1 *)(param_1 + 0x3a0) = 1;
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __fastcall FUN_005cd4d0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_114 [32];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecc870;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  memset(auStack_114,0,0xfc);
  func_0x005cd690(uVar1);
  uStack_8 = 0;
  func_0x005cfd40(0,0);
  func_0x005d0370(0,0);
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0xffffffff;
  uStack_d8 = 0xffffffff;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 9;
  uStack_a8 = 9;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 4;
  uStack_98 = 4;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 6;
  uStack_88 = 6;
  func_0x0046a660("Value: ",7);
  uStack_54 = DAT_012bc26c;
  uStack_50 = DAT_012bc270;
  uStack_4c = DAT_012bc274;
  uStack_48 = DAT_012bc278;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0x3ec8c8ca;
  uStack_24 = 1;
  uStack_34 = DAT_012bc26c;
  uStack_30 = DAT_012bc270;
  uStack_2c = DAT_012bc274;
  uStack_28 = DAT_012bc278;
  uStack_20 = 0xffffffff;
  uStack_1c = 1;
  if (*(int *)(param_1 + 0x414) == *(int *)(param_1 + 0x418)) {
    func_0x005d0120(*(int *)(param_1 + 0x414),auStack_114);
  }
  else {
    func_0x005d0950();
    *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + 0xfc;
  }
  uStack_8 = 0xffffffff;
  func_0x005cd890();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005cd990(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 auStack_58 [5];
  uint uStack_44;
  uint auStack_40 [6];
  uint *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecc98e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_24 = 0;
  uVar4 = (*(int *)(param_1 + 0x414) - *(int *)(param_1 + 0x410) >> 2) * -0x41041041;
  if (uVar4 < param_2 - 1U || uVar4 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x00469da0(param_1 + 0x10);
    uStack_24 = 1;
    auStack_40[4] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("[UIGraph::addValue (%s)] Graph of index %d out of bounds.",0x39);
    iStack_14._0_1_ = 1;
    uVar3 = func_0x004852c0(auStack_58,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar3);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_5c) {
      func_0x0046b1f0(auStack_70,auStack_70[0],uStack_5c);
    }
    uStack_60 = 0;
    uStack_5c = 0xf;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_40[5]) {
      func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
    }
    auStack_40[4] = 0;
    auStack_40[5] = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    uStack_24 = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_44) {
      func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
    }
  }
  else {
    iVar5 = param_2 * 0xfc + *(int *)(param_1 + 0x410);
    puStack_28 = (uint *)(iVar5 + -0xe0);
    if (param_4 != '\0') {
      if ((((*puStack_28 != 0) &&
           (uVar4 = *(int *)(iVar5 + -0xe0) + *(int *)(iVar5 + -0xe4) + -1,
           *(int *)(*(int *)(*(int *)(iVar5 + -0xec) +
                            (*(int *)(iVar5 + -0xe8) - 1U & uVar4 >> 2) * 4) + (uVar4 & 3) * 4) < 3)
           ) && (param_3 < 3)) &&
         (*(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 1,
         *(uint *)(param_1 + 0x40c) < 0xb)) goto LAB_005cdbbc;
      *(undefined4 *)(param_1 + 0x40c) = 0;
    }
    func_0x005cfcb0(&param_3,uVar2);
    if (*(uint *)(param_1 + 0x408) < *puStack_28) {
      do {
        piVar1 = (int *)(iVar5 + -0xe0);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(iVar5 + -0xe4) = 0;
        }
        else {
          *(int *)(iVar5 + -0xe4) = *(int *)(iVar5 + -0xe4) + 1;
        }
      } while (*(uint *)(param_1 + 0x408) < *puStack_28);
    }
    *(undefined1 *)(param_1 + 0x3a0) = 1;
  }
LAB_005cdbbc:
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005cdbe0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecc83e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  iVar1 = *(int *)(param_1 + 0x410);
  uVar4 = (*(int *)(param_1 + 0x414) - iVar1 >> 2) * -0x41041041;
  if (uVar4 < param_2 - 1U || uVar4 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    func_0x00469da0(param_1 + 0x10,uVar2);
    auStack_3c[6] = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("[UIGraph::setLineColor (%s)] Graph of index %d out of bounds.",0x3d);
    iStack_14._0_1_ = 1;
    uVar3 = func_0x004852c0(auStack_54,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar3);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    auStack_3c[6] = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
  }
  else {
    param_2 = param_2 * 0xfc;
    *(undefined4 *)(param_2 + -0x1c + iVar1) = *param_3;
    *(undefined4 *)(param_2 + -0x18 + iVar1) = param_3[1];
    *(undefined4 *)(param_2 + -0x14 + iVar1) = param_3[2];
    *(undefined4 *)(param_2 + -0x10 + iVar1) = param_3[3];
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005cdd90(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecc83e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  uVar4 = (*(int *)(param_1 + 0x414) - *(int *)(param_1 + 0x410) >> 2) * -0x41041041;
  if (uVar4 < param_2 - 1U || uVar4 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x00469da0(param_1 + 0x10);
    auStack_3c[6] = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("[UIGraph::setInfoText (%s)] Graph of index %d out of bounds.",0x3c);
    iStack_14._0_1_ = 1;
    uVar2 = func_0x004852c0(auStack_54,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar2);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    auStack_3c[6] = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
  }
  else if ((undefined4 *)(param_2 * 0xfc + -0x54 + *(int *)(param_1 + 0x410)) != param_3) {
    puVar3 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(puVar3,param_3[4],uVar1);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005cdf40(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecc83e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  uVar3 = (*(int *)(param_1 + 0x414) - *(int *)(param_1 + 0x410) >> 2) * -0x41041041;
  if (uVar3 < param_2 - 1U || uVar3 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    func_0x00469da0(param_1 + 0x10,uVar1);
    auStack_3c[6] = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("[UIGraph::setGraphVisible (%s)] Graph of index %d out of bounds.",0x40);
    iStack_14._0_1_ = 1;
    uVar2 = func_0x004852c0(auStack_54,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar2);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    auStack_3c[6] = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
  }
  else {
    *(undefined1 *)(param_2 * 0xfc + -4 + *(int *)(param_1 + 0x410)) = param_3;
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005ce0e0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecc83e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  iVar1 = *(int *)(param_1 + 0x410);
  uVar4 = (*(int *)(param_1 + 0x414) - iVar1 >> 2) * -0x41041041;
  if (uVar4 < param_2 - 1U || uVar4 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    func_0x00469da0(param_1 + 0x10,uVar2);
    auStack_3c[6] = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("[UIGraph::setInfoLineColor (%s)] Graph of index %d out of bounds.",0x41);
    iStack_14._0_1_ = 1;
    uVar3 = func_0x004852c0(auStack_54,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar3);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    auStack_3c[6] = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
  }
  else {
    param_2 = param_2 * 0xfc;
    *(undefined4 *)(param_2 + -0x3c + iVar1) = *param_3;
    *(undefined4 *)(param_2 + -0x38 + iVar1) = param_3[1];
    *(undefined4 *)(param_2 + -0x34 + iVar1) = param_3[2];
    *(undefined4 *)(param_2 + -0x30 + iVar1) = param_3[3];
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005ce290(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 auStack_54 [5];
  uint uStack_40;
  uint auStack_3c [7];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecc83e;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_3c[6] = 0;
  iVar1 = *(int *)(param_1 + 0x410);
  uVar4 = (*(int *)(param_1 + 0x414) - iVar1 >> 2) * -0x41041041;
  if (uVar4 < param_2 - 1U || uVar4 - (param_2 - 1U) == 0) {
    iStack_14 = 0;
    func_0x00469da0(param_1 + 0x10,uVar2);
    auStack_3c[6] = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("[UIGraph::setTextBackground (%s)] Graph of index %d out of bounds.",0x42);
    iStack_14._0_1_ = 1;
    uVar3 = func_0x004852c0(auStack_54,&param_2);
    iStack_14._0_1_ = 2;
    FUN_005ee340(2,uVar3);
    iStack_14._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    auStack_3c[6] = 0;
    iStack_14 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
  }
  else {
    param_2 = param_2 * 0xfc;
    *(undefined4 *)(param_2 + -0x2c + iVar1) = *param_3;
    *(undefined4 *)(param_2 + -0x28 + iVar1) = param_3[1];
    *(undefined4 *)(param_2 + -0x24 + iVar1) = param_3[2];
    *(undefined4 *)(param_2 + -0x20 + iVar1) = param_3[3];
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005cf430(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 ***pppuVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int *piVar7;
  int *unaff_FS_OFFSET;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 **appuStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eccaff;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_14 = uVar3;
  FUN_0085b8a0(param_2,param_3);
  func_0x0080ff70(&piStack_20,uVar3);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar7 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar7 + 0x2c);
      uStack_28 = 1;
      pppuVar6 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar6 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar6,uStack_34,"capacity",8);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar3 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar3 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar7 + 0x2c);
        uStack_28 = 2;
        pppuVar6 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar6 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar6,uStack_4c,"title",5);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 4;
          func_0x00469da0(*piVar7 + 0x2c);
          uStack_28 = 4;
          pppuVar6 = appuStack_74;
          if (0xf < uStack_60) {
            pppuVar6 = (undefined4 ***)appuStack_74[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar6,uStack_64,"show-labels",0xb);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar3 = uStack_60;
          if (0xf < uStack_60) {
            func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
            uVar3 = extraout_ECX_00;
          }
          uStack_64 = 0;
          uStack_60 = 0xf;
          appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
          if (cStack_21 == '\0') {
            uStack_8._0_1_ = 5;
            func_0x00469da0(*piVar7 + 0x2c);
            uStack_28 = 8;
            pppuVar6 = appuStack_8c;
            if (0xf < uStack_78) {
              pppuVar6 = (undefined4 ***)appuStack_8c[0];
            }
            cStack_21 = func_0x0046cf20(pppuVar6,uStack_7c,"show-info",9);
            uStack_28 = 0;
            uStack_8._0_1_ = 0;
            uVar3 = uStack_78;
            if (0xf < uStack_78) {
              func_0x0046b1f0(appuStack_8c,appuStack_8c[0],uStack_78);
              uVar3 = extraout_ECX_01;
            }
            uStack_7c = 0;
            uStack_78 = 0xf;
            appuStack_8c[0] = (undefined4 **)((uint)appuStack_8c[0] & 0xffffff00);
            if (cStack_21 != '\0') {
              uVar2 = func_0x005bee00(uVar3);
              *(undefined1 *)(param_1 + 0x405) = uVar2;
            }
          }
          else {
            uVar2 = func_0x005bee00(uVar3);
            *(undefined1 *)(param_1 + 0x404) = uVar2;
          }
        }
        else {
          puVar5 = (undefined4 *)func_0x005ba8a0(auStack_a4,0);
          uStack_8._0_1_ = 3;
          if ((undefined4 *)(param_1 + 0x3ec) != puVar5) {
            puVar1 = puVar5 + 4;
            if (0xf < (uint)puVar5[5]) {
              puVar5 = (undefined4 *)*puVar5;
            }
            func_0x0046a660(puVar5,*puVar1);
          }
          uStack_8._0_1_ = 0;
          if (0xf < uStack_90) {
            func_0x0046b1f0(auStack_a4,auStack_a4[0],uStack_90);
          }
          uStack_94 = 0;
          uStack_90 = 0xf;
          auStack_a4[0] = auStack_a4[0] & 0xffffff00;
        }
      }
      else {
        uVar4 = func_0x005cc550(uVar3);
        *(undefined4 *)(param_1 + 0x408) = uVar4;
        *(undefined1 *)(param_1 + 0x3a0) = 1;
      }
      piVar7 = piVar7 + 2;
    } while (piVar7 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005cf790(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0085bb70(param_2,param_3);
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  return;
}



void __fastcall FUN_005cf7b0(int param_1)

{
  FUN_0085bd00();
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  return;
}



void __thiscall FUN_005cf7d0(int param_1,undefined4 param_2)

{
  FUN_0085c150(param_2);
  *(char *)(param_1 + 0x3a0) = (char)param_2;
  return;
}



int __thiscall FUN_005d21b0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eccddb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x3c0) != 0) {
    func_0x005bf1a0(*(int *)(param_1 + 0x3c0),uVar1);
    func_0x004aaee0(*(int *)(param_1 + 0x3c0),
                    (*(int *)(param_1 + 0x3c8) - *(int *)(param_1 + 0x3c0) >> 2) * -0x55555555);
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3d0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005d2270(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecce3a;
  iStack_1c = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (param_2 == 1) {
    puVar9 = (undefined4 *)(param_1 + 0x40);
    puStack_24 = puVar9;
    puVar6 = &stack0xfffffffc;
    if (0.003 < *(float *)(param_1 + 0x128)) {
      func_0x008673d0(puVar9,uVar7);
      puVar6 = puStack_20;
    }
    puStack_20 = puVar6;
    func_0x00869510(puVar9);
    if (*(char *)(param_1 + 0x3bc) != '\0') {
      func_0x005d2760();
    }
    piVar1 = *(int **)(param_1 + 0x3c4);
    piVar8 = *(int **)(param_1 + 0x3c0);
    puVar9 = puStack_24;
    if (piVar8 != piVar1) {
      do {
        iVar5 = DAT_0145ec98;
        puStack_28 = *(undefined4 **)(param_1 + 0x3a8);
        if ((*piVar8 != piVar8[1]) && (-1 < (int)puStack_28)) {
          puStack_24 = (undefined4 *)func_0x008ab47d(0x2c);
          *puStack_24 = DrawQueueItem::vftable;
          puStack_24[1] = 0;
          puStack_24[2] = 0;
          uVar2 = *(undefined4 *)(param_1 + 0x3b0);
          uVar3 = *(undefined4 *)(param_1 + 0x3b4);
          uVar4 = *(undefined4 *)(param_1 + 0x3b8);
          puStack_24[3] = *(undefined4 *)(param_1 + 0x3ac);
          puStack_24[4] = uVar2;
          puStack_24[5] = uVar3;
          puStack_24[6] = uVar4;
          uStack_14 = 4;
          *puStack_24 = DrawQueueItemLine::vftable;
          func_0x005cf8b0(piVar8);
          puStack_24[10] = puStack_28;
          uStack_14 = 0xffffffff;
          puStack_28 = puStack_24;
          puVar9 = *(undefined4 **)(iVar5 + 4);
          if (puVar9 == *(undefined4 **)(iVar5 + 8)) {
            func_0x0047c520(puVar9,&puStack_28);
          }
          else {
            *puVar9 = puStack_24;
            *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 4;
          }
        }
        piVar8 = piVar8 + 3;
      } while (piVar8 != piVar1);
      puVar9 = (undefined4 *)(param_1 + 0x40);
    }
    func_0x00867470(puVar9);
    func_0x008675b0(puVar9);
    func_0x0086b280(puVar9);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005d2410(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [8];
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecceb8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_14 = uVar1;
  FUN_0085b8a0(param_2,param_3);
  func_0x0080ff70(&piStack_20,uVar1);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar5 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar5 + 0x2c);
      uStack_28 = 1;
      pppuVar4 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar4 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar4,uStack_34,"cell-size",9);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar1 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar1 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar5 + 0x2c);
        uStack_28 = 2;
        pppuVar4 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar4 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar4,uStack_4c,"grid-width",10);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar1 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar1 = extraout_ECX_00;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 3;
          func_0x00469da0(*piVar5 + 0x2c);
          uStack_28 = 4;
          pppuVar4 = appuStack_74;
          if (0xf < uStack_60) {
            pppuVar4 = (undefined4 ***)appuStack_74[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar4,uStack_64,"grid-color",10);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar1 = uStack_60;
          if (0xf < uStack_60) {
            func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
            uVar1 = extraout_ECX_01;
          }
          uStack_64 = 0;
          uStack_60 = 0xf;
          appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
          if (cStack_21 != '\0') {
            puVar2 = (undefined4 *)func_0x005d33b0(auStack_8c,uVar1);
            *(undefined4 *)(param_1 + 0x3ac) = *puVar2;
            *(undefined4 *)(param_1 + 0x3b0) = puVar2[1];
            *(undefined4 *)(param_1 + 0x3b4) = puVar2[2];
            *(undefined4 *)(param_1 + 0x3b8) = puVar2[3];
          }
        }
        else {
          uVar3 = func_0x005cc550(uVar1);
          *(undefined4 *)(param_1 + 0x3a8) = uVar3;
          *(undefined1 *)(param_1 + 0x3bc) = 1;
        }
      }
      else {
        puVar2 = (undefined4 *)func_0x005d31a0(auStack_7c,uVar1);
        *(undefined4 *)(param_1 + 0x3a0) = *puVar2;
        *(undefined4 *)(param_1 + 0x3a4) = puVar2[1];
        *(undefined1 *)(param_1 + 0x3bc) = 1;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005d26b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0085bb70(param_2,param_3);
  *(undefined1 *)(param_1 + 0x3bc) = 1;
  return;
}



void __fastcall FUN_005d26d0(int param_1)

{
  FUN_0085bd00();
  *(undefined1 *)(param_1 + 0x3bc) = 1;
  return;
}



void __thiscall FUN_005d26f0(int param_1,undefined4 param_2)

{
  FUN_0085c150(param_2);
  *(char *)(param_1 + 0x3bc) = (char)param_2;
  return;
}



void __thiscall FUN_005d2710(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x3a0) = *param_2;
  *(undefined4 *)(param_1 + 0x3a4) = param_2[1];
  *(undefined1 *)(param_1 + 0x3bc) = 1;
  return;
}



void __thiscall FUN_005d2740(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a8) = param_2;
  *(undefined1 *)(param_1 + 0x3bc) = 1;
  return;
}



undefined * Catch_005d2b7a(void)

{
  func_0x0046a610(4,1);
  return &DAT_005d2b93;
}



undefined * Catch_005d2d0d(void)

{
  func_0x0046a610(4,1);
  return &DAT_005d2d26;
}



undefined * Catch_005d2e7d(void)

{
  func_0x0046a610(4,1);
  return &DAT_005d2e96;
}



undefined * Catch_005d30f3(void)

{
  func_0x0046a610(4,1);
  return &DAT_005d310c;
}



int __thiscall FUN_005d41b0(int param_1,byte param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ecd365;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 3;
  puVar1 = (undefined4 *)(param_1 + 0x3f8);
  if (0xf < *(uint *)(param_1 + 0x40c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x40c),uVar5);
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 2;
  puVar1 = (undefined4 *)(param_1 + 0x3d8);
  if (0xf < *(uint *)(param_1 + 0x3ec)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x3ec),uVar5);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 1;
  puVar1 = (undefined4 *)(param_1 + 0x3c0);
  if (0xf < *(uint *)(param_1 + 0x3d4)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x3d4),uVar5);
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar2 = *(int **)(param_1 + 0x3a4);
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
  iStack_8 = 0xffffffff;
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x430);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x005d486b)

void __thiscall FUN_005d42f0(int param_1,int param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  __time64_t _Var14;
  undefined4 uStack_154;
  int *piStack_150;
  undefined1 *puStack_138;
  undefined1 auStack_11c [24];
  int *piStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [4];
  undefined1 *puStack_c0;
  int *piStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  byte bStack_ae;
  char cStack_ad;
  undefined1 auStack_ac [152];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecd431;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_b4 = 0;
  iStack_cc = param_1;
  if (param_2 != 1) goto LAB_005d4a28;
  piVar6 = (int *)(param_1 + 0x40);
  piStack_100 = piVar6;
  if (0.003 < *(float *)(param_1 + 0x128)) {
    func_0x008673d0();
  }
  func_0x00869510();
  if ((*(char *)(param_1 + 0x3b9) != '\0') &&
     (piStack_bc = *(int **)(param_1 + 0x3a0), piStack_bc != (int *)0x0)) {
    iStack_f8 = *(int *)(param_1 + 0x200) + *piVar6;
    iStack_f4 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
    iStack_f0 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
    iStack_ec = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
    puStack_138 = (undefined1 *)0x0;
    pcVar1 = *(code **)(*piStack_bc + 0x50);
    _guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar5 = DAT_0145d7e0;
    if (DAT_0145d7e0 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 == 0) goto LAB_005d4a28;
    iVar5 = *(int *)(param_1 + 0x3a0);
    *(undefined4 *)(iVar5 + 0x47) = *(undefined4 *)(param_1 + 0x3a8);
    *(undefined4 *)(iVar5 + 0x4b) = *(undefined4 *)(param_1 + 0x3ac);
    *(undefined4 *)(iVar5 + 0x4f) = *(undefined4 *)(param_1 + 0x3b0);
    *(undefined4 *)(iVar5 + 0x53) = *(undefined4 *)(param_1 + 0x3b4);
    puStack_138 = (undefined1 *)0x5d442d;
    func_0x004a7a40();
    iStack_e4 = *piVar6;
    puStack_e8 = *(undefined1 **)(param_1 + 0x4c);
    iStack_e0 = *(int *)(param_1 + 0x44);
    piStack_104 = (int *)(param_1 + 0x338);
    iStack_dc = *(int *)(param_1 + 0x48) + -3;
    puStack_d8 = puStack_e8;
    if (((*piStack_104 != 0) && (*(char *)(param_1 + 0x3bb) != '\0')) &&
       ((*(char *)(param_1 + 0x3bc) != '\0' ||
        (((cVar3 = FUN_004a6e30(), cVar3 != '\0' || (cVar3 = func_0x0058e480(), cVar3 != '\0')) &&
         (1 < *(ushort *)(*(int *)(param_1 + 0x3a0) + 0x34))))))) {
      puStack_c0 = (undefined1 *)&puStack_138;
      func_0x00468490();
      piStack_150 = (int *)(param_1 + 0x3d8);
      uStack_8 = 0xffffffff;
      uStack_154 = 0x5d44f0;
      func_0x0061ad80();
    }
    if (*(char *)(param_1 + 0x3ba) != '\0') {
      puStack_138 = auStack_11c;
      iVar5 = func_0x00464a50();
      uStack_8 = 1;
      puStack_c0 = (undefined1 *)&puStack_138;
      func_0x00468490();
      uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),1);
      uStack_154 = 0x5d4555;
      piStack_150 = (int *)iVar5;
      func_0x0061ad80();
      uStack_8 = 0xffffffff;
      FUN_00469ba0();
    }
    if ((DAT_0145d0d0 & 8) != 0) {
      puStack_138 = (undefined1 *)0x5d4588;
      lVar11 = FUN_004b38b0();
      puStack_138 = (undefined1 *)lVar11;
      if ((*(char *)(param_1 + 0x3bb) != '\0') && (lVar11 != 0)) {
        iVar5 = func_0x005d39f0();
        uStack_8 = 3;
        puStack_c0 = (undefined1 *)&puStack_138;
        func_0x00468490();
        uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
        uStack_154 = 0x5d45e9;
        piStack_150 = (int *)iVar5;
        func_0x0061ad80();
        uStack_8 = 0xffffffff;
        FUN_00469ba0();
      }
      puStack_138 = (undefined1 *)0x5d460d;
      cStack_ad = FUN_004b38b0();
      puStack_138 = (undefined1 *)0x5d461f;
      lVar11 = FUN_004b38b0();
      if (lVar11 != 0) {
        piStack_bc = (int *)0x0;
        bStack_ae = 0;
        if (lVar11 == 1) {
          if (cStack_ad == '\0') {
            cStack_ad = '\x01';
          }
          else {
            puStack_138 = (undefined1 *)0x5d4659;
            FUN_00472ad0();
            uStack_8 = 5;
            puStack_138 = auStack_c4;
            uStack_b4 = 1;
            piVar6 = (int *)FUN_004b48b0();
            uStack_b4 = 3;
            if (*piVar6 != *(int *)(param_1 + 0x3a0)) goto LAB_005d46ba;
            cStack_ad = '\x01';
          }
        }
        else {
LAB_005d46ba:
          cStack_ad = '\0';
        }
        uStack_8 = 5;
        if ((uStack_b4 & 2) != 0) {
          uStack_b4 = uStack_b4 & 0xfffffffd;
          FUN_00468340();
        }
        uStack_8 = 0xffffffff;
        if ((uStack_b4 & 1) != 0) {
          uStack_b4 = uStack_b4 & 0xfffffffe;
          FUN_00468340();
        }
        puStack_c0 = *(undefined1 **)(param_1 + 0x3a0);
        puStack_138 = (undefined1 *)0x5d471f;
        uVar12 = FUN_004b38b0();
        uStack_b8 = (uint)(uVar12 >> 0x20);
        uStack_c8 = (undefined4)uVar12;
        uVar9 = (uint)((uVar12 & 0xffffffff) * 0x1a9fbe77 >> 0x20);
        if (cStack_ad == '\0') {
          lVar11 = (uVar12 & 0xffffffff) * 0x624dd2f;
          puStack_c0 = (undefined1 *)((ulonglong)lVar11 >> 0x20);
          uStack_d0 = (undefined4)((ulonglong)uStack_b8 * 0x624dd2f);
          uVar2 = (ulonglong)uStack_b8 * 0x1a9fbe77 + (ulonglong)uVar9;
          uVar10 = (uint)(uVar2 >> 0x20);
          lVar11 = lVar11 + (uVar2 & 0xffffffff);
          iStack_f0 = (int)lVar11;
          uVar9 = (uint)((ulonglong)lVar11 >> 0x20);
          lVar11 = (ulonglong)uStack_b8 * 0x624dd2f +
                   (ulonglong)CONCAT14(CARRY4(uVar10,uVar9),uVar10 + uVar9);
          lVar13 = uVar12 - lVar11;
          uVar9 = (uint)((ulonglong)lVar13 >> 0x20);
          lVar11 = lVar11 + CONCAT44(uVar9 >> 1,(uint)lVar13 >> 1 | uVar9 * -0x80000000);
          uVar9 = (uint)((ulonglong)lVar11 >> 0x20);
          lVar11 = CONCAT44(uVar9 >> 9,(uint)lVar11 >> 9 | uVar9 * 0x800000);
        }
        else {
          lVar11 = (uVar12 & 0xffffffff) * 0x624dd2f;
          uStack_fc = (undefined4)((ulonglong)lVar11 >> 0x20);
          uStack_d0 = (undefined4)((ulonglong)uStack_b8 * 0x624dd2f);
          uVar2 = (ulonglong)uStack_b8 * 0x1a9fbe77 + (ulonglong)uVar9;
          uVar10 = (uint)(uVar2 >> 0x20);
          lVar11 = lVar11 + (uVar2 & 0xffffffff);
          iStack_f0 = (int)lVar11;
          uVar9 = (uint)((ulonglong)lVar11 >> 0x20);
          lVar11 = (ulonglong)uStack_b8 * 0x624dd2f +
                   (ulonglong)CONCAT14(CARRY4(uVar10,uVar9),uVar10 + uVar9);
          lVar13 = uVar12 - lVar11;
          uVar9 = (uint)((ulonglong)lVar13 >> 0x20);
          lVar11 = lVar11 + CONCAT44(uVar9 >> 1,(uint)lVar13 >> 1 | uVar9 * -0x80000000);
          uVar9 = (uint)((ulonglong)lVar11 >> 0x20);
          puStack_138 = (undefined1 *)0x5d47c8;
          lVar13 = FUN_004b38b0();
          puStack_138 = (undefined1 *)0x5d47d4;
          _Var14 = _time64((__time64_t *)0x0);
          uVar12 = CONCAT44(uStack_b8,uStack_c8);
          bStack_ae = 1;
          lVar11 = (lVar13 + CONCAT44(uVar9 >> 9,(uint)lVar11 >> 9 | uVar9 * 0x800000)) - _Var14;
        }
        uStack_b8 = (uint)(uVar12 >> 0x20);
        uStack_c8 = (undefined4)uVar12;
        puStack_138 = (undefined1 *)0x3c;
        lVar13 = func_0x00e87ec0();
        iVar5 = (int)((ulonglong)lVar13 >> 0x20);
        piVar6 = (int *)lVar13;
        if (0 < lVar13) {
          piStack_bc = piVar6;
        }
        iStack_ec = ((int)((ulonglong)lVar11 >> 0x20) -
                    ((((iVar5 << 4 | (uint)piVar6 >> 0x1c) - iVar5) -
                     (uint)((int *)((int)piVar6 * 0x10) < piVar6)) * 4 |
                    (uint)((int)piVar6 * 0xf) >> 0x1e)) -
                    (uint)((uint)lVar11 < (uint)((int)piVar6 * 0x3c));
        piStack_150 = (int *)0x5d48c5;
        memset(auStack_ac,0,0x98);
        func_0x005d5720();
        piVar6 = piStack_bc;
        uStack_8 = 7;
        if (piStack_bc != (int *)0x0) {
          piStack_150 = (int *)0x5d48f7;
          piStack_150 = (int *)func_0x00482d80();
          uStack_154 = 0x5d48fd;
          func_0x0046b6e0();
        }
        piStack_150 = &iStack_f8;
        uStack_154 = 0x5d4910;
        uStack_154 = func_0x00e73e96();
        piVar7 = (int *)func_0x005a8ba0(auStack_ac);
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0x40 + (int)piVar7) = 0x30;
        func_0x00482d80();
        if (piVar6 == (int *)0x0) {
          piStack_150 = (int *)auStack_ac;
          uStack_154 = 0x5d494b;
          func_0x0046b6e0();
          puStack_d8 = puStack_e8;
        }
        else {
          puStack_d8 = puStack_e8;
          if (9 < (int)piVar6) {
            iStack_e4 = *piStack_100;
            iStack_e0 = piStack_100[1];
            iStack_dc = *(int *)(iStack_cc + 0x48) + -2;
            puStack_d8 = *(undefined1 **)(iStack_cc + 0x4c);
          }
        }
        iVar5 = ((bStack_ae ^ 1) + 0x41) * 0x10 + iStack_cc;
        piStack_150 = (int *)0x5d49ae;
        uVar8 = func_0x005d56c0();
        uStack_8._0_1_ = 8;
        puStack_e8 = (undefined1 *)&uStack_154;
        func_0x00468490(piStack_104);
        uStack_8._0_1_ = 8;
        func_0x0061ad80(uVar8,&iStack_e4,10,iVar5,0);
        uStack_8 = CONCAT31(uStack_8._1_3_,7);
        FUN_00469ba0();
        uStack_8 = 0xffffffff;
        func_0x005d3940();
        param_1 = iStack_cc;
      }
    }
  }
  puStack_138 = (undefined1 *)0x5d4a18;
  func_0x00867470();
  puStack_138 = (undefined1 *)(param_1 + 0x40);
  func_0x008675b0();
  func_0x0086b280();
LAB_005d4a28:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005d4a70(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int *piStack_14;
  
  puStack_20 = &stack0xfffffffc;
  piStack_14 = (int *)0xffffffff;
  puStack_18 = &DAT_00ecd47d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piVar2 = *(int **)(param_1 + 0x3a0);
  iStack_24 = param_1;
  if (piVar2 == (int *)0x0) {
    if (param_2 != 0) {
      puStack_20 = &stack0xfffffffc;
      uVar6 = FUN_004a76b0(&uStack_2c,param_2,1);
      piStack_14 = piVar2;
      func_0x0046ffa0(uVar6);
      piStack_14 = (int *)0xffffffff;
      FUN_00468340();
      goto LAB_005d4b70;
    }
  }
  else if (param_2 != 0) {
    pcVar3 = *(code **)(*piVar2 + 8);
    _guard_check_icall(param_2,uVar5);
    (*pcVar3)();
    goto LAB_005d4b70;
  }
  uStack_2c = 0;
  piStack_28 = (int *)0x0;
  piStack_14 = (int *)0x1;
  puStack_20 = &stack0xfffffffc;
  func_0x0046ffa0(&uStack_2c);
  piVar2 = piStack_28;
  piStack_14 = (int *)0xffffffff;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar4 = piStack_28[1] + -1;
    piStack_28[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piStack_28;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1 + -1;
      *piVar1 = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
LAB_005d4b70:
  uStack_34 = 0;
  *(undefined4 *)(iStack_24 + 0x3f0) = 0;
  *(undefined4 *)(iStack_24 + 0x3f4) = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("onItemChange",0xc);
  piStack_14 = (int *)0x2;
  uVar5 = func_0x00470bf0(&uStack_44);
  if (0 < (int)uVar5) {
    func_0x00d66d90(DAT_0145e9f0,~uVar5);
  }
  piStack_14 = (int *)0xffffffff;
  if (0xf < uStack_30) {
    func_0x0046b1f0(&uStack_44,uStack_44,uStack_30);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005d4c20(int param_1,undefined2 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(int *)(param_1 + 0x3a0) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x3a0) + 0x34) = param_2;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[4] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("onItemChange",0xc,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x00470bf0(auStack_38);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    func_0x005d5620();
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005d4d10(int param_1,undefined2 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(int *)(param_1 + 0x3a0) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x3a0) + 0x34) = param_2;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    func_0x0046bc40("onItemChange",0xc,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x00470bf0(&uStack_38);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_24) {
      func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005d4e00(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  func_0x004683d0(param_2,uVar1);
  if (*(int *)(param_1 + 0x3a0) != 0) {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = 0;
    func_0x005d5620();
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onItemChange",0xc);
    uStack_14 = 0;
    uVar1 = func_0x00470bf0(&uStack_38);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_24) {
      func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005d4f10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puVar2 = &stack0xfffffffc;
  if ((undefined4 *)(param_1 + 0x3c0) != param_2) {
    puVar1 = param_2 + 4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    func_0x0046a660(param_2,*puVar1,uVar3);
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  if (*(int *)(param_1 + 0x3a0) != 0) {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onItemChange",0xc);
    uStack_14 = 0;
    uVar3 = func_0x00470bf0(&uStack_38);
    if (0 < (int)uVar3) {
      func_0x00d66d90(DAT_0145e9f0,~uVar3);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_24) {
      func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_005d5010(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 ***pppuVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_114 [16];
  uint auStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 **appuStack_ec [4];
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 **appuStack_d4 [4];
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 **appuStack_bc [4];
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 **appuStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 **appuStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecd594;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_14 = uVar2;
  FUN_0085b8a0(param_2,param_3);
  func_0x0080ff70(&piStack_20,uVar2);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar6 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar6 + 0x2c);
      uStack_28 = 1;
      pppuVar5 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar5 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar5,uStack_34,"item-id",7);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar2 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar2 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar6 + 0x2c);
        uStack_28 = 2;
        pppuVar5 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar5 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar5,uStack_4c,"item-count",10);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar2 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar2 = extraout_ECX_00;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 3;
          func_0x00469da0(*piVar6 + 0x2c);
          uStack_28 = 4;
          pppuVar5 = appuStack_74;
          if (0xf < uStack_60) {
            pppuVar5 = (undefined4 ***)appuStack_74[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar5,uStack_64,"item-visible",0xc);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar2 = uStack_60;
          if (0xf < uStack_60) {
            func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
            uVar2 = extraout_ECX_01;
          }
          uStack_64 = 0;
          uStack_60 = 0xf;
          appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
          if (cStack_21 == '\0') {
            uStack_8._0_1_ = 4;
            func_0x00469da0(*piVar6 + 0x2c);
            uStack_28 = 8;
            pppuVar5 = appuStack_8c;
            if (0xf < uStack_78) {
              pppuVar5 = (undefined4 ***)appuStack_8c[0];
            }
            cStack_21 = func_0x0046cf20(pppuVar5,uStack_7c,"virtual",7);
            uStack_28 = 0;
            uStack_8._0_1_ = 0;
            uVar2 = uStack_78;
            if (0xf < uStack_78) {
              func_0x0046b1f0(appuStack_8c,appuStack_8c[0],uStack_78);
              uVar2 = extraout_ECX_02;
            }
            uStack_7c = 0;
            uStack_78 = 0xf;
            appuStack_8c[0] = (undefined4 **)((uint)appuStack_8c[0] & 0xffffff00);
            if (cStack_21 == '\0') {
              uStack_8._0_1_ = 5;
              func_0x00469da0(*piVar6 + 0x2c);
              uStack_28 = 0x10;
              pppuVar5 = appuStack_a4;
              if (0xf < uStack_90) {
                pppuVar5 = (undefined4 ***)appuStack_a4[0];
              }
              cStack_21 = func_0x0046cf20(pppuVar5,uStack_94,"show-id",7);
              uStack_28 = 0;
              uStack_8._0_1_ = 0;
              uVar2 = uStack_90;
              if (0xf < uStack_90) {
                func_0x0046b1f0(appuStack_a4,appuStack_a4[0],uStack_90);
                uVar2 = extraout_ECX_03;
              }
              uStack_94 = 0;
              uStack_90 = 0xf;
              appuStack_a4[0] = (undefined4 **)((uint)appuStack_a4[0] & 0xffffff00);
              if (cStack_21 == '\0') {
                uStack_8._0_1_ = 6;
                func_0x00469da0(*piVar6 + 0x2c);
                uStack_28 = 0x20;
                pppuVar5 = appuStack_bc;
                if (0xf < uStack_a8) {
                  pppuVar5 = (undefined4 ***)appuStack_bc[0];
                }
                cStack_21 = func_0x0046cf20(pppuVar5,uStack_ac,"shader",6);
                uStack_28 = 0;
                uStack_8._0_1_ = 0;
                if (0xf < uStack_a8) {
                  func_0x0046b1f0(appuStack_bc,appuStack_bc[0],uStack_a8);
                }
                uStack_ac = 0;
                uStack_a8 = 0xf;
                appuStack_bc[0] = (undefined4 **)((uint)appuStack_bc[0] & 0xffffff00);
                if (cStack_21 == '\0') {
                  uStack_8._0_1_ = 8;
                  func_0x00469da0(*piVar6 + 0x2c);
                  uStack_28 = 0x40;
                  pppuVar5 = appuStack_d4;
                  if (0xf < uStack_c0) {
                    pppuVar5 = (undefined4 ***)appuStack_d4[0];
                  }
                  cStack_21 = func_0x0046cf20(pppuVar5,uStack_c4,"item-color",10);
                  uStack_28 = 0;
                  uStack_8._0_1_ = 0;
                  uVar2 = uStack_c0;
                  if (0xf < uStack_c0) {
                    func_0x0046b1f0(appuStack_d4,appuStack_d4[0],uStack_c0);
                    uVar2 = extraout_ECX_04;
                  }
                  uStack_c4 = 0;
                  uStack_c0 = 0xf;
                  appuStack_d4[0] = (undefined4 **)((uint)appuStack_d4[0] & 0xffffff00);
                  if (cStack_21 == '\0') {
                    uStack_8._0_1_ = 9;
                    func_0x00469da0(*piVar6 + 0x2c);
                    uStack_28 = 0x80;
                    pppuVar5 = appuStack_ec;
                    if (0xf < uStack_d8) {
                      pppuVar5 = (undefined4 ***)appuStack_ec[0];
                    }
                    cStack_21 = func_0x0046cf20(pppuVar5,uStack_dc,"item-always-show-count",0x16);
                    uStack_28 = 0;
                    uStack_8._0_1_ = 0;
                    uVar2 = uStack_d8;
                    if (0xf < uStack_d8) {
                      func_0x0046b1f0(appuStack_ec,appuStack_ec[0],uStack_d8);
                      uVar2 = extraout_ECX_05;
                    }
                    uStack_dc = 0;
                    uStack_d8 = 0xf;
                    appuStack_ec[0] = (undefined4 **)((uint)appuStack_ec[0] & 0xffffff00);
                    if (cStack_21 != '\0') {
                      uVar1 = func_0x005bee00(uVar2);
                      *(undefined1 *)(param_1 + 0x3bc) = uVar1;
                    }
                  }
                  else {
                    puVar4 = (undefined4 *)func_0x005d33b0(auStack_114,uVar2);
                    *(undefined4 *)(param_1 + 0x3a8) = *puVar4;
                    *(undefined4 *)(param_1 + 0x3ac) = puVar4[1];
                    *(undefined4 *)(param_1 + 0x3b0) = puVar4[2];
                    *(undefined4 *)(param_1 + 0x3b4) = puVar4[3];
                  }
                }
                else {
                  uVar3 = func_0x005ba8a0(auStack_104,0);
                  uStack_8._0_1_ = 7;
                  FUN_005d4f10(uVar3);
                  uStack_8._0_1_ = 0;
                  if (0xf < uStack_f0) {
                    func_0x0046b1f0(auStack_104,auStack_104[0],uStack_f0);
                  }
                  uStack_f4 = 0;
                  uStack_f0 = 0xf;
                  auStack_104[0] = auStack_104[0] & 0xffffff00;
                }
              }
              else {
                uVar1 = func_0x005bee00(uVar2);
                *(undefined1 *)(param_1 + 0x3ba) = uVar1;
              }
            }
            else {
              uVar1 = func_0x005bee00(uVar2);
              *(undefined1 *)(param_1 + 0x3b8) = uVar1;
            }
          }
          else {
            uVar1 = func_0x005bee00(uVar2);
            *(undefined1 *)(param_1 + 0x3b9) = uVar1;
          }
        }
        else {
          uVar3 = func_0x005cc550(uVar2);
          FUN_005d4c20(uVar3);
        }
      }
      else {
        uVar3 = func_0x005cc550(uVar2);
        FUN_005d4a70(uVar3);
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_005d593d(void)

{
  func_0x0046a610(4,1);
  return &DAT_005d5959;
}



int __thiscall FUN_005d5b90(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x50;
  func_0x005d3940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0x98);
  }
  return iVar1;
}



undefined4 * __thiscall FUN_005d5dd0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecd70b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = UIMap::vftable;
  uStack_8 = 1;
  piVar5 = DAT_0145d3b0;
  if (DAT_0145d3b0 != DAT_0145d3b4) {
    do {
      if (*piVar5 == param_1[0xe9]) break;
      piVar5 = piVar5 + 2;
    } while (piVar5 != DAT_0145d3b4);
  }
  if (piVar5 != DAT_0145d3b4) {
    func_0x0057a5b0(piVar5,uVar4);
    piVar5 = (int *)DAT_0145d3b4[-1];
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar3 = piVar5[1] + -1;
      piVar5[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piVar5;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar3 = piVar5[2] + -1;
        piVar5[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    DAT_0145d3b4 = DAT_0145d3b4 + -2;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  piVar5 = (int *)param_1[0xea];
  if (piVar5 != (int *)0x0) {
    LOCK();
    iVar3 = piVar5[1] + -1;
    piVar5[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar5;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar5 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3d8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined1 __thiscall FUN_005d5f10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  
  *(undefined4 *)(param_1 + 0x3bc) = *param_2;
  *(undefined4 *)(param_1 + 0x3c0) = param_2[1];
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f383ed;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("onMouseMove",0xb,uVar1);
  uStack_14 = 0;
  iVar2 = func_0x00861310(&uStack_3c,param_2,param_3);
  if (iVar2 < 1) {
    uStack_21 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_21 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_28) {
    func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return uStack_21;
}



void __thiscall FUN_005d5f30(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecd745;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  FUN_00852940(param_2);
  if (param_2 == 1) {
    iStack_3c = *(int *)(param_1 + 0x3b0) + -1;
    iStack_38 = *(int *)(param_1 + 0x3b4) + 1;
    iStack_34 = *(int *)(param_1 + 0x3b8) + 1;
    iStack_40 = *(int *)(param_1 + 0x3ac) + -1;
    iStack_2c = iStack_3c;
    if ((iStack_40 <= iStack_38) && (iStack_3c <= iStack_34)) {
      uStack_18 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      func_0x00618ca0();
      uStack_8 = 0;
      func_0x00618f80(&iStack_40,1);
      func_0x00472530(&uStack_28,&DAT_012bc25c);
      uStack_8 = 0xffffffff;
      func_0x00618eb0();
    }
    DAT_0145ec98[0x10] = DAT_0145ec98[1] - *DAT_0145ec98 >> 2;
  }
  else if (param_2 == 2) {
    uVar2 = FUN_005d6720(auStack_30,param_1 + 0x3bc);
    uStack_8 = 1;
    func_0x00581b00(param_1 + 0x3ac,uVar2);
    uStack_8 = 0xffffffff;
    FUN_00468340();
  }
  else if (param_2 == 3) {
    func_0x005827e0(param_1 + 0x3ac,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_005d6080(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3a4);
  param_2 = *(int *)(iVar1 + 0x60) + param_2;
  param_3 = param_3 + *(int *)(iVar1 + 100);
  *(int *)(iVar1 + 0x60) = param_2;
  *(int *)(iVar1 + 100) = param_3;
  iVar2 = param_2 / DAT_0145d7e0;
  if (iVar2 != 0) {
    *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + iVar2;
    *(int *)(iVar1 + 0x60) = param_2 % DAT_0145d7e0;
  }
  if (param_3 / DAT_0145d7e0 != 0) {
    *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + param_3 / DAT_0145d7e0;
    iVar2 = param_3 / DAT_0145d7e0;
    *(int *)(iVar1 + 100) = param_3 % DAT_0145d7e0;
    *(undefined1 *)(iVar1 + 0x80) = 1;
    return iVar2;
  }
  if (iVar2 != 0) {
    *(undefined1 *)(iVar1 + 0x80) = 1;
  }
  return 0;
}



uint __thiscall FUN_005d6110(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x3d0) < param_2) {
    param_2 = *(int *)(param_1 + 0x3d0);
  }
  iVar2 = *(int *)(param_1 + 0x3cc);
  if (*(int *)(param_1 + 0x3cc) < param_2) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x3a0) = iVar2;
  uVar1 = func_0x005d6cf0();
  return uVar1 & 0xffffff00;
}



undefined4 __fastcall FUN_005d6140(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a0) -
          ((*(int *)(param_1 + 0x3cc) <= *(int *)(param_1 + 0x3a0) + -2) + 1);
  if (iVar1 < *(int *)(param_1 + 0x3cc)) {
    return 0;
  }
  *(int *)(param_1 + 0x3a0) = iVar1;
  func_0x005d6cf0();
  return 1;
}



undefined4 __fastcall FUN_005d6180(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a0) + 2;
  if (*(int *)(param_1 + 0x3d0) <
      (int)((iVar1 <= *(int *)(param_1 + 0x3d0)) + 1 + *(int *)(param_1 + 0x3a0))) {
    return 0;
  }
  *(int *)(param_1 + 0x3a0) = iVar1;
  func_0x005d6cf0();
  return 1;
}



void __thiscall FUN_005d61c0(int param_1,int *param_2)

{
  func_0x00583dd0(param_2);
  *(float *)(param_1 + 0x3c4) = (float)*param_2 / (float)param_2[1];
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    func_0x005d6e60();
  }
  return;
}



void __thiscall FUN_005d6210(int param_1,char param_2)

{
  *(char *)(param_1 + 0x3c8) = param_2;
  if (param_2 != '\0') {
    *(float *)(param_1 + 0x3c4) =
         (float)*(int *)(*(int *)(param_1 + 0x3a4) + 0x40) /
         (float)*(int *)(*(int *)(param_1 + 0x3a4) + 0x44);
  }
  func_0x005d6e60();
  return;
}



void __thiscall FUN_005d6250(int *param_1,ulonglong *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_4c [4];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_4c;
  iVar5 = param_1[0xeb];
  iVar7 = param_1[0xed];
  iStack_48 = iVar5;
  if (iVar5 + -1 <= iVar7) {
    iStack_48 = iVar7;
  }
  iStack_44 = *param_3;
  iVar2 = iVar7;
  if (iVar5 + -1 <= iVar7) {
    iVar2 = iVar5;
  }
  piStack_3c = param_1;
  if ((iVar2 <= iStack_44) && (iStack_44 <= iStack_48)) {
    iVar5 = param_1[0xec];
    iVar2 = param_1[0xee];
    iStack_48 = iVar5;
    if (iVar5 + -1 <= iVar2) {
      iStack_48 = iVar2;
    }
    iStack_40 = param_3[1];
    iVar3 = iVar2;
    if (iVar5 + -1 <= iVar2) {
      iVar3 = iVar5;
    }
    if ((iVar3 <= iStack_40) && (iStack_40 <= iStack_48)) {
      uStack_34 = (iVar2 - param_1[0xec]) + 1;
      iStack_48 = param_1[0xe9];
      iStack_40 = iStack_40 - param_1[0xec];
      uVar6 = (iVar7 - param_1[0xeb]) + 1;
      iStack_44 = iStack_44 - param_1[0xeb];
      piStack_3c = *(int **)(iStack_48 + 500);
      uStack_38 = uVar6;
      uStack_2c = uStack_34;
      if ((piStack_3c == (int *)0x0) || (*(char *)(iStack_48 + 0x130) == '\0')) {
        uStack_18 = *(undefined8 *)(iStack_48 + 0x68);
        uStack_10 = *(undefined4 *)(iStack_48 + 0x70);
      }
      else {
        pcVar1 = *(code **)(*piStack_3c + 0x80);
        _guard_check_icall(&uStack_18,0);
        (*pcVar1)();
      }
      uVar4 = uStack_2c;
      if ((((int)uStack_18 != 0xffff) || (uStack_18._4_4_ != 0xffff)) || ((short)uStack_10 != 0xff))
      {
        func_0x00583f70(&iStack_28,&uStack_38,iStack_48);
        iVar7 = *(int *)(iStack_48 + 0x58) + 2 +
                ((int)((float)((int)(((float)((iStack_20 - iStack_28) + 1) / (float)(int)uVar6) *
                                    (float)iStack_44) + iStack_28) * (1.0 / (float)DAT_0145d7e0)) -
                *(int *)(iStack_48 + 0x38));
        iVar5 = *(int *)(iStack_48 + 0x5c) + 2 +
                ((int)((float)((int)(((float)((iStack_1c - iStack_24) + 1) / (float)(int)uVar4) *
                                    (float)iStack_40) + iStack_24) * (1.0 / (float)DAT_0145d7e0)) -
                *(int *)(iStack_48 + 0x3c));
        if ((-1 < iVar7 + (int)uStack_18) || (-1 < uStack_18._4_4_ + iVar5)) {
          uVar6 = iVar7 + (int)uStack_18;
          uStack_38 = uVar6 & 0xffff;
          uVar4 = uStack_18._4_4_ + iVar5;
          uStack_34 = uVar4 & 0xffff;
          uStack_30 = CONCAT22(uStack_30._2_2_,(ushort)(byte)uStack_10);
          if ((uStack_38 != 0xffff) || ((uStack_34 != 0xffff || ((byte)uStack_10 != 0xff)))) {
            *param_2 = CONCAT44(uVar4,uVar6) & 0xffff0000ffff;
            *(undefined4 *)(param_2 + 1) = uStack_30;
            goto LAB_005d64c7;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 1) = 0xff;
  *(undefined4 *)((int)param_2 + 4) = 0xffff;
  *(undefined4 *)param_2 = 0xffff;
LAB_005d64c7:
  FUN_008ab370();
  return;
}



void __thiscall FUN_005d64e0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_ESI;
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  undefined8 uStack_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&iStack_48;
  piStack_44 = *(int **)(param_1 + 0x3ac);
  iStack_3c = *(int *)(param_1 + 0x3b4);
  iStack_48 = (int)piStack_44;
  if ((int)piStack_44 + -1 <= iStack_3c) {
    iStack_48 = iStack_3c;
  }
  iStack_40 = *param_3;
  iVar4 = iStack_3c;
  if ((int)piStack_44 + -1 <= iStack_3c) {
    iVar4 = *(int *)(param_1 + 0x3ac);
  }
  if ((iVar4 <= iStack_40) && (iStack_40 <= iStack_48)) {
    iVar4 = *(int *)(param_1 + 0x3b0);
    iVar1 = *(int *)(param_1 + 0x3b8);
    iStack_38 = iVar4;
    if (iVar4 + -1 <= iVar1) {
      iStack_38 = iVar1;
    }
    iStack_48 = param_3[1];
    iVar3 = iVar1;
    if (iVar4 + -1 <= iVar1) {
      iVar3 = iVar4;
    }
    if ((iVar3 <= iStack_48) && (iStack_48 <= iStack_38)) {
      iStack_34 = (iVar1 - *(int *)(param_1 + 0x3b0)) + 1;
      iStack_40 = iStack_40 - *(int *)(param_1 + 0x3ac);
      iStack_38 = *(int *)(param_1 + 0x3a4);
      iStack_48 = iStack_48 - *(int *)(param_1 + 0x3b0);
      iVar4 = (iStack_3c - (int)piStack_44) + 1;
      piStack_44 = *(int **)(iStack_38 + 500);
      iStack_3c = iVar4;
      iStack_30 = iVar4;
      iStack_2c = iStack_34;
      if ((piStack_44 == (int *)0x0) || (*(char *)(iStack_38 + 0x130) == '\0')) {
        uStack_18 = *(undefined8 *)(iStack_38 + 0x68);
        uStack_10 = *(undefined4 *)(iStack_38 + 0x70);
      }
      else {
        pcVar2 = *(code **)(*piStack_44 + 0x80);
        _guard_check_icall(&uStack_18,0);
        (*pcVar2)();
        iVar4 = extraout_ECX;
      }
      iVar1 = iStack_34;
      if ((((int)uStack_18 == 0xffff) && (uStack_18._4_4_ == 0xffff)) && ((short)uStack_10 == 0xff))
      {
        *param_2 = 0;
        param_2[1] = 0;
        FUN_008ab370();
        return;
      }
      func_0x00583f70(aiStack_28,&iStack_30);
      iVar4 = ((int)(((float)((aiStack_28[0] - iStack_30) + 1) / (float)iVar1) * (float)iVar4) +
              iStack_30) % DAT_0145d7e0;
      *param_2 = ((int)(((float)((iStack_2c - iStack_34) + 1) / (float)iStack_48) * (float)unaff_ESI
                       ) + iStack_34) % DAT_0145d7e0;
      param_2[1] = iVar4;
      FUN_008ab370();
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  iStack_34 = param_1;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005d6720(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  uint uStack_24;
  short sStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecd79e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar7;
  FUN_005d6250(&uStack_28,param_3);
  if (((uStack_28 == 0xffff) && (uStack_24 == 0xffff)) && (sStack_20 == 0xff)) {
    *param_2 = 0;
    param_2[1] = 0;
    uStack_8 = 0;
  }
  else {
    uStack_1c = 0;
    uStack_8 = 1;
    uVar11 = *(uint *)(*(int *)(param_1 + 0x3a4) + 0x1c);
    uVar10 = uStack_28 + ((int)sStack_20 - uVar11);
    uVar8 = ((int)sStack_20 - uVar11) + uStack_24;
    if (((uVar10 < 0x10000) && (uVar8 < 0x10000)) && (uVar11 < 0x10)) {
      sStack_20 = (short)uVar11;
      uStack_28 = uVar10;
      uStack_24 = uVar8;
    }
    piVar12 = (int *)0x0;
    if ((int)uVar11 <= *(int *)(*(int *)(param_1 + 0x3a4) + 0x24)) {
      do {
        piVar9 = (int *)FUN_00572b50(&uStack_28);
        if (piVar9[1] != 0) {
          LOCK();
          piVar1 = (int *)(piVar9[1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        iVar2 = piVar9[1];
        iVar3 = *piVar9;
        uStack_1c = *(undefined8 *)piVar9;
        uStack_8 = CONCAT31((int3)(uStack_8 >> 8),1);
        if (piVar12 != (int *)0x0) {
          LOCK();
          iVar5 = piVar12[1] + -1;
          piVar12[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)*piVar12;
            _guard_check_icall(uVar7);
            (*pcVar4)();
            LOCK();
            iVar5 = piVar12[2] + -1;
            piVar12[2] = iVar5;
            UNLOCK();
            if (iVar5 == 0) {
              pcVar4 = *(code **)(*piVar12 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
        if ((iVar3 != 0) && (cVar6 = FUN_005c9ae0(), cVar6 != '\0')) goto LAB_005d68f6;
        if ((uStack_28 - 1 < 0x10000) && ((uStack_24 - 1 < 0x10000 && ((int)sStack_20 + 1U < 0x10)))
           ) {
          sStack_20 = (short)((int)sStack_20 + 1U);
          uStack_28 = uStack_28 - 1;
          uStack_24 = uStack_24 - 1;
        }
        uVar11 = uVar11 + 1;
        piVar12 = uStack_1c._4_4_;
      } while ((int)uVar11 <= *(int *)(*(int *)(param_1 + 0x3a4) + 0x24));
      if (iVar3 != 0) {
LAB_005d68f6:
        cVar6 = FUN_005c9ae0();
        if (cVar6 != '\0') {
          uStack_1c = 0;
          param_2[1] = 0;
          *param_2 = iVar3;
          param_2[1] = iVar2;
          uStack_8 = uStack_8 & 0xffffff00;
          goto LAB_005d6988;
        }
      }
      piVar12 = uStack_1c._4_4_;
    }
    *param_2 = 0;
    param_2[1] = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    if (piVar12 != (int *)0x0) {
      LOCK();
      iVar2 = piVar12[1] + -1;
      piVar12[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar4 = *(code **)*piVar12;
        _guard_check_icall(uVar7);
        (*pcVar4)();
        LOCK();
        piVar9 = piVar12 + 2;
        iVar2 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar4 = *(code **)(*piVar12 + 4);
          _guard_check_icall(uVar7);
          (*pcVar4)();
        }
      }
    }
  }
LAB_005d6988:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005d69b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 ***pppuVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecd844;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_14 = uVar2;
  FUN_0085b8a0(param_2,param_3);
  func_0x0080ff70(&piStack_20,uVar2);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar5 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar5 + 0x2c);
      uStack_28 = 1;
      pppuVar3 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar3 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar3,uStack_34,"multifloor",10);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar2 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar2 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar5 + 0x2c);
        uStack_28 = 2;
        pppuVar3 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar3 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar3,uStack_4c,"draw-texts",10);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar2 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar2 = extraout_ECX_00;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 3;
          func_0x00469da0(*piVar5 + 0x2c);
          uStack_28 = 4;
          pppuVar3 = appuStack_74;
          if (0xf < uStack_60) {
            pppuVar3 = (undefined4 ***)appuStack_74[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar3,uStack_64,"draw-lights",0xb);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar2 = uStack_60;
          if (0xf < uStack_60) {
            func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
            uVar2 = extraout_ECX_01;
          }
          uStack_64 = 0;
          uStack_60 = 0xf;
          appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
          if (cStack_21 == '\0') {
            uStack_8._0_1_ = 4;
            func_0x00469da0(*piVar5 + 0x2c);
            uStack_28 = 8;
            pppuVar3 = appuStack_8c;
            if (0xf < uStack_78) {
              pppuVar3 = (undefined4 ***)appuStack_8c[0];
            }
            cStack_21 = func_0x0046cf20(pppuVar3,uStack_7c,"animated",8);
            uStack_28 = 0;
            uStack_8._0_1_ = 0;
            uVar2 = uStack_78;
            if (0xf < uStack_78) {
              func_0x0046b1f0(appuStack_8c,appuStack_8c[0],uStack_78);
              uVar2 = extraout_ECX_02;
            }
            uStack_7c = 0;
            uStack_78 = 0xf;
            appuStack_8c[0] = (undefined4 **)((uint)appuStack_8c[0] & 0xffffff00);
            if (cStack_21 != '\0') {
              uVar1 = func_0x005bee00(uVar2);
              iVar4 = *(int *)(param_1 + 0x3a4);
              *(undefined1 *)(iVar4 + 0x82) = uVar1;
              goto LAB_005d6c4e;
            }
          }
          else {
            uVar1 = func_0x005bee00(uVar2);
            *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x200) = uVar1;
          }
        }
        else {
          uVar1 = func_0x005bee00(uVar2);
          *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0x83) = uVar1;
        }
      }
      else {
        uVar1 = func_0x005bee00(uVar2);
        iVar4 = *(int *)(param_1 + 0x3a4);
        *(undefined1 *)(iVar4 + 0x81) = uVar1;
LAB_005d6c4e:
        *(undefined1 *)(iVar4 + 0x80) = 1;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005d6cc0(undefined4 param_1,undefined4 param_2)

{
  FUN_0085bb70(param_1,param_2);
  func_0x005d6e60();
  return;
}



undefined4 * __thiscall FUN_005d7120(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x238);
  }
  return param_1;
}



void FUN_005d7150(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __fastcall FUN_005d7270(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb514d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  iStack_20 = param_1;
  func_0x005d75c0(&uStack_1c,uStack_14);
  uStack_8 = 0;
  FUN_005d8de0(&iStack_30,param_1 + 0x2c);
  if ((iStack_30 <= iStack_28) && (iStack_2c <= iStack_24)) {
    switch(*(undefined4 *)(iStack_20 + 0x10)) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
    }
  }
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __fastcall FUN_005d7d90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecdbe0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x00485920(*(int *)(param_1 + 0x14),uVar5);
    piVar6 = (int *)func_0x0046e710(*(int *)(param_1 + 0x14),
                                    *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) >> 3);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      piVar6 = (int *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void __fastcall FUN_005d7e40(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecdc0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d71d0(uVar1,param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// Library Function - Single Match
//  public: virtual void * __thiscall CDebugSOldSectionReader::`scalar deleting destructor'(unsigned
// int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 * __thiscall ___GCDebugSOldSectionReader__UAEPAXI_Z(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005d7ec0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



// Library Function - Single Match
//  public: virtual void * __thiscall MemMapReadOnly::`scalar deleting destructor'(unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 __thiscall ___GMemMapReadOnly__UAEPAXI_Z(undefined4 param_1,byte param_2)

{
  func_0x005d8590();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



undefined4 __thiscall FUN_005d8760(undefined4 param_1,byte param_2)

{
  func_0x005d8790();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



undefined4 __thiscall FUN_005d8930(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecdeed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005d8790(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_005d8990(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecdf1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00851fd0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3d0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005d89f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecdf5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00852940(param_2);
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x74) == 0) {
      func_0x0046b930((int)&uStack_34 + 4,uVar6);
      iStack_8 = 0;
      puVar7 = (undefined4 *)func_0x005d9740();
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      *puVar7 = 0;
      puVar7[1] = 0;
      iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
      uStack_18 = *(undefined4 *)(param_1 + 0x74);
      piVar3 = *(int **)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x74) = uVar1;
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      iStack_8._0_1_ = 1;
      piStack_14 = piVar3;
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar5 = piVar3[1] + -1;
        piVar3[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar4 = *(code **)*piVar3;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar5 = piVar3[2] + -1;
          piVar3[2] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
      iStack_8 = 0xffffffff;
      FUN_00468340();
    }
    uStack_2c = *(undefined4 *)(param_1 + 0x3b8);
    iStack_28 = *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x40);
    uStack_34 = *(undefined8 *)(param_1 + 0x3b0);
    iStack_24 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
    iStack_20 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
    iStack_1c = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
    func_0x00587220(&iStack_28,&uStack_34,param_1 + 0x10c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_005d8b60(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  float fVar4;
  
  iVar1 = param_1[0xf0];
  if (param_2 != iVar1) {
    if ((param_2 < param_1[0xf1]) || (param_1[0xf2] < param_2)) {
      return 0;
    }
    param_1[0xf0] = param_2;
    if (param_2 < 0) {
      bVar3 = (byte)(param_2 >> 0x1f);
      fVar4 = 1.0 / (float)(1 << (((byte)param_2 ^ bVar3) - bVar3 & 0x1f));
    }
    else if (param_2 < 1) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = (float)(1 << ((byte)param_2 & 0x1f));
    }
    param_1[0xef] = (int)fVar4;
    FUN_008439e0();
    pcVar2 = *(code **)(*param_1 + 0x74);
    _guard_check_icall(param_2,iVar1);
    (*pcVar2)();
  }
  return 1;
}



void __thiscall FUN_005d8c10(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uStack_18;
  int iStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  iStack_10 = param_1[0xee];
  uStack_18 = *(undefined8 *)(param_1 + 0xec);
  param_1[0xec] = *param_2;
  param_1[0xed] = param_2[1];
  *(short *)(param_1 + 0xee) = (short)param_2[2];
  FUN_008439e0();
  pcVar1 = *(code **)(*param_1 + 0x78);
  _guard_check_icall(param_2,&uStack_18);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



void __fastcall FUN_005d8c90(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uStack_14;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_c = *(undefined4 *)(param_1 + 0x3b8);
  uStack_14 = *(undefined8 *)(param_1 + 0x3b0);
  uVar2 = (int)(short)uStack_c - 1;
  if (uVar2 < 0x10) {
    uVar1 = (uint)uStack_c >> 0x10;
    uStack_c = CONCAT22((short)uVar1,(short)uVar2);
    FUN_005d8c10(&uStack_14);
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_005d8cf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uStack_14;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_c = *(undefined4 *)(param_1 + 0x3b8);
  uStack_14 = *(undefined8 *)(param_1 + 0x3b0);
  uVar2 = (int)(short)uStack_c + 1;
  if (uVar2 < 0x10) {
    uVar1 = (uint)uStack_c >> 0x10;
    uStack_c = CONCAT22((short)uVar1,(short)uVar2);
    FUN_005d8c10(&uStack_14);
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_005d8d50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uStack_24;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uStack_1c = *(undefined4 *)(param_1 + 0x3b8);
  uStack_24 = *(undefined8 *)(param_1 + 0x3b0);
  iStack_18 = *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x40);
  iStack_14 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
  iStack_10 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
  iStack_c = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
  func_0x005875b0(param_2,param_3,&iStack_18,&uStack_24,*(undefined4 *)(param_1 + 0x3bc));
  return param_2;
}



int * __thiscall FUN_005d8de0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uStack_1c = *(undefined4 *)(param_1 + 0x3b8);
  iStack_18 = *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x40);
  iStack_14 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
  iStack_c = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
  uStack_24 = *(undefined8 *)(param_1 + 0x3b0);
  iStack_10 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
  if (((iStack_10 < iStack_18) || (iStack_c < iStack_14)) ||
     (*(short *)(param_3 + 8) != (short)uStack_1c)) {
    iVar5 = -1;
    iVar2 = 0;
    iVar4 = -1;
    iVar3 = 0;
  }
  else {
    iVar5 = (int)((float)DAT_0145d7e0 * *(float *)(param_1 + 0x3bc)) + -1;
    piVar1 = (int *)func_0x005875b0(auStack_2c,param_3,&iStack_18,&uStack_24,
                                    *(float *)(param_1 + 0x3bc));
    iVar3 = *piVar1 - iVar5 / 2;
    iVar2 = piVar1[1] - iVar5 / 2;
    iVar4 = iVar3 + iVar5;
    iVar5 = iVar2 + iVar5;
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  param_2[2] = iVar4;
  param_2[3] = iVar5;
  return param_2;
}



uint * __thiscall FUN_005d8f00(int param_1,uint *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  byte bStack_3c;
  int iStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [20];
  
  uStack_2c = *(undefined4 *)(param_1 + 0x3b8);
  iStack_28 = *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x40);
  iStack_24 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
  uStack_34 = *(undefined8 *)(param_1 + 0x3b0);
  iStack_20 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
  if ((iStack_28 <= iStack_20) && (iStack_24 <= iVar3)) {
    iStack_1c = iVar3;
    func_0x005876f0(auStack_18,&iStack_28,&uStack_34,*(undefined4 *)(param_1 + 0x3bc));
    fVar1 = *(float *)(param_1 + 0x3bc);
    iVar2 = param_3[1];
    *param_2 = (int)((float)((*param_3 -
                             (int)((float)(((int)((float)((iStack_20 - iStack_28) + 1) * fVar1) -
                                           unaff_EDI) + -1 + iStack_38) * -0.5)) - iStack_38) *
                    (1.0 / fVar1)) + iStack_28 & 0xffff;
    param_2[1] = (int)((float)((iVar2 - (int)((float)(((int)((float)((iStack_1c - iStack_24) + 1) *
                                                            fVar1) - iVar3) + -1 + (int)uStack_34) *
                                             -0.5)) - (int)uStack_34) * (1.0 / fVar1)) + iStack_24 &
                 0xffff;
    *(ushort *)(param_2 + 2) = (ushort)bStack_3c;
    return param_2;
  }
  *param_2 = 0xffff;
  param_2[1] = 0xffff;
  *(undefined2 *)(param_2 + 2) = 0xff;
  return param_2;
}



void FUN_005d90a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x0046b930(&uStack_1c,uStack_14);
  uStack_8 = 0;
  func_0x005d73a0(param_1,param_2,param_3,param_4);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005d9160(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x0046b930(&uStack_1c,uStack_14);
  uStack_8 = 0;
  func_0x005d7550(param_1,param_2);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005d9220(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x0046b930(&uStack_1c,uStack_14);
  uStack_8 = 0;
  func_0x005d7510(param_1,param_2);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005d92e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onZoomChange",0xc,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x004afff0(&uStack_28,&stack0x00000004,&stack0x00000008);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_005d93a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onCameraPositionChange",0x16,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x0047ac20(&uStack_28,param_1,param_2);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005d9460(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 **appuStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecdfd8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_14 = uVar1;
  FUN_0085b8a0(param_2,param_3);
  func_0x0080ff70(&piStack_20,uVar1);
  uStack_8._1_3_ = 0;
  piStack_2c = piStack_1c;
  piVar4 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar4 + 0x2c);
      uStack_28 = 1;
      pppuVar3 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar3 = (undefined4 ***)appuStack_44[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar3,uStack_34,&DAT_01141eec,4);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar1 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar1 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar4 + 0x2c);
        uStack_28 = 2;
        pppuVar3 = appuStack_5c;
        if (0xf < uStack_48) {
          pppuVar3 = (undefined4 ***)appuStack_5c[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar3,uStack_4c,"max-zoom",8);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar1 = uStack_48;
        if (0xf < uStack_48) {
          func_0x0046b1f0(appuStack_5c,appuStack_5c[0],uStack_48);
          uVar1 = extraout_ECX_00;
        }
        uStack_4c = 0;
        uStack_48 = 0xf;
        appuStack_5c[0] = (undefined4 **)((uint)appuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 3;
          func_0x00469da0(*piVar4 + 0x2c);
          uStack_28 = 4;
          pppuVar3 = appuStack_74;
          if (0xf < uStack_60) {
            pppuVar3 = (undefined4 ***)appuStack_74[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar3,uStack_64,"min-zoom",8);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar1 = uStack_60;
          if (0xf < uStack_60) {
            func_0x0046b1f0(appuStack_74,appuStack_74[0],uStack_60);
            uVar1 = extraout_ECX_01;
          }
          uStack_64 = 0;
          uStack_60 = 0xf;
          appuStack_74[0] = (undefined4 **)((uint)appuStack_74[0] & 0xffffff00);
          if (cStack_21 != '\0') {
            uVar2 = func_0x005cc550(uVar1);
            *(undefined4 *)(param_1 + 0x3c4) = uVar2;
          }
        }
        else {
          uVar2 = func_0x005cc550(uVar1);
          *(undefined4 *)(param_1 + 0x3c8) = uVar2;
        }
      }
      else {
        uVar2 = func_0x005cc550(uVar1);
        FUN_005d8b60(uVar2);
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piStack_2c);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_005d9990(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  return param_1;
}



undefined4 __thiscall FUN_005d9b70(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecdf1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00851fd0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3a8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005d9bd0(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfStack_34;
  int iStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  float *pfStack_18;
  int iStack_14;
  float *pfStack_10;
  int iStack_c;
  
  if (param_2 == 1) {
    pfVar4 = (float *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x200));
    iVar8 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
    iStack_2c = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
    iVar5 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
    iVar9 = (int)pfVar4 + iStack_2c;
    iVar6 = iVar5 + iVar8;
    iVar7 = iStack_2c - (int)pfVar4;
    if (12.5 <= *(float *)(param_1 + 0x3a0)) {
      pfStack_28 = (float *)(param_1 + 0x11c);
      pfStack_34 = (float *)(iStack_2c + 1);
    }
    else {
      pfStack_10 = (float *)(iVar9 / 2);
      iVar10 = (int)*(float *)(param_1 + 0x3a0);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      pfStack_18 = (float *)((int)pfStack_10 -
                            (int)((double)(((iStack_2c - iVar7 / 2) - (int)pfVar4) * iVar10) * -0.08
                                 ));
      pfStack_34 = (float *)(iStack_2c + 1);
      iStack_c = iVar6 / 2;
      pfStack_28 = (float *)(param_1 + 0x11c);
      pfStack_20 = pfStack_34;
      iStack_1c = iVar5;
      iStack_14 = iVar5;
      func_0x005d99c0(&pfStack_10,&pfStack_20,&pfStack_18,pfStack_28);
    }
    fVar1 = *(float *)(param_1 + 0x3a0);
    if (fVar1 < 37.5) {
      pfStack_10 = pfStack_34;
      iVar10 = (int)(fVar1 - 12.5);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      iStack_c = iVar5 - (int)((double)(iVar10 * (iVar8 - iVar5)) * -0.04);
      pfStack_18 = pfStack_34;
      iStack_14 = iVar8 + 1;
      pfStack_20 = (float *)(iVar9 / 2);
      iStack_1c = iVar6 / 2;
      func_0x005d99c0(&pfStack_20,&pfStack_18,&pfStack_10,param_1 + 0x11c);
    }
    pfStack_34 = (float *)(param_1 + 0x3a0);
    fVar1 = *(float *)(param_1 + 0x3a0);
    if (fVar1 < 62.5) {
      iVar10 = (int)(fVar1 - 37.5);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      pfStack_10 = (float *)((iStack_2c - (int)((double)(iVar10 * iVar7) * 0.04)) + 1);
      pfStack_20 = (float *)(iVar9 / 2);
      iStack_14 = iVar8 + 1;
      iStack_1c = iVar6 / 2;
      pfStack_18 = pfVar4;
      iStack_c = iStack_14;
      func_0x005d99c0(&pfStack_20,&pfStack_18,&pfStack_10,param_1 + 0x11c);
    }
    pfVar2 = pfStack_34;
    pfStack_20 = (float *)(param_1 + 0x11c);
    pfStack_18 = (float *)(param_1 + 0x40);
    if (*pfStack_34 < 87.5) {
      iVar7 = (int)(*pfStack_34 - 62.5);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iStack_c = (iVar8 - (int)((double)(iVar7 * (iVar8 - iVar5)) * 0.04)) + 1;
      pfStack_34 = (float *)(iVar9 / 2);
      iStack_30 = (iVar5 + iVar8) / 2;
      pfStack_28 = pfVar4;
      iStack_24 = iVar5;
      pfStack_10 = pfVar4;
      func_0x005d99c0(&pfStack_34,&pfStack_28,&pfStack_10,param_1 + 0x11c);
      pfStack_28 = pfStack_20;
    }
    pfVar3 = pfStack_18;
    if (*pfVar2 < 100.0) {
      iVar7 = (int)(*pfVar2 - 87.5);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      pfStack_10 = (float *)((int)pfVar4 -
                            (int)((double)(((iStack_2c - (int)pfVar4) / 2) * iVar7) * -0.08));
      pfStack_20 = (float *)((iStack_2c + (int)pfVar4) / 2);
      iStack_1c = (iVar8 + iVar5) / 2;
      pfStack_18 = pfStack_20;
      iStack_14 = iVar5;
      iStack_c = iVar5;
      func_0x005d99c0(&pfStack_20,&pfStack_18,&pfStack_10,pfStack_28);
    }
    func_0x00869510(pfVar3);
    func_0x00867470(pfVar3);
    func_0x008675b0(pfVar3);
    func_0x0086b280(pfVar3);
  }
  return;
}



void __thiscall FUN_005da030(int param_1,float param_2)

{
  if (100.0 <= param_2) {
    param_2 = 100.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x3a0) = param_2;
  return;
}



void FUN_005da060(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 ***pppuVar3;
  uint extraout_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  float in_XMM0_Da;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece116;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  uStack_14 = uVar2;
  FUN_0085b8a0(param_1,param_2);
  func_0x0080ff70(&piStack_20,uVar2);
  iStack_8 = 0;
  piStack_2c = piStack_1c;
  piVar4 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      iStack_8._0_1_ = 1;
      func_0x00469da0(*piVar4 + 0x2c);
      uStack_24 = 1;
      pppuVar3 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar3 = (undefined4 ***)appuStack_44[0];
      }
      cVar1 = func_0x0046cf20(pppuVar3,uStack_34,"percent",7);
      uStack_24 = 0;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      uVar2 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar2 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cVar1 != '\0') {
        func_0x005bebe0(uVar2);
        if (100.0 <= in_XMM0_Da) {
          in_XMM0_Da = 100.0;
        }
        if (in_XMM0_Da <= 0.0) {
          in_XMM0_Da = 0.0;
        }
        *(float *)(iStack_28 + 0x3a0) = in_XMM0_Da;
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piStack_2c);
  }
  iStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_005da1c0(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb9f6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piVar1 = *(int **)(param_1 + 0x3a4);
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
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005da270(int param_1,int param_2)

{
  int *piVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  if (param_2 == 1) {
    piVar1 = (int *)(param_1 + 0x40);
    if (0.003 < *(float *)(param_1 + 0x128)) {
      func_0x008673d0(piVar1);
    }
    func_0x00869510(piVar1);
    if (*(char *)(param_1 + 0x3bc) != '\0') {
      if (*(int *)(param_1 + 0x3a0) != 0) {
        iStack_1c = *(int *)(param_1 + 0x200) + *piVar1;
        iStack_18 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
        iStack_14 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
        iStack_10 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
        func_0x004723b0(&iStack_1c,param_1 + 0x3a0,&stack0xffffffd4,param_1 + 0x3ac);
      }
    }
    func_0x00867470(piVar1);
    func_0x008675b0(piVar1);
    func_0x0086b280(piVar1);
  }
  return;
}



void __thiscall FUN_005da360(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece1b7;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  if (DAT_0145d7d0 != '\0') {
    *(int *)(param_1 + 0x3a8) = param_2;
    if (param_2 == 0) {
      uStack_20 = 0;
      iStack_8 = param_2;
      func_0x0046ffa0(&uStack_20);
      iStack_8 = 0xffffffff;
      piVar2 = uStack_20._4_4_;
      if (uStack_20._4_4_ != (int *)0x0) {
        LOCK();
        iVar4 = uStack_20._4_4_[1] + -1;
        uStack_20._4_4_[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)*uStack_20._4_4_;
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
    }
    else {
      uStack_20 = 0;
      func_0x005b62c0(&uStack_20,param_2,uStack_18);
      iStack_8 = 1;
      if ((int)uStack_20 == 0) {
        uStack_2c = 0;
        puVar5 = &uStack_2c;
        piStack_28 = (int *)0x0;
        iStack_8 = 3;
        uVar6 = 2;
      }
      else {
        puVar5 = (undefined4 *)func_0x00589900();
        iStack_8 = CONCAT31(iStack_8._1_3_,2);
        uVar6 = 1;
      }
      uStack_24 = uVar6;
      func_0x0046ffa0(puVar5);
      iStack_8 = 2;
      if ((uVar6 & 2) != 0) {
        uVar6 = uVar6 & 0xfffffffd;
        uStack_24 = uVar6;
        if (piStack_28 != (int *)0x0) {
          LOCK();
          iVar4 = piStack_28[1] + -1;
          piStack_28[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*piStack_28;
            _guard_check_icall();
            (*pcVar3)();
            LOCK();
            piVar2 = piStack_28 + 2;
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              pcVar3 = *(code **)(*piStack_28 + 4);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
        }
      }
      iStack_8 = 1;
      if ((uVar6 & 1) != 0) {
        uStack_24 = uVar6 & 0xfffffffe;
        FUN_00468340();
      }
      iStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005da520(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 *puVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [16];
  undefined4 **appuStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 **appuStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 **appuStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece238;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_14 = uVar4;
  FUN_0085b8a0(param_1,param_2);
  func_0x0080ff70(&piStack_20,uVar4);
  uStack_8._1_3_ = 0;
  piStack_30 = piStack_1c;
  piVar8 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      uStack_8._0_1_ = 1;
      func_0x00469da0(*piVar8 + 0x2c);
      uStack_28 = 1;
      pppuVar6 = appuStack_48;
      if (0xf < uStack_34) {
        pppuVar6 = (undefined4 ***)appuStack_48[0];
      }
      cStack_21 = func_0x0046cf20(pppuVar6,uStack_38,"sprite-id",9);
      uStack_28 = 0;
      uStack_8._0_1_ = 0;
      uVar4 = uStack_34;
      if (0xf < uStack_34) {
        func_0x0046b1f0(appuStack_48,appuStack_48[0],uStack_34);
        uVar4 = extraout_ECX;
      }
      uStack_38 = 0;
      uStack_34 = 0xf;
      appuStack_48[0] = (undefined4 **)((uint)appuStack_48[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        uStack_8._0_1_ = 2;
        func_0x00469da0(*piVar8 + 0x2c);
        uStack_28 = 2;
        pppuVar6 = appuStack_60;
        if (0xf < uStack_4c) {
          pppuVar6 = (undefined4 ***)appuStack_60[0];
        }
        cStack_21 = func_0x0046cf20(pppuVar6,uStack_50,"sprite-visible",0xe);
        uStack_28 = 0;
        uStack_8._0_1_ = 0;
        uVar4 = uStack_4c;
        if (0xf < uStack_4c) {
          func_0x0046b1f0(appuStack_60,appuStack_60[0],uStack_4c);
          uVar4 = extraout_ECX_00;
        }
        uStack_50 = 0;
        uStack_4c = 0xf;
        appuStack_60[0] = (undefined4 **)((uint)appuStack_60[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          uStack_8._0_1_ = 3;
          func_0x00469da0(*piVar8 + 0x2c);
          uStack_28 = 4;
          pppuVar6 = appuStack_78;
          if (0xf < uStack_64) {
            pppuVar6 = (undefined4 ***)appuStack_78[0];
          }
          cStack_21 = func_0x0046cf20(pppuVar6,uStack_68,"sprite-color",0xc);
          uStack_28 = 0;
          uStack_8._0_1_ = 0;
          uVar4 = uStack_64;
          if (0xf < uStack_64) {
            func_0x0046b1f0(appuStack_78,appuStack_78[0],uStack_64);
            uVar4 = extraout_ECX_01;
          }
          uStack_68 = 0;
          uStack_64 = 0xf;
          appuStack_78[0] = (undefined4 **)((uint)appuStack_78[0] & 0xffffff00);
          if (cStack_21 != '\0') {
            puVar7 = (undefined4 *)func_0x005d33b0(auStack_88,uVar4);
            uVar5 = *puVar7;
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(undefined4 *)(iStack_2c + 0x3b0) = puVar7[1];
            *(undefined4 *)(iStack_2c + 0x3ac) = uVar5;
            *(undefined4 *)(iStack_2c + 0x3b4) = uVar1;
            *(undefined4 *)(iStack_2c + 0x3b8) = uVar2;
          }
        }
        else {
          uVar3 = func_0x005bee00(uVar4);
          *(undefined1 *)(iStack_2c + 0x3bc) = uVar3;
        }
      }
      else {
        uVar5 = func_0x005da7c0(uVar4);
        FUN_005da360(uVar5);
      }
      piVar8 = piVar8 + 2;
    } while (piVar8 != piStack_30);
  }
  uStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_005da9d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



void __thiscall FUN_005dabf0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [160];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece3b4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  memset(auStack_c4,0,0xb0);
  func_0x004687a0(1,uVar1);
  uStack_8 = 1;
  func_0x0046b6e0(auStack_b4,"Frames: ");
  uVar2 = func_0x005b0d50(param_1[5],&DAT_01141f68);
  func_0x0046b6e0(uVar2);
  uVar2 = func_0x00482d80(param_1[1],&DAT_01141f68);
  func_0x0046b6e0(uVar2);
  func_0x00482d80(*param_1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0046a470(param_2);
  uStack_8 = 0;
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_005dadd0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0x10,uVar3);
    puVar1 = puVar2;
  }
  func_0x008ab812(*param_1,0x10,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall
FUN_005daef0(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  *param_8 = param_6;
  iVar1 = *param_5;
  uStack_10 = 0;
  while( true ) {
    if (iVar1 == param_4) {
      FUN_008ab370();
      return;
    }
    if ((param_6 == param_7) ||
       (iVar1 = func_0x00e73ee4(param_6,iVar1,param_4 - iVar1,&uStack_10,param_1 + 8), iVar1 == -2))
    break;
    if (iVar1 == -1) {
      FUN_008ab370();
      return;
    }
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *param_5 = *param_5 + iVar1;
    *param_8 = *param_8 + 2;
    iVar1 = *param_5;
    param_6 = *param_8;
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_005dafb0(int param_1,undefined4 *param_2,int param_3,undefined2 *param_4,int *param_5,
            int param_6,int param_7,int *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  undefined2 *puVar4;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar4 = (undefined2 *)*param_5;
  if ((puVar4 == param_4) || (param_6 == param_7)) {
LAB_005db081:
    FUN_008ab370();
    return;
  }
  do {
    if (param_7 - param_6 < 5) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      _Size = func_0x00e72f9e(auStack_10,*puVar4,param_2,param_1 + 8);
      if ((int)_Size < 0) goto LAB_005db0ae;
      if (param_7 - *param_8 < (int)_Size) {
        *param_2 = uVar1;
        param_2[1] = uVar2;
        goto LAB_005db081;
      }
      memcpy((void *)*param_8,auStack_10,_Size);
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + _Size;
    }
    else {
      iVar3 = func_0x00e72f9e(param_6,*puVar4,param_2,param_1 + 8);
      if (iVar3 < 0) {
LAB_005db0ae:
        FUN_008ab370();
        return;
      }
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + iVar3;
    }
    puVar4 = (undefined2 *)*param_5;
    param_6 = *param_8;
    if ((puVar4 == param_4) || (param_6 == param_7)) goto LAB_005db081;
  } while( true );
}



void __thiscall FUN_005db0d0(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = func_0x00e72f9e(auStack_10,0,param_2,param_1 + 8);
  if (iVar3 < 1) {
    FUN_008ab370();
    return;
  }
  _Size = iVar3 - 1;
  if (param_4 - *param_5 < (int)_Size) {
    *param_2 = uVar1;
    param_2[1] = uVar2;
    FUN_008ab370();
    return;
  }
  if (0 < (int)_Size) {
    memcpy((void *)*param_5,auStack_10,_Size);
    *param_5 = *param_5 + _Size;
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_005db190(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c [4];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  iVar2 = param_3;
  if (param_5 != 0) {
    do {
      if (param_3 == param_4) break;
      iVar1 = func_0x00e73ee4(auStack_c,param_3,param_4 - param_3,param_2,param_1 + 8);
      if (iVar1 < 0) break;
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      param_3 = param_3 + iVar1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  FUN_008ab370(iVar2);
  return;
}



undefined4 __fastcall FUN_005db210(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



bool __fastcall FUN_005db220(int param_1)

{
  return *(int *)(param_1 + 0xc) == 1;
}



undefined4 * __thiscall FUN_005db230(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec808d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::codecvt<>::vftable;
  *param_1 = std::codecvt_base::vftable;
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_005db4f0(undefined4 param_1)

{
  FUN_005ee340(4,param_1);
  return;
}



undefined1 __fastcall FUN_005db640(int param_1)

{
  return *(undefined1 *)(param_1 + 0x7d);
}



undefined4 __thiscall FUN_005db650(undefined4 param_1,byte param_2)

{
  func_0x005db510();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



undefined4 FUN_005db680(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 auStack_2c [5];
  uint uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece53e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  func_0x005db430(auStack_2c,uVar1);
  uStack_8 = 1;
  func_0x00585e70(param_1);
  uStack_14 = 1;
  uStack_8 = 0;
  if (7 < uStack_18) {
    func_0x005895e0(auStack_2c,auStack_2c[0],uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4
FUN_005db840(undefined4 param_1,LPCSTR param_2,int param_3,int *param_4,LPWSTR param_5,int param_6,
            undefined4 *param_7)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = AreFileApisANSI();
  iVar2 = MultiByteToWideChar((uint)(BVar1 == 0),1,param_2,param_3 - (int)param_2,param_5,
                              param_6 - (int)param_5 >> 1);
  if (iVar2 == 0) {
    return 2;
  }
  *param_4 = param_3;
  *param_7 = param_5 + iVar2;
  param_5[iVar2] = L'\0';
  return 0;
}



undefined4
FUN_005db8a0(undefined4 param_1,LPCWSTR param_2,int param_3,int *param_4,LPSTR param_5,int param_6,
            undefined4 *param_7)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = AreFileApisANSI();
  iVar2 = WideCharToMultiByte((uint)(BVar1 == 0),0x400,param_2,param_3 - (int)param_2 >> 1,param_5,
                              param_6 - (int)param_5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar2 == 0) {
    return 2;
  }
  *param_4 = param_3;
  *param_7 = param_5 + iVar2;
  param_5[iVar2] = '\0';
  return 0;
}



undefined4 FUN_005db900(void)

{
  return 0;
}



undefined4 * __thiscall FUN_005db910(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ece5e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::codecvt<>::vftable;
  *param_1 = std::codecvt_base::vftable;
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_005dbbc0(undefined4 *param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabf6d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00463b50(param_2);
  *param_1 = boost::process::v1::process_error::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_005dc360(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_58;
  code *pcStack_54;
  undefined4 *puStack_50;
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ece88d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((((param_1 == 2) || (param_1 == 0xf)) && (DAT_0145f250 == '\0')) &&
     ((DAT_0145dc6d == '\0' && (DAT_0145dc6e == '\0')))) {
    DAT_0145f250 = '\x01';
    pppuStack_34 = &ppuStack_58;
    ppuStack_58 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_54 = FUN_0056f550;
    puStack_50 = &DAT_0145dbf0;
    uStack_8 = 1;
    auStack_30[4] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    auStack_30[5] = 0;
    func_0x0046bc40("exitSignalHandler",0x11,uVar1);
    uStack_8._0_1_ = 2;
    FUN_005e5070(auStack_18,auStack_30,&ppuStack_58,0);
    FUN_00468340();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    func_0x00464b40();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Removing unreachable block (ram,0x005dc76d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005dc490(int *param_1)

{
  int *piVar1;
  WCHAR WVar2;
  int *****pppppiVar3;
  undefined4 *puVar4;
  int ******ppppppiVar5;
  int *******pppppppiVar6;
  uint uVar7;
  LPWSTR pWVar8;
  LPWSTR pWVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 ****ppppuVar13;
  int ********ppppppppiVar14;
  uintptr_t uVar15;
  int iVar16;
  int *piVar17;
  int *unaff_FS_OFFSET;
  code *pcVar18;
  code *pcVar19;
  undefined4 ***pppuStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint auStack_64 [7];
  undefined8 uStack_48;
  uint uStack_40;
  int *******pppppppiStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uintptr_t uStack_24;
  int *******pppppppiStack_20;
  LPWSTR *ppWStack_1c;
  LPWSTR *ppWStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece958;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar19 = FUN_005dc360;
  uStack_40 = 0;
  uStack_14 = uVar7;
  signal(0xf);
  pcVar18 = FUN_005dc360;
  signal(2);
  uStack_48._4_4_ = (int ********)func_0x00e70415(1,pcVar18,pcVar19,uVar7);
  uStack_8 = 0;
  func_0x00e743f8(&uStack_24,&uStack_48);
  if (pppppppiStack_20 != (int *******)0x0) {
    pppppiVar3 = (*pppppppiStack_20)[2];
    _guard_check_icall();
    ppWStack_18 = (LPWSTR *)(*(code *)pppppiVar3)();
    if (ppWStack_18 != (LPWSTR *)0x0) {
      pcVar18 = *(code **)*ppWStack_18;
      _guard_check_icall(1);
      (*pcVar18)();
    }
  }
  uStack_8 = 0xffffffff;
  if (uStack_48._4_4_ != (int ********)0x0) {
    pcVar18 = *(code **)((int)*uStack_48._4_4_ + 8);
    _guard_check_icall();
    ppWStack_18 = (LPWSTR *)(*pcVar18)();
    if (ppWStack_18 != (LPWSTR *)0x0) {
      pcVar18 = *(code **)*ppWStack_18;
      _guard_check_icall(1);
      (*pcVar18)();
    }
  }
  ppppppppiVar14 = &pppppppiStack_20;
  pWVar8 = GetCommandLineW();
  ppWStack_18 = CommandLineToArgvW(pWVar8,(int *)ppppppppiVar14);
  if (ppWStack_18 != (LPWSTR *)0x0) {
    if (*param_1 != param_1[1]) {
      func_0x004e7c10(*param_1,param_1[1],param_1);
      param_1[1] = *param_1;
    }
    iVar16 = 0;
    if (0 < (int)pppppppiStack_20) {
      do {
        pWVar8 = ppWStack_18[iVar16];
        auStack_64[4] = 0;
        auStack_64[0] = 0;
        auStack_64[1] = 0;
        auStack_64[2] = 0;
        auStack_64[3] = 0;
        auStack_64[5] = 0;
        uStack_48._4_4_ = (int ********)(pWVar8 + 1);
        pWVar9 = pWVar8;
        do {
          WVar2 = *pWVar9;
          pWVar9 = pWVar9 + 1;
        } while (WVar2 != L'\0');
        func_0x005dd9e0(pWVar8,(int)pWVar9 - (int)uStack_48._4_4_ >> 1);
        uStack_8 = 1;
        uVar10 = func_0x0083c780();
        uStack_8._0_1_ = 2;
        func_0x005a9870(uVar10);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if (0xf < uStack_68) {
          func_0x0046b1f0(&pppuStack_7c,pppuStack_7c,uStack_68);
        }
        uStack_6c = 0;
        uStack_68 = 0xf;
        pppuStack_7c = (undefined4 ***)((uint)pppuStack_7c & 0xffffff00);
        uStack_8 = 0xffffffff;
        if (7 < auStack_64[5]) {
          func_0x005895e0(auStack_64,auStack_64[0],auStack_64[5]);
        }
        auStack_64[4] = 0;
        iVar16 = iVar16 + 1;
        auStack_64[0] = auStack_64[0] & 0xffff0000;
        auStack_64[5] = 7;
      } while (iVar16 < (int)pppppppiStack_20);
    }
  }
  DAT_0145db18 = 1;
  ppWStack_18 = (LPWSTR *)0x0;
  uStack_8._0_1_ = 3;
  uStack_8._1_3_ = 0;
  ppWStack_18 = (LPWSTR *)func_0x008ab47d(8);
  *ppWStack_18 = (LPWSTR)FUN_005e09a0;
  ppWStack_18[1] = (LPWSTR)&DAT_0145dab0;
  uStack_40 = 4;
  uStack_24 = _beginthreadex((void *)0x0,0,FUN_005e0eb0,ppWStack_18,0,(uint *)&pppppppiStack_20);
  if (uStack_24 == 0) {
    pppppppiStack_20 = (int *******)0x0;
    func_0x00e7304a(6);
  }
  else {
    ppWStack_18 = (LPWSTR *)0x0;
    uStack_40 = 0;
    uStack_8._0_1_ = 4;
    uStack_8._1_3_ = 0;
    uStack_48._4_4_ = (int ********)DAT_0145dab8;
    if (DAT_0145dabc != 0xfffffff) {
      ppWStack_1c = &DAT_0145dab8;
      uStack_8 = 5;
      ppWStack_18 = (LPWSTR *)0x0;
      puVar11 = (undefined4 *)func_0x008ab47d(0x10);
      puVar11[2] = uStack_24;
      puVar11[3] = pppppppiStack_20;
      DAT_0145dabc = DAT_0145dabc + 1;
      puVar4 = *(undefined4 **)((int)uStack_48._4_4_ + 4);
      *puVar11 = uStack_48._4_4_;
      puVar11[1] = puVar4;
      *(undefined4 **)((int)uStack_48._4_4_ + 4) = puVar11;
      *puVar4 = puVar11;
      pppppppiStack_20 = (int *******)0x0;
      uStack_24 = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_2c = 0;
      uStack_28 = 0xf;
      pppppppiStack_3c = (int *******)0x0;
      uStack_8 = 8;
      iVar16 = *param_1;
      ppWStack_18 = (LPWSTR *)0x1;
      if (1 < (uint)((param_1[1] - iVar16 >> 3) * -0x55555555)) {
        pppppppiStack_20 = (int *******)0x18;
        do {
          piVar17 = (int *)(iVar16 + (int)pppppppiStack_20);
          func_0x0046a880(&DAT_0113c2f0,1);
          piVar1 = piVar17 + 4;
          if (0xf < (uint)piVar17[5]) {
            piVar17 = (int *)*piVar17;
          }
          func_0x0046a880(piVar17,*piVar1);
          iVar16 = *param_1;
          ppWStack_18 = (LPWSTR *)((int)ppWStack_18 + 1);
          pppppppiStack_20 = pppppppiStack_20 + 6;
        } while (ppWStack_18 < (uint)((param_1[1] - iVar16 >> 3) * -0x55555555));
      }
      uVar7 = uStack_40;
      if (uStack_2c != 0) {
        uStack_6c = 0;
        uStack_68 = 0;
        pppuStack_7c = (undefined4 ****)0x0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        func_0x0046bc40("Startup options: %s",0x13);
        uStack_8._0_1_ = 10;
        ppppuVar13 = &pppuStack_7c;
        if (0xf < uStack_68) {
          ppppuVar13 = (undefined4 ****)pppuStack_7c;
        }
        iVar16 = func_0x004881b0(ppppuVar13,&pppppppiStack_3c);
        iVar12 = iVar16 + 1;
        if (SCARRY4(iVar16,1)) {
          iVar12 = -1;
        }
        func_0x00469c80(iVar12,0);
        uVar7 = uStack_40;
        uStack_40 = uStack_40 | 2;
        ppppuVar13 = &pppuStack_7c;
        if (0xf < uStack_68) {
          ppppuVar13 = (undefined4 ****)pppuStack_7c;
        }
        uVar10 = func_0x004881b0(ppppuVar13,&pppppppiStack_3c);
        func_0x004698c0(uVar10,0);
        FUN_005ee340(1,auStack_64);
        uVar7 = uVar7 & 0xfffffffd;
        uStack_8._0_1_ = 9;
        uStack_40 = uVar7;
        if (0xf < auStack_64[5]) {
          func_0x0046b1f0(auStack_64,auStack_64[0],auStack_64[5]);
        }
        auStack_64[4] = 0;
        auStack_64[5] = 0xf;
        auStack_64[0] = auStack_64[0] & 0xffffff00;
        uStack_8 = CONCAT31(uStack_8._1_3_,8);
        if (0xf < uStack_68) {
          func_0x0046b1f0(&pppuStack_7c,pppuStack_7c,uStack_68);
        }
        uStack_6c = 0;
        uStack_68 = 0xf;
        pppuStack_7c = (undefined4 ***)((uint)pppuStack_7c & 0xffffff00);
      }
      if ((int ********)(auStack_64[6] + 100) != &pppppppiStack_3c) {
        ppppppppiVar14 = &pppppppiStack_3c;
        if (0xf < uStack_28) {
          ppppppppiVar14 = (int ********)pppppppiStack_3c;
        }
        func_0x0046a660(ppppppppiVar14,uStack_2c);
      }
      uStack_48._4_4_ = &pppppppiStack_3c;
      if (0xf < uStack_28) {
        uStack_48._4_4_ = (int ********)pppppppiStack_3c;
      }
      if (((6 < uStack_2c) &&
          (iVar16 = uStack_2c + (int)uStack_48._4_4_,
          iVar12 = func_0x00e727d0(uStack_48._4_4_,iVar16,"-mobile",7), iVar12 != iVar16)) &&
         (iVar12 - (int)uStack_48._4_4_ != -1)) {
        *(undefined1 *)(auStack_64[6] + 0x7f) = 1;
      }
      uVar10 = func_0x005e3b20();
      uStack_8._0_1_ = 0xb;
      func_0x0046ffa0(uVar10);
      uStack_8._0_1_ = 8;
      pppppppiStack_20 = (int *******)uStack_48._4_4_;
      if (uStack_48._4_4_ != (int ********)0x0) {
        LOCK();
        pppppppiVar6 = (int *******)((int)uStack_48._4_4_[1] + -1);
        uStack_48._4_4_[1] = pppppppiVar6;
        UNLOCK();
        if (pppppppiVar6 == (int *******)0x0) {
          ppppppiVar5 = **uStack_48._4_4_;
          _guard_check_icall();
          (*(code *)ppppppiVar5)();
          LOCK();
          ppppppppiVar14 = (int ********)(pppppppiStack_20 + 2);
          pppppppiVar6 = *ppppppppiVar14;
          *ppppppppiVar14 = (int *******)((int)*ppppppppiVar14 + -1);
          UNLOCK();
          if (pppppppiVar6 == (int *******)0x1) {
            ppppppiVar5 = (int ******)(*pppppppiStack_20)[1];
            _guard_check_icall();
            (*(code *)ppppppiVar5)();
          }
        }
      }
      func_0x00776ba0();
      func_0x00782610();
      if (DAT_0145ebe0 != '\0') {
LAB_005dca8b:
        uStack_8 = 0xffffffff;
        if (0xf < uStack_28) {
          func_0x0046b1f0(&pppppppiStack_3c,pppppppiStack_3c,uStack_28);
        }
        uStack_2c = 0;
        uStack_28 = 0xf;
        pppppppiStack_3c = (int *******)((uint)pppppppiStack_3c & 0xffffff00);
        *unaff_FS_OFFSET = iStack_10;
        pppuStack_7c = (undefined4 ***)0x5dcad3;
        FUN_008ab370();
        return;
      }
      DAT_0145ebe0 = '\x01';
      ppWStack_18 = (LPWSTR *)0x0;
      uStack_8._0_1_ = 0xc;
      ppWStack_18 = (LPWSTR *)func_0x008ab47d(4);
      uStack_40 = uVar7 | 1;
      *ppWStack_18 = (LPWSTR)&DAT_0145ebc8;
      uVar15 = _beginthreadex((void *)0x0,0,FUN_00821cc0,ppWStack_18,0,(uint *)((int)&uStack_48 + 4)
                             );
      ppppppppiVar14 = uStack_48._4_4_;
      uStack_48._0_4_ = uVar15;
      if (uVar15 != 0) {
        uStack_40 = uVar7 & 0xfffffffe;
        ppWStack_18 = (LPWSTR *)0x0;
        if (DAT_0145ebe8 == (int *****)0x0) {
          uStack_48._0_4_ = 0;
          uStack_48._4_4_ = (int ********)0x0;
          DAT_0145ebe8 = (int *****)ppppppppiVar14;
          _DAT_0145ebe4 = uVar15;
        }
        else {
          uStack_8 = CONCAT31(uStack_8._1_3_,0xd);
          terminate();
        }
        goto LAB_005dca8b;
      }
      goto LAB_005dcaf1;
    }
  }
  func_0x00e701fa("list too long");
LAB_005dcaf1:
  uStack_48 = (ulonglong)(uintptr_t)uStack_48;
  func_0x00e7304a(6);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005dcb00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint auStack_40 [13];
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb96b5;
  auStack_40[0xc] = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_40 + 0xc);
  auStack_40[4] = 0;
  auStack_40[5] = 0;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  func_0x0046bc40("onTerminate",0xb,uVar3);
  uStack_8 = 0;
  auStack_40[10] = 0;
  auStack_40[6] = 0;
  auStack_40[7] = 0;
  auStack_40[8] = 0;
  auStack_40[9] = 0;
  auStack_40[0xb] = 0;
  func_0x0046bc40("g_app",5);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar3 = func_0x0049b8f0(auStack_40 + 6,auStack_40);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
  auStack_40[10] = 0;
  auStack_40[0xb] = 0xf;
  auStack_40[6] = auStack_40[6] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  FUN_005f3ae0();
  func_0x00470060();
  iVar2 = DAT_0145de34;
  func_0x0049a600(&DAT_0145de34,*(undefined4 *)(DAT_0145de34 + 4));
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  _DAT_0145de38 = 0;
  func_0x0077a550();
  pcVar1 = *(code **)(*param_1 + 0x14);
  _guard_check_icall();
  (*pcVar1)();
  func_0x005e41f0();
  *unaff_FS_OFFSET = auStack_40[0xc];
  return;
}



void __fastcall FUN_005dcc70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  func_0x0062e210();
  func_0x004a5fa0();
  *(int *)DAT_0145dcb8 = DAT_0145dcb8;
  *(int *)(DAT_0145dcb8 + 4) = DAT_0145dcb8;
  DAT_0145dcbc = 0;
  func_0x005e30a0();
  func_0x00e423c0();
  if (DAT_0145e9f0 != 0) {
    func_0x00d6c1a0(DAT_0145e9f0);
    DAT_0145e9f0 = 0;
  }
  if (DAT_0145ebe0 != '\0') {
    DAT_0145ebe0 = '\0';
    FUN_0081f890();
    if (DAT_0145ebdc != '\0') {
      LOCK();
      piVar1 = (int *)(*(int *)((DAT_0145ebd8 & 0xfffffffc) + 8) + 0x18);
      iVar2 = *piVar1 + -1;
      *piVar1 = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        func_0x0062e210();
      }
      DAT_0145ebdc = '\0';
    }
    if (DAT_0145ebe8 == 0) {
      uStack_10 = 100;
      uStack_c = 0;
      func_0x008306f0(&uStack_10);
      func_0x0062e210();
    }
    func_0x005e0860();
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
  signal(0xf);
  signal(2);
  return;
}



void FUN_005dcd70(void)

{
  func_0x007fb620();
  func_0x005e4320();
  func_0x007fb620();
  return;
}



void __fastcall FUN_005dcd90(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [7];
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece995;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x0046bc40("onExit",6,uVar1);
  uStack_8 = 0;
  auStack_28[4] = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[5] = 0;
  func_0x0046bc40("g_app",5);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar2 = func_0x0049b8f0(auStack_28,&uStack_40);
  if (0 < iVar2) {
    func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_28[5]) {
    func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
  }
  auStack_28[4] = 0;
  auStack_28[5] = 0xf;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_2c) {
    func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
  }
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void FUN_005dceb0(void)

{
  code *pcVar1;
  
  quick_exit(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_005dcec0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint auStack_44 [12];
  bool bStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece9d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_44[4] = 0;
  auStack_44[5] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  func_0x0046bc40("onClose",7,uVar2);
  uStack_8 = 0;
  auStack_44[10] = 0;
  auStack_44[6] = 0;
  auStack_44[7] = 0;
  auStack_44[8] = 0;
  auStack_44[9] = 0;
  auStack_44[0xb] = 0;
  func_0x0046bc40("g_app",5);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar3 = func_0x0049b8f0(auStack_44 + 6,auStack_44);
  if (iVar3 < 1) {
    bStack_11 = true;
  }
  else {
    iVar3 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    bStack_11 = iVar3 == 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_44[0xb]) {
    func_0x0046b1f0(auStack_44 + 6,auStack_44[6],auStack_44[0xb]);
  }
  auStack_44[10] = 0;
  auStack_44[0xb] = 0xf;
  auStack_44[6] = auStack_44[6] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < auStack_44[5]) {
    func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  if (bStack_11 != false) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    _guard_check_icall();
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_005dd000(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint auStack_54 [15];
  undefined **ppuStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecea36;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_54[6] = 0;
  auStack_54[0xd] = 0;
  auStack_54[0xb] = 0;
  auStack_54[0xc] = 0;
  auStack_54[7] = 0;
  auStack_54[8] = 0;
  auStack_54[9] = 0;
  auStack_54[10] = 0;
  uStack_14 = uVar3;
  FUN_005db680(auStack_54);
  uStack_8 = 1;
  func_0x005de1d0(uVar3);
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  auStack_54[6] = 0;
  uStack_8._0_1_ = 3;
  if (0xf < auStack_54[5]) {
    func_0x0046b1f0(auStack_54,auStack_54[0],auStack_54[5]);
  }
  auStack_54[4] = 0;
  auStack_54[5] = 0xf;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  auStack_54[0xe] = 0;
  ppuStack_18 = &PTR_vftable_012bc290;
  uStack_5c = 1;
  uStack_58 = 0;
  cVar2 = func_0x005dd8a0(&uStack_5c,auStack_54 + 0xe);
  if (cVar2 != '\0') {
    auStack_54[4] = 0;
    auStack_54[5] = 0;
    auStack_54[0] = 0;
    auStack_54[1] = 0;
    auStack_54[2] = 0;
    auStack_54[3] = 0;
    func_0x0046bc40("Updater restart error. Please restart application",0x31);
    uStack_8._0_1_ = 4;
    FUN_005ee340(4,auStack_54);
    uStack_8._0_1_ = 3;
    if (0xf < auStack_54[5]) {
      func_0x0046b1f0(auStack_54,auStack_54[0],auStack_54[5]);
    }
    auStack_54[4] = 0;
    auStack_54[5] = 0xf;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
  }
  auStack_54[0xd] = auStack_54[0xd] & 0xffffff00;
  pcVar1 = *(code **)(*param_1 + 0x1c);
  _guard_check_icall();
  (*pcVar1)();
  uStack_8 = 0xffffffff;
  func_0x005dc140();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * FUN_005dd190(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac47e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x0046bc40("windows",7,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_005ddbf0(undefined4 *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ecebbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[6] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[7] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[7] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[7] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  *param_1 = boost::exception_detail::clone_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005ddca0(undefined4 *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecec0b;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  FUN_00463b50(param_2 + 4);
  param_1[1] = boost::process::v1::process_error::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  FUN_0046c0d0(param_2 + 0x18);
  param_1[1] = boost::wrapexcept<>::vftable;
  param_1[6] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_005ddd40(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ecebbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[6] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[7] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[7] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[7] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  iStack_8 = 0xffffffff;
  *param_1 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_005dde00(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [52];
  
  FUN_005ddca0(param_1);
  func_0x00e87d2e(auStack_38,&DAT_012887c8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_005dde30(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecec4c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x30,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_005ddca0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



undefined4 * __thiscall FUN_005ddfb0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



TypeDescriptor * FUN_005de130(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005de140(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  return;
}



void Catch_005e0167(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x48);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x44);
  func_0x0056f3c0(uVar2,*puVar3,*(undefined4 *)(unaff_EBP + -0x40),uVar1);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x004e7c10(uVar2,*puVar3,uVar1);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x30);
  func_0x00e87d2e(0,0);
  func_0x0046e700();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  iVar4 = *(int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
  iVar5 = *(int *)(unaff_EBP + -0x48);
  *(int *)(unaff_EBP + -0x18) = iVar4 + iVar5 * 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x0056f3c0(iVar4 + iVar5 * 0x18,iVar5 * 0x30 + iVar4,iVar4,uVar1);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x44);
  func_0x005e0700(iVar4 + iVar5 * 0x18);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x30);
  func_0x004e7c10(uVar2,*puVar3,uVar1);
  *puVar3 = uVar2;
  func_0x00e87d2e(0,0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



void Catch_005e01b6(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  iVar2 = *(int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x30);
  iVar3 = *(int *)(unaff_EBP + -0x48);
  *(int *)(unaff_EBP + -0x18) = iVar2 + iVar3 * 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x0056f3c0(iVar2 + iVar3 * 0x18,iVar3 * 0x30 + iVar2,iVar2,uVar1);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar4 = *(undefined4 **)(unaff_EBP + -0x44);
  func_0x005e0700(iVar2 + iVar3 * 0x18);
  uVar5 = *(undefined4 *)(unaff_EBP + -0x30);
  func_0x004e7c10(uVar5,*puVar4,uVar1);
  *puVar4 = uVar5;
  func_0x00e87d2e(0,0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



undefined4 * __thiscall FUN_005e0830(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -1;
  puStack_c = &DAT_00ecebbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[5] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[6] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[6] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



undefined4 * __thiscall FUN_005e0840(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -6;
  puStack_c = &DAT_00ecebbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[1] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[1] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[-5] = std::exception::vftable;
  __std_exception_destroy(param_1 + -4);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



void __fastcall FUN_005e09a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int aiStack_44 [9];
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8._0_1_ = 0xff;
  iStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00ecf58d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = param_1 + 4;
  uStack_1c = ZEXT48(puVar1);
  iVar5 = func_0x00e7307f(puVar1,uStack_14);
  if (iVar5 == 0) {
    iVar5 = param_1[0xf];
    if (iVar5 != 0x7fffffff) {
      uStack_1c._0_5_ = CONCAT14(1,(uint)uStack_1c);
      iStack_8 = 0;
LAB_005e0a10:
      iVar5 = param_1[1];
      while (iVar5 == 0) {
        if (*(char *)(param_1 + 0x1a) == '\0') goto LAB_005e0b5c;
        func_0x00e73265(param_1 + 0x10,puVar1);
        iVar5 = param_1[1];
      }
      if (*(char *)(param_1 + 0x1a) == '\0') {
LAB_005e0b5c:
        iStack_8 = 0xffffffff;
        func_0x00e730b2(puVar1);
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      piStack_20 = (int *)0x0;
      iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
      iStack_8._0_1_ = 1;
      if (*(undefined4 **)(*(int *)*param_1 + 0x2c) != (undefined4 *)0x0) {
        pcVar2 = *(code **)**(undefined4 **)(*(int *)*param_1 + 0x2c);
        _guard_check_icall(aiStack_44);
        piStack_20 = (int *)(*pcVar2)();
      }
      piVar3 = *(int **)*param_1;
      iVar5 = *piVar3;
      param_1[1] = param_1[1] + -1;
      *(int *)piVar3[1] = iVar5;
      *(int *)(iVar5 + 4) = piVar3[1];
      iStack_8._0_1_ = 2;
      piVar4 = (int *)piVar3[0xb];
      if (piVar4 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar4 + 0x10);
        _guard_check_icall(CONCAT31((int3)((uint)*piVar4 >> 8),piVar4 != piVar3 + 2));
        (*pcVar2)();
        piVar3[0xb] = 0;
      }
      func_0x008ab812(piVar3,0x30);
      if (puVar1 == (undefined4 *)0x0) goto LAB_005e0b9f;
      func_0x00e730b2(puVar1);
      uStack_1c._0_5_ = (uint5)(uint)uStack_1c;
      if (piStack_20 == (int *)0x0) goto LAB_005e0b9a;
      pcVar2 = *(code **)(*piStack_20 + 8);
      _guard_check_icall();
      (*pcVar2)();
      func_0x005e0ce0();
      iVar5 = func_0x00e7307f(puVar1);
      if (iVar5 != 0) goto LAB_005e0b88;
      iVar5 = param_1[0xf];
      if (iVar5 != 0x7fffffff) {
        uStack_1c._0_5_ = CONCAT14(1,(uint)uStack_1c);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (piStack_20 != (int *)0x0) {
          pcVar2 = *(code **)(*piStack_20 + 0x10);
          _guard_check_icall(piStack_20 != aiStack_44);
          (*pcVar2)();
          piStack_20 = (int *)0x0;
        }
        goto LAB_005e0a10;
      }
    }
  }
  else {
LAB_005e0b88:
    iVar5 = func_0x00e7304a(5);
  }
  param_1[0xf] = iVar5 + -1;
  func_0x00e7304a(6);
LAB_005e0b9a:
  func_0x00e701bd();
LAB_005e0b9f:
  func_0x00585aa0(1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_005e0eb0(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 *puVar3;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecf5fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  pcVar1 = (code *)*param_1;
  puVar3 = param_1;
  _guard_check_icall(uVar2);
  (*pcVar1)();
  func_0x00e744e0();
  uStack_8 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    func_0x008ab812(param_1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar3,uVar2);
  return;
}



int __fastcall FUN_005e1cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecf86b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 != 0) {
    iVar6 = func_0x008ab37e(iVar6,uVar5);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
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
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
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
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



undefined4 * __thiscall FUN_005e1db0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



void thunk_FUN_0083f570(void)

{
  uint *puVar1;
  undefined1 auStack_10 [12];
  
  puVar1 = (uint *)func_0x0046ede0(auStack_10);
  func_0x00e87ec0(*puVar1 - DAT_0145e648,(puVar1[1] - DAT_0145e64c) - (uint)(*puVar1 < DAT_0145e648)
                  ,1000,0);
  return;
}



void thunk_FUN_0083f530(void)

{
  uint *puVar1;
  undefined1 auStack_10 [12];
  
  puVar1 = (uint *)func_0x0046ede0(auStack_10);
  func_0x00e87ec0(*puVar1 - DAT_0145e648,(puVar1[1] - DAT_0145e64c) - (uint)(*puVar1 < DAT_0145e648)
                  ,1000000,0);
  return;
}



int __thiscall FUN_005e2140(int param_1,byte param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecf953;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
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
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_005e22b2(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x38) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("Unable to parse configuration file \'%s\': ",0x29);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = func_0x00485670(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return &DAT_005e2354;
}



undefined1 * __fastcall FUN_005e2460(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [164];
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  uint uStack_3c;
  undefined4 auStack_28 [5];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecf9cd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x20) == 0) {
    *unaff_FS_OFFSET = iStack_10;
    return auStack_100;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  piVar1 = (int *)(param_1 + 0x10);
  if (piVar2 + 0x17 != piVar1) {
    iStack_44 = (int)piVar1;
    if (0xf < *(uint *)(param_1 + 0x24)) {
      iStack_44 = *piVar1;
    }
    puStack_40 = *(undefined4 **)(param_1 + 0x20);
    puStack_48 = (undefined4 *)0x5e24c2;
    func_0x0046a660();
  }
  pcVar3 = *(code **)(*piVar2 + 4);
  puStack_40 = auStack_28;
  iStack_44 = 0x5e24d3;
  _guard_check_icall();
  iStack_44 = 0x5e24d7;
  puStack_48 = (undefined4 *)(*pcVar3)();
  uStack_8 = 0;
  iStack_44 = puStack_48[4];
  if (0xf < (uint)puStack_48[5]) {
    puStack_48 = (undefined4 *)*puStack_48;
  }
  uStack_50 = 0x5e24f1;
  piStack_4c = piVar1;
  bVar4 = func_0x005fce40();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    uStack_50 = uStack_14;
    uStack_54 = auStack_28[0];
    puStack_58 = auStack_28;
    uStack_5c = 0x5e250f;
    func_0x0046b1f0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined1 *)(uint)bVar4;
}



void __fastcall FUN_005e2540(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iStack_14 = iVar1 + 0xc;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(uint *)(iVar1 + 0x14) != 0) {
    if (*(uint *)(iVar1 + 0x14) < *(uint *)(iVar1 + 0x28) >> 3) {
      func_0x00810680(**(undefined4 **)(iVar1 + 0x10),*(undefined4 **)(iVar1 + 0x10));
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x10);
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)*puVar2;
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      func_0x0080e4a0(uVar4);
      func_0x008ab812(puVar2,0x2c);
      puVar2 = puVar3;
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(int *)(*(int *)(iVar1 + 0x10) + 4) = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    iStack_14 = *(int *)(iVar1 + 0x10);
    func_0x0046c050(&iStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_005e2550(int param_1,int param_2)

{
  void *_Dst;
  undefined4 uVar1;
  undefined4 ***pppuVar2;
  int *unaff_FS_OFFSET;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 **appuStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecfa35;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      FUN_005e2b90(param_1);
    }
    else {
      uStack_1c = 0;
      func_0x00469da0(param_2,uStack_14);
      uStack_8 = 0;
      func_0x00469da0(param_1);
      uStack_8 = 3;
      uStack_1c = 0;
      _Dst = (void *)func_0x008ab47d(0x7c);
      uStack_8._0_1_ = 4;
      memset(_Dst,0,0x7c);
      uVar1 = func_0x0080d780();
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      func_0x00810870(uVar1);
      uStack_20 = 1;
      func_0x00810300(auStack_50);
      if ((undefined4 ***)((int)uStack_1c + 0x44) != appuStack_38) {
        pppuVar2 = appuStack_38;
        if (0xf < uStack_24) {
          pppuVar2 = (undefined4 ***)appuStack_38[0];
        }
        func_0x0046a660(pppuVar2,uStack_28);
      }
      *(undefined1 *)((int)uStack_1c + 0x78) = 1;
      uStack_8._0_1_ = 2;
      if (0xf < uStack_3c) {
        func_0x0046b1f0(auStack_50,auStack_50[0],uStack_3c);
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (0xf < uStack_24) {
        func_0x0046b1f0(appuStack_38,appuStack_38[0],uStack_24);
      }
      uStack_28 = 0;
      uStack_24 = 0xf;
      appuStack_38[0] = (undefined4 **)((uint)appuStack_38[0] & 0xffffff00);
      func_0x0080f7b0(&uStack_1c);
      uStack_20 = 0;
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x005e279f)
// WARNING: Removing unreachable block (ram,0x005e27ab)
// WARNING: Removing unreachable block (ram,0x005e27c3)

void FUN_005e26f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecfa75;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_005e2b90();
  if (param_2[1] != *param_2) {
    func_0x00469da0(param_1);
    uStack_8 = 0xffffffff;
    func_0x0080f400();
    uStack_8 = 1;
    iVar1 = param_2[1];
    for (iVar2 = *param_2; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
      func_0x005e2e70();
    }
    func_0x0080f7b0();
    uStack_8 = 0xffffffff;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



bool FUN_005e2800(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar5 = (int *)func_0x0080f520(auStack_18,param_1,uVar4);
  iVar1 = *piVar5;
  uStack_8 = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_14[1] + -1;
    piStack_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar3 = piStack_14[2] + -1;
      piStack_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piStack_14 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar1 != 0;
}



void FUN_005e28a0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecfac6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x0080f520(&uStack_1c,param_2,uStack_14);
  uStack_8 = 1;
  if ((int)uStack_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0);
    uStack_8 = uStack_8 & 0xffffff00;
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_005e29c2;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_005e29c2;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_005e29c2;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  else {
    func_0x005ba8a0(param_1);
    uStack_8 = uStack_8 & 0xffffff00;
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_005e29c2;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_005e29c2;
    pcVar4 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar4)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_005e29c2;
    pcVar4 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar4)();
LAB_005e29c2:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005e29f0(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint auStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ecfb26;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  iStack_8 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  func_0x0080f520(&uStack_28,param_2,uStack_14);
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int)uStack_28 != 0) {
    func_0x0080ff70(&iStack_20);
    iVar4 = iStack_1c;
    iStack_8._0_1_ = 2;
    for (iVar6 = iStack_20; iVar6 != iVar4; iVar6 = iVar6 + 8) {
      uVar5 = func_0x005ba8a0(auStack_44,0);
      iStack_8._0_1_ = 3;
      func_0x005a9870(uVar5);
      iStack_8._0_1_ = 2;
      if (0xf < uStack_30) {
        func_0x0046b1f0(auStack_44,auStack_44[0],uStack_30);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      auStack_44[0] = auStack_44[0] & 0xffffff00;
    }
    iStack_8._0_1_ = 1;
    if (iStack_20 != 0) {
      func_0x00485920(iStack_20);
      func_0x0046e710(iStack_20,iStack_18 - iStack_20 >> 3);
      iStack_20 = 0;
      iStack_1c = 0;
      iStack_18 = 0;
    }
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar3 = uStack_28._4_4_;
  if (uStack_28._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_28._4_4_[1] + -1;
    uStack_28._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_28._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1 + -1;
      *piVar1 = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005e2b90(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  func_0x0080f520(&uStack_20,param_1,uStack_18);
  uStack_8 = 0;
  if ((int)uStack_20 != 0) {
    func_0x0080f9f0(&uStack_20);
  }
  uStack_8 = 0xffffffff;
  piVar4 = uStack_20._4_4_;
  if (uStack_20._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_20._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005e2c50(undefined4 param_1,undefined4 param_2)

{
  FUN_005e2b90(param_1);
  FUN_005e2c80(param_1,param_2);
  return;
}



void FUN_005e2c80(undefined4 param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x008100a0(&uStack_1c,uStack_14);
  uStack_8 = 0;
  func_0x00810300(param_1);
  *(undefined1 *)(*param_2 + 0x78) = 1;
  func_0x0080f7b0(param_2);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_005e2d50(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac6ee;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0080f520(param_1,param_2,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_005e2db0(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x0080f520(&uStack_1c,param_1,uStack_14);
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005e3290(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *****pppppuVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 ****appppuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecfcd7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar3 = (undefined4 *)*puVar2;
  puStack_1c = param_2;
  do {
    if (puVar3 == puVar2) {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
LAB_005e336f:
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    uStack_8 = 1;
    func_0x00469da0(puVar3[2] + 0x10,uVar4);
    uStack_18 = 2;
    puVar6 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar6 = (undefined4 *)*param_3;
    }
    pppppuVar5 = appppuStack_34;
    if (0xf < uStack_20) {
      pppppuVar5 = (undefined4 *****)appppuStack_34[0];
    }
    cStack_11 = func_0x0046cf20(pppppuVar5,uStack_24,puVar6,param_3[4]);
    uStack_18 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < uStack_20) {
      func_0x0046b1f0(appppuStack_34,appppuStack_34[0],uStack_20);
    }
    uStack_24 = 0;
    uStack_20 = 0xf;
    appppuStack_34[0] = (undefined4 ****)((uint)appppuStack_34[0] & 0xffffff00);
    if (cStack_11 != '\0') {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
      if (puVar3[3] != 0) {
        LOCK();
        piVar1 = (int *)(puVar3[3] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puStack_1c = puVar3[2];
      puStack_1c[1] = puVar3[3];
      goto LAB_005e336f;
    }
    puVar3 = (undefined4 *)*puVar3;
    cStack_11 = 0;
  } while( true );
}



undefined4 * __thiscall FUN_005e33c0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int in_stack_00000018;
  uint in_stack_0000001c;
  uint auStack_2c [8];
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecfd2e;
  auStack_2c[7] = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_2c + 7);
  auStack_2c[6] = 0;
  uStack_8 = 1;
  if (in_stack_00000018 == 0) {
    auStack_2c[4] = 0;
    auStack_2c[5] = 0;
    auStack_2c[0] = 0;
    auStack_2c[1] = 0;
    auStack_2c[2] = 0;
    auStack_2c[3] = 0;
    func_0x0046bc40("Must provide a configuration file to load.",0x2a);
    uStack_8._0_1_ = 2;
    FUN_005ee340(3,auStack_2c);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < auStack_2c[5]) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
    }
    auStack_2c[4] = 0;
    auStack_2c[5] = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  else {
    cVar2 = func_0x005e2210(&param_3,uVar3);
    if (cVar2 != '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      if (param_1[1] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      auStack_2c[6] = 1;
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < in_stack_0000001c) {
        func_0x0046b1f0(&param_3,param_3,in_stack_0000001c);
      }
      goto LAB_005e3515;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  auStack_2c[6] = 1;
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < in_stack_0000001c) {
    uVar3 = in_stack_0000001c + 1;
    iVar4 = param_3;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(param_3 + -4);
      uVar3 = in_stack_0000001c + 0x24;
      if (0x1f < (param_3 - iVar4) - 4U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
LAB_005e3515:
  *unaff_FS_OFFSET = auStack_2c[7];
  return param_2;
}



int * FUN_005e3540(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecfd76;
  iStack_10 = *unaff_FS_OFFSET;
