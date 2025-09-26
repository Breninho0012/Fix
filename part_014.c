  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  FUN_005e3630(param_1,param_2);
  uStack_8 = 0;
  if (*param_1 == 0) {
    uVar4 = func_0x005e3b20(uVar3);
    uStack_8 = 1;
    func_0x0046ffa0(uVar4);
    uStack_8 = uStack_8 & 0xffffff00;
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
    func_0x005e2210(param_2);
    FUN_005e2460();
    func_0x004a5060(param_1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_005e3630(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint auStack_50 [7];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecfdee;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_2c = 0;
  auStack_50[6] = param_2;
  if (*(int *)(param_2 + 0x10) == 0) {
    auStack_50[4] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    auStack_50[5] = 0;
    func_0x0046bc40("Must provide a configuration file to load.",0x2a,uStack_14);
    uStack_8 = 1;
    FUN_005ee340(3,auStack_50);
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = 0;
  }
  else {
    uStack_1c._0_4_ = 0;
    uStack_1c._4_4_ = (int *)0x0;
    FUN_005e3290(&uStack_1c,param_2);
    uStack_8._0_1_ = 2;
    uStack_8._1_3_ = 0;
    if ((int)uStack_1c == 0) {
      piVar5 = (int *)func_0x005e3b20();
      iVar1 = *piVar5;
      piVar2 = (int *)piVar5[1];
      *piVar5 = 0;
      piVar5[1] = 0;
      iStack_28 = (int)uStack_1c;
      piStack_20 = uStack_1c._4_4_;
      piStack_24 = uStack_1c._4_4_;
      uStack_8._0_1_ = 3;
      uStack_1c._0_4_ = iVar1;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar1 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar3 = *(code **)*uStack_1c._4_4_;
          uStack_1c._4_4_ = piVar2;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          iVar1 = piStack_20[2] + -1;
          piStack_20[2] = iVar1;
          UNLOCK();
          piVar2 = uStack_1c._4_4_;
          if (iVar1 == 0) {
            pcVar3 = *(code **)(*piStack_20 + 4);
            _guard_check_icall();
            (*pcVar3)();
            piVar2 = uStack_1c._4_4_;
          }
        }
      }
      uStack_1c._4_4_ = piVar2;
      uStack_8._0_1_ = 2;
      FUN_00468340();
      cVar4 = func_0x005e2210(auStack_50[6]);
      piVar2 = uStack_1c._4_4_;
      if (cVar4 == '\0') {
        uStack_34 = 0;
        uStack_30 = 0;
        iStack_28 = (int)uStack_1c;
        piStack_20 = uStack_1c._4_4_;
        piStack_24 = uStack_1c._4_4_;
        uStack_1c._0_4_ = 0;
        uStack_1c._4_4_ = (int *)0x0;
        uStack_8._0_1_ = 5;
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
            piVar2 = piStack_20 + 2;
            iVar1 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              pcVar3 = *(code **)(*piStack_20 + 4);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
        }
      }
      else {
        func_0x004a5060(&uStack_1c);
      }
    }
    *param_1 = (int)uStack_1c;
    param_1[1] = 0;
    param_1[1] = (int)uStack_1c._4_4_;
    uStack_1c = 0;
    uStack_8 = (uint)uStack_8._1_3_ << 8;
  }
  uStack_2c = 1;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005e38e0(int param_1,undefined4 param_2)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 **ppuStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecfe45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar9 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_14 = uVar9;
  FUN_005e3290(&uStack_1c,param_2);
  uStack_8 = 0;
  if ((undefined4 *)uStack_1c != (undefined4 *)0x0) {
    func_0x005e2380(uVar9);
    piVar5 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    puStack_34 = (undefined4 *)uStack_1c;
    puStack_28 = (undefined4 *)(param_1 + 8);
    puStack_24 = (undefined4 *)0x0;
    uStack_8 = uStack_8 & 0xffffff00;
    ppuVar1 = (undefined4 **)*puStack_28;
    ppuStack_20 = &puStack_24;
    ppuVar2 = (undefined4 **)*ppuVar1;
    while (ppuVar8 = ppuVar2, ppuVar8 != ppuVar1) {
      ppuVar2 = (undefined4 **)*ppuVar8;
      if (ppuVar8[2] == puStack_34) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        puVar3 = *ppuVar8;
        *ppuVar8 = (undefined4 *)0x0;
        piVar4 = ppuVar8[1];
        *piVar4 = (int)puVar3;
        puVar3[1] = piVar4;
        *ppuStack_20 = ppuVar8;
        ppuStack_20 = ppuVar8;
      }
    }
    uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
    uStack_8._0_1_ = 1;
    piVar4 = puStack_24;
    while (piStack_30 = piVar5, piVar4 != (undefined4 *)0x0) {
      piVar5 = (int *)piVar4[3];
      piStack_2c = (int *)*piVar4;
      if (piVar5 != (int *)0x0) {
        LOCK();
        iVar7 = piVar5[1] + -1;
        piVar5[1] = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar6 = *(code **)*piVar5;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          iVar7 = piVar5[2] + -1;
          piVar5[2] = iVar7;
          UNLOCK();
          if (iVar7 == 0) {
            pcVar6 = *(code **)(*piVar5 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      func_0x008ab812(piVar4,0x10);
      piVar5 = piStack_30;
      piVar4 = piStack_2c;
    }
    uStack_8._0_1_ = 0;
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar7 = piVar5[1] + -1;
      piVar5[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar6 = *(code **)*piVar5;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        iVar7 = piVar5[2] + -1;
        piVar5[2] = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
    puStack_34 = (undefined4 *)0x0;
    piStack_30 = (int *)0x0;
    uStack_8._0_1_ = 3;
    func_0x0046ffa0(&puStack_34);
    piVar5 = piStack_30;
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    if (piStack_30 != (int *)0x0) {
      LOCK();
      iVar7 = piStack_30[1] + -1;
      piStack_30[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar6 = *(code **)*piStack_30;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        piVar4 = piVar5 + 2;
        iVar7 = *piVar4 + -1;
        *piVar4 = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
  }
  uStack_8 = 0xffffffff;
  piStack_2c = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar7 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar6 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar6)();
      LOCK();
      piVar5 = piStack_2c + 2;
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        pcVar6 = *(code **)(*piStack_2c + 4);
        _guard_check_icall();
        (*pcVar6)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_005e3d50(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  return param_1;
}



undefined4 __thiscall FUN_005e3e50(undefined4 param_1,byte param_2)

{
  func_0x005e3e80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



void __fastcall FUN_005e3f40(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  if (((*(char *)(param_1 + 0x50) == '\0') && (*(char *)(param_1 + 0x51) == '\0')) &&
     (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 8);
    _guard_check_icall();
    (*pcVar1)();
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != (int *)(param_1 + 0x28));
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



void __fastcall FUN_005e3fa0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  *(undefined1 *)(param_1 + 0x50) = 1;
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 0x28));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



int __fastcall FUN_005e3fe0(int param_1)

{
  undefined4 uStack_c;
  
  uStack_c = (int)DAT_0145db28;
  return *(int *)(param_1 + 0x58) - uStack_c;
}



void __thiscall FUN_005e4dd0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 uStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed019e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uStack_24 = 1;
    func_0x005e56c0(param_1,&stack0x00000010,&uStack_24);
    iStack_8 = 0;
LAB_005e4eed:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  iVar2 = func_0x00e7307f(param_1 + 0x10,uStack_14);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 != 0x7fffffff) {
      iStack_8 = 1;
      uStack_1d = DAT_0145dc80;
      uStack_1c = 0;
      uStack_24 = 1;
      func_0x005e5850(param_4,&stack0x00000010,&uStack_24,&uStack_1d);
      iStack_8._0_1_ = 2;
      func_0x005e54d0(&uStack_1c);
      *param_2 = (undefined4)uStack_1c;
      param_2[1] = 0;
      param_2[1] = uStack_1c._4_4_;
      uStack_1c = 0;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x00e730b2(param_1 + 0x10);
      goto LAB_005e4eed;
    }
  }
  else {
    iVar2 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x3c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005e4f20(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 uStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed019e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uStack_24 = 0;
    func_0x005e56c0(param_1,&stack0x00000010,&uStack_24);
    iStack_8 = 0;
LAB_005e503d:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  iVar2 = func_0x00e7307f(param_1 + 0x10,uStack_14);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 != 0x7fffffff) {
      iStack_8 = 1;
      uStack_1d = DAT_0145dc80;
      uStack_1c = 0;
      uStack_24 = 0;
      func_0x005e5850(param_4,&stack0x00000010,&uStack_24,&uStack_1d);
      iStack_8._0_1_ = 2;
      func_0x005e54d0(&uStack_1c);
      *param_2 = (undefined4)uStack_1c;
      param_2[1] = 0;
      param_2[1] = uStack_1c._4_4_;
      uStack_1c = 0;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x00e730b2(param_1 + 0x10);
      goto LAB_005e503d;
    }
  }
  else {
    iVar2 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x3c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall
FUN_005e5070(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_80 [36];
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined8 *puStack_54;
  uint auStack_50 [7];
  int *piStack_34;
  undefined1 uStack_2d;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ed0246;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_54 = param_2;
  auStack_50[6] = 0;
  piStack_34 = param_1;
  if (*(char *)(param_1 + 3) != '\0') {
    iStack_14 = 1;
    puStack_20 = &stack0xfffffffc;
    piVar2 = (int *)func_0x008ab47d(0x68);
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[1] = 1;
    piVar2[2] = 1;
    *piVar2 = (int)std::_Ref_count_obj2<>::vftable;
    uStack_5c = 0;
    iStack_14._0_1_ = 4;
    iStack_14._1_3_ = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    auStack_50[4] = 0;
    auStack_50[5] = 0;
    piStack_34 = piVar2;
    func_0x0046bc40(&DAT_0112e1b4,0);
    iStack_14._0_1_ = 5;
    func_0x005e3d80(auStack_50,auStack_80,0);
    iStack_14._0_1_ = 4;
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    iStack_14 = CONCAT31(iStack_14._1_3_,1);
    *param_2 = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    auStack_50[6] = 2;
    func_0x00488650(piVar2 + 4,piVar2);
    iStack_14 = 0;
    auStack_50[6] = 1;
LAB_005e52bb:
    *unaff_FS_OFFSET = iStack_1c;
    FUN_008ab370();
    return;
  }
  uStack_2d = DAT_0145dc80;
  uStack_2c = 0;
  func_0x005e5930(param_4,&uStack_2d,uStack_24);
  iStack_14 = 7;
  puVar4 = param_1 + 4;
  puStack_58 = puVar4;
  iVar3 = func_0x00e7307f(puVar4);
  if (iVar3 == 0) {
    iVar3 = param_1[0xf];
    if (iVar3 != 0x7fffffff) {
      iStack_14 = CONCAT31(iStack_14._1_3_,8);
      if (param_5 == '\0') {
        func_0x005e5a00((undefined4 *)*piStack_34,&uStack_2c);
      }
      else {
        func_0x005e5a00(*(undefined4 *)*piStack_34,&uStack_2c);
        piStack_34[2] = piStack_34[2] + 1;
      }
      *(undefined4 *)param_2 = (undefined4)uStack_2c;
      *(undefined4 *)((int)param_2 + 4) = 0;
      *(int **)((int)param_2 + 4) = uStack_2c._4_4_;
      uStack_2c = 0;
      auStack_50[6] = 1;
      iStack_14._0_1_ = 7;
      func_0x00e730b2(puVar4);
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      piStack_34 = uStack_2c._4_4_;
      if (uStack_2c._4_4_ != (int *)0x0) {
        LOCK();
        iVar3 = uStack_2c._4_4_[1] + -1;
        uStack_2c._4_4_[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar1 = *(code **)*uStack_2c._4_4_;
          _guard_check_icall();
          (*pcVar1)();
          LOCK();
          iVar3 = piStack_34[2] + -1;
          piStack_34[2] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar1 = *(code **)(*piStack_34 + 4);
            _guard_check_icall();
            (*pcVar1)();
          }
        }
      }
      goto LAB_005e52bb;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  param_1[0xf] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_005e5ad0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005e5b00(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005e5e60(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed048e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = FileStream::vftable;
  iStack_8 = 3;
  if (DAT_0145dc6e == '\0') {
    func_0x005e6090(uVar2);
  }
  iStack_8._0_1_ = 2;
  puVar1 = param_1 + 0x10;
  if (0xf < (uint)param_1[0x15]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x15]);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 1;
  if (param_1[0xf] != 0) {
    func_0x008ab37e(param_1[0xf]);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = param_1 + 4;
  if (0xf < (uint)param_1[9]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[9]);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005e7560(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = uVar1;
  return;
}



undefined1 __fastcall FUN_005e7580(int param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}



undefined4 __thiscall FUN_005e7950(undefined4 param_1,byte param_2)

{
  func_0x005e7980();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,200);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_005e7b00(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined3 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  int *piVar8;
  undefined **ppuStack_170;
  code *pcStack_16c;
  undefined ***pppuStack_14c;
  int aiStack_148 [9];
  int *piStack_124;
  int aiStack_120 [9];
  int *piStack_fc;
  undefined **ppuStack_f8;
  code *pcStack_f4;
  undefined1 uStack_f0;
  undefined ***pppuStack_d4;
  undefined **ppuStack_d0;
  code *pcStack_cc;
  undefined1 uStack_c8;
  undefined ***pppuStack_ac;
  uint auStack_a8 [7];
  float fStack_8c;
  uint auStack_88 [7];
  int *piStack_6c;
  undefined1 uStack_65;
  int aiStack_64 [9];
  int *piStack_40;
  int aiStack_3c [9];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed0aa9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar4;
  FUN_005dc490(param_1);
  pcVar1 = (code *)*DAT_0145ea60;
  _guard_check_icall(uVar4);
  (*pcVar1)();
  auStack_88[4] = 0;
  auStack_88[5] = 0;
  auStack_88[0] = 0;
  auStack_88[1] = 0;
  auStack_88[2] = 0;
  auStack_88[3] = 0;
  func_0x0046bc40("C:\\Git\\otcv8_source\\src\\framework\\core\\graphicalapplication.cpp",0x3f);
  iStack_8 = 0;
  auStack_a8[4] = 0;
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  auStack_a8[3] = 0;
  auStack_a8[5] = 0;
  func_0x0046bc40("GraphicalApplication::init",0x1a);
  iStack_8._0_1_ = 1;
  func_0x00620660(auStack_a8,auStack_88,0x39);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < auStack_a8[5]) {
    func_0x0046b1f0(auStack_a8,auStack_a8[0],auStack_a8[5]);
  }
  auStack_a8[4] = 0;
  auStack_a8[5] = 0xf;
  auStack_a8[0] = auStack_a8[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  if (0xf < auStack_88[5]) {
    func_0x0046b1f0(auStack_88,auStack_88[0],auStack_88[5]);
  }
  auStack_88[4] = 0;
  auStack_88[5] = 0xf;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  pcVar1 = (code *)DAT_0145ea60[5];
  _guard_check_icall();
  (*pcVar1)();
  uStack_c8 = uStack_65;
  pppuStack_ac = &ppuStack_d0;
  ppuStack_d0 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_cc = FUN_005ec800;
  piStack_fc = (int *)0x0;
  iStack_8._1_3_ = 0;
  uVar3 = iStack_8._1_3_;
  iStack_8._0_1_ = 4;
  iStack_8._1_3_ = 0;
  if (pppuStack_ac != (undefined ***)0x0) {
    piVar8 = aiStack_120;
    _guard_check_icall(piVar8);
    piStack_fc = (int *)FUN_005ee0f0(piVar8);
    uVar3 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar3;
  piVar8 = piStack_fc;
  if ((piStack_fc == aiStack_120) || (DAT_0145eb64 == (int *)&DAT_0145eb40)) {
    piStack_18 = (int *)0x0;
    iStack_8._0_1_ = 6;
    func_0x005ed990(aiStack_120);
    func_0x005ed990(&DAT_0145eb40);
    func_0x005ed990(aiStack_3c);
    iStack_8._0_1_ = 5;
    if (piStack_18 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_18 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)aiStack_3c >> 8),piStack_18 != aiStack_3c));
      (*pcVar1)();
      piStack_18 = (int *)0x0;
    }
  }
  else {
    piStack_fc = DAT_0145eb64;
    DAT_0145eb64 = piVar8;
  }
  iStack_8 = CONCAT31(iStack_8._1_3_,3);
  if (piStack_fc != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_fc + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_120 >> 8),piStack_fc != aiStack_120));
    (*pcVar1)();
    piStack_fc = (int *)0x0;
  }
  iStack_8 = 0xffffffff;
  if (pppuStack_ac != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_ac)[4];
    _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_d0 >> 8),pppuStack_ac != &ppuStack_d0));
    (*pcVar1)();
    pppuStack_ac = (undefined ***)0x0;
  }
  uStack_f0 = uStack_65;
  pppuStack_d4 = &ppuStack_f8;
  ppuStack_f8 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_f4 = FUN_005ec850;
  piStack_124 = (int *)0x0;
  iStack_8._1_3_ = 0;
  uVar3 = iStack_8._1_3_;
  iStack_8._0_1_ = 0xb;
  iStack_8._1_3_ = 0;
  if (pppuStack_d4 != (undefined ***)0x0) {
    piVar8 = aiStack_148;
    _guard_check_icall(piVar8);
    piStack_124 = (int *)FUN_005ee090(piVar8);
    uVar3 = iStack_8._1_3_;
  }
  iStack_8._1_3_ = uVar3;
  piVar8 = piStack_124;
  if ((piStack_124 == aiStack_148) || (DAT_0145eb8c == (int *)&DAT_0145eb68)) {
    piStack_40 = (int *)0x0;
    iStack_8._0_1_ = 0xd;
    func_0x005ed990(aiStack_148);
    func_0x005ed990(&DAT_0145eb68);
    func_0x005ed990(aiStack_64);
    iStack_8._0_1_ = 0xc;
    if (piStack_40 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_40 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)aiStack_64 >> 8),piStack_40 != aiStack_64));
      (*pcVar1)();
      piStack_40 = (int *)0x0;
    }
  }
  else {
    piStack_124 = DAT_0145eb8c;
    DAT_0145eb8c = piVar8;
  }
  iStack_8 = CONCAT31(iStack_8._1_3_,10);
  if (piStack_124 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_124 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_148 >> 8),piStack_124 != aiStack_148));
    (*pcVar1)();
    piStack_124 = (int *)0x0;
  }
  iStack_8 = 0xffffffff;
  if (pppuStack_d4 != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_d4)[4];
    _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_f8 >> 8),pppuStack_d4 != &ppuStack_f8));
    (*pcVar1)();
    pppuStack_d4 = (undefined ***)0x0;
  }
  pppuStack_14c = &ppuStack_170;
  ppuStack_170 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_16c = FUN_0056f550;
  iStack_8 = 0x11;
  func_0x005ed810(pppuStack_14c);
  iStack_8 = 0xffffffff;
  if (pppuStack_14c != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_14c)[4];
    _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_170 >> 8),pppuStack_14c != &ppuStack_170));
    (*pcVar1)();
    pppuStack_14c = (undefined ***)0x0;
  }
  auStack_a8[4] = 0;
  auStack_a8[5] = 0;
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  auStack_a8[3] = 0;
  func_0x0046bc40("C:\\Git\\otcv8_source\\src\\framework\\core\\graphicalapplication.cpp",0x3f);
  iStack_8 = 0x13;
  auStack_88[4] = 0;
  auStack_88[0] = 0;
  auStack_88[1] = 0;
  auStack_88[2] = 0;
  auStack_88[3] = 0;
  auStack_88[5] = 0;
  func_0x0046bc40("GraphicalApplication::init",0x1a);
  iStack_8._0_1_ = 0x14;
  func_0x00620660(auStack_88,auStack_a8,0x3e);
  iStack_8 = CONCAT31(iStack_8._1_3_,0x13);
  if (0xf < auStack_88[5]) {
    func_0x0046b1f0(auStack_88,auStack_88[0],auStack_88[5]);
  }
  auStack_88[4] = 0;
  auStack_88[5] = 0xf;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  if (0xf < auStack_a8[5]) {
    func_0x0046b1f0(auStack_a8,auStack_a8[0],auStack_a8[5]);
  }
  auStack_a8[4] = 0;
  auStack_a8[5] = 0xf;
  auStack_a8[0] = auStack_a8[0] & 0xffffff00;
  uVar5 = func_0x0079cf70();
  iStack_8 = 0x15;
  func_0x0046ffa0(uVar5);
  iStack_8 = 0xffffffff;
  if (piStack_6c != (int *)0x0) {
    LOCK();
    iVar2 = piStack_6c[1] + -1;
    piStack_6c[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_6c;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_6c[2] + -1;
      piStack_6c[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_6c + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  auStack_88[4] = 0;
  auStack_88[0] = 0;
  auStack_88[1] = 0;
  auStack_88[2] = 0;
  auStack_88[3] = 0;
  auStack_88[5] = 0;
  func_0x0046bc40(&DAT_011a0a34,4);
  iStack_8 = 0x16;
  FUN_00857350(auStack_88);
  iStack_8 = 0xffffffff;
  if (0xf < auStack_88[5]) {
    func_0x0046b1f0();
  }
  auStack_88[4] = 0;
  auStack_88[5] = 0xf;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  func_0x004683d0(&DAT_0145edc0);
  func_0x004683d0(&DAT_0145edc0);
  piStack_6c = (int *)(1.0 / _DAT_0145ee6c);
  fStack_8c = (float)piStack_6c * 100.0;
  fVar7 = (float10)func_0x008ab09a((double)fStack_8c);
  fStack_8c = (float)fVar7;
  uVar6 = func_0x008abcb0();
  piStack_6c = (int *)((float)((double)DAT_0145ee74 +
                              (double)(&DAT_011a2c10)[-(DAT_0145ee74 >> 0x1f)]) * (float)piStack_6c)
  ;
  fVar7 = (float10)func_0x008ab09a((double)(float)piStack_6c);
  piStack_6c = (int *)(float)fVar7;
  uVar4 = func_0x008abcb0();
  if (uVar4 < uVar6) {
    uVar4 = uVar6;
  }
  if (DAT_0145ee88 < uVar4) {
    func_0x005bfc80();
  }
  func_0x0061fbe0();
  auStack_88[6] = DAT_0145ea98;
  DAT_012bbff8 = DAT_0145ea98;
  piStack_6c = (int *)DAT_0145ea9c;
  DAT_012bbffc = DAT_0145ea9c;
  if (DAT_0145ceb8 != 0) {
    func_0x006233a0();
  }
  auStack_a8[6] = *(undefined4 *)(auStack_a8[6] + 0x84);
  FUN_005ed3a0();
  func_0x00837560();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005e8310(int *param_1)

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
  pcVar1 = *(code **)(DAT_0145ea60 + 0x14);
  _guard_check_icall(uVar3);
  (*pcVar1)();
  func_0x005e08b0();
  func_0x005e0d80();
  auStack_40[4] = 0;
  *(int *)DAT_0145dab0 = DAT_0145dab0;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[5] = 0;
  *(int *)(DAT_0145dab0 + 4) = DAT_0145dab0;
  DAT_0145dab4 = 0;
  func_0x0046bc40("onTerminate",0xb);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005e84c0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_20;
  iStack_1c = param_1;
  func_0x008444a0();
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
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        func_0x0062e210();
      }
      DAT_0145ebdc = '\0';
    }
    if (DAT_0145ebe8 == 0) {
      uStack_18 = 100;
      iStack_14 = 0;
      func_0x008306f0(&uStack_18);
      func_0x0062e210();
    }
    func_0x005e0860();
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
  signal(0xf);
  signal(2);
  *(undefined1 *)(param_1 + 0x7e) = 0;
  if (DAT_0145eca4 != 0) {
    FUN_00dc2470(DAT_0145eca4);
  }
  piStack_10 = (int *)*DAT_0145eca8;
  if (piStack_10 != DAT_0145eca8) {
    do {
      piVar1 = (int *)piStack_10[6];
      if ((piVar1 == (int *)0x0) || (((char)piStack_10[7] != '\0' && ((char)piVar1[0x1c] != '\0'))))
      {
        func_0x00837270(4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
      func_0x00499be0();
      param_1 = iStack_14;
    } while (piStack_10 != DAT_0145eca8);
  }
  piVar1 = DAT_0145eca8;
  func_0x00839de0(&DAT_0145eca8,DAT_0145eca8[1]);
  piVar1[1] = (int)piVar1;
  *piVar1 = (int)piVar1;
  piVar1[2] = (int)piVar1;
  _DAT_0145ecac = 0;
  if (DAT_0145ecd0 != DAT_0145ecd4) {
    func_0x00485920(DAT_0145ecd0);
    DAT_0145ecd4 = DAT_0145ecd0;
  }
  func_0x00626220();
  func_0x00588cf0();
  DAT_0145ecdc = 0;
  FUN_00dc2470(0);
  if (DAT_0145eca4 != 0) {
    FUN_00dc2890(DAT_0145eca4);
    DAT_0145eca4 = 0;
  }
  if (DAT_0145eca0 != 0) {
    FUN_00dc2fe0(DAT_0145eca0);
    DAT_0145eca0 = 0;
  }
  iVar3 = DAT_0145e980;
  func_0x00775520(&DAT_0145e980,*(undefined4 *)(DAT_0145e980 + 4));
  *(int *)(iVar3 + 4) = iVar3;
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 8) = iVar3;
  _DAT_0145e984 = 0;
  func_0x005e41f0();
  func_0x00620340();
  pcVar2 = *(code **)(DAT_0145ea60 + 4);
  _guard_check_icall();
  (*pcVar2)();
  *(undefined1 *)(param_1 + 0x7e) = 1;
  FUN_008ab370();
  return;
}


/*
Unable to decompile 'FUN_005e8760'
Cause: Exception while decompiling 005e8760: process: timeout

*/


void FUN_005ec3c0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_10 [12];
  
  puVar4 = (uint *)func_0x0046ede0(auStack_10);
  iVar5 = DAT_0145e64c;
  uVar3 = DAT_0145e648;
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  func_0x00837750();
  func_0x007fb620();
  func_0x005e4320();
  func_0x007fb620();
  puVar4 = (uint *)func_0x0046ede0(auStack_10);
  iVar5 = func_0x00e87ec0(uVar1 - uVar3,(uVar2 - iVar5) - (uint)(uVar1 < uVar3),1000000,0,1);
  iVar6 = func_0x00e87ec0(*puVar4 - DAT_0145e648,
                          (puVar4[1] - DAT_0145e64c) - (uint)(*puVar4 < DAT_0145e648),1000000,0);
  func_0x0061f760(iVar6 - iVar5);
  return;
}



void __fastcall FUN_005ec6b0(int *param_1)

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
  *(undefined1 *)(param_1 + 0x24) = 1;
  auStack_44[4] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  auStack_44[5] = 0;
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
  *(undefined1 *)(param_1 + 0x24) = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005ec800(int param_1,undefined4 *param_2)

{
  DAT_012bbff8 = *param_2;
  DAT_012bbffc = param_2[1];
  if (DAT_0145ceb8 != 0) {
    func_0x006233a0(param_2);
  }
  FUN_005ed3a0(*(undefined4 *)(param_1 + 0x84));
  return;
}



void __thiscall FUN_005ec850(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000024;
  uint in_stack_00000028;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1255;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  func_0x00844840(&stack0x00000004,uVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000028) {
    func_0x0046b1f0(&stack0x00000014,in_stack_00000014,in_stack_00000028);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_005ec950(int *param_1)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint auStack_f4 [9];
  undefined4 *puStack_d0;
  undefined4 *puStack_cc;
  undefined1 **ppuStack_c8;
  int *piStack_c4;
  uint uStack_c0;
  char *pcStack_bc;
  undefined4 uStack_b8;
  code **ppcStack_b4;
  uint **ppuStack_b0;
  uint uStack_ac;
  int aiStack_a0 [9];
  int *piStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  uint *puStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint *puStack_54;
  uint uStack_50;
  char *pcStack_4c;
  code *pcStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  code **ppcStack_24;
  uint *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed139b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_ac = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  iStack_8 = 0;
  ppuStack_b0 = (uint **)0x5ec992;
  uStack_14 = uStack_ac;
  iVar5 = func_0x00bbb310();
  if (DAT_0145d748 == iVar5) {
    if (in_stack_00000014 == 0) {
      ppuStack_b0 = (uint **)0xe;
      ppcStack_b4 = (code **)0x114241c;
      uStack_b8 = 0x5ecb0f;
      func_0x0046a660();
    }
    pcVar4 = DAT_012bbffc;
    uVar3 = DAT_012bbff8;
    puStack_20 = (uint *)0x0;
    uStack_1c = 0;
    ppcStack_24 = (code **)(DAT_012bbff8 * (int)DAT_012bbffc * 4);
    ppuStack_b0 = &puStack_20;
    ppcStack_b4 = (code **)0x5ecb44;
    func_0x005eda10();
    iStack_8._0_1_ = 0xc;
    ppuStack_b0 = *(uint ***)(code *)uStack_1c;
    ppcStack_b4 = (code **)0x1401;
    uStack_b8 = 0x1908;
    pcStack_bc = pcVar4;
    uStack_c0 = uVar3;
    piStack_c4 = (int *)0x0;
    ppuStack_c8 = (undefined1 **)0x0;
    puStack_cc = (undefined4 *)0x5ecb65;
    func_0x0087f0f0();
    uStack_50 = uVar3;
    pcStack_4c = pcVar4;
    if (uStack_1c._4_4_ != (uint *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4U) = *(int *)((int)uStack_1c._4_4_ + 4U) + 1;
      UNLOCK();
    }
    pcStack_48 = (code *)uStack_1c;
    uStack_44 = (uint)uStack_1c._4_4_;
    iStack_8._0_1_ = 0xd;
    puStack_cc = &param_1;
    puStack_d0 = (undefined4 *)0x5ecba0;
    func_0x00469da0();
    puStack_54 = auStack_f4;
    puStack_20 = auStack_f4;
    puStack_d0 = (undefined4 *)0x0;
    iStack_8._0_1_ = 0x10;
    puStack_d0 = (undefined4 *)func_0x008ab47d(0x2c);
    uVar3 = uStack_40;
    puStack_70 = puStack_d0 + 1;
    puStack_d0[2] = pcStack_4c;
    puStack_d0[3] = pcStack_48;
    *puStack_d0 = std::_Func_impl_no_alloc<>::vftable;
    *puStack_70 = uStack_50;
    puStack_d0[4] = uStack_44;
    pcStack_48 = (code *)0x0;
    uStack_44 = 0;
    puStack_d0[5] = 0;
    puStack_d0[6] = 0;
    puStack_d0[7] = 0;
    puStack_d0[8] = 0;
    puStack_d0[9] = 0;
    puStack_d0[10] = 0;
    uStack_40 = uStack_40 & 0xffffff00;
    puStack_d0[5] = uVar3;
    puStack_d0[6] = uStack_3c;
    puStack_d0[7] = uStack_38;
    puStack_d0[8] = uStack_34;
    *(ulonglong *)(puStack_d0 + 9) = CONCAT44(uStack_2c,uStack_30);
    uStack_30 = 0;
    uStack_2c = 0xf;
    ppcStack_24 = (code **)0x0;
    iStack_8._0_1_ = 0xf;
    puStack_78 = puStack_d0;
    func_0x00570590();
    uStack_30 = 0;
    uStack_2c = 0xf;
    uStack_40 = uStack_40 & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    puStack_20 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (uint *)0x0) {
      LOCK();
      uVar3 = uStack_1c._4_4_[1] - 1;
      uStack_1c._4_4_[1] = uVar3;
      UNLOCK();
      if (uVar3 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        uStack_c0 = 0x5ecc99;
        _guard_check_icall();
        uStack_c0 = 0x5ecc9e;
        (*pcVar2)();
        LOCK();
        puVar1 = puStack_20 + 2;
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar3 == 1) {
          pcVar2 = *(code **)(*puStack_20 + 4);
          uStack_c0 = 0x5eccb6;
          _guard_check_icall();
          uStack_c0 = 0x5eccbb;
          (*pcVar2)();
        }
      }
    }
  }
  else {
    iStack_8._0_1_ = 1;
    ppcStack_24 = &pcStack_48;
    puStack_54 = &uStack_44;
    pcStack_48 = FUN_005ec950;
    ppuStack_b0 = (uint **)&param_1;
    ppcStack_b4 = (code **)0x5ec9c4;
    puStack_20 = puStack_54;
    func_0x00469da0();
    uStack_28 = 1;
    piStack_7c = (int *)0x0;
    iStack_8._0_1_ = 8;
    ppcStack_b4 = &pcStack_48;
    uStack_b8 = 0x5ec9f0;
    piStack_7c = (int *)func_0x005ee1a0();
    iStack_8._0_1_ = 9;
    uStack_b8 = 0x22;
    pcStack_bc = "GraphicalApplication::doScreenshot";
    uStack_5c = 0;
    piStack_6c = (int *)0x0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_c0 = 0x5eca1b;
    func_0x0046bc40();
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    piStack_c4 = aiStack_a0;
    uStack_c0 = 0;
    ppuStack_c8 = (undefined1 **)&piStack_6c;
    puStack_cc = &uStack_74;
    puStack_d0 = (undefined4 *)0x5eca3a;
    FUN_005e5070();
    puStack_20 = puStack_70;
    if (puStack_70 != (uint *)0x0) {
      LOCK();
      uVar3 = puStack_70[1] - 1;
      puStack_70[1] = uVar3;
      UNLOCK();
      if (uVar3 == 0) {
        pcVar2 = *(code **)*puStack_70;
        uStack_c0 = 0x5eca5c;
        _guard_check_icall();
        uStack_c0 = 0x5eca61;
        (*pcVar2)();
        LOCK();
        puVar1 = puStack_20 + 2;
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar3 == 1) {
          pcVar2 = *(code **)(*puStack_20 + 4);
          uStack_c0 = 0x5eca79;
          _guard_check_icall();
          uStack_c0 = 0x5eca7e;
          (*pcVar2)();
        }
      }
    }
    iStack_8._0_1_ = 9;
    if (0xf < uStack_58) {
      uStack_c0 = uStack_58;
      piStack_c4 = piStack_6c;
      ppuStack_c8 = (undefined1 **)&piStack_6c;
      puStack_cc = (undefined4 *)0x5eca97;
      func_0x0046b1f0();
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    piStack_6c = (int *)((uint)piStack_6c & 0xffffff00);
    iStack_8._0_1_ = 1;
    if (piStack_7c != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_7c + 0x10);
      uStack_c0 = CONCAT31((int3)((uint)aiStack_a0 >> 8),piStack_7c != aiStack_a0);
      piStack_c4 = (int *)0x5ecad0;
      _guard_check_icall();
      piStack_c4 = (int *)0x5ecad4;
      (*pcVar2)();
      piStack_7c = (int *)0x0;
    }
    uStack_28 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    uStack_c0 = 0x5ecaf5;
    func_0x005ecec0();
  }
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    uStack_c0 = in_stack_00000018;
    piStack_c4 = param_1;
    ppuStack_c8 = (undefined1 **)&param_1;
    puStack_cc = (undefined4 *)0x5eccd7;
    func_0x0046b1f0();
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (int *)((uint)param_1 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  ppcStack_b4 = (code **)0x5ecd03;
  FUN_008ab370();
  return;
}



undefined4 Catch_005ece1f(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x70) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  func_0x0046bc40("Can\'t do screenshot: ",0x15);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = func_0x0046b5c0(unaff_EBP + -0x2c,unaff_EBP + -0x6c,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (0xf < *(uint *)(unaff_EBP + -0x58)) {
    func_0x0046b1f0(unaff_EBP + -0x6c,*(undefined4 *)(unaff_EBP + -0x6c),
                    *(uint *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x6c) = 0;
  return 0x5ecdfc;
}



void __fastcall FUN_005ed080(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_58;
  code *pcStack_54;
  int iStack_50;
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = func_0x00bbb310(uVar2);
  if (DAT_0145d748 == iVar3) {
    piStack_14 = *(int **)(param_1 + 0x84);
    FUN_005ed3a0((float)piStack_14 + 0.5);
  }
  else {
    pppuStack_34 = &ppuStack_58;
    ppuStack_58 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_54 = FUN_005ed080;
    uStack_8 = 1;
    auStack_30[4] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    auStack_30[5] = 0;
    iStack_50 = param_1;
    func_0x0046bc40("GraphicalApplication::scaleUp",0x1d);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    FUN_005e5070(auStack_18,auStack_30,&ppuStack_58,0);
    if (piStack_14 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_14[1] + -1;
      piStack_14[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar1 = *(code **)*piStack_14;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar3 = piStack_14[2] + -1;
        piStack_14[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar1 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (pppuStack_34 != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_34)[4];
      _guard_check_icall(pppuStack_34 != &ppuStack_58);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_005ed210(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_58;
  code *pcStack_54;
  int iStack_50;
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = func_0x00bbb310(uVar2);
  if (DAT_0145d748 == iVar3) {
    piStack_14 = *(int **)(param_1 + 0x84);
    FUN_005ed3a0((float)piStack_14 - 0.5);
  }
  else {
    pppuStack_34 = &ppuStack_58;
    ppuStack_58 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_54 = FUN_005ed210;
    uStack_8 = 1;
    auStack_30[4] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    auStack_30[5] = 0;
    iStack_50 = param_1;
    func_0x0046bc40("GraphicalApplication::scaleDown",0x1f);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    FUN_005e5070(auStack_18,auStack_30,&ppuStack_58,0);
    if (piStack_14 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_14[1] + -1;
      piStack_14[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar1 = *(code **)*piStack_14;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar3 = piStack_14[2] + -1;
        piStack_14[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar1 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (pppuStack_34 != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_34)[4];
      _guard_check_icall(pppuStack_34 != &ppuStack_58);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005ed3a0(int param_1,float param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  float fVar4;
  float fVar5;
  undefined **ppuStack_88;
  int iStack_84;
  undefined ***pppuStack_64;
  undefined **ppuStack_60;
  code *pcStack_5c;
  float fStack_58;
  int iStack_54;
  undefined ***pppuStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  uint auStack_30 [6];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed159e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = func_0x00bbb310(uStack_14);
  if (DAT_0145d748 == iVar3) {
    fVar5 = (float)(DAT_012bbffc / 0xb4);
    if ((float)(DAT_012bbff8 / 0x118) <= (float)(DAT_012bbffc / 0xb4)) {
      fVar5 = (float)(DAT_012bbff8 / 0x118);
    }
    if (fVar5 < 2.0) {
      fVar5 = 2.0;
    }
    fVar5 = fVar5 * 0.5;
    if (*(float *)(param_1 + 0x84) == param_2) {
      param_2 = *(float *)(param_1 + 0x88);
    }
    else {
      fVar4 = fVar5;
      if (param_2 <= fVar5) {
        fVar4 = param_2;
      }
      if (fVar4 <= 1.0) {
        fVar4 = 1.0;
      }
      LOCK();
      *(float *)(param_1 + 0x88) = fVar4;
      UNLOCK();
    }
    if (fVar5 <= param_2) {
      param_2 = fVar5;
    }
    if (param_2 <= 1.0) {
      param_2 = 1.0;
    }
    LOCK();
    *(float *)(param_1 + 0x84) = param_2;
    UNLOCK();
    _DAT_0145eb10 = *(float *)(param_1 + 0x84);
    pppuStack_64 = &ppuStack_88;
    ppuStack_88 = std::_Func_impl_no_alloc<>::vftable;
    uStack_8 = 5;
    auStack_30[4] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    auStack_30[5] = 0;
    iStack_84 = param_1;
    piStack_18 = (int *)_DAT_0145eb10;
    func_0x0046bc40("GraphicalApplication::scale",0x1b);
    uStack_8 = CONCAT31(uStack_8._1_3_,6);
    FUN_005e5070(auStack_38,auStack_30,&ppuStack_88,0);
    piStack_18 = piStack_34;
    if (piStack_34 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_34[1] + -1;
      piStack_34[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_34;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_18 + 2;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (pppuStack_64 != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_64)[4];
      _guard_check_icall(pppuStack_64 != &ppuStack_88);
      (*pcVar2)();
      pppuStack_64 = (undefined ***)0x0;
    }
  }
  else {
    fStack_58 = param_2;
    pppuStack_3c = &ppuStack_60;
    ppuStack_60 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_5c = FUN_005ed3a0;
    uStack_8 = 1;
    auStack_30[4] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    auStack_30[5] = 0;
    iStack_54 = param_1;
    func_0x0046bc40("GraphicalApplication::scale",0x1b);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    FUN_005e5070(auStack_38,auStack_30,&ppuStack_60,0);
    piStack_18 = piStack_34;
    if (piStack_34 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_34[1] + -1;
      piStack_34[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_34;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_18 + 2;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (pppuStack_3c != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_3c)[4];
      _guard_check_icall(pppuStack_3c != &ppuStack_60);
      (*pcVar2)();
      pppuStack_3c = (undefined ***)0x0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005ed730(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (((iVar1 != 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) &&
     (*(char *)(iVar1 + 0x2c) != (char)param_2)) {
    *(char *)(iVar1 + 0x2c) = (char)param_2;
    pcVar2 = *(code **)(**(int **)(iVar1 + 0xc) + 0x10);
    _guard_check_icall(param_2);
    (*pcVar2)();
  }
  return;
}



void __thiscall FUN_005ed770(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed15e5;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    func_0x00469da0(&param_2);
    uStack_8 = uStack_8 & 0xffffff00;
    FUN_0061e2b0();
  }
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_005edae0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(param_1 + 0x14) - iVar1);
    *(int *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



void __fastcall FUN_005edb10(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  piVar6 = (int *)(param_1 + 0xc);
  puStack_c = &DAT_00ed0843;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  piVar2 = *(int **)(param_1 + 0x10);
  for (piVar7 = (int *)*piVar6; piVar7 != piVar2; piVar7 = piVar7 + 1) {
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      pcVar3 = (code *)**(undefined4 **)*piVar7;
      _guard_check_icall(1,uVar5);
      (*pcVar3)();
    }
  }
  if (*piVar6 != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = *piVar6;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  for (piVar7 = *(int **)(param_1 + 0x18); piVar7 != piVar2; piVar7 = piVar7 + 1) {
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      pcVar3 = (code *)**(undefined4 **)*piVar7;
      _guard_check_icall(1,uVar5);
      (*pcVar3)();
    }
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 1;
  puVar1 = (undefined4 *)(param_1 + 0x58);
  if (0xf < *(uint *)(param_1 + 0x6c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x6c));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 != 0) {
    func_0x0046ac90(iVar4,*(int *)(param_1 + 0x20) - iVar4 >> 2);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iStack_8 = 0xffffffff;
  iVar4 = *piVar6;
  if (iVar4 != 0) {
    func_0x0046ac90(iVar4,*(int *)(param_1 + 0x14) - iVar4 >> 2);
    *piVar6 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_005edb20(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005edb50(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x78);
  }
  return param_1;
}



TypeDescriptor * FUN_005edb80(void)

{
  return &`public:_void___thiscall_GraphicalApplication::scale(float)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005edb90(int param_1)

{
  float fVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x90) = 1;
  fVar1 = 1.0 / *(float *)(*(int *)(param_1 + 4) + 0x84);
  FUN_0077f6b0((int)((float)DAT_012bbff8 * fVar1),(int)((float)DAT_012bbffc * fVar1));
  _DAT_0145eea8 = FUN_0083f570();
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x90) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x91) = 1;
  return;
}



void __thiscall FUN_005edc20(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_005edc40(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_005edc50(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*(undefined4 *)(param_1 + 8));
  (*pcVar1)();
  return;
}



void __thiscall FUN_005edc80(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}



void __thiscall FUN_005edcb0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed16f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005ecf50(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_005edd10(void)

{
  return &`public:_void___thiscall_GraphicalApplication::doScreenshot(class_std::basic_string<>)'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_005edd20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_48;
  int iStack_3c;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed13ed;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(param_1 + 4);
  iStack_48 = *(int *)(param_1 + 8) / 2;
  if (iStack_48 != 0) {
    iStack_3c = 0;
    iVar3 = iVar1 << 2;
    iVar4 = (*(int *)(param_1 + 8) * 4 + -4) * iVar1;
    do {
      iVar2 = **(int **)(param_1 + 0xc);
      func_0x00e727f0(iVar2 + iStack_3c,iVar3 + iVar2,iVar4 + iVar2);
      iVar4 = iVar4 + iVar1 * -4;
      iVar3 = iVar3 + iVar1 * 4;
      iStack_3c = iStack_3c + iVar1 * 4;
      iStack_48 = iStack_48 + -1;
    } while (iStack_48 != 0);
  }
  iStack_8 = 0;
  func_0x00620a20((int *)(param_1 + 4),4,**(undefined4 **)(param_1 + 0xc));
  iStack_8._0_1_ = 1;
  func_0x00621210(param_1 + 0x14);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0058a330();
  iStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005edd30(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed173e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x2c,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 8);
  puVar3[3] = 0;
  puVar3[4] = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[3] = *(undefined4 *)(param_1 + 0xc);
  puVar3[4] = *(undefined4 *)(param_1 + 0x10);
  uStack_8 = 1;
  func_0x00469da0(param_1 + 0x14);
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



void __thiscall FUN_005eddf0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1770;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005ecec0(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_005ede50(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_005ede60(int param_1)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed179d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(param_1 + 8);
  uStack_8 = 0xffffffff;
  _guard_check_icall();
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_005eded0(int param_1)

{
  func_0x005ee1a0(param_1 + 4);
  return;
}



undefined4 * __thiscall FUN_005edef0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed17fb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  func_0x00469da0(param_1 + 8,uVar1);
  param_2[8] = *(undefined4 *)(param_1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



TypeDescriptor * FUN_005edf90(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005edfa0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  return;
}



TypeDescriptor * FUN_005edfc0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005edfd0(int param_1,int param_2)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed1838;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(param_2 + 0x10);
  uStack_8 = 0xffffffff;
  _guard_check_icall();
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005ee090(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}



TypeDescriptor * FUN_005ee0c0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005ee0d0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005ee0f0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}



void FUN_005ee120(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iVar2;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed186d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar2 = param_1;
  func_0x005eaf00(uVar1);
  func_0x00e744e0();
  uStack_8 = 0xffffffff;
  if (param_1 != 0) {
    func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(iVar2,uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005ee340(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  __time64_t _Var9;
  undefined4 *puVar10;
  undefined1 auStack_100 [36];
  int *piStack_dc;
  undefined4 *puStack_d4;
  int iStack_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  uint auStack_b0 [7];
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  undefined1 auStack_5c [24];
  undefined4 ***apppuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ed1b32;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puVar10 = param_1 + 0x3c;
  iStack_64 = param_2;
  piStack_74 = param_3;
  uStack_2c = ZEXT48(puVar10);
  iVar4 = func_0x00e73090(puVar10,uStack_24);
  if (iVar4 == 0) {
    if (param_1[0x47] != 0x7fffffff) {
      cVar3 = '\x01';
      goto LAB_005ee3bd;
    }
    param_1[0x47] = 0x7ffffffe;
  }
  cVar3 = '\0';
LAB_005ee3bd:
  uStack_2c._0_5_ = CONCAT14(cVar3,(undefined4 *)uStack_2c);
  iStack_14._0_1_ = 0;
  iStack_14._1_3_ = 0;
  if (cVar3 == '\0') {
    iStack_14 = 0xffffffff;
  }
  else {
    if ((iStack_64 != 0) && (DAT_0145f258 == '\0')) {
      if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463924) goto LAB_005ee898;
      while( true ) {
        func_0x0083c1a0();
        iStack_14._0_1_ = 6;
        piStack_68 = piStack_74;
        if (0xf < (uint)piStack_74[5]) {
          piStack_68 = (int *)*piStack_74;
        }
        piStack_60 = (int *)(&DAT_01463928 + iStack_64 * 0x18);
        if (0xf < *(uint *)(&DAT_0146393c + iStack_64 * 0x18)) {
          piStack_60 = (int *)*piStack_60;
        }
        auStack_b0[4] = 0;
        auStack_b0[0] = 0;
        auStack_b0[1] = 0;
        auStack_b0[2] = 0;
        auStack_b0[3] = 0;
        auStack_b0[5] = 0;
        func_0x0046bc40("[%s] %s%s",9);
        iStack_14._0_1_ = 7;
        func_0x005efac0(auStack_5c,&piStack_60,&piStack_68);
        iStack_14 = CONCAT31(iStack_14._1_3_,9);
        if (0xf < auStack_b0[5]) {
          func_0x0046b1f0(auStack_b0,auStack_b0[0],auStack_b0[5]);
        }
        ppppuVar6 = apppuStack_44;
        if (0xf < uStack_30) {
          ppppuVar6 = (undefined4 ****)apppuStack_44[0];
        }
        auStack_b0[4] = 0;
        auStack_b0[5] = 0xf;
        auStack_b0[0] = auStack_b0[0] & 0xffffff00;
        uVar5 = func_0x0046cb10(&DAT_0145c5b8,ppppuVar6,uStack_34);
        func_0x004849e0(uVar5);
        if (*(int *)(*(int *)(param_1[0xc] + 4) + 0x3c + (int)param_1) == 0) {
          ppppuVar6 = apppuStack_44;
          if (0xf < uStack_30) {
            ppppuVar6 = (undefined4 ****)apppuStack_44[0];
          }
          uVar5 = func_0x0046cb10(param_1 + 0x10,ppppuVar6,uStack_34);
          func_0x004849e0(uVar5);
          func_0x0046aeb0();
        }
        _Var9 = _time64((__time64_t *)0x0);
        piVar7 = (int *)_Var9;
        auStack_b0[6] = iStack_64;
        piStack_68 = piVar7;
        func_0x00469da0(apppuStack_44);
        iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
        iStack_14 = CONCAT31(iStack_14._1_3_,0xb);
        piStack_60 = (int *)*param_1;
        piStack_7c = piVar7;
        if (param_1[1] == 0x6666666) {
          func_0x00e701fa("list too long");
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iStack_14._0_1_ = 0xc;
        uStack_6c = 0;
        puStack_70 = param_1;
        puVar8 = (undefined4 *)func_0x008ab47d(0x28);
        puVar8[2] = auStack_b0[6];
        piStack_78 = puVar8 + 2;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[3] = uStack_94;
        puVar8[4] = uStack_90;
        puVar8[5] = uStack_8c;
        puVar8[6] = uStack_88;
        *(ulonglong *)(puVar8 + 7) = CONCAT44(uStack_80,uStack_84);
        uStack_84 = 0;
        uStack_80 = 0xf;
        uStack_94 = uStack_94 & 0xffffff00;
        puVar8[9] = piStack_7c;
        param_1[1] = param_1[1] + 1;
        uStack_6c = 0;
        puVar10 = (undefined4 *)piStack_60[1];
        *puVar8 = piStack_60;
        puVar8[1] = puVar10;
        piStack_60[1] = (int)puVar8;
        *puVar10 = puVar8;
        iStack_14._0_1_ = 9;
        func_0x005b7df0();
        if (1000 < (uint)param_1[1]) {
          piVar1 = *(int **)*param_1;
          iVar4 = *piVar1;
          param_1[1] = param_1[1] - 1;
          *(int *)piVar1[1] = iVar4;
          *(int *)(iVar4 + 4) = piVar1[1];
          piStack_78 = piVar1 + 2;
          iStack_14._0_1_ = 9;
          piVar7 = piVar1 + 3;
          piStack_60 = piVar1;
          if (0xf < (uint)piVar1[8]) {
            func_0x0046b1f0(piVar7,*piVar7,piVar1[8]);
          }
          piVar1[7] = 0;
          piVar1[8] = 0xf;
          *(undefined1 *)piVar7 = 0;
          func_0x008ab812(piStack_60,0x28);
        }
        if (param_1[0xb] != 0) {
          iStack_d0 = iStack_64;
          puStack_d4 = param_1;
          func_0x00469da0(apppuStack_44);
          piStack_b4 = piStack_68;
          piStack_dc = (int *)0x0;
          iStack_14._0_1_ = 0x14;
          piStack_dc = (int *)func_0x008ab47d(0x28);
          piStack_68 = piStack_dc + 1;
          *piStack_dc = (int)std::_Func_impl_no_alloc<>::vftable;
          *piStack_68 = (int)puStack_d4;
          piStack_dc[2] = iStack_d0;
          piStack_dc[3] = 0;
          piStack_dc[4] = 0;
          piStack_dc[5] = 0;
          piStack_dc[6] = 0;
          piStack_dc[7] = 0;
          piStack_dc[8] = 0;
          piStack_dc[3] = uStack_cc;
          piStack_dc[4] = iStack_c8;
          piStack_dc[5] = iStack_c4;
          piStack_dc[6] = iStack_c0;
          *(ulonglong *)(piStack_dc + 7) = CONCAT44(uStack_b8,uStack_bc);
          uStack_bc = 0;
          uStack_b8 = 0xf;
          uStack_cc = uStack_cc & 0xffffff00;
          piStack_dc[9] = (int)piStack_b4;
          piStack_60 = (int *)0x0;
          iStack_14._0_1_ = 0x18;
          uStack_80 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          piStack_7c = (int *)0x0;
          piStack_78 = piStack_dc;
          func_0x0046bc40("Logger::log",0xb);
          iStack_14._0_1_ = 0x19;
          FUN_005e5070(&puStack_70,&uStack_90,auStack_100,0);
          FUN_00468340();
          iStack_14._0_1_ = 0x18;
          if (0xf < piStack_7c) {
            func_0x0046b1f0(&uStack_90,uStack_90,piStack_7c);
          }
          uStack_80 = 0;
          piStack_7c = (int *)&DAT_0000000f;
          uStack_90 = uStack_90 & 0xffffff00;
          iStack_14._0_1_ = 0x13;
          func_0x00464b40();
          iStack_14._0_1_ = 9;
          func_0x005ee9f0();
        }
        if ((iStack_64 != 4) && ((*(char *)(param_1 + 0x4e) == '\0' || (iStack_64 != 3)))) break;
        if (*(char *)(param_1 + 0x4e) == '\0') {
          pcVar2 = *(code **)(DAT_0145ea60 + 0x30);
          _guard_check_icall(piStack_74);
          (*pcVar2)();
        }
        DAT_0145f258 = '\x01';
        quick_exit(0xffffffff);
LAB_005ee898:
        func_0x008ab40d(&DAT_01463924);
        if (DAT_01463924 == -1) {
          iStack_14._0_1_ = 1;
          _DAT_01463938 = 0;
          _DAT_01463928 = 0;
          uRam0146392c = 0;
          uRam01463930 = 0;
          uRam01463934 = 0;
          _DAT_0146393c = 0;
          func_0x0046bc40(&DAT_0112e1b4,0);
          iStack_14._0_1_ = 2;
          _DAT_01463950 = 0;
          _DAT_01463940 = 0;
          uRam01463944 = 0;
          uRam01463948 = 0;
          uRam0146394c = 0;
          _DAT_01463954 = 0;
          func_0x0046bc40(&DAT_0112e1b4,0);
          iStack_14._0_1_ = 3;
          _DAT_01463968 = 0;
          _DAT_01463958 = 0;
          uRam0146395c = 0;
          uRam01463960 = 0;
          uRam01463964 = 0;
          _DAT_0146396c = 0;
          func_0x0046bc40("WARNING: ",9);
          iStack_14._0_1_ = 4;
          _DAT_01463980 = 0;
          _DAT_01463970 = 0;
          uRam01463974 = 0;
          uRam01463978 = 0;
          uRam0146397c = 0;
          _DAT_01463984 = 0;
          func_0x0046bc40("ERROR: ",7);
          iStack_14._0_1_ = 5;
          _DAT_01463998 = 0;
          _DAT_01463988 = 0;
          uRam0146398c = 0;
          uRam01463990 = 0;
          uRam01463994 = 0;
          _DAT_0146399c = 0;
          func_0x0046bc40("FATAL ERROR: ",0xd);
          iStack_14._0_1_ = 1;
          func_0x008ab7fd(FUN_00f72560);
          iStack_14._0_1_ = 0;
          func_0x008ab3bc(&DAT_01463924);
        }
      }
      iStack_14._0_1_ = 6;
      FUN_00469ba0();
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      FUN_00469ba0();
      puVar10 = (undefined4 *)uStack_2c;
    }
    iStack_14 = 0xffffffff;
    func_0x00e730b2(puVar10);
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_005ef050(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8._0_1_ = 0xff;
  iStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00ed1c95;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1 + 0xf0;
  iVar6 = iVar1;
  iVar5 = func_0x00e7307f(iVar1,uStack_14);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x11c);
    if (iVar5 != 0x7fffffff) {
      iStack_8 = 0;
      if (*(int *)(param_1 + 0x2c) != 0) {
        uStack_20 = 0;
        func_0x005ef630(param_1);
        iStack_8._0_1_ = 1;
        puVar4 = (undefined4 *)uStack_20;
        for (puVar2 = (undefined4 *)*(undefined4 *)uStack_20; puVar2 != puVar4;
            puVar2 = (undefined4 *)*puVar2) {
          uStack_28 = puVar2[9];
          uStack_18 = puVar2[2];
          uStack_24 = 0;
          if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
            func_0x00e701bd();
            goto LAB_005ef158;
          }
          pcVar3 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
          _guard_check_icall(&uStack_18,puVar2 + 3,&uStack_28);
          (*pcVar3)();
        }
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        func_0x005ef580();
      }
      iStack_8 = 0xffffffff;
      func_0x00e730b2(iVar1);
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370(iVar6);
      return;
    }
  }
  else {
LAB_005ef158:
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x11c) = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __thiscall FUN_005ef170(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [7];
  char *pcStack_1c;
  char *pcStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed1cfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1 + 0xf0;
  auStack_38[6] = iVar1;
  iStack_14 = param_1;
  iVar5 = func_0x00e7307f(iVar1,uVar4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x11c);
    if (iVar5 != 0x7fffffff) {
      iStack_8 = 0;
      piVar12 = (int *)(param_1 + 0x30);
      pcVar11 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pcVar11 = *(char **)param_2;
      }
      auStack_38[4] = 0;
      auStack_38[5] = 0;
      auStack_38[0] = 0;
      auStack_38[1] = 0;
      auStack_38[2] = 0;
      auStack_38[3] = 0;
      pcStack_18 = pcVar11 + 1;
      pcVar10 = pcVar11;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      func_0x0046bc40(pcVar11,(int)pcVar10 - (int)pcStack_18);
      iStack_8._0_1_ = 1;
      puVar6 = (undefined4 *)func_0x0083c560();
      iStack_8._0_1_ = 2;
      if (0xf < (uint)puVar6[5]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar7 = func_0x005a85c0(puVar6,0x21,0x40);
      iVar5 = *(int *)(*piVar12 + 4);
      if (iVar7 == 0) {
        uVar4 = (uint)(*(int *)((int)piVar12 + iVar5 + 0x38) == 0) * 4 + 2 |
                *(uint *)((int)piVar12 + iVar5 + 0xc);
      }
      else {
        uVar4 = 4;
        if (*(int *)((int)piVar12 + iVar5 + 0x38) != 0) {
          uVar4 = 0;
        }
      }
      func_0x00464710(uVar4,0);
      iStack_8._0_1_ = 1;
      if (0xf < uStack_3c) {
        func_0x0046b1f0(auStack_50,auStack_50[0],uStack_3c);
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < auStack_38[5]) {
        func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
      }
      auStack_38[4] = 0;
      auStack_38[5] = 0xf;
      auStack_38[0] = auStack_38[0] & 0xffffff00;
      if (*(int *)(iStack_14 + 0x94) != 0) {
        func_0x005d2a90(0,0,2);
        piVar8 = (int *)func_0x005ef7d0(auStack_50);
        iVar5 = piVar8[2] + *piVar8 + -100000;
        iVar7 = 0;
        if (0 < iVar5) {
          iVar7 = iVar5;
        }
        pcStack_18 = (char *)((piVar8[2] + *piVar8) - iVar7);
        func_0x005d2a90(iVar7,iVar7 >> 0x1f,0);
        if (0 < (int)pcStack_18) {
          pcStack_1c = (char *)(iStack_14 + 0x120);
          func_0x004698c0(pcStack_18,0);
          pcVar11 = pcStack_1c;
          if (0xf < *(uint *)((int)pcStack_1c + 0x14)) {
            pcVar11 = *(char **)pcStack_1c;
          }
          func_0x005ef910(pcVar11,pcStack_18,(int)pcStack_18 >> 0x1f);
          func_0x004698c0(*(undefined4 *)(iStack_14 + 0x38),0);
        }
        iVar5 = func_0x005a8550();
        if (iVar5 == 0) {
          func_0x00464710((uint)(*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) * 4 +
                          2 | *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc),0);
        }
      }
      pcVar11 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pcVar11 = *(char **)param_2;
      }
      auStack_38[4] = 0;
      auStack_38[5] = 0;
      auStack_38[0] = 0;
      auStack_38[1] = 0;
      auStack_38[2] = 0;
      auStack_38[3] = 0;
      pcStack_1c = pcVar11 + 1;
      pcVar10 = pcVar11;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      func_0x0046bc40(pcVar11,(int)pcVar10 - (int)pcStack_1c);
      iStack_8._0_1_ = 3;
      puVar6 = (undefined4 *)func_0x0083c560();
      iStack_8._0_1_ = 4;
      if (0xf < (uint)puVar6[5]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar7 = func_0x005a85c0(puVar6,10,0x40);
      iVar5 = *(int *)(*piVar12 + 4);
      if (iVar7 == 0) {
        uVar4 = (uint)(*(int *)((int)piVar12 + iVar5 + 0x38) == 0) * 4 + 2 |
                *(uint *)((int)piVar12 + iVar5 + 0xc);
      }
      else {
        uVar4 = 4;
        if (*(int *)((int)piVar12 + iVar5 + 0x38) != 0) {
          uVar4 = 0;
        }
      }
      func_0x00464710(uVar4,0);
      iStack_8._0_1_ = 3;
      if (0xf < uStack_3c) {
        func_0x0046b1f0(auStack_50,auStack_50[0],uStack_3c);
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
      iStack_8._0_1_ = 0;
      if (0xf < auStack_38[5]) {
        func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
      }
      auStack_38[4] = 0;
      auStack_38[5] = 0xf;
      auStack_38[0] = auStack_38[0] & 0xffffff00;
      if ((*(int *)(iStack_14 + 0x94) == 0) ||
         (*(int *)(*(int *)(*piVar12 + 4) + 0x3c + iStack_14) != 0)) {
        auStack_38[4] = 0;
        auStack_38[5] = 0;
        auStack_38[0] = 0;
        auStack_38[1] = 0;
        auStack_38[2] = 0;
        auStack_38[3] = 0;
        func_0x0046bc40("Unable to save log to \'%s\'",0x1a);
        iStack_8._0_1_ = 5;
        uVar9 = func_0x00484eb0(param_2);
        iStack_8._0_1_ = 6;
        FUN_005ee340(3,uVar9);
        iStack_8._0_1_ = 5;
        if (0xf < uStack_3c) {
          func_0x0046b1f0(auStack_50,auStack_50[0],uStack_3c);
        }
        uStack_40 = 0;
        uStack_3c = 0xf;
        auStack_50[0] = auStack_50[0] & 0xffffff00;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (0xf < auStack_38[5]) {
          func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
        }
        auStack_38[4] = 0;
        auStack_38[5] = 0xf;
        auStack_38[0] = auStack_38[0] & 0xffffff00;
      }
      else {
        func_0x0046aeb0();
      }
      iStack_8 = 0xffffffff;
      func_0x00e730b2(iVar1);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x11c) = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



undefined * Catch_005ef88b(void)

{
  func_0x0046a610(4,1);
  return &DAT_005ef8a4;
}



undefined * Catch_005ef9d5(void)

{
  func_0x0046a610(4,1);
  return &DAT_005ef9ee;
}



void __thiscall FUN_005efe00(int param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1edb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  if (0xf < *(uint *)(param_1 + 0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x20),uVar2);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_005efe90(void)

{
  return &`public:_void___thiscall_Logger::log(enum_Fw::LogLevel,class_std::basic_string<>_const&)'
          ::__l17::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_005efea0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x2c);
  if (piVar1 != (int *)0x0) {
    uStack_14 = *(undefined4 *)(param_1 + 0x24);
    uStack_c = *(undefined4 *)(param_1 + 8);
    uStack_10 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(&uStack_c,param_1 + 0xc,&uStack_14);
    (*pcVar2)();
  }
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005eff00(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed1f23;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  func_0x00469da0(param_1 + 0xc);
  puVar2[9] = *(undefined4 *)(param_1 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



int __thiscall FUN_005effa0(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x78;
  func_0x005ee2a0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0xc0);
  }
  return iVar1;
}



undefined4 __thiscall FUN_005f0320(undefined4 param_1,byte param_2)

{
  func_0x005f0350();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x160);
  }
  return param_1;
}



void __fastcall FUN_005f0550(code *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined8 *puStack_a4;
  code *pcStack_a0;
  undefined8 ****ppppuStack_9c;
  code *pcStack_98;
  undefined8 ****ppppuStack_94;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_8c;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_84;
  uint uStack_80;
  undefined8 ****ppppuStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 ****ppppuStack_5c;
  undefined8 ****ppppuStack_58;
  undefined8 ****appppuStack_54 [4];
  undefined4 uStack_44;
  undefined8 ****ppppuStack_40;
  code *pcStack_3c;
  uint uStack_38;
  undefined8 uStack_34;
  code *pcStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = -1;
  puStack_c = &DAT_00ed21be;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_80 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_80;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  pcStack_3c = param_1;
  uStack_18 = uStack_80;
  puVar4 = &uStack_80;
  if (param_1[0x10] == (code)0x0) {
    iStack_8 = 0;
    ppppuStack_84 = (undefined8 ****)0x114260c;
    ppppuStack_88 = (undefined8 ****)0x5f05a4;
    pcStack_2c = param_1;
    func_0x00469d30();
    iStack_8._0_1_ = 1;
    ppppuStack_88 = (undefined8 ****)0x1142614;
    ppppuStack_8c = (undefined8 ****)0x5f05b5;
    func_0x00469d30();
    iStack_8._0_1_ = 2;
    ppppuStack_8c = (undefined8 ****)&ppppuStack_6c;
    ppppuStack_90 = (undefined8 ****)appppuStack_54;
    ppppuStack_94 = (undefined8 ****)0x5f05c6;
    func_0x0077acd0();
    iStack_8._0_1_ = 1;
    ppppuStack_94 = (undefined8 ****)0x5f05d2;
    FUN_00469ba0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    ppppuStack_94 = (undefined8 ****)0x5f05de;
    FUN_00469ba0();
    ppppuStack_94 = *(undefined8 *****)(param_1 + 0x1c);
    pcStack_98 = (code *)0xffffd8f0;
    ppppuStack_9c = (undefined8 ****)DAT_0145e9f0;
    pcStack_a0 = (code *)0x5f05f1;
    func_0x00d66960();
    pcStack_98 = param_1 + 0x80;
    uStack_28 = CONCAT44(pcStack_98,(char *)uStack_28);
    ppppuStack_9c = (undefined8 ****)0x5f0603;
    func_0x005f0000();
    ppppuStack_9c = (undefined8 ****)0xfffffffe;
    pcStack_a0 = DAT_0145e9f0;
    puStack_a4 = (undefined8 *)0x5f0610;
    func_0x00d66d90();
    puVar1 = *(undefined4 **)(param_1 + 0x148);
    puVar7 = (undefined4 *)*puVar1;
    uStack_20 = CONCAT44(puVar1,(char *)uStack_20);
    while (pcVar3 = pcStack_3c, puVar7 != puVar1) {
      pcStack_a0 = (code *)(puVar7 + 2);
      uStack_20 = CONCAT44(pcStack_a0,(char *)uStack_20);
      ppppuStack_9c = (undefined8 ****)uStack_28._4_4_;
      puStack_a4 = (undefined8 *)0x5f0647;
      cVar5 = func_0x0046b8e0();
      if (cVar5 != '\0') {
        ppppuStack_9c = (undefined8 ****)0x11425f4;
        pcStack_a0 = (code *)0x5f0aaa;
        func_0x00469d30();
        iStack_8._0_1_ = 3;
        pcStack_a0 = (code *)0x5f0ab6;
        func_0x0047d860();
LAB_005f0ab6:
        ppppuStack_9c = (undefined8 ****)0x1142654;
        pcStack_a0 = (code *)0x5f0ac3;
        func_0x00469d30();
        iStack_8._0_1_ = 5;
        pcStack_a0 = (code *)uStack_20._4_4_;
        puStack_a4 = (undefined8 *)0x5f0ad5;
        func_0x00484eb0();
        iStack_8._0_1_ = 6;
        pcStack_a0 = (code *)0x5f0ae3;
        func_0x0047d860();
LAB_005f0ae3:
        ppppuStack_9c = (undefined8 ****)0x1142674;
        pcStack_a0 = (code *)0x5f0af0;
        func_0x00469d30();
        iStack_8._0_1_ = 7;
        pcStack_a0 = (code *)uStack_20._4_4_;
        puStack_a4 = (undefined8 *)0x5f0b02;
        func_0x00484eb0();
        iStack_8._0_1_ = 8;
        pcStack_a0 = (code *)0x5f0b10;
        func_0x0047d860();
LAB_005f0b10:
        ppppuStack_9c = (undefined8 ****)0x114261c;
        pcStack_a0 = (code *)0x5f0b1d;
        func_0x00469d30();
        iStack_8._0_1_ = 9;
        pcStack_a0 = (code *)uStack_20._4_4_;
        puStack_a4 = (undefined8 *)0x5f0b2f;
        func_0x00484eb0();
        iStack_8 = CONCAT31(iStack_8._1_3_,10);
        pcStack_a0 = (code *)0x5f0b3d;
        func_0x0047d860();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_34 = 0;
      ppppuStack_9c = (undefined8 ****)(puVar7 + 2);
      pcStack_a0 = (code *)&uStack_34;
      puStack_a4 = (undefined8 *)0x5f066c;
      FUN_005f3e10();
      iStack_8._0_1_ = 4;
      if ((undefined8 *****)uStack_34 == (undefined8 *****)0x0) goto LAB_005f0ab6;
      ppppuStack_9c = (undefined8 ****)0x1;
      pcStack_a0 = uStack_28._4_4_;
      puStack_a4 = (undefined8 *)0x5f0685;
      cVar5 = func_0x005f1310();
      if (cVar5 != '\0') goto LAB_005f0ae3;
      if (*(char *)((undefined8 ****)(undefined8 *****)uStack_34 + 4) == '\0') {
        ppppuStack_9c = (undefined8 ****)0x5f069a;
        cVar5 = FUN_005f0550();
        if (cVar5 == '\0') goto LAB_005f0b10;
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      ppppuStack_9c = (undefined8 ****)0x5f06ae;
      FUN_00468340();
      puVar7 = (undefined4 *)*puVar7;
      uStack_20 = CONCAT44(puVar7,(char *)uStack_20);
    }
    if (pcStack_3c[0x13] != (code)0x0) {
      ppppuStack_9c = *(undefined8 *****)(pcStack_3c + 0x1c);
      pcStack_a0 = (code *)0x5f06c9;
      func_0x0077ac80();
    }
    puVar1 = *(undefined4 **)(pcVar3 + 0x150);
    puVar7 = (undefined4 *)*puVar1;
    uStack_28 = CONCAT44(puVar1,(int)uStack_28);
    while (pcVar3 = pcStack_3c, puVar7 != puVar1) {
      ppppuStack_9c = (undefined8 ****)(puVar7 + 2);
      pcStack_a0 = (code *)0x5f06f2;
      func_0x00777dd0();
      uStack_20 = 0;
      pcStack_a0 = (code *)0x5f0702;
      func_0x005f2ad0();
      iStack_8._0_1_ = 0xb;
      pcStack_a0 = (code *)&uStack_20;
      puStack_a4 = (undefined8 *)0x0;
      func_0x00778fc0(0);
      if (*(int *)((char *)uStack_20 + 0x10) != 0) {
        ppppuStack_9c = (undefined8 ****)(char *)uStack_20;
        pcStack_a0 = (code *)0x5f072a;
        func_0x005f0b40();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        ppppuStack_84 = (undefined8 ****)0x5f0736;
        FUN_00468340();
        puVar4 = (uint *)puStack_14;
        goto LAB_005f0a81;
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      ppppuStack_9c = (undefined8 ****)0x5f0747;
      FUN_00468340();
      puVar7 = (undefined4 *)*puVar7;
      uStack_28 = CONCAT44(puVar7,(char *)uStack_28);
    }
    ppppuStack_9c = (undefined8 ****)(pcStack_3c + 0x20);
    if (*(int *)(pcStack_3c + 0x48) != 0) {
      puStack_a4 = (undefined8 *)0x5f0768;
      pcStack_a0 = pcStack_3c + 0x38;
      func_0x0077a590();
      if (pcVar3[0x13] != (code)0x0) {
        puStack_a4 = *(undefined8 **)(pcVar3 + 0x1c);
        func_0x00d66960(DAT_0145e9f0,0xffffd8f0);
        func_0x00d66ae0(DAT_0145e9f0,0xfffffffe);
      }
      uStack_28 = 0;
      puStack_a4 = (undefined8 *)0x5f07a1;
      func_0x005f2ad0();
      iStack_8._0_1_ = 0xc;
      puStack_a4 = &uStack_28;
      func_0x00778fc0(0,0);
      if (*(int *)((char *)uStack_28 + 0x10) != 0) {
        ppppuStack_9c = (undefined8 ****)(char *)uStack_28;
        pcStack_a0 = (code *)0x5f07c9;
        func_0x005f0b40();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        ppppuStack_84 = (undefined8 ****)0x5f07d5;
        FUN_00468340();
        puVar4 = (uint *)puStack_14;
        goto LAB_005f0a81;
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      ppppuStack_9c = (undefined8 ****)0x5f07e6;
      FUN_00468340();
    }
    if (pcVar3[0x13] != (code)0x0) {
      ppppuStack_9c = (undefined8 ****)0x5f07f1;
      func_0x005effb0();
    }
    pcVar3[0x10] = (code)0x1;
    ppppuStack_9c = (undefined8 ****)0x1142640;
    pcStack_a0 = (code *)0x5f0802;
    func_0x00469d30();
    iStack_8._0_1_ = 0xd;
    pcStack_a0 = pcVar3 + 0x80;
    puStack_a4 = (undefined8 *)0x5f0818;
    pcStack_a0 = (code *)func_0x00484eb0();
    iStack_8._0_1_ = 0xe;
    puStack_a4 = (undefined8 *)0x0;
    FUN_005ee340();
    iStack_8._0_1_ = 0xd;
    pcStack_a0 = (code *)0x5f0838;
    FUN_00469ba0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    pcStack_a0 = (code *)0x5f0844;
    FUN_00469ba0();
    iStack_8 = 0xffffffff;
    uStack_28 = CONCAT44(&puStack_a4,(char *)uStack_28);
    func_0x004ab7f0(&puStack_a4);
    iStack_8 = -1;
    func_0x005f3f70();
    piVar2 = *(int **)(pcVar3 + 0x158);
    piVar8 = (int *)*piVar2;
    if (piVar8 != piVar2) {
      uStack_28 = CONCAT44(pcStack_3c + 0x80,(char *)uStack_28);
      do {
        ppppuStack_84 = (undefined8 ****)(piVar8 + 2);
        uStack_34 = 0;
        ppppuStack_88 = (undefined8 ****)&uStack_34;
        ppppuStack_8c = (undefined8 ****)0x5f08aa;
        FUN_005f3e10();
        iStack_8 = 0x12;
        if ((undefined8 *****)uStack_34 == (undefined8 *****)0x0) {
          ppppuStack_6c = (undefined8 ****)0x0;
          uStack_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          ppppuStack_5c = (undefined8 ****)(undefined8 *****)uStack_34;
          ppppuStack_58 = (undefined8 ****)(undefined8 *****)uStack_34;
          ppppuStack_84 = (undefined8 ****)0x2b;
          ppppuStack_88 = (undefined8 ****)0x1142558;
          ppppuStack_8c = (undefined8 ****)0x5f08d8;
          func_0x0046bc40();
          iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
          iStack_8._0_1_ = 0x14;
          ppppuStack_94 = (undefined8 ****)&ppppuStack_6c;
          if (&DAT_0000000f < ppppuStack_58) {
            ppppuStack_94 = ppppuStack_6c;
          }
          ppppuStack_8c = (undefined8 ****)uStack_28._4_4_;
          ppppuStack_90 = (undefined8 ****)(piVar8 + 2);
          pcStack_98 = (code *)0x5f08fc;
          iVar6 = func_0x0057c200();
          ppppuStack_90 = (undefined8 ****)(iVar6 + 1);
          if (SCARRY4(iVar6,1)) {
            ppppuStack_90 = (undefined8 ****)0xffffffff;
          }
          ppppuStack_8c = (undefined8 ****)0x0;
          ppppuStack_94 = (undefined8 ****)0x5f0915;
          func_0x00469c80();
          uStack_38 = uStack_38 | 1;
          ppppuStack_9c = (undefined8 ****)&ppppuStack_6c;
          if (&DAT_0000000f < ppppuStack_58) {
            ppppuStack_9c = ppppuStack_6c;
          }
          ppppuStack_94 = (undefined8 ****)uStack_28._4_4_;
          pcStack_98 = (code *)(piVar8 + 2);
          pcStack_a0 = (code *)0x5f0944;
          pcStack_98 = (code *)func_0x0057c200();
          ppppuStack_94 = (undefined8 ****)0x0;
          ppppuStack_9c = (undefined8 ****)0x5f0952;
          func_0x004698c0();
          ppppuStack_84 = (undefined8 ****)appppuStack_54;
          ppppuStack_88 = (undefined8 ****)0x3;
          ppppuStack_8c = (undefined8 ****)0x5f0962;
          FUN_005ee340();
          uStack_38 = uStack_38 & 0xfffffffe;
          iStack_8._0_1_ = 0x13;
          if (&DAT_0000000f < ppppuStack_40) {
            ppppuStack_84 = ppppuStack_40;
            ppppuStack_88 = appppuStack_54[0];
            ppppuStack_8c = (undefined8 ****)appppuStack_54;
            ppppuStack_90 = (undefined8 ****)0x5f097f;
            func_0x0046b1f0();
          }
          uStack_44 = 0;
          ppppuStack_40 = (undefined8 ****)&DAT_0000000f;
          appppuStack_54[0] = (undefined8 ****)((uint)appppuStack_54[0] & 0xffffff00);
          iStack_8 = CONCAT31(iStack_8._1_3_,0x12);
          if (&DAT_0000000f < ppppuStack_58) {
            ppppuStack_84 = ppppuStack_58;
            ppppuStack_88 = ppppuStack_6c;
            ppppuStack_8c = (undefined8 ****)&ppppuStack_6c;
            ppppuStack_90 = (undefined8 ****)0x5f09ad;
            func_0x0046b1f0();
          }
          ppppuStack_5c = (undefined8 ****)0x0;
          ppppuStack_58 = (undefined8 ****)0xf;
          ppppuStack_6c = (undefined8 ****)((uint)ppppuStack_6c & 0xffffff00);
        }
        else if (*(char *)((undefined8 *****)uStack_34 + 4) == '\0') {
          ppppuStack_84 = (undefined8 ****)0x5f09cf;
          FUN_005f0550();
        }
        iStack_8 = -1;
        uStack_20 = CONCAT44(uStack_34._4_4_,(char *)uStack_20);
        if (uStack_34._4_4_ != (undefined4 *)0x0) {
          LOCK();
          iVar6 = uStack_34._4_4_[1] + -1;
          uStack_34._4_4_[1] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcStack_2c = *(code **)*uStack_34._4_4_;
            ppppuStack_84 = (undefined8 ****)0x5f09f9;
            _guard_check_icall();
            ppppuStack_84 = (undefined8 ****)0x5f09ff;
            (*pcStack_2c)();
            LOCK();
            iVar6 = uStack_20._4_4_[2] + -1;
            uStack_20._4_4_[2] = iVar6;
            UNLOCK();
            if (iVar6 == 0) {
              pcStack_2c = *(code **)(*uStack_20._4_4_ + 4);
              ppppuStack_84 = (undefined8 ****)0x5f0a1e;
              _guard_check_icall();
              ppppuStack_84 = (undefined8 ****)0x5f0a24;
              (*pcStack_2c)();
            }
          }
        }
        piVar8 = (int *)*piVar8;
      } while (piVar8 != piVar2);
    }
    pcStack_3c[0x14] = (code)0x1;
    puVar4 = (uint *)puStack_14;
  }
LAB_005f0a81:
  puStack_14 = (undefined1 *)puVar4;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_005f0a39(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6c) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  func_0x00469d30(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  func_0x005f0b40(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00469ba0();
  return &DAT_005f0a78;
}



void __fastcall FUN_005f0dd0(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 ***pppuStack_90;
  undefined4 ***pppuStack_8c;
  undefined4 **ppuStack_88;
  undefined4 **ppuStack_84;
  undefined4 **ppuStack_80;
  undefined4 **ppuStack_7c;
  uint uStack_78;
  undefined4 ***pppuStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 ***pppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  char *pcStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ed2285;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_78 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_78;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pcStack_38 = (char *)(param_1 + 0x10);
  if (*pcStack_38 != '\0') {
    iStack_14 = 0;
    iStack_2c = param_1;
    puVar2 = &stack0xfffffffc;
    puVar3 = &uStack_78;
    if (*(char *)(param_1 + 0x13) != '\0') {
      ppuStack_7c = *(undefined4 ***)(param_1 + 0x1c);
      ppuStack_80 = (undefined4 **)0x5f0e38;
      func_0x0077ac80();
      puVar2 = puStack_24;
      puVar3 = (uint *)puStack_20;
    }
    puStack_20 = (undefined1 *)puVar3;
    puStack_24 = puVar2;
    ppuStack_7c = (undefined4 **)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x78) != 0) {
      ppuStack_84 = (undefined4 **)0x5f0e4b;
      ppuStack_80 = (undefined4 **)(param_1 + 0x68);
      func_0x0077a590();
      uStack_34 = 0;
      piStack_30 = (int *)0x0;
      iStack_14._0_1_ = 1;
      ppuStack_84 = (undefined4 **)&uStack_34;
      ppuStack_88 = (undefined4 **)0x0;
      pppuStack_8c = (undefined4 ***)0x0;
      pppuStack_90 = (undefined4 ***)0x5f0e6f;
      func_0x00778fc0();
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      if (piStack_30 != (int *)0x0) {
        LOCK();
        iVar4 = piStack_30[1] + -1;
        piStack_30[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar1 = *(code **)*piStack_30;
          ppuStack_7c = (undefined4 **)0x5f0e90;
          _guard_check_icall();
          ppuStack_7c = (undefined4 **)0x5f0e95;
          (*pcVar1)();
          LOCK();
          iVar4 = piStack_30[2] + -1;
          piStack_30[2] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar1 = *(code **)(*piStack_30 + 4);
            ppuStack_7c = (undefined4 **)0x5f0eaf;
            _guard_check_icall();
            ppuStack_7c = (undefined4 **)0x5f0eb4;
            (*pcVar1)();
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      ppuStack_7c = (undefined4 **)0x5f0ebf;
      func_0x005effb0();
    }
    iStack_14 = 0xffffffff;
    ppuStack_7c = *(undefined4 ***)(param_1 + 0x1c);
    ppuStack_80 = (undefined4 **)0xffffd8f0;
    ppuStack_84 = DAT_0145e9f0;
    ppuStack_88 = (undefined4 ***)0x5f0fa5;
    func_0x00d66960();
    ppuStack_7c = DAT_0145e9f0;
    ppuStack_80 = (undefined4 **)0x5f0fb3;
    func_0x00d667d0();
    ppuStack_7c = (undefined4 **)0xfffffffe;
    ppuStack_80 = DAT_0145e9f0;
    ppuStack_84 = (undefined4 **)0x5f0fc3;
    iVar4 = func_0x00d66500();
    while (iVar4 != 0) {
      ppuStack_7c = (undefined4 **)0xfffffffe;
      ppuStack_84 = (undefined4 **)0x5f0fdd;
      ppuStack_80 = DAT_0145e9f0;
      func_0x00d66d90();
      ppuStack_84 = (undefined4 **)0xffffffff;
      ppuStack_88 = DAT_0145e9f0;
      pppuStack_8c = (undefined4 ***)0x5f0fea;
      func_0x00d668e0();
      pppuStack_8c = (undefined4 ***)0xfffffffd;
      pppuStack_90 = DAT_0145e9f0;
      iVar4 = func_0x00d66500();
      if (iVar4 == 0) {
        ppuStack_7c = DAT_0145e9f0;
        ppuStack_80 = (undefined4 **)0x5f1054;
        func_0x00d667d0();
        ppuStack_7c = (undefined4 **)0xfffffffd;
        ppuStack_80 = DAT_0145e9f0;
        ppuStack_84 = (undefined4 **)0x5f1064;
        func_0x00d669c0();
        break;
      }
      ppuStack_7c = (undefined4 **)0xfffffffe;
      ppuStack_80 = DAT_0145e9f0;
      ppuStack_84 = (undefined4 **)0x5f100b;
      func_0x00d66d90();
      ppuStack_84 = (undefined4 **)0xfffffffe;
      ppuStack_88 = DAT_0145e9f0;
      pppuStack_8c = (undefined4 ***)0x5f1018;
      func_0x00d66260();
      pppuStack_8c = DAT_0145e9f0;
      pppuStack_90 = (undefined4 ***)0x5f1023;
      func_0x00d667d0();
      ppuStack_7c = (undefined4 **)0xfffffffc;
      ppuStack_80 = DAT_0145e9f0;
      ppuStack_84 = (undefined4 **)0x5f1033;
      func_0x00d669c0();
      ppuStack_84 = (undefined4 **)0xfffffffe;
      ppuStack_88 = DAT_0145e9f0;
      pppuStack_8c = (undefined4 ***)0x5f1040;
      iVar4 = func_0x00d66500();
    }
    ppuStack_7c = (undefined4 **)0xfffffffe;
    ppuStack_80 = DAT_0145e9f0;
    ppuStack_84 = (undefined4 **)0x5f1074;
    func_0x00d66d90();
    pppuStack_6c = (undefined4 ****)0x0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    ppuStack_7c = (undefined4 **)0x6;
    ppuStack_80 = (undefined4 **)0x114260c;
    ppuStack_84 = (undefined4 **)0x5f109b;
    func_0x0046bc40();
    iStack_14 = 5;
    pppuStack_54 = (undefined4 ****)0x0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    ppuStack_84 = (undefined4 **)0x7;
    ppuStack_88 = (undefined4 **)0x1142614;
    pppuStack_8c = (undefined4 ***)0x5f10c6;
    func_0x0046bc40();
    iStack_14 = CONCAT31(iStack_14._1_3_,6);
    pppuStack_8c = &pppuStack_54;
    if (0xf < uStack_40) {
      pppuStack_8c = pppuStack_54;
    }
    pppuStack_90 = (undefined4 ***)0xffffd8ee;
    func_0x00d66060(DAT_0145e9f0);
    pppuStack_8c = (undefined4 ***)0xffffffff;
    pppuStack_90 = DAT_0145e9f0;
    iVar4 = func_0x00d67010();
    if (iVar4 != 0) {
      pppuStack_8c = &pppuStack_6c;
      if (0xf < uStack_58) {
        pppuStack_8c = pppuStack_6c;
      }
      pppuStack_90 = (undefined4 ***)0xffffffff;
      func_0x00d66060(DAT_0145e9f0);
      pppuStack_8c = (undefined4 ***)0xfffffffe;
      pppuStack_90 = DAT_0145e9f0;
      func_0x00d66a80();
    }
    iStack_14 = CONCAT31(iStack_14._1_3_,5);
    if (0xf < uStack_40) {
      pppuStack_8c = (undefined4 ***)uStack_40;
      pppuStack_90 = pppuStack_54;
      func_0x0046b1f0(&pppuStack_54);
    }
    uStack_44 = 0;
    uStack_40 = 0xf;
    pppuStack_54 = (undefined4 ***)((uint)pppuStack_54 & 0xffffff00);
    iStack_14 = 0xffffffff;
    if (0xf < uStack_58) {
      pppuStack_8c = (undefined4 ***)uStack_58;
      pppuStack_90 = pppuStack_6c;
      func_0x0046b1f0(&pppuStack_6c);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    pppuStack_6c = (undefined4 ***)((uint)pppuStack_6c & 0xffffff00);
    pppuStack_8c = DAT_0145e9f0;
    pppuStack_90 = (undefined4 ***)0x5f1193;
    func_0x00d667d0();
    pppuStack_8c = (undefined4 ***)(param_1 + 0x80);
    if (0xf < *(uint *)(param_1 + 0x94)) {
      pppuStack_8c = (undefined4 ***)*pppuStack_8c;
    }
    pppuStack_90 = (undefined4 ***)0xfffffffe;
    func_0x00d66b60(DAT_0145e9f0);
    pppuStack_8c = (undefined4 ***)0xfffffffe;
    pppuStack_90 = DAT_0145e9f0;
    func_0x00d66d90();
    *pcStack_38 = '\0';
    pcStack_38 = (char *)&pppuStack_90;
    func_0x004ab7f0(&pppuStack_90);
    iStack_14 = 0xffffffff;
    func_0x005f3f70();
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



undefined * Catch_005f0ecb(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x1c) + 0x13) != '\0') {
    func_0x005effb0();
  }
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x2c) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  func_0x0046bc40("Unable to unload module \'%s\': %s",0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = func_0x004852c0(*(int *)(unaff_EBP + -0x1c) + 0x80,unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(unaff_EBP + -0x5c,*(undefined4 *)(unaff_EBP + -0x5c),
                    *(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x5c) = 0;
  return &DAT_005f0f85;
}



void FUN_005f1200(void)

{
  FUN_005f0dd0();
  FUN_005f0550();
  return;
}



undefined4 __thiscall FUN_005f1470(int param_1,undefined4 *param_2)

{
  func_0x00d66960(*param_2,0xffffd8f0,*(undefined4 *)(param_1 + 0x1c));
  return 1;
}



void __fastcall FUN_005f2fc0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  if (0xf < *(uint *)(param_1 + 0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
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



undefined1 __fastcall FUN_005f3020(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0x12) != '\0')) {
    cVar1 = func_0x005f1220();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



undefined1 __fastcall FUN_005f3040(int param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



void __fastcall FUN_005f3050(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  int *piStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  int iStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  char cStack_45;
  code *pcStack_44;
  code *pcStack_40;
  int *piStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed284e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_4c = 0;
  iVar9 = *(int *)(param_1 + 0x14);
  func_0x0049a600((int *)(param_1 + 0x14),*(undefined4 *)(iVar9 + 4),uStack_14);
  *(int *)(iVar9 + 4) = iVar9;
  *(int *)iVar9 = iVar9;
  *(int *)(iVar9 + 8) = iVar9;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uStack_38 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  puStack_60 = (undefined8 *)0x0;
  iStack_5c = 0;
  piStack_58 = (int *)0x0;
  piStack_54 = (int *)0x0;
  func_0x0046bc40("/modules",8);
  uStack_8 = 0;
  FUN_005fd490(&uStack_38,&uStack_68,1,0);
  uStack_8._0_1_ = 2;
  if (0xf < piStack_54) {
    func_0x0046b1f0(&uStack_68,uStack_68,piStack_54);
  }
  piStack_58 = (int *)0x0;
  piStack_54 = (int *)&DAT_0000000f;
  uStack_68 = uStack_68 & 0xffffff00;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  func_0x0046bc40("/mods",5);
  uStack_8._0_1_ = 3;
  piVar8 = (int *)FUN_005fd490(&uStack_24,&uStack_84,1,0);
  uStack_8._0_1_ = 4;
  if (((int *)&uStack_38 != piVar8) && (uVar1 = piVar8[1], uVar1 != 0)) {
    piVar2 = (int *)*piVar8;
    pcStack_44 = (code *)*piVar2;
    if (0x7ffffffU - uStack_38._4_4_ < uVar1) {
      func_0x00e701fa("list too long");
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uStack_38 = CONCAT44(uStack_38._4_4_ + uVar1,(code *)uStack_38);
    piVar8[1] = piVar8[1] - uVar1;
    piStack_3c = *(int **)((int)pcStack_44 + 4);
    *piStack_3c = (int)piVar2;
    piVar8 = (int *)piVar2[1];
    *piVar8 = (int)(code *)uStack_38;
    piVar3 = *(int **)((int)(code *)uStack_38 + 4);
    *piVar3 = (int)pcStack_44;
    *(int **)((int)(code *)uStack_38 + 4) = piVar8;
    piVar2[1] = (int)piStack_3c;
    *(int **)((int)pcStack_44 + 4) = piVar3;
  }
  uStack_8._0_1_ = 3;
  func_0x00482c40();
  uStack_8._0_1_ = 2;
  if (0xf < uStack_70) {
    func_0x0046b1f0(&uStack_84,uStack_84,uStack_70);
  }
  uStack_74 = 0;
  uStack_70 = 0xf;
  uStack_84 = uStack_84 & 0xffffff00;
  uStack_30 = 0;
  iVar9 = func_0x008ab47d(0x20);
  *(int *)iVar9 = iVar9;
  *(int *)(iVar9 + 4) = iVar9;
  uStack_30 = CONCAT44(uStack_30._4_4_,iVar9);
  uStack_8._0_1_ = 5;
  uVar7 = (undefined1)uStack_8;
  uStack_8._0_1_ = 5;
  pcStack_40 = (code *)uStack_38;
  pcStack_44 = *(code **)(code *)uStack_38;
  if (pcStack_44 != (code *)uStack_38) {
    do {
      uStack_24 = 0;
      FUN_005fd490(&uStack_24,pcStack_44 + 8,1,0);
      uVar1 = (uint)uStack_8._1_3_;
      puStack_60 = &uStack_30;
      piVar8 = (int *)uStack_24;
      piStack_50 = (int *)uStack_30;
      piStack_6c = (int *)*(int *)uStack_24;
      iStack_5c = 0;
      piStack_58 = (int *)0x0;
      piStack_54 = (int *)0x0;
      if (piStack_6c != (int *)uStack_24) {
        uStack_8 = CONCAT31(uStack_8._1_3_,8);
        uStack_1c = ZEXT48(&uStack_30);
        piStack_3c = (int *)func_0x008ab47d(0x20);
        piVar2 = piStack_6c;
        uStack_1c = CONCAT44(piStack_3c,(int)uStack_1c);
        func_0x00469da0(piStack_6c + 2);
        iStack_5c = 1;
        piStack_54 = piStack_3c;
        piStack_58 = piStack_3c;
        for (piVar2 = (int *)*piVar2; uStack_1c = uStack_1c & 0xffffffff, piStack_3c = piStack_58,
            piVar2 != piVar8; piVar2 = (int *)*piVar2) {
          piStack_6c = (int *)func_0x008ab47d(0x20);
          uStack_1c = CONCAT44(piStack_6c,(int)uStack_1c);
          func_0x00469da0(piVar2 + 2);
          iStack_5c = iStack_5c + 1;
          *piStack_3c = (int)piStack_6c;
          piStack_6c[1] = (int)piStack_3c;
          piStack_58 = piStack_6c;
        }
        uVar1 = uStack_8 >> 8;
      }
      pcVar5 = pcStack_44;
      iVar9 = iStack_5c;
      uStack_8._1_3_ = (uint3)uVar1;
      if (iStack_5c != 0) {
        puVar4 = (undefined4 *)piStack_50[1];
        iStack_5c = 0;
        piStack_54[1] = (int)puVar4;
        *puVar4 = piStack_54;
        *piStack_58 = (int)piStack_50;
        piStack_50[1] = (int)piStack_58;
        uStack_30 = CONCAT44(uStack_30._4_4_ + iVar9,(int *)uStack_30);
      }
      uStack_8._0_1_ = 6;
      func_0x005f46b0();
      uStack_8._0_1_ = 5;
      *(undefined4 *)((int *)uStack_24)[1] = 0;
      piVar8 = (int *)*(int *)uStack_24;
      while (piStack_3c = piVar8, piVar8 != (int *)0x0) {
        piStack_50 = (int *)*piVar8;
        piVar2 = piVar8 + 2;
        if (0xf < (uint)piVar8[7]) {
          func_0x0046b1f0(piVar2,*piVar2,piVar8[7]);
        }
        piVar8[6] = 0;
        piVar8[7] = 0xf;
        *(undefined1 *)piVar2 = 0;
        func_0x008ab812(piStack_3c,0x20);
        piVar8 = piStack_50;
      }
      func_0x008ab812((int *)uStack_24,0x20);
      pcStack_44 = *(code **)pcVar5;
      uVar7 = (undefined1)uStack_8;
    } while (pcStack_44 != pcStack_40);
  }
  uStack_8._0_1_ = uVar7;
  puVar6 = (int *)uStack_30;
  for (puVar4 = (undefined4 *)*(int *)uStack_30; puVar4 != puVar6; puVar4 = (undefined4 *)*puVar4) {
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    func_0x0046bc40("otmod",5);
    uStack_8._0_1_ = 9;
    cStack_45 = FUN_005fe7e0(puVar4 + 2,&uStack_84);
    uStack_8._0_1_ = 5;
    if (0xf < uStack_70) {
      func_0x0046b1f0(&uStack_84,uStack_84,uStack_70);
    }
    uStack_74 = 0;
    uStack_70 = 0xf;
    uStack_84 = uStack_84 & 0xffffff00;
    if (cStack_45 != '\0') {
      uStack_1c = 0;
      FUN_005f3710(&uStack_1c,puVar4 + 2);
      if (((int)uStack_1c != 0) && (*(char *)((int)uStack_1c + 0x11) != '\0')) {
        uStack_28 = *(undefined4 *)((int)uStack_1c + 0x18);
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
          UNLOCK();
        }
        uStack_24 = uStack_1c;
        uStack_8._0_1_ = 0xb;
        uStack_4c = uStack_4c | 1;
        func_0x005f4780(&piStack_50,&uStack_28);
        uStack_4c = uStack_4c & 0xfffffffe;
        uStack_8._0_1_ = 10;
        if (uStack_24._4_4_ != (undefined4 *)0x0) {
          LOCK();
          iVar9 = uStack_24._4_4_[1] + -1;
          uStack_24._4_4_[1] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcStack_40 = *(code **)*uStack_24._4_4_;
            _guard_check_icall();
            (*pcStack_40)();
            LOCK();
            iVar9 = uStack_24._4_4_[2] + -1;
            uStack_24._4_4_[2] = iVar9;
            UNLOCK();
            if (iVar9 == 0) {
              pcStack_40 = *(code **)(*uStack_24._4_4_ + 4);
              _guard_check_icall();
              (*pcStack_40)();
            }
          }
        }
      }
      uStack_8._0_1_ = 5;
      piStack_3c = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar9 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar9;
        UNLOCK();
        if (iVar9 == 0) {
          pcStack_40 = *(code **)*uStack_1c._4_4_;
          _guard_check_icall();
          (*pcStack_40)();
          LOCK();
          iVar9 = piStack_3c[2] + -1;
          piStack_3c[2] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcStack_40 = *(code **)(*piStack_3c + 4);
            _guard_check_icall();
            (*pcStack_40)();
          }
        }
      }
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00482c40();
  uStack_8 = 0xffffffff;
  func_0x00482c40();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005f35e0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar7 = (int *)**(int **)(param_1 + 0x14);
  cVar2 = *(char *)((int)piVar7 + 0xd);
  while ((cVar2 == '\0' && (piVar7[4] <= param_2))) {
    if (piVar7[6] != 0) {
      LOCK();
      piVar1 = (int *)(piVar7[6] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)piVar7[6];
    uStack_8 = 0;
    FUN_005f0550(uVar6);
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        iVar4 = piVar1[2] + -1;
        piVar1[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    piVar1 = (int *)piVar7[2];
    if (*(char *)((int)piVar1 + 0xd) == '\0') {
      cVar2 = *(char *)(*piVar1 + 0xd);
      piVar7 = piVar1;
      piVar1 = (int *)*piVar1;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*piVar1 + 0xd);
        piVar7 = piVar1;
        piVar1 = (int *)*piVar1;
      }
    }
    else {
      cVar2 = *(char *)(piVar7[1] + 0xd);
      piVar5 = (int *)piVar7[1];
      piVar1 = piVar7;
      while ((piVar7 = piVar5, cVar2 == '\0' && (piVar1 == (int *)piVar7[2]))) {
        cVar2 = *(char *)(piVar7[1] + 0xd);
        piVar5 = (int *)piVar7[1];
        piVar1 = piVar7;
      }
    }
    cVar2 = *(char *)((int)piVar7 + 0xd);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005f3710(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  uint uStack_84;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  undefined8 uStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed28e6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_84 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_84;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_50 = param_1;
  uStack_4c = param_2;
  param_1[0] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_48 = 1;
  uStack_8 = 1;
  uStack_40 = 0;
  uStack_18 = uStack_84;
  func_0x0080da60();
  uStack_8._0_1_ = 2;
  uStack_20 = 0;
  func_0x00469d30("Module");
  uStack_8._0_1_ = 3;
  func_0x0080f6e0(&uStack_20,auStack_70);
  uStack_8._0_1_ = 5;
  FUN_00469ba0();
  func_0x00469d30(&DAT_0113c348);
  uStack_8._0_1_ = 6;
  func_0x005f4390(auStack_38,auStack_70);
  uStack_8._0_1_ = 8;
  FUN_00469ba0();
  uVar1 = FUN_005f3e10(auStack_58,auStack_38);
  uStack_8._0_1_ = 9;
  func_0x0046ffa0(uVar1);
  uStack_8._0_1_ = 8;
  FUN_00468340();
  if (*param_1 == 0) {
    uVar1 = func_0x005f4460();
    uStack_8._0_1_ = 10;
    func_0x0046ffa0(uVar1);
    uStack_8._0_1_ = 8;
    FUN_00468340();
    func_0x005f14a0(&uStack_20);
    func_0x00470370(param_1);
  }
  else {
    func_0x005f14a0(&uStack_20);
  }
  uStack_8._0_1_ = 5;
  FUN_00469ba0();
  uStack_8._0_1_ = 2;
  FUN_00468340();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_00468340();
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * Catch_005f389f(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x70) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("Unable to discover module from file \'%s\': %s",0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0x48),unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return &DAT_005f3944;
}



void FUN_005f3970(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_34 [6];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed292d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_14 = uVar6;
  FUN_005f3e10(&uStack_1c,param_1);
  iStack_8 = 0;
  if ((int)uStack_1c != 0) {
    cVar5 = FUN_005f0550(uVar6);
    if (cVar5 != '\0') goto LAB_005f3a73;
  }
  auStack_34[4] = 0;
  auStack_34[5] = 0;
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 0;
  auStack_34[3] = 0;
  func_0x0046bc40("Unable to load \'%s\' module",0x1a);
  iStack_8._0_1_ = 1;
  uVar7 = func_0x00484eb0(param_1);
  iStack_8._0_1_ = 2;
  FUN_005ee340(4,uVar7);
  iStack_8._0_1_ = 1;
  if (0xf < uStack_38) {
    func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
  }
  uStack_3c = 0;
  uStack_38 = 0xf;
  auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[4] = 0;
  auStack_34[5] = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
LAB_005f3a73:
  iStack_8 = 0xffffffff;
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



// WARNING: Removing unreachable block (ram,0x005f3b34)

void __fastcall FUN_005f3ae0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed296d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004c7e60(param_1,uVar1);
  uStack_8 = 0xffffffff;
  func_0x00470060();
  func_0x008ab812(0,8);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x005f3c60)
// WARNING: Removing unreachable block (ram,0x005f3c84)
// WARNING: Removing unreachable block (ram,0x005f3c8e)
// WARNING: Removing unreachable block (ram,0x005f3c9b)
// WARNING: Removing unreachable block (ram,0x005f3cad)
// WARNING: Removing unreachable block (ram,0x005f3cb9)
// WARNING: Removing unreachable block (ram,0x005f3cc8)
// WARNING: Removing unreachable block (ram,0x005f3cdb)
// WARNING: Removing unreachable block (ram,0x005f3cde)
// WARNING: Removing unreachable block (ram,0x005f3d03)
// WARNING: Removing unreachable block (ram,0x005f3d1c)
// WARNING: Removing unreachable block (ram,0x005f3d49)
// WARNING: Removing unreachable block (ram,0x005f3d4d)
// WARNING: Removing unreachable block (ram,0x005f3d5d)
// WARNING: Removing unreachable block (ram,0x005f3d67)

void __fastcall FUN_005f3ba0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int iStack_4c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed29b5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_28 = (int *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  piStack_28 = (int *)func_0x008ab47d(8,uStack_14);
  piStack_28[1] = 0;
  *piStack_28 = (int)&piStack_28;
  uStack_8 = 0;
  iStack_4c = 10;
  do {
    func_0x004c7e60(param_1);
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x00470060();
    func_0x008ab812(0,8);
    iStack_4c = iStack_4c + -1;
  } while (iStack_4c != 0);
  iVar3 = iStack_18 + iStack_1c;
  for (iVar2 = iStack_1c; iVar2 != iVar3; iVar2 = iVar2 + 1) {
    FUN_005f0550();
  }
  uStack_8 = 0xffffffff;
  func_0x00470060();
  piVar1 = piStack_28;
  piStack_28 = (int *)0x0;
  func_0x008ab812(piVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __thiscall FUN_005f3e10(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 ***pppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  int *piStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed2a17;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uVar5 = *(uint *)(param_1 + 0xc);
  uStack_20 = *(int *)(param_1 + 0x10) + uVar5;
  iStack_1c = param_1;
  if (uVar5 != uStack_20) {
    do {
      piStack_24 = (int *)(*(int *)(*(int *)(iStack_1c + 4) +
                                   (uVar5 >> 1 & *(int *)(iStack_1c + 8) - 1U) * 4) +
                          (uVar5 & 1) * 8);
      uStack_8 = 1;
      func_0x00469da0(*piStack_24 + 0x80,uVar2);
      uStack_18 = 2;
      puVar4 = param_3;
      if (0xf < (uint)param_3[5]) {
        puVar4 = (undefined4 *)*param_3;
      }
      pppuVar3 = appuStack_3c;
      if (0xf < uStack_28) {
        pppuVar3 = (undefined4 ***)appuStack_3c[0];
      }
      cStack_11 = func_0x0046cf20(pppuVar3,uStack_2c,puVar4,param_3[4]);
      uStack_18 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < uStack_28) {
        func_0x0046b1f0(appuStack_3c,appuStack_3c[0],uStack_28);
      }
      uStack_2c = 0;
      uStack_28 = 0xf;
      appuStack_3c[0] = (undefined4 **)((uint)appuStack_3c[0] & 0xffffff00);
      if (cStack_11 != '\0') {
        *param_2 = 0;
        param_2[1] = 0;
        if (piStack_24[1] != 0) {
          LOCK();
          piVar1 = (int *)(piStack_24[1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *param_2 = *piStack_24;
        param_2[1] = piStack_24[1];
        goto LAB_005f3f19;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uStack_20);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_005f3f19:
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_005f4750(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x170);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005f9430(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005f9460(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed37bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_005f94c0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed37bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_005f9520(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed37ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::_Node_assert::vftable;
  uStack_8 = 0;
  puVar3 = (undefined4 *)param_1[5];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[3];
    puVar3[3] = 0;
    pcVar2 = *(code **)*puVar3;
    _guard_check_icall(1,uVar4);
    (*pcVar2)();
    puVar3 = puVar1;
  }
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_005f95c0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed37bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_005f96a0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed384d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::_Node_if::vftable;
  uStack_8 = 0;
  puVar1 = (undefined4 *)param_1[6];
  do {
    do {
      puVar6 = puVar1;
      if (puVar6 == (undefined4 *)0x0) {
        uStack_8 = 0xffffffff;
        *param_1 = std::_Node_base::vftable;
        if ((param_2 & 1) != 0) {
          func_0x008ab812(param_1,0x1c);
        }
        *unaff_FS_OFFSET = iStack_10;
        return param_1;
      }
      puVar1 = (undefined4 *)puVar6[6];
      puVar6[6] = 0;
      puVar2 = (undefined4 *)param_1[5];
    } while (puVar6 == puVar2);
    do {
      if (puVar6 == (undefined4 *)0x0) break;
      puVar3 = (undefined4 *)puVar6[3];
      puVar6[3] = 0;
      pcVar4 = *(code **)*puVar6;
      _guard_check_icall(1,uVar5);
      (*pcVar4)();
      puVar6 = puVar3;
    } while (puVar3 != puVar2);
  } while( true );
}



undefined4 * __thiscall FUN_005f9770(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed37bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_005fb54d(void)

{
  func_0x0046a660(&DAT_0112e1b4,0);
  return &DAT_005fb562;
}



undefined * Catch_005fb754(void)

{
  func_0x0046a660(&DAT_0112e1b4,0);
  return &DAT_005fb769;
}



undefined * Catch_005fb887(void)

{
  return &DAT_005fb88d;
}



void FUN_005fc240(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  int *unaff_FS_OFFSET;
  int iStack_68;
  undefined4 ***pppuStack_64;
  undefined4 *puStack_60;
  char *pcStack_5c;
  undefined4 ***pppuStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  undefined1 *puStack_38;
  undefined1 uStack_31;
  undefined4 ***apppuStack_30 [4];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed3fb5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_50 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar5 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar5 = (undefined4 *)*param_1;
  }
  uStack_18 = uStack_50;
  if (9 < (uint)param_1[4]) {
    uStack_54 = 10;
    pppuStack_58 = (undefined4 ***)0x1142b54;
    iVar6 = param_1[4] + (int)puVar5;
    pppuStack_64 = (undefined4 ****)0x5fc298;
    puStack_60 = puVar5;
    pcStack_5c = (char *)iVar6;
    iVar3 = func_0x00e727d0();
    if ((iVar3 != iVar6) && (iVar3 - (int)puVar5 != -1)) {
      puStack_38 = (undefined1 *)&iStack_68;
      func_0x00482f60(&iStack_68,10,0xffffffff);
      uStack_8 = 0xffffffff;
      piVar4 = (int *)func_0x005f9270(auStack_40);
      piVar2 = piStack_3c;
      uStack_31 = *piVar4 != 0;
      uStack_8 = 0xffffffff;
      if (piStack_3c != (int *)0x0) {
        LOCK();
        iVar6 = piStack_3c[1] + -1;
        piStack_3c[1] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar1 = *(code **)*piStack_3c;
          _guard_check_icall();
          (*pcVar1)();
          LOCK();
          piVar4 = piVar2 + 2;
          iVar6 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            pcVar1 = *(code **)(*piVar2 + 4);
            _guard_check_icall();
            (*pcVar1)();
          }
        }
      }
      goto LAB_005fc409;
    }
  }
  piStack_3c = &iStack_68;
  func_0x00469da0(param_1);
  uStack_8 = 0xffffffff;
  FUN_005fd980(apppuStack_30,param_1);
  uStack_8 = 3;
  ppppuVar7 = apppuStack_30;
  if (0xf < uStack_1c) {
    ppppuVar7 = (undefined4 ****)apppuStack_30[0];
  }
  if (4 < uStack_20) {
    pppuStack_58 = (undefined4 ***)0x5;
    pcStack_5c = ".part";
    iStack_68 = 0x5fc386;
    pppuStack_64 = ppppuVar7;
    puStack_60 = (undefined4 *)(uStack_20 + (int)ppppuVar7);
    puVar5 = (undefined4 *)func_0x00e727d0();
    if ((puVar5 != (undefined4 *)(uStack_20 + (int)ppppuVar7)) &&
       ((int)puVar5 - (int)ppppuVar7 != -1)) {
      pppuStack_58 = (undefined4 ***)0x1;
      pcStack_5c = "1";
      puStack_60 = (undefined4 *)0x5fc3a0;
      func_0x0046a880();
    }
  }
  pppuStack_58 = apppuStack_30;
  if (0xf < uStack_1c) {
    pppuStack_58 = apppuStack_30[0];
  }
  pcStack_5c = (char *)0x5fc3b1;
  iVar6 = func_0x00e42900();
  if (iVar6 != 0) {
    ppppuVar7 = apppuStack_30;
    if (0xf < uStack_1c) {
      ppppuVar7 = (undefined4 ****)apppuStack_30[0];
    }
    func_0x00e42f60(ppppuVar7);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(apppuStack_30,apppuStack_30[0],uStack_1c);
  }
  uStack_20 = 0;
  uStack_1c = 0xf;
  apppuStack_30[0] = (undefined4 ***)((uint)apppuStack_30[0] & 0xffffff00);
LAB_005fc409:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



bool FUN_005fc430(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 auStack_30 [5];
  uint uStack_1c;
  undefined1 *puStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed3ff5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_50 = param_1;
  if (0xf < (uint)param_1[5]) {
    puStack_50 = (undefined4 *)*param_1;
  }
  uStack_44 = 10;
  pcStack_48 = "/downloads";
  uStack_4c = param_1[4];
  uStack_54 = 0x5fc477;
  cVar1 = func_0x0046cf20();
  if (cVar1 != '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return true;
  }
  puStack_18 = auStack_58;
  func_0x00469da0(param_1);
  uStack_8 = 0xffffffff;
  pcStack_48 = (char *)FUN_005fd980(auStack_30,param_1);
  uStack_8 = 1;
  if (0xf < *(uint *)((int)pcStack_48 + 0x14)) {
    pcStack_48 = *(char **)pcStack_48;
  }
  uStack_4c = 0x5fc4d0;
  iVar2 = func_0x00e42f60();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_1c) {
    pcStack_48 = (char *)uStack_1c;
    uStack_4c = auStack_30[0];
    puStack_50 = auStack_30;
    uStack_54 = 0x5fc4f4;
    func_0x0046b1f0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar2 != 0;
}



void FUN_005fc610(uint *param_1,undefined4 param_2)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 ***pppuStack_78;
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
  undefined4 ***pppuStack_6c;
  uint uStack_64;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 ***apppuStack_2c [4];
  uint uStack_1c;
  uint *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed40a6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_80 = param_2;
  uStack_14 = uStack_64;
  func_0x00469da0();
  iStack_8 = 0;
  FUN_005fd980(apppuStack_2c);
  iStack_8 = 2;
  ppppuVar1 = apppuStack_2c;
  if (&DAT_0000000f < puStack_18) {
    ppppuVar1 = (undefined4 ****)apppuStack_2c[0];
  }
  if (9 < uStack_1c) {
    pppuStack_6c = (undefined4 ***)0xa;
    pppuStack_70 = (undefined4 ***)0x1142b54;
    uStack_7c = 0x5fc6a2;
    pppuStack_78 = ppppuVar1;
    pppuStack_74 = (undefined4 ****)(uStack_1c + (int)ppppuVar1);
    ppppuVar2 = (undefined4 ****)func_0x00e727d0();
    if ((ppppuVar2 != (undefined4 ****)(uStack_1c + (int)ppppuVar1)) &&
       ((int)ppppuVar2 - (int)ppppuVar1 != -1)) {
      uStack_34 = 0;
      func_0x00482f60(&uStack_80,10,0xffffffff);
      iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
      iStack_8._0_1_ = 2;
      func_0x005f9270(&uStack_34);
      iStack_8._0_1_ = 4;
      if ((int)uStack_34 != 0) {
        ppppuVar1 = *(undefined4 *****)((int)uStack_34 + 0x4c);
        ppppuVar2 = *(undefined4 *****)((int)uStack_34 + 0x48);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        if (ppppuVar2 == ppppuVar1) {
          param_1[4] = 0;
          param_1[5] = 0xf;
          *(undefined1 *)param_1 = 0;
        }
        else {
          pppuStack_70 = (undefined4 ***)((int)ppppuVar1 - (int)ppppuVar2);
          pppuStack_78 = (undefined4 ****)0x5fc730;
          pppuStack_74 = ppppuVar2;
          pppuStack_6c = pppuStack_70;
          func_0x005e73c0();
        }
        iStack_8._0_1_ = 2;
        pppuStack_6c = (undefined4 ***)0x5fc743;
        FUN_00468340();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (&DAT_0000000f < puStack_18) {
          pppuStack_6c = (undefined4 ***)((int)puStack_18 + 1);
          ppppuVar1 = (undefined4 ****)apppuStack_2c[0];
          if ((uint *)0xfff < pppuStack_6c) {
            ppppuVar1 = (undefined4 ****)apppuStack_2c[0][-1];
            pppuStack_6c = (undefined4 ***)(puStack_18 + 9);
            if (0x1f < (uint)((int)apppuStack_2c[0] + (-4 - (int)ppppuVar1))) {
                    // WARNING: Subroutine does not return
              pppuStack_6c = (undefined4 ***)0x5fc777;
              _invalid_parameter_noinfo_noreturn();
            }
          }
          pppuStack_74 = (undefined4 ****)0x5fc77e;
          pppuStack_70 = ppppuVar1;
          func_0x008ab812();
        }
        goto LAB_005fc83a;
      }
      iStack_8 = CONCAT31(iStack_8._1_3_,2);
      pppuStack_6c = (undefined4 ***)0x5fc792;
      FUN_00468340();
    }
  }
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xf;
  uStack_4c = 0;
  iStack_8._0_1_ = 5;
  pppuStack_6c = (undefined4 ***)&uStack_4c;
  pppuStack_70 = apppuStack_2c;
  pppuStack_74 = (undefined4 ****)0x5fc7ca;
  func_0x005fc520();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uStack_4c;
  param_1[1] = uStack_48;
  param_1[2] = uStack_44;
  param_1[3] = uStack_40;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_38,uStack_3c);
  uStack_3c = 0;
  uStack_38 = 0xf;
  uStack_4c = uStack_4c & 0xffffff00;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (&DAT_0000000f < puStack_18) {
    pppuStack_6c = (undefined4 ***)puStack_18;
    pppuStack_70 = apppuStack_2c[0];
    pppuStack_74 = apppuStack_2c;
    pppuStack_78 = (undefined4 ****)0x5fc837;
    func_0x0046b1f0();
  }
LAB_005fc83a:
  uStack_1c = 0;
  puStack_18 = (uint *)0xf;
  apppuStack_2c[0] = (undefined4 ***)((uint)apppuStack_2c[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005fcf90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x005fce40(param_1,param_2,*puVar1);
  return;
}



bool FUN_005fd340(undefined4 param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  uint uStack_38;
  undefined4 auStack_2c [5];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed42b5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_14 = auStack_50;
  func_0x00469da0(param_1);
  uStack_8 = 0xffffffff;
  puStack_40 = (undefined4 *)FUN_005fd980(auStack_2c,param_1);
  uStack_8 = 1;
  if (0xf < (uint)puStack_40[5]) {
    puStack_40 = (undefined4 *)*puStack_40;
  }
  uStack_44 = 0x5fd3a7;
  iVar1 = func_0x00e423e0();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    puStack_40 = (undefined4 *)uStack_18;
    uStack_44 = auStack_2c[0];
    puStack_48 = auStack_2c;
    uStack_4c = 0x5fd3cb;
    func_0x0046b1f0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar1 != 0;
}



bool FUN_005fd400(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed42ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar2 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar2 = param_1;
  }
  iVar3 = func_0x00e42fc0(puVar2,uVar1);
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar3 != 0;
}



void FUN_005fd490(int *param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int ***pppiVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  int ****ppppiVar13;
  int ****ppppiVar14;
  int *unaff_FS_OFFSET;
  int ***pppiStack_e4;
  int ***pppiStack_e0;
  int ***pppiStack_dc;
  int ***pppiStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  int ***apppiStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int **ppiStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  int ***pppiStack_48;
  int iStack_44;
  int ***pppiStack_40;
  int ***apppiStack_3c [4];
  int ***pppiStack_2c;
  int ***pppiStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ed43dd;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_cc = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pppiStack_40 = (int ***)0x1;
  param_1[0] = 0;
  param_1[1] = 0;
  uStack_d0 = 0x20;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_d4 = 0x5fd4ff;
  uStack_24 = uStack_cc;
  iVar10 = func_0x008ab47d();
  *(int *)iVar10 = iVar10;
  *(int *)(iVar10 + 4) = iVar10;
  *param_1 = iVar10;
  iStack_14 = 0;
  pppiStack_40 = (int ***)0x1;
  if (param_4 == '\0') {
    pppiStack_48 = (int ***)&pppiStack_e4;
    func_0x00469da0(param_2);
    iStack_14 = 1;
    uStack_d4 = FUN_005fd980(apppiStack_88,param_2);
    iStack_14 = 3;
    pppiStack_40 = (int ***)0x5;
  }
  else {
    uStack_d0 = param_2;
    uStack_d4 = 0x5fd526;
    uStack_d4 = func_0x00469da0();
    iStack_14 = 1;
    pppiStack_40 = (int ***)0x3;
  }
  pppiStack_d8 = (int ***)0x5fd571;
  func_0x00469da0();
  iStack_14 = 5;
  if (((uint)pppiStack_40 & 4) != 0) {
    pppiStack_40 = (int ***)((uint)pppiStack_40 & 0xfffffffb);
    if (0xf < uStack_74) {
      pppiStack_d8 = (int ***)uStack_74;
      pppiStack_dc = apppiStack_88[0];
      pppiStack_e0 = (int ***)apppiStack_88;
      pppiStack_e4 = (int ***)0x5fd59a;
      func_0x0046b1f0();
    }
    uStack_78 = 0;
    uStack_74 = 0xf;
    apppiStack_88[0] = (int ***)((uint)apppiStack_88[0] & 0xffffff00);
  }
  iStack_14._0_1_ = 6;
  if (((uint)pppiStack_40 & 2) != 0) {
    pppiStack_40 = (int ***)((uint)pppiStack_40 & 0xfffffffd);
    if (0xf < uStack_50._4_4_) {
      pppiStack_d8 = (int ***)uStack_50._4_4_;
      pppiStack_dc = (int ***)ppiStack_60;
      pppiStack_e0 = &ppiStack_60;
      pppiStack_e4 = (int ***)0x5fd5d5;
      func_0x0046b1f0();
    }
    uStack_50 = 0xf00000000;
    ppiStack_60 = (int **)((uint)ppiStack_60 & 0xffffff00);
  }
  pppiStack_d8 = (int ***)apppiStack_3c;
  if (&DAT_0000000f < pppiStack_28) {
    pppiStack_d8 = apppiStack_3c[0];
  }
  pppiStack_dc = (int ***)0x5fd5fb;
  pppiStack_48 = (int ***)func_0x00e42840();
  if ((int ****)pppiStack_48 == (int ****)0x0) {
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    pppiStack_40 = pppiStack_48;
    if (&DAT_0000000f < pppiStack_28) {
      pppiStack_d8 = (int ***)((int)pppiStack_28 + 1);
      ppppiVar14 = (int ****)apppiStack_3c[0];
      if ((int ****)0xfff < pppiStack_d8) {
        ppppiVar14 = (int ****)apppiStack_3c[0][-1];
        pppiStack_d8 = pppiStack_28 + 9;
        if ((char *)0x1f < (char *)((int)apppiStack_3c[0] + (-4 - (int)ppppiVar14))) {
                    // WARNING: Subroutine does not return
          pppiStack_d8 = (int ***)0x5fd63d;
          _invalid_parameter_noinfo_noreturn();
        }
      }
      pppiStack_e0 = (int ***)0x5fd644;
      pppiStack_dc = (int ***)ppppiVar14;
      func_0x008ab812();
    }
  }
  else {
    pppiVar3 = (int ***)*pppiStack_48;
    iStack_44 = 0;
    ppppiVar14 = (int ****)pppiStack_48;
    while (pppiVar3 != (int ***)0x0) {
      ppppiVar14 = (int ****)*ppppiVar14;
      if (param_3 == '\0') {
        pppiStack_d8 = (int ***)ppppiVar14;
        do {
          cVar2 = *(char *)pppiStack_d8;
          pppiStack_d8 = (int ***)((int)pppiStack_d8 + 1);
        } while (cVar2 != '\0');
        pppiStack_d8 = (int ***)((int)pppiStack_d8 - (int)((int)ppppiVar14 + 1));
        pppiStack_e0 = (int ***)0x5fd826;
        pppiStack_dc = (int ***)ppppiVar14;
        func_0x0046bc40();
        iStack_14._0_1_ = 0xc;
        iVar10 = *param_1;
        if (param_1[1] == 0x7ffffff) goto LAB_005fd969;
        piStack_70 = param_1;
        iStack_14._0_1_ = 0xd;
        uStack_6c = 0;
        piVar12 = (int *)func_0x008ab47d(0x20);
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        param_1[1] = param_1[1] + 1;
        puVar4 = *(undefined4 **)(iVar10 + 4);
        *piVar12 = iVar10;
        piVar12[1] = (int)puVar4;
        *(int **)(iVar10 + 4) = piVar12;
        uStack_6c = 0;
        *puVar4 = piVar12;
        iStack_14._0_1_ = 6;
      }
      else {
        iStack_14._0_1_ = 7;
        uVar9 = (undefined1)iStack_14;
        iStack_14._0_1_ = 7;
        if ((int ****)pppiStack_2c == (int ****)0x7fffffff) {
          pppiStack_d8 = (int ***)0x5fd969;
          iStack_14._0_1_ = uVar9;
          func_0x00463570();
LAB_005fd969:
          func_0x00e701fa("list too long");
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pppiStack_d8 = (int ***)0x1;
        pppiStack_e4 = (int ***)apppiStack_3c;
        if (&DAT_0000000f < pppiStack_28) {
          pppiStack_e4 = apppiStack_3c[0];
        }
        pppiStack_dc = (int ***)&DAT_0113c2ec;
        pppiStack_e0 = pppiStack_2c;
        func_0x00487d10(param_1,apppiStack_3c);
        pppiStack_40 = (int ***)((uint)pppiStack_40 | 8);
        iStack_14._0_1_ = 8;
        ppppiVar13 = ppppiVar14;
        do {
          cVar2 = *(char *)ppppiVar13;
          ppppiVar13 = (int ****)((int)ppppiVar13 + 1);
        } while (cVar2 != '\0');
        puVar11 = (uint *)func_0x0046a880(ppppiVar14,(int)ppppiVar13 - (int)((int)ppppiVar14 + 1));
        pppiVar3 = (int ***)*puVar11;
        uVar6 = puVar11[1];
        uVar7 = puVar11[2];
        uVar8 = puVar11[3];
        uVar1 = *(undefined8 *)(puVar11 + 4);
        pppiStack_40 = (int ***)((uint)pppiStack_40 | 0x10);
        puVar11[4] = 0;
        puVar11[5] = 0xf;
        *(undefined1 *)puVar11 = 0;
        iVar10 = *param_1;
        ppiStack_60 = (int **)pppiVar3;
        uStack_5c = uVar6;
        uStack_58 = uVar7;
        uStack_54 = uVar8;
        uStack_50 = uVar1;
        if (param_1[1] == 0x7ffffff) goto LAB_005fd969;
        piStack_68 = param_1;
        iStack_14._0_1_ = 9;
        uStack_64 = 0;
        piVar12 = (int *)func_0x008ab47d(0x20);
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[2] = (int)pppiVar3;
        piVar12[3] = uVar6;
        piVar12[4] = uVar7;
        piVar12[5] = uVar8;
        *(undefined8 *)(piVar12 + 6) = uVar1;
        param_1[1] = param_1[1] + 1;
        puVar4 = *(undefined4 **)(iVar10 + 4);
        *piVar12 = iVar10;
        piVar12[1] = (int)puVar4;
        *(int **)(iVar10 + 4) = piVar12;
        uStack_64 = 0;
        *puVar4 = piVar12;
        pppiStack_40 = (int ***)((uint)pppiStack_40 & 0xffffffe7);
        uStack_50 = 0xf00000000;
        ppiStack_60 = (int **)((uint)ppiStack_60 & 0xffffff00);
        iStack_14._0_1_ = 6;
        if (0xf < uStack_74) {
          pppiStack_d8 = (int ***)uStack_74;
          pppiStack_dc = apppiStack_88[0];
          pppiStack_e0 = (int ***)apppiStack_88;
          pppiStack_e4 = (int ***)0x5fd7d1;
          func_0x0046b1f0();
        }
        uStack_78 = 0;
        uStack_74 = 0xf;
        apppiStack_88[0] = (int ***)((uint)apppiStack_88[0] & 0xffffff00);
      }
      iStack_44 = iStack_44 + 1;
      ppppiVar14 = (int ****)(pppiStack_48 + iStack_44);
      pppiVar3 = (int ***)pppiStack_48[iStack_44];
    }
    pppiStack_dc = (int ***)0x5fd8ef;
    pppiStack_d8 = pppiStack_48;
    func_0x00e42980();
    pppiStack_48 = (int ***)((uint)pppiStack_48 & 0xffffff00);
    pppiStack_d8 = pppiStack_48;
    pppiStack_dc = (int ***)0x5fd903;
    func_0x0060ab90();
    pppiStack_40 = (int ***)0x0;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (&DAT_0000000f < pppiStack_28) {
      pppiStack_d8 = pppiStack_28;
      pppiStack_dc = apppiStack_3c[0];
      pppiStack_e0 = (int ***)apppiStack_3c;
      pppiStack_e4 = (int ***)0x5fd926;
      func_0x0046b1f0();
    }
  }
  pppiStack_2c = (int ***)0x0;
  pppiStack_28 = (int ***)0xf;
  apppiStack_3c[0] = (int ***)((uint)apppiStack_3c[0] & 0xffffff00);
  iStack_14 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_1c;
  uStack_cc = 0x5fd95b;
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005fd980(undefined4 ****param_1,undefined4 ****param_2,undefined4 ***param_3,
                 undefined4 ***param_4,undefined4 ***param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 ***pppuStack_d4;
  undefined4 ***pppuStack_d0;
  undefined4 ***pppuStack_cc;
  undefined4 ***pppuStack_c8;
  undefined4 ***pppuStack_c4;
  undefined4 ***pppuStack_c0;
  undefined4 ***pppuStack_bc;
  undefined4 ***pppuStack_b8;
  undefined2 *puStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 ***apppuStack_9c [4];
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 *puStack_84;
  undefined4 ***pppuStack_80;
  char cStack_79;
  undefined4 ***apppuStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 ***pppuStack_60;
  undefined1 *puStack_5c;
  undefined4 ***pppuStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 ***pppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 ***pppuStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ed45ec;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_ac = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pppuStack_60 = param_1;
  pppuStack_80 = param_1;
  uStack_40 = 0;
  uStack_14 = 1;
  uStack_b0 = 1;
  puStack_b4 = &DAT_0113c2ec;
  uStack_48 = 0;
  pppuStack_58 = (undefined4 ***)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  pppuStack_b8 = (undefined4 ***)0x5fd9f5;
  uStack_24 = uStack_ac;
  func_0x0046bc40();
  uStack_14._0_1_ = 2;
  pppuStack_b8 = pppuStack_60;
  pppuStack_bc = (undefined4 ***)0x5fda07;
  cStack_79 = func_0x0083d540();
  uStack_14._0_1_ = 1;
  if (0xf < uStack_44) {
    pppuStack_b8 = (undefined4 ***)uStack_44;
    pppuStack_bc = pppuStack_58;
    pppuStack_c0 = &pppuStack_58;
    pppuStack_c4 = (undefined4 ****)0x5fda26;
    func_0x0046b1f0();
  }
  uStack_48 = 0;
  uStack_44 = 0xf;
  pppuStack_58 = (undefined4 ***)((uint)pppuStack_58 & 0xffffff00);
  if (cStack_79 == '\0') {
    pppuStack_bc = apppuStack_78;
    pppuStack_c0 = (undefined4 ***)0x5fda54;
    func_0x00778b00();
    uStack_14._0_1_ = 4;
    pppuStack_c0 = (undefined4 ****)0x1;
    pppuStack_c4 = (undefined4 ***)&DAT_0113c2ec;
    pppuStack_c8 = (undefined4 ****)0x0;
    pppuStack_cc = (undefined4 ****)0x5fda68;
    puVar4 = (undefined4 *)func_0x005df0b0();
    uVar8 = 4;
    pppuStack_3c = (undefined4 ***)*puVar4;
    uStack_38 = puVar4[1];
    uStack_34 = puVar4[2];
    uStack_30 = puVar4[3];
    pppuStack_2c = (undefined4 ***)puVar4[4];
    uStack_28 = puVar4[5];
    puVar4[4] = 0;
    puVar4[5] = 0xf;
    *(undefined1 *)puVar4 = 0;
    uStack_40 = 4;
    uStack_14._0_1_ = 5;
    if (0xf < uStack_64) {
      pppuStack_b8 = (undefined4 ***)uStack_64;
      pppuStack_bc = apppuStack_78[0];
      pppuStack_c0 = apppuStack_78;
      pppuStack_c4 = (undefined4 ****)0x5fdab9;
      func_0x0046b1f0();
    }
    uStack_68 = 0;
    uStack_64 = 0xf;
    apppuStack_78[0] = (undefined4 ***)((uint)apppuStack_78[0] & 0xffffff00);
    if ((undefined4 ****)pppuStack_2c == (undefined4 ****)0x0) {
      pppuStack_b8 = (undefined4 ***)0x31;
      uStack_48 = 0;
      pppuStack_bc = (undefined4 ***)0x1142d68;
      uStack_44 = 0;
      pppuStack_58 = (undefined4 ****)0x0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      pppuStack_c0 = (undefined4 ***)0x5fdc44;
      func_0x0046bc40();
      uStack_14._0_1_ = 8;
      pppuStack_c0 = &param_2;
      pppuStack_c4 = (undefined4 ***)0x5fdc57;
      uVar5 = func_0x00484eb0();
      uStack_14._0_1_ = 9;
      puStack_5c = (undefined1 *)&pppuStack_d4;
      pppuStack_d4 = (undefined4 ****)0x0;
      pppuStack_d0 = (undefined4 ****)0x0;
      pppuStack_cc = (undefined4 ****)0x0;
      pppuStack_c8 = (undefined4 ****)0x0;
      pppuStack_c4 = (undefined4 ****)0x0;
      pppuStack_c0 = (undefined4 ****)0x0;
      func_0x0046bc40("?resolvePath@ResourceManager@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z"
                      ,0x67);
      uStack_14._0_1_ = 9;
      func_0x005eea60(2,uVar5);
      uStack_14._0_1_ = 8;
      if (0xf < uStack_64) {
        pppuStack_b8 = (undefined4 ***)uStack_64;
        pppuStack_bc = apppuStack_78[0];
        pppuStack_c0 = apppuStack_78;
        pppuStack_c4 = (undefined4 ****)0x5fdcae;
        func_0x0046b1f0();
      }
      uStack_68 = 0;
      uStack_64 = 0xf;
      apppuStack_78[0] = (undefined4 ***)((uint)apppuStack_78[0] & 0xffffff00);
      uStack_14 = CONCAT31(uStack_14._1_3_,5);
      if (0xf < uStack_44) {
        pppuStack_b8 = (undefined4 ***)uStack_44;
        pppuStack_bc = pppuStack_58;
        pppuStack_c0 = &pppuStack_58;
        pppuStack_c4 = (undefined4 ****)0x5fdcdc;
        func_0x0046b1f0();
      }
      uStack_48 = 0;
      uStack_44 = 0xf;
      pppuStack_58 = (undefined4 ***)((uint)pppuStack_58 & 0xffffff00);
    }
    else {
      uStack_14._0_1_ = 6;
      if ((undefined4 ****)pppuStack_2c == (undefined4 ****)0x7fffffff) goto LAB_005fe5fd;
      pppuStack_b8 = (undefined4 ***)0x1;
      pppuStack_c4 = &pppuStack_3c;
      if (0xf < uStack_28) {
        pppuStack_c4 = pppuStack_3c;
      }
      pppuStack_bc = (undefined4 ***)&DAT_0113c2ec;
      pppuStack_c0 = pppuStack_2c;
      pppuStack_c8 = &pppuStack_3c;
      pppuStack_cc = pppuStack_60;
      pppuStack_d0 = (undefined4 ***)0x5fdb10;
      func_0x00487d10();
      pppuStack_d0 = &param_2;
      uStack_40 = 0x84;
      pppuStack_d4 = apppuStack_9c;
      puVar4 = (undefined4 *)func_0x00471920(apppuStack_78);
      uStack_14._0_1_ = 7;
      if (&param_2 != (undefined4 *****)puVar4) {
        if (0xf < param_6._4_4_) {
          pppuStack_b8 = (undefined4 ***)(param_6._4_4_ + 1);
          ppppuVar7 = param_2;
          if (0xfff < pppuStack_b8) {
            ppppuVar7 = (undefined4 ****)param_2[-1];
            pppuStack_b8 = (undefined4 ***)(param_6._4_4_ + 0x24);
            if ((undefined1 *)0x1f < (undefined1 *)((int)param_2 + (-4 - (int)ppppuVar7))) {
LAB_005fdb61:
                    // WARNING: Subroutine does not return
              pppuStack_b8 = (undefined4 ***)0x5fdb67;
              _invalid_parameter_noinfo_noreturn();
            }
          }
          pppuStack_c0 = (undefined4 ****)0x5fdb6e;
          pppuStack_bc = ppppuVar7;
          func_0x008ab812();
        }
        param_2 = (undefined4 ****)*puVar4;
        param_3 = (undefined4 ***)puVar4[1];
        param_4 = (undefined4 ***)puVar4[2];
        param_5 = (undefined4 ***)puVar4[3];
        param_6 = *(undefined8 *)(puVar4 + 4);
        puVar4[4] = 0;
        puVar4[5] = 0xf;
        *(undefined1 *)puVar4 = 0;
      }
      uStack_14._0_1_ = 6;
      if (0xf < uStack_64) {
        pppuStack_b8 = (undefined4 ***)uStack_64;
        pppuStack_bc = apppuStack_78[0];
        pppuStack_c0 = apppuStack_78;
        pppuStack_c4 = (undefined4 ****)0x5fdbbe;
        func_0x0046b1f0();
      }
      uStack_68 = 0;
      uStack_64 = 0xf;
      apppuStack_78[0] = (undefined4 ***)((uint)apppuStack_78[0] & 0xffffff00);
      uStack_40 = 4;
      uStack_14 = CONCAT31(uStack_14._1_3_,5);
      if (0xf < uStack_88) {
        pppuStack_b8 = (undefined4 ***)uStack_88;
        pppuStack_bc = apppuStack_9c[0];
        pppuStack_c0 = apppuStack_9c;
        pppuStack_c4 = (undefined4 ****)0x5fdc03;
        func_0x0046b1f0();
      }
      uStack_8c = 0;
      uStack_88 = 0xf;
      apppuStack_9c[0] = (undefined4 ***)((uint)apppuStack_9c[0] & 0xffffff00);
    }
    uStack_40 = 0;
    uStack_14._0_1_ = 1;
    if (0xf < uStack_28) {
      pppuStack_b8 = (undefined4 ***)(uStack_28 + 1);
      ppppuVar7 = (undefined4 ****)pppuStack_3c;
      if (0xfff < pppuStack_b8) {
        ppppuVar7 = (undefined4 ****)pppuStack_3c[-1];
        pppuStack_b8 = (undefined4 ***)(uStack_28 + 0x24);
        uVar2 = (undefined1)uStack_14;
        if ((undefined1 *)0x1f < (undefined1 *)((int)pppuStack_3c + (-4 - (int)ppppuVar7)))
        goto LAB_005fe08e;
      }
      pppuStack_c0 = (undefined4 ***)0x5fdd31;
      pppuStack_bc = ppppuVar7;
      func_0x008ab812();
    }
  }
  uVar8 = 0;
  pppuStack_b8 = (undefined4 ***)0x1;
  pppuStack_2c = (undefined4 ***)0x0;
  pppuStack_bc = (undefined4 ***)&DAT_0113c2ec;
  uStack_28 = 0;
  pppuStack_3c = (undefined4 ***)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  pppuStack_c0 = (undefined4 ***)0x5fdd6a;
  func_0x0046bc40();
  uStack_14._0_1_ = 0xb;
  pppuStack_c0 = (undefined4 ****)0x2;
  pppuStack_c4 = (undefined4 ***)&DAT_01142c38;
  uStack_48 = 0;
  pppuStack_58 = (undefined4 ***)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  pppuStack_c8 = (undefined4 ***)0x5fdd92;
  func_0x0046bc40();
  uStack_14._0_1_ = 0xc;
  pppuStack_c8 = &pppuStack_3c;
  pppuStack_cc = (undefined4 ***)0x5fdda5;
  func_0x0083cf70();
  uStack_14._0_1_ = 0xb;
  if (0xf < uStack_44) {
    pppuStack_c8 = (undefined4 ***)uStack_44;
    pppuStack_cc = pppuStack_58;
    pppuStack_d0 = &pppuStack_58;
    pppuStack_d4 = (undefined4 ****)0x5fddc1;
    func_0x0046b1f0();
  }
  uStack_48 = 0;
  uStack_44 = 0xf;
  pppuStack_58 = (undefined4 ***)((uint)pppuStack_58 & 0xffffff00);
  uStack_14._0_1_ = 1;
  if (0xf < uStack_28) {
    pppuStack_c8 = (undefined4 ***)uStack_28;
    pppuStack_cc = pppuStack_3c;
    pppuStack_d0 = &pppuStack_3c;
    pppuStack_d4 = (undefined4 ****)0x5fddef;
    func_0x0046b1f0();
  }
  pppuStack_2c = (undefined4 ****)0x0;
  pppuStack_c8 = &param_2;
  if (0xf < param_6._4_4_) {
    pppuStack_c8 = param_2;
  }
  uStack_28 = 0xf;
  pppuStack_3c = (undefined4 ***)((uint)pppuStack_3c & 0xffffff00);
  pppuStack_cc = (undefined4 ****)0x5fde15;
  iVar6 = func_0x00e42900();
  if (iVar6 == 0) {
    uStack_14._0_1_ = 0xd;
    if (0x7fffffffU - (int)(undefined4 ****)param_6 < 6) goto LAB_005fe602;
    pppuStack_b8 = (undefined4 ***)0x6;
    pppuStack_c4 = &param_2;
    if (0xf < param_6._4_4_) {
      pppuStack_c4 = param_2;
    }
    pppuStack_bc = (undefined4 ***)0x1142c3c;
    pppuStack_c0 = (undefined4 ****)param_6;
    pppuStack_c8 = &param_2;
    pppuStack_cc = pppuStack_60;
    pppuStack_d0 = (undefined4 ***)0x5fde57;
    func_0x00487d10();
    uStack_40 = 8;
    pppuStack_d0 = &pppuStack_58;
    if (0xf < uStack_44) {
      pppuStack_d0 = pppuStack_58;
    }
    pppuStack_d4 = (undefined4 ****)0x5fde6e;
    puStack_5c = (undefined1 *)func_0x00e42900();
    uVar8 = 0;
    uStack_40 = 0;
    uStack_14._0_1_ = 1;
    if (0xf < uStack_44) {
      pppuStack_b8 = (undefined4 ***)uStack_44;
      pppuStack_bc = pppuStack_58;
      pppuStack_c0 = &pppuStack_58;
      pppuStack_c4 = (undefined4 ****)0x5fde93;
      func_0x0046b1f0();
    }
    uStack_48 = 0;
    uStack_44 = 0xf;
    pppuStack_58 = (undefined4 ***)((uint)pppuStack_58 & 0xffffff00);
    if (puStack_5c == (undefined1 *)0x0) {
      if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463a58) goto LAB_005fe607;
      do {
        if (puStack_84[0x14] != 0) {
          puVar4 = puStack_84 + 0x10;
          pppuStack_c0 = apppuStack_9c;
          pppuStack_bc = (undefined4 ***)&DAT_014639dc;
          pppuStack_c4 = (undefined4 ***)0x5fdf84;
          pppuStack_b8 = (undefined4 ***)puVar4;
          pppuStack_bc = (undefined4 ***)func_0x004848c0();
          uStack_14._0_1_ = 0x10;
          pppuStack_b8 = &param_2;
          pppuStack_c0 = apppuStack_78;
          pppuStack_c4 = (undefined4 ***)0x5fdf99;
          pppuStack_b8 = (undefined4 ***)func_0x00471920();
          uStack_14._0_1_ = 0x11;
          if (0xf < pppuStack_b8[5]) {
            pppuStack_b8 = (undefined4 ***)*pppuStack_b8;
          }
          pppuStack_bc = (undefined4 ***)0x5fdfae;
          puStack_5c = (undefined1 *)func_0x00e42900();
          uStack_14._0_1_ = 0x10;
          if (0xf < uStack_64) {
            pppuStack_b8 = (undefined4 ***)uStack_64;
            pppuStack_bc = apppuStack_78[0];
            pppuStack_c0 = apppuStack_78;
            pppuStack_c4 = (undefined4 ***)0x5fdfcd;
            func_0x0046b1f0();
          }
          uStack_68 = 0;
          uStack_64 = 0xf;
          apppuStack_78[0] = (undefined4 ***)((uint)apppuStack_78[0] & 0xffffff00);
          uStack_14._0_1_ = 1;
          if (0xf < uStack_88) {
            pppuStack_b8 = (undefined4 ***)uStack_88;
            pppuStack_bc = apppuStack_9c[0];
            pppuStack_c0 = apppuStack_9c;
            pppuStack_c4 = (undefined4 ***)0x5fe001;
            func_0x0046b1f0();
          }
          uStack_8c = 0;
          uStack_88 = 0xf;
          apppuStack_9c[0] = (undefined4 ***)((uint)apppuStack_9c[0] & 0xffffff00);
          pppuStack_bc = (undefined4 ***)&DAT_014639dc;
          if (puStack_5c != (undefined1 *)0x0) {
            pppuStack_c0 = apppuStack_78;
            pppuStack_c4 = (undefined4 ***)0x5fe02e;
            pppuStack_b8 = (undefined4 ***)puVar4;
            pppuStack_bc = (undefined4 ***)func_0x004848c0();
            uStack_14._0_1_ = 0x12;
            pppuStack_b8 = &param_2;
            pppuStack_c0 = pppuStack_80;
            pppuStack_c4 = (undefined4 ****)0x5fe043;
            func_0x00471920();
            uStack_40 = uVar8 | 1;
            uStack_14._0_1_ = 1;
            pppuStack_b8 = (undefined4 ***)0x5fe058;
            FUN_00469ba0();
LAB_005fe058:
            uStack_14._0_1_ = 0;
            uVar3 = uStack_14._1_3_;
            if (param_6._4_4_ < 0x10) goto LAB_005fe457;
            pppuStack_b8 = (undefined4 ***)(param_6._4_4_ + 1);
            ppppuVar7 = param_2;
            if (pppuStack_b8 < 0x1000) goto LAB_005fdf3a;
            ppppuVar7 = (undefined4 ****)param_2[-1];
            iVar6 = (int)param_2 - (int)ppppuVar7;
            goto joined_r0x005fe088;
          }
          pppuStack_c0 = &pppuStack_58;
          pppuStack_c4 = (undefined4 ***)0x5fe09d;
          pppuStack_b8 = (undefined4 ***)puVar4;
          pppuStack_bc = (undefined4 ***)func_0x004848c0();
          uStack_14._0_1_ = 0x13;
          pppuStack_b8 = &param_2;
          pppuStack_c0 = apppuStack_9c;
          pppuStack_c4 = (undefined4 ***)0x5fe0b5;
          pppuStack_bc = (undefined4 ***)func_0x00471920();
          uStack_14._0_1_ = 0x14;
          pppuStack_b8 = (undefined4 ***)0x1142c3c;
          pppuStack_c0 = apppuStack_78;
          pppuStack_c4 = (undefined4 ****)0x5fe0cb;
          pppuStack_b8 = (undefined4 ***)func_0x0046b5c0();
          uStack_14._0_1_ = 0x15;
          if (0xf < pppuStack_b8[5]) {
            pppuStack_b8 = (undefined4 ***)*pppuStack_b8;
          }
          pppuStack_bc = (undefined4 ***)0x5fe0e0;
          iVar6 = func_0x00e42900();
          uStack_14._0_1_ = 0x14;
          pppuStack_b8 = (undefined4 ***)0x5fe0f1;
          FUN_00469ba0();
          uStack_14._0_1_ = 0x13;
          pppuStack_b8 = (undefined4 ***)0x5fe100;
          FUN_00469ba0();
          uStack_14._0_1_ = 1;
          pppuStack_b8 = (undefined4 ***)0x5fe10c;
          FUN_00469ba0();
          if (iVar6 != 0) {
            pppuStack_b8 = (undefined4 ***)(puStack_84 + 0x10);
            pppuStack_c0 = apppuStack_9c;
            pppuStack_bc = (undefined4 ***)&DAT_014639dc;
            pppuStack_c4 = (undefined4 ***)0x5fe12c;
            pppuStack_bc = (undefined4 ***)func_0x004848c0();
            uStack_14._0_1_ = 0x16;
            pppuStack_b8 = &param_2;
            pppuStack_c0 = apppuStack_78;
            pppuStack_c4 = (undefined4 ***)0x5fe141;
            pppuStack_bc = (undefined4 ***)func_0x00471920();
            uStack_14._0_1_ = 0x17;
            pppuStack_b8 = (undefined4 ***)0x1142b60;
            pppuStack_c0 = pppuStack_80;
            pppuStack_c4 = (undefined4 ****)0x5fe157;
            func_0x0046b5c0();
            uStack_40 = uVar8 | 1;
            uStack_14._0_1_ = 0x16;
            pppuStack_b8 = (undefined4 ***)0x5fe16c;
            FUN_00469ba0();
            uStack_14._0_1_ = 1;
            pppuStack_b8 = (undefined4 ***)0x5fe17b;
            FUN_00469ba0();
            uStack_14._0_1_ = 0;
            uVar3 = uStack_14._1_3_;
            if (0xf < param_6._4_4_) {
              pppuStack_b8 = (undefined4 ***)param_6._4_4_;
              pppuStack_bc = param_2;
              pppuStack_c0 = &param_2;
              pppuStack_c4 = (undefined4 ****)0x5fe198;
              func_0x0046b1f0();
              uVar3 = uStack_14._1_3_;
            }
            goto LAB_005fe457;
          }
        }
        if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_014639bc) {
          pppuStack_b8 = (undefined4 ***)&DAT_014639bc;
          pppuStack_bc = (undefined4 ***)0x5fe681;
          func_0x008ab40d();
          if (DAT_014639bc == -1) {
            uStack_14._0_1_ = 0x18;
            pppuStack_b8 = (undefined4 ***)0x1142764;
            pppuStack_bc = (undefined4 ***)0x5fe6a4;
            func_0x00469d30();
            uStack_14._0_1_ = 0x19;
            pppuStack_bc = (undefined4 ***)0x1142c30;
            pppuStack_c0 = (undefined4 ***)0x5fe6b7;
            func_0x00469d30();
            uStack_14._0_1_ = 0x1a;
            pppuStack_c0 = (undefined4 ***)0x1142758;
            pppuStack_c4 = (undefined4 ***)0x5fe6ca;
            func_0x00469d30();
            uStack_14._0_1_ = 0x18;
            pppuStack_c4 = (undefined4 ***)FUN_00f728b0;
            pppuStack_c8 = (undefined4 ***)0x5fe6d8;
            func_0x008ab7fd();
            uStack_14._0_1_ = 1;
            pppuStack_c4 = (undefined4 ***)&DAT_014639bc;
            pppuStack_c8 = (undefined4 ****)0x5fe6e9;
            func_0x008ab3bc();
          }
        }
        puStack_84 = (undefined4 *)&DAT_01463a00;
        while( true ) {
          pppuStack_bc = (undefined4 ****)0x5fe1cf;
          pppuStack_b8 = (undefined4 ***)puStack_84;
          func_0x00469da0();
          uStack_14._0_1_ = 0x1c;
          if (0x7fffffffU - (int)pppuStack_2c < (undefined4 ****)param_6) break;
          pppuStack_b8 = (undefined4 ****)param_6;
          pppuStack_c4 = &pppuStack_3c;
          if (0xf < uStack_28) {
            pppuStack_c4 = pppuStack_3c;
          }
          pppuStack_bc = &param_2;
          if (0xf < param_6._4_4_) {
            pppuStack_bc = param_2;
          }
          pppuStack_c0 = pppuStack_2c;
          pppuStack_c8 = &pppuStack_3c;
          pppuStack_cc = pppuStack_60;
          pppuStack_d0 = (undefined4 ***)0x5fe211;
          func_0x00487d10();
          uStack_40 = uVar8 | 2;
          pppuStack_d0 = apppuStack_9c;
          if (0xf < uStack_88) {
            pppuStack_d0 = apppuStack_9c[0];
          }
          pppuStack_d4 = (undefined4 ****)0x5fe22e;
          puStack_5c = (undefined1 *)func_0x00e42900();
          uStack_14._0_1_ = 0x1b;
          uStack_40 = uVar8;
          if (0xf < uStack_88) {
            pppuStack_b8 = (undefined4 ***)uStack_88;
            pppuStack_bc = apppuStack_9c[0];
            pppuStack_c0 = apppuStack_9c;
            pppuStack_c4 = (undefined4 ****)0x5fe259;
            func_0x0046b1f0();
          }
          uStack_8c = 0;
          uStack_88 = 0xf;
          apppuStack_9c[0] = (undefined4 ***)((uint)apppuStack_9c[0] & 0xffffff00);
          if (puStack_5c != (undefined1 *)0x0) {
            uStack_14._0_1_ = 0x1d;
            uVar2 = (undefined1)uStack_14;
            if (0x7fffffffU - (int)pppuStack_2c < (undefined4 ****)param_6) goto LAB_005fe6f6;
            pppuStack_b8 = (undefined4 ****)param_6;
            pppuStack_c4 = &pppuStack_3c;
            if (0xf < uStack_28) {
              pppuStack_c4 = pppuStack_3c;
            }
            pppuStack_bc = &param_2;
            if (0xf < param_6._4_4_) {
              pppuStack_bc = param_2;
            }
            pppuStack_c0 = pppuStack_2c;
            pppuStack_c8 = &pppuStack_3c;
            pppuStack_cc = pppuStack_60;
            pppuStack_d0 = (undefined4 ****)0x5fe5b1;
            func_0x00487d10();
            uStack_40 = uVar8 | 1;
            uStack_14._1_3_ = 0;
            uStack_14._0_1_ = 1;
            if (0xf < uStack_28) {
              pppuStack_b8 = (undefined4 ***)uStack_28;
              pppuStack_bc = pppuStack_3c;
              pppuStack_c0 = &pppuStack_3c;
              pppuStack_c4 = (undefined4 ****)0x5fe5e3;
              func_0x0046b1f0();
            }
            pppuStack_2c = (undefined4 ****)0x0;
            uStack_28 = 0xf;
            pppuStack_3c = (undefined4 ***)((uint)pppuStack_3c & 0xffffff00);
            goto LAB_005fe058;
          }
          uStack_14._0_1_ = 0x1e;
          if (0x7fffffffU - (int)pppuStack_2c < (undefined4 ****)param_6) break;
          pppuStack_b8 = (undefined4 ****)param_6;
          pppuStack_c4 = &pppuStack_3c;
          if (0xf < uStack_28) {
            pppuStack_c4 = pppuStack_3c;
          }
          pppuStack_bc = &param_2;
          if (0xf < param_6._4_4_) {
            pppuStack_bc = param_2;
          }
          pppuStack_c0 = pppuStack_2c;
          pppuStack_c8 = &pppuStack_3c;
          pppuStack_cc = pppuStack_60;
          pppuStack_d0 = (undefined4 ***)0x5fe2ba;
          func_0x00487d10();
          uStack_40 = uVar8 | 0x20;
          uStack_14._0_1_ = 0x1f;
          pppuStack_d0 = (undefined4 ***)&DAT_00000006;
          pppuStack_d4 = (undefined4 ***)0x1142c3c;
          puVar4 = (undefined4 *)func_0x0046a880();
          uStack_40 = uVar8 | 0x30;
          pppuStack_58 = (undefined4 ***)*puVar4;
          uStack_54 = puVar4[1];
          uStack_50 = puVar4[2];
          uStack_4c = puVar4[3];
          uStack_48 = puVar4[4];
          uStack_44 = puVar4[5];
          puVar4[4] = 0;
          puVar4[5] = 0xf;
          *(undefined1 *)puVar4 = 0;
          ppppuVar7 = &pppuStack_58;
          if (0xf < uStack_44) {
            ppppuVar7 = (undefined4 ****)pppuStack_58;
          }
          puStack_5c = (undefined1 *)func_0x00e42900(ppppuVar7);
          uStack_40 = uVar8 | 0x20;
          uStack_14._0_1_ = 0x1e;
          if (0xf < uStack_44) {
            pppuStack_b8 = (undefined4 ***)(uStack_44 + 1);
            ppppuVar7 = (undefined4 ****)pppuStack_58;
            if (0xfff < pppuStack_b8) {
              ppppuVar7 = (undefined4 ****)pppuStack_58[-1];
              pppuStack_b8 = (undefined4 ***)(uStack_44 + 0x24);
              if ((undefined1 *)0x1f < (undefined1 *)((int)pppuStack_58 + (-4 - (int)ppppuVar7)))
              goto LAB_005fdb61;
            }
            pppuStack_c0 = (undefined4 ****)0x5fe362;
            pppuStack_bc = ppppuVar7;
            func_0x008ab812();
          }
          uStack_48 = 0;
          uStack_44 = 0xf;
          pppuStack_58 = (undefined4 ***)((uint)pppuStack_58 & 0xffffff00);
          uStack_14._0_1_ = 0x1b;
          uStack_40 = uVar8;
          if (0xf < uStack_64) {
            pppuStack_b8 = (undefined4 ***)uStack_64;
            pppuStack_bc = apppuStack_78[0];
            pppuStack_c0 = apppuStack_78;
            pppuStack_c4 = (undefined4 ****)0x5fe396;
            func_0x0046b1f0();
          }
          uStack_68 = 0;
          uStack_64 = 0xf;
          apppuStack_78[0] = (undefined4 ***)((uint)apppuStack_78[0] & 0xffffff00);
          if (puStack_5c != (undefined1 *)0x0) {
            uStack_14._0_1_ = 0x20;
            if (0x7fffffffU - (int)pppuStack_2c < (undefined4 ****)param_6) {
              pppuStack_b8 = (undefined4 ***)0x5fe6f6;
              func_0x00463570();
              uVar2 = (undefined1)uStack_14;
              goto LAB_005fe6f6;
            }
            pppuStack_b8 = (undefined4 ****)param_6;
            pppuStack_c4 = &pppuStack_3c;
            if (0xf < uStack_28) {
              pppuStack_c4 = pppuStack_3c;
            }
            pppuStack_bc = &param_2;
            if (0xf < param_6._4_4_) {
              pppuStack_bc = param_2;
            }
            pppuStack_c0 = pppuStack_2c;
            pppuStack_c8 = &pppuStack_3c;
            pppuStack_cc = pppuStack_60;
            pppuStack_d0 = (undefined4 ***)0x5fe4c8;
            func_0x00487d10();
            pppuStack_d0 = (undefined4 ***)0x1142b60;
            pppuStack_d4 = apppuStack_78;
            uStack_40 = uVar8 | 0x200;
            func_0x0046b5c0(pppuStack_80);
            uStack_40 = uVar8 | 1;
            uStack_14._0_1_ = 0x1b;
            if (0xf < uStack_64) {
              pppuStack_b8 = (undefined4 ***)uStack_64;
              pppuStack_bc = apppuStack_78[0];
              pppuStack_c0 = apppuStack_78;
              pppuStack_c4 = (undefined4 ****)0x5fe50e;
              func_0x0046b1f0();
            }
            uStack_68 = 0;
            uStack_64 = 0xf;
            apppuStack_78[0] = (undefined4 ***)((uint)apppuStack_78[0] & 0xffffff00);
            uStack_14._0_1_ = 1;
            if (0xf < uStack_28) {
              pppuStack_b8 = (undefined4 ***)(uStack_28 + 1);
              ppppuVar7 = (undefined4 ****)pppuStack_3c;
              if (0xfff < pppuStack_b8) {
                ppppuVar7 = (undefined4 ****)pppuStack_3c[-1];
                pppuStack_b8 = (undefined4 ***)(uStack_28 + 0x24);
                uVar2 = (undefined1)uStack_14;
                if ((undefined1 *)0x1f < (undefined1 *)((int)pppuStack_3c + (-4 - (int)ppppuVar7)))
                goto LAB_005fe08e;
              }
              pppuStack_c0 = (undefined4 ****)0x5fe558;
              pppuStack_bc = ppppuVar7;
              func_0x008ab812();
            }
            pppuStack_2c = (undefined4 ****)0x0;
            uStack_28 = 0xf;
            pppuStack_3c = (undefined4 ***)((uint)pppuStack_3c & 0xffffff00);
            goto LAB_005fe058;
          }
          uStack_14._0_1_ = 1;
          uVar2 = (undefined1)uStack_14;
          uStack_14._0_1_ = 1;
          if (0xf < uStack_28) {
            pppuStack_b8 = (undefined4 ***)(uStack_28 + 1);
            ppppuVar7 = (undefined4 ****)pppuStack_3c;
            if (0xfff < pppuStack_b8) {
              ppppuVar7 = (undefined4 ****)pppuStack_3c[-1];
              pppuStack_b8 = (undefined4 ***)(uStack_28 + 0x24);
              if ((undefined1 *)0x1f < (undefined1 *)((int)pppuStack_3c + (-4 - (int)ppppuVar7)))
              goto LAB_005fe08e;
            }
            pppuStack_c0 = (undefined4 ****)0x5fe3ea;
            pppuStack_bc = ppppuVar7;
            func_0x008ab812();
          }
          puStack_84 = puStack_84 + 6;
          pppuStack_2c = (undefined4 ****)0x0;
          uStack_28 = 0xf;
          pppuStack_3c = (undefined4 ***)((uint)pppuStack_3c & 0xffffff00);
          if (puStack_84 == &DAT_01463a48) goto LAB_005fe413;
        }
LAB_005fe5fd:
        pppuStack_b8 = (undefined4 ***)0x5fe602;
        func_0x00463570();
LAB_005fe602:
        pppuStack_b8 = (undefined4 ***)0x5fe607;
        func_0x00463570();
LAB_005fe607:
        pppuStack_b8 = (undefined4 ***)&DAT_01463a58;
        pppuStack_bc = (undefined4 ***)0x5fe611;
        func_0x008ab40d();
        if (DAT_01463a58 == -1) {
          uStack_14._0_1_ = 0xf;
          pppuStack_b8 = (undefined4 ***)0x9;
          pppuStack_bc = (undefined4 ***)0x1142c24;
          _DAT_014639ec = 0;
          DAT_014639dc = 0;
          uRam014639e0 = 0;
          uRam014639e4 = 0;
          uRam014639e8 = 0;
          DAT_014639f0 = 0;
          pppuStack_c0 = (undefined4 ***)0x5fe654;
          func_0x0046bc40();
          pppuStack_c0 = (undefined4 ***)FUN_00f728d0;
          pppuStack_c4 = (undefined4 ***)0x5fe65e;
          func_0x008ab7fd();
          uStack_14._0_1_ = 1;
          pppuStack_c0 = (undefined4 ***)&DAT_01463a58;
          pppuStack_c4 = (undefined4 ****)0x5fe66f;
          func_0x008ab3bc();
        }
      } while( true );
    }
    uStack_14._0_1_ = 0xe;
    uVar2 = (undefined1)uStack_14;
    uStack_14._0_1_ = 0xe;
    if (0x7fffffffU - (int)(undefined4 ****)param_6 < 5) {
LAB_005fe6f6:
      uStack_14._0_1_ = uVar2;
      pppuStack_b8 = (undefined4 ***)0x5fe6fb;
      func_0x00463570();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pppuStack_c4 = &param_2;
    if (0xf < param_6._4_4_) {
      pppuStack_c4 = param_2;
    }
    pppuStack_b8 = (undefined4 ***)0x5;
    pppuStack_bc = (undefined4 ***)0x1142b60;
    pppuStack_c0 = (undefined4 ****)param_6;
    pppuStack_c8 = &param_2;
    pppuStack_cc = pppuStack_60;
    pppuStack_d0 = (undefined4 ****)0x5fdee9;
    func_0x00487d10();
    uStack_40 = 1;
    uStack_14._1_3_ = 0;
    uVar3 = uStack_14._1_3_;
    uStack_14._0_1_ = 0;
    uStack_14._1_3_ = 0;
    if (0xf < param_6._4_4_) {
      pppuStack_b8 = (undefined4 ***)(param_6._4_4_ + 1);
      ppppuVar7 = param_2;
      if (0xfff < pppuStack_b8) {
        ppppuVar7 = (undefined4 ****)param_2[-1];
        iVar6 = (int)param_2 - (int)ppppuVar7;
joined_r0x005fe088:
        pppuStack_b8 = (undefined4 ***)(param_6._4_4_ + 0x24);
        uVar2 = 0;
        uVar3 = uStack_14._1_3_;
        if (0x1f < iVar6 - 4U) {
LAB_005fe08e:
          uStack_14._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
          pppuStack_b8 = (undefined4 ***)0x5fe094;
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_005fdf3a:
      uStack_14._1_3_ = uVar3;
      uStack_14._0_1_ = 0;
      pppuStack_c0 = (undefined4 ****)0x5fdf41;
      pppuStack_bc = ppppuVar7;
      func_0x008ab812();
      uVar3 = uStack_14._1_3_;
    }
  }
  else {
LAB_005fe413:
    ppppuVar7 = param_2;
    uStack_40 = uVar8 | 1;
    *pppuStack_80 = (undefined4 ***)0x0;
    pppuStack_80[1] = (undefined4 ***)0x0;
    pppuStack_80[2] = (undefined4 ***)0x0;
    pppuStack_80[3] = (undefined4 ***)0x0;
    pppuStack_80[4] = (undefined4 ***)0x0;
    pppuStack_80[5] = (undefined4 ***)0x0;
    param_2 = (undefined4 ****)((uint)param_2 & 0xffffff00);
    *pppuStack_80 = ppppuVar7;
    pppuStack_80[1] = param_3;
    pppuStack_80[2] = param_4;
    pppuStack_80[3] = param_5;
    *(undefined8 *)(pppuStack_80 + 4) = param_6;
    uStack_14._0_1_ = 0;
    uVar3 = uStack_14._1_3_;
  }
LAB_005fe457:
  uStack_14._1_3_ = uVar3;
  param_6 = 0xf00000000;
  param_2 = (undefined4 ****)((uint)param_2 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_1c;
  uStack_ac = 0x5fe482;
  FUN_008ab370();
  return;
}



undefined4 FUN_005fe700(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 auStack_30 [5];
  uint uStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed4646;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  cVar1 = FUN_005fe7e0(param_2,param_3);
  if (cVar1 != '\0') {
    func_0x00469da0(param_2);
    *unaff_FS_OFFSET = iStack_10;
    return param_1;
  }
  uVar3 = func_0x0057ff40(auStack_30,param_2,&DAT_0113c6d8,uVar2);
  uStack_8 = 1;
  func_0x00471920(param_1,uVar3,param_3);
  uStack_18 = 1;
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(auStack_30,auStack_30[0],uStack_1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



bool FUN_005fe7e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_25;
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ed4685;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x0046bc40(&DAT_0113c6d8,1,uVar1);
  iStack_14 = 0;
  func_0x00471920(auStack_58,&uStack_40,param_2);
  iStack_14._0_1_ = 1;
  cStack_21 = func_0x0083d4b0(uStack_25);
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if (0xf < uStack_44) {
    func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
  }
  uStack_48 = 0;
  uStack_44 = 0xf;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  iStack_14 = 0xffffffff;
  if (0xf < uStack_2c) {
    func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return cStack_21 != '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005fe8f0(undefined4 *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint auStackY_119c [2];
  undefined1 auStackY_1194 [8];
  undefined4 uStackY_118c;
  uint uStackY_1188;
  undefined1 *puStackY_1184;
  uint uStackY_1180;
  int aiStackY_117c [2];
  undefined4 uStackY_1174;
  byte abStackY_1170 [80];
  int iStackY_1120;
  undefined1 auStackY_10c4 [16];
  undefined1 auStackY_10b4 [160];
  undefined1 auStackY_1014 [4028];
  undefined4 uStackY_58;
  uint *puStackY_54;
  uint uStackY_50;
  undefined1 *puStackY_4c;
  undefined1 *puStackY_48;
  uint *puStackY_44;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = -1;
  puStack_c = &DAT_00ed4725;
  iStack_10 = *unaff_FS_OFFSET;
  func_0x00e87f70();
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStackY_1180 = 0;
  puStackY_1184 = param_2;
  if ((*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463a54) &&
     (func_0x008ab40d(), DAT_01463a54 == -1)) {
    uStack_8 = 1;
    _DAT_014639f4 = 0;
    iVar2 = func_0x008ab47d();
    *(int *)iVar2 = iVar2;
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)(iVar2 + 8) = iVar2;
    *(undefined2 *)(iVar2 + 0xc) = 0x101;
    _DAT_014639f4 = CONCAT44(_DAT_014639f8,iVar2);
    uStack_8._0_1_ = 1;
    func_0x008ab7fd();
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    func_0x008ab3bc();
  }
  func_0x0056eb10();
  if ((*(char *)(uStackY_1188 + 0xd) != '\0') ||
     (iVar2 = func_0x004a6430(), uVar5 = uStackY_1188, iVar2 < 0)) {
    uVar5 = DAT_014639f4;
  }
  if (uVar5 == DAT_014639f4) {
    memset(aiStackY_117c,0,0xb8);
    func_0x006072b0();
    uStack_8 = 3;
    if (iStackY_1120 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      func_0x0046bc40();
      uStackY_1180 = 1;
    }
    else {
      puStackY_44 = (uint *)0x5fea3c;
      puVar3 = (undefined1 *)func_0x00e6ac60();
      bVar1 = abStackY_1170[*(int *)(aiStackY_117c[0] + 4)];
      while ((bVar1 & 1) == 0) {
        puStackY_44 = (uint *)0x5fea79;
        func_0x005ef910();
        puStackY_44 = (uint *)uStackY_1174;
        puStackY_48 = auStackY_1014;
        uStackY_50 = 0x5fea8c;
        puStackY_4c = puVar3;
        puVar3 = (undefined1 *)func_0x00e6ac60();
        bVar1 = abStackY_1170[*(int *)(aiStackY_117c[0] + 4)];
      }
      puStackY_44 = (uint *)0x5feab7;
      memset(auStackY_10c4,0,0xb0);
      func_0x004687a0();
      uStack_8._0_1_ = 4;
      puStackY_44 = (uint *)auStackY_1194;
      puStackY_48 = (undefined1 *)0x5feadb;
      puStackY_48 = (undefined1 *)func_0x00e73e96();
      puStackY_4c = auStackY_10b4;
      uStackY_50 = 0x5feae8;
      piVar4 = (int *)func_0x005a8ba0();
      *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x40 + (int)piVar4) = 0x30;
      *(uint *)(*(int *)(*piVar4 + 4) + 0x14 + (int)piVar4) =
           *(uint *)(*(int *)(*piVar4 + 4) + 0x14 + (int)piVar4) & 0xfffff9ff | 0x800;
      func_0x005b0d50();
      uStack_8._0_1_ = 5;
      puStackY_44 = (uint *)0x5feb2c;
      func_0x0046a470();
      puVar3 = puStackY_1184;
      puStackY_44 = auStackY_119c;
      puStackY_48 = puStackY_1184;
      uStackY_1180 = 2;
      puStackY_4c = (undefined1 *)0x5feb4e;
      func_0x0056b530();
      puStackY_4c = (undefined1 *)0x5feb55;
      func_0x00469bd0();
      uStackY_1180 = 0;
      uStack_8._0_1_ = 4;
      if (0xf < uStackY_1188) {
        puStackY_4c = (undefined1 *)uStackY_1188;
        uStackY_50 = auStackY_119c[0];
        puStackY_54 = auStackY_119c;
        uStackY_58 = 0x5feb8b;
        func_0x0046b1f0();
      }
      puStackY_4c = puVar3;
      uStackY_118c = 0;
      uStackY_1188 = 0xf;
      auStackY_119c[0] = auStackY_119c[0] & 0xffffff00;
      uStackY_50 = 0x5febb4;
      uStackY_50 = func_0x0056b530();
      puStackY_54 = (uint *)0x5febbc;
      func_0x00469da0();
      uStackY_1180 = uStackY_1180 | 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      puStackY_54 = (uint *)0x5febd2;
      func_0x004673c0();
    }
    uStack_8 = uStack_8 & 0xffffff00;
    func_0x005fc190();
  }
  else {
    func_0x00469da0();
    uStack_8 = 0;
    uStackY_1180 = 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x005ff777)

void __thiscall FUN_005fec80(int ***param_1,int *param_2)

{
  code *pcVar1;
  int ***pppiVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int *****pppppiVar8;
  int ****ppppiVar9;
  char *****pppppcVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int *****pppppiVar14;
  char *****pppppcVar15;
  char *****pppppcVar16;
  int *unaff_FS_OFFSET;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  int ****ppppiStack_1e0;
  int ****ppppiStack_1dc;
  int ****ppppiStack_1d8;
  uint uStack_1d4;
  int ***apppiStack_1b4 [4];
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined8 uStack_19c;
  uint auStack_194 [12];
  char ****ppppcStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  int ****ppppiStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  int *piStack_134;
  int **ppiStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int ****ppppiStack_120;
  int ****ppppiStack_11c;
  char ****ppppcStack_118;
  int **ppiStack_114;
  int ****ppppiStack_110;
  uint uStack_10c;
  uint auStack_108 [2];
  char *pcStack_100;
  int iStack_f0;
  int iStack_ec;
  int ****appppiStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  int **appiStack_b0 [3];
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  int ***pppiStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  int ****ppppiStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  int ****appppiStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined8 uStack_34;
  char ****ppppcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed4a36;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1d4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_10c = 1;
  ppppiStack_1d8 = (int ****)0x40;
  param_2[0] = 0;
  param_2[1] = 0;
  piStack_134 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppppiStack_1dc = (int ****)0x5fece9;
  ppiStack_114 = (int **)param_1;
  uStack_14 = uStack_1d4;
  iVar6 = func_0x008ab47d();
  *(int *)iVar6 = iVar6;
  *(int *)(iVar6 + 4) = iVar6;
  *(int *)(iVar6 + 8) = iVar6;
  *(undefined2 *)(iVar6 + 0xc) = 0x101;
  *param_2 = iVar6;
  uStack_8 = 1;
  uStack_10c = 1;
  if ((*(char *)(param_1 + 0x16) == '\0') || (*(char *)((int)param_1 + 0x31) != '\0')) {
    if (param_1[0xd] != (int **)0x0) {
      ppppiStack_1d8 = (int ****)appiStack_b0;
      ppppiStack_1dc = (int ****)0x5ff53f;
      FUN_0095c880();
      ppppiStack_1dc = (int ****)auStack_108;
      ppppiStack_1e0 = (int ****)0x5ff54b;
      func_0x00e5da80();
      ppppiStack_1e0 = (int ****)appiStack_b0;
      piVar3 = *param_1[0xd];
      ppppiVar9 = (int ****)func_0x00e5d6c0(piVar3,(int)param_1[0xd][1] - (int)piVar3,0,0);
      if (ppppiVar9 == (int ****)0x0) {
        ppppiStack_1d8 = (int ****)appiStack_b0;
        ppppiStack_1dc = (int ****)0x5ff580;
        ppiStack_114 = (int **)func_0x00e5e030();
        ppiStack_130 = (int **)0x0;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        ppppiStack_1d8 = (int ****)0x17;
        ppppiStack_1dc = (int ****)0x1142c8c;
        ppppiStack_1e0 = (int ****)0x5ff5b1;
        ppppiStack_120 = ppppiVar9;
        ppppiStack_11c = ppppiVar9;
        func_0x0046bc40();
        uStack_8 = 0x26;
        ppppiStack_1e0 = (int ****)&ppiStack_114;
        ppppiStack_1d8 = (int ****)func_0x00485670();
        uStack_8._0_1_ = 0x27;
        ppppiStack_1dc = (int ****)0x4;
        ppppiStack_1e0 = (int ****)0x5ff5e1;
        FUN_005ee340();
        uStack_8._0_1_ = 0x26;
        if (0xf < uStack_38) {
          ppppiStack_1d8 = (int ****)uStack_38;
          ppppiStack_1dc = appppiStack_4c[0];
          ppppiStack_1e0 = (int ****)appppiStack_4c;
          func_0x0046b1f0();
        }
        uStack_3c = 0;
        uStack_38 = 0xf;
        appppiStack_4c[0] = (int ****)((uint)appppiStack_4c[0] & 0xffffff00);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if ((int ****)0xf < ppppiStack_11c) {
          ppppiStack_1d8 = ppppiStack_11c;
          ppppiStack_1dc = (int ****)ppiStack_130;
          ppppiStack_1e0 = (int ****)&ppiStack_130;
          func_0x0046b1f0();
        }
        ppppiStack_120 = (int ****)0x0;
        ppppiStack_11c = (int ****)0xf;
        ppiStack_130 = (int **)((uint)ppiStack_130 & 0xffffff00);
      }
      ppppiStack_1d8 = (int ****)appiStack_b0;
      ppppiStack_1dc = (int ****)0x10;
      ppppiStack_1e0 = ppppiVar9;
      pppppiVar8 = (int *****)func_0x00e5c390();
      ppppiStack_110 = (int ****)pppppiVar8;
      if (pppppiVar8 == (int *****)0x0) {
        ppppiStack_1d8 = (int ****)appiStack_b0;
        ppppiStack_1dc = (int ****)0x5ff67d;
        ppiStack_114 = (int **)func_0x00e5e030();
        ppiStack_130 = (int **)0x0;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        ppppiStack_1d8 = (int ****)0x1e;
        ppppiStack_1dc = (int ****)0x1142c44;
        ppppiStack_1e0 = (int ****)0x5ff6ae;
        ppppiStack_120 = (int ****)pppppiVar8;
        ppppiStack_11c = (int ****)pppppiVar8;
        func_0x0046bc40();
        uStack_8 = 0x28;
        ppppiStack_1e0 = (int ****)&ppiStack_114;
        ppppiStack_1d8 = (int ****)func_0x00485670();
        uStack_8._0_1_ = 0x29;
        ppppiStack_1dc = (int ****)0x4;
        ppppiStack_1e0 = (int ****)0x5ff6de;
        FUN_005ee340();
        uStack_8._0_1_ = 0x28;
        if (0xf < uStack_38) {
          ppppiStack_1d8 = (int ****)uStack_38;
          ppppiStack_1dc = appppiStack_4c[0];
          ppppiStack_1e0 = (int ****)appppiStack_4c;
          func_0x0046b1f0();
        }
        uStack_3c = 0;
        uStack_38 = 0xf;
        appppiStack_4c[0] = (int ****)((uint)appppiStack_4c[0] & 0xffffff00);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if (&DAT_0000000f < ppppiStack_11c) {
          ppppiStack_1d8 = ppppiStack_11c;
          ppppiStack_1dc = (int ****)ppiStack_130;
          ppppiStack_1e0 = (int ****)&ppiStack_130;
          func_0x0046b1f0();
        }
        ppppiStack_120 = (int ****)0x0;
        ppppiStack_11c = (int ****)0xf;
        ppiStack_130 = (int **)((uint)ppiStack_130 & 0xffffff00);
      }
      ppppiStack_1d8 = (int ****)0x0;
      ppppiStack_1e0 = (int ****)0x5ff754;
      ppppiStack_1dc = (int ****)pppppiVar8;
      lVar20 = func_0x00e59960();
      ppppcStack_118 = (char ****)lVar20;
      uStack_19c = CONCAT44((int)((ulonglong)lVar20 >> 0x20),(undefined4)uStack_19c);
      uStack_54 = 0;
      if (0 < lVar20) {
        uStack_54._0_4_ = (char *****)0x0;
        ppiStack_114 = (int **)0x0;
        pppppcVar16 = (char *****)uStack_54;
        do {
          iVar6 = func_0x00e5e2c0(pppppiVar8,pppppcVar16,ppiStack_114,0,auStack_108);
          if (iVar6 != 0) {
            uVar18 = func_0x00e5e240(pppppiVar8);
            uStack_5c = CONCAT44(uVar18,(int)uStack_5c);
            uStack_34 = CONCAT44(pppppcVar16,(int *****)uStack_34);
            ppppiStack_120 = (int ****)0x0;
            ppiStack_130 = (int **)0x0;
            uStack_12c = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            ppppiStack_11c = (int ****)0x0;
            func_0x0046bc40("error stat-ing file at index %i: %s",0x23);
            uStack_8 = 0x2a;
            uVar18 = func_0x004a5c10((int)&uStack_34 + 4,(int)&uStack_5c + 4);
            uStack_8._0_1_ = 0x2b;
            FUN_005ee340(4,uVar18);
            uStack_8._0_1_ = 0x2a;
            if (0xf < uStack_38) {
              func_0x0046b1f0(appppiStack_4c,appppiStack_4c[0],uStack_38);
            }
            uStack_3c = 0;
            uStack_38 = 0xf;
            appppiStack_4c[0] = (int ****)((uint)appppiStack_4c[0] & 0xffffff00);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            if (0xf < ppppiStack_11c) {
              func_0x0046b1f0(&ppiStack_130,ppiStack_130,ppppiStack_11c);
            }
            ppppiStack_120 = (int ****)0x0;
            ppppiStack_11c = (int ****)0xf;
            ppiStack_130 = (int **)((uint)ppiStack_130 & 0xffffff00);
          }
          if ((auStack_108[0] & 1) == 0) {
            uStack_34 = CONCAT44(pppppcVar16,(int *****)uStack_34);
            auStack_194[0] = 0;
            auStack_194[1] = 0;
            auStack_194[2] = 0;
            auStack_194[3] = 0;
            auStack_194[4] = 0;
            auStack_194[5] = 0;
            func_0x0046bc40("warning: skipping entry at index %i with invalid name.",0x36);
            uStack_8 = 0x2c;
            uVar18 = func_0x00485670((int)&uStack_34 + 4);
            uStack_8._0_1_ = 0x2d;
            FUN_005ee340(2,uVar18);
            uStack_8._0_1_ = 0x2c;
            if (0xf < uStack_1a0) {
              func_0x0046b1f0(apppiStack_1b4,apppiStack_1b4[0],uStack_1a0);
            }
            uStack_1a4 = 0;
            uStack_1a0 = 0xf;
            apppiStack_1b4[0] = (int ***)((uint)apppiStack_1b4[0] & 0xffffff00);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            if (0xf < auStack_194[5]) {
              func_0x0046b1f0(auStack_194,auStack_194[0],auStack_194[5]);
            }
            auStack_194[4] = 0;
            auStack_194[5] = 0xf;
            auStack_194[0] = auStack_194[0] & 0xffffff00;
          }
          else {
            ppppcStack_2c = (char ****)0x0;
            uStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
            uStack_1c = 0;
            pcVar12 = pcStack_100;
            do {
              cVar5 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar5 != '\0');
            func_0x0046bc40(pcStack_100,(int)pcVar12 - (int)(pcStack_100 + 1));
            uStack_8 = 0x2e;
            if ((int)uStack_1c == 0) {
              uStack_8 = 1;
              if (0xf < uStack_1c._4_4_) {
                func_0x0046b1f0(&ppppcStack_2c,ppppcStack_2c,uStack_1c._4_4_);
              }
            }
            else {
              pppppcVar10 = &ppppcStack_2c;
              if (0xf < uStack_1c._4_4_) {
                pppppcVar10 = (char *****)ppppcStack_2c;
              }
              if (*(char *)pppppcVar10 != '/') {
                auStack_194[10] = 0;
                auStack_194[0xb] = 0;
                auStack_194[6] = 0;
                auStack_194[7] = 0;
                auStack_194[8] = 0;
                auStack_194[9] = 0;
                func_0x0046bc40(&DAT_0113c2ec,1);
                uStack_8 = CONCAT31(uStack_8._1_3_,0x30);
                pppppcVar10 = &ppppcStack_2c;
                if (0xf < uStack_1c._4_4_) {
                  pppppcVar10 = (char *****)ppppcStack_2c;
                }
                puVar7 = (undefined4 *)func_0x0046a880(pppppcVar10,(int)uStack_1c);
                uVar11 = uStack_10c;
                pppppcVar10 = (char *****)*puVar7;
                uVar18 = puVar7[1];
                uVar19 = puVar7[2];
                uVar4 = puVar7[3];
                uStack_154 = *(undefined8 *)(puVar7 + 4);
                uStack_10c = uStack_10c | 0x80;
                puVar7[4] = 0;
                puVar7[5] = 0xf;
                *(undefined1 *)puVar7 = 0;
                uStack_54 = uStack_154;
                ppppcStack_164 = (char ****)pppppcVar10;
                uStack_160 = uVar18;
                uStack_15c = uVar19;
                uStack_158 = uVar4;
                if (0xf < uStack_1c._4_4_) {
                  uVar13 = uStack_1c._4_4_ + 1;
                  pppppcVar15 = (char *****)ppppcStack_2c;
                  if (0xfff < uVar13) {
                    pppppcVar15 = (char *****)ppppcStack_2c[-1];
                    uVar13 = uStack_1c._4_4_ + 0x24;
                    if ((char *)0x1f < (char *)((int)ppppcStack_2c + (-4 - (int)pppppcVar15)))
                    goto LAB_005ff523;
                  }
                  func_0x008ab812(pppppcVar15,uVar13);
                }
                uStack_10c = uVar11 & 0xffffff7f;
                ppppcStack_2c = (char ****)pppppcVar10;
                uStack_28 = uVar18;
                uStack_24 = uVar19;
                uStack_20 = uVar4;
                uStack_1c = uStack_54;
                uStack_154 = 0xf00000000;
                ppppcStack_164 = (char ****)((uint)ppppcStack_164 & 0xffffff00);
                uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),0x2e);
                if (0xf < auStack_194[0xb]) {
                  func_0x0046b1f0(auStack_194 + 6,auStack_194[6],auStack_194[0xb]);
                }
                auStack_194[10] = 0;
                auStack_194[0xb] = 0xf;
                auStack_194[6] = auStack_194[6] & 0xffffff00;
              }
              pppppcVar10 = &ppppcStack_2c;
              if (0xf < uStack_1c._4_4_) {
                pppppcVar10 = (char *****)ppppcStack_2c;
              }
              if ((*(char *)((int)pppppcVar10 + (int)uStack_1c + -1) == '/') ||
                 (iStack_f0 == 0 && iStack_ec == 0)) {
                uStack_8 = CONCAT31(uStack_8._1_3_,1);
                if (0xf < uStack_1c._4_4_) {
                  uVar11 = uStack_1c._4_4_ + 1;
                  pppppcVar10 = (char *****)ppppcStack_2c;
                  if (0xfff < uVar11) {
                    pppppcVar10 = (char *****)ppppcStack_2c[-1];
                    uVar11 = uStack_1c._4_4_ + 0x24;
                    if ((char *)0x1f < (char *)((int)ppppcStack_2c + (-4 - (int)pppppcVar10)))
                    goto LAB_005ff523;
                  }
                  func_0x008ab812(pppppcVar10,uVar11);
                }
              }
              else {
                uStack_13c = 0;
                ppppiStack_14c = (int ****)0x0;
                uStack_148 = 0;
                uStack_144 = 0;
                uStack_140 = 0;
                func_0x0046bc40(&DAT_0113c2ec,1);
                uStack_8._0_1_ = 0x31;
                uStack_7c = 0;
                pppiStack_8c = (int ***)0x0;
                uStack_88 = 0;
                uStack_84 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                func_0x0046bc40(&DAT_01141648,1);
                uStack_8._0_1_ = 0x32;
                func_0x0083cf70(&ppppiStack_14c);
                uStack_8._0_1_ = 0x31;
                if (0xf < uStack_78) {
                  func_0x0046b1f0(&pppiStack_8c,pppiStack_8c,uStack_78);
                }
                uStack_7c = 0;
                uStack_78 = 0xf;
                pppiStack_8c = (int ***)((uint)pppiStack_8c & 0xffffff00);
                uStack_8._0_1_ = 0x2e;
                if (0xf < uStack_13c._4_4_) {
                  func_0x0046b1f0(&ppppiStack_14c,ppppiStack_14c,uStack_13c._4_4_);
                }
                uStack_13c = 0xf00000000;
                ppppiStack_14c = (int ****)((uint)ppppiStack_14c & 0xffffff00);
                uVar18 = func_0x0083c260();
                uStack_8._0_1_ = 0x33;
                func_0x0056b530(&ppppcStack_2c,uVar18);
                func_0x00469bd0();
                uStack_8._0_1_ = 0x2e;
                if (0xf < uStack_90) {
                  func_0x0046b1f0(auStack_a4,auStack_a4[0],uStack_90);
                }
                uStack_94 = 0;
                uStack_90 = 0xf;
                auStack_a4[0] = auStack_a4[0] & 0xffffff00;
                uStack_8 = CONCAT31(uStack_8._1_3_,1);
                if (0xf < uStack_1c._4_4_) {
                  func_0x0046b1f0(&ppppcStack_2c,ppppcStack_2c,uStack_1c._4_4_);
                }
              }
            }
            uStack_1c = 0xf00000000;
            ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
            pppppiVar8 = (int *****)ppppiStack_110;
          }
          bVar17 = (char *****)0xfffffffe < pppppcVar16;
          pppppcVar16 = (char *****)((int)pppppcVar16 + 1);
          ppiStack_114 = (int **)((int)ppiStack_114 + (uint)bVar17);
        } while (((int)ppiStack_114 <= uStack_19c._4_4_) &&
                (((int)ppiStack_114 < uStack_19c._4_4_ || (pppppcVar16 < ppppcStack_118))));
      }
      iVar6 = func_0x00e5a480(pppppiVar8);
      if (iVar6 < 0) {
        ppppcStack_118 = (char ****)func_0x00e5e240(pppppiVar8);
        uStack_13c = 0;
        ppppiStack_14c = (int ****)0x0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        func_0x0046bc40("can\'t close zip archive: %s",0x1b);
        uStack_8 = 0x34;
        uVar18 = func_0x00485670(&ppppcStack_118);
        uStack_8._0_1_ = 0x35;
        FUN_005ee340(4,uVar18);
        uStack_8._0_1_ = 0x34;
        if (0xf < uStack_38) {
          func_0x0046b1f0(appppiStack_4c,appppiStack_4c[0],uStack_38);
        }
        uStack_3c = 0;
        uStack_38 = 0xf;
        appppiStack_4c[0] = (int ****)((uint)appppiStack_4c[0] & 0xffffff00);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if (0xf < uStack_13c._4_4_) {
          func_0x0046b1f0(&ppppiStack_14c,ppppiStack_14c,uStack_13c._4_4_);
        }
        uStack_13c = 0xf00000000;
        ppppiStack_14c = (int ****)((uint)ppppiStack_14c & 0xffffff00);
      }
      func_0x00e5db20(appiStack_b0);
    }
    uStack_10c = 0;
  }
  else {
    ppppcStack_118 = (char ****)&ppppcStack_164;
    uStack_34 = 0;
    uStack_8 = 3;
    ppppiStack_1d8 = (int ****)0x1;
    ppppiStack_1dc = (int ****)&DAT_0113c6d8;
    ppppiStack_1e0 = (int ****)0x5fed4c;
    func_0x00e7349c();
    ppppiStack_1e0 = (int ****)0x5fed59;
    func_0x00585d40();
    uStack_10c = 1;
    uStack_8 = 4;
    ppppiStack_1d8 = (int ****)&ppppcStack_164;
    ppppiStack_1dc = (int ****)0x5fedad;
    func_0x005f8160();
    uStack_8._0_1_ = 6;
    if (7 < uStack_154._4_4_) {
      ppppiStack_1dc = (int ****)uStack_154._4_4_;
      ppppiStack_1e0 = (int ****)ppppcStack_164;
      func_0x005895e0(&ppppcStack_164);
    }
    ppppcStack_118 = (char ****)&ppppiStack_1e0;
    uStack_154 = 0x700000000;
    uStack_19c = CONCAT44(&ppppiStack_1e0,(undefined4)uStack_19c);
    uVar18 = 0;
    uVar19 = 0;
    ppppcStack_164 = (char ****)((uint)ppppcStack_164 & 0xffff0000);
    uStack_5c = 0;
    if (uStack_34._4_4_ != (int *****)0x0) {
      LOCK();
      *(int *)((int)uStack_34._4_4_ + 4) = *(int *)((int)uStack_34._4_4_ + 4) + 1;
      UNLOCK();
    }
    ppppiStack_1e0 = (int ****)(int *****)uStack_34;
    ppppiStack_1dc = (int ****)uStack_34._4_4_;
    uStack_8._0_1_ = 6;
    func_0x005f7cf0();
    uStack_19c = CONCAT44(&ppppiStack_1e0,(undefined4)uStack_19c);
    uStack_54 = CONCAT44(uVar19,uVar18);
    if (uStack_34._4_4_ != (int *****)0x0) {
      LOCK();
      uStack_34._4_4_[1] = (int ****)((int)uStack_34._4_4_[1] + 1);
      UNLOCK();
    }
    ppppiStack_1e0 = (int ****)(int *****)uStack_34;
    ppppiStack_1dc = (int ****)uStack_34._4_4_;
    uStack_8._0_1_ = 10;
    ppppcStack_118 = (char ****)&ppppiStack_1e0;
    func_0x005f7d70();
    uStack_8._0_1_ = 0xd;
    if ((char *****)(int)uStack_5c != (char *****)uStack_54) {
      do {
        ppppiStack_1d8 = (int ****)0x5fee97;
        cVar5 = func_0x005f7560();
        if (cVar5 != '\0') {
          ppppiStack_1d8 = (int ****)appppiStack_4c;
          ppppiStack_1dc = (int ****)0x5feeab;
          func_0x00585e70();
          uStack_8._0_1_ = 0xe;
          ppppiStack_1dc = (int ****)appppiStack_4c;
          ppppiStack_1e0 = (int ****)appppiStack_c8;
          FUN_005fe8f0();
          ppppcStack_118 = (char ****)&ppppcStack_164;
          uStack_8 = CONCAT31(uStack_8._1_3_,0x11);
          ppppiStack_1dc = (int ****)0x2;
          ppppiStack_1e0 = (int ****)&DAT_01142c88;
          func_0x00e7349c();
          func_0x00585d40();
          uStack_10c = 1;
          uStack_8._1_3_ = 0;
          uStack_8._0_1_ = 0x13;
          ppppiStack_1dc = (int ****)0x5fef3a;
          func_0x005f91d0();
          uStack_8._0_1_ = 0x14;
          ppppiStack_1dc = (int ****)0x5fef4f;
          func_0x005f91d0();
          uStack_8._0_1_ = 0x15;
          ppppiStack_1dc = &pppiStack_8c;
          ppppiStack_1e0 = apppiStack_1b4;
          func_0x005f5a70();
          uStack_10c = 9;
          uStack_8._0_1_ = 0x14;
          if (7 < uStack_78) {
            func_0x005895e0(&pppiStack_8c,pppiStack_8c,uStack_78);
          }
          uStack_7c = 0;
          uStack_78 = 7;
          pppiStack_8c = (int ***)((uint)pppiStack_8c & 0xffff0000);
          uStack_8._0_1_ = 0x13;
          if (7 < uStack_90) {
            func_0x005895e0(auStack_a4,auStack_a4[0],uStack_90);
          }
          uStack_94 = 0;
          auStack_a4[0] = auStack_a4[0] & 0xffff0000;
          uStack_90 = 7;
          func_0x00585e70(&ppppiStack_74);
          uStack_10c = 1;
          uStack_8._0_1_ = 0x19;
          if (7 < uStack_1a0) {
            func_0x005895e0(apppiStack_1b4,apppiStack_1b4[0],uStack_1a0);
          }
          uStack_1a4 = 0;
          uStack_1a0 = 7;
          apppiStack_1b4[0] = (int ***)((uint)apppiStack_1b4[0] & 0xffff0000);
          uStack_8._0_1_ = 0x1b;
          if (7 < uStack_154._4_4_) {
            func_0x005895e0(&ppppcStack_164,ppppcStack_164,uStack_154._4_4_);
          }
          ppppcStack_164 = (char ****)((uint)ppppcStack_164 & 0xffff0000);
          pppppiVar8 = &ppppiStack_74;
          if (0xf < uStack_64._4_4_) {
            pppppiVar8 = (int *****)ppppiStack_74;
          }
          uStack_154 = 0x700000000;
          if (*(char *)pppppiVar8 != '/') {
            auStack_194[10] = 0;
            auStack_194[0xb] = 0;
            auStack_194[6] = 0;
            auStack_194[7] = 0;
            auStack_194[8] = 0;
            auStack_194[9] = 0;
            func_0x0046bc40(&DAT_0113c2ec,1);
            uStack_8 = CONCAT31(uStack_8._1_3_,0x1e);
            pppppiVar8 = &ppppiStack_74;
            if (0xf < uStack_64._4_4_) {
              pppppiVar8 = (int *****)ppppiStack_74;
            }
            puVar7 = (undefined4 *)func_0x0046a880(pppppiVar8,(undefined4)uStack_64);
            pppppiVar8 = (int *****)*puVar7;
            uVar18 = puVar7[1];
            uVar19 = puVar7[2];
            uVar4 = puVar7[3];
            uStack_19c = *(undefined8 *)(puVar7 + 4);
            puVar7[4] = 0;
            puVar7[5] = 0xf;
            *(undefined1 *)puVar7 = 0;
            uStack_10c = 0x11;
            ppppiStack_14c = (int ****)pppppiVar8;
            uStack_148 = uVar18;
            uStack_144 = uVar19;
            uStack_140 = uVar4;
            if (0xf < uStack_64._4_4_) {
              uVar11 = uStack_64._4_4_ + 1;
              pppppiVar14 = (int *****)ppppiStack_74;
              uStack_13c = uStack_19c;
              if (0xfff < uVar11) {
                pppppiVar14 = (int *****)ppppiStack_74[-1];
                uVar11 = uStack_64._4_4_ + 0x24;
                if ((char *)0x1f < (char *)((int)ppppiStack_74 + (-4 - (int)pppppiVar14))) {
LAB_005ff523:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              func_0x008ab812(pppppiVar14,uVar11);
            }
            uStack_10c = 1;
            uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
            uStack_13c = 0xf00000000;
            ppppiStack_14c = (int ****)((uint)ppppiStack_14c & 0xffffff00);
            uStack_8._0_1_ = 0x1b;
            ppppiStack_74 = (int ****)pppppiVar8;
            uStack_70 = uVar18;
            uStack_6c = uVar19;
            uStack_68 = uVar4;
            uStack_64 = uStack_19c;
            if (0xf < auStack_194[0xb]) {
              func_0x0046b1f0(auStack_194 + 6,auStack_194[6],auStack_194[0xb]);
            }
            auStack_194[10] = 0;
            auStack_194[0xb] = 0xf;
            auStack_194[6] = auStack_194[6] & 0xffffff00;
          }
          ppppiStack_120 = (int ****)0x0;
          ppppiStack_11c = (int ****)0x0;
          ppiStack_130 = (int **)0x0;
          uStack_12c = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          func_0x0046bc40(&DAT_0113c2ec,1);
          uStack_8._0_1_ = 0x1f;
          auStack_194[4] = 0;
          auStack_194[0] = 0;
          auStack_194[1] = 0;
          auStack_194[2] = 0;
          auStack_194[3] = 0;
          auStack_194[5] = 0;
          func_0x0046bc40(&DAT_01141648,1);
          uStack_8._0_1_ = 0x20;
          func_0x0083cf70(&ppiStack_130);
          uStack_8._0_1_ = 0x1f;
          if (0xf < auStack_194[5]) {
            func_0x0046b1f0(auStack_194,auStack_194[0],auStack_194[5]);
          }
          auStack_194[4] = 0;
          auStack_194[5] = 0xf;
          auStack_194[0] = auStack_194[0] & 0xffffff00;
          uStack_8 = CONCAT31(uStack_8._1_3_,0x1b);
          if (0xf < ppppiStack_11c) {
            func_0x0046b1f0(&ppiStack_130,ppiStack_130,ppppiStack_11c);
          }
          ppppiStack_120 = (int ****)0x0;
          ppppiStack_11c = (int ****)0xf;
          ppiStack_130 = (int **)((uint)ppiStack_130 & 0xffffff00);
          pppppiVar8 = (int *****)func_0x0056b530(&ppppiStack_74);
          if (pppppiVar8 != appppiStack_c8) {
            ppppiStack_1d8 = (int ****)uStack_b8;
            ppppiStack_1dc = (int ****)appppiStack_c8;
            if (0xf < uStack_b4) {
              ppppiStack_1dc = appppiStack_c8[0];
            }
            ppppiStack_1e0 = (int ****)0x5ff35c;
            func_0x0046a660();
          }
          uStack_8._0_1_ = 0xf;
          if (0xf < uStack_64._4_4_) {
            ppppiStack_1d8 = (int ****)uStack_64._4_4_;
            ppppiStack_1dc = ppppiStack_74;
            ppppiStack_1e0 = (int ****)&ppppiStack_74;
            func_0x0046b1f0();
          }
          uStack_64 = 0xf00000000;
          ppppiStack_74 = (int ****)((uint)ppppiStack_74 & 0xffffff00);
          uStack_8._0_1_ = 0xe;
          if (0xf < uStack_b4) {
            ppppiStack_1d8 = (int ****)uStack_b4;
            ppppiStack_1dc = appppiStack_c8[0];
            ppppiStack_1e0 = (int ****)appppiStack_c8;
            func_0x0046b1f0();
          }
          uStack_b8 = 0;
          uStack_b4 = 0xf;
          appppiStack_c8[0] = (int ****)((uint)appppiStack_c8[0] & 0xffffff00);
          uStack_8._0_1_ = 0xd;
          if (0xf < uStack_38) {
            ppppiStack_1d8 = (int ****)uStack_38;
            ppppiStack_1dc = appppiStack_4c[0];
            ppppiStack_1e0 = (int ****)appppiStack_4c;
            func_0x0046b1f0();
          }
          uStack_3c = 0;
          uStack_38 = 0xf;
          appppiStack_4c[0] = (int ****)((uint)appppiStack_4c[0] & 0xffffff00);
        }
        ppppiStack_1d8 = (int ****)0x5ff400;
        func_0x005f81e0();
      } while ((char *****)(int)uStack_5c != (char *****)uStack_54);
    }
    uStack_8._0_1_ = 10;
    ppppiStack_110 = (int ****)uStack_54._4_4_;
    if (uStack_54._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_54._4_4_[1] + -1;
      uStack_54._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar1 = *(code **)*uStack_54._4_4_;
        ppppiStack_1d8 = (int ****)0x5ff435;
        _guard_check_icall();
        ppppiStack_1d8 = (int ****)0x5ff43d;
        (*pcVar1)();
        LOCK();
        iVar6 = (int)ppppiStack_110[2] + -1;
        ppppiStack_110[2] = (int ***)iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar1 = *(code **)((int)*ppppiStack_110 + 4);
          ppppiStack_1d8 = (int ****)0x5ff459;
          _guard_check_icall();
          ppppiStack_1d8 = (int ****)0x5ff461;
          (*pcVar1)();
        }
      }
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,6);
    ppppiStack_110 = (int ****)uStack_5c._4_4_;
    if (uStack_5c._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_5c._4_4_[1] + -1;
      uStack_5c._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar1 = *(code **)*uStack_5c._4_4_;
        ppppiStack_1d8 = (int ****)0x5ff487;
        _guard_check_icall();
        ppppiStack_1d8 = (int ****)0x5ff48f;
        (*pcVar1)();
        LOCK();
        iVar6 = (int)ppppiStack_110[2] + -1;
        ppppiStack_110[2] = (int ***)iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar1 = *(code **)((int)*ppppiStack_110 + 4);
          ppppiStack_1d8 = (int ****)0x5ff4ab;
          _guard_check_icall();
          ppppiStack_1d8 = (int ****)0x5ff4b3;
          (*pcVar1)();
        }
      }
    }
    uStack_10c = 0;
    uStack_8 = 1;
    ppppiStack_110 = (int ****)uStack_34._4_4_;
    if (uStack_34._4_4_ != (int *****)0x0) {
      LOCK();
      ppppiVar9 = (int ****)((int)uStack_34._4_4_[1] + -1);
      uStack_34._4_4_[1] = ppppiVar9;
      UNLOCK();
      if (ppppiVar9 == (int ****)0x0) {
        pppiVar2 = **uStack_34._4_4_;
        ppppiStack_1d8 = (int ****)0x5ff4e6;
        _guard_check_icall();
        ppppiStack_1d8 = (int ****)0x5ff4ee;
        (*(code *)pppiVar2)();
        LOCK();
        pppppiVar8 = (int *****)(ppppiStack_110 + 2);
        ppppiVar9 = *pppppiVar8;
        *pppppiVar8 = (int ****)((int)*pppppiVar8 + -1);
        UNLOCK();
        if (ppppiVar9 == (int ****)0x1) {
          pppiVar2 = (int ***)(*ppppiStack_110)[1];
          ppppiStack_1d8 = (int ****)0x5ff509;
          _guard_check_icall();
          ppppiStack_1d8 = (int ****)0x5ff511;
          (*(code *)pppiVar2)();
        }
      }
    }
  }
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ffef0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_fffffec4;
  undefined2 uVar5;
  uint uStack_108;
  uint auStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e5;
  int aiStack_e4 [3];
  uint auStack_d8 [11];
  int aiStack_ac [9];
  int iStack_88;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uVar5 = (undefined2)((uint)in_stack_fffffec4 >> 0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed4abc;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_ec = 0;
  if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463a5c) {
    func_0x008ab40d(&DAT_01463a5c,uStack_14);
    if (DAT_01463a5c == -1) {
      uStack_8 = 1;
      iRam014639c4 = 0;
      iRam014639c8 = 0;
      iRam014639cc = 0;
      _DAT_014639d0 = 0xf00000000;
      DAT_014639c0 = 0;
      func_0x008ab7fd(FUN_00f72970);
      uStack_8 = uStack_8 & 0xffffff00;
      func_0x008ab3bc(&DAT_01463a5c);
    }
  }
  if (DAT_014639d0 == 0) {
    memset(aiStack_e4,0,0xb8);
    uVar1 = func_0x00585e70(auStack_104);
    uStack_8 = 2;
    func_0x006072b0(uVar1);
    uStack_8._0_1_ = 4;
    if (0xf < uStack_f0) {
      uVar4 = auStack_104[0];
      func_0x0046b1f0(auStack_104,auStack_104[0],uStack_f0);
      uVar5 = (undefined2)(uVar4 >> 0x10);
    }
    uStack_f4 = 0;
    uStack_f0 = 0xf;
    auStack_104[0] = auStack_104[0] & 0xffffff00;
    if (iStack_88 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      func_0x0046bc40(&DAT_0112e1b4,0);
      uStack_ec = 1;
    }
    else {
      iVar2 = *(int *)((int)aiStack_ac + *(int *)(aiStack_e4[0] + 4));
      uStack_108 = CONCAT31((int3)(uStack_108 >> 8),iVar2 == 0) & 0xffff00ff;
      func_0x00608d10(iVar2,uStack_108,0,CONCAT22(uVar5,1),&uStack_e5);
      uStack_8 = CONCAT31(uStack_8._1_3_,5);
      iVar2 = func_0x005a8550();
      if (iVar2 == 0) {
        func_0x00464710((uint)(*(int *)((int)aiStack_ac + *(int *)(aiStack_e4[0] + 4)) == 0) * 4 + 2
                        | *(uint *)((int)auStack_d8 + *(int *)(aiStack_e4[0] + 4)),0);
      }
      piVar3 = (int *)FUN_0086f850(auStack_104,auStack_2c,0);
      uStack_8._0_1_ = 6;
      if (piVar3 != &DAT_014639c0) {
        if (0xf < DAT_014639d4) {
          uVar4 = DAT_014639d4 + 1;
          iVar2 = DAT_014639c0;
          if (0xfff < uVar4) {
            iVar2 = *(int *)(DAT_014639c0 + -4);
            uVar4 = DAT_014639d4 + 0x24;
            if (0x1f < (DAT_014639c0 - iVar2) - 4U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          func_0x008ab812(iVar2,uVar4);
        }
        DAT_014639c0 = *piVar3;
        iRam014639c4 = piVar3[1];
        iRam014639c8 = piVar3[2];
        iRam014639cc = piVar3[3];
        _DAT_014639d0 = *(undefined8 *)(piVar3 + 4);
        piVar3[4] = 0;
        piVar3[5] = 0xf;
        *(undefined1 *)piVar3 = 0;
      }
      uStack_8._0_1_ = 5;
      if (0xf < uStack_f0) {
        func_0x0046b1f0(auStack_104,auStack_104[0],uStack_f0);
      }
      uStack_f4 = 0;
      uStack_f0 = 0xf;
      auStack_104[0] = auStack_104[0] & 0xffffff00;
      func_0x00469da0(&DAT_014639c0);
      uStack_ec = 1;
      uStack_8._0_1_ = 4;
      if (0xf < uStack_18) {
        func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
      }
      uStack_1c = 0;
      uStack_18 = 0xf;
      auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    }
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    func_0x005fc190();
  }
  else {
    func_0x00469da0(&DAT_014639c0);
    uStack_8 = 0;
    uStack_ec = 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00600270(int *****param_1,int *****param_2,char param_3)

{
  int ***pppiVar1;
  code *pcVar2;
  int ****ppppiVar3;
  undefined1 uVar4;
  char cVar5;
  char *****pppppcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  int iVar10;
  undefined4 uVar11;
  DWORD DVar12;
  int *****pppppiVar13;
  int *piVar14;
  undefined4 *****pppppuVar15;
  int *****pppppiVar16;
  uint uVar17;
  int *unaff_FS_OFFSET;
  undefined8 uVar18;
  int ****ppppiStack_18c;
  int ****ppppiStack_188;
  int ****ppppiStack_184;
  int ***apppiStack_164 [4];
  undefined4 uStack_154;
  uint uStack_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int ****appppiStack_140 [4];
  undefined4 uStack_130;
  int ****ppppiStack_12c;
  char cStack_125;
  uint uStack_124;
  int ****ppppiStack_120;
  undefined4 ****ppppuStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int ****ppppiStack_10c;
  int ****ppppiStack_108;
  char acStack_101 [25];
  int ****ppppiStack_e8;
  undefined1 auStack_c0 [12];
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 ***pppuStack_a8;
  undefined4 **ppuStack_a4;
  undefined4 **ppuStack_a0;
  undefined4 **ppuStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  char ****ppppcStack_84;
  int ***pppiStack_80;
  int ***pppiStack_7c;
  int ***pppiStack_78;
  undefined8 uStack_74;
  int ****ppppiStack_6c;
  int ***pppiStack_68;
  int ***pppiStack_64;
  int ***pppiStack_60;
  undefined8 uStack_5c;
  undefined4 ****ppppuStack_54;
  undefined4 **ppuStack_50;
  undefined4 **ppuStack_4c;
  undefined4 **ppuStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  int ****ppppiStack_3c;
  undefined8 uStack_38;
  int ****ppppiStack_30;
  char ****ppppcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int ****ppppiStack_1c;
  int ****ppppiStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed4e9b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar17 = 0;
  uStack_124 = 0;
  ppppiStack_3c = (int ****)param_2;
  ppppiStack_14c = (int ****)param_1;
  if (*(char *)(param_1 + 0x16) == '\0') {
    if (*(char *)((int)param_1 + 0x31) == '\0') {
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0x0;
      ppppuStack_11c = (int ****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      func_0x0046bc40();
      iStack_8 = 0x1d;
      FUN_005ee340();
      iStack_8 = 0xffffffff;
      if (0xf < ppppiStack_108) {
        ppppiStack_184 = (int ****)0x601045;
        func_0x0046b1f0();
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x31) == '\0') {
    uStack_90 = 0;
    uStack_88 = 0;
    ppuStack_a4 = (undefined4 ***)0x0;
    ppuStack_a0 = (undefined4 ***)0x0;
    ppuStack_9c = (undefined4 ***)0x0;
    cStack_125 = '\0';
    uStack_98 = 0xf00000000;
    pppuStack_a8 = (undefined4 ****)0x0;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    ppppiStack_3c = (int ****)**param_2;
LAB_00600327:
    if (*(char *)((int)ppppiStack_3c + 0xd) != '\0') goto LAB_006009d6;
    ppppiStack_148 = ppppiStack_3c + 4;
    ppppiStack_144 = (int ****)ppppiStack_3c[8];
    ppppcStack_84 = (char ****)0x0;
    pppiStack_80 = (int ***)0x0;
    pppiStack_7c = (int ***)0x0;
    pppiStack_78 = (int ***)0x0;
    uStack_74 = 0;
    if ((int ****)0xf < ppppiStack_3c[9]) {
      ppppiStack_148 = (int ****)*ppppiStack_148;
    }
    if ((int *****)0x7fffffff < ppppiStack_144) {
      func_0x00463570();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (&DAT_0000000f < ppppiStack_144) {
      uVar17 = (uint)ppppiStack_144 | 0xf;
      if (uVar17 < 0x80000000) {
        if (uVar17 < 0x16) {
          uVar17 = 0x16;
        }
      }
      else {
        uVar17 = 0x7fffffff;
      }
      ppppcStack_84 = (char ****)func_0x0046c950();
      uStack_74 = CONCAT44(uVar17,ppppiStack_144);
      ppppiStack_184 = (int ****)0x6003d2;
      memcpy(ppppcStack_84,ppppiStack_148,(size_t)((int)ppppiStack_144 + 1));
    }
    else {
      uVar17 = 0xf;
      uStack_74 = CONCAT44(0xf,ppppiStack_144);
      ppppcStack_84 = (char ****)*ppppiStack_148;
      pppiStack_80 = (int ***)((int *****)ppppiStack_148)[1];
      pppiStack_7c = (int ***)((int *****)ppppiStack_148)[2];
      pppiStack_78 = (int ***)((int *****)ppppiStack_148)[3];
    }
    iStack_8._0_1_ = 2;
    if ((int *****)ppppiStack_144 == (int *****)0x0) {
      iStack_8._0_1_ = 1;
      uVar4 = (undefined1)iStack_8;
      iStack_8._0_1_ = 1;
      if (0xf < uVar17) {
        ppppiStack_184 = (int ****)0x6003fd;
        func_0x0046b1f0();
        uVar4 = (undefined1)iStack_8;
      }
LAB_0060079c:
      iStack_8._0_1_ = uVar4;
      uStack_74 = 0xf00000000;
      ppppcStack_84 = (char ****)((uint)ppppcStack_84 & 0xffffff00);
      func_0x00499be0();
      goto LAB_00600327;
    }
    if ((int *****)0x1 < ppppiStack_144) {
      pppppcVar6 = &ppppcStack_84;
      if (0xf < uVar17) {
        pppppcVar6 = (char *****)ppppcStack_84;
      }
      if (*(char *)pppppcVar6 == '/') {
        ppppiStack_184 = (int ****)0x600434;
        pppppcVar6 = (char *****)func_0x00482f60();
        iStack_8._0_1_ = 3;
        uVar4 = (undefined1)iStack_8;
        iStack_8._0_1_ = 3;
        if (&ppppcStack_84 != pppppcVar6) {
          if (0xf < uStack_74._4_4_) {
            if ((0xfff < uStack_74._4_4_ + 1) &&
               ((char *)0x1f < (char *)((int)ppppcStack_84 + (-4 - (int)ppppcStack_84[-1]))))
            goto LAB_00600846;
            func_0x008ab812();
          }
          ppppcStack_84 = *pppppcVar6;
          pppiStack_80 = (int ***)pppppcVar6[1];
          pppiStack_7c = (int ***)pppppcVar6[2];
          pppiStack_78 = (int ***)pppppcVar6[3];
          uStack_74 = *(undefined8 *)(pppppcVar6 + 4);
          pppppcVar6[4] = (char ****)0x0;
          pppppcVar6[5] = (char ****)0xf;
          *(undefined1 *)pppppcVar6 = 0;
        }
        iStack_8._0_1_ = 2;
        if (0xf < uStack_150) {
          ppppiStack_184 = (int ****)0x6004cb;
          func_0x0046b1f0();
        }
        uStack_154 = 0;
        uStack_150 = 0xf;
        apppiStack_164[0] = (int ***)((uint)apppiStack_164[0] & 0xffffff00);
      }
    }
    ppppiStack_120 = (int ****)&ppppiStack_18c;
    uStack_38 = 0;
    func_0x00469da0();
    iStack_8._0_1_ = 2;
    func_0x005f9270();
    iStack_8._0_1_ = 5;
    uVar4 = (undefined1)iStack_8;
    iStack_8._0_1_ = 5;
    if ((int)uStack_38 == 0) {
      cStack_125 = '\x01';
      ppppiStack_1c = (int ****)0x0;
      ppppcStack_2c = (char ****)0x0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppppiStack_18 = (int ****)0x0;
      iStack_8._0_1_ = uVar4;
      func_0x0046bc40("Download file not found - %s");
      iStack_8 = CONCAT31(iStack_8._1_3_,0x11);
      pppppcVar6 = &ppppcStack_2c;
      if (0xf < ppppiStack_18) {
        pppppcVar6 = (char *****)ppppcStack_2c;
      }
      iVar8 = func_0x004881b0(pppppcVar6,&ppppcStack_84);
      iVar10 = iVar8 + 1;
      if (SCARRY4(iVar8,1)) {
        iVar10 = -1;
      }
      func_0x00469c80(iVar10,0);
      uStack_124 = 0x80;
      pppppcVar6 = &ppppcStack_2c;
      if (0xf < ppppiStack_18) {
        pppppcVar6 = (char *****)ppppcStack_2c;
      }
      uVar11 = func_0x004881b0(pppppcVar6,&ppppcStack_84);
      func_0x004698c0(uVar11,0);
      if (0xf < uStack_98._4_4_) {
        if ((0xfff < uStack_98._4_4_ + 1) &&
           (0x1f < (uint)((int)pppuStack_a8 + (-4 - (int)pppuStack_a8[-1])))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        func_0x008ab812();
      }
      pppuStack_a8 = ppppuStack_54;
      uStack_98 = CONCAT44(uStack_40,uStack_44);
      uStack_124 = 0;
      iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
      uStack_40 = 0xf;
      ppppuStack_54 = (undefined4 ****)((uint)ppppuStack_54 & 0xffffff00);
      ppuStack_a4 = ppuStack_50;
      ppuStack_a0 = ppuStack_4c;
      ppuStack_9c = ppuStack_48;
    }
    else {
      func_0x0057ff40(&ppppcStack_2c,&ppppcStack_84);
      iStack_8._0_1_ = 6;
      func_0x005899d0(&ppppcStack_2c);
      iStack_8._0_1_ = 7;
      acStack_101[0] = func_0x005f8670();
      iStack_8 = CONCAT31(iStack_8._1_3_,6);
      if (&DAT_00000007 < ppppiStack_12c) {
        func_0x005895e0(appppiStack_140,appppiStack_140[0],ppppiStack_12c);
      }
      uStack_130 = 0;
      ppppiStack_12c = (int ****)&DAT_00000007;
      appppiStack_140[0] = (int ****)((uint)appppiStack_140[0] & 0xffff0000);
      if (acStack_101[0] != '\0') {
        pppppcVar6 = &ppppcStack_2c;
        if (0xf < ppppiStack_18) {
          pppppcVar6 = (char *****)ppppcStack_2c;
        }
        remove((char *)pppppcVar6);
      }
      func_0x00608dd0();
      iStack_8._0_1_ = 9;
      puVar7 = (undefined4 *)func_0x005f50c0(&ppppuStack_11c);
      iStack_8._0_1_ = 10;
      if (7 < (uint)puVar7[5]) {
        puVar7 = (undefined4 *)*puVar7;
      }
      func_0x00e737a5(puVar7);
      iStack_8._0_1_ = 9;
      if (7 < ppppiStack_108) {
        func_0x005895e0(&ppppuStack_11c,ppppuStack_11c,ppppiStack_108);
      }
      ppppiStack_10c = (int ****)0x0;
      ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffff0000);
      pppppcVar6 = &ppppcStack_2c;
      if (0xf < ppppiStack_18) {
        pppppcVar6 = (char *****)ppppcStack_2c;
      }
      ppppiStack_108 = (int ****)0x7;
      iVar8 = func_0x00bac0a0(pppppcVar6,&DAT_01142eb4);
      if (iVar8 != 0) {
        func_0x00bab6e0(iVar8,*(int *)((int)uStack_38 + 0x48),
                        *(int *)((int)uStack_38 + 0x4c) - *(int *)((int)uStack_38 + 0x48));
        func_0x00baa8e0(iVar8);
        pppppcVar6 = &ppppcStack_2c;
        if (0xf < ppppiStack_18) {
          pppppcVar6 = (char *****)ppppcStack_2c;
        }
        SetFileAttributesA((LPCSTR)pppppcVar6,2);
        func_0x0056d1b0(&ppppcStack_2c);
        iStack_8._0_1_ = 6;
        if (7 < uStack_40) {
          ppppiStack_184 = (int ****)0x6006af;
          func_0x005895e0();
        }
        uStack_44 = 0;
        uStack_40 = 7;
        ppppuStack_54 = (undefined4 ****)((uint)ppppuStack_54 & 0xffff0000);
        iStack_8._0_1_ = 5;
        if (0xf < ppppiStack_18) {
          if ((0xfff < (int)ppppiStack_18 + 1U) &&
             ((char *)0x1f < (char *)((int)ppppcStack_2c + (-4 - (int)ppppcStack_2c[-1]))))
          goto LAB_006009b4;
          func_0x008ab812();
        }
        ppppiStack_1c = (int ****)0x0;
        ppppiStack_18 = (int ****)0xf;
        ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
        iStack_8._0_1_ = 2;
        ppppiStack_144 = (int ****)uStack_38._4_4_;
        if (uStack_38._4_4_ != (int *****)0x0) {
          LOCK();
          ppppiVar3 = (int ****)((int)uStack_38._4_4_[1] + -1);
          uStack_38._4_4_[1] = ppppiVar3;
          UNLOCK();
          if (ppppiVar3 == (int ****)0x0) {
            pppiVar1 = **uStack_38._4_4_;
            _guard_check_icall();
            (*(code *)pppiVar1)();
            LOCK();
            ppppiVar3 = (int ****)((int)ppppiStack_144[2] + -1);
            ppppiStack_144[2] = (int ***)ppppiVar3;
            UNLOCK();
            if (ppppiVar3 == (int ****)0x0) {
              pppiVar1 = (int ***)(*ppppiStack_144)[1];
              _guard_check_icall();
              (*(code *)pppiVar1)();
            }
          }
        }
        iStack_8._0_1_ = 1;
        uVar4 = (undefined1)iStack_8;
        if (0xf < uStack_74._4_4_) {
          if ((uStack_74._4_4_ + 1 < 0x1000) ||
             ((char *)((int)ppppcStack_84 + (-4 - (int)ppppcStack_84[-1])) <= &DAT_0000001f)) {
            func_0x008ab812();
            uVar4 = (undefined1)iStack_8;
            goto LAB_0060079c;
          }
          goto LAB_00600846;
        }
        goto LAB_0060079c;
      }
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0x0;
      ppppuStack_11c = (undefined4 *****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      func_0x0046bc40("Failed to open file for update - %s",0x23);
      iStack_8._0_1_ = 0xc;
      ppppuVar9 = (undefined4 ****)func_0x00484eb0(&ppppcStack_2c);
      iStack_8._0_1_ = 0xd;
      if (&pppuStack_a8 != ppppuVar9) {
        if (0xf < uStack_98._4_4_) {
          if ((0xfff < uStack_98._4_4_ + 1) &&
             (uVar4 = (undefined1)iStack_8,
             0x1f < (uint)((int)pppuStack_a8 + (-4 - (int)pppuStack_a8[-1])))) goto LAB_00600846;
          func_0x008ab812();
        }
        pppuStack_a8 = *ppppuVar9;
        ppuStack_a4 = ppppuVar9[1];
        ppuStack_a0 = ppppuVar9[2];
        ppuStack_9c = ppppuVar9[3];
        uStack_98 = *(undefined8 *)(ppppuVar9 + 4);
        ppppuVar9[4] = (undefined4 ***)0x0;
        ppppuVar9[5] = (undefined4 ***)0xf;
        *(undefined1 *)ppppuVar9 = 0;
      }
      iStack_8._0_1_ = 0xc;
      if (&DAT_0000000f < ppppiStack_12c) {
        ppppiStack_184 = (int ****)0x6008bb;
        func_0x0046b1f0();
      }
      uStack_130 = 0;
      ppppiStack_12c = (int ****)&DAT_0000000f;
      appppiStack_140[0] = (int ****)((uint)appppiStack_140[0] & 0xffffff00);
      iStack_8._0_1_ = 9;
      if (0xf < ppppiStack_108) {
        ppppiStack_184 = (int ****)0x6008fb;
        func_0x0046b1f0();
      }
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0xf;
      ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffffff00);
      cStack_125 = '\x01';
      iStack_8._0_1_ = 6;
      if (7 < uStack_40) {
        ppppiStack_184 = (int ****)0x600939;
        func_0x005895e0();
      }
      uStack_40 = 7;
      ppppuStack_54 = (undefined4 ****)((uint)ppppuStack_54 & 0xffff0000);
    }
    uStack_44 = 0;
    if (0xf < ppppiStack_18) {
      iStack_8._0_1_ = 5;
      uStack_44 = 0;
      ppppiStack_184 = (int ****)0x600969;
      func_0x0046b1f0();
    }
    ppppiStack_1c = (int ****)0x0;
    ppppiStack_18 = (int ****)0xf;
    ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
    iStack_8._0_1_ = 2;
    FUN_00468340();
    iStack_8._0_1_ = 1;
    if (0xf < uStack_74._4_4_) {
      if ((0xfff < uStack_74._4_4_ + 1) &&
         ((char *)0x1f < (char *)((int)ppppcStack_84 + (-4 - (int)ppppcStack_84[-1])))) {
LAB_006009b4:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      func_0x008ab812();
    }
    uStack_74 = 0xf00000000;
    ppppcStack_84 = (char ****)((uint)ppppcStack_84 & 0xffffff00);
    goto LAB_006009d6;
  }
  ppppiStack_30 = param_2[1];
  ppppuStack_11c = (int ****)0x0;
  iStack_118 = 0;
  iStack_114 = 0;
  iStack_110 = 0;
  ppppiStack_10c = (int ****)0x0;
  ppppiStack_108 = (int ****)0x0;
  func_0x0046bc40();
  iStack_8 = 0x1e;
  ppppiStack_184 = (int ****)0x6010b5;
  func_0x00485670();
  iStack_8._0_1_ = 0x1f;
  ppppiStack_184 = (int ****)0x1;
  ppppiStack_188 = (int ****)0x6010c9;
  FUN_005ee340();
  iStack_8 = CONCAT31(iStack_8._1_3_,0x1e);
  if (&DAT_0000000f < ppppiStack_12c) {
    ppppiStack_184 = appppiStack_140[0];
    ppppiStack_188 = (int ****)appppiStack_140;
    ppppiStack_18c = (int ****)0x6010eb;
    func_0x0046b1f0();
  }
  uStack_130 = 0;
  ppppiStack_12c = (int ****)&DAT_0000000f;
  appppiStack_140[0] = (int ****)((uint)appppiStack_140[0] & 0xffffff00);
  iStack_8 = 0xffffffff;
  if (0xf < ppppiStack_108) {
    ppppiStack_184 = ppppuStack_11c;
    ppppiStack_188 = (int ****)&ppppuStack_11c;
    ppppiStack_18c = (int ****)0x60112e;
    func_0x0046b1f0();
  }
  ppppiStack_10c = (int ****)0x0;
  ppppiStack_108 = (int ****)0xf;
  ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffffff00);
  ppppiStack_184 = (int ****)0x601158;
  FUN_0095c880();
  ppppiStack_184 = (int ****)auStack_c0;
  ppppiStack_188 = (int ****)0x0;
  ppppiStack_18c = (int ****)0x0;
  pppppiVar13 = (int *****)func_0x00e5d6c0();
  ppppiStack_144 = (int ****)pppppiVar13;
  if (pppppiVar13 == (int *****)0x0) {
    ppppiStack_184 = (int ****)0x60118b;
    ppppiStack_14c = (int ****)func_0x00e5e030();
    ppppuStack_11c = (int ****)0x0;
    iStack_118 = 0;
    iStack_114 = 0;
    iStack_110 = 0;
    ppppiStack_184 = (int ****)0x1142c8c;
    ppppiStack_188 = (int ****)0x6011bc;
    ppppiStack_10c = (int ****)pppppiVar13;
    ppppiStack_108 = (int ****)pppppiVar13;
    func_0x0046bc40();
    iStack_8 = 0x20;
    ppppiStack_188 = (int ****)&ppppiStack_14c;
    ppppiStack_18c = (int ****)0x6011db;
    func_0x00485670();
    iStack_8._0_1_ = 0x21;
    FUN_005ee340();
    iStack_8 = CONCAT31(iStack_8._1_3_,0x20);
LAB_006011f3:
    if (&DAT_0000000f < ppppiStack_12c) {
      ppppiStack_184 = (int ****)0x601211;
      func_0x0046b1f0();
    }
    uStack_130 = 0;
    ppppiStack_12c = (int ****)&DAT_0000000f;
    appppiStack_140[0] = (int ****)((uint)appppiStack_140[0] & 0xffffff00);
  }
  else {
    ppppiStack_184 = (int ****)0x60127d;
    func_0x00e5dd30();
    ppppiStack_184 = (int ****)auStack_c0;
    ppppiStack_188 = (int ****)&DAT_00000008;
    ppppiStack_18c = (int ****)pppppiVar13;
    pppppiVar13 = (int *****)func_0x00e5c390();
    ppppiStack_148 = (int ****)pppppiVar13;
    if (pppppiVar13 == (int *****)0x0) {
      ppppiStack_184 = (int ****)0x6012a7;
      ppppiStack_14c = (int ****)func_0x00e5e030();
      ppppuStack_11c = (int ****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      ppppiStack_184 = (int ****)0x1142c44;
      ppppiStack_188 = (int ****)0x6012d8;
      ppppiStack_10c = (int ****)pppppiVar13;
      ppppiStack_108 = (int ****)pppppiVar13;
      func_0x0046bc40();
      iStack_8 = 0x22;
      ppppiStack_188 = (int ****)&ppppiStack_14c;
      ppppiStack_18c = (int ****)0x6012f7;
      func_0x00485670();
      iStack_8._0_1_ = 0x23;
      FUN_005ee340();
      iStack_8 = CONCAT31(iStack_8._1_3_,0x22);
      goto LAB_006011f3;
    }
    ppppiStack_184 = (int ****)0x601319;
    func_0x00e5db20();
    ppppiStack_30 = (int ****)**ppppiStack_3c;
    cVar5 = *(char *)((int)ppppiStack_30 + 0xd);
    while (cVar5 == '\0') {
      ppppiStack_184 = (int ****)0x60133c;
      func_0x00469da0();
      iStack_8 = 0x24;
      if ((uint)uStack_5c != 0) {
        if (1 < (uint)uStack_5c) {
          pppppiVar16 = &ppppiStack_6c;
          if (0xf < uStack_5c._4_4_) {
            pppppiVar16 = (int *****)ppppiStack_6c;
          }
          if (*(char *)pppppiVar16 == '/') {
            ppppiStack_184 = (int ****)0xffffffff;
            ppppiStack_188 = (int ****)0x1;
            ppppiStack_18c = (int ****)appppiStack_140;
            pppppiVar13 = (int *****)func_0x00482f60();
            iStack_8._0_1_ = 0x25;
            if (&ppppiStack_6c != pppppiVar13) {
              if (&DAT_0000000f < uStack_5c._4_4_) {
                ppppiStack_184 = (int ****)uStack_5c._4_4_;
                ppppiStack_188 = ppppiStack_6c;
                ppppiStack_18c = (int ****)&ppppiStack_6c;
                func_0x0046b1f0();
              }
              ppppiStack_6c = *pppppiVar13;
              pppiStack_68 = (int ***)pppppiVar13[1];
              pppiStack_64 = (int ***)pppppiVar13[2];
              pppiStack_60 = (int ***)pppppiVar13[3];
              uStack_5c = *(undefined8 *)(pppppiVar13 + 4);
              pppppiVar13[4] = (int ****)0x0;
              pppppiVar13[5] = (int ****)0xf;
              *(undefined1 *)pppppiVar13 = 0;
            }
            iStack_8 = CONCAT31(iStack_8._1_3_,0x24);
            if (&DAT_0000000f < ppppiStack_12c) {
              ppppiStack_184 = ppppiStack_12c;
              ppppiStack_188 = appppiStack_140[0];
              ppppiStack_18c = (int ****)appppiStack_140;
              func_0x0046b1f0();
            }
            uStack_130 = 0;
            ppppiStack_12c = (int ****)&DAT_0000000f;
            appppiStack_140[0] = (int ****)((uint)appppiStack_140[0] & 0xffffff00);
            pppppiVar13 = (int *****)ppppiStack_148;
          }
        }
        uStack_38 = 0;
        func_0x00469da0(&ppppiStack_6c);
        iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
        iStack_8._0_1_ = 0x24;
        func_0x005f9270(&uStack_38);
        iStack_8._0_1_ = 0x27;
        uVar4 = (undefined1)iStack_8;
        iStack_8._0_1_ = 0x27;
        if ((int)uStack_38 == 0) {
          uStack_44 = 0;
          uStack_40 = 0;
          ppppuStack_54 = (undefined4 ****)0x0;
          ppuStack_50 = (undefined4 ***)0x0;
          ppuStack_4c = (undefined4 ***)0x0;
          ppuStack_48 = (undefined4 ***)0x0;
          iStack_8._0_1_ = uVar4;
          func_0x0046bc40(&DAT_0113c2ec,1);
          iStack_8._0_1_ = 0x2b;
          pppppiVar13 = &ppppiStack_6c;
          if (0xf < uStack_5c._4_4_) {
            pppppiVar13 = (int *****)ppppiStack_6c;
          }
          piVar14 = (int *)func_0x0046a880(pppppiVar13,(uint)uStack_5c);
          uStack_124 = uVar17 | 0x800;
          ppppuStack_11c = (undefined4 ****)*piVar14;
          iStack_118 = piVar14[1];
          iStack_114 = piVar14[2];
          iStack_110 = piVar14[3];
          ppppiStack_10c = (int ****)piVar14[4];
          ppppiStack_108 = (int ****)piVar14[5];
          piVar14[4] = 0;
          piVar14[5] = 0xf;
          *(undefined1 *)piVar14 = 0;
          pppppuVar15 = &ppppuStack_11c;
          if (0xf < ppppiStack_108) {
            pppppuVar15 = (undefined4 *****)ppppuStack_11c;
          }
          pppppiVar13 = (int *****)func_0x00e432f0(pppppuVar15);
          uStack_124 = uVar17 & 0xfffff7ff;
          iStack_8._0_1_ = 0x2a;
          ppppiStack_3c = (int ****)pppppiVar13;
          if (0xf < ppppiStack_108) {
            if ((0xfff < (int)ppppiStack_108 + 1U) &&
               (uVar4 = (undefined1)iStack_8,
               0x1f < (uint)((int)ppppuStack_11c + (-4 - (int)ppppuStack_11c[-1])))) {
LAB_00600846:
              iStack_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            func_0x008ab812();
          }
          ppppiStack_10c = (int ****)0x0;
          ppppiStack_108 = (int ****)0xf;
          ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffffff00);
          iStack_8._0_1_ = 0x27;
          if (0xf < uStack_40) {
            ppppiStack_184 = (int ****)0x601623;
            func_0x0046b1f0();
          }
          uStack_44 = 0;
          uStack_40 = 0xf;
          ppppuStack_54 = (undefined4 ****)((uint)ppppuStack_54 & 0xffffff00);
          if (pppppiVar13 == (int *****)0x0) {
            func_0x00e42b20();
            ppppiStack_120 = (int ****)func_0x00e429d0();
            ppppcStack_2c = (char ****)0x0;
            uStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
            ppppiStack_1c = (int ****)pppppiVar13;
            ppppiStack_18 = (int ****)pppppiVar13;
            func_0x0046bc40();
            iStack_8._0_1_ = 0x2c;
            ppppiStack_184 = (int ****)&ppppiStack_6c;
            ppppiStack_188 = (int ****)0x60168d;
            func_0x004852c0();
            iStack_8._0_1_ = 0x2d;
            FUN_005ee340();
            iStack_8._0_1_ = 0x2c;
            if (0xf < uStack_150) {
              ppppiStack_184 = (int ****)0x6016c3;
              func_0x0046b1f0();
            }
            uStack_154 = 0;
            uStack_150 = 0xf;
            apppiStack_164[0] = (int ***)((uint)apppiStack_164[0] & 0xffffff00);
            iStack_8._0_1_ = 0x27;
            if (&DAT_0000000f < ppppiStack_18) {
              ppppiStack_184 = (int ****)0x6016fa;
              func_0x0046b1f0();
            }
            ppppiStack_1c = (int ****)0x0;
            ppppiStack_18 = (int ****)0xf;
            ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
          }
          pppppiVar16 = (int *****)func_0x00e42920();
          ppppiStack_188 = (int ****)malloc((size_t)pppppiVar16);
          ppppiStack_18c = ppppiStack_3c;
          ppppiStack_184 = (int ****)pppppiVar16;
          ppppiStack_120 = ppppiStack_188;
          func_0x00e43530();
          func_0x00e42340();
          pppppiVar13 = (int *****)ppppiStack_148;
          iVar8 = func_0x00e5d640(ppppiStack_148,ppppiStack_120,pppppiVar16);
          uVar17 = uStack_124;
          if (iVar8 != 0) goto LAB_00601769;
          ppppiStack_120 = (int ****)func_0x00e5e240(pppppiVar13);
          ppppiStack_10c = (int ****)0x0;
          ppppiStack_108 = (int ****)0x0;
          ppppuStack_11c = (int ****)0x0;
          iStack_118 = 0;
          iStack_114 = 0;
          iStack_110 = 0;
          func_0x0046bc40("can\'t create source buffer: %s",0x1e);
          iStack_8._0_1_ = 0x2e;
          func_0x00485670(&ppppiStack_120);
          iStack_8._0_1_ = 0x2f;
          FUN_005ee340();
          iStack_8 = CONCAT31(iStack_8._1_3_,0x2e);
LAB_006019ba:
          FUN_00469ba0();
        }
        else {
          iVar8 = func_0x00e5d640(pppppiVar13,*(int *)((int)uStack_38 + 0x48),
                                  *(int *)((int)uStack_38 + 0x4c) - *(int *)((int)uStack_38 + 0x48),
                                  0,0);
          if (iVar8 == 0) {
            ppppiStack_120 = (int ****)func_0x00e5e240(pppppiVar13);
            ppppiStack_10c = (int ****)0x0;
            ppppiStack_108 = (int ****)0x0;
            ppppuStack_11c = (int ****)0x0;
            iStack_118 = 0;
            iStack_114 = 0;
            iStack_110 = 0;
            func_0x0046bc40("can\'t create source buffer: %s",0x1e);
            iStack_8._0_1_ = 0x28;
            func_0x00485670(&ppppiStack_120);
            iStack_8._0_1_ = 0x29;
            FUN_005ee340();
            iStack_8 = CONCAT31(iStack_8._1_3_,0x28);
            goto LAB_006019ba;
          }
LAB_00601769:
          pppppiVar16 = &ppppiStack_6c;
          if (0xf < uStack_5c._4_4_) {
            pppppiVar16 = (int *****)ppppiStack_6c;
          }
          iVar8 = func_0x00e5e270(pppppiVar13,pppppiVar16,iVar8,0x2000);
          if (iVar8 < 0) {
            ppppiStack_120 = (int ****)func_0x00e5e240(pppppiVar13);
            ppppiStack_10c = (int ****)0x0;
            ppppiStack_108 = (int ****)0x0;
            ppppuStack_11c = (int ****)0x0;
            iStack_118 = 0;
            iStack_114 = 0;
            iStack_110 = 0;
            func_0x0046bc40("can\'t add file %s to zip archive: %s",0x24);
            iStack_8._0_1_ = 0x30;
            func_0x004852c0(&ppppiStack_6c,&ppppiStack_120);
            iStack_8._0_1_ = 0x31;
            FUN_005ee340();
            iStack_8 = CONCAT31(iStack_8._1_3_,0x30);
            goto LAB_006019ba;
          }
          iVar8 = func_0x00e5df10(pppppiVar13,iVar8,iVar8 >> 0x1f,8,1);
          if (iVar8 == 0) {
            iStack_8 = CONCAT31(iStack_8._1_3_,0x24);
            ppppiStack_184 = (int ****)0x6017b0;
            FUN_00468340();
            goto LAB_006017b0;
          }
          ppppiStack_184 = (int ****)0x20;
          ppppiStack_10c = (int ****)0x0;
          ppppiStack_188 = (int ****)0x1142dbc;
          ppppiStack_108 = (int ****)0x0;
          ppppuStack_11c = (int ****)0x0;
          iStack_118 = 0;
          iStack_114 = 0;
          iStack_110 = 0;
          ppppiStack_18c = (int ****)0x6018b2;
          func_0x0046bc40();
          iStack_8 = CONCAT31(iStack_8._1_3_,0x32);
          FUN_005ee340();
        }
        iStack_8._0_1_ = 0x27;
        if (0xf < ppppiStack_108) {
          ppppiStack_184 = (int ****)0x6019e7;
          func_0x0046b1f0();
        }
        ppppiStack_10c = (int ****)0x0;
        ppppiStack_108 = (int ****)0xf;
        ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffffff00);
        iStack_8 = CONCAT31(iStack_8._1_3_,0x24);
        FUN_00468340();
        iStack_8 = 0xffffffff;
        if (0xf < uStack_5c._4_4_) {
          ppppiStack_184 = (int ****)0x601a2d;
          func_0x0046b1f0();
        }
        uStack_5c = 0xf00000000;
        ppppiStack_6c = (int ****)((uint)ppppiStack_6c & 0xffffff00);
        goto LAB_00601eea;
      }
LAB_006017b0:
      iStack_8 = 0xffffffff;
      if (0xf < uStack_5c._4_4_) {
        ppppiStack_184 = (int ****)uStack_5c._4_4_;
        ppppiStack_188 = ppppiStack_6c;
        ppppiStack_18c = (int ****)&ppppiStack_6c;
        func_0x0046b1f0();
      }
      ppppiStack_6c = (int ****)((uint)ppppiStack_6c & 0xffffff00);
      uStack_5c = 0xf00000000;
      ppppiStack_184 = (int ****)0x6017e9;
      func_0x00499be0();
      cVar5 = *(char *)((int)ppppiStack_30 + 0xd);
    }
    ppppiStack_184 = (int ****)0x6017fc;
    iVar8 = func_0x00e5a480();
    pppppiVar13 = (int *****)ppppiStack_144;
    if (iVar8 < 0) {
      ppppiStack_184 = (int ****)0x60180d;
      ppppiStack_120 = (int ****)func_0x00e5e240();
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0x0;
      ppppuStack_11c = (int ****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      ppppiStack_184 = (int ****)0x1142f14;
      ppppiStack_188 = (int ****)0x601846;
      func_0x0046bc40();
      iStack_8 = 0x33;
      ppppiStack_188 = (int ****)&ppppiStack_120;
      ppppiStack_18c = (int ****)0x601865;
      func_0x00485670();
      iStack_8._0_1_ = 0x34;
      FUN_005ee340();
      iStack_8 = CONCAT31(iStack_8._1_3_,0x33);
      goto LAB_006011f3;
    }
    ppppiStack_184 = ppppiStack_144;
    ppppiStack_188 = (int ****)0x601a5a;
    iVar8 = func_0x00e5e540();
    if (iVar8 < 0) {
      ppppiStack_184 = (int ****)0x601a6b;
      ppppiStack_184 = (int ****)func_0x00e5e530();
      ppppiStack_188 = (int ****)0x601a71;
      ppppiStack_120 = (int ****)func_0x00e5e030();
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0x0;
      ppppuStack_11c = (int ****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      ppppiStack_184 = (int ****)0x1142de0;
      ppppiStack_188 = (int ****)0x601aaa;
      func_0x0046bc40();
      iStack_8 = 0x35;
      ppppiStack_188 = (int ****)&ppppiStack_120;
      ppppiStack_18c = (int ****)0x601ac9;
      func_0x00485670();
      iStack_8._0_1_ = 0x36;
      FUN_005ee340();
      iStack_8 = CONCAT31(iStack_8._1_3_,0x35);
      goto LAB_006011f3;
    }
    ppppiStack_148 = ppppiStack_e8;
    ppppiStack_184 = (int ****)0x601af7;
    iVar8 = func_0x00e5d8f0();
    if (iVar8 < 0) {
      ppppiStack_184 = (int ****)0x601b08;
      ppppiStack_184 = (int ****)func_0x00e5e530();
      ppppiStack_188 = (int ****)0x601b0e;
      ppppiStack_120 = (int ****)func_0x00e5e030();
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0x0;
      ppppuStack_11c = (int ****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      ppppiStack_184 = (int ****)0x1142e78;
      ppppiStack_188 = (int ****)0x601b47;
      func_0x0046bc40();
      iStack_8 = 0x37;
      ppppiStack_188 = (int ****)&ppppiStack_120;
      ppppiStack_18c = (int ****)0x601b66;
      func_0x00485670();
      iStack_8._0_1_ = 0x38;
      FUN_005ee340();
      iStack_8 = CONCAT31(iStack_8._1_3_,0x37);
      FUN_00469ba0();
    }
    else {
      ppppiStack_184 = (int ****)0x601b98;
      ppppiStack_30 = (int ****)func_0x00e434d0();
      if ((int *****)ppppiStack_30 != (int *****)0x0) {
        uStack_ac = 0;
        ppppiStack_184 = (int ****)0x100000;
        uStack_b4 = 0;
        ppppiStack_188 = (int ****)0x601c5d;
        func_0x006077b0();
        iStack_8 = 0x3b;
        while ((int *****)ppppiStack_148 != (int *****)0x0) {
          ppppiStack_188 = (int ****)0x0;
          pppppiVar13 = (int *****)ppppiStack_148;
          if ((int *****)0x100000 < ppppiStack_148) {
            pppppiVar13 = (int *****)0x100000;
          }
          ppppiStack_18c = (int ****)pppppiVar13;
          uVar18 = func_0x00e5ddc0();
          if (((int)((ulonglong)uVar18 >> 0x20) == 0) && ((int *****)uVar18 < pppppiVar13)) {
            ppppiStack_188 = ppppiStack_144;
            ppppiStack_18c = (int ****)0x601f12;
            ppppiStack_18c = (int ****)func_0x00e5e530();
            ppppiStack_120 = (int ****)func_0x00e5e030();
            ppppiStack_188 = (int ****)0x1142e40;
            ppppiStack_18c = (int ****)0x601f31;
            func_0x00469d30();
            iStack_8._0_1_ = 0x3c;
            ppppiStack_18c = (int ****)&ppppiStack_120;
            ppppiStack_188 = (int ****)func_0x00485670();
            iStack_8._0_1_ = 0x3d;
            ppppiStack_18c = (int ****)&DAT_00000004;
            FUN_005ee340();
            iStack_8._0_1_ = 0x3c;
            ppppiStack_188 = (int ****)0x601f70;
            FUN_00469ba0();
            iStack_8 = CONCAT31(iStack_8._1_3_,0x3b);
            ppppiStack_188 = (int ****)0x601f7f;
            FUN_00469ba0();
            goto LAB_00601ed8;
          }
          ppppiStack_188 = (int ****)0x0;
          ppppiStack_18c = (int ****)pppppiVar13;
          func_0x00e43d00();
          ppppiStack_148 = (int ****)((int)ppppiStack_148 - (int)pppppiVar13);
          pppppiVar13 = (int *****)ppppiStack_144;
        }
        ppppiStack_18c = (int ****)0x601cdd;
        ppppiStack_188 = ppppiStack_30;
        func_0x00e42340();
        ppppiStack_18c = (int ****)pppppiVar13;
        func_0x00e59900();
        func_0x00e59880();
        if (param_3 != '\0') {
          ppppiStack_188 = (int ****)0x601d01;
          func_0x006066d0();
          ppppiStack_188 = (int ****)0x1142b28;
          ppppiStack_18c = (int ****)0x601d0b;
          pppppiVar13 = (int *****)func_0x00e432f0();
          ppppiStack_3c = (int ****)pppppiVar13;
          if (pppppiVar13 == (int *****)0x0) {
            ppppiStack_188 = (int ****)0x1142e60;
            ppppiStack_18c = (int ****)0x601d27;
            func_0x00469d30();
            iStack_8._0_1_ = 0x3e;
            ppppiStack_18c = (int ****)0x601d3c;
            ppppiStack_188 = (int ****)func_0x00608ad0();
            iStack_8._0_1_ = 0x3f;
            ppppiStack_18c = (int ****)0x4;
            FUN_005ee340();
            iStack_8._0_1_ = 0x3e;
            ppppiStack_188 = (int ****)0x601d5c;
            FUN_00469ba0();
            iStack_8 = CONCAT31(iStack_8._1_3_,0x3b);
            ppppiStack_188 = (int ****)0x601d6b;
            FUN_00469ba0();
          }
          ppppiStack_18c = (int ****)0x601d71;
          ppppiStack_188 = (int ****)pppppiVar13;
          ppppiStack_120 = (int ****)func_0x00e42920();
          if ((int)ppppiStack_120 < 0x400) {
            ppppiStack_188 = (int ****)0x11430bc;
            ppppiStack_18c = (int ****)0x601d91;
            func_0x00469d30();
            iStack_8._0_1_ = 0x40;
            ppppiStack_18c = (int ****)0x601da6;
            ppppiStack_188 = (int ****)func_0x00608ad0();
            iStack_8._0_1_ = 0x41;
            ppppiStack_18c = (int ****)0x4;
            FUN_005ee340();
            iStack_8._0_1_ = 0x40;
            ppppiStack_188 = (int ****)0x601dc6;
            FUN_00469ba0();
            iStack_8 = CONCAT31(iStack_8._1_3_,0x3b);
            ppppiStack_188 = (int ****)0x601dd5;
            FUN_00469ba0();
          }
          uStack_38 = 0;
          iStack_8._0_1_ = 0x42;
          ppppiStack_188 = (int ****)0x18;
          ppppiStack_18c = (int ****)0x601de8;
          ppppiStack_30 = (int ****)func_0x008ab47d();
          iStack_8._0_1_ = 0x43;
          ((int *****)ppppiStack_30)[0] = (int ****)0x0;
          ((int *****)ppppiStack_30)[1] = (int ****)0x0;
          pppppiVar13 = (int *****)ppppiStack_30 + 3;
          ((int *****)ppppiStack_30)[2] = (int ****)0x0;
          ((int *****)ppppiStack_30)[1] = (int ****)0x1;
          ((int *****)ppppiStack_30)[2] = (int ****)0x1;
          *ppppiStack_30 = (int ***)std::_Ref_count_obj2<>::vftable;
          ppppiStack_188 = (int ****)acStack_101;
          ppppiStack_18c = ppppiStack_120;
          func_0x00588db0();
          ppppiVar3 = ppppiStack_3c;
          iStack_8._0_1_ = 0x42;
          uStack_124 = uVar17 | 0x1000;
          uStack_38 = CONCAT44(ppppiStack_30,pppppiVar13);
          func_0x00e43530(ppppiStack_3c);
          func_0x00e42340(ppppiVar3);
          cVar5 = func_0x00606640();
          if (cVar5 == '\0') {
            func_0x00469d30();
            iStack_8._0_1_ = 0x44;
            FUN_005ee340();
            iStack_8._0_1_ = 0x42;
            FUN_00469ba0();
          }
          uStack_124 = uVar17 & 0xffffefff;
          iStack_8 = CONCAT31(iStack_8._1_3_,0x3b);
          func_0x00463fb0();
        }
LAB_00601ed8:
        iStack_8 = 0xffffffff;
        ppppiStack_188 = (int ****)0x601eea;
        func_0x00499b80();
        goto LAB_00601eea;
      }
      func_0x00e42b20();
      ppppiStack_184 = (int ****)0x601bb1;
      ppppiStack_120 = (int ****)func_0x00e429d0();
      ppppiStack_10c = (int ****)0x0;
      ppppiStack_108 = (int ****)0x0;
      ppppuStack_11c = (int ****)0x0;
      iStack_118 = 0;
      iStack_114 = 0;
      iStack_110 = 0;
      ppppiStack_184 = (int ****)0x1142e90;
      ppppiStack_188 = (int ****)0x601bea;
      func_0x0046bc40();
      iStack_8 = 0x39;
      ppppiStack_188 = (int ****)&ppppiStack_120;
      ppppiStack_18c = (int ****)0x601c09;
      func_0x00485670();
      iStack_8._0_1_ = 0x3a;
      FUN_005ee340();
      iStack_8 = CONCAT31(iStack_8._1_3_,0x39);
      FUN_00469ba0();
    }
  }
  iStack_8 = 0xffffffff;
  if (&DAT_0000000f < ppppiStack_108) {
    ppppiStack_184 = (int ****)0x601254;
    func_0x0046b1f0();
  }
  ppppiStack_10c = (int ****)0x0;
  ppppiStack_108 = (int ****)0xf;
  ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffffff00);
LAB_00601eea:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
LAB_006009d6:
  ppppiStack_14c = (int ****)uStack_90._4_4_;
  pppppiVar13 = (int *****)uStack_90;
  if ((int *****)uStack_90 != uStack_90._4_4_) {
    do {
      iStack_8._0_1_ = 0x12;
      ppppcStack_2c = (char ****)0x0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppppiStack_1c = (int ****)0x0;
      ppppiStack_18 = (int ****)0x0;
      func_0x0046bc40();
      ppppiStack_120 = apppiStack_164;
      uStack_124 = 4;
      ppppiStack_184 = (int ****)&ppppcStack_2c;
      if (0xf < ppppiStack_18) {
        ppppiStack_184 = (int ****)ppppcStack_2c;
      }
      iStack_8 = CONCAT31(iStack_8._1_3_,0x14);
      ppppiStack_188 = (int ****)0x600a5c;
      func_0x00e7349c();
      ppppiStack_188 = (int ****)0x600a69;
      func_0x00585d40();
      uStack_124 = 4;
      iStack_8._1_3_ = 0;
      iStack_8._0_1_ = 0x15;
      acStack_101[0] = func_0x005f8670();
      iStack_8 = CONCAT31(iStack_8._1_3_,0x12);
      if (7 < uStack_150) {
        ppppiStack_184 = (int ****)apppiStack_164[0];
        ppppiStack_188 = apppiStack_164;
        ppppiStack_18c = (int ****)0x600ad2;
        func_0x005895e0();
      }
      uStack_154 = 0;
      uStack_150 = 7;
      apppiStack_164[0] = (int ***)((uint)apppiStack_164[0] & 0xffff0000);
      if (acStack_101[0] != '\0') {
        pppppcVar6 = &ppppcStack_2c;
        if (0xf < ppppiStack_18) {
          pppppcVar6 = (char *****)ppppcStack_2c;
        }
        ppppiStack_184 = (int ****)0x600b0e;
        remove((char *)pppppcVar6);
      }
      ppppiStack_30 = (int ****)appppiStack_140;
      ppppiStack_184 = (int ****)pppppiVar13;
      if ((int ****)0xf < pppppiVar13[5]) {
        ppppiStack_184 = *pppppiVar13;
      }
      iStack_8 = CONCAT31((int3)((uint)iStack_8 >> 8),0x18);
      ppppiStack_188 = (int ****)0x600b36;
      func_0x00e7349c();
      ppppiStack_188 = (int ****)0x600b43;
      func_0x00585d40();
      uStack_124 = 4;
      iStack_8._1_3_ = 0;
      iStack_8._0_1_ = 0x19;
      acStack_101[0] = func_0x005f8670();
      iStack_8._0_1_ = 0x12;
      if (&DAT_00000007 < ppppiStack_12c) {
        ppppiStack_184 = (int ****)0x600bac;
        func_0x005895e0();
      }
      uStack_130 = 0;
      ppppiStack_12c = (int ****)&DAT_00000007;
      appppiStack_140[0] = (int ****)((uint)appppiStack_140[0] & 0xffff0000);
      if (acStack_101[0] != '\0') {
        pppppcVar6 = &ppppcStack_2c;
        if (0xf < ppppiStack_18) {
          pppppcVar6 = (char *****)ppppcStack_2c;
        }
        pppppiVar16 = pppppiVar13;
        if ((int ****)0xf < pppppiVar13[5]) {
          pppppiVar16 = (int *****)*pppppiVar13;
        }
        iVar8 = rename((char *)pppppiVar16,(char *)pppppcVar6);
        if (iVar8 == 0) {
          pppppcVar6 = &ppppcStack_2c;
          if (0xf < ppppiStack_18) {
            pppppcVar6 = (char *****)ppppcStack_2c;
          }
          DVar12 = GetFileAttributesA((LPCSTR)pppppcVar6);
          pppppcVar6 = &ppppcStack_2c;
          if (0xf < ppppiStack_18) {
            pppppcVar6 = (char *****)ppppcStack_2c;
          }
          SetFileAttributesA((LPCSTR)pppppcVar6,DVar12 & 0xfffffffd);
        }
        else {
          uStack_44 = 0;
          uStack_40 = 0;
          ppppuStack_54 = (undefined4 *****)0x0;
          ppuStack_50 = (undefined4 ***)0x0;
          ppuStack_4c = (undefined4 ***)0x0;
          ppuStack_48 = (undefined4 ***)0x0;
          func_0x0046bc40();
          iStack_8._0_1_ = 0x1c;
          ppppiStack_188 = (int ****)&ppppuStack_54;
          if (0xf < uStack_40) {
            ppppiStack_188 = ppppuStack_54;
          }
          ppppiStack_18c = (int ****)0x600c44;
          ppppiStack_184 = (int ****)pppppiVar13;
          iVar8 = func_0x0057c200();
          ppppiStack_184 = (int ****)(iVar8 + 1);
          if (SCARRY4(iVar8,1)) {
            ppppiStack_184 = (int ****)0xffffffff;
          }
          ppppiStack_188 = (int ****)0x600c60;
          func_0x00469c80();
          uStack_124 = 0x24;
          ppppiStack_188 = (int ****)&ppppcStack_2c;
          ppppiStack_18c = (int ****)pppppiVar13;
          ppppiStack_18c = (int ****)func_0x0057c200();
          ppppiStack_188 = (int ****)0x0;
          func_0x004698c0();
          FUN_005ee340();
          uStack_124 = 4;
          iStack_8._0_1_ = 0x1b;
          if (0xf < ppppiStack_108) {
            ppppiStack_184 = (int ****)0x600ce8;
            func_0x0046b1f0();
          }
          ppppiStack_10c = (int ****)0x0;
          ppppiStack_108 = (int ****)0xf;
          ppppuStack_11c = (undefined4 ****)((uint)ppppuStack_11c & 0xffffff00);
          iStack_8._0_1_ = 0x12;
          if (0xf < uStack_40) {
            ppppiStack_184 = (int ****)0x600d1f;
            func_0x0046b1f0();
          }
          uStack_44 = 0;
          uStack_40 = 0xf;
          ppppuStack_54 = (undefined4 ****)((uint)ppppuStack_54 & 0xffffff00);
        }
      }
      uStack_124 = 0;
      iStack_8._0_1_ = 1;
      if (0xf < ppppiStack_18) {
        ppppiStack_184 = (int ****)0x600ee2;
        func_0x0046b1f0();
      }
      pppppiVar13 = pppppiVar13 + 6;
      ppppiStack_1c = (int ****)0x0;
      ppppiStack_18 = (int ****)0xf;
      ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
    } while (pppppiVar13 != (int *****)ppppiStack_14c);
  }
  if (cStack_125 != '\0') {
    FUN_005ee340();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_98._4_4_) {
    ppppiStack_184 = (int ****)0x600f44;
    func_0x0046b1f0();
  }
  uStack_98 = 0xf00000000;
  pppuStack_a8 = (undefined4 ***)((uint)pppuStack_a8 & 0xffffff00);
  iStack_8 = 0xffffffff;
  if ((int *****)uStack_90 != (int *****)0x0) {
    ppppiStack_184 = (int ****)0x600f8a;
    func_0x004e7c10();
    func_0x004c7ff0();
    uStack_90 = 0;
    uStack_88 = 0;
  }
  goto LAB_00601eea;
}



// WARNING: Removing unreachable block (ram,0x00602793)
// WARNING: Removing unreachable block (ram,0x00602880)
// WARNING: Type propagation algorithm not settling

void __thiscall
FUN_00601f90(int param_1,char *param_2,int param_3,int param_4,int param_5,undefined8 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  char *******pppppppcVar9;
  char *******_OldFilename;
  undefined1 *puVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  __time64_t _Var12;
  uint uStack_1c8;
  uint uStack_1b0;
  uint uStack_198;
  uint uStack_180;
  uint uStack_168;
  uint uStack_150;
  int aiStack_148 [45];
  uint uStack_94;
  undefined4 uStack_84;
  uint uStack_80;
  undefined8 uStack_7c;
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  char *******apppppppcStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  char *******pppppppcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 auStack_17 [3];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed508a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_148[0] = 0;
  uStack_8 = 0;
  if ((uint)param_6 < 3) {
    uStack_34 = 0;
    uStack_30 = 0;
    pppppppcStack_44 = (char *******)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    func_0x0046bc40();
    uStack_8._0_1_ = 1;
    FUN_005ee340();
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    if (0xf < uStack_30) {
      func_0x0046b1f0();
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    pppppppcStack_44 = (char *******)((uint)pppppppcStack_44 & 0xffffff00);
  }
  pcVar6 = (char *)&param_2;
  if (0xf < param_6._4_4_) {
    pcVar6 = param_2;
  }
  if (*pcVar6 == '/') {
    piVar7 = (int *)func_0x00482f60();
    uStack_8._0_1_ = 2;
    if (&param_2 != (char **)piVar7) {
      if (0xf < param_6._4_4_) {
        if ((0xfff < param_6._4_4_ + 1) && ((char *)0x1f < param_2 + (-4 - *(int *)(param_2 + -4))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        func_0x008ab812();
      }
      param_2 = (char *)*piVar7;
      param_3 = piVar7[1];
      param_4 = piVar7[2];
      param_5 = piVar7[3];
      param_6 = *(undefined8 *)(piVar7 + 4);
      piVar7[4] = 0;
      piVar7[5] = 0xf;
      *(undefined1 *)piVar7 = 0;
    }
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    if (0xf < uStack_60) {
      func_0x0046b1f0();
    }
    uStack_64 = 0;
    uStack_60 = 0xf;
    auStack_74[0] = auStack_74[0] & 0xffffff00;
  }
  uStack_7c = 0;
  func_0x00469da0();
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x005f9270();
  uStack_8._0_1_ = 4;
  if ((int)uStack_7c == 0) {
    uStack_34 = 0;
    uStack_30 = 0;
    pppppppcStack_44 = (char *******)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    func_0x0046bc40();
    uStack_8._0_1_ = 5;
    func_0x00484eb0();
    uStack_8._0_1_ = 6;
    FUN_005ee340();
    uStack_8._0_1_ = 5;
    if (0xf < uStack_60) {
      func_0x0046b1f0();
    }
    uStack_64 = 0;
    uStack_60 = 0xf;
    auStack_74[0] = auStack_74[0] & 0xffffff00;
    uStack_8._0_1_ = 4;
    if (0xf < uStack_30) {
      func_0x0046b1f0();
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    pppppppcStack_44 = (char *******)((uint)pppppppcStack_44 & 0xffffff00);
  }
  func_0x00589010();
  uStack_8._0_1_ = 8;
  uVar4 = (undefined1)uStack_8;
  uStack_8._0_1_ = 8;
  if ((*(char *)(param_1 + 0x58) == '\0') || (*(char *)(param_1 + 0x31) != '\0')) {
    uStack_8._0_1_ = uVar4;
    func_0x005f52b0();
    uStack_8._0_1_ = 0x10;
    func_0x00585e70();
    uStack_8._0_1_ = 0x11;
    _Var12 = _time64((__time64_t *)0x0);
    uStack_8 = CONCAT31(uStack_8._1_3_,0x13);
    if (((int)((ulonglong)_Var12 >> 0x20) != 0 && -1 < _Var12) || (-1 < _Var12)) {
      puVar10 = (undefined1 *)func_0x005d5a70();
    }
    else {
      iVar8 = func_0x005d5a70();
      *(undefined1 *)(iVar8 + -1) = 0x2d;
      puVar10 = (undefined1 *)(iVar8 + -1);
    }
    uStack_34 = 0;
    uStack_30 = 0;
    pppppppcStack_44 = (char *******)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    if (puVar10 == auStack_17) {
      uStack_34 = 0;
      uStack_30 = 0xf;
      pppppppcStack_44 = (char *******)0x0;
    }
    else {
      func_0x0046bc40();
    }
    uStack_8 = 0x12;
    aiStack_148[0] = 1;
    func_0x005f51c0();
    uStack_8._0_1_ = 0x14;
    func_0x00585e70();
    uStack_8._0_1_ = 0x16;
    piVar7 = (int *)func_0x0046a880();
    iVar8 = *piVar7;
    uVar2 = *(undefined8 *)(piVar7 + 4);
    piVar7[4] = 0;
    piVar7[5] = 0xf;
    *(undefined1 *)piVar7 = 0;
    aiStack_148[0] = 5;
    uStack_8._0_1_ = 0x17;
    func_0x0046c7c0();
    aiStack_148[0] = 0xd;
    func_0x0046b660();
    aiStack_148[0] = 5;
    uStack_8._0_1_ = 0x19;
    if (0xf < uStack_180) {
      func_0x0046b1f0();
    }
    aiStack_148[0] = 1;
    uStack_8._0_1_ = 0x1a;
    uStack_168 = (uint)((ulonglong)uVar2 >> 0x20);
    if (0xf < uStack_168) {
      if ((0xfff < uStack_168 + 1) && (0x1f < (iVar8 - *(int *)(iVar8 + -4)) - 4U)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      func_0x008ab812();
    }
    uStack_8._0_1_ = 0x1b;
    if (0xf < uStack_198) {
      func_0x0046b1f0();
    }
    uStack_8._0_1_ = 0x1c;
    if (7 < uStack_1b0) {
      func_0x005895e0();
    }
    aiStack_148[0] = 0;
    uStack_8._0_1_ = 0x1e;
    if (0xf < uStack_30) {
      func_0x0046b1f0();
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    pppppppcStack_44 = (char *******)((uint)pppppppcStack_44 & 0xffffff00);
    uStack_8._0_1_ = 0x1f;
    if (0xf < uStack_1c8) {
      func_0x0046b1f0();
    }
    uStack_8._0_1_ = 0x20;
    if (7 < uStack_150) {
      func_0x005895e0();
    }
    pppppppcStack_44 = (char *******)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    func_0x0046bc40();
    uStack_8._0_1_ = 0x22;
    func_0x00484eb0();
    uStack_8._0_1_ = 0x23;
    FUN_005ee340();
    uStack_8._0_1_ = 0x20;
    if (0xf < uStack_30) {
      func_0x0046b1f0();
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    pppppppcStack_44 = (char *******)((uint)pppppppcStack_44 & 0xffffff00);
    uVar11 = func_0x00e434d0();
    if (uVar11 == 0) {
      func_0x00e42b20();
      func_0x00e429d0();
      pppppppcStack_44 = (char *******)0x0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = uVar11;
      uStack_30 = uVar11;
      func_0x0046bc40();
      uStack_8._0_1_ = 0x24;
      func_0x004852c0();
      uStack_8._0_1_ = 0x25;
      FUN_005ee340();
      uStack_8._0_1_ = 0x20;
      if (0xf < uStack_30) {
        func_0x0046b1f0();
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      pppppppcStack_44 = (char *******)((uint)pppppppcStack_44 & 0xffffff00);
      uStack_8._0_1_ = 8;
      uVar4 = (undefined1)uStack_8;
      uStack_8._0_1_ = 8;
      if (0xf < uStack_48) {
        if ((0xfff < uStack_48 + 1) &&
           ((char *)0x1f <
            (char *)((int)apppppppcStack_5c[0] + (-4 - (int)apppppppcStack_5c[0][-1]))))
        goto LAB_0060299e;
        func_0x008ab812();
      }
      uStack_4c = 0;
      uStack_48 = 0xf;
      apppppppcStack_5c[0] = (char *******)((uint)apppppppcStack_5c[0] & 0xffffff00);
      uStack_8._0_1_ = 4;
      if (7 < uStack_80) {
        func_0x005895e0();
      }
      uStack_84 = 0;
      uStack_80 = 7;
      uStack_94 = uStack_94 & 0xffff0000;
      uStack_8 = (uint)uStack_8._1_3_ << 8;
      FUN_00468340();
      uStack_8._0_1_ = 0xff;
      uStack_8._1_3_ = 0xffffff;
      if (0xf < param_6._4_4_) {
        if ((0xfff < param_6._4_4_ + 1) &&
           (uVar4 = (undefined1)uStack_8, (char *)0x1f < param_2 + (-4 - *(int *)(param_2 + -4)))) {
LAB_0060299e:
          uStack_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        func_0x008ab812();
      }
      goto LAB_00602b07;
    }
    func_0x00e43d00();
    func_0x00e42340();
    func_0x00e42c90();
    func_0x00608900();
    uStack_8._0_1_ = 0x27;
    func_0x00589010(auStack_74);
    uStack_8._0_1_ = 0x27;
    func_0x00603a90();
    uStack_8 = CONCAT31(uStack_8._1_3_,0x20);
    if (7 < uStack_60) {
      func_0x005895e0();
    }
    uStack_64 = 0;
    uStack_60 = 7;
    auStack_74[0] = auStack_74[0] & 0xffff0000;
  }
  else {
    func_0x005db430();
    uStack_8._0_1_ = 9;
    func_0x00585e70();
    uStack_8._0_1_ = 0xb;
    if (7 < uStack_60) {
      func_0x005895e0();
    }
    uStack_64 = 0;
    auStack_74[0] = auStack_74[0] & 0xffff0000;
    uStack_60 = 7;
    func_0x0057ff40();
    uStack_8._0_1_ = 0xd;
    memset(aiStack_148 + 1,0,0xb0);
    func_0x005a7120();
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    *(undefined ***)((int)aiStack_148 + *(int *)(aiStack_148[1] + 4) + 4U) =
         std::basic_ofstream<>::vftable;
    *(int *)((int)aiStack_148 + *(int *)(aiStack_148[1] + 4)) = *(int *)(aiStack_148[1] + 4) + -0x68
    ;
    uStack_8 = CONCAT31(uStack_8._1_3_,0xf);
    func_0x00607620();
    iVar8 = func_0x005a8550();
    if (iVar8 == 0) {
      func_0x00464710();
    }
    cVar5 = func_0x005f8670();
    if (cVar5 != '\0') {
      pppppppcVar9 = (char *******)apppppppcStack_5c;
      if (0xf < uStack_48) {
        pppppppcVar9 = apppppppcStack_5c[0];
      }
      rename((char *)pppppppcVar9,".tmp");
      SetFileAttributesA(".tmp",2);
      pppppppcVar9 = (char *******)apppppppcStack_5c;
      if (0xf < uStack_48) {
        pppppppcVar9 = apppppppcStack_5c[0];
      }
      _OldFilename = (char *******)&pppppppcStack_44;
      if (0xf < uStack_30) {
        _OldFilename = pppppppcStack_44;
      }
      rename((char *)_OldFilename,(char *)pppppppcVar9);
    }
    uStack_8._0_1_ = 0xd;
    func_0x0058f620();
    uStack_8 = CONCAT31(uStack_8._1_3_,0xb);
    if (0xf < uStack_30) {
      func_0x0046b1f0();
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    pppppppcStack_44 = (char *******)((uint)pppppppcStack_44 & 0xffffff00);
  }
  uStack_8._0_1_ = 8;
  if (0xf < uStack_48) {
    func_0x0046b1f0();
  }
  apppppppcStack_5c[0] = (char *******)((uint)apppppppcStack_5c[0] & 0xffffff00);
  uStack_48 = 0xf;
  uStack_4c = 0;
  uStack_8._0_1_ = 4;
  if (7 < uStack_80) {
    func_0x005895e0();
  }
  uStack_84 = 0;
  uStack_80 = 7;
  uStack_94 = uStack_94 & 0xffff0000;
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  piVar7 = uStack_7c._4_4_;
  if (uStack_7c._4_4_ != (int *)0x0) {
    LOCK();
    iVar8 = uStack_7c._4_4_[1] + -1;
    uStack_7c._4_4_[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      pcVar3 = *(code **)*uStack_7c._4_4_;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar7 + 2;
      iVar8 = *piVar1 + -1;
      *piVar1 = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar3 = *(code **)(*piVar7 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  if (0xf < param_6._4_4_) {
    func_0x0046b1f0();
  }
LAB_00602b07:
  param_6 = 0xf00000000;
  param_2 = (char *)((uint)param_2 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00602b40(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  char *****pppppcVar3;
  int *piVar4;
  char *****pppppcVar5;
  int iVar6;
  undefined4 *****pppppuVar7;
  undefined4 uVar8;
  char ****ppppcVar9;
  char *****unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined8 uVar10;
  uint auStack_b8 [4];
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 *puStack_a0;
  char ****ppppcStack_9c;
  int iStack_98;
  undefined1 auStack_94 [24];
  undefined4 uStack_7c;
  undefined4 ****appppuStack_54 [4];
  char ****ppppcStack_44;
  uint uStack_40;
  undefined1 auStack_3c [12];
  int iStack_30;
  char ****ppppcStack_2c;
  char ***pppcStack_28;
  char ***pppcStack_24;
  char ***pppcStack_20;
  char ***pppcStack_1c;
  char ***pppcStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed51b2;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_a0 = param_1;
  if (param_2[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0);
    uStack_8 = 0;
LAB_00602bc4:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  FUN_0095c880(auStack_3c,uStack_14);
  pppppcVar3 = (char *****)func_0x00e5d6c0(0,0,0,0,auStack_3c);
  ppppcStack_9c = (char ****)pppppcVar3;
  if (pppppcVar3 == (char *****)0x0) {
LAB_00602f05:
    ppppcStack_9c = (char ****)func_0x00e5e030(auStack_3c);
    func_0x00469d30("can\'t create source: %s");
    uStack_8 = 1;
    func_0x00485670(&ppppcStack_9c);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    func_0x0047d860();
LAB_00602f54:
    ppppcStack_9c = (char ****)func_0x00e5e030();
    func_0x00469d30("can\'t open zip from source: %s");
    uStack_8 = 3;
    func_0x00485670(&ppppcStack_9c);
    uStack_8 = CONCAT31(uStack_8._1_3_,4);
    func_0x0047d860();
LAB_00602f9f:
    iStack_98 = func_0x00e5e240(unaff_EDI);
    func_0x00469d30("can\'t close zip archive: %s");
    uStack_8 = 0xb;
    func_0x00485670(&iStack_98);
    uStack_8 = CONCAT31(uStack_8._1_3_,0xc);
    func_0x0047d860();
LAB_00602feb:
    iStack_98 = func_0x00e5e240(unaff_EDI);
    func_0x00469d30("can\'t add file %s to zip archive: %s");
    uStack_8._0_1_ = 9;
    func_0x004852c0(&ppppcStack_2c,&iStack_98);
    uStack_8 = CONCAT31(uStack_8._1_3_,10);
    func_0x0047d860();
LAB_00603038:
    iStack_98 = func_0x00e5e240(unaff_EDI);
    func_0x00469d30("can\'t create source buffer: %s");
    uStack_8 = 5;
    func_0x00485670(&iStack_98);
    uStack_8 = CONCAT31(uStack_8._1_3_,6);
    func_0x0047d860();
  }
  else {
    func_0x00e5dd30(pppppcVar3);
    unaff_EDI = (char *****)func_0x00e5c390(pppppcVar3,8,auStack_3c);
    if (unaff_EDI == (char *****)0x0) goto LAB_00602f54;
    func_0x00e5db20(auStack_3c);
    iStack_30 = *(int *)*param_2;
    cVar1 = *(char *)(iStack_30 + 0xd);
    while (cVar1 == '\0') {
      pppppcVar3 = (char *****)(iStack_30 + 0x10);
      if ((*(int *)(iStack_30 + 0x20) != 0) && (*(int *)(iStack_30 + 0x38) != 0)) {
        piVar4 = (int *)(iStack_30 + 0x28);
        if (0xf < *(uint *)(iStack_30 + 0x3c)) {
          piVar4 = (int *)*piVar4;
        }
        iStack_98 = func_0x00e5d640(unaff_EDI,piVar4,*(int *)(iStack_30 + 0x38),0,0);
        if (iStack_98 == 0) goto LAB_00603038;
        func_0x00469da0(pppppcVar3);
        uStack_8 = 7;
        if ((char ****)0x1 < pppcStack_1c) {
          pppppcVar5 = &ppppcStack_2c;
          if ((char ****)0xf < pppcStack_18) {
            pppppcVar5 = (char *****)ppppcStack_2c;
          }
          if (*(char *)pppppcVar5 == '/') {
            pppppcVar3 = (char *****)func_0x00482f60(auStack_b8,1,0xffffffff);
            uStack_8._0_1_ = 8;
            if (&ppppcStack_2c != pppppcVar3) {
              if ((char ****)0xf < pppcStack_18) {
                ppppcVar9 = (char ****)((int)pppcStack_18 + 1);
                pppppcVar5 = (char *****)ppppcStack_2c;
                if ((char ****)0xfff < ppppcVar9) {
                  pppppcVar5 = (char *****)ppppcStack_2c[-1];
                  ppppcVar9 = (char ****)(pppcStack_18 + 9);
                  if ((char *)0x1f < (char *)((int)ppppcStack_2c + (-4 - (int)pppppcVar5))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                func_0x008ab812(pppppcVar5,ppppcVar9);
              }
              ppppcStack_2c = *pppppcVar3;
              pppcStack_28 = (char ***)pppppcVar3[1];
              pppcStack_24 = (char ***)pppppcVar3[2];
              pppcStack_20 = (char ***)pppppcVar3[3];
              pppcStack_1c = (char ***)pppppcVar3[4];
              pppcStack_18 = (char ***)pppppcVar3[5];
              pppppcVar3[4] = (char ****)0x0;
              pppppcVar3[5] = (char ****)0xf;
              *(undefined1 *)pppppcVar3 = 0;
            }
            uStack_8 = CONCAT31(uStack_8._1_3_,7);
            if (0xf < uStack_a4) {
              func_0x0046b1f0(auStack_b8,auStack_b8[0],uStack_a4);
            }
            uStack_a8 = 0;
            uStack_a4 = 0xf;
            auStack_b8[0] = auStack_b8[0] & 0xffffff00;
          }
        }
        pppppcVar5 = &ppppcStack_2c;
        if ((char ****)0xf < pppcStack_18) {
          pppppcVar5 = (char *****)ppppcStack_2c;
        }
        iVar6 = func_0x00e5e270(unaff_EDI,pppppcVar5,iStack_98,0x2000);
        if (iVar6 < 0) goto LAB_00602feb;
        uStack_8 = uStack_8 & 0xffffff00;
        if ((char ****)0xf < pppcStack_18) {
          func_0x0046b1f0(&ppppcStack_2c,ppppcStack_2c,pppcStack_18);
        }
        pppcStack_1c = (char ***)0x0;
        pppcStack_18 = (char ***)0xf;
        ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
      }
      func_0x00499be0();
      pppppcVar3 = (char *****)ppppcStack_9c;
      cVar1 = *(char *)(iStack_30 + 0xd);
    }
    iVar6 = func_0x00e5a480(unaff_EDI);
    if (iVar6 < 0) goto LAB_00602f9f;
    iVar6 = func_0x00e5e540(pppppcVar3,auStack_94);
    if (-1 < iVar6) {
      iVar6 = func_0x00e5d8f0(pppppcVar3);
      if (iVar6 < 0) goto LAB_006030d5;
      func_0x00469c80(uStack_7c,0);
      unaff_EDI = (char *****)ppppcStack_9c;
      uStack_8 = 0x11;
      pppppuVar7 = appppuStack_54;
      if (0xf < uStack_40) {
        pppppuVar7 = (undefined4 *****)appppuStack_54[0];
      }
      uVar10 = func_0x00e5ddc0(ppppcStack_9c,pppppuVar7,ppppcStack_44,0);
      if (((char *****)uVar10 == (char *****)ppppcStack_44) &&
         ((int)((ulonglong)uVar10 >> 0x20) == 0)) {
        func_0x00e59900(unaff_EDI);
        func_0x00e59880(unaff_EDI);
        FUN_00469c30(appppuStack_54);
        uStack_8 = uStack_8 & 0xffffff00;
        FUN_00469ba0();
        goto LAB_00602bc4;
      }
      uVar8 = func_0x00e5e530(unaff_EDI);
      puStack_a0 = (undefined4 *)func_0x00e5e030(uVar8);
      func_0x00469d30("can\'t read data from source: %s");
      uStack_8._0_1_ = 0x12;
      func_0x00485670(&puStack_a0);
      uStack_8 = CONCAT31(uStack_8._1_3_,0x13);
      func_0x0047d860();
      pppppcVar3 = (char *****)ppppcStack_44;
      goto LAB_00602f05;
    }
  }
  uVar8 = func_0x00e5e530();
  iStack_98 = func_0x00e5e030(uVar8);
  func_0x00469d30("can\'t stat source: %s");
  uStack_8 = 0xd;
  func_0x00485670(&iStack_98);
  uStack_8 = CONCAT31(uStack_8._1_3_,0xe);
  func_0x0047d860();
LAB_006030d5:
  uVar8 = func_0x00e5e530(pppppcVar3);
  iStack_98 = func_0x00e5e030(uVar8);
  func_0x00469d30("can\'t open source: %s");
  uStack_8 = 0xf;
  func_0x00485670(&iStack_98);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x10);
  func_0x0047d860();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// WARNING: Removing unreachable block (ram,0x0060331a)

void FUN_00603130(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  char *****pppppcVar11;
  undefined4 *****pppppuVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  char *****pppppcVar16;
  int *unaff_ESI;
  int *piVar17;
  int *unaff_FS_OFFSET;
  bool bVar18;
  longlong lVar19;
  uint auStack_140 [28];
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  char ****ppppcStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  int *piStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  uint auStack_90 [2];
  char *pcStack_88;
  int iStack_78;
  int iStack_74;
  undefined4 ****appppuStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [12];
  char ****ppppcStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed52fc;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_94 = param_1;
  uStack_a0 = 0;
  iStack_8 = 1;
  param_1[0] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar7 = func_0x008ab47d(0x40,uStack_14);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  *param_1 = iVar7;
  iStack_8._0_1_ = 1;
  uStack_a0 = 1;
  if ((uint)param_6 < 0x40) {
    unaff_ESI = (int *)func_0x00611cf0(&ppppcStack_c0,&param_2);
    iStack_8._0_1_ = 3;
    if (&param_2 != (undefined4 **)unaff_ESI) {
      if (0xf < param_6._4_4_) {
        uVar13 = param_6._4_4_ + 1;
        puVar8 = param_2;
        if (0xfff < uVar13) {
          puVar8 = (undefined4 *)param_2[-1];
          uVar13 = param_6._4_4_ + 0x24;
          uVar6 = (undefined1)iStack_8;
          if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar8))) {
LAB_0060320d:
            iStack_8._0_1_ = uVar6;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(puVar8,uVar13);
      }
      param_2 = (undefined4 *)*unaff_ESI;
      param_3 = unaff_ESI[1];
      param_4 = unaff_ESI[2];
      param_5 = unaff_ESI[3];
      param_6 = *(undefined8 *)(unaff_ESI + 4);
      unaff_ESI[4] = 0;
      unaff_ESI[5] = 0xf;
      *(undefined1 *)unaff_ESI = 0;
    }
    iStack_8._0_1_ = 1;
    if (0xf < uStack_b0._4_4_) {
      func_0x0046b1f0(&ppppcStack_c0,ppppcStack_c0,uStack_b0._4_4_);
    }
    uStack_b0 = 0xf00000000;
    ppppcStack_c0 = (char ****)((uint)ppppcStack_c0 & 0xffffff00);
  }
  FUN_0095c880(auStack_38);
  func_0x00e5da80(auStack_90);
  puVar8 = &param_2;
  if (0xf < param_6._4_4_) {
    puVar8 = param_2;
  }
  iVar7 = func_0x00e5d6c0(puVar8,(uint)param_6,0,0,auStack_38);
  if (iVar7 == 0) {
    piStack_94 = (int *)func_0x00e5e030(auStack_38);
    func_0x00469d30("unpackArchive: can\'t create source: %s");
    iStack_8._0_1_ = 4;
    func_0x00485670(&piStack_94);
    iStack_8._0_1_ = 5;
    func_0x0047d860();
  }
  else {
    unaff_ESI = (int *)func_0x00e5c390(iVar7,0x10,auStack_38);
    piStack_9c = unaff_ESI;
    if (unaff_ESI != (int *)0x0) {
      lVar19 = func_0x00e59960(unaff_ESI,0);
      uStack_c8 = 0;
      if (0 < lVar19) {
        uStack_c8._0_4_ = (int *)0x0;
        iStack_a4 = 0;
        piVar17 = (int *)uStack_c8;
        lVar5 = lVar19;
        do {
          piStack_a8 = (int *)((ulonglong)lVar5 >> 0x20);
          piStack_98 = (int *)lVar5;
          iVar7 = func_0x00e5e2c0(unaff_ESI,piVar17,iStack_a4,0,auStack_90);
          if (iVar7 != 0) goto LAB_00603a36;
          if ((auStack_90[0] & 1) == 0) {
            uStack_c8 = CONCAT44(piVar17,(int *)uStack_c8);
            auStack_140[0x12] = 0;
            auStack_140[0x13] = 0;
            auStack_140[0x14] = 0;
            auStack_140[0x15] = 0;
            auStack_140[0x16] = 0;
            auStack_140[0x17] = 0;
            func_0x0046bc40("warning: skipping entry at index %i with invalid name.",0x36);
            iStack_8._0_1_ = 10;
            uVar9 = func_0x00485670((int)&uStack_c8 + 4);
            iStack_8._0_1_ = 0xb;
            FUN_005ee340(2,uVar9);
            iStack_8._0_1_ = 10;
            if (0xf < uStack_cc) {
              func_0x0046b1f0(auStack_140 + 0x18,auStack_140[0x18],uStack_cc);
            }
            uStack_d0 = 0;
            uStack_cc = 0xf;
            auStack_140[0x18] = auStack_140[0x18] & 0xffffff00;
            iStack_8._0_1_ = 1;
            if (0xf < auStack_140[0x17]) {
              func_0x0046b1f0(auStack_140 + 0x12,auStack_140[0x12],auStack_140[0x17]);
            }
            auStack_140[0x16] = 0;
            auStack_140[0x17] = 0xf;
            auStack_140[0x12] = auStack_140[0x12] & 0xffffff00;
          }
          else {
