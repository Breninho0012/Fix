  auStack_34[4] = 0;
  auStack_34[5] = 0;
  func_0x0046bc40("onConnect",9,uVar3);
  uStack_8 = 0;
  uVar3 = func_0x00470bf0(auStack_34);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = 0xffffffff;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[4] = 0;
  auStack_34[5] = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  uStack_8 = 1;
  if (DAT_0145cff4 != (int *)0x0) {
    LOCK();
    DAT_0145cff4[1] = DAT_0145cff4[1] + 1;
    UNLOCK();
  }
  auStack_34[6] = DAT_0145cff0;
  piStack_18 = DAT_0145cff4;
  uStack_14 = 1;
  func_0x0046ffa0(auStack_34 + 6);
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
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
  if ((DAT_0145d0c8 & 0x40000) != 0) {
    func_0x005b1620();
  }
  if ((DAT_0145d0cc & 0x4000) != 0) {
    *(undefined1 *)((int)param_1 + 0x3f) = 1;
  }
  if ((DAT_0145d0c0 & 2) != 0) {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((DAT_0145d0c0 & 8) == 0) {
    func_0x005b17f0(0,0);
  }
  pcVar1 = *(code **)(*param_1 + 8);
  _guard_check_icall();
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0058df40(int *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  int *piStack_3c;
  uint uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf565;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[0x4e] = param_1[0x4e] + 1;
  param_1[0x4f] = param_1[0x4f] + *(int *)(*param_2 + 0x18);
  if ((*(char *)((int)param_1 + 0x9b) != '\0') &&
     (*(undefined1 *)((int)param_1 + 0x9b) = 0, (DAT_0145d0c4 & 0x20000000) != 0)) {
    if ((DAT_0145d0cc & 0x4000) == 0) {
      iVar4 = *param_2;
      piStack_3c = (int *)0x2;
      pcStack_40 = (char *)0x58dfcf;
      func_0x00802ce0();
      iVar3 = *(int *)(iVar4 + 0x14);
      uVar1 = *(undefined1 *)(iVar3 + 0x1d + iVar4);
      uVar2 = *(undefined1 *)(iVar3 + 0x1c + iVar4);
      *(int *)(iVar4 + 0x14) = iVar3 + 2;
      uVar6 = (uint)CONCAT11(uVar1,uVar2);
    }
    else {
      piStack_3c = (int *)0x58dfc0;
      uVar6 = FUN_00802a50();
    }
    iVar4 = *param_2;
    if (uVar6 != (*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14)) + *(int *)(iVar4 + 0x10)) {
      piStack_3c = (int *)0x14;
      uStack_1c = 0;
      pcStack_40 = "invalid message size";
      uStack_18 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_44 = 0x58e027;
      func_0x0046bc40();
      uStack_8 = 0;
      puStack_14 = (undefined1 *)&uStack_58;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      func_0x0046bc40("?onRecv@ProtocolGame@@MAEXABV?$shared_ptr@VInputMessage@@@std@@@Z",0x41);
      uStack_8 = uStack_8 & 0xffffff00;
      func_0x005eea60(3,&uStack_2c);
      uStack_8 = 0xffffffff;
      if (0xf < uStack_18) {
        func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
      }
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  piStack_3c = param_2;
  pcStack_40 = (char *)0x58e0b5;
  func_0x0058e4c0();
  pcVar5 = *(code **)(*param_1 + 8);
  pcStack_40 = (char *)0x58e0c2;
  _guard_check_icall();
  pcStack_40 = (char *)0x58e0c6;
  (*pcVar5)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0058e0e0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  uint auStack_44 [13];
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec530d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (DAT_0145d008 != 0) {
    if (param_1[2] == 1) {
      auStack_44[0xc] = ((uint)param_1[1] % 0x1ffff7) * 1000 + *param_1;
    }
    else {
      auStack_44[0xc] = *param_1;
    }
    uVar2 = func_0x00465870(auStack_5c,uVar1);
    iStack_8 = 0;
    auStack_44[4] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[5] = 0;
    func_0x0046bc40("onConnectionError",0x11);
    iStack_8._0_1_ = 1;
    auStack_44[10] = 0;
    auStack_44[6] = 0;
    auStack_44[7] = 0;
    auStack_44[8] = 0;
    auStack_44[9] = 0;
    auStack_44[0xb] = 0;
    func_0x0046bc40("g_game",6);
    iStack_8 = CONCAT31(iStack_8._1_3_,2);
    uVar1 = func_0x0049b090(auStack_44 + 6,auStack_44,uVar2,auStack_44 + 0xc);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    iStack_8._0_1_ = 1;
    if (0xf < auStack_44[0xb]) {
      func_0x0046b1f0(auStack_44 + 6,auStack_44[6],auStack_44[0xb]);
    }
    auStack_44[10] = 0;
    auStack_44[0xb] = 0xf;
    auStack_44[6] = auStack_44[6] & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < auStack_44[5]) {
      func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
    }
    auStack_44[4] = 0;
    auStack_44[5] = 0xf;
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_48) {
      func_0x0046b1f0(auStack_5c,auStack_5c[0],uStack_48);
    }
    uStack_4c = 0;
    uStack_48 = 0xf;
    auStack_5c[0] = auStack_5c[0] & 0xffffff00;
    func_0x0048e720();
  }
  FUN_00806ff0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_0058e2e0(void)

{
  return 1;
}



undefined4 * __thiscall FUN_0058e2f0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabde5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::codecvt_base::vftable;
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_0058e360(int param_1)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffff3ff | 0x200;
  return;
}



void FUN_0058e380(int param_1)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffff9ff | 0x800;
  return;
}



undefined4 * __thiscall FUN_0058e3c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac47e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  func_0x0046bc40(param_1 + 0x1c + iVar2,uVar1,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined2 __fastcall FUN_0058e440(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  func_0x00802ce0(2);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar1 = *(undefined1 *)(iVar3 + 0x1d + param_1);
  uVar2 = *(undefined1 *)(iVar3 + 0x1c + param_1);
  *(int *)(param_1 + 0x14) = iVar3;
  return CONCAT11(uVar1,uVar2);
}



undefined4 __fastcall FUN_0058e470(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  return CONCAT31((int3)(uVar1 >> 8),*(uint *)(param_1 + 0x18) <= uVar1);
}



undefined * Catch_0058e621(void)

{
  return &DAT_0058e627;
}



undefined1 * Catch_0058ef75(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBP;
  uint uVar8;
  
  *(undefined4 *)(unaff_EBP + -0x124) = DAT_0145d0f4;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x138) + 4);
  _guard_check_icall();
  uVar4 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x134) = uVar4;
  piVar2 = *(int **)(unaff_EBP + -300);
  iVar3 = *piVar2;
  *(int *)(unaff_EBP + -300) =
       (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14)) + *(int *)(iVar3 + 0x10);
  *(undefined4 *)(unaff_EBP + -0x120) = *(undefined4 *)(iVar3 + 0x18);
  func_0x00469d30(
                 "ProtocolGame parse message exception (%d bytes, %d unread, last opcode is 0x%02x (%d), prev opcode is 0x%02x (%d)): %s\nPacket has been saved to packet.log, you can use it to find what was wrong. (Protocol: %i)"
                 );
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uVar4 = func_0x005a8be0(unaff_EBP + -0x120,unaff_EBP + -300,unaff_EBP + -0x114,unaff_EBP + -0x114,
                          unaff_EBP + -0x11c,unaff_EBP + -0x11c,unaff_EBP + -0x134,
                          unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_005ee340(3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00469ba0();
  memset((void *)(unaff_EBP + -0x10c),0,0xb0);
  func_0x005a7120("packet.log",8,0x40,1);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int *)(unaff_EBP + -0xbc) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    func_0x0058f620();
    return &LAB_0058f08e;
  }
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x138) + 4);
  _guard_check_icall();
  uVar4 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x124) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x134) = DAT_0145d0f4;
  iVar3 = *piVar2;
  *(int *)(unaff_EBP + -300) =
       (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14)) + *(int *)(iVar3 + 0x10);
  *(undefined4 *)(unaff_EBP + -0x120) = *(undefined4 *)(iVar3 + 0x18);
  func_0x00469d30(
                 "ProtocolGame parse message exception (%d bytes, %d unread, last opcode is 0x%02x (%d), prev opcode is 0x%02x (%d), proto: %i): %s\n"
                 );
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uVar4 = func_0x005a8be0(unaff_EBP + -0x120,unaff_EBP + -300,unaff_EBP + -0x114,unaff_EBP + -0x114,
                          unaff_EBP + -0x11c,unaff_EBP + -0x11c,unaff_EBP + -0x134,
                          unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  func_0x0046b910(unaff_EBP + -0x10c,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00469ba0();
  FUN_0058e3c0(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar3 = *piVar2;
  uVar6 = *(int *)(unaff_EBP + -0x130) - *(int *)(iVar3 + 0x10);
  *(uint *)(unaff_EBP + -0x130) = uVar6;
  uVar7 = *(int *)(unaff_EBP + -0x128) - *(int *)(iVar3 + 0x10);
  *(uint *)(unaff_EBP + -0x128) = uVar7;
  uVar8 = 0;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    do {
      if (((uVar8 == uVar7) || (uVar8 == uVar6)) && (uVar8 != 0)) {
        func_0x0046b6e0(unaff_EBP + -0x10c,&DAT_0113d23c);
      }
      *(undefined1 *)(unaff_EBP + -0xcc + *(int *)(*(int *)(unaff_EBP + -0x10c) + 4)) = 0x30;
      uVar4 = func_0x00e73e96(unaff_EBP + -400,2,0);
      func_0x005a8ba0(unaff_EBP + -0x10c,uVar4);
      func_0x005a8180(FUN_0058e380);
      puVar5 = (undefined1 *)func_0x00469b10(uVar8);
      func_0x005a7fa0(*puVar5);
      uVar4 = func_0x005a8180(FUN_0058e360,&DAT_0113c2f0);
      func_0x0046b6e0(uVar4);
      uVar8 = uVar8 + 1;
      uVar6 = *(uint *)(unaff_EBP + -0x130);
      uVar7 = *(uint *)(unaff_EBP + -0x128);
    } while (uVar8 < *(uint *)(unaff_EBP + -0x1c));
  }
  func_0x0046b6e0(unaff_EBP + -0x10c,&DAT_0114074c);
  func_0x005a70e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  func_0x0058f620();
  return &LAB_0058f08e;
}



int __thiscall
FUN_005a3f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_8;
  
  if (param_5 < 8) {
    iVar2 = -1;
    iStack_8 = -1;
    iVar3 = 7;
  }
  else {
    iStack_8 = param_5 + 2;
    iVar3 = param_5 + -2;
    if (0xf < iStack_8) {
      iStack_8 = 0xf;
    }
    iStack_8 = iStack_8 + 1;
    iVar2 = 1;
    if (iVar3 == iStack_8) {
      return iStack_8;
    }
  }
  uVar1 = 0;
  param_5 = param_5 - iVar3;
  do {
    uVar1 = FUN_005a4000(param_2,param_3,param_4,iVar3,param_6,param_7,param_5,uVar1);
    iVar3 = iVar3 + iVar2;
    param_5 = param_5 - iVar2;
  } while (iVar3 != iStack_8);
  return param_1;
}



int FUN_005a4000(undefined4 param_1,int param_2,uint param_3,undefined2 param_4,int param_5,
                int param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iStack_24;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  iStack_24 = 0;
  if (param_5 < 1) {
    return param_8;
  }
  do {
    iVar4 = 0;
    if (0 < param_6) {
      uVar1 = iStack_24 + (param_7 & 0xffff) + param_2;
      uVar2 = uVar1 & 0xffff;
      do {
        uStack_c = CONCAT22(uStack_c._2_2_,param_4) & 0xffff00ff;
        uVar3 = (param_3 & 0xffff) + (param_7 & 0xffff) + iVar4;
        uStack_10 = uVar3 & 0xffff;
        uStack_14 = uVar2;
        if (param_8 == 0) {
          param_8 = FUN_005a40f0(param_1,CONCAT44(uVar3,uVar1) & 0xffff0000ffff,uStack_c);
        }
        else {
          FUN_00572f10(&uStack_14);
          param_8 = param_8 + -1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_6);
    }
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < param_5);
  return param_8;
}



// WARNING: Removing unreachable block (ram,0x005a437b)
// WARNING: Removing unreachable block (ram,0x005a4411)
// WARNING: Removing unreachable block (ram,0x005a441b)
// WARNING: Removing unreachable block (ram,0x005a4435)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005a40f0(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  uint uStack_7c;
  uint uStack_64;
  int iStack_38;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec7a4c;
  iStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  FUN_00572f10();
  iVar8 = *param_1;
  func_0x00802ce0();
  iVar4 = *(int *)(iVar8 + 0x14);
  uVar1 = *(undefined1 *)(iVar4 + 0x1d + iVar8);
  uVar2 = *(undefined1 *)(iVar4 + 0x1c + iVar8);
  *(int *)(iVar8 + 0x14) = iVar4;
  if (CONCAT11(uVar1,uVar2) < 0xff00) {
    if ((DAT_0145d0c8 & 0x4000000) != 0) {
      iVar8 = *param_1;
      func_0x00802ce0();
      iVar4 = *(int *)(iVar8 + 0x14);
      uVar1 = *(undefined1 *)(iVar4 + 0x1d + iVar8);
      uVar2 = *(undefined1 *)(iVar4 + 0x1c + iVar8);
      *(int *)(iVar8 + 0x14) = iVar4 + 2;
      iVar8 = *param_1;
      func_0x00802ce0();
      uVar3 = *(undefined1 *)(*(int *)(iVar8 + 0x14) + 0x1c + iVar8);
      *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
      piVar6 = (int *)FUN_005729b0();
      iVar8 = *piVar6;
      if (iVar8 != 0) {
        *(ushort *)(iVar8 + 0x4c) = CONCAT11(uVar1,uVar2);
        *(undefined1 *)(iVar8 + 0x4e) = uVar3;
      }
    }
    if (((DAT_0145d0c0 & 0x2000) != 0) && ((DAT_0145d0c8 & 0x2000000) == 0)) {
      iVar8 = *param_1;
      func_0x00802ce0();
      *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 2;
    }
    iStack_38 = 0;
    uVar5 = uStack_14;
    do {
      uStack_14 = uVar5;
      iVar8 = *param_1;
      func_0x00802ce0();
      iVar4 = *(int *)(iVar8 + 0x14);
      uVar1 = *(undefined1 *)(iVar4 + 0x1d + iVar8);
      uVar2 = *(undefined1 *)(iVar4 + 0x1c + iVar8);
      *(int *)(iVar8 + 0x14) = iVar4;
      if (0xfeff < CONCAT11(uVar1,uVar2)) {
        iVar8 = *param_1;
        goto LAB_005a4469;
      }
      if (((DAT_0145d0cc & 0x2000000) == 0) && (10 < iStack_38)) {
        uStack_14 = DAT_0145d0cc & 0x2000000;
        func_0x00488270();
        func_0x0046bc40();
        uStack_14._0_1_ = 2;
        uVar7 = func_0x004852c0();
        uStack_14._0_1_ = 3;
        func_0x0046bc40("?setTileDescription@ProtocolGame@@QAEHABV?$shared_ptr@VInputMessage@@@std@@VPosition@@@Z"
                        ,0x58);
        uStack_14._0_1_ = 3;
        func_0x005eea60(3,uVar7);
        uStack_14._0_1_ = 2;
        if (0xf < uStack_7c) {
          func_0x0046b1f0();
        }
        uStack_7c = 0xf;
        uStack_14 = 0xffffffff;
        if (0xf < uStack_64) {
          func_0x0046b1f0();
        }
        uStack_64 = 0xf;
      }
      FUN_005a4a40();
      uStack_14 = 5;
      FUN_00571480();
      uStack_14 = 0xffffffff;
      uVar5 = uStack_14;
      uStack_14 = 0xffffffff;
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < 0x100);
  }
  else {
    iVar8 = *param_1;
LAB_005a4469:
    func_0x00802ce0();
    *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 2;
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_005a44b0(undefined1 *param_1,int *param_2,char param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 *puVar13;
  int *unaff_FS_OFFSET;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char **ppcStack_a4;
  char *pcStack_a0;
  char **ppcStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_64;
  undefined1 *puStack_60;
  char *apcStack_5c [4];
  undefined4 uStack_4c;
  char **ppcStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char **ppcStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec7ad9;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_84 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  uStack_88 = 0x5a4506;
  uStack_24 = uStack_84;
  func_0x0058ac20();
  uStack_14 = 0;
  iVar7 = *param_2;
  if ((DAT_0145d0c4 & 0x400) == 0) {
    uStack_88 = 1;
    uStack_8c = 0x5a4559;
    func_0x00802ce0();
    bVar3 = *(byte *)(iVar7 + 0x1c + *(int *)(iVar7 + 0x14));
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    puStack_60 = (undefined1 *)(uint)bVar3;
  }
  else {
    uStack_88 = 2;
    uStack_8c = 0x5a4534;
    func_0x00802ce0();
    iVar8 = *(int *)(iVar7 + 0x14);
    uVar1 = *(undefined1 *)(iVar8 + 0x1d + iVar7);
    uVar2 = *(undefined1 *)(iVar8 + 0x1c + iVar7);
    *(int *)(iVar7 + 0x14) = iVar8 + 2;
    puStack_60 = (undefined1 *)(uint)CONCAT11(uVar1,uVar2);
  }
  puStack_28 = puStack_60;
  if (puStack_60 == (undefined1 *)0x0) {
    iVar7 = *param_2;
    uStack_8c = 2;
    uStack_90 = 0x5a4756;
    func_0x00802ce0();
    iVar8 = *(int *)(iVar7 + 0x14);
    uVar1 = *(undefined1 *)(iVar8 + 0x1d + iVar7);
    uVar2 = *(undefined1 *)(iVar8 + 0x1c + iVar7);
    *(int *)(iVar7 + 0x14) = iVar8 + 2;
    uVar9 = CONCAT11(uVar1,uVar2);
    uVar12 = (uint)uVar9;
    uStack_2c = uVar12;
    if (uVar12 == 0) {
      *param_1 = 2;
      *(undefined4 *)(param_1 + 8) = 0xd;
    }
    else {
      if ((uVar9 == 0) || ((uint)(DAT_0145d8a4 - DAT_0145d8a0 >> 3) <= uVar12)) {
        ppcStack_9c = (char **)&DAT_0000001c;
        uStack_34 = 0;
        pcStack_a0 = "invalid outfit looktypeex %d";
        ppcStack_30 = (char **)0x0;
        pcStack_44 = (char *)0x0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        ppcStack_a4 = (char **)0x5a47c8;
        func_0x0046bc40();
        uStack_14 = 4;
        ppcStack_a4 = (char **)&uStack_2c;
        uStack_a8 = 0x5a47de;
        uVar10 = func_0x00485670();
        uStack_14._0_1_ = 5;
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        ppcStack_a4 = (char **)0x0;
        func_0x0046bc40("?getOutfit@ProtocolGame@@QAE?AVOutfit@@ABV?$shared_ptr@VInputMessage@@@std@@_N@Z"
                        ,0x50);
        uStack_14._0_1_ = 5;
        func_0x005eea60(3,uVar10);
        uStack_14._0_1_ = 4;
        if (&DAT_0000000f < ppcStack_48) {
          ppcStack_9c = ppcStack_48;
          pcStack_a0 = apcStack_5c[0];
          ppcStack_a4 = apcStack_5c;
          uStack_a8 = 0x5a4835;
          func_0x0046b1f0();
        }
        uStack_4c = 0;
        ppcStack_48 = (char **)&DAT_0000000f;
        apcStack_5c[0] = (char *)((uint)apcStack_5c[0] & 0xffffff00);
        uStack_14 = (uint)uStack_14._1_3_ << 8;
        if (&DAT_0000000f < ppcStack_30) {
          ppcStack_9c = ppcStack_30;
          pcStack_a0 = pcStack_44;
          ppcStack_a4 = &pcStack_44;
          uStack_a8 = 0x5a4863;
          func_0x0046b1f0();
        }
        uStack_34 = 0;
        uVar12 = 0;
        ppcStack_30 = (char **)0xf;
        pcStack_44 = (char *)((uint)pcStack_44 & 0xffffff00);
      }
      *param_1 = 0;
      *(uint *)(param_1 + 8) = uVar12;
    }
  }
  else {
    *param_1 = 1;
    iVar7 = *param_2;
    uStack_8c = 1;
    uStack_90 = 0x5a4586;
    func_0x00802ce0();
    uStack_90 = 1;
    bVar3 = *(byte *)(iVar7 + 0x1c + *(int *)(iVar7 + 0x14));
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    iVar7 = *param_2;
    uStack_94 = 0x5a45a5;
    func_0x00802ce0();
    uStack_94 = 1;
    bVar4 = *(byte *)(iVar7 + 0x1c + *(int *)(iVar7 + 0x14));
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    iVar7 = *param_2;
    uStack_98 = 0x5a45c4;
    func_0x00802ce0();
    uStack_98 = 1;
    bVar5 = *(byte *)(iVar7 + 0x1c + *(int *)(iVar7 + 0x14));
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    iVar7 = *param_2;
    ppcStack_9c = (char **)0x5a45e3;
    func_0x00802ce0();
    uStack_64 = 0;
    bVar6 = *(byte *)(iVar7 + 0x1c + *(int *)(iVar7 + 0x14));
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    uStack_2c = (uint)bVar6;
    if ((DAT_0145d0c4 & 0x1000) != 0) {
      ppcStack_9c = (char **)0x1;
      iVar7 = *param_2;
      pcStack_a0 = (char *)0x5a461b;
      func_0x00802ce0();
      bVar6 = *(byte *)(iVar7 + 0x1c + *(int *)(iVar7 + 0x14));
      *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
      uStack_64 = (uint)bVar6;
    }
    if (((short)puStack_28 == 0) ||
       (puVar13 = puStack_28,
       (uint)(DAT_0145d8b0 - DAT_0145d8ac >> 3) <= ((uint)puStack_28 & 0xffff))) {
      ppcStack_9c = (char **)0x1a;
      uStack_34 = 0;
      pcStack_a0 = "invalid outfit looktype %d";
      ppcStack_30 = (char **)0x0;
      pcStack_44 = (char *)0x0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      ppcStack_a4 = (char **)0x5a4673;
      func_0x0046bc40();
      uStack_14 = 1;
      ppcStack_a4 = &puStack_60;
      uStack_a8 = 0x5a4689;
      uVar10 = func_0x00485670();
      uStack_14._0_1_ = 2;
      puStack_28 = (undefined1 *)&uStack_b8;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      ppcStack_a4 = (char **)0x0;
      func_0x0046bc40("?getOutfit@ProtocolGame@@QAE?AVOutfit@@ABV?$shared_ptr@VInputMessage@@@std@@_N@Z"
                      ,0x50);
      uStack_14._0_1_ = 2;
      func_0x005eea60(3,uVar10);
      uStack_14._0_1_ = 1;
      if (&DAT_0000000f < ppcStack_48) {
        ppcStack_9c = ppcStack_48;
        pcStack_a0 = apcStack_5c[0];
        ppcStack_a4 = apcStack_5c;
        uStack_a8 = 0x5a46e0;
        func_0x0046b1f0();
      }
      uStack_4c = 0;
      ppcStack_48 = (char **)&DAT_0000000f;
      apcStack_5c[0] = (char *)((uint)apcStack_5c[0] & 0xffffff00);
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (&DAT_0000000f < ppcStack_30) {
        ppcStack_9c = ppcStack_30;
        pcStack_a0 = pcStack_44;
        ppcStack_a4 = &pcStack_44;
        uStack_a8 = 0x5a470e;
        func_0x0046b1f0();
      }
      uStack_34 = 0;
      puVar13 = (undefined1 *)0x0;
      ppcStack_30 = (char **)0xf;
      pcStack_44 = (char *)((uint)pcStack_44 & 0xffffff00);
    }
    *(uint *)(param_1 + 0xc) = (uint)bVar3;
    *(uint *)(param_1 + 0x10) = (uint)bVar4;
    *(uint *)(param_1 + 0x14) = (uint)bVar5;
    *(uint *)(param_1 + 0x18) = uStack_2c;
    *(undefined1 **)(param_1 + 4) = puVar13;
    *(uint *)(param_1 + 0x1c) = uStack_64;
  }
  if (param_3 == '\0') {
    if ((DAT_0145d0c0 & 0x1000) != 0) {
      ppcStack_9c = (char **)0x2;
      iVar7 = *param_2;
      pcStack_a0 = (char *)0x5a48a7;
      func_0x00802ce0();
      iVar8 = *(int *)(iVar7 + 0x14);
      uVar1 = *(undefined1 *)(iVar8 + 0x1d + iVar7);
      uVar2 = *(undefined1 *)(iVar8 + 0x1c + iVar7);
      *(int *)(iVar7 + 0x14) = iVar8 + 2;
      *(uint *)(param_1 + 0x20) = (uint)CONCAT11(uVar1,uVar2);
    }
    if ((DAT_0145d0cc & 0x100) != 0) {
      ppcStack_9c = (char **)0x2;
      iVar7 = *param_2;
      pcStack_a0 = (char *)0x5a48e8;
      func_0x00802ce0();
      iVar8 = *(int *)(iVar7 + 0x14);
      pcStack_a0 = (char *)0x2;
      uVar1 = *(undefined1 *)(iVar8 + 0x1d + iVar7);
      uVar2 = *(undefined1 *)(iVar8 + 0x1c + iVar7);
      *(int *)(iVar7 + 0x14) = iVar8 + 2;
      *(uint *)(param_1 + 0x24) = (uint)CONCAT11(uVar1,uVar2);
      iVar7 = *param_2;
      ppcStack_a4 = (char **)0x5a4911;
      func_0x00802ce0();
      iVar8 = *(int *)(iVar7 + 0x14);
      uVar1 = *(undefined1 *)(iVar7 + 0x1d + iVar8);
      uVar2 = *(undefined1 *)(iVar7 + 0x1c + iVar8);
      *(int *)(iVar7 + 0x14) = iVar8 + 2;
      *(uint *)(param_1 + 0x28) = (uint)CONCAT11(uVar1,uVar2);
    }
    if ((DAT_0145d0cc & 0x400) != 0) {
      ppcStack_9c = apcStack_5c;
      pcStack_a0 = (char *)0x5a494e;
      pcVar11 = (char *)FUN_00802ac0();
      uStack_14 = 7;
      if (param_1 + 0x34 != pcVar11) {
        ppcStack_9c = *(char ***)(pcVar11 + 0x10);
        if (0xf < *(uint *)(pcVar11 + 0x14)) {
          pcVar11 = *(char **)pcVar11;
        }
        ppcStack_a4 = (char **)0x5a496e;
        pcStack_a0 = pcVar11;
        func_0x0046a660();
      }
      uStack_14 = uStack_14 & 0xffffff00;
      if (&DAT_0000000f < ppcStack_48) {
        ppcStack_9c = ppcStack_48;
        pcStack_a0 = apcStack_5c[0];
        ppcStack_a4 = apcStack_5c;
        uStack_a8 = 0x5a4987;
        func_0x0046b1f0();
      }
      uStack_4c = 0;
      ppcStack_48 = (char **)&DAT_0000000f;
      apcStack_5c[0] = (char *)((uint)apcStack_5c[0] & 0xffffff00);
    }
    if ((DAT_0145d0cc & 0x20000) != 0) {
      iVar7 = *param_2;
      ppcStack_9c = (char **)0x2;
      pcStack_a0 = (char *)0x5a49b9;
      func_0x00802ce0();
      pcStack_a0 = (char *)0x2;
      bVar3 = *(byte *)(*(int *)(iVar7 + 0x14) + 0x1c + iVar7);
      *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 2;
      *(uint *)(param_1 + 0x2c) = (uint)bVar3;
      iVar7 = *param_2;
      ppcStack_a4 = (char **)0x5a49ea;
      func_0x00802ce0();
      bVar3 = *(byte *)(*(int *)(iVar7 + 0x14) + 0x1c + iVar7);
      *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 2;
      *(uint *)(param_1 + 0x30) = (uint)bVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  uStack_90 = 0x5a4a2b;
  FUN_008ab370();
  return;
}



void FUN_005a4a40(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int *piStack_48;
  uint auStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ec7b77;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  iStack_8 = 0;
  iVar4 = *param_2;
  func_0x00802ce0(2,uStack_14);
  iVar5 = *(int *)(iVar4 + 0x14);
  uVar2 = *(undefined1 *)(iVar5 + 0x1d + iVar4);
  uVar3 = *(undefined1 *)(iVar5 + 0x1c + iVar4);
  *(int *)(iVar4 + 0x14) = iVar5 + 2;
  sVar9 = CONCAT11(uVar2,uVar3);
  if (sVar9 != 0) {
    if (((sVar9 == 0x61) || (sVar9 == 0x62)) || (sVar9 == 99)) {
      puVar10 = (undefined4 *)FUN_005a53f0(&uStack_50,param_2,sVar9);
      uVar7 = *puVar10;
      uVar8 = puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined4 *)param_1 = uVar7;
      piStack_48 = *(int **)((int)param_1 + 4);
      *(undefined4 *)((int)param_1 + 4) = uVar8;
      iStack_8._1_3_ = 0;
      iStack_8._0_1_ = 2;
      if (piStack_48 != (int *)0x0) {
        LOCK();
        iVar4 = piStack_48[1] + -1;
        piStack_48[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)*piStack_48;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          piVar1 = piStack_48 + 2;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            pcVar6 = *(code **)(*piStack_48 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    else if (sVar9 == 0x60) {
      iStack_8 = 4;
      iVar4 = *param_2;
      func_0x00802ce0(1);
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
      func_0x00466c80();
      FUN_00802ac0(auStack_2c);
      iStack_8._0_1_ = 5;
      FUN_00802ac0(auStack_44);
      iStack_8._0_1_ = 6;
      uStack_50 = 0;
      func_0x0047a5d0();
      func_0x004672c0(auStack_44);
      FUN_005b8290(auStack_2c);
      *(undefined4 *)((int)uStack_50 + 100) = uStack_60;
      *(undefined4 *)((int)uStack_50 + 0x68) = uStack_5c;
      *(undefined4 *)((int)uStack_50 + 0x6c) = uStack_58;
      *(undefined4 *)((int)uStack_50 + 0x70) = uStack_54;
      iStack_8._0_1_ = 5;
      if (0xf < uStack_30) {
        func_0x0046b1f0(auStack_44,auStack_44[0],uStack_30);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      auStack_44[0] = auStack_44[0] & 0xffffff00;
      iStack_8._0_1_ = 4;
      if (0xf < uStack_18) {
        func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
      }
      uVar7 = (int)uStack_50;
      uVar8 = uStack_50._4_4_;
      uStack_1c = 0;
      uStack_18 = 0xf;
      auStack_2c[0] = auStack_2c[0] & 0xffffff00;
      uStack_50 = 0;
      *(undefined4 *)param_1 = uVar7;
      piStack_48 = *(int **)((int)param_1 + 4);
      *(undefined4 *)((int)param_1 + 4) = uVar8;
      iStack_8._0_1_ = 4;
      if (piStack_48 != (int *)0x0) {
        LOCK();
        iVar4 = piStack_48[1] + -1;
        piStack_48[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)*piStack_48;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          iVar4 = piStack_48[2] + -1;
          piStack_48[2] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar6 = *(code **)(*piStack_48 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      piStack_48 = uStack_50._4_4_;
      if (uStack_50._4_4_ != (int *)0x0) {
        LOCK();
        iVar4 = uStack_50._4_4_[1] + -1;
        uStack_50._4_4_[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)*uStack_50._4_4_;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          piVar1 = piStack_48 + 2;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            pcVar6 = *(code **)(*piStack_48 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
    }
    else {
      puVar10 = (undefined4 *)FUN_005a6670(&uStack_50,param_2,sVar9,0);
      uVar7 = *puVar10;
      uVar8 = puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined4 *)param_1 = uVar7;
      piStack_48 = *(int **)((int)param_1 + 4);
      *(undefined4 *)((int)param_1 + 4) = uVar8;
      iStack_8._1_3_ = 0;
      iStack_8._0_1_ = 8;
      if (piStack_48 != (int *)0x0) {
        LOCK();
        iVar4 = piStack_48[1] + -1;
        piStack_48[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)*piStack_48;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          piVar1 = piStack_48 + 2;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            pcVar6 = *(code **)(*piStack_48 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x00469d30("invalid thing id (0)");
  iStack_8 = 1;
  func_0x0047d860();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



void __thiscall FUN_005a53f0(int param_1,int *param_2,uint *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte *****pppppbVar15;
  uint *puVar16;
  int *unaff_FS_OFFSET;
  bool bVar17;
  int aiStack_118 [3];
  undefined1 *puStack_10c;
  byte ****ppppbStack_108;
  byte ****ppppbStack_104;
  byte ****ppppbStack_100;
  byte ***pppbStack_fc;
  char *pcStack_f8;
  uint uStack_f4;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  byte ***pppbStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  uint uStack_b8;
  int *piStack_b4;
  char cStack_b0;
  char cStack_af;
  bool bStack_ae;
  undefined1 uStack_ad;
  uint uStack_ac;
  int *piStack_a8;
  uint *puStack_a4;
  int iStack_a0;
  int *piStack_9c;
  int *piStack_98;
  char cStack_91;
  undefined1 auStack_90 [52];
  byte ***apppbStack_5c [4];
  undefined4 uStack_4c;
  int *piStack_48;
  byte ****appppbStack_3c [4];
  undefined4 *puStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec7dca;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_f4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  piStack_b4 = param_2;
  puStack_a4 = param_3;
  uStack_b8 = 0;
  uStack_24 = uStack_f4;
  puVar8 = &stack0xfffffffc;
  if (param_4 == 0) {
    uVar14 = *param_3;
    pcStack_f8 = (char *)0x2;
    pppbStack_fc = (byte ***)0x5a5472;
    func_0x00802ce0();
    iVar11 = *(int *)(uVar14 + 0x14);
    uVar1 = *(undefined1 *)(uVar14 + 0x1d + iVar11);
    uVar2 = *(undefined1 *)(uVar14 + 0x1c + iVar11);
    *(int *)(uVar14 + 0x14) = iVar11 + 2;
    param_4 = (uint)CONCAT11(uVar1,uVar2);
    puVar8 = puStack_20;
  }
  puStack_20 = puVar8;
  puVar16 = puStack_a4;
  param_2[0] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iStack_14 = 0;
  uStack_b8 = 1;
  if ((param_4 == 0x62) || (param_4 == 0x61)) {
    piStack_a8 = (int *)*puStack_a4;
    pcStack_f8 = (char *)0x4;
    if (param_4 == 0x61) {
      pppbStack_fc = (byte ***)0x5a5932;
      func_0x00802ce0();
      pppbStack_fc = (byte ***)0x4;
      iVar11 = *(int *)((int)piStack_a8 + 0x14);
      uStack_ac = CONCAT22(CONCAT11(*(undefined1 *)((int)piStack_a8 + 0x1fU + iVar11),
                                    *(undefined1 *)((int)piStack_a8 + 0x1eU + iVar11)),
                           CONCAT11(*(undefined1 *)((int)piStack_a8 + 0x1dU + iVar11),
                                    *(undefined1 *)((int)piStack_a8 + 0x1cU + iVar11)));
      *(int *)((int)piStack_a8 + 0x14) = iVar11 + 4;
      uVar14 = *puVar16;
      ppppbStack_100 = (byte ****)0x5a598d;
      func_0x00802ce0();
      iVar11 = *(int *)(uVar14 + 0x14);
      piStack_a8 = (int *)CONCAT22(CONCAT11(*(undefined1 *)(uVar14 + 0x1f + iVar11),
                                            *(undefined1 *)(uVar14 + 0x1e + iVar11)),
                                   CONCAT11(*(undefined1 *)(uVar14 + 0x1d + iVar11),
                                            *(undefined1 *)(uVar14 + 0x1c + iVar11)));
      *(int *)(uVar14 + 0x14) = iVar11 + 4;
      if (piStack_a8 == (int *)uStack_ac) {
        ppppbStack_104 = (byte ****)auStack_dc;
        ppppbStack_108 = (byte ****)0x5a59e9;
        ppppbStack_100 = (byte ****)piStack_a8;
        piVar10 = (int *)FUN_005735c0();
        iVar11 = *piVar10;
        iVar4 = piVar10[1];
        *piVar10 = 0;
        piVar10[1] = 0;
        iStack_a0 = *param_2;
        *param_2 = iVar11;
        piStack_9c = (int *)param_2[1];
        param_2[1] = iVar4;
        iStack_14._1_3_ = 0;
        iStack_14._0_1_ = 5;
        piStack_98 = piStack_9c;
        if (piStack_9c != (int *)0x0) {
          LOCK();
          iVar11 = piStack_9c[1] + -1;
          piStack_9c[1] = iVar11;
          UNLOCK();
          if (iVar11 == 0) {
            pcVar5 = *(code **)*piStack_9c;
            ppppbStack_100 = (byte ****)0x5a5a60;
            _guard_check_icall();
            ppppbStack_100 = (byte ****)0x5a5a68;
            (*pcVar5)();
            LOCK();
            iVar11 = piStack_98[2] + -1;
            piStack_98[2] = iVar11;
            UNLOCK();
            if (iVar11 == 0) {
              pcVar5 = *(code **)(*piStack_98 + 4);
              ppppbStack_100 = (byte ****)0x5a5a85;
              _guard_check_icall();
              ppppbStack_100 = (byte ****)0x5a5a8d;
              (*pcVar5)();
            }
          }
        }
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        ppppbStack_100 = (byte ****)0x5a5a9c;
        FUN_00468340();
      }
      else {
        ppppbStack_100 = (byte ****)uStack_ac;
        ppppbStack_104 = (byte ****)0x5a5aa9;
        FUN_00573680();
      }
      if (((DAT_0145d0c8 & 0x2000000) != 0) && (0x4e3 < DAT_0145d0f4)) {
        ppppbStack_100 = (byte ****)0x1;
        uVar14 = *puStack_a4;
        ppppbStack_104 = (byte ****)0x5a5ad5;
        func_0x00802ce0();
        *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
      }
      if (DAT_0145d0f4 < 0x38e) {
        if (piStack_a8 < 0x10000000) {
LAB_005a5b29:
          uStack_ac = 2;
        }
        else if (piStack_a8 < 0x40000000) {
          uStack_ac = 0;
        }
        else {
          uStack_ac = 1;
          if (0x7fffffff < piStack_a8) goto LAB_005a5b29;
        }
      }
      else {
        ppppbStack_100 = (byte ****)0x1;
        uVar14 = *puStack_a4;
        ppppbStack_104 = (byte ****)0x5a5af5;
        func_0x00802ce0();
        bVar3 = *(byte *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
        *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
        uStack_ac = (uint)bVar3;
      }
      if (((DAT_0145d0c8 & 0x2000000) != 0) && (uStack_ac == 3)) {
        ppppbStack_100 = (byte ****)0x5a5b55;
        FUN_00802a50();
      }
      ppppbStack_100 = &pppbStack_d4;
      ppppbStack_104 = (byte ****)0x5a5b69;
      ppppbStack_100 = (byte ****)FUN_00802ac0();
      iStack_14 = 7;
      ppppbStack_104 = (byte ****)appppbStack_3c;
      ppppbStack_108 = (byte ****)0x5a5b7a;
      func_0x004990e0();
      iStack_14._0_1_ = 9;
      if (0xf < piStack_c0) {
        pppbStack_fc = (byte ***)piStack_c0;
        ppppbStack_100 = (byte ****)pppbStack_d4;
        ppppbStack_104 = &pppbStack_d4;
        ppppbStack_108 = (byte ****)0x5a5b9c;
        func_0x0046b1f0();
      }
      piVar10 = (int *)*param_2;
      uStack_c4 = 0;
      piStack_c0 = (int *)0xf;
      pppbStack_d4 = (byte ***)((uint)pppbStack_d4 & 0xffffff00);
      if (piVar10 == (int *)0x0) {
        piStack_98 = (int *)(param_1 + 0x130);
        pcVar5 = *(code **)(*(int *)*piStack_98 + 0xc);
        pppbStack_fc = (byte ***)0x5a5c7f;
        _guard_check_icall();
        pppbStack_fc = (byte ***)0x5a5c83;
        uVar14 = (*pcVar5)();
        param_2 = piStack_b4;
        if (piStack_a8 == (int *)uVar14) {
          pppbStack_fc = (byte ***)piStack_98;
          ppppbStack_100 = (byte ****)0x5a5c9f;
          func_0x004683d0();
          goto LAB_005a6043;
        }
        if (uStack_ac == 0) {
          pcVar5 = *(code **)(*(int *)*piStack_98 + 0xc);
          pppbStack_fc = (byte ***)0x5a5cc7;
          _guard_check_icall();
          pppbStack_fc = (byte ***)0x5a5ccb;
          iVar11 = (*pcVar5)();
          piVar10 = piStack_98;
          if (iVar11 == 0) {
            pppbStack_fc = (byte ***)&pppbStack_d4;
            ppppbStack_100 = (byte ****)0x5a5ce7;
            pbVar12 = (byte *)FUN_004b42d0();
            iStack_14 = CONCAT31(iStack_14._1_3_,10);
            uVar14 = 3;
            bVar17 = true;
            uStack_b8 = 3;
            piStack_98 = *(int **)(pbVar12 + 0x10);
            if (0xf < *(uint *)(pbVar12 + 0x14)) {
              pbVar12 = *(byte **)pbVar12;
            }
            pppppbVar15 = appppbStack_3c;
            if (0xf < uStack_28) {
              pppppbVar15 = (byte *****)appppbStack_3c[0];
            }
            if (puStack_2c != piStack_98) goto LAB_005a5d91;
            puVar7 = puStack_2c;
            if (puStack_2c != (undefined4 *)0x0) {
              while (puVar6 = puVar7 + -1, (undefined4 *)0x3 < puVar7) {
                if (*pppppbVar15 != *(byte *****)pbVar12) goto LAB_005a5d3e;
                pppppbVar15 = pppppbVar15 + 1;
                pbVar12 = pbVar12 + 4;
                puVar7 = puVar6;
              }
              if (puVar6 == (undefined4 *)0xfffffffc) {
LAB_005a5d72:
                uVar13 = 0;
              }
              else {
LAB_005a5d3e:
                bVar17 = *(byte *)pppppbVar15 < *pbVar12;
                if ((*(byte *)pppppbVar15 == *pbVar12) &&
                   ((puVar6 == (undefined4 *)0xfffffffd ||
                    ((bVar17 = *(byte *)((int)pppppbVar15 + 1) < pbVar12[1],
                     *(byte *)((int)pppppbVar15 + 1) == pbVar12[1] &&
                     ((puVar6 == (undefined4 *)0xfffffffe ||
                      ((bVar17 = *(byte *)((int)pppppbVar15 + 2) < pbVar12[2],
                       *(byte *)((int)pppppbVar15 + 2) == pbVar12[2] &&
                       ((puVar6 == (undefined4 *)0xffffffff ||
                        (bVar17 = *(byte *)((int)pppppbVar15 + 3) < pbVar12[3],
                        *(byte *)((int)pppppbVar15 + 3) == pbVar12[3])))))))))))) goto LAB_005a5d72;
                uVar13 = -(uint)bVar17 | 1;
              }
              uVar14 = 3;
              bVar17 = true;
              if (uVar13 != 0) goto LAB_005a5d91;
            }
            uVar14 = 3;
            bVar17 = true;
            cStack_91 = '\x01';
          }
          else {
            uVar14 = 1;
            bVar17 = false;
LAB_005a5d91:
            cStack_91 = '\0';
          }
          iStack_14._0_1_ = 9;
          iStack_14._1_3_ = 0;
          if (bVar17) {
            uStack_b8 = uVar14 & 0xfffffffd;
            pppbStack_fc = (byte ***)0x5a5db7;
            FUN_00469ba0();
          }
          param_2 = piStack_b4;
          if (cStack_91 == '\0') {
            pppbStack_fc = (byte ***)0x5a5dde;
            piVar10 = (int *)func_0x005a8fd0();
            param_2 = piStack_b4;
            iVar11 = *piVar10;
            iVar4 = piVar10[1];
            *piVar10 = 0;
            piVar10[1] = 0;
            iStack_a0 = *piStack_b4;
            *piStack_b4 = iVar11;
            piStack_9c = (int *)piStack_b4[1];
            piStack_b4[1] = iVar4;
            iStack_14._0_1_ = 0xb;
            piStack_98 = piStack_9c;
            if (piStack_9c != (int *)0x0) {
              LOCK();
              iVar11 = piStack_9c[1] + -1;
              piStack_9c[1] = iVar11;
              UNLOCK();
              if (iVar11 == 0) {
                pcVar5 = *(code **)*piStack_9c;
                pppbStack_fc = (byte ***)0x5a5e58;
                _guard_check_icall();
                pppbStack_fc = (byte ***)0x5a5e60;
                (*pcVar5)();
                LOCK();
                piVar10 = piStack_98 + 2;
                iVar11 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  pcVar5 = *(code **)(*piStack_98 + 4);
                  pppbStack_fc = (byte ***)0x5a5e7e;
                  _guard_check_icall();
                  pppbStack_fc = (byte ***)0x5a5e86;
                  (*pcVar5)();
                }
              }
            }
            iStack_14._0_1_ = 9;
            pppbStack_fc = (byte ***)0x5a5e95;
            FUN_00468340();
          }
          else {
            pppbStack_fc = (byte ***)piVar10;
            ppppbStack_100 = (byte ****)0x5a5dce;
            func_0x004683d0();
          }
        }
        else if (uStack_ac == 1) {
          pppbStack_fc = (byte ***)0x5a5eaa;
          pppbStack_fc = (byte ***)func_0x005a9170();
          iStack_14._0_1_ = 0xd;
LAB_005a5f97:
          param_2 = piStack_b4;
          ppppbStack_100 = (byte ****)0x5a5fa5;
          func_0x0046ffa0();
          iStack_14._0_1_ = 9;
          pppbStack_fc = (byte ***)0x5a5fb4;
          FUN_00468340();
        }
        else if (uStack_ac == 2) {
          pppbStack_fc = (byte ***)0x5a5ec7;
          piVar10 = (int *)func_0x005a9330();
          param_2 = piStack_b4;
          iVar11 = *piVar10;
          iVar4 = piVar10[1];
          *piVar10 = 0;
          piVar10[1] = 0;
          iStack_a0 = *piStack_b4;
          *piStack_b4 = iVar11;
          piStack_9c = (int *)piStack_b4[1];
          piStack_b4[1] = iVar4;
          iStack_14._0_1_ = 0xe;
          piStack_98 = piStack_9c;
          if (piStack_9c != (int *)0x0) {
            LOCK();
            iVar11 = piStack_9c[1] + -1;
            piStack_9c[1] = iVar11;
            UNLOCK();
            if (iVar11 == 0) {
              pcVar5 = *(code **)*piStack_9c;
              pppbStack_fc = (byte ***)0x5a5f41;
              _guard_check_icall();
              pppbStack_fc = (byte ***)0x5a5f49;
              (*pcVar5)();
              LOCK();
              piVar10 = piStack_98 + 2;
              iVar11 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                pcVar5 = *(code **)(*piStack_98 + 4);
                pppbStack_fc = (byte ***)0x5a5f67;
                _guard_check_icall();
                pppbStack_fc = (byte ***)0x5a5f6f;
                (*pcVar5)();
              }
            }
          }
          iStack_14._0_1_ = 9;
          pppbStack_fc = (byte ***)0x5a5f7e;
          FUN_00468340();
        }
        else {
          if (uStack_ac == 3) {
            pppbStack_fc = (byte ***)0x5a5f93;
            pppbStack_fc = (byte ***)func_0x005a9170();
            iStack_14._0_1_ = 0x10;
            goto LAB_005a5f97;
          }
          pppbStack_fc = (byte ***)0x18;
          uStack_c4 = 0;
          ppppbStack_100 = (byte ****)0x11411c0;
          piStack_c0 = (int *)0x0;
          pppbStack_d4 = (byte ***)0x0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          ppppbStack_104 = (byte ****)0x5a5fe9;
          func_0x0046bc40();
          iStack_14._0_1_ = 0x11;
          piStack_9c = aiStack_118;
          aiStack_118[0] = 0;
          aiStack_118[1] = 0;
          aiStack_118[2] = 0;
          puStack_10c = (undefined1 *)0x0;
          ppppbStack_108 = (byte ****)0x0;
          ppppbStack_104 = (byte ****)0x0;
          func_0x0046bc40("?getCreature@ProtocolGame@@QAE?AV?$shared_ptr@VCreature@@@std@@ABV?$shared_ptr@VInputMessage@@@3@H@Z"
                          ,100);
          iStack_14._0_1_ = 0x11;
          func_0x005eea60(3,&pppbStack_d4);
          iStack_14._0_1_ = 9;
          pppbStack_fc = (byte ***)0x5a603d;
          FUN_00469ba0();
          param_2 = piStack_b4;
        }
LAB_005a6043:
        piStack_98 = (int *)*param_2;
        if (piStack_98 != (int *)0x0) {
          pppbStack_fc = (byte ***)piStack_a8;
          pcVar5 = *(code **)(*piStack_98 + 8);
          ppppbStack_100 = (byte ****)0x5a6066;
          _guard_check_icall();
          ppppbStack_100 = (byte ****)0x5a606e;
          (*pcVar5)();
          piVar10 = (int *)*param_2;
          if (piVar10[0x50] != piVar10[0x51]) {
            piVar10[0x51] = piVar10[0x50];
          }
          piStack_98 = piVar10;
          if ((byte *****)(piVar10 + 0x4a) != appppbStack_3c) {
            ppppbStack_100 = (byte ****)puStack_2c;
            ppppbStack_104 = (byte ****)appppbStack_3c;
            if (0xf < uStack_28) {
              ppppbStack_104 = appppbStack_3c[0];
            }
            ppppbStack_108 = (byte ****)0x5a60a1;
            func_0x0046a660();
          }
          if (piVar10[0x5a] != 0) {
            ppppbStack_100 = (byte ****)&iStack_a0;
            iStack_a0 = -1;
            ppppbStack_104 = (byte ****)0x5;
            piStack_9c = (int *)0xffffffff;
            puStack_10c = (undefined1 *)0x5a60cb;
            ppppbStack_108 = (byte ****)(piVar10 + 0x4a);
            func_0x00617c40();
            piVar10[0x53] = iStack_a0;
            piVar10[0x54] = (int)piStack_9c;
          }
          *(undefined1 *)(piVar10 + 0x55) = 1;
          if ((byte *****)(piStack_98 + 0xd) != appppbStack_3c) {
            ppppbStack_100 = (byte ****)puStack_2c;
            ppppbStack_104 = (byte ****)appppbStack_3c;
            if (0xf < uStack_28) {
              ppppbStack_104 = appppbStack_3c[0];
            }
            ppppbStack_108 = (byte ****)0x5a6102;
            func_0x0046a660();
          }
          ppppbStack_104 = (byte ****)0x5a6108;
          ppppbStack_100 = (byte ****)param_2;
          func_0x00573490();
        }
      }
      else {
        if (piVar10[0x50] != piVar10[0x51]) {
          piVar10[0x51] = piVar10[0x50];
        }
        piStack_98 = piVar10;
        if ((byte *****)(piVar10 + 0x4a) != appppbStack_3c) {
          pppbStack_fc = (byte ***)puStack_2c;
          ppppbStack_100 = (byte ****)appppbStack_3c;
          if (0xf < uStack_28) {
            ppppbStack_100 = appppbStack_3c[0];
          }
          ppppbStack_104 = (byte ****)0x5a5bf5;
          func_0x0046a660();
        }
        if (piVar10[0x5a] != 0) {
          pppbStack_fc = (byte ***)&iStack_a0;
          iStack_a0 = -1;
          ppppbStack_100 = (byte ****)0x5;
          piStack_9c = (int *)0xffffffff;
          ppppbStack_108 = (byte ****)0x5a5c1f;
          ppppbStack_104 = (byte ****)(piVar10 + 0x4a);
          func_0x00617c40();
          piVar10[0x53] = iStack_a0;
          piVar10[0x54] = (int)piStack_9c;
        }
        *(undefined1 *)(piVar10 + 0x55) = 1;
        if ((byte *****)(piStack_98 + 0xd) != appppbStack_3c) {
          pppbStack_fc = (byte ***)puStack_2c;
          ppppbStack_100 = (byte ****)appppbStack_3c;
          if (0xf < uStack_28) {
            ppppbStack_100 = appppbStack_3c[0];
          }
          ppppbStack_104 = (byte ****)0x5a5c5a;
          func_0x0046a660();
        }
      }
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      if (0xf < uStack_28) {
        pppbStack_fc = (byte ***)uStack_28;
        ppppbStack_100 = appppbStack_3c[0];
        ppppbStack_104 = (byte ****)appppbStack_3c;
        ppppbStack_108 = (byte ****)0x5a6121;
        func_0x0046b1f0();
      }
      puStack_2c = (undefined4 *)0x0;
      uStack_28 = 0xf;
      appppbStack_3c[0] = (byte ****)((uint)appppbStack_3c[0] & 0xffffff00);
    }
    else {
      pppbStack_fc = (byte ***)0x5a5763;
      func_0x00802ce0();
      iVar11 = *(int *)((int)piStack_a8 + 0x14);
      pppbStack_fc = (byte ***)
                     CONCAT22(CONCAT11(*(undefined1 *)((int)piStack_a8 + 0x1fU + iVar11),
                                       *(undefined1 *)((int)piStack_a8 + 0x1eU + iVar11)),
                              CONCAT11(*(undefined1 *)((int)piStack_a8 + 0x1dU + iVar11),
                                       *(undefined1 *)((int)piStack_a8 + 0x1cU + iVar11)));
      *(int *)((int)piStack_a8 + 0x14) = iVar11 + 4;
      ppppbStack_100 = (byte ****)auStack_dc;
      ppppbStack_104 = (byte ****)0x5a57b3;
      piVar10 = (int *)FUN_005735c0();
      iVar11 = *piVar10;
      iVar4 = piVar10[1];
      *piVar10 = 0;
      piVar10[1] = 0;
      iStack_a0 = *param_2;
      *param_2 = iVar11;
      piStack_9c = (int *)param_2[1];
      param_2[1] = iVar4;
      iStack_14._1_3_ = 0;
      iStack_14._0_1_ = 1;
      piStack_98 = piStack_9c;
      if (piStack_9c != (int *)0x0) {
        LOCK();
        iVar11 = piStack_9c[1] + -1;
        piStack_9c[1] = iVar11;
        UNLOCK();
        if (iVar11 == 0) {
          pcVar5 = *(code **)*piStack_9c;
          pppbStack_fc = (byte ***)0x5a582a;
          _guard_check_icall();
          pppbStack_fc = (byte ***)0x5a5832;
          (*pcVar5)();
          LOCK();
          piVar10 = piStack_98 + 2;
          iVar11 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            pcVar5 = *(code **)(*piStack_98 + 4);
            pppbStack_fc = (byte ***)0x5a5850;
            _guard_check_icall();
            pppbStack_fc = (byte ***)0x5a5858;
            (*pcVar5)();
          }
        }
      }
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      pppbStack_fc = (byte ***)0x5a5867;
      FUN_00468340();
      if (*param_2 == 0) {
        pppbStack_fc = (byte ***)0x32;
        uStack_c4 = 0;
        ppppbStack_100 = (byte ****)0x11411dc;
        piStack_c0 = (int *)0x0;
        pppbStack_d4 = (byte ***)0x0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        ppppbStack_104 = (byte ****)0x5a58a0;
        func_0x0046bc40();
        iStack_14 = 3;
        piStack_9c = aiStack_118;
        aiStack_118[0] = 0;
        aiStack_118[1] = 0;
        aiStack_118[2] = 0;
        puStack_10c = (undefined1 *)0x0;
        ppppbStack_108 = (byte ****)0x0;
        ppppbStack_104 = (byte ****)0x0;
        func_0x0046bc40("?getCreature@ProtocolGame@@QAE?AV?$shared_ptr@VCreature@@@std@@ABV?$shared_ptr@VInputMessage@@@3@H@Z"
                        ,100);
        iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
        iStack_14._0_1_ = 3;
        func_0x005eea60(3,&pppbStack_d4);
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        if (0xf < piStack_c0) {
          pppbStack_fc = (byte ***)piStack_c0;
          ppppbStack_100 = (byte ****)pppbStack_d4;
          ppppbStack_104 = &pppbStack_d4;
          ppppbStack_108 = (byte ****)0x5a590a;
          func_0x0046b1f0();
        }
        uStack_c4 = 0;
        piStack_c0 = (int *)0xf;
        pppbStack_d4 = (byte ***)((uint)pppbStack_d4 & 0xffffff00);
      }
    }
    pppbStack_fc = (byte ***)0x1;
    uVar14 = *puStack_a4;
    ppppbStack_100 = (byte ****)0x5a6147;
    func_0x00802ce0();
    uStack_ad = 0xff;
    uStack_ac = CONCAT31((int3)((uint)extraout_ECX >> 8),
                         *(undefined1 *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14)));
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    if ((DAT_0145d0cc & 0x4000000) != 0) {
      ppppbStack_100 = (byte ****)0x1;
      uVar14 = *puStack_a4;
      ppppbStack_104 = (byte ****)0x5a6182;
      func_0x00802ce0();
      cVar9 = *(char *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
      *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
      if (cVar9 == '\x01') {
        ppppbStack_100 = (byte ****)0x1;
        uVar14 = *puStack_a4;
        ppppbStack_104 = (byte ****)0x5a61a3;
        func_0x00802ce0();
        uStack_ad = *(undefined1 *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
        *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
      }
    }
    ppppbStack_100 = (byte ****)0x1;
    uVar14 = *puStack_a4;
    ppppbStack_104 = (byte ****)0x5a61c5;
    func_0x00802ce0();
    puVar16 = puStack_a4;
    ppppbStack_104 = (byte ****)0x0;
    bVar3 = *(byte *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    puStack_10c = auStack_90;
    ppppbStack_108 = (byte ****)puStack_a4;
    aiStack_118[2] = 0x5a61f1;
    FUN_005a44b0();
    iStack_14 = 0x13;
    uVar14 = *puVar16;
    ppppbStack_104 = (byte ****)0x1;
    ppppbStack_108 = (byte ****)0x5a6203;
    func_0x00802ce0();
    ppppbStack_108 = (byte ****)0x1;
    uStack_bc = *(undefined1 *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14);
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    uVar14 = *puStack_a4;
    puStack_10c = (undefined1 *)0x5a6225;
    func_0x00802ce0();
    puStack_10c = (undefined1 *)0x2;
    uStack_bb = *(undefined1 *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14);
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    uVar14 = *puStack_a4;
    aiStack_118[2] = 0x5a6247;
    func_0x00802ce0();
    iVar11 = *(int *)(uVar14 + 0x14);
    uVar1 = *(undefined1 *)(iVar11 + 0x1d + uVar14);
    uVar2 = *(undefined1 *)(iVar11 + 0x1c + uVar14);
    *(int *)(uVar14 + 0x14) = iVar11 + 2;
    uStack_ba = CONCAT11(uVar1,uVar2);
    if (((DAT_0145d0c8 & 0x2000000) != 0) && (0x4d7 < DAT_0145d0f4)) {
      aiStack_118[2] = 1;
      uVar14 = *puStack_a4;
      aiStack_118[1] = 0x5a6290;
      func_0x00802ce0();
      *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    }
    aiStack_118[2] = 1;
    uVar14 = *puStack_a4;
    aiStack_118[1] = 0x5a62a4;
    func_0x00802ce0();
    aiStack_118[1] = 1;
    uStack_d8 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                         *(undefined1 *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14));
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    uVar14 = *puStack_a4;
    aiStack_118[0] = 0x5a62c6;
    func_0x00802ce0();
    cStack_af = -1;
    piStack_98 = (int *)CONCAT31(piStack_98._1_3_,0xff);
    piStack_9c = (int *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                 *(undefined1 *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14));
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    cStack_91 = -1;
    piStack_a8 = (int *)CONCAT31(piStack_a8._1_3_,0xff);
    cStack_b0 = -1;
    if (((DAT_0145d0c0 & 0x4000) != 0) && (param_4 == 0x61)) {
      pppbStack_fc = (byte ***)0x1;
      uVar14 = *puStack_a4;
      ppppbStack_100 = (byte ****)0x5a6322;
      func_0x00802ce0();
      cStack_af = *(char *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
      *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
      piStack_98 = (int *)CONCAT31(piStack_98._1_3_,cStack_af);
    }
    if ((DAT_0145d0c4 & 0x200) != 0) {
      pppbStack_fc = (byte ***)0x1;
      uVar14 = *puStack_a4;
      ppppbStack_100 = (byte ****)0x5a635c;
      func_0x00802ce0();
      puVar16 = puStack_a4;
      cStack_91 = *(char *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
      *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
      piStack_a8 = (int *)CONCAT31(piStack_a8._1_3_,cStack_91);
      if ((DAT_0145d0c8 & 0x2000000) != 0) {
        if (cStack_91 == '\x03') {
          pppbStack_fc = (byte ***)0x5a6394;
          FUN_00802a50();
        }
        if ((0x4be < DAT_0145d0f4) && (cStack_91 == '\0')) {
          uVar14 = *puVar16;
          pppbStack_fc = (byte ***)0x1;
          ppppbStack_100 = (byte ****)0x5a63b5;
          func_0x00802ce0();
          *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
        }
      }
    }
    if ((DAT_0145d0c4 & 0x400000) != 0) {
      pppbStack_fc = (byte ***)0x1;
      uVar14 = *puStack_a4;
      ppppbStack_100 = (byte ****)0x5a63db;
      func_0x00802ce0();
      cStack_b0 = *(char *)(uVar14 + 0x1c + *(int *)(uVar14 + 0x14));
      *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    }
    if ((DAT_0145d0f4 < 0x356) && ((DAT_0145d0c8 & 0x400000) == 0)) {
      bStack_ae = false;
    }
    else {
      pppbStack_fc = (byte ***)0x1;
      uVar14 = *puStack_a4;
      ppppbStack_100 = (byte ****)0x5a6420;
      func_0x00802ce0();
      bStack_ae = *(char *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14) == '\0';
      *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    }
    if (*param_2 != 0) {
      pppbStack_fc = (byte ***)uStack_ac;
      ppppbStack_100 = (byte ****)0x5a6449;
      FUN_004772e0();
      if ((DAT_0145d0cc & 0x4000000) != 0) {
        *(undefined1 *)(*param_2 + 0x4d) = uStack_ad;
      }
      *(uint *)(*param_2 + 0x50) = (uint)bVar3;
      pppbStack_fc = (byte ***)auStack_90;
      ppppbStack_100 = (byte ****)0x5a647c;
      FUN_004774e0();
      pppbStack_fc = (byte ***)(uint)uStack_ba;
      ppppbStack_100 = (byte ****)0x5a649c;
      FUN_00477cc0();
      pppbStack_fc = (byte ***)uStack_d8;
      ppppbStack_100 = (byte ****)0x5a64a9;
      FUN_00477ed0();
      pppbStack_fc = (byte ***)piStack_9c;
      ppppbStack_100 = (byte ****)0x5a64b6;
      FUN_00477fc0();
      *(bool *)(*param_2 + 0xf2) = bStack_ae;
      iVar11 = *param_2;
      *(undefined1 *)(iVar11 + 0xb0) = uStack_bb;
      *(undefined4 *)(iVar11 + 0xa8) = 0;
      *(undefined4 *)(iVar11 + 0xac) = 0;
      *(undefined1 *)(iVar11 + 0xb1) = uStack_bc;
      if (cStack_af != -1) {
        pppbStack_fc = (byte ***)piStack_98;
        ppppbStack_100 = (byte ****)0x5a6508;
        FUN_004780a0();
      }
      if (cStack_91 != -1) {
        pppbStack_fc = (byte ***)piStack_a8;
        ppppbStack_100 = (byte ****)0x5a651e;
        func_0x00478180();
      }
      if (cStack_b0 != -1) {
        iVar11 = *param_2;
        pppbStack_fc = (byte ***)0xc;
        *(char *)(iVar11 + 0xc4) = cStack_b0;
        ppppbStack_100 = (byte ****)0x113c218;
        uStack_c4 = 0;
        pppbStack_d4 = (byte ***)0x0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        piStack_c0 = (int *)0x0;
        ppppbStack_104 = (byte ****)0x5a656a;
        func_0x0046bc40();
        iStack_14 = CONCAT31(iStack_14._1_3_,0x14);
        ppppbStack_108 = &pppbStack_d4;
        puStack_10c = (undefined1 *)0x5a657d;
        ppppbStack_104 = (byte ****)(iVar11 + 0xc4);
        uVar14 = func_0x0047af80();
        if (0 < (int)uVar14) {
          pppbStack_fc = (byte ***)~uVar14;
          ppppbStack_100 = DAT_0145e9f0;
          ppppbStack_104 = (byte ****)0x5a658f;
          func_0x00d66d90();
        }
        iStack_14 = CONCAT31(iStack_14._1_3_,0x13);
        if (&DAT_0000000f < piStack_c0) {
          pppbStack_fc = (byte ***)piStack_c0;
          ppppbStack_100 = (byte ****)pppbStack_d4;
          ppppbStack_104 = &pppbStack_d4;
          ppppbStack_108 = (byte ****)0x5a65b4;
          func_0x0046b1f0();
        }
        uStack_c4 = 0;
        piStack_c0 = (int *)0xf;
        pppbStack_d4 = (byte ***)((uint)pppbStack_d4 & 0xffffff00);
        param_2 = piStack_b4;
      }
      iVar11 = *(int *)(param_1 + 0x130);
      if ((*param_2 == iVar11) && (*(char *)(iVar11 + 0x411) == '\0')) {
        *(undefined1 *)(iVar11 + 0x411) = 1;
      }
    }
    iStack_14 = 0;
    if (&DAT_0000000f < piStack_48) {
      pppbStack_fc = (byte ***)piStack_48;
      ppppbStack_100 = (byte ****)apppbStack_5c[0];
      ppppbStack_104 = apppbStack_5c;
      ppppbStack_108 = (byte ****)0x5a6614;
      func_0x0046b1f0();
    }
    uStack_4c = 0;
    piStack_48 = (int *)&DAT_0000000f;
    apppbStack_5c[0] = (byte ***)((uint)apppbStack_5c[0] & 0xffffff00);
    goto LAB_005a6629;
  }
  if (param_4 != 99) {
    pcStack_f8 = "invalid creature opcode";
    pppbStack_fc = (byte ***)0x5a665b;
    func_0x00469d30();
    iStack_14 = 0x1b;
    pppbStack_fc = (byte ***)0x5a666d;
    func_0x0047d860();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcStack_f8 = (char *)0x5a54de;
  pcStack_f8 = (char *)FUN_00802a50();
  pppbStack_fc = (byte ***)auStack_dc;
  ppppbStack_100 = (byte ****)0x5a54f0;
  piVar10 = (int *)FUN_005735c0();
  iVar11 = *piVar10;
  iVar4 = piVar10[1];
  *piVar10 = 0;
  piVar10[1] = 0;
  iStack_a0 = *param_2;
  *param_2 = iVar11;
  piStack_9c = (int *)param_2[1];
  param_2[1] = iVar4;
  iStack_14._1_3_ = 0;
  iStack_14._0_1_ = 0x16;
  piStack_98 = piStack_9c;
  if (piStack_9c != (int *)0x0) {
    LOCK();
    iVar11 = piStack_9c[1] + -1;
    piStack_9c[1] = iVar11;
    UNLOCK();
    if (iVar11 == 0) {
      pcVar5 = *(code **)*piStack_9c;
      pcStack_f8 = (char *)0x5a5567;
      _guard_check_icall();
      pcStack_f8 = (char *)0x5a556f;
      (*pcVar5)();
      LOCK();
      piVar10 = piStack_98 + 2;
      iVar11 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      puVar16 = puStack_a4;
      if (iVar11 == 1) {
        pcVar5 = *(code **)(*piStack_98 + 4);
        pcStack_f8 = (char *)0x5a558d;
        _guard_check_icall();
        pcStack_f8 = (char *)0x5a5595;
        (*pcVar5)();
        puVar16 = puStack_a4;
      }
    }
  }
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  pcStack_f8 = (char *)0x5a55aa;
  FUN_00468340();
  if (*param_2 == 0) {
    pcStack_f8 = (char *)0x10;
    uStack_c4 = 0;
    pppbStack_fc = (byte ***)0x11412e4;
    piStack_c0 = (int *)0x0;
    pppbStack_d4 = (byte ***)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    ppppbStack_100 = (byte ****)0x5a55e3;
    func_0x0046bc40();
    iStack_14 = 0x18;
    piStack_9c = aiStack_118 + 1;
    aiStack_118[0] = 100;
    aiStack_118[1] = 0;
    aiStack_118[2] = 0;
    puStack_10c = (undefined1 *)0x0;
    ppppbStack_108 = (byte ****)0x0;
    ppppbStack_104 = (byte ****)0x0;
    ppppbStack_100 = (byte ****)0x0;
    func_0x0046bc40(
                   "?getCreature@ProtocolGame@@QAE?AV?$shared_ptr@VCreature@@@std@@ABV?$shared_ptr@VInputMessage@@@3@H@Z"
                   );
    iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
    iStack_14._0_1_ = 0x18;
    func_0x005eea60(3,&pppbStack_d4);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    pcStack_f8 = (char *)0x5a563a;
    FUN_00469ba0();
  }
  uVar14 = *puVar16;
  pcStack_f8 = (char *)0x1;
  pppbStack_fc = (byte ***)0x5a5645;
  func_0x00802ce0();
  bVar3 = *(byte *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14);
  *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
  if (*param_2 != 0) {
    pppbStack_fc = (byte ***)&iStack_a0;
    ppppbStack_100 = (byte ****)0x5a566d;
    piVar10 = (int *)FUN_00472ad0();
    iStack_14 = 0x1a;
    uStack_b8 = 5;
    if ((*param_2 == *piVar10) && (DAT_0145d125 != '\0')) {
      pppbStack_fc = (byte ***)0x5a;
      ppppbStack_100 = (byte ****)0x5a5699;
      cVar9 = FUN_00467460();
      cStack_91 = '\0';
      if (cVar9 == '\0') goto LAB_005a56a4;
    }
    else {
LAB_005a56a4:
      cStack_91 = '\x01';
    }
    iStack_14 = 0;
    uStack_b8 = 1;
    pppbStack_fc = (byte ***)0x5a56d1;
    FUN_00468340();
    if (cStack_91 != '\0') {
      pcVar5 = *(code **)(*(int *)*param_2 + 0x6c);
      ppppbStack_100 = (byte ****)0x5a56ea;
      pppbStack_fc = (byte ***)(uint)bVar3;
      _guard_check_icall();
      ppppbStack_100 = (byte ****)0x5a56ee;
      (*pcVar5)();
      param_2 = piStack_b4;
    }
  }
  if ((0x3b8 < DAT_0145d0f4) || ((DAT_0145d0cc & 0x10) != 0)) {
    pppbStack_fc = (byte ***)0x1;
    uVar14 = *puStack_a4;
    ppppbStack_100 = (byte ****)0x5a5724;
    func_0x00802ce0();
    cVar9 = *(char *)(*(int *)(uVar14 + 0x14) + 0x1c + uVar14);
    *(int *)(uVar14 + 0x14) = *(int *)(uVar14 + 0x14) + 1;
    if (*param_2 != 0) {
      *(bool *)(*param_2 + 0xf2) = cVar9 == '\0';
    }
  }
LAB_005a6629:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_005a6670(int *param_1,int *param_2,uint param_3,char param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  ushort uVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  longlong lVar15;
  uint auStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int *piStack_20;
  ulonglong uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ec7e3e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_20 = param_2;
  uStack_24 = param_3;
  if (param_3 == 0) {
    iVar10 = *param_2;
    func_0x00802ce0(2,uStack_14);
    iVar5 = *(int *)(iVar10 + 0x14);
    uVar2 = *(undefined1 *)(iVar10 + 0x1d + iVar5);
    uVar3 = *(undefined1 *)(iVar10 + 0x1c + iVar5);
    *(int *)(iVar10 + 0x14) = iVar5 + 2;
    uStack_24 = (uint)CONCAT11(uVar2,uVar3);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  FUN_004a76b0(param_1,uStack_24,1);
  uStack_8 = 0;
  pcVar6 = *(code **)(*(int *)*param_1 + 0xc);
  _guard_check_icall();
  iVar10 = (*pcVar6)();
  if (iVar10 == 0) {
    func_0x00469d30("unable to create item with invalid id %d");
    uStack_8 = 1;
    func_0x00485670(&uStack_24);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    func_0x0047d860();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = *(code **)(*(int *)*param_1 + 0x40);
  _guard_check_icall();
  iVar10 = (*pcVar6)();
  if ((((uint)(*(int *)(iVar10 + 0x1c) - *(int *)(iVar10 + 0x18) >> 2) < 6) ||
      (*(int *)(*(int *)(iVar10 + 0x18) + 0x14) == 0)) && (cVar9 = func_0x0058e480(), cVar9 == '\0')
     ) {
    cVar9 = FUN_004a6e70();
    if ((cVar9 == '\0') && (cVar9 = func_0x004a6eb0(), cVar9 == '\0')) {
      pcVar6 = *(code **)(*(int *)*param_1 + 0x40);
      _guard_check_icall();
      (*pcVar6)();
      cVar9 = FUN_004b26a0();
      if ((cVar9 != '\0') &&
         ((cVar9 = FUN_00467460(0x59), cVar9 != '\0' || (cVar9 = FUN_00467460(0x7b), cVar9 != '\0'))
         )) {
        iVar10 = *piStack_20;
        func_0x00802ce0(1);
        cVar9 = *(char *)(iVar10 + 0x1c + *(int *)(iVar10 + 0x14));
        *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
        if (cVar9 != '\0') {
          iVar10 = *param_1;
          uVar11 = FUN_00802a50();
          *(undefined4 *)(iVar10 + 0x98) = uVar11;
        }
      }
      goto LAB_005a6808;
    }
    iVar10 = *param_1;
LAB_005a67e8:
    iVar5 = *piStack_20;
    func_0x00802ce0(1);
    bVar4 = *(byte *)(iVar5 + 0x1c + *(int *)(iVar5 + 0x14));
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
    uVar13 = (ushort)bVar4;
  }
  else {
    iVar10 = *param_1;
    if ((DAT_0145d0cc & 0x1000) == 0) goto LAB_005a67e8;
    iVar5 = *piStack_20;
    func_0x00802ce0(2);
    iVar7 = *(int *)(iVar5 + 0x14);
    uVar2 = *(undefined1 *)(iVar5 + 0x1d + iVar7);
    uVar3 = *(undefined1 *)(iVar5 + 0x1c + iVar7);
    *(int *)(iVar5 + 0x14) = iVar7 + 2;
    uVar13 = CONCAT11(uVar2,uVar3);
  }
  *(ushort *)(iVar10 + 0x34) = uVar13;
LAB_005a6808:
  piVar14 = piStack_20;
  if ((DAT_0145d0c0 & 0x8000) != 0) {
    pcVar6 = *(code **)(*(int *)*param_1 + 0x40);
    _guard_check_icall();
    iVar10 = (*pcVar6)();
    piVar14 = piStack_20;
    if (1 < *(int *)(iVar10 + 0x50)) {
      iVar10 = *piStack_20;
      func_0x00802ce0(1);
      *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
    }
  }
  if (((DAT_0145d0c8 & 0x20000000) != 0) && (param_4 != '\0')) {
    iVar10 = *param_1;
    puVar12 = (undefined4 *)FUN_00802ac0(auStack_3c);
    uStack_8 = 3;
    if ((undefined4 *)(iVar10 + 0x58) != puVar12) {
      puVar1 = puVar12 + 4;
      if (0xf < (uint)puVar12[5]) {
        puVar12 = (undefined4 *)*puVar12;
      }
      func_0x0046a660(puVar12,*puVar1);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < uStack_28) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],uStack_28);
    }
    uStack_2c = 0;
    uStack_28 = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  }
  if ((DAT_0145d0d0 & 4) != 0) {
    iVar10 = *param_1;
    puVar12 = (undefined4 *)FUN_00802ac0(auStack_3c);
    uStack_8 = 4;
    if ((undefined4 *)(iVar10 + 0x70) != puVar12) {
      puVar1 = puVar12 + 4;
      if (0xf < (uint)puVar12[5]) {
        puVar12 = (undefined4 *)*puVar12;
      }
      func_0x0046a660(puVar12,*puVar1);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < uStack_28) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],uStack_28);
    }
    uStack_2c = 0;
    uStack_28 = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  }
  if ((DAT_0145d0cc & 0x40000000) != 0) {
    iVar10 = *piVar14;
    func_0x00802ce0(2);
    iVar5 = *(int *)(iVar10 + 0x14);
    uVar13 = CONCAT11(*(undefined1 *)(iVar10 + 0x1d + iVar5),*(undefined1 *)(iVar10 + 0x1c + iVar5))
    ;
    *(int *)(iVar10 + 0x14) = iVar5 + 2;
    uVar8 = (uint)uVar13;
    if (uVar13 != 0) {
      do {
        uStack_24 = uVar8;
        iVar10 = *piVar14;
        func_0x00802ce0(2);
        piVar14 = piStack_20;
        iVar5 = *(int *)(iVar10 + 0x14);
        uVar2 = *(undefined1 *)(iVar5 + 0x1d + iVar10);
        uVar3 = *(undefined1 *)(iVar5 + 0x1c + iVar10);
        *(int *)(iVar10 + 0x14) = iVar5 + 2;
        uStack_1c = FUN_00802a90();
        func_0x004c8260(CONCAT11(uVar2,uVar3),&uStack_1c);
        uStack_24 = uStack_24 - 1;
        uVar8 = uStack_24;
      } while (uStack_24 != 0);
    }
  }
  if ((DAT_0145d0d0 & 8) != 0) {
    iVar10 = *piVar14;
    func_0x00802ce0(1);
    cVar9 = *(char *)(*(int *)(iVar10 + 0x14) + 0x1c + iVar10);
    *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
    if (cVar9 == '\x01') {
      iVar10 = *piStack_20;
      func_0x00802ce0(2);
      iVar5 = *(int *)(iVar10 + 0x14);
      uVar2 = *(undefined1 *)(iVar10 + 0x1d + iVar5);
      uVar3 = *(undefined1 *)(iVar10 + 0x1c + iVar5);
      *(int *)(iVar10 + 0x14) = iVar5 + 2;
      uStack_1c = (ulonglong)CONCAT11(uVar2,uVar3);
      func_0x004c8260(0x1b59,&uStack_1c);
      piVar14 = piStack_20;
    }
    iVar10 = *piVar14;
    func_0x00802ce0(1);
    cVar9 = *(char *)(*(int *)(iVar10 + 0x14) + 0x1c + iVar10);
    *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
    if (cVar9 == '\x01') {
      iVar10 = *piStack_20;
      func_0x00802ce0(1);
      bVar4 = *(byte *)(iVar10 + 0x1c + *(int *)(iVar10 + 0x14));
      *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
      uStack_1c = (ulonglong)bVar4;
      func_0x004c8260(0x1b5d,&uStack_1c);
      iVar10 = *piStack_20;
      func_0x00802ce0(1);
      bVar4 = *(byte *)(iVar10 + 0x1c + *(int *)(iVar10 + 0x14));
      *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
      uStack_1c = (ulonglong)bVar4;
      func_0x004c8260(0x1b5a,&uStack_1c);
      lVar15 = FUN_004b38b0(0x1b5a);
      if (lVar15 == 1) {
        uStack_1c = _time64((__time64_t *)0x0);
        func_0x004c8260(0x1b5c,&uStack_1c);
      }
      uStack_1c = FUN_00802a90();
      func_0x004c8260(0x1b5b,&uStack_1c);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005a6bd0(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_2;
  func_0x00802ce0(2);
  iVar7 = *(int *)(iVar6 + 0x14);
  uVar1 = *(undefined1 *)(iVar7 + 0x1d + iVar6);
  uVar2 = *(undefined1 *)(iVar7 + 0x1c + iVar6);
  *(int *)(iVar6 + 0x14) = iVar7 + 2;
  iVar6 = *param_2;
  func_0x00802ce0(2);
  iVar7 = *(int *)(iVar6 + 0x14);
  uVar3 = *(undefined1 *)(iVar7 + 0x1c + iVar6);
  uVar4 = *(undefined1 *)(iVar7 + 0x1d + iVar6);
  *(int *)(iVar6 + 0x14) = iVar7 + 2;
  iVar6 = *param_2;
  func_0x00802ce0(1);
  bVar5 = *(byte *)(*(int *)(iVar6 + 0x14) + 0x1c + iVar6);
  *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  *param_1 = (uint)CONCAT11(uVar1,uVar2);
  param_1[1] = (uint)CONCAT11(uVar4,uVar3);
  *(ushort *)(param_1 + 2) = (ushort)bVar5;
  return;
}



void __thiscall FUN_005a7370(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)func_0x005a9690(param_2);
  pcVar1 = *(code **)(*piVar3 + 0xc);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(int **)(param_1 + 0x38) = piVar3;
  func_0x0046adc0();
  return;
}



int __fastcall FUN_005a73c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x13] != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    _guard_check_icall(0xffffffff);
    iVar2 = (*pcVar1)();
    if (iVar2 != -1) {
      iVar2 = fflush((FILE *)param_1[0x13]);
      return (-1 < iVar2) - 1;
    }
  }
  return 0;
}



int __thiscall FUN_005a7400(int param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  
  if ((param_2 == (char *)0x0) && (param_3 == 0 && param_4 == 0)) {
    iVar1 = 4;
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = setvbuf(*(FILE **)(param_1 + 0x4c),param_2,iVar1,param_3);
    if (iVar1 == 0) {
      func_0x005a8420(*(undefined4 *)(param_1 + 0x4c),1);
      return param_1;
    }
  }
  return 0;
}



void __thiscall
FUN_005a7460(int param_1,int *param_2,uint param_3,int param_4,uint param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_1c [4];
  int iStack_18;
  int iStack_14;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_1c;
  iStack_18 = param_5 + param_3;
  iStack_14 = param_6 + param_4 + (uint)CARRY4(param_5,param_3);
  if (*(int *)(param_1 + 0x4c) != 0) {
    cVar2 = func_0x005a8330();
    if (cVar2 != '\0') {
      iVar3 = fsetpos(*(FILE **)(param_1 + 0x4c),(fpos_t *)&iStack_18);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x40) = param_7;
        *(undefined4 *)(param_1 + 0x44) = param_8;
        if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
          iVar3 = *(int *)(param_1 + 0x54);
          iVar1 = *(int *)(param_1 + 0x50);
          **(int **)(param_1 + 0xc) = iVar1;
          **(int **)(param_1 + 0x1c) = iVar1;
          **(int **)(param_1 + 0x2c) = iVar3 - iVar1;
        }
        iVar3 = *(int *)(param_1 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        *param_2 = iStack_18;
        param_2[1] = iStack_14;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = iVar3;
        param_2[5] = iVar1;
        goto LAB_005a752a;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = -1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
LAB_005a752a:
  FUN_008ab370();
  return;
}



void __thiscall FUN_005a7540(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int unaff_EDI;
  bool bVar5;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&iStack_1c;
  if (((**(int **)(param_1 + 0x1c) == param_1 + 0x3c) && (param_5 == 1)) &&
     (*(int *)(param_1 + 0x38) == 0)) {
    bVar5 = param_3 != 0;
    param_3 = param_3 + -1;
    param_4 = param_4 + -1 + (uint)bVar5;
  }
  iStack_1c = param_4;
  if ((((*(int *)(param_1 + 0x4c) == 0) || (cVar3 = func_0x005a8330(), cVar3 == '\0')) ||
      (((param_3 != 0 || iStack_1c != 0 || (param_5 != 1)) &&
       (iVar4 = _fseeki64(*(FILE **)(param_1 + 0x4c),CONCAT44(param_5,iStack_1c),unaff_EDI),
       iVar4 != 0)))) ||
     (iVar4 = fgetpos(*(FILE **)(param_1 + 0x4c),(fpos_t *)&uStack_18), iVar4 != 0)) {
    *param_2 = 0xffffffff;
    param_2[1] = 0xffffffff;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined8 *)(param_2 + 4) = 0;
  }
  else {
    func_0x005a8300();
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *param_2 = uStack_18;
    param_2[1] = uStack_14;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = uVar1;
    param_2[5] = uVar2;
  }
  FUN_008ab370();
  return;
}



undefined8 __thiscall FUN_005a7640(int *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 *puStack_20;
  int iStack_18;
  
  if (param_1[0xe] != 0) {
    puStack_20 = param_2;
    iVar5 = param_4;
    uVar7 = param_3;
    if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
      do {
        if (*(void **)param_1[8] == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)param_1[0xc];
        }
        iStack_18 = (int)uVar6 >> 0x1f;
        if ((iStack_18 < 0) || ((-1 < (int)uVar6 || iStack_18 < 0 && (uVar6 == 0)))) {
          pcVar2 = *(code **)(*param_1 + 0xc);
          _guard_check_icall(*puStack_20);
          iVar3 = (*pcVar2)();
          if (iVar3 == -1) break;
          bVar8 = uVar7 != 0;
          uVar7 = uVar7 - 1;
          uVar6 = 1;
          iVar5 = iVar5 + -1 + (uint)bVar8;
        }
        else {
          if ((iVar5 <= iStack_18) && ((iVar5 < iStack_18 || (uVar7 < uVar6)))) {
            uVar6 = uVar7;
            iStack_18 = iVar5;
          }
          memcpy(*(void **)param_1[8],puStack_20,uVar6);
          bVar8 = uVar7 < uVar6;
          uVar7 = uVar7 - uVar6;
          iVar5 = (iVar5 - iStack_18) - (uint)bVar8;
          piVar1 = (int *)param_1[0xc];
          *piVar1 = *piVar1 - uVar6;
          *(int *)param_1[8] = *(int *)param_1[8] + uVar6;
        }
        puStack_20 = puStack_20 + uVar6;
        if ((iVar5 < 1) && ((iVar5 < 0 || (uVar7 == 0)))) break;
      } while( true );
    }
    return CONCAT44((param_4 - iVar5) - (uint)(param_3 < uVar7),param_3 - uVar7);
  }
  if (*(void **)param_1[8] == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)param_1[0xc];
  }
  iStack_18 = (int)uVar7 >> 0x1f;
  uVar6 = param_3;
  iVar5 = param_4;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    if ((-1 < iStack_18) && (((int)uVar7 < 0 && -1 < iStack_18 || (uVar7 != 0)))) {
      if ((param_4 <= iStack_18) && ((param_4 < iStack_18 || (param_3 < uVar7)))) {
        iStack_18 = param_4;
        uVar7 = param_3;
      }
      memcpy(*(void **)param_1[8],param_2,uVar7);
      param_2 = param_2 + uVar7;
      uVar6 = param_3 - uVar7;
      piVar1 = (int *)param_1[0xc];
      iVar5 = (param_4 - iStack_18) - (uint)(param_3 < uVar7);
      *piVar1 = *piVar1 - uVar7;
      *(int *)param_1[8] = *(int *)param_1[8] + uVar7;
      if ((iVar5 < 0) || ((iVar5 < 1 && (uVar6 == 0)))) goto LAB_005a77f8;
    }
    if ((FILE *)param_1[0x13] != (FILE *)0x0) {
      sVar4 = fwrite(param_2,1,uVar6,(FILE *)param_1[0x13]);
      bVar8 = uVar6 < sVar4;
      uVar6 = uVar6 - sVar4;
      iVar5 = iVar5 - (uint)bVar8;
    }
  }
LAB_005a77f8:
  return CONCAT44((param_4 - iVar5) - (uint)(param_3 < uVar6),param_3 - uVar6);
}



undefined8 __thiscall FUN_005a7810(int *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined1 *_Size;
  uint _Size_00;
  uint _Count;
  bool bVar7;
  undefined1 *puStack_1c;
  int iStack_18;
  int iStack_c;
  
  puStack_1c = param_2;
  if ((param_4 < 1) && ((param_4 < 0 || (param_3 == 0)))) {
    return 0;
  }
  if (param_1[0xe] == 0) {
    _Count = param_3;
    if ((*(void **)param_1[7] != (void *)0x0) && (uVar3 = *(uint *)param_1[0xb], uVar3 != 0)) {
      _Size_00 = param_3;
      if (uVar3 < param_3) {
        _Size_00 = uVar3;
      }
      memcpy(param_2,*(void **)param_1[7],_Size_00);
      puStack_1c = param_2 + _Size_00;
      _Count = param_3 - _Size_00;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - _Size_00;
      *(int *)param_1[7] = *(int *)param_1[7] + _Size_00;
    }
    if (param_1[0x13] != 0) {
      if (*(int **)param_1[3] == param_1 + 0xf) {
        iVar5 = param_1[0x15];
        iVar4 = param_1[0x14];
        *(int *)param_1[3] = iVar4;
        *(int *)param_1[7] = iVar4;
        *(int *)param_1[0xb] = iVar5 - iVar4;
      }
      do {
        if (_Count < 0x1000) {
          if (_Count != 0) {
            sVar6 = fread(puStack_1c,1,_Count,(FILE *)param_1[0x13]);
            _Count = _Count - sVar6;
          }
          break;
        }
        sVar6 = fread(puStack_1c,1,0xfff,(FILE *)param_1[0x13]);
        puStack_1c = puStack_1c + sVar6;
        _Count = _Count - sVar6;
      } while (sVar6 == 0xfff);
    }
    return CONCAT44(param_4 - (uint)(param_3 < _Count),param_3 - _Count);
  }
  iStack_18 = param_4;
  puStack_1c = (undefined1 *)param_3;
  do {
    if (*(void **)param_1[7] == (void *)0x0) {
      _Size = (undefined1 *)0x0;
    }
    else {
      _Size = *(undefined1 **)param_1[0xb];
    }
    iStack_c = (int)_Size >> 0x1f;
    if ((iStack_c < 0) || ((-1 < (int)_Size || iStack_c < 0 && (_Size == (undefined1 *)0x0)))) {
      pcVar2 = *(code **)(*param_1 + 0x1c);
      _guard_check_icall();
      iVar5 = (*pcVar2)();
      if (iVar5 == -1) {
LAB_005a7912:
        return CONCAT44((param_4 - iStack_18) - (uint)(param_3 < puStack_1c),
                        param_3 - (int)puStack_1c);
      }
      _Size = (undefined1 *)0x1;
      bVar7 = puStack_1c != (undefined1 *)0x0;
      puStack_1c = (undefined1 *)((int)puStack_1c - 1);
      *param_2 = (char)iVar5;
      iStack_18 = iStack_18 + -1 + (uint)bVar7;
    }
    else {
      if ((iStack_18 <= iStack_c) && ((iStack_18 < iStack_c || (puStack_1c < _Size)))) {
        iStack_c = iStack_18;
        _Size = puStack_1c;
      }
      memcpy(param_2,*(void **)param_1[7],(size_t)_Size);
      bVar7 = puStack_1c < _Size;
      puStack_1c = (undefined1 *)((int)puStack_1c - (int)_Size);
      piVar1 = (int *)param_1[0xb];
      iStack_18 = (iStack_18 - iStack_c) - (uint)bVar7;
      *piVar1 = *piVar1 - (int)_Size;
      *(int *)param_1[7] = *(int *)param_1[7] + (int)_Size;
    }
    param_2 = param_2 + (int)_Size;
    if ((iStack_18 < 1) && ((iStack_18 < 0 || (puStack_1c == (undefined1 *)0x0))))
    goto LAB_005a7912;
  } while( true );
}



// WARNING: Type propagation algorithm not settling

void __fastcall FUN_005a79f0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *******pppppppuVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_38;
  int iStack_34;
  undefined4 *******pppppppuStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec7f7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar9 = **(uint **)(param_1 + 0x1c);
  uStack_14 = uVar4;
  if ((uVar9 == 0) || (piVar1 = *(int **)(param_1 + 0x2c), *piVar1 + uVar9 <= uVar9)) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
        iVar5 = *(int *)(param_1 + 0x54);
        iVar2 = *(int *)(param_1 + 0x50);
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = iVar2;
        **(int **)(param_1 + 0x2c) = iVar5 - iVar2;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        fgetc(*(FILE **)(param_1 + 0x4c));
      }
      else {
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0xf;
        pppppppuStack_30 = (undefined4 *******)0x0;
        uStack_8 = 0;
        iVar5 = fgetc(*(FILE **)(param_1 + 0x4c));
        if (iVar5 != -1) {
LAB_005a7ae0:
          func_0x00469a20(iVar5,uVar4);
          pppppppuVar7 = &pppppppuStack_30;
          if (0xf < uStack_1c) {
            pppppppuVar7 = pppppppuStack_30;
          }
          pcVar3 = *(code **)(**(int **)(param_1 + 0x38) + 0x18);
          pppppppuVar8 = &pppppppuStack_30;
          if (0xf < uStack_1c) {
            pppppppuVar8 = pppppppuStack_30;
          }
          _guard_check_icall(param_1 + 0x40,pppppppuVar8,(int)pppppppuVar7 + uStack_20,&iStack_34,
                             &uStack_15,&uStack_14,&puStack_38);
          iVar5 = (*pcVar3)();
          if ((iVar5 == 0) || (iVar5 == 1)) {
            if (puStack_38 == &uStack_15) goto code_r0x005a7b4c;
            pppppppuVar7 = &pppppppuStack_30;
            if (0xf < uStack_1c) {
              pppppppuVar7 = pppppppuStack_30;
            }
            for (iVar5 = (uStack_20 - iStack_34) + (int)pppppppuVar7; 0 < iVar5; iVar5 = iVar5 + -1)
            {
              ungetc((int)*(char *)(iVar5 + -1 + iStack_34),*(FILE **)(param_1 + 0x4c));
            }
          }
        }
LAB_005a7b9e:
        uStack_8 = 0xffffffff;
        if (0xf < uStack_1c) {
          func_0x0046b1f0(&pppppppuStack_30,pppppppuStack_30,uStack_1c);
        }
        uStack_20 = 0;
        uStack_1c = 0xf;
        pppppppuStack_30 = (undefined4 *******)((uint)pppppppuStack_30 & 0xffffff00);
      }
    }
  }
  else {
    *piVar1 = *piVar1 + -1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
code_r0x005a7b4c:
  pppppppuVar7 = &pppppppuStack_30;
  if (0xf < uStack_1c) {
    pppppppuVar7 = pppppppuStack_30;
  }
  uVar9 = iStack_34 - (int)pppppppuVar7;
  if (uStack_20 < (uint)(iStack_34 - (int)pppppppuVar7)) {
    uVar9 = uStack_20;
  }
  pppppppuVar7 = &pppppppuStack_30;
  if (0xf < uStack_1c) {
    pppppppuVar7 = pppppppuStack_30;
  }
  uVar6 = uStack_20 - uVar9;
  func_0x008ab0e6(pppppppuVar7,(int)pppppppuVar7 + uVar9,uVar6 + 1);
  uStack_20 = uVar6;
  iVar5 = fgetc(*(FILE **)(param_1 + 0x4c));
  if (iVar5 == -1) goto LAB_005a7b9e;
  goto LAB_005a7ae0;
}



uint __fastcall FUN_005a7c50(int *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
  pcVar2 = *(code **)(*param_1 + 0x1c);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  pcVar2 = *(code **)(*param_1 + 0x10);
  _guard_check_icall(uVar3);
  (*pcVar2)();
  return uVar3;
}



uint __thiscall FUN_005a7cb0(int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = **(uint **)(param_1 + 0x1c);
  if (((uVar2 != 0) && (**(uint **)(param_1 + 0xc) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(int *)(param_1 + 0x38) == 0) &&
       (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x4c)), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (undefined1 *)(param_1 + 0x3c);
    if ((undefined1 *)**(int **)(param_1 + 0x1c) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (undefined1 *)**(int **)(param_1 + 0xc);
      if (puVar3 != puVar1) {
        *(undefined1 **)(param_1 + 0x50) = puVar3;
        *(int *)(param_1 + 0x54) = **(int **)(param_1 + 0x2c) + **(int **)(param_1 + 0x1c);
      }
      **(int **)(param_1 + 0xc) = (int)puVar1;
      **(int **)(param_1 + 0x1c) = (int)puVar1;
      **(undefined4 **)(param_1 + 0x2c) = 1;
      return param_2;
    }
  }
  return 0xffffffff;
}



void __thiscall FUN_005a7d60(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  size_t sVar6;
  char cVar7;
  size_t _Count;
  int *piVar8;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [32];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    FUN_008ab370();
    return;
  }
  uVar1 = **(uint **)(param_1 + 0x20);
  cVar7 = (char)param_2;
  if (uVar1 != 0) {
    iVar5 = **(int **)(param_1 + 0x30);
    if (uVar1 < iVar5 + uVar1) {
      **(int **)(param_1 + 0x30) = iVar5 + -1;
      pcVar2 = (char *)**(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x20) = (int)(pcVar2 + 1);
      *pcVar2 = cVar7;
      FUN_008ab370();
      return;
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
      iVar5 = *(int *)(param_1 + 0x54);
      iVar3 = *(int *)(param_1 + 0x50);
      **(int **)(param_1 + 0xc) = iVar3;
      **(int **)(param_1 + 0x1c) = iVar3;
      **(int **)(param_1 + 0x2c) = iVar5 - iVar3;
    }
    piVar8 = *(int **)(param_1 + 0x38);
    if (piVar8 == (int *)0x0) {
      fputc((int)cVar7,*(FILE **)(param_1 + 0x4c));
      FUN_008ab370(piVar8);
      return;
    }
    uStack_2c = CONCAT31(uStack_2c._1_3_,cVar7);
    pcVar4 = *(code **)(*piVar8 + 0x1c);
    _guard_check_icall(param_1 + 0x40,&uStack_2c,(int)&uStack_2c + 1,&uStack_34,auStack_28,&uStack_8
                       ,&iStack_30);
    iVar5 = (*pcVar4)();
    if ((iVar5 == 0) || (iVar5 == 1)) {
      _Count = iStack_30 - (int)auStack_28;
      if ((_Count == 0) ||
         (sVar6 = fwrite(auStack_28,1,_Count,*(FILE **)(param_1 + 0x4c)), _Count == sVar6)) {
        *(undefined1 *)(param_1 + 0x3d) = 1;
        FUN_008ab370(piVar8);
        return;
      }
    }
    else if (iVar5 == 3) {
      func_0x0058e3a0(uStack_2c,*(undefined4 *)(param_1 + 0x4c));
      FUN_008ab370(piVar8);
      return;
    }
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_005a7ef0(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) {
    _unlock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}



void __fastcall FUN_005a7f00(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) {
    _lock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}



undefined * Catch_005a80ce(void)

{
  func_0x0046a610(4,1);
  return &DAT_005a80ea;
}



undefined4 __thiscall FUN_005a81e0(undefined4 param_1,byte param_2)

{
  func_0x005a7f10();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



uint FUN_005a8250(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  if ((uint)(param_3 - param_2) < param_4) {
    param_4 = param_3 - param_2;
  }
  return param_4;
}



undefined4
FUN_005a8270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_2;
  return 3;
}



undefined4
FUN_005a8290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}



undefined4 * __thiscall FUN_005a87f0(undefined4 *param_1,byte param_2)

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
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_005a9c90(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<class_Npc>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x308);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005a9cc0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x308);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005a9cf0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x308);
  }
  return param_1;
}



undefined4 * __thiscall FUN_005a9d20(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb8);
  }
  return param_1;
}



undefined1 * Catch_005ac0a1(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  uVar2 = func_0x0046b6e0(&DAT_0145c370,"CAST ERROR: ");
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  uVar2 = func_0x0046b6e0(uVar2,uVar3);
  func_0x004849e0(uVar2);
  FUN_00469c30(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
  return &LAB_005ac0ef;
}



TypeDescriptor * FUN_005af2b0(void)

{
  return &`private:_void___thiscall_ProtocolGame::parseFloorDescription(class_std::shared_ptr<>_const&)'
          ::__l5::<lambda_2>::RTTI_Type_Descriptor;
}



void FUN_005af2c0(void)

{
  uint uVar1;
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
  puStack_c = &DAT_00ec6235;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x0046bc40("onMapDescription",0x10,uVar1);
  uStack_8 = 0;
  auStack_28[4] = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[5] = 0;
  func_0x0046bc40("g_game",6);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar1 = func_0x0049b8f0(auStack_28,&uStack_40);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
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
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void FUN_005af3d0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



TypeDescriptor * FUN_005af3e0(void)

{
  return &`private:_void___thiscall_ProtocolGame::parseFloorDescription(class_std::shared_ptr<>_const&)'
          ::__l10::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005af3f0(void)

{
  uint uVar1;
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
  puStack_c = &DAT_00ec6235;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x0046bc40("onMapKnown",10,uVar1);
  uStack_8 = 0;
  auStack_28[4] = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[5] = 0;
  func_0x0046bc40("g_game",6);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar1 = func_0x0049b8f0(auStack_28,&uStack_40);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
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
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void FUN_005af500(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



TypeDescriptor * FUN_005af510(void)

{
  return &`private:_void___thiscall_ProtocolGame::parseMapDescription(class_std::shared_ptr<>_const&)'
          ::__l2::<lambda_2>::RTTI_Type_Descriptor;
}



void FUN_005af520(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



TypeDescriptor * FUN_005af530(void)

{
  return &`private:_void___thiscall_ProtocolGame::parseMapDescription(class_std::shared_ptr<>_const&)'
          ::__l10::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005af540(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



undefined4 __thiscall FUN_005b07a0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb4f3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00473420(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2f8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_005b0e6d(void)

{
  func_0x0046a610(4,1);
  return &DAT_005b0e86;
}



int __thiscall FUN_005b1310(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x68;
  func_0x0058f620();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0xb0);
  }
  return iVar1;
}



void __fastcall FUN_005b1320(int param_1)

{
  *(undefined1 *)(param_1 + 0x3e) = 1;
  return;
}



int __fastcall FUN_005b1330(int param_1)

{
  return param_1 + 0x4c;
}



undefined4 __thiscall FUN_005b1340(int param_1,undefined4 param_2)

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
  func_0x00469da0(param_1 + 0x80,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_005b13a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb5dae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004c7e60(param_1,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_005b1400(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00498910();
  if (cVar1 != '\0') {
    FUN_00807510(param_1,param_2);
  }
  return;
}



void __thiscall FUN_005b1430(int *param_1,undefined1 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  uint auStack_48 [7];
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec919d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  DAT_0145d021 = 0;
  auStack_48[6] = param_3;
  if ((char)param_1[0x26] == '\0') {
    auStack_48[4] = 0;
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    auStack_48[2] = 0;
    auStack_48[3] = 0;
    auStack_48[5] = 0;
    func_0x0046bc40("Unable to send extended opcode %d, extended opcodes are not enabled on this server."
                    ,0x53,uStack_24);
    uStack_14 = 1;
    uVar6 = func_0x005a8cd0(&param_2);
    uStack_14._0_1_ = 2;
    FUN_005ee340(3,uVar6);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < uStack_4c) {
      func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
    }
    uStack_50 = 0;
    uStack_4c = 0xf;
    auStack_60[0] = auStack_60[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (0xf < auStack_48[5]) {
      func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
  }
  else {
    uStack_2c = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x005b55f0();
    uStack_14 = 0;
    iVar3 = (int)uStack_2c;
    func_0x00803290(1);
    *(undefined1 *)(iVar3 + 0x1c + *(int *)(iVar3 + 0x14)) = 0x32;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
    iVar3 = (int)uStack_2c;
    func_0x00803290(1);
    *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = param_2;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
    FUN_00803010(auStack_48[6]);
    uVar6 = 0;
    pcVar2 = *(code **)(*param_1 + 4);
    puVar5 = &uStack_2c;
    _guard_check_icall(puVar5,0);
    (*pcVar2)();
    uStack_14 = 0xffffffff;
    piVar4 = uStack_2c._4_4_;
    if (uStack_2c._4_4_ != (int *)0x0) {
      LOCK();
      iVar3 = uStack_2c._4_4_[1] + -1;
      uStack_2c._4_4_[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*uStack_2c._4_4_;
        _guard_check_icall(puVar5,uVar6);
        (*pcVar2)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar4 + 4);
          _guard_check_icall(puVar5,uVar6);
          (*pcVar2)();
        }
      }
    }
  }
  DAT_0145d021 = 1;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined1 * Catch_005b5325(void)

{
  return &LAB_005b530c;
}



void FUN_005b5560(int *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  uVar2 = *param_2;
  func_0x00803290(2);
  iVar4 = *(int *)(iVar3 + 0x14);
  *(char *)(iVar4 + 0x1d + iVar3) = (char)((ushort)uVar2 >> 8);
  *(char *)(iVar4 + 0x1c + iVar3) = (char)uVar2;
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 2;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 2;
  iVar3 = *param_1;
  uVar2 = param_2[2];
  func_0x00803290(2);
  iVar4 = *(int *)(iVar3 + 0x14);
  *(char *)(iVar4 + 0x1d + iVar3) = (char)((ushort)uVar2 >> 8);
  *(char *)(iVar4 + 0x1c + iVar3) = (char)uVar2;
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 2;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 2;
  iVar3 = *param_1;
  uVar1 = *(undefined1 *)(param_2 + 4);
  func_0x00803290(1);
  *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x1c + iVar3) = uVar1;
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
  return;
}



undefined4 * __thiscall FUN_005b58b0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50028);
  }
  return param_1;
}



undefined * Catch_005b5929(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  uVar2 = func_0x0046b6e0(&DAT_0145c370,"CAST ERROR: ");
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x58) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  uVar2 = func_0x0046b6e0(uVar2,uVar3);
  func_0x004849e0(uVar2);
  return &DAT_005b5967;
}



// WARNING: Removing unreachable block (ram,0x005b602e)
// WARNING: Removing unreachable block (ram,0x005b60d8)

void __thiscall FUN_005b5f70(undefined1 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *unaff_FS_OFFSET;
  uint in_stack_00000018;
  uint uStack_40;
  uint auStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec97d0;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x20)) {
    func_0x005b7770();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  func_0x0046bc40();
  uStack_14._0_1_ = 1;
  FUN_005fe700();
  uStack_14._0_1_ = 3;
  cVar2 = FUN_005fc240();
  if (cVar2 == '\0') {
    func_0x0046bc40();
    uStack_14._0_1_ = 5;
    FUN_005fe700();
    uStack_14._0_1_ = 7;
    cVar2 = FUN_005fc240();
    if (cVar2 != '\0') {
      func_0x00469da0(auStack_3c);
      uStack_14._0_1_ = 7;
      func_0x005b6330();
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    if (0xf < uStack_28) {
      func_0x0046b1f0();
    }
    uStack_2c = 0;
    uStack_28 = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  }
  else {
    param_1[1] = 1;
    func_0x00469da0();
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    func_0x005b6680();
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < uStack_40) {
    func_0x0046b1f0();
  }
  uStack_14 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0();
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_005b61f0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eadefd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  uStack_8 = 0;
  func_0x0046ffa0(&uStack_18,uVar5);
  piVar4 = piStack_14;
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
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x20)) {
    func_0x005b7770(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),(undefined4 *)(param_1 + 0x1c)
                   );
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_005b65a5(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x68) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  func_0x0046bc40("Failed to load sprites from \'%s\': %s",0x24);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uVar3 = func_0x004852c0(iVar1 + 8,unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(unaff_EBP + -0x40,*(undefined4 *)(unaff_EBP + -0x40),
                    *(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return &DAT_005b664e;
}



undefined * Catch_005b687a(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x58) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  func_0x0046bc40("Failed to load sprites from \'%s\': %s",0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar3 = func_0x004852c0(iVar1 + 8,unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(unaff_EBP + -0x3c,*(undefined4 *)(unaff_EBP + -0x3c),
                    *(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x3c) = 0;
  return &DAT_005b6923;
}



undefined * Catch_005b6dcd(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x98) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x4c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  func_0x0046bc40("Failed to get sprite id %d: %s",0x1e);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar3 = func_0x004a5c10(unaff_EBP + -0x94,unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (0xf < *(uint *)(unaff_EBP + -0x70)) {
    func_0x0046b1f0(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x84),
                    *(uint *)(unaff_EBP + -0x70));
  }
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x84) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x6c);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) | 1;
  return &DAT_005b6ea8;
}



undefined * Catch_005b702b(void)

{
  return &DAT_005b7034;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall FUN_005b8100(undefined4 *param_1,byte param_2)

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
  
  puStack_c = &DAT_00ec9cc4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 3;
  piVar2 = (int *)param_1[0x31];
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
  iStack_8._0_1_ = 2;
  func_0x00467700();
  iStack_8._0_1_ = 1;
  puVar1 = param_1 + 0x12;
  if (0xf < (uint)param_1[0x17]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x17]);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x005b9610();
  *param_1 = Thing::vftable;
  _DAT_0145f164 = _DAT_0145f164 + 1;
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,200);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int FUN_005b8290(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = func_0x0061cc30(auStack_1c,param_1,uVar4);
  uStack_8 = 0;
  iVar6 = func_0x00467260(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __thiscall FUN_005b8340(undefined4 param_1,undefined4 param_2)

{
  func_0x004672c0(param_2,param_1);
  return;
}



undefined1 FUN_005b8360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec9d18;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  func_0x00469da0(param_3,uVar1);
  uStack_14 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  func_0x0046bc40(&DAT_0112e1b4,0);
  uStack_14 = 1;
  func_0x005b96e0(auStack_60,&iStack_30,&uStack_21);
  uStack_14._0_1_ = 2;
  uStack_21 = FUN_005b8490(param_1,param_2,&iStack_30);
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  if (iStack_30 != 0) {
    func_0x004e7c10(iStack_30,uStack_2c,&iStack_30);
    func_0x004c7ff0(iStack_30,(iStack_28 - iStack_30 >> 3) * -0x55555555);
    iStack_30 = 0;
    uStack_2c = 0;
    iStack_28 = 0;
  }
  uStack_14 = 0xffffffff;
  func_0x008ab4ad(auStack_60,0x18,2,FUN_00469ba0);
  *unaff_FS_OFFSET = iStack_1c;
  return uStack_21;
}



// WARNING: Removing unreachable block (ram,0x005b8755)
// WARNING: Removing unreachable block (ram,0x005b875d)
// WARNING: Removing unreachable block (ram,0x005b8769)
// WARNING: Removing unreachable block (ram,0x005b8781)
// WARNING: Removing unreachable block (ram,0x005b874e)
// WARNING: Removing unreachable block (ram,0x005b8784)

undefined4 __thiscall FUN_005b8490(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 extraout_ECX;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_28;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec9d6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*param_4 == param_4[1]) || (((param_4[1] - *param_4 >> 3) * -0x55555555 & 1U) != 0)) {
LAB_005b87de:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  uVar12 = *(uint *)(param_1 + 0x44);
  iStack_18 = param_1;
  if (uVar12 == 0) {
    if ((undefined4 *)(param_1 + 0x48) != param_2) {
      puVar2 = param_2 + 4;
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      func_0x0046a660(param_2,*puVar2);
    }
    *(int *)(param_1 + 0x60) = param_3;
  }
  else {
    cVar5 = func_0x005b97f0((undefined4 *)(param_1 + 0x48),param_2,uVar6);
    if ((cVar5 != '\0') || (*(int *)(param_1 + 0x60) != param_3)) goto LAB_005b87de;
    if (10 < uVar12) {
      func_0x005b95d0();
      FUN_005e3fa0();
      uStack_28 = 0;
      uStack_8 = 0;
      func_0x0046ffa0(&uStack_28);
      uStack_8 = 0xffffffff;
      if (uStack_28._4_4_ != (undefined4 *)0x0) {
        LOCK();
        iVar9 = uStack_28._4_4_[1] + -1;
        uStack_28._4_4_[1] = iVar9;
        UNLOCK();
        if (iVar9 == 0) {
          pcVar1 = *(code **)*uStack_28._4_4_;
          _guard_check_icall();
          (*pcVar1)();
          LOCK();
          iVar9 = uStack_28._4_4_[2] + -1;
          uStack_28._4_4_[2] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcVar1 = *(code **)(*uStack_28._4_4_ + 4);
            _guard_check_icall();
            (*pcVar1)();
          }
        }
      }
    }
  }
  iVar4 = iStack_18;
  iVar10 = 0;
  iVar11 = 0;
  iVar9 = 0;
  iStack_20 = *param_4;
  uStack_1c = (param_4[1] - iStack_20 >> 3) * -0x55555555;
  if (uStack_1c == 0) goto LAB_005b862e;
  if ((uStack_1c + 1 & 0xfffffffe) < 4) {
    uVar6 = 0;
LAB_005b8659:
    iVar9 = *(int *)(iStack_20 + 0x10 + uVar6 * 0x18);
  }
  else {
    iVar9 = (uStack_1c - 3 >> 2) + 1;
    uVar6 = iVar9 * 4;
    uStack_28 = CONCAT44(uVar6,(uint)uStack_28);
    piVar7 = (int *)(iStack_20 + 0x40);
    do {
      iVar10 = iVar10 + piVar7[-0xc];
      iVar11 = iVar11 + *piVar7;
      iVar9 = iVar9 + -1;
      piVar7 = piVar7 + 0x18;
    } while (iVar9 != 0);
    iVar9 = 0;
    if (uVar6 < uStack_1c) goto LAB_005b8659;
  }
  iVar9 = iVar9 + iVar10 + iVar11;
LAB_005b862e:
  uVar6 = iVar9 * 0x3c;
  if ((int)uVar6 < 3000) {
    uVar6 = 3000;
  }
  iVar9 = *(int *)(param_1 + 0x60);
  if (((iVar9 == 3) || (iVar9 == 0x2b)) || (iVar9 == 0x23)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  uVar12 = uVar6 * 2;
  if (!bVar13) {
    uVar12 = uVar6;
  }
  func_0x00579650(param_4);
  uStack_28 = DAT_0145db28;
  uVar3 = uStack_28;
  uStack_28._0_4_ = (uint)DAT_0145db28;
  bVar13 = CARRY4(uVar12,(uint)uStack_28);
  iVar10 = uVar12 + (uint)uStack_28;
  uStack_28._4_4_ = (int *)((ulonglong)DAT_0145db28 >> 0x20);
  iVar9 = ((int)uVar12 >> 0x1f) + (int)uStack_28._4_4_;
  uStack_8 = 2;
  uStack_28 = uVar3;
  if (*(uint *)(iVar4 + 0x3c) <= *(int *)(iVar4 + 0x44) + 1U) {
    func_0x005b9830(extraout_ECX);
  }
  uVar6 = *(int *)(iVar4 + 0x3c) - 1U & *(uint *)(iVar4 + 0x40);
  *(uint *)(iVar4 + 0x40) = uVar6;
  uVar6 = *(int *)(iVar4 + 0x44) + uVar6;
  iVar11 = (*(int *)(iVar4 + 0x3c) - 1U & uVar6) * 4;
  if (*(int *)(iVar11 + *(int *)(iVar4 + 0x38)) == 0) {
    uStack_28._4_4_ = (int *)iVar11;
    uVar8 = func_0x008ab47d(0x18);
    *(undefined4 *)((int)uStack_28._4_4_ + *(int *)(iVar4 + 0x38)) = uVar8;
  }
  puVar2 = *(undefined4 **)(*(int *)(iVar4 + 0x38) + (*(int *)(iVar4 + 0x3c) - 1U & uVar6) * 4);
  uStack_28 = CONCAT44(puVar2,(uint)uStack_28);
  *puVar2 = uStack_40;
  puVar2[1] = uStack_3c;
  puVar2[2] = uStack_38;
  puVar2[4] = iVar10;
  puVar2[5] = iVar9 + (uint)bVar13;
  *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
  uStack_8 = 0xffffffff;
  func_0x005b8cc0();
  if (*(int *)(iVar4 + 0xc0) == 0) {
    func_0x005b8a50();
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



TypeDescriptor * FUN_005b99c0(void)

{
  return &`private:_void___thiscall_StaticText::scheduleUpdate(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_005b99d0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eae5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  piStack_18 = (int *)0x0;
  uStack_8 = 0;
  func_0x0046ffa0(&uStack_1c,uVar5);
  piVar4 = piStack_18;
  uStack_8 = 0xffffffff;
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
  func_0x005b8800();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_005b9a90(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_005b9b10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_005b9b90(void)

{
  return &`private:_void___thiscall_StaticText::update(void)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __thiscall FUN_005b9ba0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_005b9c20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall FUN_005b9d60(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec9ffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = Thing::vftable;
  _DAT_0145f164 = _DAT_0145f164 + 1;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_005b9e30(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (((*param_2 != param_1[4]) || (param_2[1] != param_1[5])) ||
     ((short)param_2[2] != (short)param_1[6])) {
    iStack_c = param_1[6];
    uStack_14 = *(undefined8 *)(param_1 + 4);
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    *(short *)(param_1 + 6) = (short)param_2[2];
    pcVar1 = *(code **)(*param_1 + 0x5c);
    _guard_check_icall(param_2,&uStack_14);
    (*pcVar1)();
  }
  FUN_008ab370();
  return;
}



int __fastcall FUN_005b9eb0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  if (DAT_0145d0fc < 0x321) {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    if ((0xb < (uint)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2)) &&
       (*(int *)(*(int *)(iVar3 + 0x18) + 0x2c) != 0)) {
      return 1;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((*(int *)(iVar3 + 0x1c) - (int)*(int **)(iVar3 + 0x18) >> 2 != 0) &&
     (**(int **)(iVar3 + 0x18) != 0)) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((1 < (uint)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2)) &&
     (*(int *)(*(int *)(iVar3 + 0x18) + 4) != 0)) {
    return 1;
  }
  cVar2 = FUN_004b2d20();
  if (cVar2 != '\0') {
    return 2;
  }
  cVar2 = FUN_004b2d60();
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(*param_1 + 0x20);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    return 5 - (uint)(cVar2 != '\0');
  }
  return 3;
}



void __fastcall FUN_005b9f90(int param_1)

{
  FUN_00572b50(param_1 + 0x10);
  return;
}



undefined4 * __thiscall FUN_005b9fa0(int param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac6ee;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(param_1 + 0x10) == 0xffff) && ((*(uint *)(param_1 + 0x14) & 0x40) != 0)) {
    FUN_0048d9a0(param_2,*(uint *)(param_1 + 0x14) ^ 0x40);
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



uint __fastcall FUN_005ba040(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined1 *puStack_68;
  uint uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  int iStack_38;
  int *piStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eca09f;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_24 = 0;
  puVar3 = &stack0xfffffffc;
  if (param_1[4] == 0xffff) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    puStack_68 = (undefined1 *)0x5ba09a;
    _guard_check_icall();
    puStack_68 = (undefined1 *)0x5ba09e;
    cVar4 = (*pcVar1)();
    puVar3 = puStack_20;
    if (cVar4 != '\0') {
      iVar2 = param_1[6];
      *unaff_FS_OFFSET = iStack_1c;
      return (int)(short)iVar2;
    }
  }
  puStack_20 = puVar3;
  pcVar1 = *(code **)(*param_1 + 0x10);
  puStack_68 = (undefined1 *)0x5ba0c7;
  _guard_check_icall();
  puStack_68 = (undefined1 *)0x5ba0cb;
  piVar5 = (int *)(*pcVar1)();
  iStack_2c = *piVar5;
  if (iStack_2c == 0) {
    puStack_68 = (undefined1 *)0x21;
    uStack_48 = 0;
    pcStack_6c = "got a thing with invalid stackpos";
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_70 = 0x5ba231;
    func_0x0046bc40();
    uStack_14 = 3;
    puStack_30 = (undefined1 *)&uStack_84;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    func_0x0046bc40("?getStackPos@Thing@@QAEHXZ",0x1a);
    uStack_14 = CONCAT31((int3)((uint)uStack_14 >> 8),3);
    func_0x005eea60(3,&uStack_58);
    uStack_14 = 0xffffffff;
    if (0xf < uStack_44) {
      func_0x0046b1f0(&uStack_58,uStack_58,uStack_44);
    }
    *unaff_FS_OFFSET = iStack_1c;
    return 0xffffffff;
  }
  uStack_14 = 0;
  puStack_68 = auStack_40;
  pcStack_6c = (char *)0x5ba0eb;
  piVar5 = (int *)func_0x00468610();
  iStack_38 = *piVar5;
  piStack_34 = (int *)piVar5[1];
  *piVar5 = 0;
  piVar5[1] = 0;
  uStack_24 = 1;
  uStack_14 = 0;
  uVar7 = 0;
  puStack_30 = (undefined1 *)iStack_38;
  piStack_28 = piStack_34;
  if (piStack_3c != (int *)0x0) {
    LOCK();
    iVar2 = piStack_3c[1] + -1;
    piStack_3c[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_3c;
      pcStack_6c = (char *)0x5ba15e;
      _guard_check_icall();
      pcStack_6c = (char *)0x5ba162;
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_3c[2] + -1;
      piStack_3c[2] = iVar2;
      UNLOCK();
      uVar7 = uStack_24;
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_3c + 4);
        pcStack_6c = (char *)0x5ba179;
        _guard_check_icall();
        pcStack_6c = (char *)0x5ba17d;
        (*pcVar1)();
        uVar7 = uStack_24;
      }
    }
  }
  uVar8 = 0;
  piVar5 = *(int **)(iStack_2c + 0x28);
  uVar6 = *(int *)(iStack_2c + 0x2c) - (int)piVar5 >> 3;
  if (uVar6 != 0) {
    do {
      if (puStack_30 == (undefined1 *)*piVar5) goto LAB_005ba1ac;
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar8 < uVar6);
  }
  uVar8 = 0xffffffff;
LAB_005ba1ac:
  uStack_24 = uVar7 & 0xfffffffe;
  uStack_14 = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_28[1] + -1;
    piStack_28[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_28;
      pcStack_6c = (char *)0x5ba1d3;
      _guard_check_icall();
      pcStack_6c = (char *)0x5ba1d8;
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_28[2] + -1;
      piStack_28[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_28 + 4);
        pcStack_6c = (char *)0x5ba1f2;
        _guard_check_icall();
        pcStack_6c = (char *)0x5ba1f7;
        (*pcVar1)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return uVar8;
}



undefined4 * FUN_005ba2c0(void)

{
  return &DAT_0145d8f0;
}



undefined4 FUN_005ba2d0(void)

{
  return DAT_0145d8f0;
}



undefined4 FUN_005ba500(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  uint auStack_44 [7];
  undefined4 uStack_28;
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eca0f1;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_28 = 0;
  auStack_44[4] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  auStack_44[5] = 0;
  func_0x0046bc40("$var-",5,uVar1);
  uStack_14 = 1;
  cStack_21 = func_0x0083d540(auStack_44[6]);
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < auStack_44[5]) {
    func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  if (cStack_21 == '\0') {
    uVar2 = func_0x005bea60(param_2);
    func_0x00469da0(uVar2);
  }
  else {
    uVar2 = func_0x00482f60(auStack_44,5,0xffffffff);
    uStack_14 = 2;
    uVar2 = func_0x005bea80(uVar2);
    func_0x00469da0(uVar2);
    uStack_28 = 1;
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < auStack_44[5]) {
      func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}



void __fastcall FUN_005ba780(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac5b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = OTMLException::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 9;
  if (0xf < (uint)param_1[0xe]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0xe],uVar2);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  FUN_004668a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_005ba800(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac5b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = OTMLException::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 9;
  if (0xf < (uint)param_1[0xe]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0xe],uVar2);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  FUN_004668a0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



float10 __fastcall FUN_005bb020(int param_1)

{
  return (float10)*(float *)(param_1 + 0x10);
}



undefined4 __thiscall FUN_005bb2f0(undefined4 param_1,byte param_2)

{
  func_0x005bb320();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd8);
  }
  return param_1;
}



int __thiscall FUN_005be450(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return 0;
  }
  func_0x005bdbc0(param_6);
  param_3 = ((*(int *)(param_1 + 100) * param_2 + param_5) * *(int *)(param_1 + 0x60) + param_4) *
            *(int *)(param_1 + 0x5c) + param_3;
  piVar3 = (int *)(param_3 * 0x10 + *(int *)(*(int *)(param_1 + 0xb0) + param_6 * 0xc));
  iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + param_6 * 0xc);
  iVar2 = ((piVar3[3] - *(int *)(iVar1 + 4 + param_3 * 8)) - piVar3[1]) + 1;
  iVar1 = ((piVar3[2] - *(int *)(iVar1 + param_3 * 8)) - *piVar3) + 1;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



void __thiscall FUN_005be4d0(undefined3 param_1,char param_2)

{
  if (param_2 == '\x01') {
    func_0x005be9b0(&stack0xfffffffb,CONCAT13(0xf,param_1));
    return;
  }
  func_0x004aa360(&stack0xfffffffa,&stack0xfffffffb);
  return;
}



void __fastcall FUN_005be510(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  char cStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eca865;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 4) != 0) {
    uStack_1c = 0;
    func_0x00626120(&uStack_1c,param_1 + 0x50,uStack_14);
    iStack_8 = 0;
    if ((int)uStack_1c == 0) {
      FUN_0061a470();
    }
    else {
      piVar1 = (int *)(param_1 + 0x1c);
      piVar2 = (int *)(param_1 + 0x2c);
      iVar3 = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) + 1;
      iStack_2c = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x30)) + 1;
      iStack_24 = (*(int *)(param_1 + 0x34) - *piVar2) + 1;
      if ((iStack_24 == (*(int *)(param_1 + 0x24) - *piVar1) + 1) && (iStack_2c == iVar3)) {
        cStack_1d = '\0';
        iStack_2c = iVar3;
      }
      else {
        cStack_1d = '\x01';
        iStack_30 = iStack_24;
        func_0x0061d810(&iStack_30);
        uStack_28 = 0;
        iStack_24 = 0;
        iStack_8._0_1_ = 1;
        func_0x0061dc80(DAT_0145e0a0);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        func_0x0087eee0(DAT_0145f21c,DAT_0145f220,DAT_0145f224,DAT_0145f228);
        func_0x0087eed0(0x4000);
      }
      *(int *)(DAT_0145ceb8 + 0x780) = (int)uStack_1c;
      if ((int)uStack_1c != 0) {
        func_0x00624ed0(param_1 + 0x3c);
      }
      func_0x00624f70(param_1 + 0x44);
      func_0x00625260();
      if (cStack_1d == '\0') {
        func_0x00623960(piVar1,param_1 + 4,piVar2);
        *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
      }
      else {
        iStack_30 = *(int *)(param_1 + 0x34) - *piVar2;
        iStack_2c = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x30);
        uStack_38 = 0;
        uStack_34 = 0;
        func_0x00623960(&uStack_38,param_1 + 4,piVar2);
        *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
        func_0x0061df80();
        iVar3 = DAT_0145ceb8;
        *(undefined4 *)(DAT_0145ceb8 + 0x788) = DAT_012bc26c;
        *(undefined4 *)(iVar3 + 0x78c) = DAT_012bc270;
        *(undefined4 *)(iVar3 + 0x790) = DAT_012bc274;
        *(undefined4 *)(iVar3 + 0x794) = DAT_012bc278;
        func_0x0061e260(piVar1);
      }
    }
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_005beae0(undefined4 *param_1)

{
  return *param_1;
}



undefined4 * __thiscall FUN_005bf9e0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead35b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  uStack_8 = 0;
  *param_1 = stdext::exception::vftable;
  func_0x00469da0(param_2 + 0xc);
  uStack_8 = 2;
  *param_1 = OTMLException::vftable;
  func_0x00469da0(param_2 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int * __fastcall FUN_005bfaf0(int param_1)

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
  
  puStack_c = &DAT_00eca710;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x20);
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



undefined4 * __thiscall FUN_005bfc00(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  return param_1;
}



void __fastcall FUN_005c0960(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecaca4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  func_0x005c0af0(param_1 + 4);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_005c09c0(void)

{
  return &MarketData::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_005c09d0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb131c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x10,uVar1);
  *puVar2 = stdext::any::placeholder::vftable;
  *puVar2 = stdext::any::holder<>::vftable;
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)((int)puVar2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



TypeDescriptor * FUN_005c0a50(void)

{
  return &Light::RTTI_Type_Descriptor;
}



undefined4 * __thiscall FUN_005c0b90(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecad30;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = param_1 + 1;
  uStack_8 = 0;
  if (0xf < (uint)param_1[6]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[6],uVar2);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *param_1 = stdext::any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_005c1340(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  float fVar7;
  undefined **ppuStack_78;
  code *pcStack_74;
  undefined4 *puStack_70;
  undefined ***pppuStack_54;
  uint auStack_50 [6];
  undefined1 auStack_38 [4];
  int *piStack_34;
  float fStack_30;
  int iStack_2c;
  int *piStack_28;
  uint *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecb00d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pppuStack_54 = &ppuStack_78;
  ppuStack_78 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_74 = FUN_005c1340;
  puStack_70 = &DAT_0145d8a0;
  uStack_14 = 1;
  fVar7 = 0.0;
  auStack_50[4] = 0;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[2] = 0;
  auStack_50[3] = 0;
  auStack_50[5] = 0;
  piStack_28 = param_1;
  func_0x0046bc40("ThingTypeManager::check",0x17,uVar3);
  uStack_14._0_1_ = 2;
  uVar4 = FUN_005e4dd0(auStack_38,auStack_50,&ppuStack_78,1000);
  uStack_14._0_1_ = 3;
  func_0x0046ffa0(uVar4);
  uStack_14._0_1_ = 2;
  puStack_24 = (uint *)piStack_34;
  if (piStack_34 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_34[1] + -1;
    piStack_34[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_34;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = puStack_24[2] + -1;
      puStack_24[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*puStack_24 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  if (0xf < auStack_50[5]) {
    func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
  }
  auStack_50[4] = 0;
  auStack_50[5] = 0xf;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  uStack_14 = 0xffffffff;
  if (pppuStack_54 != (undefined ***)0x0) {
    pcVar1 = (code *)(*pppuStack_54)[4];
    _guard_check_icall(pppuStack_54 != &ppuStack_78);
    (*pcVar1)();
    pppuStack_54 = (undefined ***)0x0;
  }
  puStack_24 = (uint *)(param_1 + 0x1f);
  iStack_2c = 4;
  do {
    uVar3 = *puStack_24;
    uVar5 = param_1[1] - *param_1 >> 3;
    piStack_34 = (int *)(uVar3 + 100);
    if (uVar5 < uVar3 + 100) {
      piStack_34 = (int *)uVar5;
    }
    if (uVar3 < piStack_34) {
      do {
        if (*(char *)(*(int *)(*param_1 + uVar3 * 8) + 200) != '\0') {
          fStack_30 = DAT_0145db30;
          func_0x008abfd0();
          if (fVar7 < fStack_30) {
            iVar2 = *(int *)(*param_1 + uVar3 * 8);
            if (*(int *)(iVar2 + 0x98) != *(int *)(iVar2 + 0x9c)) {
              func_0x00485920(*(int *)(iVar2 + 0x98));
              *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar2 + 0x98);
            }
            if (*(int *)(iVar2 + 0xa4) != *(int *)(iVar2 + 0xa8)) {
              func_0x005bf1f0(iVar2 + 0xa4);
              *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(iVar2 + 0xa4);
            }
            if (*(int *)(iVar2 + 0xb0) != *(int *)(iVar2 + 0xb4)) {
              func_0x005bf1f0(iVar2 + 0xb0);
              *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar2 + 0xb0);
            }
            iVar6 = *(int *)(iVar2 + 0xbc);
            if (iVar6 != *(int *)(iVar2 + 0xc0)) {
              func_0x005bf1a0(iVar6);
              iVar6 = iVar2 + 0xbc;
              *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(iVar2 + 0xbc);
            }
            func_0x005bf880(*(undefined4 *)(iVar2 + 0x50),iVar6);
            func_0x005be8d0(*(undefined4 *)(iVar2 + 0x50));
            func_0x005be8d0(*(undefined4 *)(iVar2 + 0x50));
            func_0x005be730(*(undefined4 *)(iVar2 + 0x50));
            *(undefined1 *)(iVar2 + 200) = 0;
            param_1 = piStack_28;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < piStack_34);
    }
    *puStack_24 = (uint)piStack_34;
    if ((uint)(param_1[1] - *param_1 >> 3) <= piStack_34) {
      *puStack_24 = 0;
    }
    puStack_24 = puStack_24 + 1;
    param_1 = param_1 + 3;
    iStack_2c = iStack_2c + -1;
    piStack_28 = param_1;
  } while (iStack_2c != 0);
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __fastcall FUN_005c1650(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  uint uStack_a8;
  undefined1 auStack_9c [12];
  int iStack_90;
  undefined1 auStack_8c [24];
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  int *piStack_68;
  int iStack_64;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined8 uStack_3c;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecb088;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_a8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_a8;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  uStack_14._0_1_ = 1;
  uStack_14._1_3_ = 0;
  iStack_64 = param_1;
  uStack_2c = uStack_a8;
  func_0x00469d30(&DAT_01141770);
  uStack_14._0_1_ = 2;
  uVar4 = FUN_005fe700(auStack_54,&stack0x00000004,auStack_8c);
  uStack_14._0_1_ = 3;
  func_0x00469bd0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uStack_14._0_1_ = 1;
  FUN_00469ba0();
  uStack_3c = 0;
  uVar2 = FUN_00467460(0x76);
  func_0x005fcfb0(&uStack_3c,&stack0x00000004,uVar2);
  uStack_14 = CONCAT31(uStack_14._1_3_,4);
  uVar4 = func_0x005e6800();
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(short *)(param_1 + 0x70) = (short)uVar4;
  for (iVar7 = 0; iStack_90 = iVar7, iVar7 < 4; iVar7 = iVar7 + 1) {
    uVar5 = func_0x005e66e0();
    piStack_68 = (int *)((uVar5 & 0xffff) + 1);
    piVar1 = (int *)(param_1 + iVar7 * 0xc);
    if (*piVar1 != piVar1[1]) {
      func_0x00485920(*piVar1);
      piVar1[1] = *piVar1;
    }
    func_0x005c4140(piStack_68,iStack_64 + 0x50);
    param_1 = iStack_64;
  }
  iStack_70 = param_1 + 0x48;
  func_0x005c3db0();
  iVar7 = iStack_64;
  for (iVar8 = 0; iVar8 < 4; iVar8 = iVar8 + 1) {
    uVar6 = 100;
    if (iVar8 != 0) {
      uVar6 = 1;
    }
    while( true ) {
      uStack_74 = CONCAT22(uStack_74._2_2_,uVar6);
      piStack_68 = (int *)(iVar7 + iVar8 * 0xc);
      uStack_6c = (uint)uVar6;
      if ((uint)(piStack_68[1] - *piStack_68 >> 3) <= uStack_6c) break;
      uStack_34 = 0;
      func_0x004d95f0();
      uStack_14._0_1_ = 5;
      func_0x005bb640(uStack_74,iVar8,&uStack_3c);
      func_0x004683d0(&uStack_34);
      cVar3 = FUN_004b29d0();
      if (cVar3 != '\0') {
        FUN_004b25d0(auStack_60);
        uStack_14._0_1_ = 6;
        func_0x005c3ea0(auStack_9c,auStack_48);
        uStack_14._0_1_ = 5;
        FUN_00466d70();
      }
      uStack_14 = CONCAT31(uStack_14._1_3_,4);
      FUN_00468340();
      uVar6 = uVar6 + 1;
      iVar7 = iStack_64;
    }
  }
  *(undefined1 *)(iVar7 + 0x60) = 1;
  uStack_6c = iVar8;
  func_0x00469d30("onLoadDat");
  uStack_14._0_1_ = 7;
  func_0x00469d30("g_things");
  uStack_14._0_1_ = 8;
  func_0x00499cc0(auStack_8c,auStack_54,&stack0x00000004);
  uStack_14._0_1_ = 7;
  FUN_00469ba0();
  uStack_14._0_1_ = 4;
  FUN_00469ba0();
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  FUN_00468340();
  uStack_14 = 0xffffffff;
  FUN_00469ba0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined * Catch_005c18dc(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x84) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  func_0x0046bc40("Failed to read dat \'%s\': %s\'",0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uVar3 = func_0x004852c0(iVar1 + 8,unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (0xf < *(uint *)(unaff_EBP + -0x68)) {
    func_0x0046b1f0(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + -0x7c),
                    *(uint *)(unaff_EBP + -0x68));
  }
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0;
  return &DAT_005c1988;
}



void FUN_005c19c0(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint uStack_190;
  undefined1 auStack_180 [60];
  undefined1 auStack_144 [60];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [28];
  undefined1 auStack_a4 [24];
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_71;
  char cStack_6d;
  undefined1 auStack_6c [12];
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined1 auStack_44 [12];
  int iStack_38;
  int iStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecb160;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_190 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_190;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14._0_1_ = 1;
  uStack_14._1_3_ = 0;
  uStack_2c = uStack_190;
  func_0x00469d30(&DAT_01141768);
  uStack_14._0_1_ = 2;
  uVar4 = FUN_005fe700(auStack_6c,&stack0x00000004,auStack_44);
  uStack_14._0_1_ = 3;
  func_0x00469bd0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uStack_14._0_1_ = 1;
  FUN_00469ba0();
  uStack_54 = 0;
  func_0x0080da60();
  uStack_14._0_1_ = 4;
  func_0x0080ff70(&iStack_38);
  uStack_14._0_1_ = 5;
  iStack_78 = iStack_34;
  iVar6 = iStack_38;
  do {
    iStack_8c = iVar6;
    if (iVar6 == iStack_78) {
      uStack_14._0_1_ = 4;
      FUN_00482c00();
      uStack_14 = CONCAT31(uStack_14._1_3_,1);
      FUN_00468340();
      uStack_14 = 0xffffffff;
      FUN_00469ba0();
      *unaff_FS_OFFSET = iStack_1c;
      FUN_008ab370();
      return;
    }
    uVar4 = func_0x005ba660(auStack_c0);
    uStack_14._0_1_ = 6;
    cStack_6d = func_0x00484a20(uVar4,"creatures");
    uStack_14._0_1_ = 5;
    FUN_00469ba0();
    if (cStack_6d == '\0') {
      uVar4 = func_0x005ba660(auStack_d8);
      uStack_14._0_1_ = 7;
      cStack_6d = func_0x00484a20(uVar4,"items");
      uStack_14._0_1_ = 5;
      FUN_00469ba0();
      if (cStack_6d == '\0') {
        uVar4 = func_0x005ba660(auStack_f0);
        uStack_14._0_1_ = 8;
        cStack_6d = func_0x00484a20(uVar4,"effects");
        uStack_14._0_1_ = 5;
        FUN_00469ba0();
        if (cStack_6d == '\0') {
          uVar4 = func_0x005ba660(auStack_108);
          uStack_14._0_1_ = 9;
          cStack_6d = func_0x00484a20(uVar4,"missiles");
          uStack_14._0_1_ = 5;
          FUN_00469ba0();
          if (cStack_6d == '\0') {
LAB_005c1d93:
            func_0x00469d30("not a valid thing category");
            uStack_14 = CONCAT31(uStack_14._1_3_,10);
            func_0x0080ec00(iVar6,auStack_a4);
            func_0x00e87d2e(auStack_180,&DAT_01288754);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uStack_71 = CONCAT31(uStack_71._1_3_,3);
        }
        else {
          uStack_71 = CONCAT31(uStack_71._1_3_,2);
        }
      }
      else {
        uStack_71 = uStack_71 & 0xffffff00;
      }
    }
    else {
      uStack_71 = CONCAT31(uStack_71._1_3_,1);
    }
    func_0x0080ff70(&iStack_60);
    uStack_14._0_1_ = 0xb;
    iStack_88 = iStack_5c;
    for (iVar5 = iStack_60; iStack_84 = iVar5, iVar5 != iStack_88; iVar5 = iVar5 + 8) {
      func_0x005ba660(auStack_a4);
      uStack_14._0_1_ = 0xc;
      uVar3 = func_0x005c3fd0();
      uStack_7c = CONCAT22(uStack_7c._2_2_,uVar3);
      uStack_14._0_1_ = 0xb;
      FUN_00469ba0();
      uStack_4c = 0;
      uVar4 = FUN_005c37e0(uStack_7c,uStack_71);
      func_0x00468490(uVar4);
      uStack_14._0_1_ = 0xd;
      uVar2 = (undefined1)uStack_14;
      uStack_14._0_1_ = 0xd;
      if ((int)uStack_4c == 0) {
        uStack_14._0_1_ = uVar2;
        func_0x00469d30("thing not found");
        uStack_14._0_1_ = 0xe;
        func_0x0080ec00(iVar5,auStack_a4);
        func_0x00e87d2e(auStack_144,&DAT_01288754);
        goto LAB_005c1d93;
      }
      func_0x005bc940(iVar5);
      uStack_14._0_1_ = 0xb;
      FUN_00468340();
    }
    uStack_14._0_1_ = 5;
    FUN_00482c00();
    iVar6 = iVar6 + 8;
  } while( true );
}



undefined * Catch_005c1c75(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x98) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  *(undefined4 *)(unaff_EBP + -0x68) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("Failed to read dat otml \'%s\': %s\'",0x21);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uVar3 = func_0x004852c0(iVar1 + 8,unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return &DAT_005c1d27;
}



void __thiscall FUN_005c1dd0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint uStack_b8;
  undefined1 auStack_a8 [28];
  undefined1 auStack_8c [24];
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined8 auStack_5c [2];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecb1f0;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_b8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_b8;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_60 = param_2;
  uStack_74 = param_2;
  iStack_14 = 0;
  auStack_5c[0] = 0;
  iStack_64 = param_1;
  uStack_2c = uStack_b8;
  uVar2 = FUN_00467460(0x76);
  func_0x005fcfb0(auStack_5c,param_2,uVar2);
  iStack_14._0_1_ = 1;
  iVar5 = func_0x005e6800();
  if (iVar5 == 0) {
    uStack_34 = 0;
    func_0x005e6c80(&uStack_34);
    iStack_14 = CONCAT31(iStack_14._1_3_,3);
    func_0x005e1470(1);
    iVar5 = func_0x005e15e0();
    if (iVar5 == 0) {
      cVar3 = func_0x005e14f0();
      if (cVar3 != '\x01') {
LAB_005c1ee1:
        uStack_48 = 0;
        uStack_40 = 0;
        func_0x005e12f0(&uStack_48);
        iStack_14 = CONCAT31(iStack_14._1_3_,6);
        FUN_0047e370();
        func_0x005c4140((uStack_48._4_4_ - (int)uStack_48 >> 3) + 1,param_1 + 0x58);
        func_0x005c4140((uStack_48._4_4_ - (int)uStack_48 >> 3) + 1,param_1 + 0x58);
        iStack_70 = uStack_48._4_4_;
        for (iVar5 = (int)uStack_48; iStack_6c = iVar5, iVar5 != iStack_70; iVar5 = iVar5 + 8) {
          uStack_3c = 0;
          func_0x004aa180();
          iStack_14 = CONCAT31(iStack_14._1_3_,7);
          func_0x004a9c30(iVar5);
          func_0x005c32f0(&uStack_3c);
          uStack_68 = FUN_004a6df0();
          uVar7 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 3;
          uStack_68 = uStack_68 & 0xffff;
          if (uVar7 <= uStack_68) {
            func_0x005bf880(uStack_68 + 1,uVar7);
          }
          func_0x004683d0(&uStack_3c);
          iStack_14 = CONCAT31(iStack_14._1_3_,6);
          FUN_00468340();
        }
        *(undefined1 *)(iStack_64 + 0x62) = 1;
        func_0x00469d30("onLoadOtb");
        iStack_14._0_1_ = 8;
        func_0x00469d30("g_things");
        iStack_14._0_1_ = 9;
        func_0x00499cc0(auStack_a8,auStack_8c,uStack_60);
        iStack_14._0_1_ = 8;
        FUN_00469ba0();
        iStack_14._0_1_ = 6;
        FUN_00469ba0();
        iStack_14._0_1_ = 3;
        FUN_00482c00();
        iStack_14._0_1_ = 1;
        FUN_00468340();
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        FUN_00468340();
        iStack_14 = 0xffffffff;
        *unaff_FS_OFFSET = iStack_1c;
        FUN_008ab370();
        return;
      }
      sVar4 = func_0x005e1560();
      if (sVar4 == 0x8c) {
        uVar6 = func_0x005e15e0();
        *(undefined4 *)(param_1 + 0x68) = uVar6;
        uVar6 = func_0x005e15e0();
        *(undefined4 *)(param_1 + 100) = uVar6;
        func_0x005e1470(4);
        func_0x005e1470(0x80);
        goto LAB_005c1ee1;
      }
      goto LAB_005c2140;
    }
  }
  else {
    func_0x00469d30("invalid otb file");
    iStack_14 = CONCAT31(iStack_14._1_3_,2);
    func_0x0047d860();
  }
  func_0x00469d30("invalid otb file");
  iStack_14 = CONCAT31(iStack_14._1_3_,4);
  func_0x0047d860();
LAB_005c2140:
  func_0x00469d30("invalid otb root attr version size");
  iStack_14 = CONCAT31(iStack_14._1_3_,5);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * Catch_005c203c(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x80) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x50) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  func_0x0046bc40("Failed to load \'%s\' (OTB file): %s",0x22);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -100),unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(unaff_EBP + -0x44,*(undefined4 *)(unaff_EBP + -0x44),
                    *(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x44) = 0;
  return &DAT_005c20e4;
}



void __thiscall FUN_005c2160(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  char *_Str;
  int iVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  int iVar10;
  uint uStack_210;
  undefined1 auStack_204 [24];
  undefined1 auStack_1ec [24];
  undefined1 auStack_1d4 [24];
  undefined1 auStack_1bc [24];
  undefined1 auStack_1a4 [24];
  undefined1 auStack_18c [24];
  undefined1 auStack_174 [24];
  undefined1 auStack_15c [24];
  undefined1 auStack_144 [28];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  undefined4 uStack_ec;
  char *pcStack_e8;
  int iStack_e4;
  char *pcStack_e0;
  uint uStack_dc;
  undefined1 auStack_d8 [64];
  char cStack_98;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecb31e;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_210 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_210;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_f8 = param_2;
  iStack_14 = 0;
  iStack_e4 = param_1;
  uStack_2c = uStack_210;
  if (*(char *)(param_1 + 0x62) == '\0') {
    func_0x00469d30("OTB must be loaded before XML");
    iStack_14 = CONCAT31(iStack_14._1_3_,1);
    func_0x0047d860();
  }
  else {
    puStack_24 = &stack0xfffffffc;
    puStack_20 = (undefined1 *)&uStack_210;
    memset(auStack_d8,0,0x70);
    func_0x008794e0();
    iStack_14._0_1_ = 2;
    puVar4 = (undefined4 *)func_0x00611cf0(auStack_110,param_2);
    iStack_14._0_1_ = 3;
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_0087b0c0(puVar4,0,0);
    iStack_14 = CONCAT31(iStack_14._1_3_,2);
    FUN_00469ba0();
    if (cStack_98 == '\0') {
      iVar5 = func_0x0047d9e0();
      if ((iVar5 != 0) && (cVar2 = func_0x00484e70(iVar5 + 0x20,"items"), cVar2 == '\0')) {
        iVar5 = func_0x0047d9e0();
        do {
          while( true ) {
            if (iVar5 == 0) {
              func_0x00878a70();
              *(undefined1 *)(iStack_e4 + 0x61) = 1;
              func_0x00469d30("items.xml read successfully.");
              iStack_14._0_1_ = 0x20;
              FUN_005ee340(0,auStack_110);
              iStack_14._0_1_ = 2;
              FUN_00469ba0();
              iStack_14 = (uint)iStack_14._1_3_ << 8;
              func_0x0047db20();
              iStack_14 = 0xffffffff;
              *unaff_FS_OFFSET = iStack_1c;
              FUN_008ab370();
              return;
            }
            cVar2 = func_0x00484e70(iVar5 + 0x20,&DAT_0113fdf0);
            if (cVar2 == '\0') break;
LAB_005c260e:
            iVar5 = func_0x0047d990();
          }
          func_0x00469d30(&DAT_0113fde4);
          iStack_14._0_1_ = 7;
          sVar3 = func_0x005c4060(auStack_144);
          iStack_14._0_1_ = 2;
          FUN_00469ba0();
          if (sVar3 == 0) {
            uStack_68 = 0;
            uStack_60 = 0;
            func_0x00469d30(&DAT_0114184c);
            iStack_14._0_1_ = 0x12;
            func_0x00469d30("fromid");
            iStack_14._0_1_ = 0x13;
            func_0x00878d80(auStack_204,auStack_1a4);
            iStack_14._0_1_ = 0x14;
            func_0x00579fe0(auStack_1bc);
            iStack_14._0_1_ = 0x16;
            FUN_00469ba0();
            iStack_14._0_1_ = 0x17;
            FUN_00469ba0();
            iStack_14._0_1_ = 0x18;
            FUN_00469ba0();
            uStack_50 = 0;
            uStack_48 = 0;
            func_0x00469d30(&DAT_0114184c);
            iStack_14._0_1_ = 0x19;
            func_0x00469d30(&DAT_01141914);
            iStack_14._0_1_ = 0x1a;
            func_0x00878d80(auStack_128,auStack_1d4);
            iStack_14._0_1_ = 0x1b;
            func_0x00579fe0(auStack_110);
            iStack_14._0_1_ = 0x1d;
            FUN_00469ba0();
            iStack_14._0_1_ = 0x1e;
            FUN_00469ba0();
            iStack_14 = CONCAT31(iStack_14._1_3_,0x1f);
            FUN_00469ba0();
            if (*(int *)uStack_68 != 0) {
              pcStack_e0 = (char *)(uStack_68._4_4_ - (int)(int *)uStack_68 >> 2);
              if (pcStack_e0 == (char *)(uStack_50._4_4_ - (int)uStack_50 >> 2)) {
                piVar7 = (int *)uStack_68;
                for (pcVar9 = (char *)0x0; pcStack_f4 = pcVar9, pcVar9 < pcStack_e0;
                    pcVar9 = pcVar9 + 1) {
                  while( true ) {
                    uVar8 = piVar7[(int)pcVar9];
                    uStack_dc = uVar8 & 0xffff;
                    if (*(int *)((int)uStack_50 + (int)pcVar9 * 4) < (int)uVar8) break;
                    piVar7[(int)pcVar9] = uVar8 + 1;
                    func_0x005c27f0(uStack_dc,iVar5);
                    piVar7 = (int *)uStack_68;
                  }
                }
              }
            }
            iStack_14._0_1_ = 0x18;
            func_0x004afb10();
            iStack_14 = CONCAT31(iStack_14._1_3_,2);
            func_0x004afb10();
            goto LAB_005c260e;
          }
          uStack_38 = 0;
          uStack_30 = 0;
          func_0x00469d30(&DAT_0114184c);
          iStack_14._0_1_ = 8;
          func_0x00469d30(&DAT_0113fde4);
          iStack_14._0_1_ = 9;
          func_0x00878d80(auStack_1ec,auStack_15c);
          iStack_14._0_1_ = 10;
          func_0x0083cbe0(auStack_174);
          iStack_14._0_1_ = 0xc;
          FUN_00469ba0();
          iStack_14._0_1_ = 0xd;
          FUN_00469ba0();
          iStack_14 = CONCAT31(iStack_14._1_3_,0xe);
          FUN_00469ba0();
          pcStack_e0 = uStack_38._4_4_;
          for (pcVar9 = (char *)uStack_38; pcStack_f0 = pcVar9, pcStack_e8 = pcVar9,
              pcVar9 != pcStack_e0; pcVar9 = pcVar9 + 0x18) {
            uStack_5c = 0;
            uStack_54 = 0;
            func_0x00469d30(&DAT_01141824);
            iStack_14._0_1_ = 0xf;
            func_0x00579fe0(auStack_18c);
            iStack_14 = CONCAT31(iStack_14._1_3_,0x11);
            FUN_00469ba0();
            if ((uint)(uStack_5c._4_4_ - (int)(uint *)uStack_5c >> 2) < 2) {
              _Str = pcVar9;
              if (0xf < *(uint *)(pcVar9 + 0x14)) {
                _Str = *(char **)pcVar9;
              }
              iVar10 = iVar5;
              iVar6 = atoi(_Str);
              func_0x005c27f0(iVar6,iVar10);
            }
            else {
              uVar8 = *(uint *)uStack_5c;
              uStack_ec = CONCAT22(uStack_ec._2_2_,(short)uVar8);
              uStack_dc = uVar8;
              while (pcVar9 = pcStack_e8, (int)uVar8 <= (int)((uint *)uStack_5c)[1]) {
                uVar8 = uVar8 + 1;
                uStack_dc = uVar8 & 0xffff;
                func_0x005c27f0(uStack_ec,iVar5);
                uStack_ec = CONCAT22(uStack_ec._2_2_,(short)uStack_dc);
              }
            }
            iStack_14 = CONCAT31(iStack_14._1_3_,0xe);
            func_0x004afb10();
          }
          iStack_14 = CONCAT31(iStack_14._1_3_,2);
          FUN_004c7ec0();
          iVar5 = func_0x0047d990();
        } while( true );
      }
      goto LAB_005c27c2;
    }
  }
  pcStack_e8 = (char *)func_0x0047dba0();
  func_0x00469d30("failed to parse \'%s\': \'%s\'");
  iStack_14._0_1_ = 4;
  func_0x004852c0(param_2,&pcStack_e8);
  iStack_14 = CONCAT31(iStack_14._1_3_,5);
  func_0x0047d860();
LAB_005c27c2:
  func_0x00469d30("invalid root tag name");
  iStack_14 = CONCAT31(iStack_14._1_3_,6);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * Catch_005c2679(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x11c) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0xd0) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  func_0x0046bc40("Failed to load \'%s\' (XML file): %s",0x22);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0xe8),unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
    func_0x0046b1f0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x34),
                    *(uint *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x34) = 0;
  return &DAT_005c2733;
}



int __thiscall FUN_005c3350(int param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    uVar2 = (uint)param_2;
    if ((uVar2 < (uint)(*(int *)(param_1 + 0x34) - iVar1 >> 3)) &&
       (*(int *)(iVar1 + uVar2 * 8) != 0)) {
      return iVar1 + uVar2 * 8;
    }
  }
  return param_1 + 0x58;
}



int __thiscall FUN_005c3380(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 ****ppppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 ***apppuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ecb416;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  iStack_8 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  iStack_1c = param_1;
  for (iVar5 = *(int *)(param_1 + 0x3c); iVar5 != iVar1; iVar5 = iVar5 + 8) {
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 1;
    cStack_11 = '\x12';
    func_0x00484b30(apppuStack_34,&cStack_11,uVar2);
    uStack_18 = 1;
    puVar4 = &param_2;
    if (0xf < in_stack_00000018) {
      puVar4 = param_2;
    }
    ppppuVar3 = apppuStack_34;
    if (0xf < uStack_20) {
      ppppuVar3 = (undefined4 ****)apppuStack_34[0];
    }
    cStack_11 = func_0x0046cf20(ppppuVar3,uStack_24,puVar4,in_stack_00000014);
    uStack_18 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_20) {
      func_0x0046b1f0(apppuStack_34,apppuStack_34[0],uStack_20);
    }
    uStack_24 = 0;
    uStack_20 = 0xf;
    apppuStack_34[0] = (undefined4 ***)((uint)apppuStack_34[0] & 0xffffff00);
    if (cStack_11 != '\0') goto LAB_005c3458;
  }
  iVar5 = iStack_1c + 0x58;
LAB_005c3458:
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



undefined8 * __thiscall FUN_005c34a0(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 ***pppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 **appuStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 *puStack_20;
  uint uStack_1c;
  undefined1 auStack_15 [5];
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecb47f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_1c = 1;
  puStack_20 = *(undefined4 **)(param_1 + 0x40);
  puVar7 = *(undefined4 **)(param_1 + 0x3c);
  if (puVar7 != puStack_20) {
    do {
      uVar2 = uStack_1c;
      uStack_8._0_1_ = 2;
      auStack_15[0] = 0x12;
      func_0x00484b30(appuStack_38,auStack_15,uVar4);
      uStack_1c = uVar2 | 2;
      puVar6 = &param_3;
      if (0xf < in_stack_0000001c) {
        puVar6 = param_3;
      }
      pppuVar5 = appuStack_38;
      if (0xf < uStack_24) {
        pppuVar5 = (undefined4 ***)appuStack_38[0];
      }
      cVar3 = func_0x0046cf20(pppuVar5,uStack_28,puVar6,in_stack_00000018);
      uStack_1c = uStack_1c & 0xfffffffd;
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (0xf < uStack_24) {
        func_0x0046b1f0(appuStack_38,appuStack_38[0],uStack_24);
      }
      uStack_28 = 0;
      uStack_24 = 0xf;
      appuStack_38[0] = (undefined4 **)((uint)appuStack_38[0] & 0xffffff00);
      if (cVar3 != '\0') {
        puVar6 = *(undefined4 **)((int)param_2 + 4);
        if (puVar6 == *(undefined4 **)(param_2 + 1)) {
          func_0x00488a10(puVar6,puVar7);
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          if (puVar7[1] != 0) {
            LOCK();
            piVar1 = (int *)(puVar7[1] + 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puStack_20);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < in_stack_0000001c) {
    func_0x0046b1f0(&param_3,param_3,in_stack_0000001c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined8 * __thiscall FUN_005c3630(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 **appuStack_40 [4];
  uint uStack_30;
  uint uStack_2c;
  undefined4 *puStack_28;
  undefined4 **ppuStack_24;
  undefined8 *puStack_20;
  uint uStack_1c;
  undefined1 auStack_15 [5];
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecb4df;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_20 = param_2;
  uStack_8 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_1c = 1;
  puStack_28 = *(undefined4 **)(param_1 + 0x40);
  puVar6 = *(undefined4 **)(param_1 + 0x3c);
  if (puVar6 != puStack_28) {
    do {
      uVar3 = uStack_1c;
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      auStack_15[0] = 0x12;
      func_0x00484b30(appuStack_40,auStack_15,uVar4);
      uStack_1c = uVar3 | 2;
      puVar5 = &param_3;
      if (0xf < in_stack_0000001c) {
        puVar5 = param_3;
      }
      ppuStack_24 = appuStack_40;
      if (0xf < uStack_2c) {
        ppuStack_24 = appuStack_40[0];
      }
      if (uStack_30 < in_stack_00000018) {
LAB_005c3716:
        iVar7 = -1;
      }
      else if (in_stack_00000018 == 0) {
        iVar7 = 0;
      }
      else {
        iVar2 = uStack_30 + (int)ppuStack_24;
        iVar7 = func_0x00e727d0(ppuStack_24,iVar2,puVar5,in_stack_00000018);
        param_2 = puStack_20;
        if (iVar7 == iVar2) goto LAB_005c3716;
        iVar7 = iVar7 - (int)ppuStack_24;
      }
      uStack_1c = uStack_1c & 0xfffffffd;
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (0xf < uStack_2c) {
        func_0x0046b1f0(appuStack_40,appuStack_40[0],uStack_2c);
      }
      uStack_30 = 0;
      uStack_2c = 0xf;
      appuStack_40[0] = (undefined4 **)((uint)appuStack_40[0] & 0xffffff00);
      if (iVar7 != -1) {
        puVar5 = *(undefined4 **)((int)param_2 + 4);
        if (puVar5 == *(undefined4 **)(param_2 + 1)) {
          func_0x00488a10(puVar5,puVar6);
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          if (puVar6[1] != 0) {
            LOCK();
            piVar1 = (int *)(puVar6[1] + 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *puVar5 = *puVar6;
          puVar5[1] = puVar6[1];
          *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
        }
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < in_stack_0000001c) {
    func_0x0046b1f0(&param_3,param_3,in_stack_0000001c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int __thiscall FUN_005c37e0(int param_1,ushort param_2,byte param_3)

{
  uint uVar1;
  char ***pppcVar2;
  int iVar3;
  int iVar4;
  char ***_Dest;
  uint uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  char **appcStack_58 [4];
  size_t sStack_48;
  uint uStack_44;
  char **ppcStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecb526;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar5 = (uint)param_2;
  uVar6 = (uint)param_3;
  uStack_24 = 0;
  if ((param_3 < 4) &&
     (iStack_28 = *(int *)(param_1 + uVar6 * 0xc),
     uVar5 < (uint)(*(int *)(param_1 + 4 + uVar6 * 0xc) - iStack_28 >> 3))) {
    iStack_28 = iStack_28 + uVar5 * 8;
  }
  else {
    uStack_30 = 0;
    uStack_2c = 0;
    ppcStack_40 = (char **)0x0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    iStack_28 = param_1;
    func_0x0046bc40("invalid thing type client id %d in category %d",0x2e,uVar1);
    uStack_14 = 1;
    pppcVar2 = &ppcStack_40;
    if (0xf < uStack_2c) {
      pppcVar2 = (char ***)ppcStack_40;
    }
    iVar3 = _snprintf((char *)0x0,0,(char *)pppcVar2,uVar5,uVar6);
    iVar4 = iVar3 + 1;
    if (SCARRY4(iVar3,1)) {
      iVar4 = -1;
    }
    func_0x00469c80(iVar4,0);
    pppcVar2 = &ppcStack_40;
    if (0xf < uStack_2c) {
      pppcVar2 = (char ***)ppcStack_40;
    }
    _Dest = appcStack_58;
    if (0xf < uStack_44) {
      _Dest = (char ***)appcStack_58[0];
    }
    uStack_24 = 1;
    iVar3 = _snprintf((char *)_Dest,sStack_48,(char *)pppcVar2,uVar5,uVar6);
    func_0x004698c0(iVar3,0);
    FUN_005ee340(3,appcStack_58);
    uStack_24 = 0;
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < uStack_44) {
      func_0x0046b1f0(appcStack_58,appcStack_58[0],uStack_44);
    }
    sStack_48 = 0;
    uStack_44 = 0xf;
    appcStack_58[0] = (char **)((uint)appcStack_58[0] & 0xffffff00);
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&ppcStack_40,ppcStack_40,uStack_2c);
    }
    iStack_28 = iStack_28 + 0x50;
  }
  *unaff_FS_OFFSET = iStack_1c;
  return iStack_28;
}



int * __thiscall FUN_005c3980(int param_1,ushort param_2)

{
  uint uVar1;
  char ***pppcVar2;
  int iVar3;
  int iVar4;
  char ***_Dest;
  int *piVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  char **appcStack_54 [4];
  size_t sStack_44;
  uint uStack_40;
  char **ppcStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecb576;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar6 = (uint)param_2;
  uStack_24 = 0;
  if (((uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 3) <= uVar6) ||
     (piVar5 = (int *)(*(int *)(param_1 + 0x3c) + uVar6 * 8), *piVar5 == *(int *)(param_1 + 0x58)))
  {
    uStack_2c = 0;
    uStack_28 = 0;
    ppcStack_3c = (char **)0x0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    func_0x0046bc40("invalid thing type, server id: %d",0x21,uVar1);
    uStack_14 = 1;
    pppcVar2 = &ppcStack_3c;
    if (0xf < uStack_28) {
      pppcVar2 = (char ***)ppcStack_3c;
    }
    iVar3 = _snprintf((char *)0x0,0,(char *)pppcVar2,uVar6);
    iVar4 = iVar3 + 1;
    if (SCARRY4(iVar3,1)) {
      iVar4 = -1;
    }
    func_0x00469c80(iVar4,0);
    pppcVar2 = &ppcStack_3c;
    if (0xf < uStack_28) {
      pppcVar2 = (char ***)ppcStack_3c;
    }
    _Dest = appcStack_54;
    if (0xf < uStack_40) {
      _Dest = (char ***)appcStack_54[0];
    }
    uStack_24 = 1;
    iVar3 = _snprintf((char *)_Dest,sStack_44,(char *)pppcVar2,uVar6);
    func_0x004698c0(iVar3,0);
    FUN_005ee340(3,appcStack_54);
    uStack_24 = 0;
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < uStack_40) {
      func_0x0046b1f0(appcStack_54,appcStack_54[0],uStack_40);
    }
    sStack_44 = 0;
    uStack_40 = 0xf;
    appcStack_54[0] = (char **)((uint)appcStack_54[0] & 0xffffff00);
    uStack_14 = 0xffffffff;
    if (0xf < uStack_28) {
      func_0x0046b1f0(&ppcStack_3c,ppcStack_3c,uStack_28);
    }
    piVar5 = (int *)(param_1 + 0x58);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return piVar5;
}



undefined8 * __thiscall FUN_005c3b10(int param_1,undefined8 *param_2,byte param_3,byte param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecb5be;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_8 = 0;
  piVar2 = *(int **)(param_1 + 4 + (uint)param_4 * 0xc);
  piVar6 = *(int **)(param_1 + (uint)param_4 * 0xc);
  if (piVar6 != piVar2) {
    do {
      iVar3 = *(int *)(*piVar6 + 0x18);
      if (((uint)param_3 < (uint)(*(int *)(*piVar6 + 0x1c) - iVar3 >> 2)) &&
         (*(int *)(iVar3 + (uint)param_3 * 4) != 0)) {
        piVar4 = *(int **)((int)param_2 + 4);
        if (piVar4 == *(int **)(param_2 + 1)) {
          func_0x00488a10(piVar4,piVar6,uVar5);
        }
        else {
          *piVar4 = 0;
          piVar4[1] = 0;
          if (piVar6[1] != 0) {
            LOCK();
            piVar1 = (int *)(piVar6[1] + 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *piVar4 = *piVar6;
          piVar4[1] = piVar6[1];
          *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
        }
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != piVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined8 * __thiscall FUN_005c3c10(int param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecb5fe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_8 = 0;
  piVar2 = *(int **)(param_1 + 0x40);
  for (piVar5 = *(int **)(param_1 + 0x3c); piVar5 != piVar2; piVar5 = piVar5 + 2) {
    if (*(char *)(*piVar5 + 0x10) == param_3) {
      piVar3 = *(int **)((int)param_2 + 4);
      if (piVar3 == *(int **)(param_2 + 1)) {
        func_0x00488a10(piVar3,piVar5,uVar4);
      }
      else {
        *piVar3 = 0;
        piVar3[1] = 0;
        if (piVar5[1] != 0) {
          LOCK();
          piVar1 = (int *)(piVar5[1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *piVar3 = *piVar5;
        piVar3[1] = piVar5[1];
        *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_005c3cf0(byte param_1)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  byte abStack_28 [4];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecb63d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  abStack_28[0] = param_1;
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_8 = 0;
  if (param_1 < 4) {
    uStack_8 = 0xffffffff;
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x00469d30("invalid thing type category %d",uStack_18);
  uStack_8._0_1_ = 1;
  func_0x005a8cd0(abStack_28);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



TypeDescriptor * FUN_005c46d0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005c46e0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  return;
}



undefined * Catch_005c47ee(void)

{
  func_0x0046a610(4,1);
  return &DAT_005c4807;
}



undefined4 __fastcall FUN_005c48c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e4);
}



undefined4 __fastcall FUN_005c48d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}



undefined4 __fastcall FUN_005c48e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1ec);
}



undefined4 __fastcall FUN_005c48f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f0);
}



undefined4 __thiscall FUN_005c4940(undefined4 param_1,byte param_2)

{
  func_0x005c4970();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x90);
  }
  return param_1;
}



int * __fastcall FUN_005c5f90(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecb955;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar5 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar5;
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  if (puVar6 != *(undefined4 **)(param_1 + 0x2c)) {
    do {
      piStack_14 = &uStack_34;
      if (puVar6[1] != 0) {
        LOCK();
        piVar5 = (int *)(puVar6[1] + 4);
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      uStack_34 = *puVar6;
      puStack_30 = (undefined4 *)puVar6[1];
      uStack_8 = 0xffffffff;
      piVar5 = (int *)FUN_005c66e0();
      puVar6 = *(undefined4 **)(param_1 + 0x28);
    } while (puVar6 != *(undefined4 **)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    puStack_30 = (undefined4 *)0x5c6018;
    FUN_00856da0();
    uStack_18 = 0;
    piStack_14 = (int *)0x0;
    uStack_8 = 1;
    puStack_30 = &uStack_18;
    uStack_34 = 0x5c603c;
    piVar5 = (int *)func_0x0046ffa0();
    piVar4 = piStack_14;
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_14 + 1;
      iVar2 = *piVar1;
      piVar5 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        uStack_34 = 0x5c6062;
        _guard_check_icall();
        uStack_34 = 0x5c6066;
        piVar5 = (int *)(*pcVar3)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piVar4 + 4);
          uStack_34 = 0x5c607b;
          _guard_check_icall();
          uStack_34 = 0x5c607f;
          piVar5 = (int *)(*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar5;
}



void __thiscall FUN_005c6120(int param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  int *piVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int *piStack_74;
  int *piStack_70;
  uint uStack_6c;
  undefined1 auStack_5c [4];
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ecb9b5;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_6c = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_44 = param_2;
  piStack_54 = (int *)*param_2;
  iStack_40 = param_1;
  uStack_24 = uStack_6c;
  puVar3 = &stack0xfffffffc;
  if (piStack_54 == (int *)0x0) goto LAB_005c66a8;
  pcVar1 = *(code **)(*piStack_54 + 0x18);
  piStack_70 = (int *)0x5c6184;
  _guard_check_icall();
  piStack_70 = (int *)0x5c6189;
  cVar4 = (*pcVar1)();
  if (cVar4 == '\0') {
    if ((param_3 < 0) || (param_3 == 0xff)) {
      piStack_70 = (int *)0x5c63cb;
      piStack_54 = (int *)FUN_005b9eb0();
      if (param_3 == -2) {
        piStack_50 = (int *)CONCAT31(piStack_50._1_3_,1);
      }
      else {
        piStack_50 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),(int)piStack_54 < 4);
        if ((0x355 < DAT_0145d0fc) &&
           (piStack_50 = (int *)(uint)((int)piStack_54 < 4), piStack_54 == (int *)&DAT_00000004)) {
          piStack_50 = (int *)0x1;
        }
      }
      param_3 = 0;
      piStack_4c = (int *)(iStack_40 + 0x28);
      piStack_48 = (int *)(iStack_40 + 0x2c);
      if (0 < (int)(*piStack_48 - *piStack_4c & 0xfffffff8U)) {
        do {
          piStack_70 = (int *)0x5c642a;
          piStack_58 = piStack_48;
          iVar6 = FUN_005b9eb0();
          piStack_4c = (int *)(iStack_40 + 0x28);
          piStack_48 = (int *)(iStack_40 + 0x2c);
          if ((char)piStack_50 == '\0') {
            if ((int)piStack_54 <= iVar6) break;
          }
          else if ((int)piStack_54 < iVar6) break;
          param_3 = param_3 + 1;
          piStack_48 = piStack_58;
        } while (param_3 < *piStack_58 - *piStack_4c >> 3);
      }
    }
    else {
      piStack_4c = (int *)(iStack_40 + 0x28);
      piStack_48 = (int *)(iStack_40 + 0x2c);
      iVar6 = *(int *)(iStack_40 + 0x2c) - *piStack_4c >> 3;
      if (iVar6 < param_3) {
        param_3 = iVar6;
      }
    }
    piVar9 = piStack_48;
    piStack_58 = (int *)(*piStack_4c + param_3 * 8);
    piStack_70 = (int *)*piStack_48;
    if (piStack_70 == (int *)piStack_4c[2]) {
      piStack_70 = piStack_44;
      piStack_74 = piStack_58;
      func_0x00488a10();
    }
    else if (piStack_58 == piStack_70) {
      *piStack_70 = 0;
      piStack_70[1] = 0;
      if (piStack_44[1] != 0) {
        LOCK();
        piVar2 = (int *)(piStack_44[1] + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *piStack_70 = *piStack_44;
      piStack_70[1] = piStack_44[1];
      *piStack_48 = *piStack_48 + 8;
    }
    else {
      if (piStack_44[1] != 0) {
        LOCK();
        piVar2 = (int *)(piStack_44[1] + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      iStack_2c = *piStack_44;
      piStack_28 = (int *)piStack_44[1];
      iStack_14 = 3;
      *piStack_70 = piStack_70[-2];
      piStack_70[1] = piStack_70[-1];
      piStack_70[-2] = 0;
      piStack_70[-1] = 0;
      *piStack_48 = *piStack_48 + 8;
      piStack_74 = (int *)0x5c6502;
      piStack_30 = piStack_4c;
      func_0x0057d5f0();
      piStack_70 = &iStack_2c;
      piStack_74 = (int *)0x5c6511;
      func_0x0046ffa0();
      iStack_14 = 0xffffffff;
      piStack_50 = piStack_28;
      if (piStack_28 != (int *)0x0) {
        LOCK();
        iVar6 = piStack_28[1] + -1;
        piStack_28[1] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar1 = *(code **)*piStack_28;
          piStack_70 = (int *)0x5c653a;
          _guard_check_icall();
          piStack_70 = (int *)0x5c653f;
          (*pcVar1)();
          LOCK();
          piVar9 = piStack_50 + 2;
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          piVar9 = piStack_48;
          if (iVar6 == 1) {
            pcVar1 = *(code **)(*piStack_50 + 4);
            piStack_70 = (int *)0x5c6557;
            _guard_check_icall();
            piStack_70 = (int *)0x5c655c;
            (*pcVar1)();
            piVar9 = piStack_48;
          }
        }
      }
    }
    if (((DAT_0145d0cc & 0x2000000) == 0) &&
       (iVar6 = *piStack_4c, 10 < (uint)(*piVar9 - iVar6 >> 3))) {
      piStack_58 = (int *)&piStack_74;
      if (*(int *)(iVar6 + 0x54) != 0) {
        LOCK();
        piVar9 = (int *)(*(int *)(iVar6 + 0x54) + 4);
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
      piStack_74 = *(int **)(iVar6 + 0x50);
      piStack_70 = *(int **)(iVar6 + 0x54);
      iStack_14 = 0xffffffff;
      FUN_005c66e0();
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)*piStack_44 + 0x40);
    piStack_70 = (int *)0x5c61a3;
    _guard_check_icall();
    piStack_70 = (int *)0x5c61a7;
    iVar5 = (*pcVar1)();
    iVar6 = iStack_40;
    if (((uint)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2) < 0x26) ||
       (*(int *)(*(int *)(iVar5 + 0x18) + 0x94) == 0)) {
      piStack_70 = (int *)auStack_5c;
      piStack_74 = (int *)0x5c631e;
      piStack_70 = (int *)func_0x0046b930();
      iStack_14 = 2;
      piVar9 = *(int **)(iVar6 + 0x20);
      if (piVar9 == *(int **)(iVar6 + 0x24)) {
        piStack_74 = piVar9;
        func_0x004a2c50();
        iStack_14 = 0xffffffff;
        piStack_70 = (int *)0x5c6384;
        FUN_00468340();
      }
      else {
        *piVar9 = 0;
        piVar9[1] = 0;
        *piVar9 = *piStack_70;
        piVar9[1] = piStack_70[1];
        *piStack_70 = 0;
        piStack_70[1] = 0;
        *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 8;
        iStack_14 = 0xffffffff;
        piStack_70 = (int *)0x5c6366;
        FUN_00468340();
      }
    }
    else {
      piStack_70 = (int *)auStack_5c;
      piVar8 = (int *)(iStack_40 + 0x1c);
      piStack_74 = (int *)0x5c61dc;
      piStack_70 = (int *)func_0x0046b930();
      iStack_14 = 0;
      piVar9 = *(int **)(iVar6 + 0x20);
      piVar2 = (int *)*piVar8;
      if (piVar9 == *(int **)(iVar6 + 0x24)) {
        piStack_74 = piVar2;
        func_0x004a2c50();
      }
      else {
        if (piVar2 == piVar9) {
          *piVar9 = 0;
          piVar9[1] = 0;
          *piVar9 = *piStack_70;
          piVar9[1] = piStack_70[1];
          *piStack_70 = 0;
          piStack_70[1] = 0;
          *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 8;
          iStack_14 = 0xffffffff;
          piStack_70 = (int *)0x5c622e;
          FUN_00468340();
          goto LAB_005c65c3;
        }
        iStack_2c = *piStack_70;
        piStack_28 = (int *)piStack_70[1];
        *piStack_70 = 0;
        piStack_70[1] = 0;
        iStack_14._0_1_ = 1;
        iStack_14._1_3_ = 0;
        *piVar9 = piVar9[-2];
        piVar9[1] = piVar9[-1];
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 8;
        piStack_74 = (int *)0x5c6286;
        piStack_70 = piVar9;
        piStack_30 = piVar8;
        func_0x0057d5f0();
        piStack_70 = &iStack_2c;
        piStack_74 = (int *)0x5c6294;
        func_0x0046ffa0();
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        piStack_48 = piStack_28;
        if (piStack_28 != (int *)0x0) {
          LOCK();
          iVar6 = piStack_28[1] + -1;
          piStack_28[1] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcVar1 = *(code **)*piStack_28;
            piStack_70 = (int *)0x5c62ba;
            _guard_check_icall();
            piStack_70 = (int *)0x5c62bf;
            (*pcVar1)();
            LOCK();
            piVar9 = piStack_48 + 2;
            iVar6 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              pcVar1 = *(code **)(*piStack_48 + 4);
              piStack_70 = (int *)0x5c62d7;
              _guard_check_icall();
              piStack_70 = (int *)0x5c62dc;
              (*pcVar1)();
              iStack_14 = 0xffffffff;
              piStack_70 = (int *)0x5c62eb;
              FUN_00468340();
              goto LAB_005c65c3;
            }
          }
        }
      }
      iStack_14 = 0xffffffff;
      piStack_70 = (int *)0x5c6308;
      FUN_00468340();
    }
  }
LAB_005c65c3:
  piStack_70 = (int *)(iStack_40 + 0x34);
  piStack_74 = (int *)0x5c65d4;
  FUN_005b9e30();
  pcVar1 = *(code **)(*(int *)*piStack_44 + 0x60);
  piStack_70 = (int *)0x5c65e6;
  _guard_check_icall();
  piStack_70 = (int *)0x5c65ea;
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)*piStack_44 + 0x40);
  piStack_70 = (int *)0x5c65fc;
  _guard_check_icall();
  piStack_70 = (int *)0x5c6600;
  iVar6 = (*pcVar1)();
  if ((0x17 < (uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2)) &&
     (*(int *)(*(int *)(iVar6 + 0x18) + 0x5c) != 0)) {
    piStack_70 = (int *)0x5c6620;
    func_0x005c9f00();
  }
  puVar3 = puStack_20;
  if (DAT_0145d126 != '\0') {
    piStack_70 = (int *)0xa;
    iStack_2c = 0;
    piStack_74 = (int *)0x1141a18;
    piStack_28 = (int *)0x0;
    piStack_3c = (int *)0x0;
    uStack_38 = 0;
    uStack_34 = 0;
    piStack_30 = (int *)0x0;
    func_0x0046bc40();
    iStack_14 = 5;
    uVar7 = func_0x005ca650(&piStack_3c,piStack_44);
    if (0 < (int)uVar7) {
      piStack_70 = (int *)~uVar7;
      piStack_74 = DAT_0145e9f0;
      func_0x00d66d90();
    }
    iStack_14 = 0xffffffff;
    if (0xf < piStack_28) {
      piStack_70 = piStack_28;
      piStack_74 = piStack_3c;
      func_0x0046b1f0(&piStack_3c);
    }
    iStack_2c = 0;
    piStack_28 = (int *)&DAT_0000000f;
    piStack_3c = (int *)((uint)piStack_3c & 0xffffff00);
    puVar3 = puStack_20;
  }
LAB_005c66a8:
  puStack_20 = puVar3;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c66e0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  uint auStack_50 [7];
  int *piStack_34;
  char cStack_2d;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecba00;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  auStack_50[6] = param_1;
  uStack_24 = uVar4;
  if (param_2 == (int *)0x0) {
    cStack_2d = '\0';
    puStack_20 = &stack0xfffffffc;
  }
  else {
    cStack_2d = '\0';
    pcVar2 = *(code **)(*param_2 + 0x18);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 == '\0') {
      for (puVar6 = *(undefined4 **)(param_1 + 0x28); puVar6 != *(undefined4 **)(param_1 + 0x2c);
          puVar6 = puVar6 + 2) {
        if ((int *)*puVar6 == param_2) {
          func_0x0057a5b0(puVar6);
          piStack_34 = *(int **)(*(int *)(param_1 + 0x2c) + -4);
          if (piStack_34 != (int *)0x0) {
            LOCK();
            iVar8 = piStack_34[1] + -1;
            piStack_34[1] = iVar8;
            UNLOCK();
            if (iVar8 == 0) {
              pcVar2 = *(code **)*piStack_34;
              _guard_check_icall(uVar4);
              (*pcVar2)();
              LOCK();
              iVar8 = piStack_34[2] + -1;
              piStack_34[2] = iVar8;
              UNLOCK();
              if (iVar8 == 0) {
                pcVar2 = *(code **)(*piStack_34 + 4);
                _guard_check_icall();
                (*pcVar2)();
              }
            }
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -8;
          cStack_2d = '\x01';
          break;
        }
      }
    }
    else {
      uStack_2c = 0;
      func_0x0046b930(&uStack_2c);
      uStack_14._0_1_ = 1;
      if (*(int **)(param_1 + 0x1c) == *(int **)(param_1 + 0x20)) {
LAB_005c67f8:
        uStack_14 = (uint)uStack_14._1_3_ << 8;
        FUN_00468340();
      }
      else {
        piVar5 = *(int **)(param_1 + 0x1c);
        do {
          piVar1 = piVar5 + 2;
          if (*piVar5 == (int)uStack_2c) {
            func_0x0057a5b0(piVar5);
            piStack_34 = *(int **)(*(int *)(param_1 + 0x20) + -4);
            if (piStack_34 != (int *)0x0) {
              LOCK();
              iVar8 = piStack_34[1] + -1;
              piStack_34[1] = iVar8;
              UNLOCK();
              if (iVar8 == 0) {
                pcVar2 = *(code **)*piStack_34;
                _guard_check_icall(uVar4);
                (*pcVar2)();
                LOCK();
                iVar8 = piStack_34[2] + -1;
                piStack_34[2] = iVar8;
                UNLOCK();
                if (iVar8 == 0) {
                  pcVar2 = *(code **)(*piStack_34 + 4);
                  _guard_check_icall();
                  (*pcVar2)();
                }
              }
            }
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -8;
            cStack_2d = '\x01';
            goto LAB_005c67f8;
          }
          piVar5 = piVar1;
        } while (piVar1 != *(int **)(param_1 + 0x20));
        uStack_14 = (uint)uStack_14._1_3_ << 8;
        FUN_00468340();
      }
    }
    pcVar2 = *(code **)(*param_2 + 0x20);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      pcVar2 = *(code **)(*param_2 + 0xc);
      _guard_check_icall();
      uVar7 = (*pcVar2)();
      *(undefined4 *)(auStack_50[6] + 0x50) = uVar7;
    }
    pcVar2 = *(code **)(*param_2 + 100);
    _guard_check_icall();
    (*pcVar2)();
    pcVar2 = *(code **)(*param_2 + 0x40);
    _guard_check_icall();
    iVar8 = (*pcVar2)();
    if ((0x17 < (uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2)) &&
       (*(int *)(*(int *)(iVar8 + 0x18) + 0x5c) != 0)) {
      func_0x005c9f00();
    }
    if ((DAT_0145d126 != '\0') && (cStack_2d != '\0')) {
      auStack_50[4] = 0;
      auStack_50[5] = 0;
      auStack_50[0] = 0;
      auStack_50[1] = 0;
      auStack_50[2] = 0;
      auStack_50[3] = 0;
      func_0x0046bc40("onRemoveThing",0xd);
      uStack_14 = CONCAT31(uStack_14._1_3_,2);
      uVar9 = func_0x005ca650(auStack_50,&param_2);
      if (0 < (int)uVar9) {
        func_0x00d66d90(DAT_0145e9f0,~uVar9);
      }
      uStack_14 = uStack_14 & 0xffffff00;
      if (0xf < auStack_50[5]) {
        func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
      }
      auStack_50[4] = 0;
      auStack_50[5] = 0xf;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
    }
  }
  piVar5 = param_3;
  uStack_14 = 0xffffffff;
  if (param_3 != (int *)0x0) {
    LOCK();
    iVar8 = param_3[1] + -1;
    param_3[1] = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      pcVar2 = *(code **)*param_3;
      _guard_check_icall(uVar4);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar5 + 2;
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall(uVar4);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c6a00(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  if ((param_3 < 0) ||
     (iVar3 = *(int *)(param_1 + 0x28), *(int *)(param_1 + 0x2c) - iVar3 >> 3 <= param_3)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    iVar4 = *(int *)(iVar3 + 4 + param_3 * 8);
    if (iVar4 != 0) {
      LOCK();
      piVar1 = (int *)(iVar4 + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(iVar3 + param_3 * 8);
    param_2[1] = *(undefined4 *)(iVar3 + 4 + param_3 * 8);
  }
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __thiscall FUN_005c6aa0(int param_1,undefined4 *param_2,ushort param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb491e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  do {
    if (puVar6 == puVar2) {
      *param_2 = 0;
      param_2[1] = 0;
LAB_005c6b13:
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    pcVar3 = *(code **)(*(int *)*puVar6 + 0xc);
    _guard_check_icall(uVar4);
    uVar5 = (*pcVar3)();
    if (uVar5 == param_3) {
      *param_2 = 0;
      param_2[1] = 0;
      if (puVar6[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar6[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *param_2 = *puVar6;
      param_2[1] = puVar6[1];
      goto LAB_005c6b13;
    }
    puVar6 = puVar6 + 2;
  } while( true );
}



uint __thiscall FUN_005c6b60(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x28);
  uVar1 = 0;
  uVar3 = *(int *)(param_1 + 0x2c) - (int)piVar2 >> 3;
  if (uVar3 != 0) {
    do {
      if (*param_2 == *piVar2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar1 < uVar3);
  }
  return 0xffffffff;
}



undefined4 * __thiscall FUN_005c6ba0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *extraout_ECX;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecba4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  puVar7 = *(undefined4 **)(param_1 + 0x28);
  if (puVar2 == puVar7) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    for (; puVar7 != puVar2; puVar7 = puVar7 + 2) {
      pcVar3 = *(code **)(*(int *)*puVar7 + 0x40);
      _guard_check_icall(uVar5);
      iVar6 = (*pcVar3)();
      if ((*(int *)(iVar6 + 0x1c) - (int)*(int **)(iVar6 + 0x18) >> 2 == 0) ||
         (**(int **)(iVar6 + 0x18) == 0)) {
        pcVar3 = *(code **)(*(int *)*puVar7 + 0x40);
        _guard_check_icall(uVar5);
        iVar6 = (*pcVar3)();
        if (((uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2) < 2) ||
           (*(int *)(*(int *)(iVar6 + 0x18) + 4) == 0)) {
          pcVar3 = *(code **)(*(int *)*puVar7 + 0x40);
          _guard_check_icall();
          iVar6 = (*pcVar3)();
          if (((uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2) < 3) ||
             (*(int *)(*(int *)(iVar6 + 0x18) + 8) == 0)) {
            pcVar3 = *(code **)(*(int *)*puVar7 + 0x40);
            _guard_check_icall();
            iVar6 = (*pcVar3)();
            if (((uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2) < 4) ||
               (*(int *)(*(int *)(iVar6 + 0x18) + 0xc) == 0)) {
              pcVar3 = *(code **)(*(int *)*puVar7 + 0x20);
              _guard_check_icall();
              cVar4 = (*pcVar3)();
              if (cVar4 == '\0') {
                func_0x00468490(puVar7);
                *unaff_FS_OFFSET = iStack_10;
                return extraout_ECX;
              }
            }
          }
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x28) +
            (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3) * 8;
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)(iVar6 + -4) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(iVar6 + -4) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(iVar6 + -8);
    param_2[1] = *(undefined4 *)(iVar6 + -4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_005c6d50(int param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  undefined8 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecbac8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_38 = param_2;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_8 = 0;
  uStack_24 = 1;
  puStack_2c = *(undefined4 **)(param_1 + 0x28);
  puStack_34 = *(undefined4 **)(param_1 + 0x2c);
  uStack_18 = uVar6;
  if (puStack_2c != puStack_34) {
    do {
      pcVar1 = *(code **)(*(int *)*puStack_2c + 0x14);
      _guard_check_icall(uVar6);
      cVar5 = (*pcVar1)();
      if (cVar5 != '\0') {
        uStack_20 = 0;
        uStack_8 = 1;
        puVar7 = (undefined8 *)func_0x00468610(auStack_40);
        uStack_30 = *(undefined4 *)puVar7;
        piVar8 = *(int **)((int)puVar7 + 4);
        uStack_20 = *puVar7;
        *(undefined4 *)puVar7 = 0;
        *(undefined4 *)((int)puVar7 + 4) = 0;
        uStack_24 = uStack_24 & 0xfffffffb | 2;
        uStack_8 = 1;
        piStack_28 = piStack_3c;
        if (piStack_3c != (int *)0x0) {
          LOCK();
          iVar3 = piStack_3c[1] + -1;
          piStack_3c[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar1 = *(code **)*piStack_3c;
            _guard_check_icall(uVar6);
            (*pcVar1)();
            LOCK();
            iVar3 = piStack_28[2] + -1;
            piStack_28[2] = iVar3;
            UNLOCK();
            if (iVar3 == 0) {
              pcVar1 = *(code **)(*piStack_28 + 4);
              _guard_check_icall();
              (*pcVar1)();
            }
          }
        }
        uVar4 = uStack_24;
        puVar2 = *(undefined4 **)((int)param_2 + 4);
        if (puVar2 == *(undefined4 **)(param_2 + 1)) {
          func_0x004ea380(puVar2,&uStack_20);
          piVar8 = uStack_20._4_4_;
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          if (piVar8 != (int *)0x0) {
            LOCK();
            piVar8[1] = piVar8[1] + 1;
            UNLOCK();
          }
          *puVar2 = uStack_30;
          puVar2[1] = piVar8;
          *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
        }
        uStack_24 = uVar4 & 0xfffffffd;
        uStack_8 = uStack_8 & 0xffffff00;
        if (piVar8 != (int *)0x0) {
          LOCK();
          iVar3 = piVar8[1] + -1;
          piVar8[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar1 = *(code **)*piVar8;
            _guard_check_icall();
            (*pcVar1)();
            LOCK();
            iVar3 = piVar8[2] + -1;
            piVar8[2] = iVar3;
            UNLOCK();
            if (iVar3 == 0) {
              pcVar1 = *(code **)(*piVar8 + 4);
              _guard_check_icall();
              (*pcVar1)();
            }
          }
        }
      }
      puStack_2c = puStack_2c + 2;
    } while (puStack_2c != puStack_34);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined8 * __thiscall FUN_005c6f60(int param_1,undefined8 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_38 [4];
  int *piStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecbb48;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_8 = 0;
  uStack_18 = 1;
  puStack_1c = *(undefined4 **)(param_1 + 0x28);
  puStack_28 = *(undefined4 **)(param_1 + 0x2c);
  if (puStack_1c != puStack_28) {
    do {
      pcVar2 = *(code **)(*(int *)*puStack_1c + 0x20);
      _guard_check_icall(uVar6);
      cVar5 = (*pcVar2)();
      if (cVar5 != '\0') {
        uStack_8 = 1;
        puVar7 = (undefined4 *)func_0x00468610(auStack_38);
        piVar4 = piStack_34;
        uStack_30 = *puVar7;
        piStack_2c = (int *)puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        uStack_18 = 3;
        uStack_8 = 1;
        piStack_24 = piStack_2c;
        uStack_20 = uStack_30;
        if (piStack_34 != (int *)0x0) {
          LOCK();
          iVar3 = piStack_34[1] + -1;
          piStack_34[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)*piStack_34;
            _guard_check_icall(uVar6);
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
        puVar7 = *(undefined4 **)((int)param_2 + 4);
        if (puVar7 == *(undefined4 **)(param_2 + 1)) {
          func_0x004a2c50(puVar7,&uStack_30);
        }
        else {
          *puVar7 = uStack_20;
          puVar7[1] = piStack_24;
          piStack_2c = (int *)0x0;
          *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
          uStack_30 = 0;
        }
        piVar4 = piStack_2c;
        uStack_18 = 1;
        uStack_8 = uStack_8 & 0xffffff00;
        if (piStack_2c != (int *)0x0) {
          LOCK();
          iVar3 = piStack_2c[1] + -1;
          piStack_2c[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar2 = *(code **)*piStack_2c;
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
      }
      puStack_1c = puStack_1c + 2;
    } while (puStack_1c != puStack_28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_005c7150(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb2566;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  uStack_18 = uVar4;
  FUN_005c6a00(&uStack_20,0);
  uStack_8 = 1;
  if ((int *)uStack_20 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_005c71ae:
    uStack_8 = uStack_8 & 0xffffff00;
    piVar2 = uStack_20._4_4_;
    if (uStack_20._4_4_ == (int *)0x0) goto LAB_005c72a8;
    LOCK();
    iVar5 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 != 0) goto LAB_005c72a8;
    pcVar6 = *(code **)*uStack_20._4_4_;
    _guard_check_icall(uVar4);
    (*pcVar6)();
    LOCK();
    piVar1 = piVar2 + 2;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_005c72a8;
    pcVar6 = *(code **)(*piVar2 + 4);
  }
  else {
    pcVar6 = *(code **)(*(int *)uStack_20 + 0x40);
    _guard_check_icall(uVar4);
    iVar5 = (*pcVar6)();
    if ((*(int *)(iVar5 + 0x1c) - (int)*(int **)(iVar5 + 0x18) >> 2 != 0) &&
       (**(int **)(iVar5 + 0x18) != 0)) {
      pcVar6 = *(code **)(*(int *)uStack_20 + 0x14);
      _guard_check_icall(uVar4);
      cVar3 = (*pcVar6)();
      if (cVar3 != '\0') {
        func_0x0046b930(param_1);
        goto LAB_005c71ae;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    piVar2 = uStack_20._4_4_;
    if (uStack_20._4_4_ == (int *)0x0) goto LAB_005c72a8;
    LOCK();
    iVar5 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 != 0) goto LAB_005c72a8;
    pcVar6 = *(code **)*uStack_20._4_4_;
    _guard_check_icall(uVar4);
    (*pcVar6)();
    LOCK();
    piVar1 = piVar2 + 2;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_005c72a8;
    pcVar6 = *(code **)(*piVar2 + 4);
  }
  _guard_check_icall();
  (*pcVar6)();
LAB_005c72a8:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c7510(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecbb96;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c) - (int)puVar6 >> 3;
  if (iVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uStack_28 = 0;
    if (iVar5 != 0) {
      do {
        if (puVar6[uStack_28 * 2 + 1] != 0) {
          LOCK();
          piVar1 = (int *)(puVar6[uStack_28 * 2 + 1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = (int *)puVar6[uStack_28 * 2];
        piVar2 = (int *)puVar6[uStack_28 * 2 + 1];
        uStack_8 = 1;
        pcVar3 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar4);
        iVar5 = (*pcVar3)();
        if (((uint)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2) < 0x20) ||
           (*(int *)(*(int *)(iVar5 + 0x18) + 0x7c) == 0)) {
          pcVar3 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall(uVar4);
          iVar5 = (*pcVar3)();
          if ((*(int *)(iVar5 + 0x1c) - (int)*(int **)(iVar5 + 0x18) >> 2 == 0) ||
             (**(int **)(iVar5 + 0x18) == 0)) {
            pcVar3 = *(code **)(*piVar1 + 0x40);
            _guard_check_icall();
            iVar5 = (*pcVar3)();
            if (((uint)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2) < 2) ||
               (*(int *)(*(int *)(iVar5 + 0x18) + 4) == 0)) {
              pcVar3 = *(code **)(*piVar1 + 0x40);
              _guard_check_icall();
              iVar5 = (*pcVar3)();
              if (((uint)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2) < 3) ||
                 (*(int *)(*(int *)(iVar5 + 0x18) + 8) == 0)) {
                pcVar3 = *(code **)(*piVar1 + 0x40);
                _guard_check_icall();
                iVar5 = (*pcVar3)();
                if (((uint)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2) < 4) ||
                   (*(int *)(*(int *)(iVar5 + 0x18) + 0xc) == 0)) {
                  param_2[1] = 0;
                  *param_2 = piVar1;
                  param_2[1] = piVar2;
                  uStack_8 = uStack_8 & 0xffffff00;
                  goto LAB_005c7712;
                }
              }
            }
          }
        }
        uStack_8 = uStack_8 & 0xffffff00;
        if (piVar2 != (int *)0x0) {
          LOCK();
          iVar5 = piVar2[1] + -1;
          piVar2[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar3 = *(code **)*piVar2;
            _guard_check_icall(uVar4);
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
        uStack_28 = uStack_28 + 1;
        puVar6 = *(undefined4 **)(param_1 + 0x28);
      } while (uStack_28 < (uint)(*(int *)(param_1 + 0x2c) - (int)puVar6 >> 3));
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (puVar6[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar6[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *puVar6;
    param_2[1] = puVar6[1];
  }
  uStack_8 = 0;
LAB_005c7712:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c7760(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_28;
  int *piStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecbbee;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  uStack_18 = uVar3;
  FUN_005c8500(&uStack_20,param_3,param_4);
  uStack_8 = 0;
  piVar1 = uStack_20._4_4_;
  if ((int)uStack_20 != 0) {
    *param_2 = (int)uStack_20;
    param_2[1] = 0;
    param_2[1] = (int)uStack_20._4_4_;
    uStack_20 = 0;
    uStack_8 = 0;
    goto LAB_005c7a5c;
  }
  piVar5 = *(int **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c) - (int)piVar5 >> 3;
  if (iVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    uStack_8 = 0;
    if (uStack_20._4_4_ == (int *)0x0) goto LAB_005c7a5c;
    LOCK();
    iVar4 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 != 0) goto LAB_005c7a5c;
    pcVar6 = *(code **)*uStack_20._4_4_;
    _guard_check_icall(uVar3);
    (*pcVar6)();
    LOCK();
    piVar5 = piVar1 + 2;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_005c7a5c;
    pcVar6 = *(code **)(*piVar1 + 4);
    _guard_check_icall(uVar3);
  }
  else {
    uStack_34 = 0;
    if (iVar4 != 0) {
      do {
        if (piVar5[uStack_34 * 2 + 1] != 0) {
          LOCK();
          piVar1 = (int *)(piVar5[uStack_34 * 2 + 1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = (int *)piVar5[uStack_34 * 2];
        piVar5 = (int *)piVar5[uStack_34 * 2 + 1];
        _piStack_28 = CONCAT44(piVar5,piVar1);
        uStack_8._0_1_ = 2;
        pcVar6 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar3);
        iVar4 = (*pcVar6)();
        if (((uint)(*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2) < 0x20) ||
           (*(int *)(*(int *)(iVar4 + 0x18) + 0x7c) == 0)) {
          pcVar6 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall(uVar3);
          iVar4 = (*pcVar6)();
          if ((*(int *)(iVar4 + 0x1c) - (int)*(int **)(iVar4 + 0x18) >> 2 == 0) ||
             (**(int **)(iVar4 + 0x18) == 0)) {
            pcVar6 = *(code **)(*piVar1 + 0x40);
            _guard_check_icall();
            iVar4 = (*pcVar6)();
            if (((uint)(*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2) < 2) ||
               (*(int *)(*(int *)(iVar4 + 0x18) + 4) == 0)) {
              pcVar6 = *(code **)(*piVar1 + 0x40);
              _guard_check_icall();
              iVar4 = (*pcVar6)();
              if (((uint)(*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2) < 3) ||
                 (*(int *)(*(int *)(iVar4 + 0x18) + 8) == 0)) {
                pcVar6 = *(code **)(*piVar1 + 0x40);
                _guard_check_icall();
                iVar4 = (*pcVar6)();
                if (((uint)(*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2) < 4) ||
                   (*(int *)(*(int *)(iVar4 + 0x18) + 0xc) == 0)) {
                  pcVar6 = *(code **)(*piVar1 + 0x20);
                  _guard_check_icall();
                  cVar2 = (*pcVar6)();
                  if (cVar2 == '\0') {
                    func_0x0047a510(&piStack_28);
                    uStack_8._0_1_ = 1;
                    piVar1 = piStack_24;
                    if (piStack_24 != (int *)0x0) {
                      LOCK();
                      iVar4 = piStack_24[1] + -1;
                      piStack_24[1] = iVar4;
                      UNLOCK();
                      if (iVar4 == 0) {
                        pcVar6 = *(code **)*piStack_24;
                        _guard_check_icall();
                        (*pcVar6)();
                        LOCK();
                        piVar5 = piVar1 + 2;
                        iVar4 = *piVar5 + -1;
                        *piVar5 = iVar4;
                        UNLOCK();
                        if (iVar4 == 0) {
                          pcVar6 = *(code **)(*piVar1 + 4);
                          _guard_check_icall();
                          (*pcVar6)();
                        }
                      }
                    }
                    uStack_8 = (uint)uStack_8._1_3_ << 8;
                    piVar1 = uStack_20._4_4_;
                    if (uStack_20._4_4_ == (int *)0x0) goto LAB_005c7a5c;
                    LOCK();
                    iVar4 = uStack_20._4_4_[1] + -1;
                    uStack_20._4_4_[1] = iVar4;
                    UNLOCK();
                    if (iVar4 != 0) goto LAB_005c7a5c;
                    pcVar6 = *(code **)*uStack_20._4_4_;
                    _guard_check_icall();
                    (*pcVar6)();
                    LOCK();
                    piVar5 = piVar1 + 2;
                    iVar4 = *piVar5;
                    *piVar5 = *piVar5 + -1;
                    UNLOCK();
                    if (iVar4 != 1) goto LAB_005c7a5c;
                    pcVar6 = *(code **)(*piVar1 + 4);
                    _guard_check_icall();
                    goto LAB_005c7a57;
                  }
                }
              }
            }
          }
        }
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if (piVar5 != (int *)0x0) {
          LOCK();
          iVar4 = piVar5[1] + -1;
          piVar5[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar6 = *(code **)*piVar5;
            _guard_check_icall();
            (*pcVar6)();
            LOCK();
            iVar4 = piVar5[2] + -1;
            piVar5[2] = iVar4;
            UNLOCK();
            if (iVar4 == 0) {
              pcVar6 = *(code **)(*piVar5 + 4);
              _guard_check_icall();
              (*pcVar6)();
            }
          }
        }
        uStack_34 = uStack_34 + 1;
        piVar5 = *(int **)(param_1 + 0x28);
      } while (uStack_34 < (uint)(*(int *)(param_1 + 0x2c) - (int)piVar5 >> 3));
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (piVar5[1] != 0) {
      LOCK();
      piVar1 = (int *)(piVar5[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *piVar5;
    param_2[1] = piVar5[1];
    uStack_8 = uStack_8 & 0xffffff00;
    piVar1 = uStack_20._4_4_;
    if (uStack_20._4_4_ == (int *)0x0) goto LAB_005c7a5c;
    LOCK();
    iVar4 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 != 0) goto LAB_005c7a5c;
    pcVar6 = *(code **)*uStack_20._4_4_;
    _guard_check_icall(uVar3);
    (*pcVar6)();
    LOCK();
    piVar5 = piVar1 + 2;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_005c7a5c;
    pcVar6 = *(code **)(*piVar1 + 4);
    _guard_check_icall(uVar3);
  }
LAB_005c7a57:
  (*pcVar6)();
LAB_005c7a5c:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c7b30(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  uint uStack_24;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecbc4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar8 = *(int *)(param_1 + 0x28);
  iVar9 = iVar7 - iVar8 >> 3;
  if (iVar9 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    uStack_8 = 0;
  }
  else {
    uStack_24 = 0;
    if (iVar9 != 0) {
      do {
        iVar7 = *(int *)(iVar8 + 4 + uStack_24 * 8);
        if (iVar7 != 0) {
          LOCK();
          piVar1 = (int *)(iVar7 + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = *(int **)(iVar8 + uStack_24 * 8);
        piVar3 = *(int **)(iVar8 + 4 + uStack_24 * 8);
        uStack_8 = 1;
        pcVar4 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar6);
        iVar7 = (*pcVar4)();
        if ((6 < (uint)(*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2)) &&
           (*(int *)(*(int *)(iVar7 + 0x18) + 0x18) != 0)) {
LAB_005c7e1a:
          param_2[1] = 0;
          *param_2 = piVar1;
          param_2[1] = piVar3;
          goto LAB_005c7e29;
        }
        pcVar4 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar6);
        iVar7 = (*pcVar4)();
        if ((*(int *)(iVar7 + 0x1c) - (int)*(int **)(iVar7 + 0x18) >> 2 == 0) ||
           (**(int **)(iVar7 + 0x18) == 0)) {
          pcVar4 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall();
          iVar7 = (*pcVar4)();
          if (((uint)(*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2) < 2) ||
             (*(int *)(*(int *)(iVar7 + 0x18) + 4) == 0)) {
            pcVar4 = *(code **)(*piVar1 + 0x40);
            _guard_check_icall();
            iVar7 = (*pcVar4)();
            if (((uint)(*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2) < 3) ||
               (*(int *)(*(int *)(iVar7 + 0x18) + 8) == 0)) {
              pcVar4 = *(code **)(*piVar1 + 0x40);
              _guard_check_icall();
              iVar7 = (*pcVar4)();
              if (((uint)(*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2) < 4) ||
                 (*(int *)(*(int *)(iVar7 + 0x18) + 0xc) == 0)) {
                pcVar4 = *(code **)(*piVar1 + 0x20);
                _guard_check_icall();
                cVar5 = (*pcVar4)();
                if (cVar5 == '\0') {
                  pcVar4 = *(code **)(*piVar1 + 0x40);
                  _guard_check_icall();
                  iVar7 = (*pcVar4)();
                  if (((uint)(*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2) < 0xc) ||
                     (*(int *)(*(int *)(iVar7 + 0x18) + 0x2c) == 0)) goto LAB_005c7e1a;
                }
              }
            }
          }
        }
        uStack_8 = uStack_8 & 0xffffff00;
        if (piVar3 != (int *)0x0) {
          LOCK();
          iVar7 = piVar3[1] + -1;
          piVar3[1] = iVar7;
          UNLOCK();
          if (iVar7 == 0) {
            pcVar4 = *(code **)*piVar3;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            iVar7 = piVar3[2] + -1;
            piVar3[2] = iVar7;
            UNLOCK();
            if (iVar7 == 0) {
              pcVar4 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
        uStack_24 = uStack_24 + 1;
        iVar7 = *(int *)(param_1 + 0x2c);
        iVar8 = *(int *)(param_1 + 0x28);
      } while (uStack_24 < (uint)(iVar7 - iVar8 >> 3));
    }
    iVar7 = iVar7 - iVar8 >> 3;
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 * 8);
      if (puVar2[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar2[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      piVar1 = (int *)*puVar2;
      piVar3 = (int *)puVar2[1];
      uStack_8 = 2;
      pcVar4 = *(code **)(*piVar1 + 0x40);
      _guard_check_icall(uVar6);
      iVar8 = (*pcVar4)();
      if (((uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2) < 0xc) ||
         (*(int *)(*(int *)(iVar8 + 0x18) + 0x2c) == 0)) {
        pcVar4 = *(code **)(*piVar1 + 0x20);
        _guard_check_icall(uVar6);
        cVar5 = (*pcVar4)();
        if (cVar5 == '\0') {
          param_2[1] = 0;
          *param_2 = piVar1;
          param_2[1] = piVar3;
LAB_005c7e29:
          uStack_8 = uStack_8 & 0xffffff00;
          goto LAB_005c7e93;
        }
      }
      uStack_8 = uStack_8 & 0xffffff00;
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar8 = piVar3[1] + -1;
        piVar3[1] = iVar8;
        UNLOCK();
        if (iVar8 == 0) {
          pcVar4 = *(code **)*piVar3;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar8 = piVar3[2] + -1;
          piVar3[2] = iVar8;
          UNLOCK();
          if (iVar8 == 0) {
            pcVar4 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    *param_2 = 0;
    param_2[1] = 0;
    if (puVar2[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    uStack_8 = 0;
  }
LAB_005c7e93:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c7ec0(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  float fVar13;
  int iStack_78;
  int iStack_74;
  short sStack_70;
  undefined8 uStack_60;
  int *piStack_58;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  int *piStack_48;
  uint uStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ecbd08;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar10 = (int *)0x0;
  uStack_44 = 0;
  iStack_40 = 0;
  uStack_20 = 0;
  uStack_8 = 1;
  iVar9 = *(int *)(param_1 + 0x28);
  uStack_50 = 0;
  iStack_54 = param_1;
  uStack_18 = uVar6;
  if (*(int *)(param_1 + 0x2c) - iVar9 >> 3 != 0) {
    do {
      iVar1 = *(int *)(iVar9 + 4 + uStack_50 * 8);
      if (iVar1 != 0) {
        LOCK();
        piVar8 = (int *)(iVar1 + 4);
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      piStack_38 = *(int **)(iVar9 + uStack_50 * 8);
      piStack_3c = *(int **)(iVar9 + 4 + uStack_50 * 8);
      _piStack_28 = CONCAT44(piStack_3c,piStack_38);
      uStack_8._0_1_ = 2;
      pcVar2 = *(code **)(*piStack_38 + 0x30);
      _guard_check_icall(uVar6);
      cVar4 = (*pcVar2)();
      if (cVar4 == '\0') {
        pcVar2 = *(code **)(*piStack_38 + 0x20);
        _guard_check_icall();
        cVar4 = (*pcVar2)();
        if (cVar4 != '\0') {
          pcVar2 = *(code **)(*piStack_38 + 0x30);
          _guard_check_icall();
          cVar4 = (*pcVar2)();
          if (cVar4 == '\0') {
            func_0x0046b930(param_2);
            uStack_44 = uStack_44 | 1;
            uStack_8._0_1_ = 1;
            if (piStack_3c != (int *)0x0) {
              LOCK();
              iVar9 = piStack_3c[1] + -1;
              piStack_3c[1] = iVar9;
              UNLOCK();
              if (iVar9 == 0) {
                pcVar2 = *(code **)*piStack_3c;
                _guard_check_icall();
                (*pcVar2)();
                LOCK();
                iVar9 = piStack_3c[2] + -1;
                piStack_3c[2] = iVar9;
                UNLOCK();
                if (iVar9 == 0) {
                  pcVar2 = *(code **)(*piStack_3c + 4);
                  _guard_check_icall();
                  (*pcVar2)();
                }
              }
            }
            uStack_8 = (uint)uStack_8._1_3_ << 8;
            if (piVar10 != (int *)0x0) {
              LOCK();
              iVar9 = piVar10[1] + -1;
              piVar10[1] = iVar9;
              UNLOCK();
              if (iVar9 == 0) {
                pcVar2 = *(code **)*piVar10;
                _guard_check_icall();
                (*pcVar2)();
                LOCK();
                piVar8 = piVar10 + 2;
                iVar9 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  pcVar2 = *(code **)(*piVar10 + 4);
                  _guard_check_icall();
                  (*pcVar2)();
                }
              }
            }
            goto LAB_005c843d;
          }
        }
      }
      else {
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        piVar7 = (int *)func_0x00468610(&piStack_30);
        iVar9 = *piVar7;
        uStack_60 = CONCAT44(iVar9,(int)uStack_60);
        *piVar7 = 0;
        piVar8 = (int *)piVar7[1];
        piVar7[1] = 0;
        uStack_44 = uStack_44 & 0xfffffffb | 2;
        uStack_8._0_1_ = 3;
        uStack_8._1_3_ = 0;
        piStack_38 = piStack_2c;
        if (piStack_2c != (int *)0x0) {
          LOCK();
          iVar1 = piStack_2c[1] + -1;
          piStack_2c[1] = iVar1;
          UNLOCK();
          if (iVar1 == 0) {
            pcVar2 = *(code **)*piStack_2c;
            piStack_58 = piVar8;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            iVar1 = piStack_38[2] + -1;
            piStack_38[2] = iVar1;
            UNLOCK();
            if (iVar1 == 0) {
              pcVar2 = *(code **)(*piStack_38 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
        uStack_60 = uStack_60 & 0xffffffff;
        piStack_58 = (int *)0x0;
        iStack_4c = iStack_40;
        uStack_20 = CONCAT44(piVar8,iVar9);
        uStack_8._0_1_ = 3;
        piStack_48 = piVar10;
        iStack_40 = iVar9;
        piStack_38 = piVar10;
        if (piVar10 != (int *)0x0) {
          LOCK();
          iVar9 = piVar10[1] + -1;
          piVar10[1] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcVar2 = *(code **)*piVar10;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            iVar9 = piStack_38[2] + -1;
            piStack_38[2] = iVar9;
            UNLOCK();
            if (iVar9 == 0) {
              pcVar2 = *(code **)(*piStack_38 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
        uStack_44 = uStack_44 & 0xfffffffd;
        piVar10 = piVar8;
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (piStack_3c != (int *)0x0) {
        LOCK();
        iVar9 = piStack_3c[1] + -1;
        piStack_3c[1] = iVar9;
        UNLOCK();
        if (iVar9 == 0) {
          pcVar2 = *(code **)*piStack_3c;
          _guard_check_icall();
          (*pcVar2)();
          LOCK();
          iVar9 = piStack_3c[2] + -1;
          piStack_3c[2] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcVar2 = *(code **)(*piStack_3c + 4);
            _guard_check_icall();
            (*pcVar2)();
          }
        }
      }
      iVar9 = *(int *)(param_1 + 0x28);
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < (uint)(*(int *)(param_1 + 0x2c) - iVar9 >> 3));
    iVar9 = iStack_40;
    if (iStack_40 != 0) goto LAB_005c8418;
  }
  iVar9 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) != iVar9) {
    if (*(int *)(iVar9 + -4) != 0) {
      LOCK();
      piVar8 = (int *)(*(int *)(iVar9 + -4) + 4);
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    iStack_40 = *(int *)(iVar9 + -8);
    piVar8 = *(int **)(iVar9 + -4);
    uStack_20 = *(undefined8 *)(iVar9 + -8);
    iStack_4c = 0;
    uStack_8 = CONCAT31((int3)(uStack_8 >> 8),1);
    piStack_48 = piVar10;
    piStack_38 = piVar10;
    if (piVar10 != (int *)0x0) {
      LOCK();
      iVar9 = piVar10[1] + -1;
      piVar10[1] = iVar9;
      UNLOCK();
      if (iVar9 == 0) {
        pcVar2 = *(code **)*piVar10;
        _guard_check_icall(uVar6);
        (*pcVar2)();
        LOCK();
        iVar9 = piStack_38[2] + -1;
        piStack_38[2] = iVar9;
        UNLOCK();
        if (iVar9 == 0) {
          pcVar2 = *(code **)(*piStack_38 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    piVar10 = piVar8;
    iVar9 = iStack_40;
    if (iStack_40 != 0) goto LAB_005c8418;
  }
  piStack_38 = (int *)0xffffffff;
  iVar9 = iStack_40;
  do {
    uStack_50 = 0xffffffff;
    piVar10 = piStack_38;
    do {
      uVar6 = uStack_50;
      piStack_58 = *(int **)(param_1 + 0x3c);
      uStack_60._0_4_ = (int)*(undefined8 *)(param_1 + 0x34);
      uStack_60._0_4_ = (int)uStack_60 + (int)piVar10;
      uStack_60._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      uStack_60._4_4_ = uStack_60._4_4_ + uStack_50;
      if ((((*(int *)(param_1 + 0x34) != (int)uStack_60) ||
           (*(int *)(param_1 + 0x38) != uStack_60._4_4_)) ||
          (*(short *)(param_1 + 0x3c) != (short)piStack_58)) &&
         (piVar8 = (int *)FUN_00572b50(&uStack_60), piVar10 = piStack_38, *piVar8 != 0)) {
        FUN_005c6f60(&piStack_34);
        uStack_8._0_1_ = 8;
        piStack_3c = piStack_30;
        piVar10 = piStack_30;
        piVar8 = piStack_34;
        if (piStack_34 != piStack_30) {
          do {
            iVar1 = *piVar8;
            uVar3 = uStack_20;
            if (*(char *)(iVar1 + 0x240) != '\0') {
              iStack_78 = (int)*(undefined8 *)(iVar1 + 0x270);
              piVar10 = piStack_3c;
              if (((*(int *)(param_1 + 0x34) == iStack_78) &&
                  (iStack_74 = (int)((ulonglong)*(undefined8 *)(iVar1 + 0x270) >> 0x20),
                  *(int *)(param_1 + 0x38) == iStack_74)) &&
                 (sStack_70 = (short)*(undefined4 *)(iVar1 + 0x278),
                 *(short *)(param_1 + 0x3c) == sStack_70)) {
                _piStack_28 = CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
                bVar12 = (uint)(float)DAT_0145db28 < (uint)*(float *)(iVar1 + 0x220);
                iVar11 = (int)(float)DAT_0145db28 - (int)*(float *)(iVar1 + 0x220);
                iVar9 = DAT_0145db28._4_4_ - *(int *)(iVar1 + 0x224);
                fVar13 = (float)DAT_0145db28;
                uVar5 = FUN_00478c20(0,8);
                func_0x00e87ec0(iVar11,iVar9 - (uint)bVar12,uVar5,0);
                func_0x008abfd0();
                piVar10 = piStack_3c;
                iVar9 = iStack_40;
                param_1 = iStack_54;
                uVar3 = uStack_20;
                if (fVar13 < 0.75) {
                  if (piVar8[1] != 0) {
                    LOCK();
                    piVar7 = (int *)(piVar8[1] + 4);
                    *piVar7 = *piVar7 + 1;
                    UNLOCK();
                  }
                  iVar9 = *piVar8;
                  uVar3 = *(undefined8 *)piVar8;
                  iStack_4c = iStack_40;
                  piVar7 = uStack_20._4_4_;
                  piStack_48 = uStack_20._4_4_;
                  uStack_8._0_1_ = 8;
                  iStack_40 = iVar9;
                  if (uStack_20._4_4_ != (int *)0x0) {
                    LOCK();
                    iVar1 = uStack_20._4_4_[1] + -1;
                    uStack_20._4_4_[1] = iVar1;
                    UNLOCK();
                    if (iVar1 == 0) {
                      pcVar2 = *(code **)*uStack_20._4_4_;
                      uStack_20 = uVar3;
                      _guard_check_icall();
                      (*pcVar2)();
                      LOCK();
                      piVar10 = piVar7 + 2;
                      iVar1 = *piVar10 + -1;
                      *piVar10 = iVar1;
                      UNLOCK();
                      piVar10 = piStack_3c;
                      iVar9 = iStack_40;
                      param_1 = iStack_54;
                      uVar3 = uStack_20;
                      if (iVar1 == 0) {
                        pcVar2 = *(code **)(*piVar7 + 4);
                        _guard_check_icall();
                        (*pcVar2)();
                        piVar10 = piStack_3c;
                        iVar9 = iStack_40;
                        param_1 = iStack_54;
                        uVar3 = uStack_20;
                      }
                    }
                  }
                }
              }
            }
            uStack_20 = uVar3;
            piVar8 = piVar8 + 2;
          } while (piVar8 != piVar10);
        }
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        piVar10 = piStack_38;
        uVar6 = uStack_50;
        if (piStack_34 != (int *)0x0) {
          func_0x00485920(piStack_34);
          func_0x0046e710(piStack_34,(int)piStack_2c - (int)piStack_34 >> 3);
          piStack_34 = (int *)0x0;
          piStack_30 = (int *)0x0;
          piStack_2c = (int *)0x0;
          piVar10 = piStack_38;
          uVar6 = uStack_50;
        }
      }
      uStack_50 = uVar6 + 1;
    } while ((int)uStack_50 < 2);
    piStack_38 = (int *)((int)piVar10 + 1);
  } while ((int)piStack_38 < 2);
  piVar10 = uStack_20._4_4_;
LAB_005c8418:
  uStack_44 = uStack_44 | 1;
  uStack_20 = 0;
  param_2[1] = 0;
  *param_2 = iVar9;
  param_2[1] = (int)piVar10;
  uStack_8 = uStack_8 & 0xffffff00;
LAB_005c843d:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c8500(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ecbd66;
  iStack_1c = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_48 = 0;
  piStack_44 = param_2;
  uStack_2c = 0;
  iStack_14._0_1_ = 1;
  iStack_14._1_3_ = 0;
  piStack_3c = (int *)0x0;
  iStack_4c = 0;
  piStack_40 = &DAT_01141a30;
  uStack_24 = uVar5;
  do {
    piVar7 = piStack_40;
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    iStack_68 = (int)*(undefined8 *)(param_1 + 0x34);
    iStack_64 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    _iStack_68 = CONCAT44(iStack_64 + piStack_40[1],iStack_68 + *piStack_40);
    piVar6 = (int *)FUN_00572b50(&iStack_68);
    if (*piVar6 != 0) {
      FUN_005c6f60(&piStack_38);
      iStack_14._0_1_ = 2;
      piStack_54 = piStack_34;
      piVar6 = piStack_38;
      if (piStack_38 != piStack_34) {
        do {
          piStack_50 = (int *)*piVar6;
          pcVar8 = *(code **)(*piStack_50 + 0x30);
          _guard_check_icall(uVar5);
          cVar4 = (*pcVar8)();
          if (cVar4 == '\0') {
            cVar4 = func_0x00474d90(param_3 - *piStack_40 * DAT_0145d7e0,
                                    param_4 - piStack_40[1] * DAT_0145d7e0);
            if (cVar4 == '\0') goto LAB_005c86d7;
            *piStack_44 = 0;
            piStack_44[1] = 0;
            if (piVar6[1] != 0) {
              LOCK();
              piVar7 = (int *)(piVar6[1] + 4);
              *piVar7 = *piVar7 + 1;
              UNLOCK();
            }
            *piStack_44 = *piVar6;
            piStack_44[1] = piVar6[1];
            uStack_48 = 1;
            iStack_14._0_1_ = 1;
            piStack_40 = piStack_38;
            if (piStack_38 != (int *)0x0) {
              piStack_3c = piStack_34;
              piVar7 = piStack_34;
              if (piStack_38 != piStack_34) {
                do {
                  piVar6 = (int *)piStack_40[1];
                  if (piVar6 != (int *)0x0) {
                    LOCK();
                    iVar1 = piVar6[1] + -1;
                    piVar6[1] = iVar1;
                    UNLOCK();
                    if (iVar1 == 0) {
                      pcVar8 = *(code **)*piVar6;
                      _guard_check_icall();
                      (*pcVar8)();
                      LOCK();
                      iVar1 = piVar6[2] + -1;
                      piVar6[2] = iVar1;
                      UNLOCK();
                      piVar7 = piStack_3c;
                      if (iVar1 == 0) {
                        pcVar8 = *(code **)(*piVar6 + 4);
                        _guard_check_icall();
                        (*pcVar8)();
                        piVar7 = piStack_3c;
                      }
                    }
                  }
                  piStack_40 = piStack_40 + 2;
                } while (piStack_40 != piVar7);
              }
              func_0x0046e710(piStack_38,iStack_30 - (int)piStack_38 >> 3);
              piStack_38 = (int *)0x0;
              piStack_34 = (int *)0x0;
              iStack_30 = 0;
            }
            iStack_14 = (uint)iStack_14._1_3_ << 8;
            if (uStack_2c._4_4_ == (undefined4 *)0x0) goto LAB_005c88e5;
            LOCK();
            iVar1 = uStack_2c._4_4_[1] + -1;
            uStack_2c._4_4_[1] = iVar1;
            UNLOCK();
            if (iVar1 != 0) goto LAB_005c88e5;
            pcVar8 = *(code **)*uStack_2c._4_4_;
            _guard_check_icall();
            (*pcVar8)();
            LOCK();
            piVar7 = uStack_2c._4_4_ + 2;
            iVar1 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar1 != 1) goto LAB_005c88e5;
            pcVar8 = *(code **)(*uStack_2c._4_4_ + 4);
            goto LAB_005c88d5;
          }
          if (piVar6[1] != 0) {
            LOCK();
            piVar7 = (int *)(piVar6[1] + 4);
            *piVar7 = *piVar7 + 1;
            UNLOCK();
          }
          uVar3 = *(undefined8 *)piVar6;
          uStack_5c = (int)uStack_2c;
          piStack_3c = uStack_2c._4_4_;
          piStack_58 = uStack_2c._4_4_;
          iStack_14._0_1_ = 2;
          if (uStack_2c._4_4_ != (int *)0x0) {
            LOCK();
            iVar1 = uStack_2c._4_4_[1] + -1;
            uStack_2c._4_4_[1] = iVar1;
            UNLOCK();
            if (iVar1 == 0) {
              pcVar8 = *(code **)*uStack_2c._4_4_;
              uStack_2c = uVar3;
              _guard_check_icall();
              (*pcVar8)();
              LOCK();
              iVar1 = piStack_3c[2] + -1;
              piStack_3c[2] = iVar1;
              UNLOCK();
              uVar3 = uStack_2c;
              if (iVar1 == 0) {
                pcVar8 = *(code **)(*piStack_3c + 4);
                _guard_check_icall();
                (*pcVar8)();
                uVar3 = uStack_2c;
              }
            }
          }
          uStack_2c = uVar3;
          iStack_4c = param_4 - piStack_40[1] * DAT_0145d7e0;
          piStack_3c = (int *)(param_3 - *piStack_40 * DAT_0145d7e0);
LAB_005c86d7:
          piVar6 = piVar6 + 2;
          piVar7 = piStack_40;
        } while (piVar6 != piStack_54);
      }
      iStack_14._0_1_ = 1;
      if (piStack_38 != (int *)0x0) {
        func_0x00485920(piStack_38);
        func_0x0046e710(piStack_38,iStack_30 - (int)piStack_38 >> 3);
        piStack_38 = (int *)0x0;
        piStack_34 = (int *)0x0;
        iStack_30 = 0;
      }
    }
    piStack_40 = piVar7 + 2;
  } while (piStack_40 != (int *)"outfit-feet");
  iVar1 = (int)uStack_2c;
  if (((int)uStack_2c == 0) || (cVar4 = func_0x00474d90(piStack_3c,iStack_4c), cVar4 == '\0')) {
    uStack_48 = 1;
    *piStack_44 = 0;
    piStack_44[1] = 0;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (uStack_2c._4_4_ != (undefined4 *)0x0) {
      LOCK();
      iVar1 = uStack_2c._4_4_[1] + -1;
      uStack_2c._4_4_[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar8 = *(code **)*uStack_2c._4_4_;
        _guard_check_icall(uVar5);
        (*pcVar8)();
        LOCK();
        piVar7 = uStack_2c._4_4_ + 2;
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          pcVar8 = *(code **)(*uStack_2c._4_4_ + 4);
LAB_005c88d5:
          _guard_check_icall();
          (*pcVar8)();
        }
      }
    }
  }
  else {
    iVar2 = (int)uStack_2c._4_4_;
    uStack_2c = 0;
    piStack_44[1] = 0;
    *piStack_44 = iVar1;
    piStack_44[1] = iVar2;
    uStack_48 = 1;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
  }
LAB_005c88e5:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c8910(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined4 *puVar10;
  uint uStack_30;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecbdb6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar7 = *(undefined4 **)(param_1 + 0x2c);
  puVar8 = *(undefined4 **)(param_1 + 0x28);
  iVar9 = (int)puVar7 - (int)puVar8 >> 3;
  puVar10 = param_2;
  uStack_18 = uVar5;
  if (iVar9 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    uStack_8 = 0;
  }
  else {
    uStack_30 = 0;
    if (iVar9 != 0) {
      do {
        if (puVar8[uStack_30 * 2 + 1] != 0) {
          LOCK();
          piVar1 = (int *)(puVar8[uStack_30 * 2 + 1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = (int *)puVar8[uStack_30 * 2];
        piVar2 = (int *)puVar8[uStack_30 * 2 + 1];
        uStack_20 = CONCAT44(piVar2,piVar1);
        uStack_8 = 1;
        pcVar3 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar5);
        iVar9 = (*pcVar3)();
        if ((*(int *)(iVar9 + 0x1c) - (int)*(int **)(iVar9 + 0x18) >> 2 == 0) ||
           (**(int **)(iVar9 + 0x18) == 0)) {
          pcVar3 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall(uVar5);
          iVar9 = (*pcVar3)();
          if (((uint)(*(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2) < 2) ||
             (*(int *)(*(int *)(iVar9 + 0x18) + 4) == 0)) {
            pcVar3 = *(code **)(*piVar1 + 0x40);
            _guard_check_icall();
            iVar9 = (*pcVar3)();
            if (((uint)(*(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2) < 3) ||
               (*(int *)(*(int *)(iVar9 + 0x18) + 8) == 0)) {
              pcVar3 = *(code **)(*piVar1 + 0x40);
              _guard_check_icall();
              iVar9 = (*pcVar3)();
              if (((uint)(*(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2) < 4) ||
                 (*(int *)(*(int *)(iVar9 + 0x18) + 0xc) == 0)) {
                pcVar3 = *(code **)(*piVar1 + 0x20);
                _guard_check_icall();
                cVar4 = (*pcVar3)();
                if (cVar4 == '\0') {
                  if ((uStack_30 == 0) || (cVar4 = FUN_004b2e60(), cVar4 == '\0')) {
                    func_0x0047a510(&uStack_20);
                    uStack_8 = uStack_8 & 0xffffff00;
                    if (uStack_20._4_4_ != (undefined4 *)0x0) {
                      LOCK();
                      iVar9 = uStack_20._4_4_[1] + -1;
                      uStack_20._4_4_[1] = iVar9;
                      UNLOCK();
                      if (iVar9 == 0) {
                        pcVar3 = *(code **)*uStack_20._4_4_;
                        _guard_check_icall();
                        (*pcVar3)();
                        LOCK();
                        piVar1 = uStack_20._4_4_ + 2;
                        iVar9 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          pcVar3 = *(code **)(*uStack_20._4_4_ + 4);
                          _guard_check_icall();
                          (*pcVar3)();
                        }
                      }
                    }
                  }
                  else {
                    func_0x00468490(*(int *)(param_1 + 0x28) + uStack_30 * 8 + -8);
                    uStack_8 = uStack_8 & 0xffffff00;
                    if (piVar2 != (int *)0x0) {
                      LOCK();
                      iVar9 = piVar2[1] + -1;
                      piVar2[1] = iVar9;
                      UNLOCK();
                      if (iVar9 == 0) {
                        pcVar3 = *(code **)*piVar2;
                        _guard_check_icall();
                        (*pcVar3)();
                        LOCK();
                        piVar1 = piVar2 + 2;
                        iVar9 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          pcVar3 = *(code **)(*piVar2 + 4);
                          _guard_check_icall();
                          (*pcVar3)();
                        }
                      }
                    }
                  }
                  goto LAB_005c8b4e;
                }
              }
            }
          }
        }
        uStack_8 = uStack_8 & 0xffffff00;
        if (piVar2 != (int *)0x0) {
          LOCK();
          iVar9 = piVar2[1] + -1;
          piVar2[1] = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcVar3 = *(code **)*piVar2;
            _guard_check_icall(uVar5);
            (*pcVar3)();
            LOCK();
            iVar9 = piVar2[2] + -1;
            piVar2[2] = iVar9;
            UNLOCK();
            if (iVar9 == 0) {
              pcVar3 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar3)();
            }
          }
        }
        uStack_30 = uStack_30 + 1;
        puVar7 = *(undefined4 **)(param_1 + 0x2c);
        puVar8 = *(undefined4 **)(param_1 + 0x28);
      } while (uStack_30 < (uint)((int)puVar7 - (int)puVar8 >> 3));
    }
    for (; puVar8 != puVar7; puVar8 = puVar8 + 2) {
      pcVar3 = *(code **)(*(int *)*puVar8 + 0x20);
      _guard_check_icall(uVar5);
      cVar4 = (*pcVar3)();
      if (cVar4 != '\0') {
        *param_2 = 0;
        param_2[1] = 0;
        if (puVar8[1] != 0) {
          LOCK();
          piVar1 = (int *)(puVar8[1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *param_2 = *puVar8;
        uVar6 = puVar8[1];
        goto LAB_005c8b3b;
      }
    }
    puVar7 = *(undefined4 **)(param_1 + 0x28);
    *param_2 = 0;
    param_2[1] = 0;
    if (puVar7[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar7[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *puVar7;
    uVar6 = puVar7[1];
LAB_005c8b3b:
    param_2[1] = uVar6;
    uStack_8 = 0;
  }
LAB_005c8b4e:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar10);
  return;
}



void __thiscall FUN_005c8c80(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecbe16;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = uVar5;
  if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x28)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uStack_28 = 0;
    FUN_005c7ec0(&uStack_28);
    piVar1 = uStack_28._4_4_;
    if ((int)uStack_28 != 0) {
      *param_2 = (int)uStack_28;
      param_2[1] = 0;
      param_2[1] = (int)uStack_28._4_4_;
      uStack_28 = 0;
      uStack_8 = 0;
      goto LAB_005c8fdb;
    }
    uStack_8 = 0;
    if (uStack_28._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_28._4_4_[1] + -1;
      uStack_28._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*uStack_28._4_4_;
        _guard_check_icall(uVar5);
        (*pcVar2)();
        LOCK();
        piVar3 = piVar1 + 2;
        iVar6 = *piVar3 + -1;
        *piVar3 = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piVar1 + 4);
          _guard_check_icall(uVar5);
          (*pcVar2)();
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar7 = *(int *)(param_1 + 0x28);
    uStack_2c = 0;
    if (iVar6 - iVar7 >> 3 != 0) {
      do {
        iVar6 = *(int *)(iVar7 + 4 + uStack_2c * 8);
        if (iVar6 != 0) {
          LOCK();
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = *(int **)(iVar7 + uStack_2c * 8);
        piVar3 = *(int **)(iVar7 + 4 + uStack_2c * 8);
        uStack_28 = CONCAT44(piVar1,(int)uStack_28);
        uStack_20 = CONCAT44(piVar3,piVar1);
        uStack_8 = 2;
        pcVar2 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar5);
        iVar6 = (*pcVar2)();
        if ((6 < (uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2)) &&
           (*(int *)(*(int *)(iVar6 + 0x18) + 0x18) != 0)) {
          param_2[1] = 0;
          *param_2 = (int)uStack_28._4_4_;
          param_2[1] = (int)piVar3;
          uStack_20 = 0;
          uStack_8 = (uint)uStack_8._1_3_ << 8;
          goto LAB_005c8fdb;
        }
        uStack_8 = (uint)uStack_8._1_3_ << 8;
        if (piVar3 != (int *)0x0) {
          LOCK();
          iVar6 = piVar3[1] + -1;
          piVar3[1] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcVar2 = *(code **)*piVar3;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            iVar6 = piVar3[2] + -1;
            piVar3[2] = iVar6;
            UNLOCK();
            if (iVar6 == 0) {
              pcVar2 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
        uStack_2c = uStack_2c + 1;
        iVar6 = *(int *)(param_1 + 0x2c);
        iVar7 = *(int *)(param_1 + 0x28);
      } while (uStack_2c < (uint)(iVar6 - iVar7 >> 3));
    }
    uStack_2c = 0;
    if (iVar6 - iVar7 >> 3 != 0) {
      do {
        iVar6 = *(int *)(iVar7 + 4 + uStack_2c * 8);
        if (iVar6 != 0) {
          LOCK();
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = *(int **)(iVar7 + uStack_2c * 8);
        piVar3 = *(int **)(iVar7 + 4 + uStack_2c * 8);
        uStack_20 = CONCAT44(piVar3,piVar1);
        uStack_8 = 3;
        pcVar2 = *(code **)(*piVar1 + 0x40);
        _guard_check_icall(uVar5);
        iVar6 = (*pcVar2)();
        if ((*(int *)(iVar6 + 0x1c) - (int)*(int **)(iVar6 + 0x18) >> 2 == 0) ||
           (**(int **)(iVar6 + 0x18) == 0)) {
          pcVar2 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall();
          iVar6 = (*pcVar2)();
          if (((uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2) < 2) ||
             (*(int *)(*(int *)(iVar6 + 0x18) + 4) == 0)) {
            pcVar2 = *(code **)(*piVar1 + 0x40);
            _guard_check_icall();
            iVar6 = (*pcVar2)();
            if (((uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2) < 3) ||
               (*(int *)(*(int *)(iVar6 + 0x18) + 8) == 0)) {
              pcVar2 = *(code **)(*piVar1 + 0x40);
              _guard_check_icall();
              iVar6 = (*pcVar2)();
              if (((uint)(*(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2) < 4) ||
                 (*(int *)(*(int *)(iVar6 + 0x18) + 0xc) == 0)) {
                if ((uStack_2c == 0) || (cVar4 = func_0x004a6eb0(), cVar4 == '\0')) {
                  uStack_20 = 0;
                  param_2[1] = 0;
                  *param_2 = (int)piVar1;
                  param_2[1] = (int)piVar3;
                  uStack_8 = uStack_8 & 0xffffff00;
                }
                else {
                  func_0x00468490(*(int *)(param_1 + 0x28) + uStack_2c * 8 + -8);
                  uStack_8 = uStack_8 & 0xffffff00;
                  if (piVar3 != (int *)0x0) {
                    LOCK();
                    iVar6 = piVar3[1] + -1;
                    piVar3[1] = iVar6;
                    UNLOCK();
                    if (iVar6 == 0) {
                      pcVar2 = *(code **)*piVar3;
                      _guard_check_icall();
                      (*pcVar2)();
                      LOCK();
                      piVar1 = piVar3 + 2;
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        pcVar2 = *(code **)(*piVar3 + 4);
                        _guard_check_icall();
                        (*pcVar2)();
                      }
                    }
                  }
                }
                goto LAB_005c8fdb;
              }
            }
          }
        }
        uStack_8 = uStack_8 & 0xffffff00;
        if (piVar3 != (int *)0x0) {
          LOCK();
          iVar6 = piVar3[1] + -1;
          piVar3[1] = iVar6;
          UNLOCK();
          if (iVar6 == 0) {
            pcVar2 = *(code **)*piVar3;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            iVar6 = piVar3[2] + -1;
            piVar3[2] = iVar6;
            UNLOCK();
            if (iVar6 == 0) {
              pcVar2 = *(code **)(*piVar3 + 4);
              _guard_check_icall();
              (*pcVar2)();
            }
          }
        }
        uStack_2c = uStack_2c + 1;
        iVar6 = *(int *)(param_1 + 0x2c);
        iVar7 = *(int *)(param_1 + 0x28);
      } while (uStack_2c < (uint)(iVar6 - iVar7 >> 3));
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)(iVar6 + -4) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(iVar6 + -4) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(int *)(iVar6 + -8);
    param_2[1] = *(int *)(iVar6 + -4);
  }
  uStack_8 = 0;
LAB_005c8fdb:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005c90d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  int *piVar10;
  uint uStack_30;
  uint uStack_24;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecbe7e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  piVar10 = param_2;
  uStack_18 = uVar6;
  FUN_005c8500(&uStack_20,param_3,param_4);
  piVar1 = uStack_20._4_4_;
  if ((int)uStack_20 == 0) {
    uStack_8 = 0;
    if (uStack_20._4_4_ != (int *)0x0) {
      LOCK();
      iVar8 = uStack_20._4_4_[1] + -1;
      uStack_20._4_4_[1] = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar3 = *(code **)*uStack_20._4_4_;
        _guard_check_icall(uVar6);
        (*pcVar3)();
        LOCK();
        piVar4 = piVar1 + 2;
        iVar8 = *piVar4 + -1;
        *piVar4 = iVar8;
        UNLOCK();
        if (iVar8 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall(uVar6);
          (*pcVar3)();
        }
      }
    }
    iVar8 = *(int *)(param_1 + 0x2c);
    iVar9 = *(int *)(param_1 + 0x28);
    iVar7 = iVar8 - iVar9 >> 3;
    if (iVar7 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      uStack_8 = 0;
    }
    else {
      uStack_30 = 0;
      if (iVar7 != 0) {
        do {
          iVar8 = *(int *)(iVar9 + 4 + uStack_30 * 8);
          if (iVar8 != 0) {
            LOCK();
            piVar1 = (int *)(iVar8 + 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          piVar1 = *(int **)(iVar9 + uStack_30 * 8);
          piVar4 = *(int **)(iVar9 + 4 + uStack_30 * 8);
          uStack_20 = CONCAT44(piVar4,piVar1);
          uStack_8 = 2;
          pcVar3 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall(uVar6);
          iVar8 = (*pcVar3)();
          if ((6 < (uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2)) &&
             (*(int *)(*(int *)(iVar8 + 0x18) + 0x18) != 0)) {
            pcVar3 = *(code **)(*piVar1 + 0x20);
            _guard_check_icall();
            cVar5 = (*pcVar3)();
            if (cVar5 == '\0') {
              param_2[1] = 0;
              *param_2 = (int)piVar1;
              param_2[1] = (int)piVar4;
              uStack_20 = 0;
              uStack_8 = uStack_8 & 0xffffff00;
              goto LAB_005c9517;
            }
          }
          uStack_8 = uStack_8 & 0xffffff00;
          if (piVar4 != (int *)0x0) {
            LOCK();
            iVar8 = piVar4[1] + -1;
            piVar4[1] = iVar8;
            UNLOCK();
            if (iVar8 == 0) {
              pcVar3 = *(code **)*piVar4;
              _guard_check_icall();
              (*pcVar3)();
              LOCK();
              iVar8 = piVar4[2] + -1;
              piVar4[2] = iVar8;
              UNLOCK();
              if (iVar8 == 0) {
                pcVar3 = *(code **)(*piVar4 + 4);
                _guard_check_icall();
                (*pcVar3)();
              }
            }
          }
          uStack_30 = uStack_30 + 1;
          iVar8 = *(int *)(param_1 + 0x2c);
          iVar9 = *(int *)(param_1 + 0x28);
        } while (uStack_30 < (uint)(iVar8 - iVar9 >> 3));
      }
      uStack_24 = 0;
      if (iVar8 - iVar9 >> 3 != 0) {
        do {
          iVar8 = *(int *)(iVar9 + 4 + uStack_24 * 8);
          if (iVar8 != 0) {
            LOCK();
            piVar1 = (int *)(iVar8 + 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          piVar1 = *(int **)(iVar9 + uStack_24 * 8);
          piVar4 = *(int **)(iVar9 + 4 + uStack_24 * 8);
          uStack_20 = CONCAT44(piVar4,piVar1);
          uStack_8 = 3;
          pcVar3 = *(code **)(*piVar1 + 0x40);
          _guard_check_icall(uVar6);
          iVar8 = (*pcVar3)();
          if ((*(int *)(iVar8 + 0x1c) - (int)*(int **)(iVar8 + 0x18) >> 2 == 0) ||
             (**(int **)(iVar8 + 0x18) == 0)) {
            pcVar3 = *(code **)(*piVar1 + 0x40);
            _guard_check_icall();
            iVar8 = (*pcVar3)();
            if (((uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2) < 2) ||
               (*(int *)(*(int *)(iVar8 + 0x18) + 4) == 0)) {
              pcVar3 = *(code **)(*piVar1 + 0x40);
              _guard_check_icall();
              iVar8 = (*pcVar3)();
              if (((uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2) < 3) ||
                 (*(int *)(*(int *)(iVar8 + 0x18) + 8) == 0)) {
                pcVar3 = *(code **)(*piVar1 + 0x40);
                _guard_check_icall();
                iVar8 = (*pcVar3)();
                if (((uint)(*(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2) < 4) ||
                   (*(int *)(*(int *)(iVar8 + 0x18) + 0xc) == 0)) {
                  pcVar3 = *(code **)(*piVar1 + 0x20);
                  _guard_check_icall();
                  cVar5 = (*pcVar3)();
                  if (cVar5 == '\0') {
                    if ((uStack_24 == 0) || (cVar5 = func_0x004a6eb0(), cVar5 == '\0')) {
                      param_2[1] = 0;
                      *param_2 = (int)piVar1;
                      param_2[1] = (int)piVar4;
                      goto LAB_005c95e5;
                    }
                    func_0x00468490(*(int *)(param_1 + 0x28) + uStack_24 * 8 + -8);
                    uStack_8 = uStack_8 & 0xffffff00;
                    if (piVar4 != (int *)0x0) {
                      LOCK();
                      iVar8 = piVar4[1] + -1;
                      piVar4[1] = iVar8;
                      UNLOCK();
                      if (iVar8 == 0) {
                        pcVar3 = *(code **)*piVar4;
                        _guard_check_icall();
                        (*pcVar3)();
                        LOCK();
                        piVar1 = piVar4 + 2;
                        iVar8 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar8 == 1) {
                          pcVar3 = *(code **)(*piVar4 + 4);
                          _guard_check_icall();
                          (*pcVar3)();
                        }
                      }
                    }
                    goto LAB_005c9517;
                  }
                }
              }
            }
          }
          uStack_8 = uStack_8 & 0xffffff00;
          if (piVar4 != (int *)0x0) {
            LOCK();
            iVar8 = piVar4[1] + -1;
            piVar4[1] = iVar8;
            UNLOCK();
            if (iVar8 == 0) {
              pcVar3 = *(code **)*piVar4;
              _guard_check_icall();
              (*pcVar3)();
              LOCK();
              iVar8 = piVar4[2] + -1;
              piVar4[2] = iVar8;
              UNLOCK();
              if (iVar8 == 0) {
                pcVar3 = *(code **)(*piVar4 + 4);
                _guard_check_icall();
                (*pcVar3)();
              }
            }
          }
          uStack_24 = uStack_24 + 1;
          iVar8 = *(int *)(param_1 + 0x2c);
          iVar9 = *(int *)(param_1 + 0x28);
        } while (uStack_24 < (uint)(iVar8 - iVar9 >> 3));
      }
      iVar8 = iVar8 - iVar9 >> 3;
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        puVar2 = (undefined8 *)(*(int *)(param_1 + 0x28) + iVar8 * 8);
        if (*(int *)((int)puVar2 + 4) != 0) {
          LOCK();
          piVar1 = (int *)(*(int *)((int)puVar2 + 4) + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = *(int **)puVar2;
        piVar4 = *(int **)((int)puVar2 + 4);
        uStack_20 = *puVar2;
        uStack_8 = 4;
