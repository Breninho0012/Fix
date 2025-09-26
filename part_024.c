  undefined4 uStack_34;
  uint uStack_30;
  uint auStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb21b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[2] == 1) {
    auStack_2c[6] = ((uint)param_1[1] % 0x1ffff7) * 1000 + *param_1;
  }
  else {
    auStack_2c[6] = *param_1;
  }
  uVar2 = func_0x00465870(auStack_44,uVar1);
  uStack_8 = 0;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_2c[5] = 0;
  func_0x0046bc40("onError",7);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar1 = func_0x008094a0(auStack_2c,uVar2,auStack_2c + 6);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_2c[5]) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_30) {
    func_0x0046b1f0(auStack_44,auStack_44[0],uStack_30);
  }
  uStack_34 = 0;
  uStack_30 = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  FUN_00806ff0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00808760(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [12];
  uint uStack_60;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [4];
  uint uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a8a8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uStack_20 = 0;
    func_0x004ab7f0(&uStack_20,uStack_18);
    if (uStack_20._4_4_ != (int *)0x0) {
      LOCK();
      uStack_20._4_4_[1] = uStack_20._4_4_[1] + 1;
      UNLOCK();
    }
    uStack_38 = (undefined4)uStack_20;
    piStack_34 = uStack_20._4_4_;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_30 = *param_2;
    piStack_2c = (int *)param_2[1];
    iStack_8 = 3;
    iStack_28 = param_1;
    iVar4 = func_0x0062ee00(auStack_5c);
    uStack_60 = *(uint *)(iVar4 + 4);
    uStack_3c = uStack_60 | 1;
    iStack_8 = 7;
    uStack_24 = 2;
    func_0x0063ae80(auStack_6c,auStack_40);
    iStack_8._0_1_ = 10;
    func_0x0080ac70(&uStack_38);
    iStack_8._0_1_ = 10;
    uStack_24 = 10;
    func_0x0080a3f0(auStack_54);
    uStack_24 = 2;
    iStack_8._0_1_ = 9;
    func_0x005d8390();
    piVar1 = piStack_2c;
    uStack_24 = 0;
    iStack_8._0_1_ = 0xe;
    if (piStack_2c != (int *)0x0) {
      LOCK();
      iVar4 = piStack_2c[1] + -1;
      piStack_2c[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_2c;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2 + -1;
        *piVar2 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    piVar1 = piStack_34;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_34 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_34[1] + -1;
      piStack_34[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_34;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2 + -1;
        *piVar2 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    iStack_8 = 0xffffffff;
    piVar1 = uStack_20._4_4_;
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
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00808990(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [12];
  uint uStack_60;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [4];
  uint uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a8a8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uStack_20 = 0;
    func_0x004ab7f0(&uStack_20,uStack_18);
    if (uStack_20._4_4_ != (int *)0x0) {
      LOCK();
      uStack_20._4_4_[1] = uStack_20._4_4_[1] + 1;
      UNLOCK();
    }
    uStack_38 = (undefined4)uStack_20;
    piStack_34 = uStack_20._4_4_;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_30 = *param_2;
    piStack_2c = (int *)param_2[1];
    iStack_8 = 3;
    iStack_28 = param_1;
    iVar4 = func_0x0062ee00(auStack_5c);
    uStack_60 = *(uint *)(iVar4 + 4);
    uStack_3c = uStack_60 | 1;
    iStack_8 = 7;
    uStack_24 = 2;
    func_0x0063ae80(auStack_6c,auStack_40);
    iStack_8._0_1_ = 10;
    func_0x0080ac70(&uStack_38);
    iStack_8._0_1_ = 10;
    uStack_24 = 10;
    func_0x0080a5e0(auStack_54);
    uStack_24 = 2;
    iStack_8._0_1_ = 9;
    func_0x005d8390();
    piVar1 = piStack_2c;
    uStack_24 = 0;
    iStack_8._0_1_ = 0xe;
    if (piStack_2c != (int *)0x0) {
      LOCK();
      iVar4 = piStack_2c[1] + -1;
      piStack_2c[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_2c;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2 + -1;
        *piVar2 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    piVar1 = piStack_34;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_34 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_34[1] + -1;
      piStack_34[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_34;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2 + -1;
        *piVar2 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    iStack_8 = 0xffffffff;
    piVar1 = uStack_20._4_4_;
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
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00808bc0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [4];
  uint uStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a988;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  puStack_2c = param_1;
  if (*(char *)(param_1 + 4) == '\0') {
    uStack_20 = 0;
    func_0x004ab7f0(&uStack_20,uStack_18);
    if (uStack_20._4_4_ != (int *)0x0) {
      LOCK();
      uStack_20._4_4_[1] = uStack_20._4_4_[1] + 1;
      UNLOCK();
    }
    piStack_28 = uStack_20._4_4_;
    uVar4 = (undefined4)uStack_20;
    uStack_5c = (undefined4)uStack_20;
    piStack_58 = uStack_20._4_4_;
    uStack_54 = param_2;
    uStack_4c = param_3;
    uStack_8 = 2;
    puStack_48 = param_1;
    iVar5 = func_0x0062ee00(auStack_70);
    uStack_74 = *(uint *)(iVar5 + 4);
    uStack_64 = uStack_74 | 1;
    uStack_8 = 6;
    uStack_24 = 2;
    func_0x0063ae80(auStack_80,auStack_68);
    puStack_60 = &uStack_44;
    uStack_44 = uVar4;
    piStack_40 = piStack_28;
    uStack_5c = 0;
    piStack_58 = (int *)0x0;
    uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
    uStack_34 = param_3;
    puStack_30 = puStack_2c;
    uStack_8._0_1_ = 9;
    uStack_24 = 10;
    uStack_3c = param_2;
    func_0x0080a7d0(&uStack_44);
    piVar3 = piStack_40;
    uStack_24 = 2;
    puStack_2c = &uStack_44;
    uStack_8 = CONCAT31(uStack_8._1_3_,8);
    if (piStack_40 != (int *)0x0) {
      LOCK();
      iVar5 = piStack_40[1] + -1;
      piStack_40[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piStack_40;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar3 + 2;
        iVar5 = *piVar1 + -1;
        *piVar1 = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_24 = uStack_24 & 0xfffffffd;
    uStack_8 = 0xffffffff;
    piVar3 = uStack_20._4_4_;
    if (uStack_20._4_4_ != (int *)0x0) {
      LOCK();
      iVar5 = uStack_20._4_4_[1] + -1;
      uStack_20._4_4_[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*uStack_20._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar3 + 2;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00809140(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x260);
  }
  return param_1;
}



void __thiscall FUN_00809930(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2aa33;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052b260(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_008099b0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_008099c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _guard_check_icall(*param_2,*param_3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_008099f0(int param_1)

{
  func_0x0080a170(param_1 + 8);
  return;
}



undefined4 * __thiscall FUN_00809a10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar3 = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = uVar3;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)(param_1 + 0x11);
  param_2[5] = 0;
  param_2[6] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  param_2[6] = *(undefined4 *)(param_1 + 0x18);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



void __thiscall FUN_00809ac0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2aad3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0052ae10(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00809b40(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00809b50(int param_1)

{
  func_0x0080a0d0(param_1 + 8);
  return;
}



undefined4 * __thiscall FUN_00809b70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[4] = *(undefined4 *)(param_1 + 0x10);
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



TypeDescriptor * FUN_00809c10(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00809c20(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00809c50(int param_1)

{
  func_0x0080a030(param_1 + 8);
  return;
}



undefined4 * __thiscall FUN_00809c70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar3 = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = uVar3;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
  param_2[5] = 0;
  param_2[6] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  param_2[6] = *(undefined4 *)(param_1 + 0x18);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



TypeDescriptor * FUN_00809d10(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00809d20(int param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _guard_check_icall(*param_2,*(undefined4 *)(param_2 + 1));
  (*pcVar1)();
  return;
}



void __fastcall FUN_00809d60(int param_1)

{
  func_0x00809f90(param_1 + 8);
  return;
}



undefined4 * __thiscall FUN_00809d80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar3 = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = uVar3;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
  param_2[5] = 0;
  param_2[6] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  param_2[6] = *(undefined4 *)(param_1 + 0x18);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



TypeDescriptor * FUN_00809e20(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00809e30(int param_1)

{
  func_0x00809ef0(param_1 + 8);
  return;
}



undefined4 * __thiscall FUN_00809e50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar3 = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = uVar3;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
  param_2[5] = 0;
  param_2[6] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  param_2[6] = *(undefined4 *)(param_1 + 0x18);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



undefined * Catch_0080a4b4(void)

{
  func_0x0062e2c0();
  return &DAT_0080a4ce;
}



undefined * Catch_0080a6a4(void)

{
  func_0x0062e2c0();
  return &DAT_0080a6be;
}



undefined * Catch_0080a884(void)

{
  func_0x0062e2c0();
  return &DAT_0080a89e;
}



void FUN_0080aea0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_28;
  undefined4 uStack_20;
  int *piStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2adad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  uStack_20 = *(undefined4 *)(param_2 + 0x30);
  uStack_28 = *(undefined8 *)(param_2 + 0x28);
  piStack_1c = *(int **)(param_2 + 0x34);
  iStack_8._1_3_ = 0;
  iStack_8._0_1_ = 3;
  uStack_14 = uVar4;
  func_0x0080ad10(uVar4);
  if ((param_1 != 0) && (iStack_8._0_1_ = 4, (char)piStack_1c[4] == '\0')) {
    *(undefined1 *)(piStack_1c + 4) = 1;
    pcVar2 = *(code **)(*piStack_1c + 0x14);
    _guard_check_icall(&uStack_28);
    (*pcVar2)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
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
  iStack_8 = 0xffffffff;
  func_0x0080ad10(uVar4);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0080aff0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2ae0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  func_0x0080ac70(param_2 + 0x20,uVar1);
  iStack_8._0_1_ = 2;
  func_0x0080add0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 3;
    func_0x0080aad0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x005d8390();
  iStack_8 = 0xffffffff;
  func_0x0080add0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0080b0a0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2ae0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  func_0x0080ac70(param_2 + 0x20,uVar1);
  iStack_8._0_1_ = 2;
  func_0x0080add0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 3;
    func_0x0080abc0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x005d8390();
  iStack_8 = 0xffffffff;
  func_0x0080add0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_0080bba0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2aee0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00634c70(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_0080bc20(undefined4 param_1,undefined4 param_2)

{
  void *_Dst;
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2af3d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  _Dst = (void *)func_0x008ab47d(0x74);
  uStack_8._0_1_ = 2;
  memset(_Dst,0,0x74);
  uVar1 = func_0x0080bad0(param_2);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0080c3d0(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_0080bc99(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x1c) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("Failed to initialize server: %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar3 = func_0x00485670(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  puVar2 = *(undefined8 **)(unaff_EBP + 8);
  *puVar2 = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)((int)puVar2 + 4) = 0;
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
  return &DAT_0080bd56;
}



void __fastcall FUN_0080bd80(int param_1)

{
  code *pcVar1;
  char **ppcStack_40;
  uint *puStack_3c;
  int iStack_38;
  char *pcStack_34;
  uint uStack_28;
  undefined8 uStack_24;
  uint uStack_1c;
  char acStack_18 [12];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_28;
  acStack_18[8] = '\0';
  acStack_18[9] = '\0';
  acStack_18[10] = '\0';
  acStack_18[0xb] = '\0';
  pcStack_34 = acStack_18;
  *(undefined1 *)(param_1 + 0x10) = 0;
  puStack_3c = &uStack_28;
  acStack_18[0] = '\0';
  acStack_18[1] = '\0';
  acStack_18[2] = '\0';
  acStack_18[3] = '\0';
  acStack_18[4] = '\0';
  acStack_18[5] = '\0';
  acStack_18[6] = '\0';
  acStack_18[7] = '\0';
  ppcStack_40 = (char **)0x80bdc6;
  iStack_38 = param_1 + 0x18;
  func_0x0080b490();
  pcStack_34 = 
  "C:\\Git\\otcv8_source\\vcpkg_installed\\x86-windows-static\\x86-windows-static\\include\\boost\\asio\\basic_socket_acceptor.hpp"
  ;
  uStack_28 = 0x1a;
  if (((uStack_1c & 1) == 0) || ((uStack_1c == 1 && ((int)uStack_24 == 0)))) {
    ppcStack_40 = (char **)&uStack_24;
    uStack_1c = 0;
    uStack_24 = 0;
    func_0x00642190(&pcStack_34,param_1 + 0x18);
    ppcStack_40 = (char **)0x119c238;
    puStack_3c = (uint *)0x119bfe0;
    iStack_38 = 0x298;
    pcStack_34 = (char *)0x1a;
    if ((uStack_28 & 1) == 0) {
      FUN_008ab370();
      return;
    }
  }
  else {
    ppcStack_40 = &pcStack_34;
    func_0x00466380();
  }
  func_0x00466380(&ppcStack_40);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_0080bea0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2af9d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x00808e30(uStack_14);
  iStack_8 = 0;
  *(undefined1 *)((int)uStack_1c + 0x239) = 1;
  uStack_24 = 0;
  func_0x005d75c0(&uStack_24);
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
    UNLOCK();
  }
  iStack_34 = (int)uStack_1c;
  piStack_30 = uStack_1c._4_4_;
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  if (uStack_24._4_4_ != (int *)0x0) {
    LOCK();
    uStack_24._4_4_[1] = uStack_24._4_4_[1] + 1;
    UNLOCK();
  }
  uStack_2c = (undefined4)uStack_24;
  piStack_28 = uStack_24._4_4_;
  iStack_8._0_1_ = 4;
  func_0x0080c8e0(param_1 + 0x18,(int)uStack_1c + 0x188,0,&iStack_34,param_1 + 0x58);
  piVar4 = piStack_28;
  iStack_8._0_1_ = 5;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_28[1] + -1;
    piStack_28[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_28;
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
  piVar4 = piStack_30;
  iStack_8._0_1_ = 1;
  if (piStack_30 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_30[1] + -1;
    piStack_30[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_30;
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
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar4 = uStack_24._4_4_;
  if (uStack_24._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_24._4_4_[1] + -1;
    uStack_24._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_24._4_4_;
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



void FUN_0080cc80(int param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f2b19c;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uVar8 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_98 = uStack_30;
  uStack_28 = uVar8;
  puVar4 = &stack0xfffffffc;
  if (param_1 != 0) {
    uStack_34 = 0;
    uStack_4c = 2;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_98._0_4_ = (undefined4)uStack_30;
    uStack_98 = CONCAT44(0x1c,(undefined4)uStack_98);
    func_0x0080b240(0x90,&uStack_4c,(int)&uStack_98 + 4,param_2[10],&uStack_30,uStack_24);
    if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
       ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
      uVar8 = 1;
    }
    else {
      pcVar3 = *(code **)(PTR_vftable_012bbee0 + 0x18);
      _guard_check_icall(0x2745);
      uVar8 = (*pcVar3)();
    }
    uStack_90 = 0x12bbee000002745;
    uStack_88 = (uVar8 & 0xff) + 2;
    cVar5 = func_0x0062cb40();
    if ((cVar5 != '\0') && (*(char *)(param_2 + 0x56) == '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[7] = 0;
      if (param_2[0x57] != 0) {
        func_0x0062d8d0();
      }
      puVar7 = param_2;
      if ((undefined4 *)param_2[0x57] != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)param_2[0x57];
      }
      func_0x0080b880(param_2[9],param_2 + 10,param_2[0xc],1,6,param_2 + 0xe,0x90,param_2[0x58],
                      puVar7);
      goto LAB_0080d0fb;
    }
    if (((uStack_28 & 1) == 0) || ((uStack_28 == 1 && ((int)uStack_30 == 0)))) {
      iVar1 = param_2[0xb];
      uVar2 = param_2[10];
      uStack_98._4_4_ = uVar2;
      if (*(int *)(iVar1 + 4) == -1) {
        piVar6 = (int *)func_0x0063eff0(&uStack_90,uVar2,&uStack_30);
        if (((piVar6[2] & 1U) == 0) ||
           ((uVar8 = uStack_28, uVar9 = uStack_30, piVar6[2] == 1 && (*piVar6 == 0)))) {
          *(undefined4 *)(iVar1 + 4) = uStack_98._4_4_;
          *(undefined1 *)(iVar1 + 8) = 0x10;
          func_0x00635160(iVar1 + 0xc,iVar1);
          uVar9 = 0;
          uVar8 = 0;
        }
      }
      else {
        if (((DAT_012bbe68 == 0x257edfd1) && (DAT_012bbe6c == -0x4d54ee86)) ||
           ((DAT_012bbe68 == 0x257edfd0 && (DAT_012bbe6c == -0x4d54ee86)))) {
          uVar8 = 1;
        }
        else {
          pcVar3 = *(code **)(PTR_vftable_012bbe60 + 0x18);
          _guard_check_icall(1);
          uVar8 = (*pcVar3)();
        }
        uStack_90 = 0x12bbe6000000001;
        uVar8 = (uVar8 & 0xff) + 2;
        uVar9 = uStack_90;
      }
      uStack_90._0_4_ = (int)uVar9;
      if (((uVar8 & 1) == 0) || ((uVar8 == 1 && ((int)uStack_90 == 0)))) {
        *(undefined4 *)(iVar1 + 0x20) = param_2[0xc];
        *(undefined1 *)(iVar1 + 0x24) = 1;
        *(undefined4 *)(iVar1 + 0x28) = uStack_4c;
        *(undefined4 *)(iVar1 + 0x2c) = uStack_48;
        *(undefined4 *)(iVar1 + 0x30) = (undefined4)uStack_44;
        *(undefined4 *)(iVar1 + 0x34) = uStack_44._4_4_;
        *(undefined8 *)(iVar1 + 0x38) = uStack_3c;
        *(undefined4 *)(iVar1 + 0x40) = uStack_34;
      }
      uStack_88 = uVar8;
      if ((uVar8 != 0) && (uVar8 != 1)) {
        uStack_88 = uVar8 & 1 | 0x119c94c;
      }
      uVar8 = uStack_88;
      uStack_98 = uVar9;
      if (((uStack_88 & 1) == 0) || ((uStack_88 == 1 && ((int)uStack_90 == 0)))) {
        param_2[10] = 0xffffffff;
      }
    }
    else {
      uStack_98 = uStack_30;
      uVar8 = uStack_28;
      uVar9 = uStack_90;
    }
    uStack_90 = uVar9;
    puVar7 = (undefined4 *)param_2[0xd];
    puVar4 = puStack_20;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = uStack_4c;
      puVar7[1] = uStack_48;
      puVar7[2] = (undefined4)uStack_44;
      puVar7[3] = uStack_44._4_4_;
      *(undefined8 *)(puVar7 + 4) = uStack_3c;
      puVar7[6] = uStack_34;
    }
  }
  puStack_20 = puVar4;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  puStack_5c = (undefined4 *)0x0;
  uStack_58 = 0;
  func_0x0064b5b0(param_2 + 0x5d);
  iStack_14._0_1_ = 4;
  if ((uVar8 != 0) && (uVar8 != 1)) {
    uVar8 = uVar8 & 1 | 0x119c97c;
  }
  uStack_6c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  func_0x0080caa0(param_2 + 0x59);
  uStack_74 = uStack_98;
  iStack_14._0_1_ = 6;
  uStack_6c = uVar8;
  func_0x0080cb40();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_58 == 0) {
      func_0x0080d130();
    }
    else {
      func_0x0080d290(&uStack_84);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x005d8390();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_58 != 0) {
    pcVar3 = (code *)*puStack_5c;
    _guard_check_icall(&uStack_68);
    (*pcVar3)();
  }
LAB_0080d0fb:
  iStack_14 = 0xffffffff;
  func_0x0080cb40();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0080d550(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 auStack_58 [5];
  uint uStack_44;
  uint auStack_40 [7];
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  undefined1 auStack_10 [12];
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec5625;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piVar1 = param_1 + 4;
  if (((param_1[6] & 1U) == 0) || ((param_1[6] == 1 && (*piVar1 == 0)))) {
    *(undefined1 *)(*param_1 + 0x238) = 1;
    *(undefined1 *)(*param_1 + 0x239) = 0;
  }
  auStack_40[6] = param_1[2];
  if (param_1[6] == 1) {
    iStack_24 = ((uint)param_1[5] % 0x1ffff7) * 1000 + *piVar1;
  }
  else {
    iStack_24 = *piVar1;
  }
  uVar3 = func_0x00465870(auStack_58,uVar2);
  uStack_14 = 0;
  auStack_40[4] = 0;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[5] = 0;
  func_0x0046bc40("onAccept",8);
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  uVar2 = func_0x0080c550(auStack_40,param_1,uVar3,&iStack_24);
  if (0 < (int)uVar2) {
    func_0x00d66d90(DAT_0145e9f0,~uVar2);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  uStack_14 = 0xffffffff;
  if (0xf < uStack_44) {
    func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_0080d560(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f2b2a5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0080caa0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0080d480();
  if (param_2 != '\0') {
    func_0x0080d130();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x005d8390();
  uStack_8 = 0xffffffff;
  func_0x0080d480();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_0080d8d0(undefined4 param_1,byte param_2)

{
  func_0x0080d630();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0080da00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2b45d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = OTMLDocument::vftable;
  uStack_8 = 0xffffffff;
  func_0x0080d630(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * FUN_0080e010(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2b6d7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  func_0x005ba6c0(auStack_1c,uVar6);
  iStack_8 = 1;
  func_0x0080e560(0xffffffff);
  iStack_8 = CONCAT31(iStack_8._1_3_,3);
  puVar7 = (undefined4 *)func_0x0046a880(&DAT_0113d23c,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *param_1 = *puVar7;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar7 + 4);
  puVar7[4] = 0;
  puVar7[5] = 0xf;
  *(undefined1 *)puVar7 = 0;
  uStack_14 = 1;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if (0xf < uStack_20) {
    func_0x0046b1f0(auStack_34,auStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
      *unaff_FS_OFFSET = iStack_10;
      return param_1;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_0080e550(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x60;
  func_0x0080dc50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0xa8);
  }
  return iVar1;
}



undefined * Catch_0080eb4c(void)

{
  func_0x0046a610(4,1);
  return &DAT_0080eb65;
}



undefined4 FUN_00810250(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2be46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  func_0x005ba6c0(auStack_1c,uVar3);
  uStack_8 = 1;
  func_0x0080e560(0);
  uStack_14 = 1;
  uStack_8 = uStack_8 & 0xffffff00;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_18[1] + -1;
    piStack_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_18[2] + -1;
      piStack_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_00813a86(void)

{
  func_0x0046a610(4,1);
  return &DAT_00813a9f;
}



void __thiscall FUN_00813b50(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd553;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = std::runtime_error::vftable;
  *puVar1 = boost::escaped_list_error::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00813c10(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab9f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::runtime_error::vftable;
  *param_1 = boost::escaped_list_error::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00813c90(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_00813b50(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288c80);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00813cc0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edd68c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_00813b50(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __thiscall FUN_00814310(int param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_78;
  code *pcStack_74;
  char cStack_70;
  int iStack_6c;
  undefined ***pppuStack_54;
  uint auStack_4c [6];
  undefined4 *puStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f2c795;
  iStack_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iVar2 = DAT_0145d128;
  iStack_2c = param_1;
  iVar7 = func_0x00bbb310(uVar6);
  if (iVar7 == iVar2) {
    if (param_2 != '\0') {
      if (param_2 == '\x15') {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
      else if (param_2 == '\x17') {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
      }
      else if (param_2 == '\x16') {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 4;
      }
      else {
        pcVar8 = (char *)func_0x00792880(&param_2);
        if (*pcVar8 == '\0') {
          puVar9 = (undefined1 *)func_0x00792880(&param_2);
          *puVar9 = 1;
          iStack_30 = param_1 + 0x20;
          puVar10 = (undefined4 *)func_0x00814df0(&param_2);
          puVar11 = (undefined4 *)(param_1 + 0x60);
          *puVar10 = 0xffffffff;
          puVar10[1] = 0xffffffff;
          puStack_34 = puVar11;
          func_0x00813e60(2);
          *puVar11 = 2;
          *(char *)(param_1 + 0x6c) = param_2;
          if (*(int *)(param_1 + 300) != 0) {
            func_0x007f4ed0(puVar11);
            func_0x00813e60(3);
            *(char *)(param_1 + 0x6c) = param_2;
            uStack_28 = DAT_0145db28;
            uVar4 = uStack_28;
            uStack_28._0_4_ = (undefined4)DAT_0145db28;
            uVar3 = (undefined4)uStack_28;
            uStack_28._4_4_ = (int *)((ulonglong)DAT_0145db28 >> 0x20);
            uVar5 = uStack_28._4_4_;
            uStack_28 = uVar4;
            puVar11 = (undefined4 *)func_0x00814df0(&param_2);
            *puVar11 = uVar3;
            puVar11[1] = uVar5;
            uStack_28 = DAT_0145db28;
            uVar4 = uStack_28;
            uStack_28._0_4_ = (undefined4)DAT_0145db28;
            uVar3 = (undefined4)uStack_28;
            uStack_28._4_4_ = (int *)((ulonglong)DAT_0145db28 >> 0x20);
            uVar5 = uStack_28._4_4_;
            uStack_28 = uVar4;
            puVar11 = (undefined4 *)func_0x00814df0(&param_2);
            *puVar11 = uVar3;
            puVar11[1] = uVar5;
            func_0x007f4ed0(puStack_34);
          }
        }
      }
    }
  }
  else {
    cStack_70 = param_2;
    pppuStack_54 = &ppuStack_78;
    ppuStack_78 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_74 = FUN_00814310;
    uStack_14 = 1;
    auStack_4c[4] = 0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    auStack_4c[3] = 0;
    auStack_4c[5] = 0;
    iStack_6c = param_1;
    func_0x0046bc40("PlatformWindow::processKeyDown",0x1e);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    FUN_005e5070(&uStack_28,auStack_4c,&ppuStack_78,0);
    if (uStack_28._4_4_ != (int *)0x0) {
      LOCK();
      iVar2 = uStack_28._4_4_[1] + -1;
      uStack_28._4_4_[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)*uStack_28._4_4_;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar2 = uStack_28._4_4_[2] + -1;
        uStack_28._4_4_[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*uStack_28._4_4_ + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < auStack_4c[5]) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
    }
    auStack_4c[4] = 0;
    auStack_4c[5] = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (pppuStack_54 != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_54)[4];
      _guard_check_icall(pppuStack_54 != &ppuStack_78);
      (*pcVar1)();
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_008145b0(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_78;
  code *pcStack_74;
  char cStack_70;
  int iStack_6c;
  undefined ***pppuStack_54;
  uint auStack_4c [7];
  int *piStack_30;
  undefined4 uStack_29;
  byte bStack_25;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f2c80d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iVar4 = DAT_0145d128;
  iVar7 = func_0x00bbb310(uStack_24);
  if (iVar7 == iVar4) {
    if (param_2 != '\0') {
      if (param_2 == '\x15') {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffe;
      }
      else if (param_2 == '\x17') {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffd;
      }
      else if (param_2 == '\x16') {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffb;
      }
      else {
        if (param_2 == '\x12') {
          bVar6 = 0x8d;
          uStack_29 = CONCAT31(uStack_29._1_3_,0x8d);
          do {
            bStack_25 = bVar6;
            func_0x007ab9f0(auStack_4c + 3,&bStack_25);
            if ((*(char *)(auStack_4c[5] + 0xd) != '\0') ||
               (uVar9 = auStack_4c[5], (byte)uStack_29 < *(byte *)(auStack_4c[5] + 0xe))) {
              if (*(int *)(param_1 + 0x14) == 0xfffffff) {
                func_0x0048d790();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar3 = *(undefined4 *)(param_1 + 0x10);
              auStack_4c[6] = param_1 + 0x10;
              uStack_14 = 4;
              piStack_30 = (int *)0x0;
              puVar8 = (undefined4 *)func_0x008ab47d(0x10);
              *(byte *)((int)puVar8 + 0xe) = bStack_25;
              *(undefined1 *)((int)puVar8 + 0xf) = 0;
              *puVar8 = uVar3;
              puVar8[1] = uVar3;
              puVar8[2] = uVar3;
              *(undefined2 *)(puVar8 + 3) = 0;
              piStack_30 = (int *)0x0;
              uStack_14 = 0xffffffff;
              uVar9 = func_0x0049a910(auStack_4c[3],auStack_4c[4],puVar8);
            }
            if (*(char *)(uVar9 + 0xf) != '\0') {
              FUN_008145b0(uStack_29);
            }
            bVar6 = (byte)uStack_29 + 1;
            uStack_29 = CONCAT31(uStack_29._1_3_,bVar6);
          } while (bVar6 < 0x97);
        }
        pcVar10 = (char *)func_0x00792880(&param_2);
        if (*pcVar10 != '\0') {
          puVar11 = (undefined1 *)func_0x00792880(&param_2);
          *puVar11 = 0;
          if (*(int *)(param_1 + 300) != 0) {
            func_0x00813e60(4);
            *(char *)(param_1 + 0x6c) = param_2;
            func_0x007f4ed0(param_1 + 0x60);
          }
        }
      }
    }
  }
  else {
    cStack_70 = param_2;
    pppuStack_54 = &ppuStack_78;
    ppuStack_78 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_74 = FUN_008145b0;
    uStack_14 = 1;
    auStack_4c[4] = 0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    auStack_4c[3] = 0;
    auStack_4c[5] = 0;
    iStack_6c = param_1;
    func_0x0046bc40("PlatformWindow::processKeyUp",0x1c);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    FUN_005e5070(auStack_4c + 6,auStack_4c,&ppuStack_78,0);
    piVar5 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_30[1] + -1;
      piStack_30[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)*piStack_30;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar5 + 2;
        iVar4 = *piVar1 + -1;
        *piVar1 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar2 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < auStack_4c[5]) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
    }
    auStack_4c[4] = 0;
    auStack_4c[5] = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (pppuStack_54 != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_54)[4];
      _guard_check_icall(pppuStack_54 != &ppuStack_78);
      (*pcVar2)();
      pppuStack_54 = (undefined ***)0x0;
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00814890(int param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_70;
  code *pcStack_6c;
  int iStack_68;
  undefined ***pppuStack_4c;
  undefined1 auStack_44 [4];
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f2c865;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iVar4 = DAT_0145d128;
  iVar6 = func_0x00bbb310(uStack_24);
  if (iVar6 == iVar4) {
    piVar7 = (int *)**(int **)(param_1 + 0x10);
    cVar1 = *(char *)((int)piVar7 + 0xd);
    while (cVar1 == '\0') {
      if ((char)((ushort)*(undefined2 *)((int)piVar7 + 0xe) >> 8) != '\0') {
        FUN_008145b0(*(undefined2 *)((int)piVar7 + 0xe));
      }
      piVar3 = (int *)piVar7[2];
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0xd);
        piVar7 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar7[1] + 0xd);
        piVar5 = (int *)piVar7[1];
        piVar3 = piVar7;
        while ((piVar7 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar5 = (int *)piVar7[1];
          piVar3 = piVar7;
        }
      }
      cVar1 = *(char *)((int)piVar7 + 0xd);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  else {
    pppuStack_4c = &ppuStack_70;
    ppuStack_70 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_6c = FUN_00814890;
    uStack_14 = 1;
    uStack_2c = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    iStack_68 = param_1;
    func_0x0046bc40("PlatformWindow::releaseAllKeys",0x1e);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    FUN_005e5070(auStack_44,&uStack_3c,&ppuStack_70,0);
    if (piStack_40 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_40[1] + -1;
      piStack_40[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)*piStack_40;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar4 = piStack_40[2] + -1;
        piStack_40[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar2 = *(code **)(*piStack_40 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < uStack_28) {
      func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
    }
    uStack_2c = 0;
    uStack_28 = 0xf;
    uStack_3c = uStack_3c & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (pppuStack_4c != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_4c)[4];
      _guard_check_icall(pppuStack_4c != &ppuStack_70);
      (*pcVar2)();
      pppuStack_4c = (undefined ***)0x0;
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00814aa0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  undefined **ppuStack_74;
  code *pcStack_70;
  int iStack_6c;
  undefined ***pppuStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  int *piStack_28;
  int iStack_24;
  undefined8 uStack_20;
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2c8b5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = DAT_0145d128;
  iStack_24 = param_1;
  iVar10 = func_0x00bbb310(uStack_14);
  uVar8 = DAT_0145db28;
  if (iVar10 == iVar6) {
    uStack_30 = DAT_0145db28;
    uStack_30._0_4_ = (uint)DAT_0145db28;
    uStack_30._4_4_ = (int)((ulonglong)DAT_0145db28 >> 0x20);
    uVar4 = (uint)((uint)uStack_30 < *(uint *)(param_1 + 0x28));
    iVar6 = uStack_30._4_4_ - *(int *)(param_1 + 0x2c);
    iVar10 = iVar6 - uVar4;
    uStack_20 = CONCAT44(iVar10,(uint)uStack_20);
    if ((iVar10 >= 0) &&
       ((iVar10 != 0 &&
         (SBORROW4(uStack_30._4_4_,*(int *)(param_1 + 0x2c)) != SBORROW4(iVar6,uVar4)) == iVar10 < 0
        || (9 < (uint)uStack_30 - *(uint *)(param_1 + 0x28))))) {
      *(uint *)(param_1 + 0x28) = (uint)uStack_30;
      *(int *)(param_1 + 0x2c) = uStack_30._4_4_;
      *(undefined1 *)(param_1 + 0x30) = 0;
      piVar14 = (int *)**(int **)(param_1 + 0x10);
      cVar1 = *(char *)((int)piVar14 + 0xd);
      uStack_30 = uVar8;
      while (uVar8 = uStack_30, cVar1 == '\0') {
        uStack_15 = (undefined1)*(undefined2 *)((int)piVar14 + 0xe);
        if ((char)((ushort)*(undefined2 *)((int)piVar14 + 0xe) >> 8) != '\0') {
          uStack_30 = CONCAT44(param_1 + 0x20,(uint)uStack_30);
          puVar11 = (uint *)func_0x00814df0(&uStack_15);
          uVar4 = *puVar11;
          uStack_34 = puVar11[1];
          piStack_28 = (int *)func_0x00814df0(&uStack_15);
          iVar10 = iStack_24;
          piStack_28 = (int *)*piStack_28;
          uStack_20._4_4_ = (int *)((ulonglong)DAT_0145db28 >> 0x20);
          uStack_20._0_4_ = (uint)DAT_0145db28;
          uVar5 = (uint)((uint)uStack_20 < uVar4);
          bVar15 = SBORROW4((int)uStack_20._4_4_,uStack_34);
          iVar6 = (int)uStack_20._4_4_ - uStack_34;
          iVar12 = iVar6 - uVar5;
          uStack_20 = CONCAT44(iVar12,(uint)uStack_20);
          param_1 = iStack_24;
          if ((iVar12 >= 0) &&
             ((iVar12 != 0 && (bVar15 != SBORROW4(iVar6,uVar5)) == iVar12 < 0 ||
              (0x1d < (uint)uStack_20 - uVar4)))) {
            if (*(int *)(iStack_24 + 300) != 0) {
              puVar13 = (undefined4 *)(iStack_24 + 0x60);
              *puVar13 = 3;
              *(undefined4 *)(iStack_24 + 100) = 0;
              *(undefined4 *)(iStack_24 + 0x68) = 0;
              *(undefined1 *)(iStack_24 + 0x6c) = 0;
              func_0x0046a660(&DAT_0112e1b4,0);
              *(undefined4 *)(iVar10 + 0x9c) = 0;
              *(undefined4 *)(iVar10 + 0x94) = 0;
              *(undefined4 *)(iVar10 + 0x98) = 0;
              *(undefined1 *)(iStack_24 + 0x6c) = uStack_15;
              uStack_20._0_4_ = (uint)DAT_0145db28;
              iVar6 = (uint)uStack_20;
              uStack_20 = DAT_0145db28;
              *(int *)(iStack_24 + 0x9c) = iVar6 - (int)piStack_28;
              piStack_28 = *(int **)(iStack_24 + 300);
              if (piStack_28 == (int *)0x0) {
                func_0x00e701bd();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = *(code **)(*piStack_28 + 8);
              _guard_check_icall(puVar13);
              (*pcVar2)();
            }
            uStack_20 = DAT_0145db28;
            uVar8 = uStack_20;
            uStack_20._0_4_ = (uint)DAT_0145db28;
            uVar7 = (uint)uStack_20;
            uStack_20 = uVar8;
            puVar13 = (undefined4 *)func_0x00814df0(&uStack_15);
            *puVar13 = uVar7;
            puVar13[1] = uStack_20._4_4_;
            param_1 = iStack_24;
          }
        }
        piVar3 = (int *)piVar14[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar14 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar14 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar14[1] + 0xd);
          piVar9 = (int *)piVar14[1];
          piVar3 = piVar14;
          while ((piVar14 = piVar9, cVar1 == '\0' && (piVar3 == (int *)piVar14[2]))) {
            cVar1 = *(char *)(piVar14[1] + 0xd);
            piVar9 = (int *)piVar14[1];
            piVar3 = piVar14;
          }
        }
        cVar1 = *(char *)((int)piVar14 + 0xd);
      }
    }
  }
  else {
    pppuStack_50 = &ppuStack_74;
    ppuStack_74 = std::_Func_impl_no_alloc<>::vftable;
    pcStack_70 = FUN_00814aa0;
    uStack_8 = 1;
    uStack_3c = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    iStack_6c = param_1;
    func_0x0046bc40("PlatformWindow::fireKeysPress",0x1d);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    FUN_005e5070(&uStack_20,&uStack_4c,&ppuStack_74,0);
    piVar14 = uStack_20._4_4_;
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
        piVar3 = piVar14 + 2;
        iVar6 = *piVar3 + -1;
        *piVar3 = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piVar14 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < uStack_38) {
      func_0x0046b1f0(&uStack_4c,uStack_4c,uStack_38);
    }
    uStack_3c = 0;
    uStack_38 = 0xf;
    uStack_4c = uStack_4c & 0xffffff00;
    uStack_8 = 0xffffffff;
    uVar8 = uStack_30;
    if (pppuStack_50 != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_50)[4];
      _guard_check_icall(pppuStack_50 != &ppuStack_74);
      (*pcVar2)();
      pppuStack_50 = (undefined ***)0x0;
      uVar8 = uStack_30;
    }
  }
  uStack_30 = uVar8;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



TypeDescriptor * FUN_00815000(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00815010(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  return;
}



TypeDescriptor * FUN_00815030(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00815040(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*(undefined1 *)(param_1 + 8));
  (*pcVar1)();
  return;
}



void __thiscall FUN_00815060(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}



void FUN_00816b80(int param_1)

{
  uint uVar1;
  HANDLE Process;
  LPCSTR pCVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_FS_OFFSET;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint auStack_94 [4];
  undefined4 uStack_84;
  uint uStack_80;
  uint auStack_7c [4];
  undefined4 uStack_6c;
  uint uStack_68;
  uint auStack_64 [4];
  undefined4 uStack_54;
  uint uStack_50;
  uint *puStack_4c;
  undefined4 uStack_48;
  uint auStack_44 [3];
  DWORD DStack_38;
  int iStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2cde5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_48 = 0;
  uStack_14 = uVar1;
  GetCurrentThread();
  Process = GetCurrentProcess();
  uStack_8 = 0;
  func_0x00585e70(auStack_94,uVar1);
  uStack_48 = 1;
  func_0x005899d0(auStack_94,extraout_ECX);
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  uStack_48 = 0;
  uStack_8._0_1_ = 2;
  if (0xf < uStack_80) {
    func_0x0046b1f0(auStack_94,auStack_94[0],uStack_80);
  }
  puStack_4c = auStack_44;
  uStack_84 = 0;
  uStack_80 = 0xf;
  auStack_94[0] = auStack_94[0] & 0xffffff00;
  if (DAT_0145ca93 == '\0') {
    uStack_8 = CONCAT31(uStack_8._1_3_,8);
    func_0x00e7349c("exception.dmp",0xd);
    func_0x00585d40();
    uStack_48 = 0;
    uStack_8 = 9;
    func_0x005f4be0(auStack_44);
  }
  else {
    uStack_8 = CONCAT31(uStack_8._1_3_,4);
    func_0x00e7349c("exception2.dmp",0xe);
    func_0x00585d40();
    uStack_48 = 0;
    uStack_8 = 5;
    func_0x005f4be0(auStack_44);
  }
  uStack_8._0_1_ = 2;
  if (7 < uStack_30) {
    func_0x005895e0(auStack_44,auStack_44[0],uStack_30);
  }
  uStack_30 = 7;
  auStack_44[0] = auStack_44[0] & 0xffff0000;
  iStack_34 = 0;
  pCVar2 = (LPCSTR)func_0x00585e70(auStack_64);
  uStack_8._0_1_ = 0xb;
  if (0xf < *(uint *)(pCVar2 + 0x14)) {
    pCVar2 = *(LPCSTR *)pCVar2;
  }
  puStack_4c = (uint *)CreateFileA(pCVar2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0
                                  );
  uStack_8._0_1_ = 2;
  if (0xf < uStack_50) {
    func_0x0046b1f0(auStack_64,auStack_64[0],uStack_50);
  }
  uStack_54 = 0;
  uStack_50 = 0xf;
  auStack_64[0] = auStack_64[0] & 0xffffff00;
  DStack_38 = GetCurrentThreadId();
  uVar9 = 0;
  uVar8 = 0;
  iStack_34 = param_1;
  pDVar3 = &DStack_38;
  uStack_30 = 0;
  if (param_1 == 0) {
    pDVar3 = (DWORD *)0x0;
  }
  uVar7 = 0x50;
  puVar6 = puStack_4c;
  DVar4 = GetProcessId(Process);
  MiniDumpWriteDump(Process,DVar4,puVar6,uVar7,pDVar3,uVar8,uVar9);
  uStack_8._0_1_ = 0xc;
  func_0x00585e70(auStack_64);
  uStack_48 = 2;
  uVar8 = func_0x005899d0(auStack_64,extraout_ECX_00);
  uStack_8._0_1_ = 0xd;
  func_0x00607ae0(uVar8);
  uStack_8._0_1_ = 0xc;
  if (7 < uStack_68) {
    func_0x005895e0(auStack_7c,auStack_7c[0],uStack_68);
  }
  uStack_6c = 0;
  uStack_68 = 7;
  auStack_7c[0] = auStack_7c[0] & 0xffff0000;
  uStack_48 = 0;
  uStack_8._0_1_ = 2;
  if (0xf < uStack_50) {
    func_0x0046b1f0(auStack_64,auStack_64[0],uStack_50);
  }
  puStack_4c = auStack_64;
  uStack_54 = 0;
  uStack_50 = 0xf;
  auStack_64[0] = auStack_64[0] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,0x10);
  func_0x00e7349c("exception_full.dmp",0x12);
  func_0x00585d40();
  uStack_48 = 0;
  uStack_8._1_3_ = 0;
  uStack_8._0_1_ = 0x11;
  func_0x005f4be0(auStack_64);
  uStack_8._0_1_ = 2;
  if (7 < uStack_50) {
    func_0x005895e0(auStack_64,auStack_64[0],uStack_50);
  }
  uStack_54 = 0;
  auStack_64[0] = auStack_64[0] & 0xffff0000;
  uStack_50 = 7;
  pCVar2 = (LPCSTR)func_0x00585e70(auStack_7c);
  uStack_8._0_1_ = 0x13;
  if (0xf < *(uint *)(pCVar2 + 0x14)) {
    pCVar2 = *(LPCSTR *)pCVar2;
  }
  pvVar5 = CreateFileA(pCVar2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_68) {
    func_0x0046b1f0(auStack_7c,auStack_7c[0],uStack_68);
  }
  uStack_6c = 0;
  uStack_68 = 0xf;
  auStack_7c[0] = auStack_7c[0] & 0xffffff00;
  DStack_38 = GetCurrentThreadId();
  uVar9 = 0;
  uVar8 = 0;
  iStack_34 = param_1;
  pDVar3 = &DStack_38;
  uStack_30 = 0;
  if (param_1 == 0) {
    pDVar3 = (DWORD *)0x0;
  }
  uVar7 = 0x1a25;
  DVar4 = GetProcessId(Process);
  MiniDumpWriteDump(Process,DVar4,pvVar5,uVar7,pDVar3,uVar8,uVar9);
  if (DAT_0145ca93 != '\0') {
    quick_exit(0);
  }
  Sleep(1000);
  func_0x008155c0();
  uStack_8 = 0xffffffff;
  if (7 < uStack_18) {
    func_0x005895e0(auStack_2c,auStack_2c[0],uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 7;
  auStack_2c[0] = auStack_2c[0] & 0xffff0000;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



DWORD GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00816ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



bool FUN_00817000(LPCSTR param_1)

{
  HWND pHVar1;
  
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(LPCSTR *)param_1;
  }
  pHVar1 = FindWindowA(param_1,(LPCSTR)0x0);
  return pHVar1 != (HWND)0x0;
}



void FUN_00817020(int *param_1)

{
  WCHAR WVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  WCHAR *pWVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  uint auStack_250 [4];
  undefined4 uStack_240;
  uint uStack_23c;
  uint auStack_238 [7];
  WCHAR WStack_21c;
  undefined1 auStack_21a [518];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2ce4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  iStack_8 = 0;
  auStack_238[6] = 1;
  uStack_14 = uVar4;
  GetTempPathW(0x104,&WStack_21c);
  auStack_238[4] = 0;
  pWVar7 = &WStack_21c;
  auStack_238[5] = 0;
  auStack_238[0] = 0;
  auStack_238[1] = 0;
  auStack_238[2] = 0;
  auStack_238[3] = 0;
  do {
    WVar1 = *pWVar7;
    pWVar7 = pWVar7 + 1;
  } while (WVar1 != L'\0');
  func_0x005dd9e0(&WStack_21c,(int)pWVar7 - (int)auStack_21a >> 1,uVar4);
  iStack_8 = 1;
  piVar5 = (int *)func_0x0083c780();
  iStack_8._0_1_ = 2;
  if (param_1 != piVar5) {
    uVar4 = param_1[5];
    if (0xf < uVar4) {
      iVar2 = *param_1;
      uVar8 = uVar4 + 1;
      iVar6 = iVar2;
      if (0xfff < uVar8) {
        iVar6 = *(int *)(iVar2 + -4);
        uVar8 = uVar4 + 0x24;
        if (0x1f < (iVar2 - iVar6) - 4U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(iVar6,uVar8);
    }
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    iVar2 = piVar5[1];
    iVar6 = piVar5[2];
    iVar3 = piVar5[3];
    *param_1 = *piVar5;
    param_1[1] = iVar2;
    param_1[2] = iVar6;
    param_1[3] = iVar3;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar5 + 4);
    piVar5[4] = 0;
    piVar5[5] = 0xf;
    *(undefined1 *)piVar5 = 0;
  }
  iStack_8._0_1_ = 1;
  if (0xf < uStack_23c) {
    func_0x0046b1f0(auStack_250,auStack_250[0],uStack_23c);
  }
  uStack_240 = 0;
  uStack_23c = 0xf;
  auStack_250[0] = auStack_250[0] & 0xffffff00;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (7 < auStack_238[5]) {
    func_0x005895e0(auStack_238,auStack_238[0],auStack_238[5]);
  }
  auStack_238[4] = 0;
  auStack_238[5] = 7;
  auStack_238[0] = auStack_238[0] & 0xffff0000;
  func_0x00818b90(&DAT_0113c2ec);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00817470(uint param_1)

{
  LPCWSTR **lpFileName;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  LPCWSTR *appWStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2ce95;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  func_0x00818b90(&DAT_01141648,uStack_14);
  func_0x0083c690();
  iStack_8._0_1_ = 1;
  lpFileName = appWStack_2c;
  if (7 < uStack_18) {
    lpFileName = (LPCWSTR **)appWStack_2c[0];
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  GetFileAttributesExW((LPCWSTR)lpFileName,GetFileExInfoStandard,&uStack_50);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (7 < uStack_18) {
    func_0x005895e0(appWStack_2c,appWStack_2c[0],uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 7;
  appWStack_2c[0] = (LPCWSTR *)((uint)appWStack_2c[0] & 0xffff0000);
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = param_1 & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined1 FUN_00817580(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  LPCWSTR lpFile;
  HINSTANCE pHVar4;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  char in_stack_0000001c;
  int aiStack_74 [9];
  int *piStack_50;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_34 [6];
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2cf0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  if (in_stack_0000001c == '\0') {
    func_0x00469da0(&param_1,uVar3);
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    piStack_50 = (int *)0x0;
    iStack_8._0_1_ = 4;
    piStack_50 = (int *)func_0x00818fd0(auStack_4c);
    iStack_8._0_1_ = 5;
    auStack_34[4] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    auStack_34[5] = 0;
    func_0x0046bc40("Platform::openUrl",0x11);
    iStack_8 = CONCAT31(iStack_8._1_3_,6);
    FUN_005e4dd0(auStack_1c,auStack_34,aiStack_74,0x32);
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_18[1] + -1;
      piStack_18[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar2 = piStack_18[2] + -1;
        piStack_18[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    iStack_8._0_1_ = 5;
    if (0xf < auStack_34[5]) {
      func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
    }
    auStack_34[4] = 0;
    auStack_34[5] = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    iStack_8._0_1_ = 3;
    if (piStack_50 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_50 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)aiStack_74 >> 8),piStack_50 != aiStack_74));
      (*pcVar1)();
      piStack_50 = (int *)0x0;
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_38 = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_11 = 1;
  }
  else {
    lpFile = (LPCWSTR)func_0x0083c690();
    iStack_8._0_1_ = 1;
    if (7 < *(uint *)(lpFile + 10)) {
      lpFile = *(LPCWSTR *)lpFile;
    }
    pHVar4 = ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    uStack_11 = (HINSTANCE)&DAT_0000001f < pHVar4;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (7 < uStack_38) {
      func_0x005895e0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_38 = 7;
    auStack_4c[0] = auStack_4c[0] & 0xffff0000;
  }
  uStack_3c = 0;
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_008177a0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  LPCWSTR lpParameters;
  HINSTANCE pHVar4;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  char in_stack_0000001c;
  int aiStack_74 [9];
  int *piStack_50;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_34 [6];
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2cf0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  if (in_stack_0000001c == '\0') {
    func_0x00469da0(&param_1,uVar3);
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    piStack_50 = (int *)0x0;
    iStack_8._0_1_ = 4;
    piStack_50 = (int *)func_0x00819060(auStack_4c);
    iStack_8._0_1_ = 5;
    auStack_34[4] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    auStack_34[5] = 0;
    func_0x0046bc40("Platform::openDir",0x11);
    iStack_8 = CONCAT31(iStack_8._1_3_,6);
    FUN_005e4dd0(auStack_1c,auStack_34,aiStack_74,0x32);
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_18[1] + -1;
      piStack_18[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar2 = piStack_18[2] + -1;
        piStack_18[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    iStack_8._0_1_ = 5;
    if (0xf < auStack_34[5]) {
      func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
    }
    auStack_34[4] = 0;
    auStack_34[5] = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    iStack_8._0_1_ = 3;
    if (piStack_50 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_50 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)aiStack_74 >> 8),piStack_50 != aiStack_74));
      (*pcVar1)();
      piStack_50 = (int *)0x0;
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_38 = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_11 = 1;
  }
  else {
    lpParameters = (LPCWSTR)func_0x0083c690();
    iStack_8._0_1_ = 1;
    if (7 < *(uint *)(lpParameters + 10)) {
      lpParameters = *(LPCWSTR *)lpParameters;
    }
    pHVar4 = ShellExecuteW((HWND)0x0,L"open",L"explorer.exe",lpParameters,(LPCWSTR)0x0,1);
    uStack_11 = (HINSTANCE)&DAT_0000001f < pHVar4;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (7 < uStack_38) {
      func_0x005895e0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_38 = 7;
    auStack_4c[0] = auStack_4c[0] & 0xffff0000;
  }
  uStack_3c = 0;
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



void FUN_008179c0(undefined4 *param_1)

{
  BYTE BVar1;
  uint uVar2;
  LSTATUS LVar3;
  BYTE *pBVar4;
  int *unaff_FS_OFFSET;
  HKEY pHStack_41c;
  DWORD DStack_418;
  BYTE aBStack_414 [1024];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2cf57;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar2;
  memset(aBStack_414,0,0x400);
  DStack_418 = 0x400;
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,
                        0x20019,&pHStack_41c);
  if (LVar3 == 0) {
    RegQueryValueExA(pHStack_41c,"ProcessorNameString",(LPDWORD)0x0,(LPDWORD)0x0,aBStack_414,
                     &DStack_418);
    pBVar4 = aBStack_414;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    do {
      BVar1 = *pBVar4;
      pBVar4 = pBVar4 + 1;
    } while (BVar1 != '\0');
    func_0x0046bc40(aBStack_414,(int)pBVar4 - (int)(aBStack_414 + 1),uVar2);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uVar2);
  }
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00817af0(void)

{
  undefined1 auStack_58 [8];
  _MEMORYSTATUSEX _Stack_50;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_58;
  _Stack_50.dwLength = 0x40;
  GlobalMemoryStatusEx(&_Stack_50);
  func_0x008abeb0();
  FUN_008ab370();
  return;
}



void FUN_00817b40(void)

{
  HANDLE Process;
  PROCESS_MEMORY_COUNTERS *ppsmemCounters;
  DWORD cb;
  PROCESS_MEMORY_COUNTERS PStack_30;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  cb = 0x28;
  ppsmemCounters = &PStack_30;
  Process = GetCurrentProcess();
  GetProcessMemoryInfo(Process,ppsmemCounters,cb);
  FUN_008ab370((double)(int)PStack_30.WorkingSetSize +
               (double)(&DAT_011a2c10)[-((int)PStack_30.WorkingSetSize >> 0x1f)]);
  return;
}



void FUN_00817b90(undefined4 *param_1)

{
  uint uVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  char cStack_56;
  _union_530 a_Stack_54 [9];
  int iStack_30;
  uint auStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2cfbf;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar6 = param_1;
  auStack_2c[6] = uVar1;
  memset(&iStack_16c,0,0x118);
  uStack_170 = 0x11c;
  pHVar2 = GetModuleHandleA("ntdll.dll");
  if (pHVar2 == (HMODULE)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    uVar7 = 1;
    uStack_8 = 0;
    goto LAB_00817ec7;
  }
  pFVar3 = GetProcAddress(pHVar2,"RtlGetVersion");
  if (pFVar3 != (FARPROC)0x0) {
    _guard_check_icall(&uStack_170,uVar1);
    iVar4 = (*pFVar3)();
    if ((iVar4 == 0) &&
       (iStack_30 = iVar4, pHVar2 = GetModuleHandleA("kernel32.dll"), pHVar2 != (HMODULE)0x0)) {
      pFVar3 = GetProcAddress(pHVar2,"GetProductInfo");
      if (pFVar3 != (FARPROC)0x0) {
        _guard_check_icall(iStack_16c,iStack_168,0,0,&iStack_30);
        (*pFVar3)();
      }
      auStack_2c[4] = 0;
      auStack_2c[5] = 0;
      auStack_2c[0] = 0;
      auStack_2c[1] = 0;
      auStack_2c[2] = 0;
      auStack_2c[3] = 0;
      func_0x0046bc40("Windows ",8);
      uStack_8 = 1;
      if (iStack_16c == 10) {
        pcVar5 = "11";
        if (uStack_164 < 22000) {
          pcVar5 = "10";
        }
        iStack_168 = 2;
LAB_00817e1a:
        func_0x0046a880(pcVar5,iStack_168);
      }
      else {
        if (iStack_16c != 6) {
          if (iStack_16c == 5) {
            if (iStack_168 == 2) {
              iStack_168 = 0x12;
              pcVar5 = "Server 2003/XP x64";
            }
            else if (iStack_168 == 1) {
              iStack_168 = 2;
              pcVar5 = "XP";
            }
            else {
              iStack_168 = 4;
              pcVar5 = "2000";
            }
          }
          else {
            iStack_168 = 7;
            pcVar5 = "Unknown";
          }
          goto LAB_00817e1a;
        }
        if (iStack_168 == 3) {
          pcVar5 = "8.1";
          goto LAB_00817e1a;
        }
        if (iStack_168 == 2) {
          iStack_168 = 1;
          pcVar5 = "8";
          goto LAB_00817e1a;
        }
        if (iStack_168 == 1) {
          pcVar5 = "7";
          goto LAB_00817e1a;
        }
        if (iStack_168 == 0) {
          if (cStack_56 == '\x01') {
            iStack_168 = 5;
            pcVar5 = "Vista";
          }
          else {
            func_0x0046a880("Server 2008",0xb);
            switch(iStack_30) {
            case 7:
              iStack_168 = 9;
              pcVar5 = " Standard";
              break;
            case 8:
              iStack_168 = 0xb;
              pcVar5 = " Datacenter";
              break;
            default:
              iStack_168 = 8;
              pcVar5 = " Edition";
              break;
            case 10:
              iStack_168 = 0xb;
              pcVar5 = " Enterprise";
              break;
            case 0x11:
              iStack_168 = 0xc;
              pcVar5 = " Web Edition";
            }
          }
          goto LAB_00817e1a;
        }
      }
      GetNativeSystemInfo((LPSYSTEM_INFO)&a_Stack_54[0].s);
      switch(a_Stack_54[0].s.wProcessorArchitecture) {
      case 0:
        pcVar5 = ", 32-bit";
        uVar7 = 8;
        break;
      default:
        pcVar5 = ", Unknown Architecture";
        uVar7 = 0x16;
        break;
      case 5:
        pcVar5 = ", ARM";
        uVar7 = 5;
        break;
      case 9:
        pcVar5 = ", 64-bit";
        uVar7 = 8;
        break;
      case 0xc:
        pcVar5 = ", ARM64";
        uVar7 = 7;
      }
      func_0x0046a880(pcVar5,uVar7);
      FUN_00469c30(auStack_2c);
      uVar7 = 1;
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < auStack_2c[5]) {
        func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
      }
      auStack_2c[4] = 0;
      auStack_2c[5] = 0xf;
      auStack_2c[0] = auStack_2c[0] & 0xffffff00;
      goto LAB_00817ec7;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_8 = 0;
  uVar7 = 1;
LAB_00817ec7:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar6,uVar7);
  return;
}



void FUN_00817f30(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStackY_514c;
  uint uStackY_5148;
  uint uStackY_5144;
  uint uStackY_5140;
  uint uStackY_513c;
  undefined4 uStackY_5138;
  uint uStackY_5134;
  undefined4 uStackY_5130;
  undefined4 uStackY_512c;
  int aiStackY_5128 [5175];
  undefined4 uStackY_4c;
  undefined4 uStack_28;
  uint *puStack_24;
  uint *puStack_20;
  uint uStack_1c;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d022;
  iStack_10 = *unaff_FS_OFFSET;
  func_0x00e87f70();
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_8 = 0;
  puStack_20 = &uStackY_512c;
  puStack_24 = (uint *)aiStackY_5128;
  uStackY_5130 = 1;
  uStackY_512c = 0x5100;
  uStack_28 = (uint *)0x817fc5;
  iVar2 = GetAdaptersInfo();
  if (iVar2 == 0) {
    piVar4 = aiStackY_5128;
    do {
      puStack_20 = (uint *)(uint)*(byte *)((int)piVar4 + 0x19b);
      puStack_24 = (uint *)(uint)*(byte *)((int)piVar4 + 0x19a);
      uStack_28 = (uint *)(uint)*(byte *)((int)piVar4 + 0x199);
      uStackY_4c = 0x818030;
      sprintf_s((char *)&uStack_28,0x14,"%02x%02x%02x%02x%02x%02x%02x%02x");
      uStackY_5138 = 0;
      pcVar3 = (char *)&uStack_28;
      uStackY_5134 = 0;
      uStackY_5148 = 0;
      uStackY_5144 = 0;
      uStackY_5140 = 0;
      uStackY_513c = 0;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      puStack_20 = (uint *)((int)pcVar3 - ((int)&uStack_28 + 1));
      puStack_24 = &uStack_28;
      uStack_28 = (uint *)0x818070;
      func_0x0046bc40();
      uStack_8 = 1;
      puStack_24 = (uint *)param_1[1];
      if (puStack_24 == (uint *)param_1[2]) {
        puStack_20 = &uStackY_5148;
        uStack_28 = (uint *)0x8180c7;
        func_0x005aedd0();
      }
      else {
        *puStack_24 = uStackY_5148;
        puStack_24[1] = uStackY_5144;
        puStack_24[2] = uStackY_5140;
        puStack_24[3] = uStackY_513c;
        *(ulonglong *)(puStack_24 + 4) = CONCAT44(uStackY_5134,uStackY_5138);
        uStackY_5134 = 0xf;
        param_1[1] = param_1[1] + 0x18;
        uStackY_5138 = 0;
        uStackY_5148 = uStackY_5148 & 0xffffff00;
      }
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < uStackY_5134) {
        puStack_24 = (uint *)uStackY_5148;
        uStack_28 = &uStackY_5148;
        puStack_20 = (uint *)uStackY_5134;
        func_0x0046b1f0();
      }
      piVar4 = (int *)*piVar4;
      uStackY_5138 = 0;
      uStackY_5134 = 0xf;
      uStackY_5148 = uStackY_5148 & 0xffffff00;
    } while (piVar4 != (int *)0x0);
    uStack_28 = (uint *)param_1[1];
    puStack_24 = (uint *)(((int)uStack_28 - *param_1 >> 3) * -0x55555555);
    puStackY_514c = (undefined4 *)((uint)puStackY_514c & 0xffffff00);
    puStack_20 = puStackY_514c;
    func_0x008190f0();
  }
  uStackY_5130 = 0;
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00818170(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *unaff_FS_OFFSET;
  DWORD DStack_38;
  CHAR aCStack_34 [29];
  undefined1 uStack_17;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d06e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DStack_38 = 0x1d;
  uStack_14 = uVar2;
  GetUserNameA(aCStack_34,&DStack_38);
  uStack_17 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pcVar3 = aCStack_34;
  param_1[4] = 0;
  param_1[5] = 0;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(aCStack_34,(int)pcVar3 - (int)(aCStack_34 + 1),uVar2);
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00818810(HWND param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 ****ppppuVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  undefined4 ***pppuStack_6c;
  undefined4 *puStack_68;
  undefined1 uStack_61;
  undefined4 ***pppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_4c;
  CHAR aCStack_48 [49];
  undefined1 uStack_17;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d1da;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_74 = param_2;
  if ((*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463bc0) &&
     (func_0x008ab40d(&DAT_01463bc0,uStack_14), DAT_01463bc0 == -1)) {
    iStack_8 = 0;
    _DAT_01463ba4 = 0;
    DAT_01463bac = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    func_0x0046bc40("Default IME",0xb);
    iStack_8._0_1_ = 1;
    uStack_7c = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x0046bc40("MSCTFIME UI",0xb);
    iStack_8._0_1_ = 2;
    func_0x005b96e0(&uStack_a4,&uStack_74,&uStack_61);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x008ab4ad(&uStack_a4,0x18,2,FUN_00469ba0);
    func_0x008ab7fd(FUN_00f74590);
    iStack_8 = 0xffffffff;
    func_0x008ab3bc(&DAT_01463bc0);
  }
  GetWindowTextA(param_1,aCStack_48,0x32);
  uStack_17 = 0;
  pcVar5 = aCStack_48;
  uStack_50 = 0;
  pppuStack_60 = (undefined4 ****)0x0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(aCStack_48,(int)pcVar5 - (int)(aCStack_48 + 1));
  iStack_8 = 3;
  if (uStack_50 < 2) {
    iStack_8 = 0xffffffff;
    if (0xf < uStack_4c) {
      uVar6 = uStack_4c + 1;
      ppppuVar7 = (undefined4 ****)pppuStack_60;
      if (0xfff < uVar6) {
        ppppuVar7 = (undefined4 ****)pppuStack_60[-1];
        iVar3 = (int)pppuStack_60 - (int)ppppuVar7;
joined_r0x008189f0:
        uVar6 = uStack_4c + 0x24;
        if (0x1f < iVar3 - 4U) {
          iStack_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_008188ea:
      iStack_8 = 0xffffffff;
      func_0x008ab812(ppppuVar7,uVar6);
    }
  }
  else {
    puStack_70 = DAT_01463ba8;
    uVar6 = uStack_50;
    puVar8 = DAT_01463ba4;
    if (DAT_01463ba4 != DAT_01463ba8) {
      do {
        uVar2 = puVar8[4];
        puStack_68 = puVar8;
        if (0xf < (uint)puVar8[5]) {
          puStack_68 = (undefined4 *)*puVar8;
        }
        pppuStack_6c = &pppuStack_60;
        if (0xf < uStack_4c) {
          pppuStack_6c = pppuStack_60;
        }
        if ((uVar2 <= uVar6) &&
           ((uVar2 == 0 ||
            ((iVar3 = uVar6 + (int)pppuStack_6c,
             iVar4 = func_0x00e727d0(pppuStack_6c,iVar3,puStack_68,uVar2), uVar6 = uStack_50,
             iVar4 != iVar3 && (iVar4 - (int)pppuStack_6c != -1)))))) {
          iStack_8 = 0xffffffff;
          if (uStack_4c < 0x10) goto LAB_0081898d;
          uVar6 = uStack_4c + 1;
          ppppuVar7 = (undefined4 ****)pppuStack_60;
          if (uVar6 < 0x1000) goto LAB_008188ea;
          ppppuVar7 = (undefined4 ****)pppuStack_60[-1];
          iVar3 = (int)pppuStack_60 - (int)ppppuVar7;
          goto joined_r0x008189f0;
        }
        puVar8 = puVar8 + 6;
      } while (puVar8 != puStack_70);
    }
    func_0x0056d1b0(&pppuStack_60);
    iStack_8 = 0xffffffff;
    if (0xf < uStack_4c) {
      func_0x0046b1f0(&pppuStack_60,pppuStack_60,uStack_4c);
    }
  }
LAB_0081898d:
  uStack_50 = 0;
  uStack_4c = 0xf;
  pppuStack_60 = (undefined4 ***)((uint)pppuStack_60 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00818c00(int param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede2e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x18),uVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00818c90(void)

{
  return &`public:_bool___thiscall_Platform::openDir(class_std::basic_string<>,bool)'::__l7::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00818ca0(void)

{
  uint uVar1;
  LPCWSTR lpParameters;
  int *unaff_FS_OFFSET;
  undefined4 auStack_28 [5];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d26d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  lpParameters = (LPCWSTR)func_0x0083c690(uVar1);
  uStack_8 = 0;
  if (7 < *(uint *)(lpParameters + 10)) {
    lpParameters = *(LPCWSTR *)lpParameters;
  }
  ShellExecuteW((HWND)0x0,L"open",L"explorer.exe",lpParameters,(LPCWSTR)0x0,1);
  uStack_8 = 0xffffffff;
  if (7 < uStack_14) {
    func_0x005895e0(auStack_28,auStack_28[0],uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00818d40(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_00818dd0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede598;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



TypeDescriptor * FUN_00818e30(void)

{
  return &`public:_bool___thiscall_Platform::openUrl(class_std::basic_string<>,bool)'::__l7::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00818e40(void)

{
  uint uVar1;
  LPCWSTR lpFile;
  int *unaff_FS_OFFSET;
  undefined4 auStack_28 [5];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d26d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  lpFile = (LPCWSTR)func_0x0083c690(uVar1);
  uStack_8 = 0;
  if (7 < *(uint *)(lpFile + 10)) {
    lpFile = *(LPCWSTR *)lpFile;
  }
  ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
  uStack_8 = 0xffffffff;
  if (7 < uStack_14) {
    func_0x005895e0(auStack_28,auStack_28[0],uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00818ee0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_00818f70(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede598;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_00819e10(void)

{
  return;
}



void FUN_00819e20(undefined4 param_1)

{
  uint in_stack_00000018;
  
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_1,param_1,in_stack_00000018);
  }
  return;
}



void __fastcall FUN_0081acf0(int param_1)

{
  HMODULE pHVar1;
  MMRESULT MVar2;
  timecaps_tag tStack_14;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&tStack_14;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  *(HMODULE *)(param_1 + 0x140) = pHVar1;
  MVar2 = timeGetDevCaps(&tStack_14,8);
  if (MVar2 == 0) {
    if (tStack_14.wPeriodMin == 0) {
      tStack_14.wPeriodMin = 1;
    }
    if (tStack_14.wPeriodMax < tStack_14.wPeriodMin) {
      tStack_14.wPeriodMin = tStack_14.wPeriodMax;
    }
    *(UINT *)(param_1 + 0x150) = tStack_14.wPeriodMin;
    timeBeginPeriod(tStack_14.wPeriodMin);
  }
  func_0x0081b040();
  func_0x0081b380();
  func_0x0081b9e0();
  FUN_008ab370();
  return;
}



void __fastcall FUN_0081ad70(int param_1)

{
  uint uVar1;
  int iVar2;
  LPCSTR lpClassName;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d4bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_18 = param_1;
  SetCursor((HCURSOR)0x0);
  if (*(HCURSOR *)(param_1 + 0x14c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)(param_1 + 0x14c));
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x134);
  for (puVar3 = *(undefined4 **)(param_1 + 0x130); puVar3 != puVar4; puVar3 = puVar3 + 1) {
    DestroyCursor((HCURSOR)*puVar3);
    param_1 = iStack_18;
  }
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x134)) {
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x130);
  }
  iVar2 = *(int *)(param_1 + 0x160);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x15c) != 0) {
      func_0x0087ed70(iVar2,*(int *)(param_1 + 0x15c),uVar1);
      iVar2 = *(int *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    if (*(int *)(param_1 + 0x164) != 0) {
      func_0x0087ed80(iVar2,*(int *)(param_1 + 0x164));
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    func_0x0087ee10(*(undefined4 *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if (*(HDC *)(param_1 + 0x144) != (HDC)0x0) {
    uVar1 = ReleaseDC(*(HWND *)(param_1 + 0x13c),*(HDC *)(param_1 + 0x144));
    if (uVar1 == 0) {
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = uVar1;
      uStack_1c = uVar1;
      func_0x0046bc40("Release device context failed.",0x1e);
      uStack_8 = 0;
      FUN_005ee340(3,&uStack_30);
      uStack_8 = 0xffffffff;
      if (0xf < uStack_1c) {
        func_0x0046b1f0(&uStack_30,uStack_30,uStack_1c);
      }
      uStack_20 = 0;
      uStack_1c = 0xf;
      uStack_30 = uStack_30 & 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(HWND *)(param_1 + 0x13c) != (HWND)0x0) {
    uVar1 = DestroyWindow(*(HWND *)(param_1 + 0x13c));
    if (uVar1 == 0) {
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = uVar1;
      uStack_1c = uVar1;
      func_0x0046bc40("ERROR: Destroy window failed.",0x1d);
      uStack_8 = 1;
      FUN_005ee340(3,&uStack_30);
      uStack_8 = 0xffffffff;
      if (0xf < uStack_1c) {
        func_0x0046b1f0(&uStack_30,uStack_30,uStack_1c);
      }
      uStack_20 = 0;
      uStack_1c = 0xf;
      uStack_30 = uStack_30 & 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  puVar4 = (undefined4 *)(param_1 + 0x140);
  if (*(HINSTANCE *)(param_1 + 0x140) != (HINSTANCE)0x0) {
    lpClassName = (LPCSTR)&DAT_0145dc24;
    if (0xf < DAT_0145dc38) {
      lpClassName = DAT_0145dc24;
    }
    puStack_14 = (undefined4 *)(param_1 + 0x140);
    uVar1 = UnregisterClassA(lpClassName,*(HINSTANCE *)(param_1 + 0x140));
    if (uVar1 == 0) {
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = uVar1;
      uStack_1c = uVar1;
      func_0x0046bc40("UnregisterClassA failed",0x17);
      uStack_8 = 2;
      FUN_005ee340(3,&uStack_30);
      uStack_8 = 0xffffffff;
      if (0xf < uStack_1c) {
        func_0x0046b1f0(&uStack_30,uStack_30,uStack_1c);
        puVar4 = puStack_14;
      }
      uStack_20 = 0;
      uStack_1c = 0xf;
      uStack_30 = uStack_30 & 0xffffff00;
    }
    *puVar4 = 0;
  }
  if (*(UINT *)(param_1 + 0x150) != 0) {
    timeEndPeriod(*(UINT *)(param_1 + 0x150));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT FUN_0081b030(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  LRESULT LVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_90;
  code *pcStack_8c;
  uint uStack_88;
  WPARAM WStack_84;
  uint uStack_80;
  HWND pHStack_7c;
  undefined4 *puStack_78;
  undefined ***pppuStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  uint auStack_54 [7];
  int iStack_38;
  uint uStack_34;
  HWND pHStack_30;
  int *piStack_2c;
  uint uStack_28;
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f2d6e5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pHStack_30 = param_1;
  uStack_28 = param_4;
  uStack_88 = param_4;
  WStack_84 = param_3;
  pppuStack_6c = &ppuStack_90;
  ppuStack_90 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_8c = FUN_0081cc30;
  uStack_80 = param_2;
  pHStack_7c = param_1;
  puStack_78 = &DAT_0145ea60;
  uStack_14 = 1;
  auStack_54[4] = 0;
  auStack_54[0] = 0;
  auStack_54[1] = 0;
  auStack_54[2] = 0;
  auStack_54[3] = 0;
  auStack_54[5] = 0;
  func_0x0046bc40("WIN32Window::windowProc",0x17,uVar4);
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  FUN_005e5070(&iStack_5c,auStack_54,&ppuStack_90,0);
  piStack_2c = piStack_58;
  if (piStack_58 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_58[1] + -1;
    piStack_58[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_58;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_2c[2] + -1;
      piStack_2c[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_2c + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  if (0xf < auStack_54[5]) {
    func_0x0046b1f0(auStack_54,auStack_54[0],auStack_54[5]);
  }
  auStack_54[4] = 0;
  auStack_54[5] = 0xf;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  uStack_14 = 0xffffffff;
  if (pppuStack_6c != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_6c)[4];
    _guard_check_icall(pppuStack_6c != &ppuStack_90);
    (*pcVar1)();
    pppuStack_6c = (undefined ***)0x0;
  }
  if (param_2 < 0x11) {
    if (param_2 != 0x10) {
      switch(param_2) {
      case 3:
      case 6:
      case 7:
      case 8:
        break;
      default:
        goto LAB_0081cac5;
      case 5:
        cStack_21 = '\0';
        if (param_3 == 0) {
          uRam0145eb0d = 0;
code_r0x0081c941:
          DAT_0145eb0a = '\x01';
          cStack_21 = '\x01';
        }
        else if (param_3 == 1) {
          DAT_0145eb0a = '\0';
        }
        else if (param_3 == 2) {
          uRam0145eb0d = 1;
          goto code_r0x0081c941;
        }
        if ((DAT_0145eb0a != '\0') && (_DAT_0145eba4 != 0)) {
          func_0x0081b9e0();
        }
        uVar6 = uStack_28 & 0xffff;
        uVar4 = uStack_28 >> 0x10;
        if (0x1e00 < uVar6) {
          uVar6 = 0x1e00;
        }
        if (uVar6 < 0x20) {
          uVar6 = 0x20;
        }
        if (0x10e0 < uVar4) {
          uVar4 = 0x10e0;
        }
        if (uVar4 < 0x20) {
          uVar4 = 0x20;
        }
        if ((DAT_0145eb0a != '\0') &&
           ((uStack_34 = uVar6, pHStack_30 = (HWND)uVar4, cStack_21 != '\0' ||
            (cVar3 = func_0x00584680(&uStack_34), cVar3 != '\0')))) {
          DAT_0145ea98 = uVar6;
          DAT_0145ea9c = uVar4;
          func_0x007f4ed0(&DAT_0145ea98);
          LVar5 = 0;
          goto LAB_0081cad6;
        }
      }
    }
LAB_0081cac1:
    LVar5 = 0;
  }
  else {
    if (0x200 < param_2) {
      switch(param_2) {
      case 0x201:
      case 0x204:
      case 0x207:
        SetCapture(DAT_0145eb9c);
        LVar5 = 0;
        goto LAB_0081cad6;
      case 0x202:
      case 0x205:
      case 0x208:
        SetCapture((HWND)0x0);
        break;
      default:
        goto LAB_0081cac5;
      case 0x20a:
        break;
      }
      goto LAB_0081cac1;
    }
    if (param_2 == 0x200) goto LAB_0081cac1;
    switch(param_2) {
    case 0x20:
      if (_DAT_0145eba8 != (HCURSOR)0x0) {
        SetCursor(_DAT_0145eba8);
        LVar5 = 0;
        goto LAB_0081cad6;
      }
    default:
LAB_0081cac5:
      break;
    case 0x24:
      iStack_5c = DAT_0145eaa0 + -1;
      uStack_64 = 0;
      piStack_58 = (int *)(DAT_0145eaa4 + -1);
      uStack_60 = 0;
      func_0x0081e450(auStack_54 + 6,&uStack_64);
      *(uint *)(uStack_28 + 0x18) = (uStack_34 - auStack_54[6]) + 1;
      *(int *)(uStack_28 + 0x1c) = (int)pHStack_30 + (1 - iStack_38);
      LVar5 = 0;
      goto LAB_0081cad6;
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x105:
      goto LAB_0081cac1;
    case 0x104:
      if ((param_3 != 0x73) || ((DAT_0145eae8 & 2) == 0)) goto LAB_0081cac1;
      param_3 = 0x73;
    }
    LVar5 = DefWindowProcA(pHStack_30,param_2,param_3,uStack_28);
  }
LAB_0081cad6:
  *unaff_FS_OFFSET = iStack_1c;
  return LVar5;
}



void FUN_0081bb10(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int aiStack_60 [9];
  int *piStack_3c;
  uint auStack_38 [6];
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2d62d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_3c = (int *)0x0;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uStack_8 = 0;
  piStack_3c = (int *)func_0x008ab47d(0x10,uVar4);
  *piStack_3c = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_3c[1] = iVar1;
  piStack_3c[2] = iVar2;
  piStack_3c[3] = iStack_14;
  uStack_18 = 0;
  uStack_8 = 2;
  auStack_38[4] = 0;
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  auStack_38[2] = 0;
  auStack_38[3] = 0;
  auStack_38[5] = 0;
  func_0x0046bc40("WIN32Window::move",0x11);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  FUN_005e5070(auStack_20,auStack_38,aiStack_60,0);
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar1 = piStack_1c[1] + -1;
    piStack_1c[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_1c;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar1 = piStack_1c[2] + -1;
      piStack_1c[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piStack_1c + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < auStack_38[5]) {
    func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
  }
  auStack_38[4] = 0;
  auStack_38[5] = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (piStack_3c != (int *)0x0) {
    pcVar3 = *(code **)(*piStack_3c + 0x10);
    _guard_check_icall(piStack_3c != aiStack_60);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081bc80(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int aiStack_60 [9];
  int *piStack_3c;
  uint auStack_38 [6];
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2d62d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_3c = (int *)0x0;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uStack_8 = 0;
  piStack_3c = (int *)func_0x008ab47d(0x10,uVar4);
  *piStack_3c = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_3c[1] = iVar1;
  piStack_3c[2] = iVar2;
  piStack_3c[3] = iStack_14;
  uStack_18 = 0;
  uStack_8 = 2;
  auStack_38[4] = 0;
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  auStack_38[2] = 0;
  auStack_38[3] = 0;
  auStack_38[5] = 0;
  func_0x0046bc40("WIN32Window::resize",0x13);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  FUN_005e5070(auStack_20,auStack_38,aiStack_60,0);
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar1 = piStack_1c[1] + -1;
    piStack_1c[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_1c;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar1 = piStack_1c[2] + -1;
      piStack_1c[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piStack_1c + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < auStack_38[5]) {
    func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
  }
  auStack_38[4] = 0;
  auStack_38[5] = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (piStack_3c != (int *)0x0) {
    pcVar3 = *(code **)(*piStack_3c + 0x10);
    _guard_check_icall(piStack_3c != aiStack_60);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081bdf0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_58;
  appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("WIN32Window::show",0x11,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_18,auStack_30,appuStack_58,0);
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_14[1] + -1;
    piStack_14[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_14[2] + -1;
      piStack_14[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
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
    _guard_check_icall(pppuStack_34 != appuStack_58);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081bf30(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_58;
  appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("WIN32Window::hide",0x11,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_18,auStack_30,appuStack_58,0);
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_14[1] + -1;
    piStack_14[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_14[2] + -1;
      piStack_14[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
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
    _guard_check_icall(pppuStack_34 != appuStack_58);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081c070(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_58;
  appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("WIN32Window::maximize",0x15,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_18,auStack_30,appuStack_58,0);
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_14[1] + -1;
    piStack_14[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_14[2] + -1;
      piStack_14[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
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
    _guard_check_icall(pppuStack_34 != appuStack_58);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081c1b0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_58;
  appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("WIN32Window::minimize",0x15,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_18,auStack_30,appuStack_58,0);
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_14[1] + -1;
    piStack_14[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_14[2] + -1;
      piStack_14[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
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
    _guard_check_icall(pppuStack_34 != appuStack_58);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081c2f0(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int *unaff_FS_OFFSET;
  longlong lVar4;
  undefined **appuStack_a8 [9];
  undefined ***pppuStack_84;
  undefined1 auStack_80 [4];
  int *piStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  tagMSG tStack_48;
  undefined4 uStack_2c;
  longlong *plStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d696;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_50 = 0;
  uStack_1c = 0;
  uStack_2c = 0;
  plStack_28 = (longlong *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_4c = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x0046bc40(&DAT_0112e1b4,0,uStack_14);
  uStack_8 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  func_0x0046bc40("PollWindow",10);
  uStack_8._0_1_ = 1;
  func_0x0046eee0(2,&uStack_78,&uStack_60);
  uStack_8._0_1_ = 3;
  if (0xf < uStack_64) {
    func_0x0046b1f0(&uStack_78,uStack_78,uStack_64);
  }
  uStack_68 = 0;
  uStack_64 = 0xf;
  uStack_78 = uStack_78 & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  if (0xf < uStack_4c) {
    func_0x0046b1f0(&uStack_60,uStack_60,uStack_4c);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  uStack_60 = uStack_60 & 0xffffff00;
  iVar2 = PeekMessageA(&tStack_48,(HWND)0x0,0,0,1);
  while (iVar2 != 0) {
    TranslateMessage(&tStack_48);
    DispatchMessageA(&tStack_48);
    iVar2 = PeekMessageA(&tStack_48,(HWND)0x0,0,0,1);
  }
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  pppuStack_84 = appuStack_a8;
  appuStack_a8[0] = std::_Func_impl_no_alloc<>::vftable;
  uStack_8._0_1_ = 6;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  func_0x0046bc40("WIN32Window::poll",0x11);
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  FUN_005e5070(auStack_80,&uStack_60,appuStack_a8,0);
  if (piStack_7c != (int *)0x0) {
    LOCK();
    iVar2 = piStack_7c[1] + -1;
    piStack_7c[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_7c;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_7c[2] + -1;
      piStack_7c[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_7c + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8._0_1_ = 6;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(&uStack_60,uStack_60,uStack_4c);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  uStack_60 = uStack_60 & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  if (pppuStack_84 != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_84)[4];
    _guard_check_icall(CONCAT31((int3)((uint)appuStack_a8 >> 8),pppuStack_84 != appuStack_a8));
    (*pcVar1)();
    pppuStack_84 = (undefined ***)0x0;
  }
  uStack_8 = 0xffffffff;
  puVar3 = (uint *)func_0x0046ede0(auStack_80);
  lVar4 = func_0x00e87ec0(*puVar3 - (uint)uStack_1c,
                          (puVar3[1] - uStack_1c._4_4_) - (uint)(*puVar3 < (uint)uStack_1c),1000,0);
  *plStack_28 = lVar4 - CONCAT44(uStack_20,uStack_24);
  func_0x00873e90(uStack_2c,plStack_28);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_0081cc30(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  SHORT SVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  SVar3 = GetKeyState(0x11);
  if ((char)SVar3 < '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
  SVar3 = GetKeyState(0x10);
  if ((char)SVar3 < '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 4;
  }
  SVar3 = GetKeyState(0x12);
  if ((char)SVar3 < '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
  }
  if (param_3 < 0x11) {
    if (param_3 != 0x10) {
      switch(param_3) {
      case 3:
        *(int *)(param_1 + 0x48) = (int)(short)param_5;
        *(int *)(param_1 + 0x4c) = (int)(short)(param_5 >> 0x10);
        FUN_00814890();
        return 0;
      default:
        return 0;
      case 5:
      case 7:
      case 8:
        goto LAB_0081ccad;
      case 6:
        *(bool *)(param_1 + 0xab) = param_4 != 0;
LAB_0081ccad:
        FUN_00814890();
        return 0;
      }
    }
    if (*(int **)(param_1 + 0xdc) == (int *)0x0) {
      uVar5 = func_0x00e701bd();
      return uVar5;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0xdc) + 8);
    _guard_check_icall();
    (*pcVar1)();
    return 0;
  }
  if (param_3 < 0x201) {
    if (param_3 == 0x200) {
      func_0x00813e60(7);
      uVar6 = param_5 & 0xffff;
      param_5 = param_5 >> 0x10;
      if (uVar6 < 0x7fff) {
        if (*(int *)(param_1 + 0x38) < (int)uVar6) {
          uVar6 = *(uint *)(param_1 + 0x38);
        }
      }
      else {
        uVar6 = 0;
      }
      if (param_5 < 0x7fff) {
        if (*(int *)(param_1 + 0x3c) < (int)param_5) {
          param_5 = *(uint *)(param_1 + 0x3c);
        }
      }
      else {
        param_5 = 0;
      }
      fVar9 = 1.0 / *(float *)(param_1 + 0xb0);
      iVar8 = (int)((float)(int)uVar6 * fVar9);
      iVar7 = (int)((float)(int)param_5 * fVar9);
      *(int *)(param_1 + 0x94) = iVar8 - *(int *)(param_1 + 0x8c);
      *(int *)(param_1 + 0x98) = iVar7 - *(int *)(param_1 + 0x90);
      *(int *)(param_1 + 0x8c) = iVar8;
      *(int *)(param_1 + 0x90) = iVar7;
      iVar7 = *(int *)(param_1 + 300);
    }
    else {
      switch(param_3) {
      case 0x100:
      case 0x104:
        uVar2 = func_0x0081c590(param_4,param_5);
        FUN_00814310(uVar2);
        return 0;
      case 0x101:
      case 0x105:
        uVar2 = func_0x0081c590(param_4,param_5);
        FUN_008145b0(uVar2);
        return 0;
      case 0x102:
        if (0xdf < param_4 - 0x20U) {
          return 0;
        }
        func_0x00813e60(1);
        func_0x0081e730(param_4);
        iVar7 = *(int *)(param_1 + 300);
        break;
      default:
        goto LAB_0081cfda;
      }
    }
  }
  else {
    sVar4 = (short)((uint)param_4 >> 0x10);
    switch(param_3) {
    case 0x201:
      func_0x00813e60(5);
      *(undefined4 *)(param_1 + 0x68) = 1;
      *(undefined1 *)(param_1 + 0xa1) = 1;
      break;
    case 0x202:
      func_0x00813e60(6);
      *(undefined4 *)(param_1 + 0x68) = 1;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      break;
    default:
      goto LAB_0081cfda;
    case 0x204:
      func_0x00813e60(5);
      *(undefined4 *)(param_1 + 0x68) = 2;
      *(undefined1 *)(param_1 + 0xa2) = 1;
      break;
    case 0x205:
      func_0x00813e60(6);
      *(undefined4 *)(param_1 + 0x68) = 2;
      *(undefined1 *)(param_1 + 0xa2) = 0;
      break;
    case 0x207:
      func_0x00813e60(5);
      *(undefined4 *)(param_1 + 0x68) = 3;
      *(undefined1 *)(param_1 + 0xa3) = 1;
      break;
    case 0x208:
      func_0x00813e60(6);
      *(undefined4 *)(param_1 + 0x68) = 3;
      *(undefined1 *)(param_1 + 0xa3) = 0;
      break;
    case 0x20a:
      func_0x00813e60(8);
      *(undefined4 *)(param_1 + 0x68) = 3;
      *(uint *)(param_1 + 100) = (sVar4 < 1) + 1;
      break;
    case 0x20b:
      func_0x00813e60(5);
      if (sVar4 == 1) {
        *(undefined4 *)(param_1 + 0x68) = 7;
        *(char *)(param_1 + 0xa7) = (char)((uint)param_4 >> 0x10);
      }
      else if (sVar4 == 2) {
        *(undefined4 *)(param_1 + 0x68) = 8;
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
      break;
    case 0x20c:
      func_0x00813e60(6);
      if (sVar4 == 1) {
        *(undefined4 *)(param_1 + 0x68) = 7;
        *(undefined1 *)(param_1 + 0xa7) = 0;
      }
      else if (sVar4 == 2) {
        *(undefined4 *)(param_1 + 0x68) = 8;
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
    }
    iVar7 = *(int *)(param_1 + 300);
  }
  if (iVar7 != 0) {
    func_0x007f4ed0(param_1 + 0x60);
  }
LAB_0081cfda:
  return 0;
}



void __fastcall FUN_0081d050(int param_1)

{
  func_0x0087edf0(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164));
  return;
}



void FUN_0081d070(void)

{
  ShowCursor(1);
  return;
}



void FUN_0081d080(void)

{
  ShowCursor(0);
  return;
}



void __fastcall FUN_0081d090(int param_1)

{
  uint uVar1;
  LPCWSTR lpText;
  int *unaff_FS_OFFSET;
  undefined4 auStack_28 [5];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d71d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  lpText = (LPCWSTR)func_0x0083c880(uVar1);
  uStack_8 = 0;
  if (7 < *(uint *)(lpText + 10)) {
    lpText = *(LPCWSTR *)lpText;
  }
  MessageBoxW(*(HWND *)(param_1 + 0x13c),lpText,L"FATAL ERROR",0x40010);
  uStack_8 = 0xffffffff;
  if (7 < uStack_14) {
    func_0x005895e0(auStack_28,auStack_28[0],uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0081d130(int param_1,int *param_2,HCURSOR param_3)

{
  undefined2 *puVar1;
  int nWidth;
  int nHeight;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  HCURSOR pHStack_34;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined8 uStack_2c;
  int iStack_24;
  undefined8 uStack_20;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d755;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pHStack_34 = param_3;
  uStack_2d = 0;
  nWidth = *(int *)(*param_2 + 0x14);
  nHeight = *(int *)(*param_2 + 0x18);
  iVar6 = nHeight * nWidth;
  uStack_2c = 0;
  iStack_24 = 0;
  iVar4 = (int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3;
  func_0x005e72c0(iVar4,&uStack_2d,&uStack_2e,uStack_14);
  uStack_8 = 0;
  iStack_18 = 0;
  uStack_2d = 0;
  uStack_20 = 0;
  func_0x005e72c0(iVar4,&uStack_2d,&uStack_2e);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar3 = 0;
  if (0 < iVar6) {
    do {
      puVar1 = (undefined2 *)(*(int *)(*param_2 + 8) + uVar3 * 4);
      iVar4 = CONCAT22(CONCAT11(*(undefined1 *)(*(int *)(*param_2 + 8) + 3 + uVar3 * 4),
                                *(undefined1 *)(puVar1 + 1)),*puVar1);
      if (iVar4 == -1) {
        pbVar5 = (byte *)((uVar3 >> 3) + (int)(void *)uStack_20);
LAB_0081d235:
        *pbVar5 = *pbVar5 | (byte)(0x80 >> ((byte)uVar3 & 7));
      }
      else if (iVar4 == 0) {
        pbVar5 = (byte *)((uVar3 >> 3) + (int)(void *)uStack_2c);
        goto LAB_0081d235;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar6);
  }
  pHStack_34 = CreateCursor(*(HINSTANCE *)(param_1 + 0x140),pHStack_34->unused,pHStack_34[1].unused,
                            nWidth,nHeight,(void *)uStack_2c,(void *)uStack_20);
  puVar2 = *(undefined4 **)(param_1 + 0x134);
  if (puVar2 == *(undefined4 **)(param_1 + 0x138)) {
    func_0x0057ca40(puVar2,&pHStack_34);
  }
  else {
    *puVar2 = pHStack_34;
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 4;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if ((void *)uStack_20 != (void *)0x0) {
    func_0x0046aa00((void *)uStack_20,iStack_18 - (int)(void *)uStack_20);
    uStack_20 = 0;
    iStack_18 = 0;
  }
  uStack_8 = 0xffffffff;
  if ((void *)uStack_2c != (void *)0x0) {
    func_0x0046aa00((void *)uStack_2c,iStack_24 - (int)(void *)uStack_2c);
    uStack_2c = 0;
    iStack_24 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0081d330(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_1;
  pppuStack_34 = &ppuStack_58;
  ppuStack_58 = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("WIN32Window::setMouseCursor",0x1b,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_18,auStack_30,&ppuStack_58,0);
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_14[1] + -1;
    piStack_14[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_14[2] + -1;
      piStack_14[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
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
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081d480(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **appuStack_58 [9];
  undefined ***pppuStack_34;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed1525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_58;
  appuStack_58[0] = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("WIN32Window::restoreMouseCursor",0x1f,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_18,auStack_30,appuStack_58,0);
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_14[1] + -1;
    piStack_14[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_14[2] + -1;
      piStack_14[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
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
    _guard_check_icall(pppuStack_34 != appuStack_58);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081d5c0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int aiStack_80 [9];
  int *piStack_5c;
  undefined1 auStack_58 [4];
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 auStack_48 [5];
  uint uStack_34;
  int iStack_30;
  uint auStack_2c [6];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d7d8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1,uVar3);
  piStack_5c = (int *)0x0;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  piVar4 = (int *)func_0x008ab47d(0x20);
  uStack_8._0_1_ = 3;
  piStack_50 = piVar4 + 1;
  *piVar4 = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_4c = piVar4;
  piStack_14 = piVar4;
  func_0x00469da0(auStack_48);
  piVar4[7] = iStack_30;
  piStack_14 = (int *)0x0;
  uStack_8._0_1_ = 6;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_2c[5] = 0;
  piStack_5c = piVar4;
  func_0x0046bc40("WIN32Window::setTitle",0x15);
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  FUN_005e5070(auStack_58,auStack_2c,aiStack_80,0);
  if (piStack_54 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_54[1] + -1;
    piStack_54[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_54;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_54[2] + -1;
      piStack_54[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_54 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8._0_1_ = 6;
  if (0xf < auStack_2c[5]) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_5c != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_5c + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_80 >> 8),piStack_5c != aiStack_80));
    (*pcVar1)();
    piStack_5c = (int *)0x0;
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_34) {
    func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081d780(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int aiStack_60 [9];
  int *piStack_3c;
  uint auStack_38 [6];
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2d62d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_3c = (int *)0x0;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uStack_8 = 0;
  piStack_3c = (int *)func_0x008ab47d(0x10,uVar4);
  *piStack_3c = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_3c[1] = iVar1;
  piStack_3c[2] = iVar2;
  piStack_3c[3] = iStack_14;
  uStack_18 = 0;
  uStack_8 = 2;
  auStack_38[4] = 0;
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  auStack_38[2] = 0;
  auStack_38[3] = 0;
  auStack_38[5] = 0;
  func_0x0046bc40("WIN32Window::setMinimumSize",0x1b);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  FUN_005e5070(auStack_20,auStack_38,aiStack_60,0);
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar1 = piStack_1c[1] + -1;
    piStack_1c[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_1c;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar1 = piStack_1c[2] + -1;
      piStack_1c[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piStack_1c + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < auStack_38[5]) {
    func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
  }
  auStack_38[4] = 0;
  auStack_38[5] = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (piStack_3c != (int *)0x0) {
    pcVar3 = *(code **)(*piStack_3c + 0x10);
    _guard_check_icall(piStack_3c != aiStack_60);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081d8f0(undefined1 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined ***pppuStack_3c;
  uint auStack_38 [6];
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2d825;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = CONCAT31(uStack_18._1_3_,param_1);
  uStack_5c = uStack_18;
  pppuStack_3c = &ppuStack_60;
  ppuStack_60 = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_38[4] = 0;
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  auStack_38[2] = 0;
  auStack_38[3] = 0;
  auStack_38[5] = 0;
  func_0x0046bc40("WIN32Window::setFullscreen",0x1a,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_20,auStack_38,&ppuStack_60,0);
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
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (0xf < auStack_38[5]) {
    func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
  }
  auStack_38[4] = 0;
  auStack_38[5] = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (pppuStack_3c != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_3c)[4];
    _guard_check_icall(pppuStack_3c != &ppuStack_60);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0081da40(int param_1,undefined1 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined ***pppuStack_3c;
  uint auStack_38 [6];
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2d825;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined1 *)(param_1 + 0xae) = param_2;
  uStack_18 = CONCAT31(uStack_18._1_3_,param_2);
  uStack_5c = uStack_18;
  pppuStack_3c = &ppuStack_60;
  ppuStack_60 = std::_Func_impl_no_alloc<>::vftable;
  uStack_8 = 1;
  auStack_38[4] = 0;
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  auStack_38[2] = 0;
  auStack_38[3] = 0;
  auStack_38[5] = 0;
  iStack_58 = param_1;
  func_0x0046bc40("WIN32Window::setVerticalSync",0x1c,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FUN_005e5070(auStack_20,auStack_38,&ppuStack_60,0);
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
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (0xf < auStack_38[5]) {
    func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
  }
  auStack_38[4] = 0;
  auStack_38[5] = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (pppuStack_3c != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_3c)[4];
    _guard_check_icall(pppuStack_3c != &ppuStack_60);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0081db90(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int aiStack_80 [9];
  int *piStack_5c;
  undefined1 auStack_58 [4];
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 auStack_48 [5];
  uint uStack_34;
  int iStack_30;
  uint auStack_2c [6];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d7d8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1,uVar3);
  piStack_5c = (int *)0x0;
  uStack_8._0_1_ = 2;
  uStack_8._1_3_ = 0;
  piVar4 = (int *)func_0x008ab47d(0x20);
  uStack_8._0_1_ = 3;
  piStack_50 = piVar4 + 1;
  *piVar4 = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_4c = piVar4;
  piStack_14 = piVar4;
  func_0x00469da0(auStack_48);
  piVar4[7] = iStack_30;
  piStack_14 = (int *)0x0;
  uStack_8._0_1_ = 6;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_2c[5] = 0;
  piStack_5c = piVar4;
  func_0x0046bc40("WIN32Window::setIcon",0x14);
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  FUN_005e5070(auStack_58,auStack_2c,aiStack_80,0);
  if (piStack_54 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_54[1] + -1;
    piStack_54[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_54;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_54[2] + -1;
      piStack_54[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_54 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8._0_1_ = 6;
  if (0xf < auStack_2c[5]) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_5c != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_5c + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_80 >> 8),piStack_5c != aiStack_80));
    (*pcVar1)();
    piStack_5c = (int *)0x0;
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_34) {
    func_0x0046b1f0(auStack_48,auStack_48[0],uStack_34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0081e110(int param_1,undefined4 *param_2)

{
  size_t *psVar1;
  BOOL BVar2;
  HGLOBAL hMem;
  LPVOID _Dst;
  
  BVar2 = OpenClipboard(*(HWND *)(param_1 + 0x13c));
  if (BVar2 != 0) {
    psVar1 = param_2 + 4;
    hMem = GlobalAlloc(2,param_2[4] + 1);
    if (hMem != (HGLOBAL)0x0) {
      _Dst = GlobalLock(hMem);
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      memcpy(_Dst,param_2,*psVar1);
      *(undefined1 *)((int)_Dst + *psVar1) = 0;
      GlobalUnlock(hMem);
      EmptyClipboard();
      SetClipboardData(1,hMem);
      CloseClipboard();
    }
  }
  return;
}



int * FUN_0081e190(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetSystemMetrics(1);
  iVar2 = GetSystemMetrics(0);
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return param_1;
}



int * __thiscall FUN_0081e1c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  uint auStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  HANDLE pvStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f2d8e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  uStack_8 = 0;
  uStack_14 = 1;
  BVar4 = OpenClipboard(*(HWND *)(param_1 + 0x13c));
  if (BVar4 != 0) {
    pvStack_18 = GetClipboardData(1);
    if ((pvStack_18 != (HANDLE)0x0) && (pvVar5 = GlobalLock(pvStack_18), pvVar5 != (LPVOID)0x0)) {
      piVar6 = (int *)func_0x00469d30(pvVar5,uVar3);
      uStack_8 = 1;
      if (param_2 != piVar6) {
        uVar3 = param_2[5];
        if (0xf < uVar3) {
          iVar1 = *param_2;
          uVar8 = uVar3 + 1;
          iVar7 = iVar1;
          if (0xfff < uVar8) {
            iVar7 = *(int *)(iVar1 + -4);
            uVar8 = uVar3 + 0x24;
            if (0x1f < (iVar1 - iVar7) - 4U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          func_0x008ab812(iVar7,uVar8);
        }
        param_2[4] = 0;
        param_2[5] = 0xf;
        *(undefined1 *)param_2 = 0;
        iVar1 = piVar6[1];
        iVar7 = piVar6[2];
        iVar2 = piVar6[3];
        *param_2 = *piVar6;
        param_2[1] = iVar1;
        param_2[2] = iVar7;
        param_2[3] = iVar2;
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar6 + 4);
        piVar6[4] = 0;
        piVar6[5] = 0xf;
        *(undefined1 *)piVar6 = 0;
      }
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < uStack_1c) {
        func_0x0046b1f0(auStack_30,auStack_30[0],uStack_1c);
      }
      uStack_20 = 0;
      uStack_1c = 0xf;
      auStack_30[0] = auStack_30[0] & 0xffffff00;
      GlobalUnlock(pvStack_18);
    }
    CloseClipboard();
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * FUN_0081e340(undefined4 *param_1)

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
  func_0x0046bc40("WIN32-EGL",9,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0081e600(int param_1)

{
  FLASHWINFO FStack_1c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  FStack_1c.hwnd = *(HWND *)(param_1 + 0x13c);
  FStack_1c.cbSize = 0x14;
  FStack_1c.dwFlags = 0xe;
  FStack_1c.uCount = 0;
  FStack_1c.dwTimeout = 1000;
  FlashWindowEx(&FStack_1c);
  FUN_008ab370();
  return;
}



void __thiscall FUN_0081e7c0(int param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede2e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x18),uVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0081e850(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::setIcon(class_std::basic_string<>_const&)'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}



// WARNING: Removing unreachable block (ram,0x0081ded2)
// WARNING: Removing unreachable block (ram,0x0081de64)

void __fastcall FUN_0081e860(int param_1)

{
  int *piVar1;
  size_t _Size;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  void *_Dst;
  HDC hdc;
  HICON lParam;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  HBITMAP pHVar9;
  int *unaff_FS_OFFSET;
  uint uStack_64;
  ICONINFO IStack_40;
  HBITMAP pHStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  void *pvStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d895;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  func_0x00469da0();
  iStack_8 = 0xffffffff;
  func_0x00620af0();
  iStack_8 = 1;
  if ((int)uStack_28 == 0) {
    func_0x0046bc40();
    iStack_8._0_1_ = 2;
    uVar5 = func_0x00484eb0();
    iStack_8._0_1_ = 3;
    func_0x0046bc40("??R<lambda_1>@?1??setIcon@WIN32Window@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@QBE@XZ"
                    ,0x74);
    iStack_8._0_1_ = 3;
    func_0x005eea60(3,uVar5);
    iStack_8._0_1_ = 2;
    if (0xf < uStack_64) {
      func_0x0046b1f0();
    }
  }
  else if (*(int *)((int)uStack_28 + 0x1c) == 4) {
    pHVar9 = (HBITMAP)(*(int *)((int)uStack_28 + 0x18) * *(int *)((int)uStack_28 + 0x14));
    uStack_20 = 0;
    pvStack_18 = (void *)0x0;
    if (pHVar9 != (HBITMAP)0x0) {
      if ((HBITMAP)0x3fffffff < pHVar9) {
        func_0x0046e700();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pHStack_2c = pHVar9;
      _Dst = (void *)func_0x0057d790();
      _Size = (int)pHVar9 * 4;
      uStack_20 = CONCAT44(_Dst,_Dst);
      pvStack_18 = (void *)((int)_Dst + _Size);
      iStack_8._0_1_ = 6;
      memset(_Dst,0,_Size);
      uStack_20 = CONCAT44((void *)((int)_Dst + _Size),(void *)uStack_20);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
    }
    iStack_8._0_1_ = 7;
    iVar7 = 0;
    if (0 < (int)pHVar9) {
      iVar8 = 0;
      do {
        puVar6 = (undefined1 *)((int)(void *)uStack_20 + iVar8);
        iVar8 = iVar8 + 4;
        puVar6[2] = *(undefined1 *)(*(int *)((int)uStack_28 + 8) + iVar7 * 4);
        puVar6[1] = *(undefined1 *)(*(int *)((int)uStack_28 + 8) + 1 + iVar7 * 4);
        *puVar6 = *(undefined1 *)(*(int *)((int)uStack_28 + 8) + 2 + iVar7 * 4);
        iVar2 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        puVar6[3] = *(undefined1 *)(*(int *)((int)uStack_28 + 8) + 3 + iVar2);
      } while (iVar7 < (int)pHVar9);
    }
    pHStack_2c = CreateBitmap(*(int *)((int)uStack_28 + 0x14),*(int *)((int)uStack_28 + 0x18),1,0x20
                              ,(void *)uStack_20);
    iVar7 = *(int *)((int)uStack_28 + 0x18);
    iVar8 = *(int *)((int)uStack_28 + 0x14);
    hdc = GetDC((HWND)0x0);
    pHVar9 = CreateCompatibleBitmap(hdc,iVar8,iVar7);
    IStack_40.fIcon = 1;
    IStack_40.hbmColor = pHStack_2c;
    IStack_40.xHotspot = 0;
    IStack_40.yHotspot = 0;
    IStack_40.hbmMask = pHVar9;
    lParam = CreateIconIndirect(&IStack_40);
    DeleteObject(pHVar9);
    DeleteObject(pHStack_2c);
    SendMessageA(*(HWND *)(*(int *)(param_1 + 0x1c) + 0x13c),0x80,0,(LPARAM)lParam);
    SendMessageA(*(HWND *)(*(int *)(param_1 + 0x1c) + 0x13c),0x80,1,(LPARAM)lParam);
    iStack_8 = CONCAT31(iStack_8._1_3_,1);
    if ((void *)uStack_20 != (void *)0x0) {
      func_0x0046ac90();
      uStack_20 = 0;
      pvStack_18 = (void *)0x0;
    }
  }
  else {
    func_0x0046bc40();
    iStack_8._0_1_ = 5;
    FUN_005ee340();
  }
  iStack_8 = 0xffffffff;
  piVar4 = uStack_28._4_4_;
  if (uStack_28._4_4_ != (int *)0x0) {
    LOCK();
    iVar7 = uStack_28._4_4_[1] + -1;
    uStack_28._4_4_[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar3 = *(code **)*uStack_28._4_4_;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar7 = *piVar1 + -1;
      *piVar1 = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0081e870(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2da00;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x20,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4);
  puVar2[7] = *(undefined4 *)(param_1 + 0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_0081e900(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::setVerticalSync(bool)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081e910(int param_1)

{
  uint uVar1;
  int iVar2;
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
  puStack_c = &DAT_00eb9eed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x0087ee00(*(undefined4 *)(*(int *)(param_1 + 8) + 0x160),
                          *(char *)(param_1 + 4) != '\0',uVar1);
  if (iVar2 != 1) {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    func_0x0046bc40("Error while setting vsync",0x19);
    uStack_8 = 0;
    FUN_005ee340(3,&uStack_28);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_14) {
      func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0081e9d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_0081e9f0(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::setFullscreen(bool)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0081ea00(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (*(char *)(*(int *)(param_1 + 8) + 0xac) != *(char *)(param_1 + 4)) {
    *(char *)(*(int *)(param_1 + 8) + 0xac) = *(char *)(param_1 + 4);
    uVar2 = GetWindowLongA(*(HWND *)(*(int *)(param_1 + 8) + 0x13c),-0x10);
    _DAT_01463bc4 = 0x2c;
    if (*(char *)(param_1 + 4) != '\0') {
      pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x54);
      _guard_check_icall(&iStack_10);
      (*pcVar1)();
      GetWindowPlacement(*(HWND *)(*(int *)(param_1 + 8) + 0x13c),(WINDOWPLACEMENT *)&DAT_01463bc4);
      SetWindowLongA(*(HWND *)(*(int *)(param_1 + 8) + 0x13c),-0x10,uVar2 & 0xff30ffff | 0x80000008)
      ;
      SetWindowPos(*(HWND *)(*(int *)(param_1 + 8) + 0x13c),(HWND)0xffffffff,0,0,iStack_10,iStack_c,
                   0x20);
      FUN_008ab370();
      return;
    }
    SetWindowLongA((HWND)(*(int **)(param_1 + 8))[0x4f],-0x10,uVar2 & 0x7f30fff7 | 0xcf0000);
    SetWindowPlacement(*(HWND *)(*(int *)(param_1 + 8) + 0x13c),(WINDOWPLACEMENT *)&DAT_01463bc4);
    SetWindowPos(*(HWND *)(*(int *)(param_1 + 8) + 0x13c),(HWND)0xfffffffe,0,0,0,0,0x23);
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_0081eb30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_0081eb50(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::setMinimumSize(class_TSize<int>_const&)'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0081eb60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 8);
  return;
}



void __fastcall FUN_0081eb70(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2da2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x10,uVar1);
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0081ebf0(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::setTitle(class_std::basic_string<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0081ec00(int param_1)

{
  uint uVar1;
  LPCWSTR lpString;
  int *unaff_FS_OFFSET;
  undefined4 auStack_28 [5];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2d71d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  lpString = (LPCWSTR)func_0x0083c880(uVar1);
  uStack_8 = 0;
  if (7 < *(uint *)(lpString + 10)) {
    lpString = *(LPCWSTR *)lpString;
  }
  SetWindowTextW(*(HWND *)(*(int *)(param_1 + 0x1c) + 0x13c),lpString);
  uStack_8 = 0xffffffff;
  if (7 < uStack_14) {
    func_0x005895e0(auStack_28,auStack_28[0],uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __fastcall FUN_0081eca0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2da00;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x20,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4);
  puVar2[7] = *(undefined4 *)(param_1 + 0x1c);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_0081ed30(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::restoreMouseCursor(void)'::__l2::<lambda_1>
          ::RTTI_Type_Descriptor;
}



void __fastcall FUN_0081ed40(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x148) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 0;
    SetCursor(*(HCURSOR *)(*(int *)(param_1 + 4) + 0x14c));
    ShowCursor(1);
  }
  return;
}



void __thiscall FUN_0081ed70(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0081ed90(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::setMouseCursor(int)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081eda0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 < *(int *)(iVar1 + 0x134) - *(int *)(iVar1 + 0x130) >> 2) && (-1 < iVar2)) {
    *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(*(int *)(iVar1 + 0x130) + iVar2 * 4);
    SetCursor(*(HCURSOR *)(*(int *)(param_1 + 8) + 0x148));
    ShowCursor(1);
  }
  return;
}



void __thiscall FUN_0081edf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



void __thiscall FUN_0081ee10(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x1c,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0081ee60(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0081ee70(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_0081eea0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[4] = *(undefined4 *)(param_1 + 0x10);
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  param_2[6] = *(undefined4 *)(param_1 + 0x18);
  return param_2;
}



TypeDescriptor * FUN_0081eee0(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::poll(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081eef0(int param_1)

{
  int iVar1;
  
  FUN_00814aa0();
  iVar1 = *(int *)(param_1 + 4);
  if ((*(char *)(iVar1 + 0xad) == '\0') && (*(char *)(iVar1 + 0xac) == '\0')) {
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar1 + 0x3c);
  }
  return;
}



void __thiscall FUN_0081ef30(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0081ef50(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::minimize(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081ef60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(char *)(iVar1 + 0x154) == '\0') && (*(char *)(iVar1 + 0xad) != '\0')) {
    ShowWindow(*(HWND *)(iVar1 + 0x13c),6);
    *(undefined1 *)(*(int *)(param_1 + 4) + 0xad) = 1;
  }
  return;
}



void __thiscall FUN_0081efa0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0081efc0(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::maximize(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081efd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(iVar1 + 0x154) == '\0') {
    ShowWindow(*(HWND *)(iVar1 + 0x13c),3);
    return;
  }
  *(undefined1 *)(iVar1 + 0xad) = 1;
  return;
}



void __thiscall FUN_0081f000(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0081f020(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::hide(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081f030(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x154) = 1;
  ShowWindow(*(HWND *)(*(int *)(param_1 + 4) + 0x13c),0);
  return;
}



void __thiscall FUN_0081f050(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0081f070(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::show(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0081f080(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x154) = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(iVar1 + 0xad) != '\0') {
    ShowWindow(*(HWND *)(iVar1 + 0x13c),3);
    return;
  }
  ShowWindow(*(HWND *)(iVar1 + 0x13c),5);
  return;
}



void __thiscall FUN_0081f0c0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0081f0e0(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::resize(class_TSize<int>_const&)'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0081f0f0(int param_1)

{
  int *piVar1;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [5];
  
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x40) <= *(int *)(param_1 + 4)) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x44) <= *(int *)(param_1 + 8))) {
    piVar1 = (int *)func_0x0081e3c0(aiStack_18);
    iStack_2c = *piVar1;
    iStack_28 = piVar1[1];
    iStack_24 = *(int *)(param_1 + 4) + -1 + iStack_2c;
    iStack_20 = *(int *)(param_1 + 8) + -1 + iStack_28;
    func_0x0081e450(&iStack_1c,&iStack_2c);
    MoveWindow(*(HWND *)(*(int *)(param_1 + 0xc) + 0x13c),iStack_24,iStack_20,
               (iStack_1c - iStack_24) + 1,(aiStack_18[0] - iStack_20) + 1,1);
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x154) != '\0') {
      ShowWindow(*(HWND *)(*(int *)(param_1 + 0xc) + 0x13c),0);
    }
  }
  return;
}



void __fastcall FUN_0081f1a0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2da2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x10,uVar1);
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0081f220(void)

{
  return &`public:_virtual_void___thiscall_WIN32Window::move(class_TPoint<int>_const&)'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0081f230(int param_1)

{
  int *piVar1;
  int X;
  int Y;
  int iStack_1c;
  int aiStack_18 [5];
  
  piVar1 = (int *)func_0x0081e3c0(aiStack_18);
  X = (piVar1[2] - *piVar1) + *(int *)(param_1 + 4);
  Y = (piVar1[3] - piVar1[1]) + *(int *)(param_1 + 8);
  func_0x0081e450(&iStack_1c,&stack0xffffffd4);
  MoveWindow(*(HWND *)(*(int *)(param_1 + 0xc) + 0x13c),X,Y,(iStack_1c - X) + 1,
             (aiStack_18[0] - Y) + 1,1);
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x154) != '\0') {
    ShowWindow(*(HWND *)(*(int *)(param_1 + 0xc) + 0x13c),0);
  }
  return;
}



void __fastcall FUN_0081f2d0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2da2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x10,uVar1);
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Removing unreachable block (ram,0x0081fa5b)
// WARNING: Removing unreachable block (ram,0x0081f913)
// WARNING: Removing unreachable block (ram,0x0081f939)
// WARNING: Removing unreachable block (ram,0x0081f940)
// WARNING: Removing unreachable block (ram,0x0081f948)
// WARNING: Removing unreachable block (ram,0x0081f94f)
// WARNING: Removing unreachable block (ram,0x0081f953)
// WARNING: Removing unreachable block (ram,0x0081f972)
// WARNING: Removing unreachable block (ram,0x0081f9a7)
// WARNING: Removing unreachable block (ram,0x0081f9b1)
// WARNING: Removing unreachable block (ram,0x0081f9cf)
// WARNING: Removing unreachable block (ram,0x0081f9e1)
// WARNING: Removing unreachable block (ram,0x0081fa77)
// WARNING: Removing unreachable block (ram,0x0081fa81)
// WARNING: Removing unreachable block (ram,0x0081fa9f)
// WARNING: Removing unreachable block (ram,0x0081fab1)

void __fastcall FUN_0081f890(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2dcf7;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (puVar2 = (undefined4 *)*puVar1; uStack_8 = 0xffffffff, puVar2 != puVar1;
      puVar2 = (undefined4 *)*puVar2) {
    uStack_8 = 0;
    func_0x00636450();
  }
  func_0x008217a0();
  *(undefined4 *)*(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(int *)(*(int *)(param_1 + 0x30) + 4) = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    uStack_8 = 1;
    func_0x00636450();
    uStack_8 = 0xffffffff;
  }
  func_0x008217a0();
  *(undefined4 *)*(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(int *)(*(int *)(param_1 + 0x28) + 4) = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0081fb00(int param_1,undefined4 *param_2,short param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *unaff_FS_OFFSET;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  char cStack_25;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2dd6e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar12 = 0;
  uStack_2c = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  puVar4 = (undefined4 *)*puVar3;
  uStack_14 = uVar8;
  iStack_3c = param_1;
  puStack_30 = param_2;
  do {
    if (puVar4 == puVar3) {
      uStack_24 = 0;
      func_0x00821220(puStack_30,&param_3,&stack0x0000000c);
      uStack_8 = 2;
      func_0x008226f0();
      uStack_1c = 0;
      iVar13 = 0;
      iVar14 = 0;
      if (uStack_24._4_4_ != (int *)0x0) {
        uStack_1c = uStack_24;
        LOCK();
        *(int *)((int)uStack_24._4_4_ + 8) = *(int *)((int)uStack_24._4_4_ + 8) + 1;
        UNLOCK();
        iVar13 = (int)uStack_24;
        iVar14 = (int)uStack_24._4_4_;
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      piStack_34 = (int *)(iStack_3c + 0x28);
      iVar6 = *piStack_34;
      if (*(int *)(iStack_3c + 0x2c) == 0xfffffff) {
        func_0x00e701fa("list too long");
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,4);
      puStack_30 = (undefined4 *)0x0;
      piVar10 = (int *)func_0x008ab47d(0x10);
      uStack_1c = 0;
      piVar10[2] = iVar13;
      piVar10[3] = iVar14;
      puStack_30 = (undefined4 *)0x0;
      *(int *)(iStack_3c + 0x2c) = *(int *)(iStack_3c + 0x2c) + 1;
      puVar3 = *(undefined4 **)(iVar6 + 4);
      *piVar10 = iVar6;
      piVar10[1] = (int)puVar3;
      *(int **)(iVar6 + 4) = piVar10;
      *puVar3 = piVar10;
      piVar10 = uStack_24._4_4_;
LAB_0081fd3f:
      uStack_8 = 0xffffffff;
      if (piVar10 != (int *)0x0) {
        LOCK();
        iVar13 = piVar10[1] + -1;
        piVar10[1] = iVar13;
        UNLOCK();
        if (iVar13 == 0) {
          pcVar5 = *(code **)*piVar10;
          _guard_check_icall();
          (*pcVar5)();
          LOCK();
          piVar2 = piVar10 + 2;
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            pcVar5 = *(code **)(*piVar10 + 4);
            _guard_check_icall();
            (*pcVar5)();
          }
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    uStack_1c = 0;
    func_0x008211a0(&uStack_1c,uVar8);
    uStack_8 = 0;
    if ((int)uStack_1c != 0) {
      puVar9 = (undefined4 *)func_0x0081f5a0(auStack_54);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      uStack_2c = uVar12 | 1;
      puVar11 = puStack_30;
      if (0xf < (uint)puStack_30[5]) {
        puVar11 = (undefined4 *)*puStack_30;
      }
      puVar1 = puVar9 + 4;
      if (0xf < (uint)puVar9[5]) {
        puVar9 = (undefined4 *)*puVar9;
      }
      cVar7 = func_0x0046cf20(puVar9,*puVar1,puVar11,puStack_30[4]);
      if (cVar7 == '\0') {
LAB_0081fbc3:
        cStack_25 = '\0';
      }
      else {
        cStack_25 = '\x01';
        if (*(short *)((int)uStack_1c + 0xfc) != param_3) goto LAB_0081fbc3;
      }
      uStack_8 = 0;
      uVar12 = uStack_2c;
      if ((uStack_2c & 1) != 0) {
        uVar12 = uStack_2c & 0xfffffffe;
        uStack_2c = uVar12;
        if (0xf < uStack_40) {
          func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
        }
        uStack_44 = 0;
        uStack_40 = 0xf;
        auStack_54[0] = auStack_54[0] & 0xffffff00;
      }
      if (cStack_25 != '\0') {
        piVar10 = uStack_1c._4_4_;
        goto LAB_0081fd3f;
      }
    }
    uStack_8 = 0xffffffff;
    piStack_38 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar13 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar13;
      UNLOCK();
      if (iVar13 == 0) {
        pcVar5 = *(code **)*uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar5)();
        LOCK();
        iVar13 = piStack_38[2] + -1;
        piStack_38[2] = iVar13;
        UNLOCK();
        uVar12 = uStack_2c;
        if (iVar13 == 0) {
          pcVar5 = *(code **)(*piStack_38 + 4);
          _guard_check_icall();
          (*pcVar5)();
          uVar12 = uStack_2c;
        }
      }
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}



void __thiscall FUN_0081fdb0(int param_1,undefined4 *param_2,short param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  int *piStack_28;
  uint uStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2ddc6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar9 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  piVar12 = (int *)**(int **)(param_1 + 0x28);
  iStack_20 = param_1;
  uStack_14 = uVar9;
  if (piVar12 != *(int **)(param_1 + 0x28)) {
    do {
      uVar7 = uStack_24;
      uStack_1c = 0;
      func_0x008211a0(&uStack_1c,uVar9);
      uStack_8 = 0;
      if ((int)uStack_1c == 0) {
        uStack_8 = 0xffffffff;
        piVar3 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar5 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)*uStack_1c._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar2 = piVar3 + 2;
            iVar5 = *piVar2 + -1;
            *piVar2 = iVar5;
            UNLOCK();
            param_1 = iStack_20;
            if (iVar5 == 0) {
              pcVar4 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar4)();
              param_1 = iStack_20;
            }
          }
        }
        piStack_28 = (int *)*piVar12;
        *(int **)piVar12[1] = piStack_28;
        *(int *)(*piVar12 + 4) = piVar12[1];
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        piVar3 = (int *)piVar12[3];
        if (piVar3 != (int *)0x0) {
          LOCK();
          iVar5 = piVar3[2] + -1;
          piVar3[2] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar4)();
            param_1 = iStack_20;
          }
        }
        func_0x008ab812(piVar12,0x10);
        piVar12 = piStack_28;
      }
      else {
        puVar10 = (undefined4 *)func_0x0081f5a0(auStack_40);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        uStack_24 = uVar7 | 1;
        puVar11 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar11 = (undefined4 *)*param_2;
        }
        puVar1 = puVar10 + 4;
        if (0xf < (uint)puVar10[5]) {
          puVar10 = (undefined4 *)*puVar10;
        }
        cVar8 = func_0x0046cf20(puVar10,*puVar1,puVar11,param_2[4]);
        if ((cVar8 == '\0') || (*(short *)((int)uStack_1c + 0xfc) != param_3)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        uStack_8 = 0;
        if ((uStack_24 & 1) != 0) {
          uStack_24 = uStack_24 & 0xfffffffe;
          if (0xf < uStack_2c) {
            func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
          }
          uStack_30 = 0;
          uStack_2c = 0xf;
          auStack_40[0] = auStack_40[0] & 0xffffff00;
        }
        if (bVar6) {
          func_0x00822940();
          piStack_28 = (int *)*piVar12;
          *(int **)piVar12[1] = piStack_28;
          *(int *)(*piVar12 + 4) = piVar12[1];
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          piVar3 = (int *)piVar12[3];
          if (piVar3 != (int *)0x0) {
            LOCK();
            iVar5 = piVar3[2] + -1;
            piVar3[2] = iVar5;
            UNLOCK();
            if (iVar5 == 0) {
              pcVar4 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar4)();
              param_1 = iStack_20;
            }
          }
          func_0x008ab812(piVar12,0x10);
          piVar12 = piStack_28;
        }
        else {
          piVar12 = (int *)*piVar12;
        }
        uStack_8 = 0xffffffff;
        piVar3 = uStack_1c._4_4_;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          iVar5 = uStack_1c._4_4_[1] + -1;
          uStack_1c._4_4_[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)*uStack_1c._4_4_;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar2 = piVar3 + 2;
            iVar5 = *piVar2 + -1;
            *piVar2 = iVar5;
            UNLOCK();
            param_1 = iStack_20;
            if (iVar5 == 0) {
              pcVar4 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar4)();
              param_1 = iStack_20;
            }
          }
        }
      }
    } while (piVar12 != *(int **)(param_1 + 0x28));
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_008206b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined8 uStack_64;
  int *piStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int *piStack_40;
  code *pcStack_3c;
  uint uStack_38;
  undefined8 uStack_34;
  undefined1 auStack_17 [3];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2df82;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  piStack_5c = param_2;
  uStack_38 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  piStack_40 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = func_0x008ab47d(0x2c,uStack_14);
  *(int *)iVar4 = iVar4;
  *(int *)(iVar4 + 4) = iVar4;
  *(int *)(iVar4 + 8) = iVar4;
  *(undefined2 *)(iVar4 + 0xc) = 0x101;
  *param_2 = iVar4;
  iStack_8 = 0;
  uStack_38 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  puVar2 = (undefined4 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    iStack_8._0_1_ = 2;
    iStack_8._1_3_ = 0;
    uStack_38 = uStack_38 | 2;
    uStack_34 = 0;
    func_0x00636450(puVar2 + 2);
    if ((int)uStack_34 != 0) {
      pcStack_3c = *(code **)((int)uStack_34 + 0x1010c);
      iStack_8 = CONCAT31(iStack_8._1_3_,4);
      puVar5 = (undefined1 *)func_0x0046ca80(auStack_17,*(undefined2 *)((int)uStack_34 + 0xfc));
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      if (puVar5 == auStack_17) {
        uStack_48 = 0;
        uStack_44 = 0xf;
        uStack_58 = 0;
      }
      else {
        func_0x0046bc40(puVar5,auStack_17 + -(int)puVar5);
      }
      uStack_38 = uStack_38 & 0xfffffff7 | 4;
      iStack_8._0_1_ = 5;
      iStack_8._1_3_ = 0;
      func_0x00469da0((int)uStack_34 + 0xe4);
      uStack_38 = uStack_38 | 0x10;
      iStack_8._0_1_ = 6;
      puVar6 = (uint *)func_0x0046a880(&DAT_0113c084,1);
      uStack_74 = *puVar6;
      uStack_70 = puVar6[1];
      uStack_6c = puVar6[2];
      uStack_68 = puVar6[3];
      uStack_64 = *(undefined8 *)(puVar6 + 4);
      uStack_38 = uStack_38 | 0x20;
      puVar6[4] = 0;
      puVar6[5] = 0xf;
      *(undefined1 *)puVar6 = 0;
      iStack_8._0_1_ = 7;
      func_0x0046c7c0(piStack_5c,&uStack_74,&uStack_58);
      uStack_38 = uStack_38 | 0x40;
      puVar7 = (undefined4 *)func_0x008210d0(auStack_8c);
      *puVar7 = pcStack_3c;
      uStack_38 = uStack_38 & 0xffffffbf;
      iStack_8._0_1_ = 6;
      if (0xf < uStack_78) {
        func_0x0046b1f0(auStack_8c,auStack_8c[0],uStack_78);
      }
      uStack_38 = uStack_38 & 0xffffffdf;
      uStack_7c = 0;
      uStack_78 = 0xf;
      auStack_8c[0] = auStack_8c[0] & 0xffffff00;
      iStack_8._0_1_ = 5;
      uVar3 = (undefined1)iStack_8;
      iStack_8._0_1_ = 5;
      if (0xf < uStack_64._4_4_) {
        uVar8 = uStack_64._4_4_ + 1;
        uVar9 = uStack_74;
        if (0xfff < uVar8) {
          uVar9 = *(uint *)(uStack_74 - 4);
          uVar8 = uStack_64._4_4_ + 0x24;
          if (0x1f < (uStack_74 - uVar9) - 4) goto LAB_00820a47;
        }
        func_0x008ab812(uVar9,uVar8);
      }
      uStack_38 = uStack_38 & 0xffffffef;
      uStack_64 = 0xf00000000;
      uStack_74 = uStack_74 & 0xffffff00;
      iStack_8._0_1_ = 3;
      if (0xf < uStack_90) {
        func_0x0046b1f0(auStack_a4,auStack_a4[0],uStack_90);
      }
      uStack_38 = uStack_38 & 0xfffffffb;
      uStack_94 = 0;
      uStack_90 = 0xf;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      iStack_8._0_1_ = 2;
      if (0xf < uStack_44) {
        uVar8 = uStack_44 + 1;
        uVar9 = uStack_58;
        if (0xfff < uVar8) {
          uVar9 = *(uint *)(uStack_58 - 4);
          uVar8 = uStack_44 + 0x24;
          uVar3 = (undefined1)iStack_8;
          if (0x1f < (uStack_58 - uVar9) - 4) {
LAB_00820a47:
            iStack_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(uVar9,uVar8);
      }
      uStack_48 = 0;
      uStack_44 = 0xf;
      uStack_58 = uStack_58 & 0xffffff00;
    }
    uStack_38 = uStack_38 & 0xfffffffd;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (uStack_34._4_4_ != (undefined4 *)0x0) {
      LOCK();
      iVar4 = uStack_34._4_4_[1] + -1;
      uStack_34._4_4_[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcStack_3c = *(code **)*uStack_34._4_4_;
        _guard_check_icall();
        (*pcStack_3c)();
        LOCK();
        iVar4 = uStack_34._4_4_[2] + -1;
        uStack_34._4_4_[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcStack_3c = *(code **)(*uStack_34._4_4_ + 4);
          _guard_check_icall();
          (*pcStack_3c)();
        }
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}



void __thiscall FUN_00820a50(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint auStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  uint auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  int *piStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int *piStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  uint uStack_38;
  undefined8 uStack_34;
  undefined1 auStack_17 [3];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f2e07d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_60 = param_2;
  uStack_38 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  piStack_44 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = func_0x008ab47d(0x40,uStack_14);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  *param_2 = iVar7;
  uStack_8 = 0;
  uStack_38 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  puVar2 = (undefined4 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    uStack_8 = 2;
    uStack_38 = uStack_38 | 2;
    uStack_34 = 0;
    func_0x00636450(puVar2 + 2);
    if ((int)uStack_34 != 0) {
      pcStack_40 = (code *)func_0x00822b30(auStack_c0);
      uStack_8 = CONCAT31((int3)(uStack_8 >> 8),5);
      puVar8 = (undefined1 *)func_0x0046ca80(auStack_17,*(undefined2 *)((int)uStack_34 + 0xfc));
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      if (puVar8 == auStack_17) {
        uStack_4c = 0;
        uStack_48 = 0xf;
        uStack_5c = 0;
      }
      else {
        func_0x0046bc40(puVar8,auStack_17 + -(int)puVar8);
      }
      uStack_38 = uStack_38 & 0xfffffff7 | 4;
      uStack_8._0_1_ = 6;
      uStack_8._1_3_ = 0;
      func_0x00469da0((int)uStack_34 + 0xe4);
      uStack_38 = uStack_38 | 0x10;
      uStack_8._0_1_ = 7;
      puVar9 = (uint *)func_0x0046a880(&DAT_0113c084,1);
      uStack_78 = *puVar9;
      uStack_74 = puVar9[1];
      uStack_70 = puVar9[2];
      uStack_6c = puVar9[3];
      uStack_68 = *(undefined8 *)(puVar9 + 4);
      uStack_38 = uStack_38 | 0x20;
      puVar9[4] = 0;
      puVar9[5] = 0xf;
      *(undefined1 *)puVar9 = 0;
      uStack_8 = CONCAT31(uStack_8._1_3_,8);
      func_0x0046c7c0(piStack_60,&uStack_78,&uStack_5c);
      uStack_38 = uStack_38 | 0x40;
      pcStack_3c = (code *)func_0x00820fb0(auStack_90);
      if (pcStack_3c != pcStack_40) {
        if (0xf < *(uint *)(pcStack_3c + 0x14)) {
          func_0x0046b1f0(pcStack_3c,*(undefined4 *)pcStack_3c,*(uint *)(pcStack_3c + 0x14));
        }
        *(undefined4 *)(pcStack_3c + 0x10) = 0;
        *(undefined4 *)(pcStack_3c + 0x14) = 0xf;
        *pcStack_3c = (code)0x0;
        uVar3 = *(undefined4 *)(pcStack_40 + 4);
        uVar4 = *(undefined4 *)(pcStack_40 + 8);
        uVar5 = *(undefined4 *)(pcStack_40 + 0xc);
        *(undefined4 *)pcStack_3c = *(undefined4 *)pcStack_40;
        *(undefined4 *)(pcStack_3c + 4) = uVar3;
        *(undefined4 *)(pcStack_3c + 8) = uVar4;
        *(undefined4 *)(pcStack_3c + 0xc) = uVar5;
        *(undefined8 *)(pcStack_3c + 0x10) = *(undefined8 *)(pcStack_40 + 0x10);
        *(undefined4 *)(pcStack_40 + 0x10) = 0;
        *(undefined4 *)(pcStack_40 + 0x14) = 0xf;
        *pcStack_40 = (code)0x0;
      }
      uStack_38 = uStack_38 & 0xffffffbf;
      uStack_8._0_1_ = 7;
      if (0xf < uStack_7c) {
        func_0x0046b1f0(auStack_90,auStack_90[0],uStack_7c);
      }
      uStack_38 = uStack_38 & 0xffffffdf;
      uStack_80 = 0;
      uStack_7c = 0xf;
      auStack_90[0] = auStack_90[0] & 0xffffff00;
      uStack_8._0_1_ = 6;
      uVar6 = (undefined1)uStack_8;
      uStack_8._0_1_ = 6;
      if (0xf < uStack_68._4_4_) {
        uVar10 = uStack_68._4_4_ + 1;
        uVar11 = uStack_78;
        if (0xfff < uVar10) {
          uVar11 = *(uint *)(uStack_78 - 4);
          uVar10 = uStack_68._4_4_ + 0x24;
          if (0x1f < (uStack_78 - uVar11) - 4) goto LAB_00820e87;
        }
        func_0x008ab812(uVar11,uVar10);
      }
      uStack_38 = uStack_38 & 0xffffffef;
      uStack_68 = 0xf00000000;
      uStack_78 = uStack_78 & 0xffffff00;
      uStack_8._0_1_ = 4;
      if (0xf < uStack_94) {
        func_0x0046b1f0(auStack_a8,auStack_a8[0],uStack_94);
      }
      uStack_38 = uStack_38 & 0xfffffffb;
      uStack_98 = 0;
      uStack_94 = 0xf;
      auStack_a8[0] = auStack_a8[0] & 0xffffff00;
      uStack_8._0_1_ = 3;
      if (0xf < uStack_48) {
        uVar10 = uStack_48 + 1;
        uVar11 = uStack_5c;
        if (0xfff < uVar10) {
          uVar11 = *(uint *)(uStack_5c - 4);
          uVar10 = uStack_48 + 0x24;
          uVar6 = (undefined1)uStack_8;
          if (0x1f < (uStack_5c - uVar11) - 4) {
LAB_00820e87:
            uStack_8._0_1_ = uVar6;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(uVar11,uVar10);
      }
      uStack_4c = 0;
      uStack_48 = 0xf;
      uStack_5c = uStack_5c & 0xffffff00;
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      if (0xf < uStack_ac) {
        func_0x0046b1f0(auStack_c0,auStack_c0[0],uStack_ac);
      }
      uStack_b0 = 0;
      uStack_ac = 0xf;
      auStack_c0[0] = auStack_c0[0] & 0xffffff00;
    }
    uStack_38 = uStack_38 & 0xfffffffd;
    uStack_8 = uStack_8 & 0xffffff00;
    if (uStack_34._4_4_ != (undefined4 *)0x0) {
      LOCK();
      iVar7 = uStack_34._4_4_[1] + -1;
      uStack_34._4_4_[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcStack_3c = *(code **)*uStack_34._4_4_;
        _guard_check_icall();
        (*pcStack_3c)();
        LOCK();
        iVar7 = uStack_34._4_4_[2] + -1;
        uStack_34._4_4_[2] = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcStack_3c = *(code **)(*uStack_34._4_4_ + 4);
          _guard_check_icall();
          (*pcStack_3c)();
        }
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00820f0b)
// WARNING: Removing unreachable block (ram,0x00820f15)
// WARNING: Removing unreachable block (ram,0x00820f19)
// WARNING: Removing unreachable block (ram,0x00820f1b)
// WARNING: Removing unreachable block (ram,0x00820f35)
// WARNING: Removing unreachable block (ram,0x00820f3f)
// WARNING: Removing unreachable block (ram,0x00820f61)
// WARNING: Removing unreachable block (ram,0x00820f77)

void __fastcall FUN_00820e90(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2e0ce;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  for (puVar2 = (undefined4 *)*puVar1; uStack_8 = 0xffffffff, puVar2 != puVar1;
      puVar2 = (undefined4 *)*puVar2) {
    uStack_8 = 0;
    func_0x00636450(puVar2 + 2,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __fastcall FUN_008218c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2e3d1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = (int *)(param_1 + 0x10134);
  iStack_8._0_1_ = 6;
  iStack_8._1_3_ = 0;
  func_0x0049a600(piVar2,*(undefined4 *)(*piVar2 + 4),uVar5);
  func_0x008ab812(*piVar2,0x1c);
  piVar2 = (int *)(param_1 + 0x1012c);
  iStack_8._0_1_ = 5;
  func_0x0049a600(piVar2,*(undefined4 *)(*piVar2 + 4));
  func_0x008ab812(*piVar2,0x1c);
  piVar2 = (int *)(param_1 + 0x120);
  iStack_8._0_1_ = 4;
  func_0x00821940(piVar2,*(undefined4 *)(*piVar2 + 4));
  func_0x008ab812(*piVar2,0x18);
  iStack_8._0_1_ = 3;
  piVar2 = *(int **)(param_1 + 0x11c);
  if (piVar2 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(param_1 + 0xf8)));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  iStack_8._0_1_ = 2;
  piVar2 = *(int **)(param_1 + 0xf4);
  if (piVar2 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != (int *)(param_1 + 0xd0)));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  iStack_8._0_1_ = 1;
  func_0x00634c70();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar6 = func_0x00634700();
  iStack_8 = 0xffffffff;
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar3 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar3 + -1;
    UNLOCK();
    if (iVar3 + -1 == 0) {
      pcVar4 = *(code **)(*piVar2 + 4);
      _guard_check_icall();
      iVar6 = (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



int __fastcall FUN_008218d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2e473;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 5;
  puVar2 = (undefined4 *)(param_1 + 0x10148);
  if (0xf < *(uint *)(param_1 + 0x1015c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x1015c),uVar6);
  }
  *(undefined4 *)(param_1 + 0x10158) = 0;
  *(undefined4 *)(param_1 + 0x1015c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8._0_1_ = 4;
  func_0x004a5fa0();
  func_0x008ab812(*(undefined4 *)(param_1 + 0x10110),0x10);
  iStack_8._0_1_ = 3;
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  if (0xf < *(uint *)(param_1 + 0x108)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x108),uVar6);
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8._0_1_ = 2;
  func_0x006345f0();
  iStack_8._0_1_ = 1;
  func_0x00634c70();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  iVar7 = func_0x00634700();
  iStack_8 = 0xffffffff;
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 2;
    iVar3 = *piVar1;
    iVar7 = *piVar1;
    *piVar1 = iVar3 + -1;
    UNLOCK();
    if (iVar3 + -1 == 0) {
      pcVar5 = *(code **)(*piVar4 + 4);
      _guard_check_icall();
      iVar7 = (*pcVar5)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



undefined4 * __thiscall FUN_008218e0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10150);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00821910(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10160);
  }
  return param_1;
}



void FUN_00821cc0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uVar2;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eddd0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uVar2 = param_1;
  func_0x0062efe0(uVar1);
  func_0x00e744e0();
  uStack_8 = 0xffffffff;
  func_0x008ab812(param_1,4);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar2,uVar1);
  return;
}



void __thiscall FUN_00822d20(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  code *pcStack_48;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  code **ppcStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  code **ppcStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2e93a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  if ((((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) &&
     (*(char *)(param_1 + 0xfe) == '\0')) {
    puVar6 = (uint *)func_0x0046ede0(&uStack_38,uVar5);
    iVar7 = func_0x00e87ec0(*puVar6 - *(uint *)(param_1 + 0x10118),
                            (puVar6[1] - *(int *)(param_1 + 0x1011c)) -
                            (uint)(*puVar6 < *(uint *)(param_1 + 0x10118)),1000000,0);
    iVar2 = *(int *)(param_1 + 0xe0);
    if (iVar2 == 0) {
      func_0x00822f30();
    }
    else if (iVar2 == 1) {
      if (0x30d4 < iVar7 + 0x32) {
        func_0x008237c0();
      }
    }
    else if ((iVar2 == 3) || (iVar2 == 2)) {
      if (*(char *)(param_1 + 0x10108) == '\0') {
        if (iVar2 == 3) {
          func_0x00823820();
        }
      }
      else {
        iVar9 = 0x1d4c;
        if (iVar2 == 2) {
          iVar9 = 0x30d4;
        }
        if (iVar9 < iVar7 + 0x32) {
          func_0x008237c0();
        }
      }
    }
    uStack_38 = 2500000000;
    uStack_34 = 0;
    func_0x0064b020(&uStack_38);
    puVar8 = (undefined4 *)func_0x0064af20(&uStack_38);
    ppcStack_1c = &pcStack_48;
    puStack_20 = auStack_44;
    puStack_24 = &uStack_40;
    pcStack_48 = FUN_00822d20;
    uStack_40 = *puVar8;
    piStack_3c = (int *)puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    uStack_18 = 1;
    func_0x008276b0(param_1 + 0x18,&pcStack_48,param_1 + 0x38);
    piVar4 = piStack_3c;
    uStack_18 = 0;
    ppcStack_28 = &pcStack_48;
    puStack_2c = auStack_44;
    puStack_30 = &uStack_40;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_3c != (int *)0x0) {
      LOCK();
      iVar2 = piStack_3c[1] + -1;
      piStack_3c[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*piStack_3c;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00823c10(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  code *pcStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2ebb8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) && (param_3 == 2)) {
    uVar1 = *(ushort *)(param_1 + 0xff);
    *(int *)(param_1 + 0x10120) = *(int *)(param_1 + 0x10120) + 1;
    *(int *)(param_1 + 0x10128) = *(int *)(param_1 + 0x10128) + 2;
    if (uVar1 < 0xc) {
      func_0x008237c0();
    }
    else {
      uVar2 = func_0x0064af20((int)&uStack_20 + 4);
      iStack_8 = 0;
      pcStack_24 = FUN_00823d50;
      uVar2 = func_0x0064cf90(uVar2);
      iStack_8._0_1_ = 1;
      iStack_28 = param_1 + 0xff;
      pcStack_24 = (code *)(uint)uVar1;
      func_0x00826620(uVar2);
      puStack_30 = auStack_40;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x0052b260();
      iStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  else {
    uStack_18 = 0;
    uStack_20 = 0;
    func_0x00642190(auStack_2c,param_1 + 0x5c,&uStack_20,uStack_14);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x1010c) = 5000;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00823d50(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined8 uStack_38;
  undefined1 auStack_30 [4];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2ebfd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) && (0xb < param_3)) {
    *(int *)(param_1 + 0x10128) = *(int *)(param_1 + 0x10128) + param_3;
    iVar1 = *(int *)(param_1 + 0x103);
    uVar2 = *(undefined4 *)(param_1 + 0x107);
    uStack_2c = CONCAT44(*(int *)(param_1 + 0xff),(int)uStack_2c);
    if (*(int *)(param_1 + 0xff) == 0) {
      func_0x00823aa0();
      func_0x00823940(extraout_ECX);
    }
    else if (iVar1 == -1) {
      iStack_18 = 0;
      func_0x00826050(&iStack_18,(int)&uStack_2c + 4);
      if (iStack_18 != DAT_0145e054) {
        uStack_2c = 0;
        func_0x008211a0(&uStack_2c);
        uStack_8 = 0;
        if ((int)uStack_2c != 0) {
          func_0x0064c890();
          func_0x00824630();
        }
        uStack_8 = 0xffffffff;
        FUN_00468340();
      }
      func_0x00823aa0();
    }
    else {
      iStack_1c = param_1 + 0x10b;
      iStack_18 = *(ushort *)(param_1 + 0x10b) + 0x10d + param_1;
      uStack_38 = 0;
      func_0x00608b70(&iStack_18);
      uStack_8 = 1;
      iStack_18 = 0;
      func_0x00826050(&iStack_18,(int)&uStack_2c + 4);
      if (iStack_18 != DAT_0145e054) {
        iStack_20 = 0;
        iStack_1c = 0;
        func_0x008211a0(&iStack_20);
        uStack_8._0_1_ = 2;
        if (iStack_20 != 0) {
          func_0x00825100(iVar1,uVar2,&uStack_38);
        }
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        FUN_00468340();
      }
      func_0x00823aa0();
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  else {
    iStack_1c = 0;
    uStack_24 = 0;
    iStack_20 = 0;
    func_0x00642190(auStack_30,param_1 + 0x5c,&uStack_24,uStack_14);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x1010c) = 5000;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00824170(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  undefined1 *puStack_1c;
  int iStack_18;
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2ed08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2[2] & 1U) != 0) && ((param_2[2] != 1 || (*param_2 != 0)))) {
    func_0x008237c0();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  *(int *)(param_1 + 0x1012c) = *(int *)(param_1 + 0x1012c) + param_3;
  *(int *)(param_1 + 0x10124) = *(int *)(param_1 + 0x10124) + 1;
  piVar1 = (int *)**(int **)(param_1 + 0x10100);
  iVar2 = *piVar1;
  *(int *)(param_1 + 0x10104) = *(int *)(param_1 + 0x10104) + -1;
  *(int *)piVar1[1] = iVar2;
  *(int *)(iVar2 + 4) = piVar1[1];
  func_0x004a6050(uVar3);
  if (*(int *)(param_1 + 0x10104) != 0) {
    uVar4 = func_0x0064af20(auStack_24);
    iStack_8 = 0;
    pcStack_14 = FUN_00824170;
    uVar4 = func_0x0064cf90(uVar4);
    iStack_8._0_1_ = 1;
    piVar1 = *(int **)(**(int **)(param_1 + 0x10100) + 8);
    iStack_18 = *piVar1;
    pcStack_14 = (code *)(piVar1[1] - iStack_18);
    func_0x00826770(uVar4);
    puStack_1c = auStack_34;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x0052b260();
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008249b0(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int iStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  uint uStack_58;
  code *pcStack_48;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  code **ppcStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  code **ppcStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2e93a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  if ((((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) &&
     (*(char *)(param_1 + 0xbf) == '\0')) {
    puStack_5c = &uStack_38;
    uStack_60 = 0x824a14;
    puVar5 = (uint *)func_0x0046ede0();
    iStack_68 = *puVar5 - *(uint *)(param_1 + 0x10138);
    iStack_64 = (puVar5[1] - *(int *)(param_1 + 0x1013c)) -
                (uint)(*puVar5 < *(uint *)(param_1 + 0x10138));
    puStack_5c = (undefined4 *)0x0;
    uStack_60 = 1000000;
    puStack_6c = (undefined4 *)0x824a36;
    uVar6 = func_0x00e87ec0();
    if (30000 < uVar6) {
      func_0x00635120(0x274c,&iStack_74);
      func_0x00824630();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puStack_6c = (undefined4 *)0x824a6f;
    func_0x00824b90();
    puStack_6c = &uStack_38;
    uStack_38 = 500000000;
    uStack_34 = 0;
    puStack_70 = (undefined4 *)0x824a89;
    func_0x0064b020();
    puStack_70 = &uStack_38;
    iStack_74 = 0x824a94;
    puVar7 = (undefined4 *)func_0x0064af20();
    ppcStack_1c = &pcStack_48;
    puStack_20 = auStack_44;
    puStack_24 = &uStack_40;
    pcStack_48 = FUN_008249b0;
    uStack_40 = *puVar7;
    piStack_3c = (int *)puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    iStack_74 = param_1 + 0x38;
    uStack_18 = 1;
    func_0x008276b0(param_1 + 0x18,&pcStack_48);
    piVar4 = piStack_3c;
    uStack_18 = 0;
    ppcStack_28 = &pcStack_48;
    puStack_2c = auStack_44;
    puStack_30 = &uStack_40;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_3c != (int *)0x0) {
      LOCK();
      iVar3 = piStack_3c[1] + -1;
      piStack_3c[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_3c;
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
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00825660(int param_1,int *param_2)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  undefined1 *puStack_1c;
  int iStack_18;
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2f008;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    uVar1 = *(ushort *)(param_1 + 0x11c);
    if (uVar1 < 0x401) {
      if (uVar1 == 0) goto LAB_00825778;
    }
    else if (*(int *)(param_1 + 0x10130) == 1) {
      func_0x00825320();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    if (uVar1 + 0x10 < 0x10000) {
      uVar4 = func_0x0064af20(auStack_24);
      iStack_8 = 0;
      pcStack_14 = FUN_00825810;
      uVar4 = func_0x0064cf90(uVar4);
      iStack_8._0_1_ = 1;
      iStack_18 = param_1 + 0x11e;
      pcStack_14 = (code *)(uint)uVar1;
      func_0x00826b50(uVar4);
      puStack_1c = auStack_34;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x0052b260();
      iStack_8 = 0xffffffff;
      FUN_00468340();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00825778:
  if (((DAT_012bbe68 == 0x257edfd1) && (DAT_012bbe6c == -0x4d54ee86)) ||
     ((DAT_012bbe68 == 0x257edfd0 && (DAT_012bbe6c == -0x4d54ee86)))) {
    uVar3 = 1;
  }
  else {
    pcVar2 = *(code **)(PTR_vftable_012bbe60 + 0x18);
    _guard_check_icall(2,0,0,uVar3);
    uVar3 = (*pcVar2)();
  }
  func_0x00824630(2,&PTR_vftable_012bbe60,(uVar3 & 0xff) + 2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00825810(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2f05d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    ppuStack_1c = (undefined **)0x0;
    piStack_18 = (int *)0x0;
    iStack_8 = 0;
    piVar5 = (int *)func_0x008ab47d(0x18,uStack_14);
    iStack_8._0_1_ = 1;
    piVar5[0] = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[1] = 1;
    piVar5[2] = 1;
    *piVar5 = (int)std::_Ref_count_obj2<>::vftable;
    func_0x0060d5b0(param_1 + 0x11c,param_3 + 0x11e + param_1);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    ppuStack_1c = (undefined **)(piVar5 + 3);
    piStack_18 = piVar5;
    func_0x00825a00(&ppuStack_1c);
    func_0x008254f0();
    piVar5 = piStack_18;
    iStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_18[1] + -1;
      piStack_18[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_18;
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
  }
  else {
    if (((DAT_012bbe68 == 0x257edfd1) && (DAT_012bbe6c == -0x4d54ee86)) ||
       ((DAT_012bbe68 == 0x257edfd0 && (DAT_012bbe6c == -0x4d54ee86)))) {
      uVar4 = 1;
    }
    else {
      pcVar2 = *(code **)(PTR_vftable_012bbe60 + 0x18);
      _guard_check_icall(2,0,0);
      uVar4 = (*pcVar2)();
    }
    ppuStack_1c = &PTR_vftable_012bbe60;
    func_0x00824630(0x12bbe6000000002,(uVar4 & 0xff) + 2);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00825eb0(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_34 [24];
  undefined1 *puStack_1c;
  int iStack_18;
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2f008;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2[2] & 1U) != 0) && ((param_2[2] != 1 || (*param_2 != 0)))) {
    if (((DAT_012bbe68 == 0x257edfd1) && (DAT_012bbe6c == -0x4d54ee86)) ||
       ((DAT_012bbe68 == 0x257edfd0 && (DAT_012bbe6c == -0x4d54ee86)))) {
      uVar3 = 1;
    }
    else {
      pcVar1 = *(code **)(PTR_vftable_012bbe60 + 0x18);
      _guard_check_icall(2,0,0);
      uVar3 = (*pcVar1)();
    }
    func_0x00824630(2,&PTR_vftable_012bbe60,(uVar3 & 0xff) + 2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  *(int *)(param_1 + 0x1012c) = *(int *)(param_1 + 0x1012c) + 1;
  func_0x0057b590(**(undefined4 **)(param_1 + 0x1011c),uVar3);
  func_0x0057c770();
  if ((*(int *)(param_1 + 0x10120) != 0) &&
     (*(int *)(**(int **)(param_1 + 0x1011c) + 0x10) == *(int *)(param_1 + 0x1012c))) {
    uVar4 = func_0x0064af20();
    iStack_8 = 0;
    pcStack_14 = FUN_00825eb0;
    uVar4 = func_0x0064cf90(uVar4);
    iStack_8._0_1_ = 1;
    piVar2 = *(int **)(**(int **)(param_1 + 0x1011c) + 0x14);
    iStack_18 = *piVar2;
    pcStack_14 = (code *)(piVar2[1] - iStack_18);
    func_0x00826a00(uVar4);
    puStack_1c = auStack_34;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x0052b260();
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00827307(void)

{
  func_0x0062e2c0();
  return &DAT_0082731e;
}



undefined * Catch_00827547(void)

{
  func_0x0062e2c0();
  return &DAT_0082755e;
}



undefined * Catch_00827917(void)

{
  func_0x0062e2c0();
  return &DAT_0082792e;
}



undefined * Catch_00827b34(void)

{
  func_0x0062e2c0();
  return &DAT_00827b4e;
}



undefined * Catch_00827d64(void)

{
  func_0x0062e2c0();
  return &DAT_00827d7e;
}



void FUN_00828760(int param_1,int param_2,ulonglong *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d0 [52];
  undefined4 *puStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined4 *puStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f2f8e9;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_98 = param_2;
  iStack_94 = param_2;
  uStack_90 = *param_3;
  uStack_28 = (uint)param_3[1];
  puStack_9c = (undefined4 *)(param_2 + 0x40);
  iStack_14 = 0;
  uVar7 = uStack_28;
  uStack_30 = uStack_90;
  puVar5 = &stack0xfffffffc;
  if (param_1 != 0) {
    if (*(char *)(param_2 + 0x3c) == '\0') {
      uVar7 = *(uint *)(param_2 + 0x28);
      uStack_90 = *(ulonglong *)(param_2 + 0x20);
      puVar5 = &stack0xfffffffc;
    }
    else {
      func_0x0063f640(uStack_24);
      uVar7 = uStack_28;
      uStack_90 = uStack_30;
      puVar5 = puStack_20;
    }
  }
  puStack_20 = puVar5;
  puStack_80 = &uStack_4c;
  uStack_34 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_3c = 0;
  func_0x0064b5b0(param_2 + 100);
  iStack_14._0_1_ = 4;
  if ((uVar7 != 0) && (uVar7 != 1)) {
    uVar7 = uVar7 & 1 | 0x119ec54;
  }
  memset(&uStack_7c,0,0x30);
  puStack_80 = &uStack_7c;
  uStack_7c = *(undefined4 *)(param_2 + 0x40);
  piStack_78 = *(int **)(param_2 + 0x44);
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uStack_74 = *(undefined4 *)(param_2 + 0x48);
  uStack_70 = *(undefined4 *)(param_2 + 0x4c);
  uStack_6c = *(undefined4 *)(param_2 + 0x50);
  uStack_68 = *(undefined4 *)(param_2 + 0x54);
  uStack_5c = *(undefined4 *)(param_2 + 0x60);
  uStack_64 = *(undefined8 *)(param_2 + 0x58);
  uStack_58 = uStack_90;
  iStack_14._0_1_ = 7;
  puStack_9c = &uStack_7c;
  uStack_50 = uVar7;
  func_0x00828620();
  if (param_1 != 0) {
    iStack_14._0_1_ = 8;
    if ((int)uStack_3c == 0) {
      func_0x00829230();
    }
    else {
      pcVar2 = *(code **)(uStack_3c._4_4_ + 0xc);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = *(code **)(uStack_3c._4_4_ + 8);
        func_0x00829f00(&uStack_7c);
        iStack_14._0_1_ = 9;
        uStack_30 = CONCAT44(uStack_30._4_4_,&uStack_81);
        if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
          func_0x008abb44();
        }
        puVar6 = (undefined4 *)func_0x0065c120(puStack_80,4);
        uStack_30 = CONCAT44(puVar6,(undefined4)uStack_30);
        uStack_28 = 0;
        iStack_14._0_1_ = 10;
        uStack_90 = CONCAT44(puVar6,(undefined4)uStack_90);
        func_0x00829f00(auStack_d0);
        *puVar6 = FUN_0082bba0;
        uStack_30 = uStack_30 & 0xffffffff;
        iStack_14._0_1_ = 9;
        puStack_80 = puVar6;
        func_0x0082a090();
        iStack_14._0_1_ = 8;
        func_0x00651810();
        iStack_14._0_1_ = 0xc;
        _guard_check_icall(&uStack_4c,&puStack_80);
        (*pcVar2)();
        iStack_14._0_1_ = 8;
        if (puStack_80 != (undefined4 *)0x0) {
          pcVar2 = (code *)*puStack_80;
          _guard_check_icall(puStack_80,0);
          (*pcVar2)();
        }
      }
      else {
        _guard_check_icall(&uStack_4c,FUN_0082aae0,&uStack_7c);
        (*pcVar2)();
      }
    }
  }
  piVar4 = piStack_78;
  uStack_90 = CONCAT44(&uStack_7c,(undefined4)uStack_90);
  iStack_14._0_1_ = 4;
  if (piStack_78 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_78[1] + -1;
    piStack_78[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_78;
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
  uStack_90 = CONCAT44(&uStack_4c,(undefined4)uStack_90);
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar2 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar2)();
  }
  iStack_14 = 0xffffffff;
  func_0x00828620();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00828cf0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2ae0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  func_0x0080ac70(param_2 + 0x20,uVar1);
  iStack_8._0_1_ = 2;
  func_0x0080add0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 3;
    func_0x00825c90();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x005d8390();
  iStack_8 = 0xffffffff;
  func_0x0080add0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00828da0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2adad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._1_3_ = 0;
  iStack_8._0_1_ = 3;
  func_0x0080ad10(uVar4);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x00824840();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
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
  iStack_8 = 0xffffffff;
  func_0x0080ad10(uVar4);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00828ed0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_20;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2f9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._1_3_ = 0;
  iStack_8._0_1_ = 3;
  func_0x00828560(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x008244b0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_20 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_20 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_20[1] + -1;
    piStack_20[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_20;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_20 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_20 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00828560(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00828ff0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_20;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2f9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._1_3_ = 0;
  iStack_8._0_1_ = 3;
  func_0x00828560(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x008284d0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_20 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_20 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_20[1] + -1;
    piStack_20[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_20;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_20 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_20 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00828560(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00829110(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_20;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f2f9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._1_3_ = 0;
  iStack_8._0_1_ = 3;
  func_0x00828560(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x00822900();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_20 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_20 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_20[1] + -1;
    piStack_20[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_20;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_20 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_20 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00828560(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00829490(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint3 uVar4;
  int *piVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****ppppuVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c8 [8];
  undefined4 ***apppuStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  undefined4 ***apppuStack_98 [4];
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 *puStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_71;
  int iStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int aiStack_60 [3];
  undefined4 *puStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  undefined8 uStack_3c;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f2fc24;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_64 = 0;
  piStack_68 = param_2;
  piStack_a0 = param_2;
  piStack_a4 = param_2 + 0x22;
  piStack_9c = param_2;
  iStack_14 = 0;
  if ((param_1 == 0) || (param_1 == param_2[0x21])) {
    piStack_68 = aiStack_60;
    uStack_48 = 0;
    aiStack_60[0] = 0;
    aiStack_60[1] = 0;
    aiStack_60[2] = 0;
    puStack_54 = (undefined4 *)0x0;
    uStack_50 = 0;
    func_0x0064b5b0(param_2 + 0x24,uStack_24);
    puStack_80 = (undefined1 *)0x0;
    piStack_7c = (int *)0x0;
    uStack_78 = 0;
    iStack_44 = param_2[0x22];
    piStack_40 = (int *)param_2[0x23];
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    iStack_34 = param_2[10];
    uStack_3c = *(undefined8 *)(param_2 + 8);
    piStack_6c = &iStack_30;
    iStack_30 = 0;
    piStack_2c = (int *)0x0;
    iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
    iStack_28 = 0;
    iStack_14._0_1_ = 0x10;
    piStack_a4 = &iStack_44;
    if (param_2[0x2b] != 0) {
      iStack_14._0_1_ = 0x13;
      func_0x00469da0(param_2 + 0x1b);
      uStack_64 = 1;
      iStack_14._0_1_ = 0x14;
      func_0x00469da0(param_2 + 0x15);
      uStack_64 = 3;
      piStack_68 = (int *)func_0x00656570(apppuStack_c0,apppuStack_98);
      uVar4 = iStack_14._1_3_;
      piVar5 = piStack_2c;
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      if (&iStack_30 != piStack_68) {
        iVar1 = *piStack_68;
        piVar2 = (int *)piStack_68[1];
        *piStack_68 = 0;
        piStack_68[1] = 0;
        piStack_6c = piStack_2c;
        iStack_70 = iStack_30;
        iStack_14 = CONCAT31(uVar4,0x15);
        iStack_30 = iVar1;
        if (piStack_2c != (int *)0x0) {
          LOCK();
          iVar1 = piStack_2c[1] + -1;
          piStack_2c[1] = iVar1;
          UNLOCK();
          if (iVar1 == 0) {
            pcVar3 = *(code **)*piStack_2c;
            piStack_2c = piVar2;
            _guard_check_icall();
            (*pcVar3)();
            LOCK();
            piVar2 = piVar5 + 2;
            iVar1 = *piVar2 + -1;
            *piVar2 = iVar1;
            UNLOCK();
            piVar2 = piStack_2c;
            if (iVar1 == 0) {
              pcVar3 = *(code **)(*piVar5 + 4);
              _guard_check_icall();
              (*pcVar3)();
              piVar2 = piStack_2c;
            }
          }
        }
        piStack_2c = piVar2;
        iStack_28 = piStack_68[2];
        piStack_68[2] = 0;
      }
      iStack_14._0_1_ = 0x14;
      func_0x00656440();
      uStack_64 = 1;
      iStack_14._0_1_ = 0x13;
      if (0xf < uStack_ac) {
        func_0x0046b1f0(apppuStack_c0,apppuStack_c0[0],uStack_ac);
      }
      uStack_b0 = 0;
      uStack_ac = 0xf;
      apppuStack_c0[0] = (undefined4 ***)((uint)apppuStack_c0[0] & 0xffffff00);
      uStack_64 = 0;
      iStack_14._0_1_ = 0x10;
      if (0xf < uStack_84) {
        func_0x0046b1f0(apppuStack_98,apppuStack_98[0],uStack_84);
      }
      uStack_88 = 0;
      uStack_84 = 0xf;
      apppuStack_98[0] = (undefined4 ***)((uint)apppuStack_98[0] & 0xffffff00);
    }
    func_0x00829300();
    if (param_1 != 0) {
      iStack_14._0_1_ = 0x17;
      if ((int)uStack_50 == 0) {
        func_0x00829bd0();
      }
      else {
        pcVar3 = *(code **)(uStack_50._4_4_ + 0xc);
        if (pcVar3 == (code *)0x0) {
          pcVar3 = *(code **)(uStack_50._4_4_ + 8);
          func_0x00829fc0(&iStack_44);
          iStack_14._0_1_ = 0x18;
          puStack_80 = &uStack_71;
          if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
            func_0x008abb44();
          }
          piVar5 = (int *)func_0x0065c120(piStack_6c,4);
          uStack_78 = 0;
          iStack_14._0_1_ = 0x19;
          piStack_7c = piVar5;
          piStack_6c = piVar5;
          func_0x00829fc0(auStack_c8);
          *piVar5 = (int)FUN_0082bd10;
          piStack_7c = (int *)0x0;
          iStack_14._0_1_ = 0x18;
          piStack_68 = piVar5;
          func_0x0082ab40();
          iStack_14._0_1_ = 0x17;
          func_0x00829af0();
          iStack_14._0_1_ = 0x1b;
          _guard_check_icall(aiStack_60,&piStack_68);
          (*pcVar3)();
          iStack_14._0_1_ = 0x17;
          if (piStack_68 != (int *)0x0) {
            pcVar3 = (code *)*piStack_68;
            _guard_check_icall(piStack_68,0);
            (*pcVar3)();
          }
        }
        else {
          _guard_check_icall(aiStack_60,FUN_0082bc50,&iStack_44);
          (*pcVar3)();
        }
      }
    }
    piVar5 = piStack_2c;
    piStack_6c = &iStack_30;
    iStack_14._0_1_ = 0x1d;
    if (piStack_2c != (int *)0x0) {
      LOCK();
      iVar1 = piStack_2c[1] + -1;
      piStack_2c[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)*piStack_2c;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar1 = *piVar2 + -1;
        *piVar2 = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar3 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    piVar5 = piStack_40;
    piStack_6c = &iStack_44;
    iStack_14._0_1_ = 6;
    if (piStack_40 != (int *)0x0) {
      LOCK();
      iVar1 = piStack_40[1] + -1;
      piStack_40[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)*piStack_40;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar1 = *piVar2 + -1;
        *piVar2 = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar3 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    piStack_6c = aiStack_60;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if ((int)uStack_50 != 0) {
      pcVar3 = (code *)*puStack_54;
      _guard_check_icall(aiStack_60);
      (*pcVar3)();
    }
  }
  else {
    iStack_14._0_1_ = 1;
    iStack_14._1_3_ = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x00469da0(param_2 + 0x1b);
    uStack_64 = 4;
    ppppuVar7 = apppuStack_c0;
    if (0xf < uStack_ac) {
      ppppuVar7 = (undefined4 ****)apppuStack_c0[0];
    }
    iStack_14._0_1_ = 2;
    func_0x00469da0(piStack_68 + 0x15);
    uStack_64 = 0xc;
    ppppuVar6 = apppuStack_98;
    if (0xf < uStack_84) {
      ppppuVar6 = (undefined4 ****)apppuStack_98[0];
    }
    func_0x006403a0(ppppuVar6,ppppuVar7,param_2 + 0xd,piStack_68 + 0x2b,piStack_68 + 8);
    uStack_64 = 4;
    iStack_14._0_1_ = 1;
    if (0xf < uStack_84) {
      func_0x0046b1f0(apppuStack_98,apppuStack_98[0],uStack_84);
    }
    uStack_88 = 0;
    uStack_84 = 0xf;
    apppuStack_98[0] = (undefined4 ***)((uint)apppuStack_98[0] & 0xffffff00);
    uStack_64 = 0;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_ac) {
      func_0x0046b1f0(apppuStack_c0,apppuStack_c0[0],uStack_ac);
    }
    uStack_b0 = 0;
    uStack_ac = 0xf;
    apppuStack_c0[0] = (undefined4 ***)((uint)apppuStack_c0[0] & 0xffffff00);
    func_0x0062e4b0(piStack_68);
    piStack_9c = (int *)0x0;
    piStack_a0 = (int *)0x0;
  }
  iStack_14 = 0xffffffff;
  func_0x00829300();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0082aae0(int *param_1)

{
  int iVar1;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if ((param_1[0xb] & 1U) == 0) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
    if ((param_1[0xb] != 1) || (param_1[9] != 0)) {
      *(undefined4 *)(iVar1 + 0xe0) = 0;
      FUN_008ab370();
      return;
    }
  }
  uStack_c = 0;
  uStack_18 = 1;
  uStack_14 = 0;
  func_0x007feb70(auStack_24,iVar1 + 0x5c,&uStack_18,&uStack_14);
  uStack_18 = 0x10000;
  func_0x007fe280(auStack_24,&uStack_18,&uStack_14);
  uStack_18 = 0x10000;
  func_0x007fe350(auStack_24,&uStack_18,&uStack_14);
  *(undefined4 *)(*param_1 + 0xe0) = 2;
  func_0x00823aa0();
  func_0x00823820();
  FUN_008ab370();
  return;
}



void FUN_0082ae10(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [40];
  undefined8 uStack_5c;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f3015d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x5c,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_30,param_4);
  uStack_54 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_54 = uStack_28 & 1 | 0x119ec44;
  }
  memset(auStack_84,0,0x38);
  func_0x0082b980(param_2 + 0x34);
  uStack_5c = uStack_30;
  uStack_50 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0082acd0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x008283e0(uStack_5c,uStack_54,uStack_50,0);
    }
    else {
      func_0x0082bdc0(auStack_84);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0082acd0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0082b130(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [40];
  undefined8 uStack_5c;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f302bd;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x58,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fdd0();
  uStack_54 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_54 = uStack_28 & 1 | 0x119ec34;
  }
  memset(auStack_84,0,0x38);
  func_0x0082b980(param_2 + 0x30);
  uStack_5c = uStack_30;
  uStack_50 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0082aff0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x00828300(uStack_5c,uStack_54,uStack_50,0);
    }
    else {
      func_0x0082bfd0(auStack_84);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0082aff0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0082b300(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [40];
  undefined8 uStack_5c;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f302bd;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x58,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fdd0();
  uStack_54 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_54 = uStack_28 & 1 | 0x119ec74;
  }
  memset(auStack_84,0,0x38);
  func_0x0082b980(param_2 + 0x30);
  uStack_5c = uStack_30;
  uStack_50 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0082aff0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x00828210(uStack_5c,uStack_54,uStack_50,0);
    }
    else {
      func_0x0082c1e0(auStack_84);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0082aff0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0082b5f0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [32];
  undefined8 uStack_5c;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f303cd;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x54,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_30,param_4);
  uStack_54 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_54 = uStack_28 & 1 | 0x119ec64;
  }
  memset(auStack_7c,0,0x30);
  func_0x0082ba40(param_2 + 0x34);
  uStack_5c = uStack_30;
  uStack_50 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0082b4d0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x00828060(uStack_5c,uStack_54,uStack_50,0);
    }
    else {
      func_0x0082c3f0(auStack_7c);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x00827ef0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0082b4d0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0082b7a0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [40];
  undefined8 uStack_5c;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f3015d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x5c,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_30,param_4);
  uStack_54 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_54 = uStack_28 & 1 | 0x119ec84;
  }
  memset(auStack_84,0,0x38);
  func_0x0082b980(param_2 + 0x34);
  uStack_5c = uStack_30;
  uStack_50 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0082acd0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x00827f80(uStack_5c,uStack_54,uStack_50,0);
    }
    else {
      func_0x0082c5d0(auStack_84);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0082acd0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0082bba0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [52];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f30535;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_48,0,0x30);
  func_0x00829f00(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0082a090();
  if (param_2 != '\0') {
    func_0x00829230();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651810();
  uStack_8 = 0xffffffff;
  func_0x0082a090();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0082bc50(int param_1)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int iStack_10;
