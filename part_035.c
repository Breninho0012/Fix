}



undefined4 __thiscall FUN_009decf0(undefined4 param_1,byte param_2)

{
  func_0x009dddb0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009ded10(undefined4 param_1,byte param_2)

{
  func_0x009dde90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009ded30(undefined4 param_1,byte param_2)

{
  func_0x009ddf70();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009ded50(undefined4 param_1,byte param_2)

{
  func_0x009de050();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009ded70(undefined4 param_1,byte param_2)

{
  FUN_009de130();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009ded90(undefined4 param_1,byte param_2)

{
  func_0x009de210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009dedb0(undefined4 param_1,byte param_2)

{
  func_0x009de390();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009dedd0(undefined4 param_1,byte param_2)

{
  func_0x009de470();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009dedf0(undefined4 param_1,byte param_2)

{
  func_0x009de550();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_009dee10(undefined4 param_1,byte param_2)

{
  func_0x009de2f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 __thiscall FUN_009dee30(undefined4 param_1,byte param_2)

{
  func_0x009de7d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24d0);
  }
  return param_1;
}



undefined4 __thiscall FUN_009dee60(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f489d7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x24d0,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009dd6b0(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void __fastcall FUN_009df7e0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(0xc,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_009df860(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    uStack_8 = 0;
    if (puVar1[1] != 0) {
      if (puVar1[2] != 0) {
        func_0x00a32410(*puVar1,puVar1[1],uVar3);
        puVar1[2] = 0;
      }
      pcVar2 = *(code **)(*(int *)puVar1[1] + 8);
      _guard_check_icall((int *)puVar1[1]);
      (*pcVar2)();
      puVar1[1] = 0;
    }
    func_0x008ab812(puVar1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __fastcall FUN_009e0b90(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x009dbe40();
  if ((*(char *)(iVar1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f9f) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall
FUN_009e0bc0(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_3[2] + 0x18) != 0) {
    iVar5 = func_0x00a33e30();
    iVar5 = *(int *)(iVar5 + 0x34);
    iVar6 = func_0x00a33e30();
    piVar1 = *(int **)(param_1 + 0x1fd0);
    iVar6 = *(int *)(iVar6 + 0x38);
    pcVar2 = *(code **)(*piVar1 + 0xd4);
    pcVar3 = *(code **)(*param_3 + 0x24);
    _guard_check_icall();
    iVar7 = (*pcVar3)();
    _guard_check_icall(piVar1,**(undefined4 **)(iVar7 + 4),-(iVar6 != 0) & 2U | iVar5 != 0,param_5,
                       param_6);
    (*pcVar2)();
    return 0;
  }
  pcVar2 = *(code **)(*param_3 + 0x20);
  _guard_check_icall();
  iVar5 = (*pcVar2)();
  uVar4 = **(undefined4 **)(iVar5 + 4);
  pcVar2 = *(code **)(*param_3 + 0x10);
  _guard_check_icall();
  uVar8 = (*pcVar2)();
  iVar5 = func_0x00946ea0(uVar8);
  uStack_10 = *param_4;
  uStack_c = param_4[1];
  uStack_8 = param_4[2];
  uStack_4 = param_4[3];
  iVar6 = func_0x00a33e30();
  if ((*(int *)(iVar6 + 0x2c) != 0) && (*(int *)(iVar5 + 0x1c) == 0)) {
    uStack_4 = 0x3f800000;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x1fd0) + 200);
  _guard_check_icall(*(int **)(param_1 + 0x1fd0),uVar4,&uStack_10);
  (*pcVar2)();
  return 0;
}



// WARNING: Instruction at (ram,0x009e16b7) overlaps instruction at (ram,0x009e16b3)
// 
// WARNING: Heritage AFTER dead removal. Example location: s0xfffffe44 : 0x009e1769
// WARNING: Removing unreachable block (ram,0x009e1570)
// WARNING: Removing unreachable block (ram,0x009e1528)
// WARNING: Removing unreachable block (ram,0x009e14e4)
// WARNING: Removing unreachable block (ram,0x009e125c)
// WARNING: Removing unreachable block (ram,0x009e1100)
// WARNING: Removing unreachable block (ram,0x009e10b6)
// WARNING: Removing unreachable block (ram,0x009e0fc0)
// WARNING: Removing unreachable block (ram,0x009e0f0c)
// WARNING: Removing unreachable block (ram,0x009e0fb2)
// WARNING: Removing unreachable block (ram,0x009e0fd4)
// WARNING: Removing unreachable block (ram,0x009e10a8)
// WARNING: Removing unreachable block (ram,0x009e10ca)
// WARNING: Removing unreachable block (ram,0x009e10f2)
// WARNING: Removing unreachable block (ram,0x009e1114)
// WARNING: Removing unreachable block (ram,0x009e1204)
// WARNING: Removing unreachable block (ram,0x009e1212)
// WARNING: Removing unreachable block (ram,0x009e1226)
// WARNING: Removing unreachable block (ram,0x009e1474)
// WARNING: Removing unreachable block (ram,0x009e14fe)
// WARNING: Removing unreachable block (ram,0x009e1503)
// WARNING: Removing unreachable block (ram,0x009e1507)
// WARNING: Removing unreachable block (ram,0x009e150d)
// WARNING: Removing unreachable block (ram,0x009e1536)
// WARNING: Removing unreachable block (ram,0x009e154a)
// WARNING: Removing unreachable block (ram,0x009e15b7)
// WARNING: Removing unreachable block (ram,0x009e15cb)
// WARNING: Removing unreachable block (ram,0x009e104c)
// WARNING: Removing unreachable block (ram,0x009e11a8)
// WARNING: Removing unreachable block (ram,0x009e1364)
// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 __thiscall
FUN_009e0ce0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int extraout_ECX;
  undefined2 extraout_DX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined4 *in_stack_00000020;
  int iStack_78;
  uint uStack_64;
  int iStack_44;
  uint uStack_30;
  int iStack_2c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48b83;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004687a0();
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  switch(param_5) {
  case 0:
    break;
  default:
    pcVar1 = *(code **)(*param_2 + 4);
    _guard_check_icall();
    (*pcVar1)();
    goto code_r0x009e1664;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  func_0x0046b6e0();
  func_0x0046b6e0();
  pcVar1 = *(code **)(*param_1 + 0x54);
  _guard_check_icall();
  (*pcVar1)();
  func_0x00482d80();
  func_0x0046b6e0();
  pcVar1 = *(code **)(*param_1 + 0x34);
  _guard_check_icall();
  (*pcVar1)();
  func_0x00482d80();
  pcVar1 = *(code **)(*param_1 + 0x38);
  _guard_check_icall();
  (*pcVar1)();
  uStack_8._0_1_ = 3;
  func_0x0046cb10();
  uStack_8._0_1_ = 0;
  uVar3 = (undefined1)uStack_8;
  uStack_8._0_1_ = 0;
  if (0xf < uStack_18) {
    if ((uStack_18 + 1 < 0x1000) || ((iStack_2c - *(int *)(iStack_2c + -4)) - 4U < 0x20)) {
      func_0x008ab812();
      goto code_r0x009e0e7b;
    }
    uStack_8._0_1_ = uVar3;
    func_0x008aaf66();
code_r0x009e1693:
    func_0x008aaf66();
    func_0x008aaf66();
    func_0x008aaf66();
    goto code_r0x009e16a2;
  }
code_r0x009e0e7b:
  func_0x0046a470();
  uStack_8._0_1_ = 6;
  func_0x00a2a5e0();
  uStack_8._0_1_ = 7;
  func_0x009dca60();
  uStack_8._0_1_ = 6;
  if (0xf < uStack_30) {
    if ((0xfff < uStack_30 + 1) && (0x1f < (iStack_44 - *(int *)(iStack_44 + -4)) - 4U))
    goto code_r0x009e1693;
    func_0x008ab812();
  }
  uStack_8._0_1_ = 8;
  func_0x00a2a5e0();
  uStack_8._0_1_ = 9;
  func_0x009dca60();
  uStack_8._0_1_ = 5;
  pcVar5 = (char *)func_0x0046cf00();
  builtin_strncpy(pcVar5,"skip optimization",0x12);
  uStack_8._0_1_ = 10;
  func_0x00a2a5e0();
  uStack_8._0_1_ = 0xb;
  func_0x009dca60();
  uStack_8._0_1_ = 5;
  func_0x008ab812();
  pcVar1 = *(code **)(*param_1 + 0x54);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if (iVar6 == 4) {
    pcVar1 = *(code **)(*param_1 + 0x38);
    _guard_check_icall();
    iVar6 = (*pcVar1)();
    bVar8 = true;
    if (*(int *)(iVar6 + 0x10) == 0) goto code_r0x009e12bb;
    bVar2 = true;
code_r0x009e12c5:
    FUN_00469ba0();
  }
  else {
    bVar8 = false;
code_r0x009e12bb:
    bVar2 = false;
    if (bVar8) goto code_r0x009e12c5;
  }
  if (bVar2) {
    pcVar5 = (char *)func_0x0046cf00();
    builtin_strncpy(pcVar5,"avoid flow control",0x13);
    uStack_8._0_1_ = 0xc;
    func_0x00a2a5e0();
    uStack_8._0_1_ = 0xd;
    func_0x009dca60();
    func_0x008f5680();
    FUN_00469ba0();
  }
  uStack_8._0_1_ = 0xe;
  iVar6 = func_0x00a2a660();
  if (iVar6 != 1) {
    *in_stack_00000020 = 0;
  }
  if (0xf < uStack_64) {
    if ((0xfff < uStack_64 + 1) && (0x1f < (iStack_78 - *(int *)(iStack_78 + -4)) - 4U)) {
code_r0x009e16a2:
      cVar4 = func_0x008aaf66();
      cRam35009e16 = cRam35009e16 + (char)((ushort)extraout_DX >> 8);
      (&stack0x0d7d009a)[extraout_ECX] = (&stack0x0d7d009a)[extraout_ECX] + cVar4;
      *(char *)(unaff_EBX + -0x7cff61f3) = *(char *)(unaff_EBX + -0x7cff61f3) + (char)extraout_ECX;
      pcVar1 = pcRam000000b3;
      in(extraout_DX);
      _guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 1) {
        func_0x00967750();
        pcVar1 = pcRam000000af;
        _guard_check_icall();
        iVar6 = (*pcVar1)();
        if ((iVar6 != 1) && (iVar6 = func_0x00a451b0(), pcVar1 = pcRam00000054, iVar6 != 1)) {
          _guard_check_icall();
          iVar6 = (*pcVar1)();
          if (iVar6 != 1) {
            func_0x00967750();
            pcVar1 = pcRam00000050;
            _guard_check_icall();
            iVar6 = (*pcVar1)();
            if (iVar6 != 1) {
              pcVar1 = *(code **)(**(int **)(extraout_ECX + 0x1fd0) + 0xb8);
              _guard_check_icall();
              (*pcVar1)();
              return 0;
            }
          }
        }
      }
      return 1;
    }
    func_0x008ab812();
  }
code_r0x009e1664:
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  uVar7 = FUN_008ab370();
  return uVar7;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 __thiscall
FUN_009e16c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined1 auStack_34 [4];
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 auStack_24 [3];
  undefined4 uStack_18;
  
  auStack_24[0] = 0;
  pcVar1 = *(code **)(*param_5 + 0x54);
  puStack_48 = auStack_24;
  uStack_4c = param_2;
  piStack_50 = (int *)0x9e16ec;
  _guard_check_icall();
  piStack_50 = (int *)0x9e16f0;
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    piStack_50 = (int *)param_4;
    puStack_54 = auStack_28;
    func_0x00967750();
    aiStack_30[0] = 0;
    pcVar1 = *(code **)(*param_5 + 0x50);
    piStack_50 = aiStack_30;
    puStack_54 = auStack_28;
    uVar5 = param_2;
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
    if (iVar3 != 1) {
      puStack_48 = (undefined4 *)0x0;
      uVar4 = param_2;
      iVar3 = func_0x00a451b0(param_2);
      piVar2 = piStack_50;
      if (iVar3 != 1) {
        puStack_48 = (undefined4 *)0x0;
        pcVar1 = *(code **)(*piStack_50 + 0x54);
        _guard_check_icall(param_2,&puStack_48);
        iVar3 = (*pcVar1)();
        if (iVar3 != 1) {
          func_0x00967750(auStack_34,uStack_18);
          puStack_54 = (undefined1 *)0x0;
          pcVar1 = *(code **)(*piVar2 + 0x50);
          _guard_check_icall(param_2,auStack_34,&puStack_54);
          iVar3 = (*pcVar1)();
          if (iVar3 != 1) {
            pcVar1 = *(code **)(**(int **)(param_1 + 0x1fd0) + 0xb8);
            _guard_check_icall(*(int **)(param_1 + 0x1fd0),
                               *(undefined4 *)(*(int *)(puStack_54 + 4) + 4),uVar5,0,0,0,
                               *(undefined4 *)(unaff_EDI + 4),uVar4,0);
            (*pcVar1)();
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_009e1820(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *puVar4;
  undefined4 auStack_18 [2];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  func_0x00967750(auStack_10,in_stack_0000001c);
  auStack_18[0] = 0;
  iVar3 = *in_stack_00000018;
  pcVar1 = *(code **)(iVar3 + 0x44);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(iVar3 + 0x24);
  puVar4 = auStack_18;
  _guard_check_icall(param_1,auStack_10,uVar2,puVar4);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    iVar3 = func_0x009e1b20(uStack_c,uStack_8,uStack_4,unaff_retaddr,param_1,puVar4);
    if (iVar3 != 1) {
      func_0x00a70c60(uStack_c);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_009e18d0(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *puVar4;
  undefined4 auStack_18 [2];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  func_0x009677b0(auStack_10,in_stack_0000001c,*(undefined4 *)(in_stack_00000014 + 8));
  auStack_18[0] = 0;
  iVar3 = *in_stack_00000018;
  pcVar1 = *(code **)(iVar3 + 0x44);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(iVar3 + 0x24);
  puVar4 = auStack_18;
  _guard_check_icall(param_1,auStack_10,uVar2,puVar4);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    iVar3 = func_0x009e1b20(uStack_c,uStack_8,uStack_4,unaff_retaddr,param_1,puVar4);
    if (iVar3 != 1) {
      func_0x00a70c60(uStack_c);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_009e1980(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *puVar4;
  undefined4 auStack_18 [2];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  func_0x00967910(auStack_10,in_stack_0000001c,*(undefined4 *)(in_stack_00000014 + 8));
  auStack_18[0] = 0;
  iVar3 = *in_stack_00000018;
  pcVar1 = *(code **)(iVar3 + 0x44);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(iVar3 + 0x24);
  puVar4 = auStack_18;
  _guard_check_icall(param_1,auStack_10,uVar2,puVar4);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    iVar3 = func_0x009e1b20(uStack_c,uStack_8,uStack_4,unaff_retaddr,param_1,puVar4);
    if (iVar3 != 1) {
      func_0x00a70c60(uStack_c);
      return 0;
    }
  }
  return 1;
}



void __thiscall
FUN_009e1a30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  func_0x00a5d6c0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1 + 0x1f98);
  return;
}



undefined4 FUN_009e1a70(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *puVar4;
  undefined4 auStack_18 [2];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  func_0x00967a10(auStack_10,in_stack_0000001c,in_stack_00000020);
  auStack_18[0] = 0;
  iVar3 = *in_stack_00000018;
  pcVar1 = *(code **)(iVar3 + 0x44);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(iVar3 + 0x24);
  puVar4 = auStack_18;
  _guard_check_icall(param_1,auStack_10,uVar2,puVar4);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    iVar3 = func_0x009e1b20(uStack_c,uStack_8,uStack_4,unaff_retaddr,param_1,puVar4);
    if (iVar3 != 1) {
      func_0x00a70c60(uStack_8);
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009e1e80(int *param_1,undefined4 *param_2,int param_3,undefined1 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int *param_9,char param_10,
                 int param_11,char param_12)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar6;
  undefined4 unaff_retaddr;
  char cVar7;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int *piStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_a8;
  iStack_8c = param_3;
  uStack_98 = CONCAT13(param_4,(undefined3)uStack_98);
  iStack_a4 = CONCAT31(iStack_a4._1_3_,param_4);
  iStack_84 = param_8;
  uStack_a8 = CONCAT13(param_10,(undefined3)uStack_a8);
  iStack_7c = CONCAT31(iStack_7c._1_3_,param_10);
  iStack_88 = param_11;
  uStack_90 = param_2[0x50];
  piStack_80 = param_1;
  puStack_94 = param_2;
  func_0x008dff10();
  uVar3 = func_0x0093d180(*(undefined1 *)(puStack_94 + 0x1b));
  iVar6 = iStack_8c;
  iVar4 = func_0x008df930(uVar3,iStack_8c);
  iStack_7c = iVar4;
  if ((((char)param_11 == param_12) && (param_10 == '\0')) &&
     (piVar5 = (int *)FUN_004b24c0(), *(int *)(*(int *)(iVar4 + 0xc) + 8) == *piVar5)) {
    uStack_9c = 0;
    pcVar1 = *(code **)(*param_9 + 0x54);
    _guard_check_icall(param_1,&uStack_9c);
    iVar4 = (*pcVar1)();
    if (iVar4 == 1) goto LAB_009e248f;
    if ((uStack_a8._3_1_ == '\0') || (uStack_a8._3_1_ == '\x04')) {
      func_0x00967a40(auStack_64,unaff_ESI,uStack_9c,1);
      iVar4 = func_0x009df4d0(param_1,uStack_a0,auStack_64,&stack0xffffff50,&stack0xffffff54);
      if (iVar4 != 1) {
        func_0x00967a40(&uStack_74,iStack_8c,uStack_98,1);
        pcVar1 = *(code **)(*param_9 + 0x50);
        _guard_check_icall(param_1,&uStack_74,&stack0xffffff4c);
        iVar4 = (*pcVar1)();
        if (iVar4 != 1) {
          iStack_2c = *param_5;
          iStack_28 = param_5[1];
          iStack_20 = param_5[3] + iStack_2c;
          iStack_24 = param_5[2];
          iStack_1c = param_5[4] + iStack_28;
          iStack_18 = param_5[5] + iStack_24;
          pcVar1 = *(code **)(**(int **)(iStack_88 + 0x1fd0) + 0xb8);
          _guard_check_icall(*(int **)(iStack_88 + 0x1fd0),
                             *(undefined4 *)(*(int *)(iStack_a4 + 4) + 4),0,*puStack_94,
                             puStack_94[1],puStack_94[2],*(undefined4 *)(_DAT_00000004 + 4),0,
                             &iStack_2c);
          (*pcVar1)();
          func_0x00a70c60(iVar6);
        }
      }
      goto LAB_009e248f;
    }
    if (uStack_a8._3_1_ == '\x01') {
      iStack_2c = *param_5;
      iVar6 = 0;
      iStack_28 = param_5[1];
      iStack_20 = param_5[3] + iStack_2c;
      iStack_1c = param_5[4] + iStack_28;
      iStack_24 = 0;
      iStack_18 = 1;
      if (0 < param_5[5]) {
        do {
          func_0x009677b0(auStack_64,uStack_9c,param_5[2] + iVar6);
          iVar4 = func_0x009df4d0(uStack_90,uStack_a0,auStack_64,&stack0xffffff50,&stack0xffffff4c);
          if (iVar4 == 1) goto LAB_009e248f;
          func_0x009677b0(&uStack_74,uStack_98,puStack_94[2] + iVar6);
          pcVar1 = *(code **)(*param_9 + 0x50);
          _guard_check_icall(uStack_90,&uStack_74,&stack0xffffff54);
          iVar4 = (*pcVar1)();
          if (iVar4 == 1) goto LAB_009e248f;
          pcVar1 = *(code **)(**(int **)(iStack_88 + 0x1fd0) + 0xb8);
          _guard_check_icall(*(int **)(iStack_88 + 0x1fd0),
                             *(undefined4 *)(*(int *)(iStack_a4 + 4) + 4),0,*puStack_94,
                             puStack_94[1],0,*(undefined4 *)(_DAT_00000004 + 4),0,&iStack_2c);
          (*pcVar1)();
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_5[5]);
        func_0x00a70c60(uStack_98);
        goto LAB_009e248f;
      }
    }
  }
  else {
    iStack_a4 = 0;
    iVar6 = func_0x00a451b0(param_1,&iStack_a4);
    if (iVar6 == 1) goto LAB_009e248f;
    uStack_a0 = 0;
    iVar6 = func_0x00a6f8b0(param_1,uStack_9c,uStack_9c,&uStack_a0);
    if (iVar6 == 1) goto LAB_009e248f;
    func_0x009676c0();
    iVar6 = iStack_8c;
    cVar7 = (char)((uint)unaff_EDI >> 0x18);
    if (((cVar7 == '\0') || (cVar7 == '\x04')) ||
       (cVar2 = func_0x0093d080(iStack_8c), cVar2 != '\0')) {
      uVar3 = func_0x00967a40(auStack_3c,iVar6,uStack_98,1);
LAB_009e22d1:
      func_0x009676a0(uVar3);
    }
    else if (cVar7 == '\x01') {
      uVar3 = func_0x00967810(auStack_3c,uStack_98,0,*(undefined4 *)(iStack_84 + 8));
      goto LAB_009e22d1;
    }
    iVar6 = *param_9;
    pcVar1 = *(code **)(iVar6 + 0x44);
    _guard_check_icall();
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(iVar6 + 0x24);
    _guard_check_icall(uStack_90,auStack_64,uVar3,&stack0xffffff50);
    iVar6 = (*pcVar1)();
    if (iVar6 == 1) goto LAB_009e248f;
    piStack_80 = (int *)0x0;
    pcVar1 = *(code **)(_DAT_00000000 + 0x20);
    _guard_check_icall();
    uStack_78 = (*pcVar1)();
    iStack_2c = *param_5;
    iStack_28 = param_5[1];
    iStack_44 = param_5[4];
    iStack_8c = param_5[3];
    iStack_24 = param_5[2];
    iStack_7c = param_5[5];
    iStack_1c = iStack_44;
    if ((char)param_8 != '\0') {
      iStack_28 = iStack_44 + iStack_28;
      iStack_1c = -iStack_44;
    }
    uStack_54 = *puStack_94;
    uStack_50 = puStack_94[1];
    uStack_4c = puStack_94[2];
    pcVar1 = *(code **)(_DAT_00000000 + 8);
    iStack_48 = iStack_8c;
    iStack_40 = iStack_7c;
    iStack_20 = iStack_8c;
    iStack_18 = iStack_7c;
    _guard_check_icall();
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*piStack_80 + 4);
    _guard_check_icall();
    uStack_74 = (*pcVar1)();
    iStack_6c = iStack_7c;
    uStack_70 = uVar3;
    piVar5 = (int *)func_0x008df7e0(unaff_ESI,uStack_9c);
    iVar6 = func_0x00a4d1d0(uStack_98,uStack_a8,auStack_34,iStack_8c,*(undefined4 *)(*piVar5 + 0x4c)
                            ,piStack_80,auStack_5c,&iStack_7c,0,unaff_retaddr,param_1,0x2600,0,
                            param_7,param_8);
    if (iVar6 == 1) goto LAB_009e248f;
  }
  func_0x00a70c60(uStack_98);
LAB_009e248f:
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_009e24b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c07;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1a8,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a55dc0(param_2,param_3,param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009e2530(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a5c790(param_2,param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009e25b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f465a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x10,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009c2960(0x33a1,*(undefined4 *)(param_1 + 0x1f90));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e2630(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c87;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_3 == 0x3484) {
    iVar2 = func_0x008ab47d(0xa4,uVar1);
    uStack_8 = 0;
    if (iVar2 != 0) {
      uVar3 = func_0x00a5bf90(param_1,param_4,param_5);
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009e26b0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48cc4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x68,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a5d4c0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009e2720(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48d04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a5f4b0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_009e2790(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48d53;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1 != 0) {
    cVar1 = func_0x00a75b50(param_1,uVar2);
    if (cVar1 == '\0') {
      cVar1 = func_0x00a76590(param_1);
      if (cVar1 != '\0') {
        iVar3 = func_0x008ab47d(0x44);
        uStack_8 = 1;
        if (iVar3 != 0) {
          uVar4 = func_0x00a76010(param_1,0 < *(int *)(param_2 + 0x1c));
          *unaff_FS_OFFSET = iStack_10;
          return uVar4;
        }
      }
      goto LAB_009e2873;
    }
  }
  iVar3 = func_0x008ab47d(0x18);
  uStack_8 = 0;
  if (iVar3 != 0) {
    iVar3 = func_0x008acb20(0x33a5,0);
    uVar4 = func_0x00a75a30(param_1,0 < *(int *)(param_2 + 0x1c),iVar3 == 1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
LAB_009e2873:
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void __thiscall
FUN_009e2890(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  undefined8 uVar12;
  undefined1 auStack_fc [4];
  int iStack_f8;
  undefined4 uStack_f0;
  char *pcStack_ec;
  int iStack_e8;
  undefined1 auStack_d4 [4];
  undefined4 *puStack_d0;
  undefined4 uStack_c8;
  char *pcStack_c4;
  undefined1 auStack_c0 [4];
  undefined4 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined4 *puStack_78;
  uint uStack_74;
  int iStack_70;
  undefined *puStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined **ppuStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_68 = 0xffffffff;
  puStack_6c = &DAT_00f48e45;
  iStack_70 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&puStack_64;
  *unaff_FS_OFFSET = (int)&iStack_70;
  puStack_64 = param_1 + 0x7e6;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar11 = false;
  iStack_84 = param_3;
  iStack_80 = param_4;
  iStack_50 = 0;
  uStack_88 = param_5;
  puStack_90 = param_7;
  puStack_78 = param_1;
  iVar5 = func_0x00a329e0(param_5,puStack_64,uStack_8);
  func_0x009dbfe0();
  func_0x00957a20(uStack_88);
  uStack_74 = func_0x00957ae0(param_6);
  puVar7 = puStack_78;
  iStack_50 = *(int *)(param_2 + 0x1d14);
  if ((iStack_84 < 1) || (iStack_80 < 1)) {
    uStack_7c = func_0x008ab47d(0x94);
    uStack_68._0_1_ = 8;
    uStack_68._1_3_ = 0;
    if (uStack_7c == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = func_0x00a329e0(0,puStack_64);
      puStack_64 = (undefined4 *)FUN_009dd650();
      uStack_68 = CONCAT31(uStack_68._1_3_,9);
      iStack_50 = 1;
      iStack_94 = FUN_009dd650();
      uStack_68 = 10;
      iStack_50 = 3;
      puStack_8c = (undefined4 *)func_0x00a2c120();
      uStack_68 = 0xb;
      iStack_50 = 7;
      ppuStack_60 = rx::Resource11Base<>::vftable;
      puStack_78 = (undefined4 *)func_0x008ab47d(8);
      if (puStack_78 == (undefined4 *)0x0) {
        puStack_5c = (undefined4 *)0x0;
      }
      else {
        *puStack_78 = 0;
        puStack_78[1] = 0;
        puStack_5c = puStack_78;
      }
      uStack_58 = 0;
      pcStack_54 = (char *)0x0;
      ppuStack_60 = rx::Resource11<>::vftable;
      uStack_68._0_1_ = 0xc;
      uStack_68._1_3_ = 0;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar11 = true;
      iStack_50 = 0xf;
      uVar8 = func_0x00a60910(&ppuStack_60,puStack_8c,iStack_94,puStack_64,uStack_88,uVar8,iStack_84
                              ,iStack_80,1,uStack_74);
    }
    *puStack_90 = uVar8;
    if (bVar11) {
      FUN_009de130();
    }
    if (bVar2) {
      func_0x00a2c410();
    }
    if (bVar3) {
      func_0x009de2f0();
    }
    if (bVar4) {
      func_0x009de2f0();
    }
    goto LAB_009e3001;
  }
  iStack_48 = iStack_80;
  uStack_3c = *(undefined4 *)(iVar5 + 8);
  iStack_4c = iStack_84;
  uVar8 = 0;
  uStack_38 = uStack_74;
  if (uStack_74 == 0) {
    uStack_38 = 1;
  }
  uStack_44 = 1;
  uStack_40 = 1;
  if (uStack_74 == 0) {
LAB_009e298f:
    uStack_34 = 0;
  }
  else {
    pcVar1 = *(code **)(*(int *)puStack_78[0x7e4] + 0x94);
    _guard_check_icall((int *)puStack_78[0x7e4]);
    uVar12 = (*pcVar1)();
    uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 < 0xa100) goto LAB_009e298f;
    uStack_34 = 0xffffffff;
  }
  bVar11 = *(int *)(iVar5 + 0xc) != 0;
  puStack_64 = *(undefined4 **)(iVar5 + 0x14);
  uStack_7c = CONCAT31((int3)((uint)uVar8 >> 8),bVar11);
  iStack_94 = *(int *)(iVar5 + 0x18);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (((iStack_94 != 0) && (1 < uStack_38)) &&
     (uStack_7c = (uint)bVar11, *(char *)(puVar7 + 0x7e8) == '\0')) {
    uStack_7c = 0;
  }
  uStack_2c = -(uint)(iStack_94 != 0) & 0x40 | -(uint)(puStack_64 != (undefined4 *)0x0) & 0x20 |
              (uStack_7c & 0xff) << 3;
  func_0x00a2c120();
  uStack_68 = 0;
  if (iStack_50 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iStack_50 + 0x24;
  }
  ppuStack_60 = rx::Resource11Base<>::vftable;
  puStack_8c = (undefined4 *)func_0x008ab47d(8);
  if (puStack_8c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    *puStack_8c = 0;
    puStack_8c[1] = 0;
    puStack_5c = puStack_8c;
  }
  uStack_58 = 0;
  pcStack_54 = (char *)0x0;
  ppuStack_60 = rx::Resource11<>::vftable;
  uStack_68._0_1_ = 1;
  iVar6 = func_0x00a31280(iVar6,puVar7,&iStack_4c,0,&ppuStack_60);
  if (iVar6 == 1) {
    uStack_68._0_1_ = 0;
    func_0x009de390();
    func_0x00a2c410();
    goto LAB_009e3001;
  }
  uVar8 = *(undefined4 *)(iStack_f8 + 8);
  *(undefined4 *)(iStack_f8 + 8) = puStack_5c[1];
  puStack_5c[1] = uVar8;
  uVar8 = *(undefined4 *)(iStack_f8 + 4);
  *(undefined4 *)(iStack_f8 + 4) = *puStack_5c;
  *puStack_5c = uVar8;
  iStack_e8 = iVar5;
  func_0x00a2fe70(&iStack_4c);
  uStack_68._0_1_ = 0;
  func_0x009de390();
  pcStack_ec = "createRenderTarget.Texture";
  func_0x00a2fa40(*(undefined4 *)(iStack_f8 + 4),"createRenderTarget.Texture",uStack_f0);
  FUN_009dd650();
  uStack_68._0_1_ = 2;
  FUN_009dd650();
  uVar10 = uStack_74;
  puVar9 = puStack_78;
  uStack_68._0_1_ = 3;
  if ((char)uStack_7c == '\0') {
LAB_009e2c46:
    if (iStack_94 == 0) {
      if (puStack_64 != (undefined4 *)0x0) {
        uStack_a8 = *(uint *)(iVar5 + 0x14);
        uStack_a0 = 0;
        iStack_a4 = (uint)(uVar10 != 0) * 2 + 4;
        FUN_009dd580();
        uStack_68._0_1_ = 6;
        if (iStack_50 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iStack_50 + 0x24;
        }
        iVar6 = func_0x00a30fc0(iVar6,puVar7,&uStack_a8,*(undefined4 *)(iStack_f8 + 4),&ppuStack_60)
        ;
        if (iVar6 == 1) {
          FUN_009de130();
          goto LAB_009e2de1;
        }
        pcStack_54 = "createRenderTarget.RTV";
        func_0x00a2fa40(*puStack_5c,"createRenderTarget.RTV",uStack_58);
        if (*(int *)(iVar5 + 0x2c) != 0) {
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0x3f800000;
          pcVar1 = *(code **)(*(int *)puVar7[0x7f4] + 200);
          _guard_check_icall((int *)puVar7[0x7f4],*puStack_5c,&uStack_18);
          (*pcVar1)();
          uVar10 = uStack_74;
        }
        puStack_64 = (undefined4 *)func_0x008ab47d(0x94);
        uStack_68._0_1_ = 7;
        if (puStack_64 == (undefined4 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = func_0x00a60910(&ppuStack_60,auStack_fc,auStack_d4,auStack_c0,uStack_88,iVar5,
                                  iStack_84,iStack_80,1,uVar10);
        }
        *puStack_90 = uVar8;
        FUN_009de130();
      }
    }
    else {
      iStack_ac = *(int *)(iVar5 + 0x18);
      uStack_a0 = 0;
      iStack_a4 = 0;
      ppuStack_60 = rx::Resource11Base<>::vftable;
      uStack_a8 = (uint)(uVar10 != 0) * 2 + 3;
      puStack_64 = (undefined4 *)func_0x008ab47d(8);
      if (puStack_64 == (undefined4 *)0x0) {
        puStack_5c = (undefined4 *)0x0;
      }
      else {
        *puStack_64 = 0;
        puStack_64[1] = 0;
        puStack_5c = puStack_64;
      }
      uStack_58 = 0;
      pcStack_54 = (char *)0x0;
      ppuStack_60 = rx::Resource11<>::vftable;
      uStack_68._0_1_ = 4;
      if (iStack_50 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iStack_50 + 0x24;
      }
      iVar6 = func_0x00a309b0(iVar6,puVar7,&iStack_ac,*(undefined4 *)(iStack_f8 + 4),&ppuStack_60);
      if (iVar6 == 1) {
        func_0x009dddb0();
        goto LAB_009e2de1;
      }
      pcStack_54 = "createRenderTarget.DSV";
      func_0x00a2fa40(*puStack_5c,"createRenderTarget.DSV",uStack_58);
      puStack_64 = (undefined4 *)func_0x008ab47d(0x94);
      uStack_68._0_1_ = 5;
      if (puStack_64 == (undefined4 *)0x0) {
        *puStack_90 = 0;
        func_0x009dddb0();
      }
      else {
        uVar8 = func_0x00a606e0(&ppuStack_60,auStack_fc,auStack_d4,uStack_88,iVar5,iStack_84,
                                iStack_80,1,uVar10);
        *puStack_90 = uVar8;
        func_0x009dddb0();
      }
    }
    func_0x009de2f0();
    func_0x009de2f0();
    func_0x00a2c410();
  }
  else {
    uStack_20 = *(undefined4 *)(iVar5 + 0xc);
    uStack_18 = 0;
    puStack_8c = (undefined4 *)(iStack_50 + 0x24);
    uStack_14 = 1;
    uStack_7c = (uint)(uStack_74 != 0) * 2 + 4;
    puVar7 = puStack_8c;
    if (iStack_50 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    uStack_1c = uStack_7c;
    iVar6 = func_0x009dd040(puVar7,&uStack_20,*(undefined4 *)(iStack_f8 + 4),auStack_d4);
    if (iVar6 != 1) {
      pcStack_c4 = "createRenderTarget.SRV";
      func_0x00a2fa40(*puStack_d0,"createRenderTarget.SRV",uStack_c8);
      puVar7 = puVar9;
      if (*(int *)(iVar5 + 0x1c) == *(int *)(iVar5 + 0xc)) {
        iVar6 = func_0x009e8300(&uStack_a8);
        puVar9 = *(undefined4 **)(iVar6 + 4);
        uVar8 = *(undefined4 *)(iVar6 + 8);
        *(undefined4 **)(iVar6 + 4) = puStack_bc;
        *(undefined4 *)(iVar6 + 8) = uStack_b8;
        puStack_bc = puVar9;
        uStack_b8 = uVar8;
        func_0x009de2f0();
        uVar10 = uStack_74;
      }
      else {
        uStack_a8 = uStack_7c;
        puVar9 = (undefined4 *)0x0;
        if (iStack_50 != 0) {
          puVar9 = puStack_8c;
        }
        iStack_a4 = 0;
        uStack_a0 = 1;
        iStack_ac = *(int *)(iVar5 + 0x1c);
        iVar6 = func_0x009dd040(puVar9,&iStack_ac,*(undefined4 *)(iStack_f8 + 4),auStack_c0);
        if (iVar6 == 1) goto LAB_009e2de1;
        pcStack_b0 = "createRenderTarget.BlitSRV";
        func_0x00a2fa40(*puStack_bc,"createRenderTarget.BlitSRV",uStack_b4);
      }
      goto LAB_009e2c46;
    }
LAB_009e2de1:
    func_0x009de2f0();
    func_0x009de2f0();
    func_0x00a2c410();
  }
LAB_009e3001:
  *unaff_FS_OFFSET = iStack_70;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_009e3020(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piStack_10;
  code *pcStack_c;
  int *piStack_8;
  
  piStack_10 = (int *)0x0;
  pcStack_c = *(code **)(*param_1 + 0x74);
  pcVar1 = *(code **)(*param_3 + 0x14);
  piStack_8 = param_1;
  _guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*param_3 + 0x10);
  _guard_check_icall();
  uVar5 = (*pcVar1)();
  pcVar1 = *(code **)(*param_3 + 8);
  _guard_check_icall();
  puVar6 = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(*param_3 + 4);
  _guard_check_icall();
  uVar7 = (*pcVar1)();
  pcVar1 = pcStack_c;
  _guard_check_icall(param_2,uVar7,puVar6,uVar5,piVar4,&piStack_10);
  piVar12 = piStack_8;
  iVar8 = (*pcVar1)();
  piVar3 = piStack_10;
  if (iVar8 == 1) {
    return 1;
  }
  piVar12 = (int *)piVar12[0x7f4];
  pcVar1 = *(code **)(*piVar12 + 0xb8);
  pcVar2 = *(code **)(*piStack_10 + 0x30);
  piVar11 = piVar4;
  _guard_check_icall(param_2,uVar7,puVar6,uVar5,piVar4,piVar4,piVar12);
  uVar7 = (*pcVar2)();
  pcVar2 = *(code **)(*piVar3 + 0x1c);
  _guard_check_icall();
  iVar8 = (*pcVar2)();
  uVar5 = *(undefined4 *)(*(int *)(iVar8 + 4) + 4);
  pcVar2 = *(code **)(*piVar4 + 0x30);
  _guard_check_icall();
  uVar9 = (*pcVar2)();
  pcVar2 = *(code **)(*piVar11 + 0x1c);
  _guard_check_icall();
  iVar8 = (*pcVar2)();
  uVar10 = 0;
  _guard_check_icall(piVar12,*(undefined4 *)(*(int *)(iVar8 + 4) + 4),uVar9,0,0,0,uVar5,uVar7,0);
  (*pcVar1)();
  *puVar6 = uVar10;
  return 0;
}



undefined4 __fastcall FUN_009e3430(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48ed4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x14,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a61bb0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e34a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48f17;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1f0,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a621f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48f57;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x778,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a65e60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009e35c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48f57;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x778,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a66060(param_1,param_2,param_3);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48f97;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x6d4,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a661e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e36d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48fd7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x5a8,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a663a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49017;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x5ac,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a66490(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e37f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49057;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x74c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a665b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48fd7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x5a8,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a667a0(param_1,param_2,param_3,param_4);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49097;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0xa08,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a66870(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f490d7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x5b0,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a66ad0(param_1,param_2,param_3,param_4);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009e3a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48fd7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x5a8,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a66c50(param_1,param_2,param_3,param_4);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009e3a90(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49114;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1c,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a619b0(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009e3b00(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49154;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x2c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a720e0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009e49a0(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  HMODULE pHVar5;
  int iVar6;
  int *piVar7;
  FARPROC pFVar8;
  code *pcVar9;
  HMODULE *phModule;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  undefined4 uVar11;
  char cStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  uint auStack_34 [2];
  int *piStack_2c;
  uint uStack_28;
  char *pcStack_24;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  uint uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcStack_24 = (char *)(param_1 + 0x15ac);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4ecf1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_18 = 0;
  if (*pcStack_24 != '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de41c) &&
     (func_0x008ab40d(&DAT_013de41c,uVar2), DAT_013de41c == -1)) {
    uStack_8 = 0;
    uVar3 = func_0x0093d430("gpu.angle");
    DAT_013de418 = (char *)func_0x009b9170(uVar3);
    func_0x008ab3bc(&DAT_013de41c);
  }
  pcVar10 = DAT_013de418;
  puStack_44 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de418 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar10,"HLSLCompiler::initialize",0,0,0,0,0,0,0);
    pcVar10 = DAT_013de418;
    uStack_40 = func_0x0093d430();
    puStack_44 = &uStack_40;
    pcStack_3c = pcVar10;
    pcStack_38 = "HLSLCompiler::initialize";
  }
  phModule = (HMODULE *)(param_1 + 0x15b0);
  uVar2 = 0;
  do {
    BVar4 = GetModuleHandleExA(0,*(LPCSTR *)((int)&PTR_s_d3dcompiler_47_dll_012952a8 + uVar2),
                               phModule);
    if (BVar4 != 0) break;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0xc);
  if (*phModule == (HMODULE)0x0) {
    pHVar5 = LoadLibraryA("d3dcompiler_47.dll");
    *phModule = pHVar5;
    if (pHVar5 == (HMODULE)0x0) {
      cVar1 = func_0x00952a70(2);
      if (cVar1 != '\0') {
        iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\HLSLCompiler.cpp"
                                ,"rx::HLSLCompiler::ensureInitialized",0x99,2);
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        uStack_18 = 1;
        uStack_28 = 1;
        func_0x0046b6e0(iVar6 + 0x10,"Failed to load HLSL compiler library. Using \'old\' DLL.");
      }
      uStack_8 = 1;
      if ((uStack_18 & 1) != 0) {
        uStack_18 = uStack_18 & 0xfffffffe;
        func_0x00952760();
      }
      pHVar5 = LoadLibraryA("d3dcompiler_old.dll");
      *phModule = pHVar5;
      if (pHVar5 == (HMODULE)0x0) goto LAB_00a2b3b9;
      iVar6 = func_0x0093d430();
      pcVar9 = *(code **)(iVar6 + 0x28);
      uVar3 = func_0x0093d430();
      uVar11 = 1;
    }
    else {
      iVar6 = func_0x0093d430();
      pcVar9 = *(code **)(iVar6 + 0x28);
      uVar3 = func_0x0093d430();
      uVar11 = 0;
    }
    _guard_check_icall(uVar3,"GPU.ANGLE.D3DCompilerLoadLibraryResult",uVar11,3);
    (*pcVar9)();
  }
LAB_00a2b3b9:
  if (*phModule == (HMODULE)0x0) {
    pcStack_24 = (char *)GetLastError();
    cVar1 = func_0x00952a70(3);
    if (cVar1 != '\0') {
      iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\HLSLCompiler.cpp"
                              ,"rx::HLSLCompiler::ensureInitialized",0xa6,3);
      uStack_28 = uStack_18 | 2;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      uStack_18 = uStack_28;
      piVar7 = (int *)func_0x0046b6e0(iVar6 + 0x10,"D3D Compiler LoadLibrary failed. GetLastError=")
      ;
      piStack_1c = (int *)0x0;
      piStack_2c = piVar7;
      func_0x0046a2c0(piVar7);
      uVar2 = 4;
      uStack_8 = 4;
      if (cStack_48 != '\0') {
        piStack_1c = *(int **)(*(int *)(*(int *)(*piVar7 + 4) + 0x30 + (int)piVar7) + 4);
        pcVar9 = *(code **)(*piStack_1c + 4);
        piStack_14 = piStack_1c;
        _guard_check_icall();
        (*pcVar9)();
        uStack_8._0_1_ = 5;
        piStack_1c = (int *)func_0x00485b10(auStack_20);
        uStack_8 = CONCAT31(uStack_8._1_3_,4);
        if (piStack_14 != (int *)0x0) {
          pcVar9 = *(code **)(*piStack_14 + 8);
          _guard_check_icall();
          piStack_14 = (int *)(*pcVar9)();
          if (piStack_14 != (int *)0x0) {
            pcVar9 = *(code **)*piStack_14;
            _guard_check_icall(1);
            (*pcVar9)();
          }
        }
        iVar6 = (int)piStack_2c + *(int *)(*piStack_2c + 4);
        piStack_14 = (int *)CONCAT31(piStack_14._1_3_,*(undefined1 *)(iVar6 + 0x40));
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        pcVar9 = *(code **)(*piStack_1c + 0x20);
        _guard_check_icall(auStack_34,auStack_34[0],*(undefined4 *)(iVar6 + 0x38),iVar6,piStack_14,
                           pcStack_24);
        (*pcVar9)();
        piStack_1c = (int *)0x0;
        piVar7 = piStack_2c;
        if ((char)auStack_34[0] != '\0') {
          piStack_1c = (int *)0x4;
        }
      }
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) != 0) {
        uVar2 = 0;
      }
      func_0x00464710(uVar2 | *(uint *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) |
                              (uint)piStack_1c,0);
      func_0x0046a240();
    }
    uStack_8 = 1;
    if ((uStack_18 & 2) != 0) {
      func_0x00952760();
    }
    iVar6 = func_0x0093d430();
    pcVar9 = *(code **)(iVar6 + 0x28);
    uVar3 = func_0x0093d430();
    _guard_check_icall(uVar3,"GPU.ANGLE.D3DCompilerLoadLibraryResult",2,3);
    (*pcVar9)();
    uVar3 = 0xa9;
    pcVar10 = "LoadLibrary failed to load D3D Compiler DLL.";
  }
  else {
    pFVar8 = GetProcAddress(*phModule,"D3DCompile");
    pcVar10 = pcStack_24;
    pHVar5 = *phModule;
    *(FARPROC *)(pcStack_24 + 8) = pFVar8;
    pFVar8 = GetProcAddress(pHVar5,"D3DDisassemble");
    *(FARPROC *)(pcVar10 + 0xc) = pFVar8;
    if (*(int *)(pcVar10 + 8) != 0) {
      *pcVar10 = '\x01';
      uVar3 = 0;
      goto LAB_00a2b5d7;
    }
    uVar3 = 0xbd;
    pcVar10 = "Error finding D3DCompile entry point.";
  }
  pcVar9 = *(code **)(*param_2 + 4);
  _guard_check_icall(0x8007000e,pcVar10,
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\HLSLCompiler.cpp"
                     ,"rx::HLSLCompiler::ensureInitialized",uVar3);
  (*pcVar9)();
  uVar3 = 1;
LAB_00a2b5d7:
  uStack_8 = 8;
  if ((puStack_44 != (undefined4 *)0x0) && (*(char *)puStack_44[1] != '\0')) {
    func_0x009b90e0(*puStack_44,0x45,(char *)puStack_44[1],puStack_44[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall
FUN_009e49b0(int param_1,uint *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,float param_7,float param_8,int param_9)

{
  float *pfVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  uint uVar9;
  float unaff_EDI;
  uint uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  int iStack_a0;
  int iStack_9c;
  int *piStack_98;
  int *piStack_94;
  float *pfStack_90;
  undefined8 uStack_8c;
  uint *puStack_84;
  float fStack_70;
  int *piStack_6c;
  int *piStack_68;
  float fStack_64;
  float fStack_60;
  uint *puStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  float afStack_48 [3];
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  float fStack_c;
  uint uStack_4;
  
  pfVar1 = *(float **)(param_1 + 0x1f5c);
  uStack_4 = DAT_0128fd40 ^ (uint)&fStack_70;
  piStack_6c = param_4;
  fStack_70 = param_7;
  puStack_5c = param_2;
  fStack_60 = param_8;
  puStack_84 = param_2;
  piStack_68 = param_6;
  fStack_64 = (float)param_9;
  uStack_8c = CONCAT44(0xa5ffe8,(float *)uStack_8c);
  iVar4 = func_0x00a60420();
  if (iVar4 != 1) {
    pcVar2 = *(code **)(*param_6 + 0xc);
    uStack_8c = CONCAT44(0xa5fffe,(float *)uStack_8c);
    _guard_check_icall();
    uStack_8c = CONCAT44(0xa60002,(float *)uStack_8c);
    iVar4 = (*pcVar2)();
    pcVar2 = *(code **)(*param_6 + 8);
    uStack_8c = CONCAT44(0xa60011,(float *)uStack_8c);
    _guard_check_icall();
    uStack_8c = CONCAT44(0xa60015,(float *)uStack_8c);
    iVar5 = (*pcVar2)();
    pcVar2 = *(code **)(*piStack_6c + 4);
    uStack_8c = CONCAT44(0xa60028,(float *)uStack_8c);
    _guard_check_icall();
    uStack_8c = CONCAT44(0xa6002e,(float *)uStack_8c);
    fStack_54 = (float)(*pcVar2)();
    uStack_8c = CONCAT44(unaff_EBX,0xa60044);
    iStack_50 = iVar5;
    iStack_4c = iVar4;
    iVar4 = func_0x00946ea0();
    uVar9 = *(uint *)(iVar4 + 0x54);
    if ((uVar9 == 0x8f9c) || (uVar9 == 0x8c17)) {
      uVar9 = 0x1406;
    }
    uStack_8c = CONCAT44(&stack0xffffff8c,afStack_48);
    pfStack_90 = (float *)0xa6007d;
    func_0x008ace40();
    if ((*(char *)((int)afStack_48[0] + 0xd) != '\0') ||
       (uVar9 < *(uint *)((int)afStack_48[0] + 0x10))) {
      afStack_48[0] = pfVar1[2];
    }
    fStack_64 = (float)0;
    if (afStack_48[0] != pfVar1[2]) {
      fStack_64 = (float)((int)afStack_48[0] + 0x14);
    }
    piStack_94 = (int *)0xa600a4;
    piStack_98 = (int *)func_0x00946f70();
    piStack_94 = piStack_6c;
    iStack_9c = 0xa600ae;
    iVar4 = func_0x00946bf0();
    iStack_9c = (int)*pfVar1 + 0x1f98;
    iStack_a0 = *(int *)(iVar4 + 8);
    iVar5 = func_0x00a329e0();
    pfStack_90 = &fStack_60;
    piStack_94 = *(int **)(iVar5 + 0xc);
    piStack_98 = piStack_68;
    fStack_60 = 0.0;
    iStack_9c = 0xa600e9;
    iVar5 = func_0x00a52940();
    if (iVar5 != 1) {
      pcVar2 = *(code **)(*piStack_6c + 0x20);
      uStack_8c = CONCAT44(0xa60103,(float *)uStack_8c);
      _guard_check_icall();
      uStack_8c = CONCAT44(0xa60107,(float *)uStack_8c);
      fStack_64 = (float)(*pcVar2)();
      uStack_1c = 0;
      uStack_14 = 0;
      uStack_38 = 0;
      fStack_70 = 0.5 / (float)(int)fStack_54;
      fStack_60 = 0.5 / (float)iStack_50;
      uStack_8c = CONCAT44(*(undefined4 *)(iVar4 + 8),0xa6015b);
      iVar4 = func_0x00946ea0();
      uStack_3c = *(uint *)(iVar4 + 0x2c);
      if (uStack_3c < *param_2) {
        uVar9 = *param_2 / uStack_3c;
      }
      else {
        uVar9 = 1;
      }
      uStack_3c = (uint)param_4 / uStack_3c;
      uVar10 = param_2[1];
      if ((int)uVar10 < 1) {
        uVar10 = piStack_68[3];
      }
      uVar7 = (uVar10 - 1) + uVar9;
      iStack_34 = uVar7 - uVar7 % uVar9;
      iStack_30 = piStack_68[4];
      fVar12 = (float)*piStack_68 / (float)(int)fStack_54;
      fStack_2c = (fVar12 + fVar12 + fStack_70) - 1.0;
      fVar12 = (float)piStack_68[2];
      fStack_70 = *pfVar1;
      fVar13 = (float)((iStack_50 - piStack_68[1]) + -1) / (float)iStack_50;
      piVar3 = *(int **)((int)fStack_70 + 0x1fd0);
      fStack_28 = (fVar13 + fVar13 + fStack_60) - 1.0;
      fStack_24 = 2.0 / (float)(int)fStack_54;
      fStack_20 = -2.0 / (float)iStack_50;
      if (iStack_4c < 2) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = pfVar1 + 8;
      }
      uStack_8c = CONCAT44(puStack_5c,pfVar6);
      pfStack_90 = pfVar1 + 4;
      piStack_94 = (int *)0xa60276;
      uStack_38 = uVar10;
      fStack_c = fVar12;
      func_0x00a3ba70();
      piStack_94 = (int *)fStack_64;
      piStack_98 = (int *)0x0;
      iStack_9c = 4;
      iStack_a0 = 0xa60285;
      func_0x00a3c400();
      iStack_a0 = 0;
      func_0x00a3bcd0();
      func_0x00a3be80(1);
      func_0x00a3c650(0,0,0);
      func_0x00a3c420(0);
      func_0x00a3ba20(pfVar1 + 0x21);
      func_0x00a3bf00(pfVar1 + 0x1d);
      func_0x00a3bf50(**(undefined4 **)(iStack_a0 + 4),0);
      pfVar6 = pfVar1 + 0x10;
      uVar9 = 0x30;
      pfVar8 = (float *)&stack0xffffff80;
      do {
        if (*pfVar6 != *pfVar8) {
          uStack_8c = 0;
          puStack_84 = (uint *)0x0;
          iStack_a0 = *(int *)pfVar1[0xd];
          pcVar2 = *(code **)(*piVar3 + 0x38);
          _guard_check_icall(piVar3,iStack_a0,0,4,0,&uStack_8c);
          iVar4 = (*pcVar2)();
          if (-1 < iVar4) {
            *(float *)uStack_8c = unaff_EDI;
            ((float *)uStack_8c)[1] = unaff_ESI;
            ((float *)uStack_8c)[2] = unaff_EBP;
            ((float *)uStack_8c)[3] = fVar12;
            ((float *)uStack_8c)[4] = fStack_70;
            ((float *)uStack_8c)[5] = (float)piStack_6c;
            ((float *)uStack_8c)[6] = (float)piStack_68;
            ((float *)uStack_8c)[7] = fStack_64;
            ((float *)uStack_8c)[8] = fStack_60;
            ((float *)uStack_8c)[9] = (float)puStack_5c;
            ((float *)uStack_8c)[10] = fStack_58;
            ((float *)uStack_8c)[0xb] = fStack_54;
            ((float *)uStack_8c)[0xc] = -NAN;
            pcVar2 = *(code **)(*piVar3 + 0x3c);
            _guard_check_icall(piVar3,iStack_a0,0);
            (*pcVar2)();
          }
          pfVar1[0x10] = unaff_EDI;
          pfVar1[0x11] = unaff_ESI;
          pfVar1[0x12] = unaff_EBP;
          pfVar1[0x13] = fVar12;
          pfVar1[0x14] = fStack_70;
          pfVar1[0x15] = (float)piStack_6c;
          pfVar1[0x16] = (float)piStack_68;
          pfVar1[0x17] = fStack_64;
          pfVar1[0x18] = fStack_60;
          pfVar1[0x19] = (float)puStack_5c;
          pfVar1[0x1a] = fStack_58;
          pfVar1[0x1b] = fStack_54;
          pfVar1[0x1c] = -NAN;
          break;
        }
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
        bVar11 = 3 < uVar9;
        uVar9 = uVar9 - 4;
      } while (bVar11);
      func_0x00a3c690(0,pfVar1 + 0xc);
      func_0x00a3c530(&iStack_a0);
      pcVar2 = *(code **)(*piVar3 + 0x34);
      _guard_check_icall(piVar3,_DAT_00000013 * _DAT_0000000f * uVar10,0);
      (*pcVar2)();
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009e4b60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  uVar1 = func_0x009dbe40();
  func_0x00a2ccc0(*(undefined4 *)(param_1 + 0x1f90),*(undefined4 *)(param_1 + 0x1fd0),
                  param_1 + 0x1f98,uVar1,param_1 + 0x2104,param_2,param_3,param_4,param_5);
  return;
}



undefined4 __thiscall FUN_009e4ba0(int *param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [12];
  undefined1 auStack_12c [8];
  undefined8 uStack_124;
  uint auStack_118 [2];
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int **ppiStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_20;
  int *piStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f49212;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  puStack_2c = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  iStack_24 = 0;
  uStack_8 = 1;
  puStack_14 = (undefined4 *)0x93a1;
  piStack_34 = param_1;
  func_0x0069f9c0(&puStack_14,uVar5);
  puStack_14 = (undefined4 *)0x8058;
  func_0x0069f9c0(&puStack_14);
  puStack_14 = (undefined4 *)0x8051;
  func_0x0069f9c0(&puStack_14);
  if (0x9fff < param_1[0x7e6]) {
    puStack_14 = (undefined4 *)0x881a;
    func_0x0069f9c0(&puStack_14);
    puStack_14 = (undefined4 *)0x8059;
    func_0x0069f9c0(&puStack_14);
  }
  if ((char)param_1[2] == '\0') {
    puStack_14 = (undefined4 *)0x8056;
    func_0x0069f9c0(&puStack_14);
    puStack_14 = (undefined4 *)0x8057;
    func_0x0069f9c0(&puStack_14);
    puStack_14 = (undefined4 *)0x8d62;
    func_0x0069f9c0(&puStack_14);
  }
  iStack_58 = func_0x009dbea0();
  uStack_48 = func_0x009dbfe0();
  uStack_5c = 2;
  if ((char)param_1[2] != '\0') {
    uStack_5c = 0;
  }
  func_0x009b0510();
  uStack_20 = 1;
  puStack_14 = puStack_2c;
  puStack_60 = puStack_28;
  if (puStack_2c != puStack_28) {
    do {
      uStack_3c = *puStack_14;
      iStack_38 = func_0x00957a20(uStack_3c);
      if (*(char *)(iStack_38 + 3) != '\0') {
        piStack_44 = &DAT_00fbcc48;
        do {
          iStack_30 = *piStack_44;
          iVar6 = func_0x00957a20(iStack_30);
          if ((*(char *)(iVar6 + 3) != '\0') || (iStack_30 == 0)) {
            iStack_40 = func_0x00946ea0(uStack_3c);
            iStack_54 = func_0x00946ea0(iStack_30);
            pcVar2 = *(code **)(*param_1 + 0xf8);
            _guard_check_icall(auStack_118);
            (*pcVar2)();
            uStack_8 = CONCAT31(uStack_8._1_3_,6);
            piStack_1c = (int *)0x0;
            iStack_18 = 0;
            piStack_1c = (int *)func_0x008ab47d(0x14);
            uStack_20 = uStack_20 | 2;
            puVar10 = (undefined4 *)(iStack_38 + 8);
            uStack_4c = uStack_4c & 0xffffff00;
            *piStack_1c = (int)piStack_1c;
            piStack_1c[1] = (int)piStack_1c;
            piStack_1c[2] = (int)piStack_1c;
            *(undefined2 *)(piStack_1c + 3) = 0x101;
            func_0x009dd270(auStack_12c,*(undefined4 *)*puVar10,(undefined4 *)*puVar10,
                            **(undefined4 **)(iVar6 + 8),*(undefined4 **)(iVar6 + 8),&piStack_1c,
                            *piStack_1c,uStack_4c);
            if (*(int *)(iVar6 + 0xc) == 0) {
LAB_009e4dd5:
              func_0x00956eb0(puVar10);
            }
            else if (*(int *)(iStack_38 + 0xc) == 0) {
              puVar10 = (undefined4 *)(iVar6 + 8);
              goto LAB_009e4dd5;
            }
            uStack_50 = 0;
            puVar7 = (undefined8 *)func_0x008ace40(auStack_138,&uStack_50);
            piVar11 = piStack_1c;
            uStack_124 = *puVar7;
            if ((*(char *)(*(int *)(puVar7 + 1) + 0xd) != '\0') ||
               (*(int *)(*(int *)(puVar7 + 1) + 0x10) != 0)) {
              if (iStack_18 == 0xccccccc) goto LAB_009e5172;
              ppiStack_68 = &piStack_1c;
              uStack_8._0_1_ = 7;
              uStack_64 = 0;
              puVar10 = (undefined4 *)func_0x008ab47d(0x14);
              uStack_8 = CONCAT31(uStack_8._1_3_,6);
              uStack_64 = 0;
              puVar10[4] = 0;
              *puVar10 = piVar11;
              puVar10[1] = piVar11;
              puVar10[2] = piVar11;
              *(undefined2 *)(puVar10 + 3) = 0;
              func_0x008b95c0((undefined4)uStack_124,uStack_124._4_4_,puVar10);
            }
            piVar11 = (int *)*piStack_1c;
            cVar1 = *(char *)((int)piVar11 + 0xd);
            while (cVar1 == '\0') {
              uVar5 = piVar11[4];
              func_0x009b03d0();
              uStack_110 = uStack_3c;
              iStack_10c = iStack_30;
              iStack_108 = *(int *)(iStack_40 + 0x2c) << 3;
              uStack_104 = *(undefined4 *)(iStack_40 + 0xc);
              uStack_100 = *(undefined4 *)(iStack_40 + 0x10);
              uStack_fc = *(undefined4 *)(iStack_40 + 0x14);
              uStack_f8 = *(undefined4 *)(iStack_40 + 0x18);
              uStack_f4 = *(undefined4 *)(iStack_40 + 0x1c);
              iVar6 = *(int *)(iStack_40 + 0x4c);
              uStack_8._0_1_ = 8;
              uStack_f0 = 0;
              if ((iVar6 == 0x1907) && (uVar5 < 2)) {
                uStack_ec = 1;
LAB_009e4f2d:
                uStack_e8 = 0;
              }
              else {
                uStack_ec = 0;
                if (((iVar6 != 0x1908) && (iVar6 != 0x80e1)) || (uStack_e8 = 1, 1 < uVar5))
                goto LAB_009e4f2d;
              }
              uStack_e0 = 0x308e;
              uStack_dc = 0x3038;
              iStack_d8 = FUN_004b5b10();
              iStack_d8 = iStack_d8 + 1;
              uVar8 = 0;
              uStack_d4 = 0;
              if ((char)piStack_34[2] == '\0') {
                if (0x9fff < piStack_34[0x7e6]) {
                  uVar8 = 4;
                }
                uStack_d4 = uVar8;
                if (2 < auStack_118[0]) {
                  uStack_d4 = uVar8 | 0x40;
                }
              }
              uStack_cc = 0;
              uStack_c8 = 0x3038;
              uStack_b8 = 4;
              uStack_d0 = *(undefined4 *)(iStack_54 + 0x24);
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_ac = 0;
              iStack_c4 = *(int *)(iStack_58 + 0x1c);
              iStack_bc = iStack_c4 * iStack_c4;
              uStack_a8 = 0x3038;
              uStack_94 = 0x405;
              uStack_90 = 0x3038;
              uStack_a4 = 4;
              if (2 < auStack_118[0]) {
                uStack_a4 = 0x44;
              }
              uStack_8c = 0;
              uStack_88 = 0;
              uStack_84 = 0;
              uStack_a0 = (uint)(uVar5 != 0);
              uStack_98 = *(undefined4 *)(iStack_54 + 0x28);
              uStack_80 = uStack_5c;
              iStack_c0 = iStack_c4;
              uStack_9c = uVar5;
              uStack_7c = func_0x0093deb0(*(undefined4 *)(iStack_40 + 0x54));
              func_0x009b0700(&uStack_110);
              uStack_8 = CONCAT31(uStack_8._1_3_,6);
              _guard_check_icall();
              piVar3 = (int *)piVar11[2];
              if (*(char *)((int)piVar3 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar3 + 0xd);
                piVar11 = piVar3;
                piVar3 = (int *)*piVar3;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar3 + 0xd);
                  piVar11 = piVar3;
                  piVar3 = (int *)*piVar3;
                }
              }
              else {
                cVar1 = *(char *)(piVar11[1] + 0xd);
                piVar4 = (int *)piVar11[1];
                piVar3 = piVar11;
                while ((piVar11 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar11[2]))) {
                  cVar1 = *(char *)(piVar11[1] + 0xd);
                  piVar4 = (int *)piVar11[1];
                  piVar3 = piVar11;
                }
              }
              cVar1 = *(char *)((int)piVar11 + 0xd);
            }
            uStack_20 = uStack_20 & 0xfffffffd;
            uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            func_0x008acf70();
            param_1 = piStack_34;
          }
          piStack_44 = piStack_44 + 1;
        } while (piStack_44 != (int *)"rx::Renderer11::finish");
      }
      puStack_14 = puStack_14 + 1;
    } while (puStack_14 != puStack_60);
  }
  if (puStack_2c != (undefined4 *)0x0) {
    uVar5 = iStack_24 - (int)puStack_2c & 0xfffffffc;
    puVar10 = puStack_2c;
    if (0xfff < uVar5) {
      puVar10 = (undefined4 *)puStack_2c[-1];
      uVar5 = uVar5 + 0x23;
      if (0x1f < (uint)((int)puStack_2c + (-4 - (int)puVar10))) {
        func_0x008aaf66();
LAB_009e5172:
        func_0x0048d790();
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return uVar9;
      }
    }
    func_0x008ab812(puVar10,uVar5);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_009e5180(int param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  
  *param_2 = 1;
  cVar1 = func_0x009e6110();
  if (cVar1 != '\0') {
    param_2[1] = 1;
    param_2[3] = 1;
  }
  param_2[2] = 1;
  param_2[0x31] = 1;
  *(undefined2 *)(param_2 + 5) = 0x101;
  param_2[4] = 1;
  param_2[7] = *(char *)(param_1 + 8) == '\0';
  param_2[8] = *(undefined1 *)(param_1 + 0x1f9c);
  *(undefined2 *)(param_2 + 10) = 0x101;
  *(undefined2 *)(param_2 + 0xd) = 0x101;
  param_2[0x10] = 1;
  *(undefined **)(param_2 + 0x15) = &DAT_01010101;
  param_2[0x36] = 1;
  bVar2 = *(int *)(param_1 + 0x1594) != 0;
  *(undefined2 *)(param_2 + 0x22) = 0x101;
  param_2[0x21] = 1;
  param_2[0x12] = bVar2;
  param_2[0x1d] = bVar2;
  param_2[0x26] = 1;
  cVar1 = func_0x00a76420();
  if (cVar1 != '\0') {
    param_2[0x13] = 1;
  }
  return;
}



void __thiscall FUN_009e5210(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00a5d8a0(param_2,param_3,param_4,param_1 + 0x1f98);
  return;
}



undefined4 __thiscall FUN_009e5230(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_retaddr;
  
  uVar2 = func_0x008df710();
  uVar3 = func_0x008df6e0();
  iVar4 = func_0x00a6f8b0(param_2,uVar3,uVar2);
  if (iVar4 == 1) {
    return 1;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1fd0) + 0xd8);
  _guard_check_icall(*(int **)(param_1 + 0x1fd0),*unaff_retaddr);
  (*pcVar1)();
  return 0;
}



void __thiscall FUN_009e52a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x20e0);
  param_2[1] = *(undefined4 *)(param_1 + 0x20e4);
  param_2[2] = *(undefined4 *)(param_1 + 0x20e8);
  uVar1 = *(undefined4 *)(param_1 + 0x1f98);
  param_2[3] = *(undefined4 *)(param_1 + 0x20ec);
  param_2[4] = uVar1;
  return;
}



undefined4 __fastcall FUN_009e5300(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f90);
}



void FUN_009e5310(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,int *param_6,int *param_7,int param_8,undefined4 *param_9,uint *param_10)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  undefined1 auStack_118 [152];
  undefined4 *puStack_80;
  int *piStack_7c;
  int *piStack_78;
  undefined *puStack_74;
  int *piStack_70;
  uint *puStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_8;
  
  uStack_58 = 0xffffffff;
  puStack_5c = &DAT_00f492b8;
  iStack_60 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&piStack_54;
  *unaff_FS_OFFSET = (int)&iStack_60;
  uStack_40 = param_4;
  piStack_78 = param_5;
  piStack_7c = param_6;
  piStack_54 = param_7;
  iStack_64 = param_8;
  puStack_80 = param_9;
  puStack_6c = param_10;
  func_0x009dc910(&piStack_70,param_3,uStack_8);
  uStack_58 = 0;
  if (piStack_70 == (int *)0x0) {
    func_0x005d5720(1);
    uStack_58 = CONCAT31(uStack_58._1_3_,1);
    func_0x0046b6e0(auStack_118,"client buffer is not a ID3D11Texture2D");
    func_0x00926aa0(param_1);
    func_0x005d3940();
    goto LAB_009e5a80;
  }
  piStack_38 = (int *)0x0;
  pcVar1 = *(code **)(*piStack_70 + 0xc);
  uStack_58._0_1_ = 3;
  uStack_58._1_3_ = 0;
  _guard_check_icall(piStack_70,&piStack_38);
  (*pcVar1)();
  if (piStack_38 == *(int **)(uStack_3c + 0x1f90)) {
    memset(&iStack_34,0,0x2c);
    pcVar1 = *(code **)(*piStack_70 + 0x28);
    _guard_check_icall(piStack_70,&iStack_34);
    (*pcVar1)();
    iStack_48 = iStack_34;
    iStack_4c = iStack_30;
    iStack_68 = iStack_20;
    if (((param_2 == 0) || (*(int *)(param_2 + 0x74) == iStack_20)) ||
       ((*(int *)(param_2 + 0x74) == 0 && (iStack_20 == 1)))) {
      if (((iStack_24 == 0x67) || (iStack_24 == 0x68)) || (iStack_24 == 0x69)) {
        cVar3 = func_0x008ac9e0(0x3492);
        if (cVar3 != '\0') {
          iVar5 = func_0x008acaf0(0x3492);
          if (iVar5 == 0) {
            puVar8 = &DAT_012939c4;
            puVar6 = &DAT_01294f18;
          }
          else {
            if (iVar5 != 1) {
              func_0x005d5720(1);
              uStack_58._0_1_ = 0xe;
              func_0x0046b6e0(auStack_118,"Invalid client buffer texture plane: ");
              func_0x00482d80(iVar5);
              func_0x00926aa0(param_1);
              func_0x005d3940();
              piVar2 = piStack_38;
              uStack_58 = CONCAT31(uStack_58._1_3_,0xf);
              if (piStack_38 != (int *)0x0) {
                piStack_38 = (int *)0x0;
                pcVar1 = *(code **)(*piVar2 + 8);
                _guard_check_icall(piVar2);
                (*pcVar1)();
              }
              uStack_58 = 0x10;
              goto LAB_009e5a70;
            }
            puVar8 = &DAT_01293778;
            iStack_48 = iStack_48 / 2;
            iStack_4c = iStack_4c / 2;
            puVar6 = &DAT_01294ccc;
          }
          if (iStack_24 == 0x67) {
            puVar8 = puVar6;
          }
          uStack_44 = *(undefined4 *)(puVar8 + 4);
          goto code_r0x009e58bb;
        }
        func_0x005d5720(1);
        uStack_58._0_1_ = 0xb;
        func_0x0046b6e0(auStack_118,
                        "EGL_D3D11_TEXTURE_PLANE_ANGLE must be specified for YUV textures.");
        func_0x00926aa0(param_1);
        func_0x005d3940();
        piVar2 = piStack_38;
        uStack_58 = CONCAT31(uStack_58._1_3_,0xc);
        if (piStack_38 != (int *)0x0) {
          piStack_38 = (int *)0x0;
          pcVar1 = *(code **)(*piVar2 + 8);
          _guard_check_icall(piVar2);
          (*pcVar1)();
        }
        uStack_58 = 0xd;
      }
      else {
        switch(iStack_24) {
        case 2:
        case 10:
        case 0x18:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x23:
        case 0x31:
        case 0x38:
        case 0x3d:
        case 0x57:
        case 0x5a:
        case 0x5b:
          puVar8 = (undefined *)func_0x00a725f0(iStack_24);
          uStack_44 = *(undefined4 *)(puVar8 + 4);
          puStack_74 = puVar8;
          cVar3 = func_0x008ac9e0(0x345d);
          if (cVar3 != '\0') {
            uVar4 = func_0x008acaf0(0x345d);
            uStack_50 = uVar4;
            if (uVar4 < 0x80e2) {
              if (uVar4 != 0x80e1) {
                if (uVar4 < 0x1909) {
                  if ((uVar4 == 0x1908) || (uVar4 == 0x1903)) goto code_r0x009e5696;
                  bVar9 = uVar4 == 0x1907;
                }
                else {
                  bVar9 = uVar4 == 0x8059;
                }
code_r0x009e5603:
                if (!bVar9) {
                  func_0x005d5720(1);
                  uStack_58._0_1_ = 0x14;
                  func_0x0046b6e0(auStack_118,"Invalid client buffer texture internal format: ");
                  func_0x009dc2d0(FUN_0058e380);
                  func_0x005b0d50(uStack_50);
                  func_0x00926aa0(param_1);
                  func_0x005d3940();
                  piVar2 = piStack_38;
                  uStack_58 = CONCAT31(uStack_58._1_3_,0x15);
                  if (piStack_38 != (int *)0x0) {
                    piStack_38 = (int *)0x0;
                    pcVar1 = *(code **)(*piVar2 + 8);
                    _guard_check_icall(piVar2);
                    (*pcVar1)();
                  }
                  uStack_58 = 0x16;
                  break;
                }
              }
            }
            else if ((uVar4 != 0x8227) && (uVar4 != 0x822a)) {
              bVar9 = uVar4 == 0x822c;
              goto code_r0x009e5603;
            }
code_r0x009e5696:
            iVar5 = func_0x00946ea0(uStack_44);
            func_0x00940050(uVar4,*(undefined4 *)(iVar5 + 0x50));
            cVar3 = func_0x0094afd0();
            if (cVar3 == '\0') {
              func_0x005d5720(1);
              uStack_58._0_1_ = 0x17;
              func_0x0046b6e0(auStack_118,"Invalid client buffer texture internal format: ");
              func_0x009dc2d0(FUN_0058e380);
              func_0x005b0d50(uStack_50);
              func_0x00926aa0(param_1);
              func_0x005d3940();
              piVar2 = piStack_38;
              uStack_58 = CONCAT31(uStack_58._1_3_,0x18);
              if (piStack_38 != (int *)0x0) {
                piStack_38 = (int *)0x0;
                pcVar1 = *(code **)(*piVar2 + 8);
                _guard_check_icall(piVar2);
                (*pcVar1)();
              }
              uStack_58 = 0x19;
              break;
            }
            uStack_44 = *(undefined4 *)(uStack_3c + 8);
            puVar8 = puStack_74;
          }
code_r0x009e58bb:
          uStack_3c = func_0x008acb20(0x3493,0);
          if (uStack_3c < uStack_28) {
            if (piStack_78 != (int *)0x0) {
              *piStack_78 = iStack_48;
            }
            if (piStack_7c != (int *)0x0) {
              *piStack_7c = iStack_4c;
            }
            if (piStack_54 != (int *)0x0) {
              iVar5 = 0;
              if (iStack_68 != 1) {
                iVar5 = iStack_68;
              }
              *piStack_54 = iVar5;
            }
            if (iStack_64 != 0) {
              uVar7 = func_0x00940030(uStack_44);
              func_0x00940020(uVar7);
            }
            piVar2 = piStack_38;
            if (puStack_80 != (undefined4 *)0x0) {
              *puStack_80 = puVar8;
            }
            if (puStack_6c != (uint *)0x0) {
              *puStack_6c = uStack_3c;
            }
            *param_1 = 0x3000;
            param_1[1] = 0;
            param_1[2] = 0;
            uStack_58 = CONCAT31(uStack_58._1_3_,0x1d);
            if (piStack_38 != (int *)0x0) {
              piStack_38 = (int *)0x0;
              pcVar1 = *(code **)(*piVar2 + 8);
              _guard_check_icall(piVar2);
              (*pcVar1)();
            }
            uStack_58 = 0x1e;
          }
          else {
            func_0x005d5720(1);
            uStack_58._0_1_ = 0x1a;
            func_0x0046b6e0(auStack_118,"Invalid client buffer texture array slice: ");
            func_0x005b0d50(uStack_3c);
            func_0x00926aa0(param_1);
            func_0x005d3940();
            piVar2 = piStack_38;
            uStack_58 = CONCAT31(uStack_58._1_3_,0x1b);
            if (piStack_38 != (int *)0x0) {
              piStack_38 = (int *)0x0;
              pcVar1 = *(code **)(*piVar2 + 8);
              _guard_check_icall(piVar2);
              (*pcVar1)();
            }
            uStack_58 = 0x1c;
          }
          break;
        default:
          func_0x005d5720(1);
          uStack_58._0_1_ = 0x11;
          func_0x0046b6e0(auStack_118,"Invalid client buffer texture format: ");
          func_0x00482d80(iStack_24);
          func_0x00926aa0(param_1);
          func_0x005d3940();
          piVar2 = piStack_38;
          uStack_58 = CONCAT31(uStack_58._1_3_,0x12);
          if (piStack_38 != (int *)0x0) {
            piStack_38 = (int *)0x0;
            pcVar1 = *(code **)(*piVar2 + 8);
            _guard_check_icall(piVar2);
            (*pcVar1)();
          }
          uStack_58 = 0x13;
        }
      }
    }
    else {
      func_0x005d5720(1);
      uStack_58._0_1_ = 8;
      func_0x0046b6e0(auStack_118,"Texture\'s sample count does not match.");
      func_0x00926aa0(param_1);
      func_0x005d3940();
      piVar2 = piStack_38;
      uStack_58 = CONCAT31(uStack_58._1_3_,9);
      if (piStack_38 != (int *)0x0) {
        piStack_38 = (int *)0x0;
        pcVar1 = *(code **)(*piVar2 + 8);
        _guard_check_icall(piVar2);
        (*pcVar1)();
      }
      uStack_58 = 10;
    }
  }
  else {
    func_0x005d5720(1);
    uStack_58._0_1_ = 5;
    func_0x0046b6e0(auStack_118,"Texture\'s device does not match.");
    func_0x00926aa0(param_1);
    func_0x005d3940();
    piVar2 = piStack_38;
    uStack_58 = CONCAT31(uStack_58._1_3_,6);
    if (piStack_38 != (int *)0x0) {
      piStack_38 = (int *)0x0;
      pcVar1 = *(code **)(*piVar2 + 8);
      _guard_check_icall(piVar2);
      (*pcVar1)();
    }
    uStack_58 = 7;
  }
LAB_009e5a70:
  pcVar1 = *(code **)(*piStack_70 + 8);
  _guard_check_icall(piStack_70);
  (*pcVar1)();
LAB_009e5a80:
  *unaff_FS_OFFSET = iStack_60;
  FUN_008ab370();
  return;
}



void FUN_009e5b40(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00960fd0(param_1,param_2,0,
                  -(uint)(*(int *)(param_1 + 0x1d14) != 0) & *(int *)(param_1 + 0x1d14) + 0x28U,
                  param_3);
  return;
}



void __thiscall FUN_009e5b60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_128 [284];
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_128;
  param_2[1] = 0;
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x1fdc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x20);
    _guard_check_icall(piVar1,auStack_128);
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) {
      *param_2 = uStack_c;
      param_2[1] = uStack_8;
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_009e5c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1f98);
  if (0xa100 < iVar1) {
    uVar2 = 5;
    if ((iVar1 != 0xb000) && (iVar1 != 0xb100)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (((iVar1 != 0xa100) && (iVar1 != 0x9300)) && (iVar1 != 0xa000)) {
    return 0;
  }
  return 4;
}



void __fastcall FUN_009e5c50(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint unaff_ESI;
  uint *unaff_retaddr;
  undefined1 auStack_8 [8];
  
  pcVar1 = *(code **)(*param_1 + 0xf8);
  _guard_check_icall(auStack_8);
  puVar4 = (uint *)(*pcVar1)();
  if ((unaff_ESI < *puVar4) || ((unaff_ESI <= *puVar4 && (3 < puVar4[1])))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  puVar5 = (uint *)&stack0xffffffec;
  if (!bVar3) {
    puVar5 = puVar4;
  }
  uVar2 = puVar5[1];
  *unaff_retaddr = *puVar5;
  unaff_retaddr[1] = uVar2;
  return;
}



undefined4 __thiscall FUN_009e5cc0(int param_1,undefined4 param_2)

{
  func_0x00a2f0c0(param_2,param_1 + 0x1f98);
  return param_2;
}



undefined4 __fastcall FUN_009e5ce0(int param_1)

{
  if (*(int *)(param_1 + 0x1f98) == 0xa100) {
    return 1;
  }
  return 0;
}



void __thiscall FUN_009e5d20(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int aiStack_d0 [20];
  undefined **appuStack_80 [18];
  int iStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  uStack_30 = 0xffffffff;
  puStack_34 = &DAT_00f49310;
  iStack_38 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_38;
  uStack_24 = param_2;
  uStack_28 = param_2;
  func_0x005d5720(1,uStack_8);
  uStack_30 = 0;
  func_0x0046b6e0(aiStack_d0,param_1 + 0x841);
  func_0x0046b6e0(aiStack_d0," Direct3D11");
  func_0x0046b6e0(aiStack_d0,&DAT_00fbd060);
  pcVar2 = *(code **)(*param_1 + 0x54);
  _guard_check_icall();
  uVar4 = (*pcVar2)();
  uVar4 = func_0x00482d80(uVar4,&DAT_00fb8b8c);
  func_0x0046b6e0(uVar4);
  pcVar2 = *(code **)(*param_1 + 0x34);
  _guard_check_icall();
  uVar4 = (*pcVar2)();
  uVar4 = func_0x00482d80(uVar4);
  pcVar2 = *(code **)(*param_1 + 0x38);
  _guard_check_icall(aiStack_20);
  puVar5 = (undefined4 *)(*pcVar2)();
  puVar1 = puVar5 + 4;
  uStack_30._0_1_ = 1;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  func_0x0046cb10(uVar4,puVar5,*puVar1);
  uStack_30._0_1_ = 0;
  uVar3 = (undefined1)uStack_30;
  uStack_30._0_1_ = 0;
  if (0xf < uStack_c) {
    uVar6 = uStack_c + 1;
    iVar7 = aiStack_20[0];
    if (0xfff < uVar6) {
      iVar7 = *(int *)(aiStack_20[0] + -4);
      uVar6 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar7) - 4U) {
        uStack_30._0_1_ = uVar3;
        func_0x008aaf66();
        goto LAB_009e5fc0;
      }
    }
    func_0x008ab812(iVar7,uVar6);
  }
  func_0x0046b6e0(aiStack_d0,&DAT_00fbd068);
  pcVar2 = *(code **)(*param_1 + 0x54);
  _guard_check_icall();
  uVar4 = (*pcVar2)();
  uVar4 = func_0x00482d80(uVar4,&DAT_00fb8b8c);
  func_0x0046b6e0(uVar4);
  pcVar2 = *(code **)(*param_1 + 0x34);
  _guard_check_icall();
  uVar4 = (*pcVar2)();
  uVar4 = func_0x00482d80(uVar4);
  pcVar2 = *(code **)(*param_1 + 0x38);
  _guard_check_icall(aiStack_20);
  puVar5 = (undefined4 *)(*pcVar2)();
  puVar1 = puVar5 + 4;
  uStack_30._0_1_ = 2;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  func_0x0046cb10(uVar4,puVar5,*puVar1);
  uStack_30._0_1_ = 0;
  if (0xf < uStack_c) {
    uVar6 = uStack_c + 1;
    iVar7 = aiStack_20[0];
    if (0xfff < uVar6) {
      iVar7 = *(int *)(aiStack_20[0] + -4);
      uVar6 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar7) - 4U) {
LAB_009e5fc0:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar7,uVar6);
  }
  func_0x0046a470(uStack_24);
  *(undefined ***)((int)aiStack_d0 + *(int *)(aiStack_d0[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_d0 + *(int *)(aiStack_d0[0] + 4) + -4) = *(int *)(aiStack_d0[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_d0 + *(int *)(aiStack_d0[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_d0 + *(int *)(aiStack_d0[0] + 4) + -4) = *(int *)(aiStack_d0[0] + 4) + -8;
  uStack_30 = 3;
  appuStack_80[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_80);
  *unaff_FS_OFFSET = iStack_38;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009e6080(int param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1f98);
  if (((iVar1 < 0xa101) && (iVar1 != 0xa100)) && (iVar1 == 0x9300)) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined4 *)((int)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 2) = 10;
    *(undefined4 *)((int)param_2 + 0x14) = 0xf;
    *param_2 = 0x395f6c6576656c5f;
    *(undefined2 *)(param_2 + 1) = 0x335f;
    *(undefined1 *)((int)param_2 + 10) = 0;
    return;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}



undefined4 * __thiscall FUN_009e62a0(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)func_0x00a75600(*(undefined4 *)(param_1 + 0x20e0));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_2;
}



void __thiscall FUN_009e62f0(int param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int aiStack_cc [20];
  undefined **appuStack_7c [19];
  undefined4 uStack_30;
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49358;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = param_2;
  func_0x005d5720(1,uStack_14);
  iStack_8 = 0;
  func_0x0046b6e0(aiStack_cc,"D3D11");
  if ((param_3 != '\0') && (*(char *)(param_1 + 0x1fc0) != '\0')) {
    uVar2 = func_0x0046b6e0(aiStack_cc,&DAT_01141824);
    puVar3 = (undefined4 *)
             func_0x00a75320(auStack_2c,*(undefined4 *)(param_1 + 0x1fc8),
                             *(undefined4 *)(param_1 + 0x1fcc));
    puVar1 = puVar3 + 4;
    iStack_8._0_1_ = 1;
    if (0xf < (uint)puVar3[5]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    func_0x0046cb10(uVar2,puVar3,*puVar1);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FUN_00469ba0();
  }
  func_0x0046a470(param_2);
  *(undefined ***)((int)aiStack_cc + *(int *)(aiStack_cc[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_cc + *(int *)(aiStack_cc[0] + 4) + -4) = *(int *)(aiStack_cc[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_cc + *(int *)(aiStack_cc[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_cc + *(int *)(aiStack_cc[0] + 4) + -4) = *(int *)(aiStack_cc[0] + 4) + -8;
  iStack_8 = 2;
  appuStack_7c[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_7c);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009e6450(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00a74db0(param_2,*(undefined4 *)(param_1 + 0x1f98));
  func_0x00a72520(*(undefined4 *)(iVar1 + 4));
  return;
}



undefined4 __thiscall FUN_009e6470(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00a74db0(param_2,*(undefined4 *)(param_1 + 0x1f98));
  return *puVar1;
}



undefined4 __thiscall
FUN_009e6490(int param_1,undefined4 param_2,char *param_3,int param_4,uint param_5,int param_6,
            int param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (*param_3 == '\0') {
    *param_8 = 0x10;
    return 0;
  }
  if ((param_6 != 0) && (uVar1 = *(uint *)(param_4 + 4), uVar1 != 0)) {
    param_5 = (uint)((uint)(param_7 + param_6) % uVar1 != 0) + (uint)(param_7 + param_6) / uVar1;
  }
  iVar2 = func_0x00a74db0(**(undefined4 **)(param_3 + 4),*(undefined4 *)(param_1 + 0x1f98));
  puVar3 = (uint *)func_0x00a74c80(*(undefined4 *)(iVar2 + 4));
  if (*puVar3 <= (uint)(0xffffffff / (ulonglong)param_5)) {
    *param_8 = *puVar3 * param_5;
    return 0;
  }
  func_0x0098f180(0x505,"New vertex buffer size would result in an overflow.",
                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Renderer11.cpp"
                  ,"rx::Renderer11::getVertexSpaceRequired",0xfdb);
  return 1;
}



void __thiscall FUN_009e6550(int param_1,int *param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  int *piStack_188;
  undefined4 *puStack_180;
  undefined4 uStack_17c;
  char *pcStack_178;
  char *pcStack_174;
  int iStack_170;
  undefined4 *puStack_16c;
  undefined4 uStack_168;
  char *pcStack_164;
  char *pcStack_160;
  HWND pHStack_15c;
  int *piStack_158;
  int iStack_154;
  int iStack_150;
  int *piStack_14c;
  int *piStack_148;
  int iStack_144;
  undefined *puStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [36];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [104];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_8;
  
  uStack_13c = 0xffffffff;
  puStack_140 = &DAT_00f49408;
  iStack_144 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_138;
  *unaff_FS_OFFSET = (int)&iStack_144;
  piStack_14c = param_2;
  iStack_170 = param_1;
  func_0x009e6e90(&iStack_154,uStack_8);
  if (iStack_154 != 0x3000) {
    param_2[1] = iStack_150;
    *param_2 = iStack_154;
    param_2[2] = (int)piStack_14c;
    goto LAB_009e6d83;
  }
  func_0x008a4620();
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de314) &&
     (func_0x008ab40d(&DAT_013de314), DAT_013de314 == -1)) {
    uStack_13c = 0;
    uVar3 = func_0x0093d430("gpu.angle");
    DAT_013de310 = (char *)func_0x009b9170(uVar3);
    func_0x008ab3bc(&DAT_013de314);
  }
  pcVar2 = DAT_013de310;
  puStack_16c = (undefined4 *)0x0;
  uStack_13c = 1;
  if (*DAT_013de310 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar2,"Renderer11::initialize (DXGICheck)",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de310;
    uStack_168 = func_0x0093d430();
    puStack_16c = &uStack_168;
    pcStack_164 = pcVar2;
    pcStack_160 = "Renderer11::initialize (DXGICheck)";
  }
  pHStack_15c = WindowFromDC(*(HDC *)(*(int *)(param_1 + 4) + 0x68));
  if (pHStack_15c == (HWND)0x0) {
LAB_009e6676:
    piStack_148 = (int *)0x0;
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x1f90);
    _guard_check_icall(*(undefined4 **)(param_1 + 0x1f90),&DAT_00fbc6ec,&piStack_148);
    iVar5 = (*pcVar1)();
    if (-1 < iVar5) {
      if (piStack_148 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_148 + 8);
        _guard_check_icall(piStack_148);
        (*pcVar1)();
        piStack_148 = (int *)0x0;
      }
      goto LAB_009e6712;
    }
    uStack_a8 = 5;
    func_0x005d5720(1);
    uStack_13c = CONCAT31(uStack_13c._1_3_,2);
    func_0x0046b6e0(auStack_a0,"DXGI 1.2 required to present to HWNDs owned by another process.");
    func_0x00926940(param_2);
    func_0x005d3940();
    uStack_13c = 3;
    puVar6 = puStack_16c;
  }
  else {
    piVar4 = (int *)GetCurrentProcessId();
    GetWindowThreadProcessId(pHStack_15c,(LPDWORD)&piStack_14c);
    if (piVar4 != piStack_14c) goto LAB_009e6676;
LAB_009e6712:
    uStack_13c = 4;
    if ((puStack_16c != (undefined4 *)0x0) && (*(char *)puStack_16c[1] != '\0')) {
      func_0x009b90e0(*puStack_16c,0x45,(char *)puStack_16c[1],puStack_16c[2],0,0,0,0,0,0,0);
    }
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de31c) &&
       (func_0x008ab40d(&DAT_013de31c), DAT_013de31c == -1)) {
      uStack_13c = 5;
      uVar3 = func_0x0093d430("gpu.angle");
      DAT_013de318 = (char *)func_0x009b9170(uVar3);
      func_0x008ab3bc(&DAT_013de31c);
    }
    pcVar2 = DAT_013de318;
    puStack_180 = (undefined4 *)0x0;
    uStack_13c = 6;
    if (*DAT_013de318 != '\0') {
      uVar3 = func_0x0093d430();
      func_0x009b90e0(uVar3,0x42,pcVar2,"Renderer11::initialize (ComQueries)",0,0,0,0,0,0,0);
      pcVar2 = DAT_013de318;
      uStack_17c = func_0x0093d430();
      puStack_180 = &uStack_17c;
      pcStack_178 = pcVar2;
      pcStack_174 = "Renderer11::initialize (ComQueries)";
    }
    piStack_148 = (int *)0x0;
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x1fd0);
    _guard_check_icall(*(undefined4 **)(param_1 + 0x1fd0),&DAT_00fbd318,&piStack_148);
    iVar5 = (*pcVar1)();
    if (iVar5 < 0) {
      if (piStack_148 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_148 + 8);
        _guard_check_icall(piStack_148);
        (*pcVar1)();
      }
      piStack_148 = (int *)0x0;
    }
    *(int **)(param_1 + 0x1fd4) = piStack_148;
    piStack_148 = (int *)0x0;
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x1fd0);
    _guard_check_icall(*(undefined4 **)(param_1 + 0x1fd0),&DAT_00fbd328,&piStack_148);
    iVar5 = (*pcVar1)();
    piVar4 = piStack_148;
    if (iVar5 < 0) {
      if (piStack_148 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_148 + 8);
        _guard_check_icall(piStack_148);
        (*pcVar1)();
      }
      piVar4 = (int *)0x0;
    }
    *(int **)(param_1 + 0x1fd8) = piVar4;
    piStack_158 = (int *)0x0;
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x1f90);
    _guard_check_icall(*(undefined4 **)(param_1 + 0x1f90),&DAT_00fbc6fc,&piStack_158);
    iVar5 = (*pcVar1)();
    if (iVar5 < 0) {
      uStack_a8 = 6;
      func_0x005d5720(1);
      uStack_13c = CONCAT31(uStack_13c._1_3_,7);
      func_0x0046b6e0(auStack_a0,"Could not query DXGI device.");
      func_0x00926940(param_2);
      func_0x005d3940();
      uStack_13c = 8;
      puVar6 = puStack_180;
    }
    else {
      pcVar1 = *(code **)(*piStack_158 + 0x18);
      _guard_check_icall(piStack_158,&DAT_00fbc70c,param_1 + 0x1fdc);
      iVar5 = (*pcVar1)();
      if (iVar5 < 0) {
        uStack_a8 = 6;
        func_0x005d5720(1);
        uStack_13c = CONCAT31(uStack_13c._1_3_,9);
        func_0x0046b6e0(auStack_a0,"Could not retrieve DXGI adapter");
        func_0x00926940(param_2);
        func_0x005d3940();
        uStack_13c = 10;
        puVar6 = puStack_180;
      }
      else {
        if (piStack_158 != (int *)0x0) {
          pcVar1 = *(code **)(*piStack_158 + 8);
          _guard_check_icall(piStack_158);
          (*pcVar1)();
          piStack_158 = (int *)0x0;
        }
        piVar4 = (int *)func_0x009dc8c0(*(undefined4 *)(param_1 + 0x1fdc));
        piStack_148 = piVar4;
        if ((*(int *)(param_1 + 0x1f98) < 0x9301) && (piVar4 != (int *)0x0)) {
          memset(auStack_138,0,0x130);
          pcVar1 = *(code **)(*piVar4 + 0x2c);
          _guard_check_icall(piStack_148,auStack_138);
          pHStack_15c = (HWND)(*pcVar1)();
          if (-1 < (int)pHStack_15c) {
            puVar6 = auStack_138;
            puVar7 = (undefined4 *)(param_1 + 0x1fe0);
            for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            *(undefined4 *)(iStack_170 + 0x20e4) = uStack_34;
            *(undefined4 *)(iStack_170 + 0x20e8) = uStack_30;
            *(undefined4 *)(iStack_170 + 0x20ec) = uStack_2c;
            *(undefined4 *)(iStack_170 + 0x20f0) = uStack_28;
            *(undefined4 *)(iStack_170 + 0x20f4) = uStack_24;
            *(undefined4 *)(iStack_170 + 0x20e0) = uStack_38;
            *(undefined4 *)(iStack_170 + 0x20f8) = uStack_20;
            *(undefined4 *)(iStack_170 + 0x20fc) = uStack_1c;
            *(undefined4 *)(iStack_170 + 0x2100) = uStack_18;
            param_1 = iStack_170;
          }
LAB_009e6a47:
          pcVar1 = *(code **)(*piStack_148 + 8);
          _guard_check_icall(piStack_148);
          (*pcVar1)();
        }
        else {
          pcVar1 = *(code **)(**(int **)(param_1 + 0x1fdc) + 0x20);
          _guard_check_icall(*(int **)(param_1 + 0x1fdc),param_1 + 0x1fe0);
          pHStack_15c = (HWND)(*pcVar1)();
          if (piStack_148 != (int *)0x0) goto LAB_009e6a47;
        }
        if ((int)pHStack_15c < 0) {
          uStack_a8 = 6;
          func_0x005d5720(1);
          uStack_13c = CONCAT31(uStack_13c._1_3_,0xb);
          func_0x0046b6e0(auStack_a0,"Could not read DXGI adaptor description.");
          func_0x00926940(param_2);
          func_0x005d3940();
          uStack_13c = 0xc;
          puVar6 = puStack_180;
        }
        else {
          memset((void *)(param_1 + 0x2104),0,0x80);
          func_0x00e879d1((void *)(param_1 + 0x2104),param_1 + 0x1fe0,0x7f);
          pcVar1 = *(code **)(**(int **)(param_1 + 0x1fdc) + 0x18);
          _guard_check_icall(*(int **)(param_1 + 0x1fdc),&DAT_00fbc71c,(int *)(param_1 + 0x2184));
          iVar5 = (*pcVar1)();
          if ((*(int *)(param_1 + 0x2184) != 0) && (-1 < iVar5)) {
            uStack_13c = 0xf;
            if ((puStack_180 != (undefined4 *)0x0) && (*(char *)puStack_180[1] != '\0')) {
              func_0x009b90e0(*puStack_180,0x45,(char *)puStack_180[1],puStack_180[2],0,0,0,0,0,0,0)
              ;
            }
            iVar5 = iStack_170;
            uStack_13c = 0xffffffff;
            if (*(char *)(iStack_170 + 0x15a8) != '\0') {
              if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de324)
                 && (func_0x008ab40d(&DAT_013de324), DAT_013de324 == -1)) {
                uStack_13c = 0x10;
                uVar3 = func_0x0093d430("gpu.angle");
                DAT_013de320 = (char *)func_0x009b9170(uVar3);
                func_0x008ab3bc(&DAT_013de324);
              }
              pcVar2 = DAT_013de320;
              puStack_16c = (undefined4 *)0x0;
              uStack_13c = 0x11;
              if (*DAT_013de320 != '\0') {
                uVar3 = func_0x0093d430();
                func_0x009b90e0(uVar3,0x42,pcVar2,"Renderer11::initialize (HideWarnings)",0,0,0,0,0,
                                0,0);
                pcVar2 = DAT_013de320;
                uStack_168 = func_0x0093d430();
                puStack_16c = &uStack_168;
                pcStack_164 = pcVar2;
                pcStack_160 = "Renderer11::initialize (HideWarnings)";
              }
              pcVar1 = *(code **)**(undefined4 **)(iVar5 + 0x1f90);
              _guard_check_icall(*(undefined4 **)(iVar5 + 0x1f90),&DAT_00fbc72c,&piStack_148);
              iVar5 = (*pcVar1)();
              if (-1 < iVar5) {
                piStack_188 = &iStack_150;
                uStack_1b4 = 0;
                uStack_1ac = 0;
                uStack_1a4 = 0;
                uStack_19c = 0;
                uStack_194 = 0;
                iStack_150 = 0x300161;
                piStack_14c = (int *)0x164;
                uStack_18c = 2;
                pcVar1 = *(code **)(*piStack_148 + 0x30);
                _guard_check_icall(piStack_148,&uStack_1b4);
                (*pcVar1)();
                if (piStack_148 != (int *)0x0) {
                  pcVar1 = *(code **)(*piStack_148 + 8);
                  _guard_check_icall(piStack_148);
                  (*pcVar1)();
                  piStack_148 = (int *)0x0;
                }
              }
              uStack_13c = 0x12;
              if ((puStack_16c != (undefined4 *)0x0) && (*(char *)puStack_16c[1] != '\0')) {
                func_0x009b90e0(*puStack_16c,0x45,(char *)puStack_16c[1],puStack_16c[2],0,0,0,0,0,0,
                                0);
              }
            }
            uStack_13c = 0xffffffff;
            func_0x009e7870(&iStack_154);
            if (iStack_154 == 0x3000) {
              func_0x008a4620();
              *param_2 = 0x3000;
              param_2[1] = 0;
              param_2[2] = 0;
            }
            else {
              *param_2 = iStack_154;
              param_2[1] = iStack_150;
              param_2[2] = (int)piStack_14c;
            }
            goto LAB_009e6d83;
          }
          uStack_a8 = 6;
          func_0x005d5720(1);
          uStack_13c = CONCAT31(uStack_13c._1_3_,0xd);
          func_0x0046b6e0(auStack_a0,"Could not create DXGI factory.");
          func_0x00926940(param_2);
          func_0x005d3940();
          uStack_13c = 0xe;
          puVar6 = puStack_180;
        }
      }
    }
  }
  if ((puVar6 != (undefined4 *)0x0) && (*(char *)puVar6[1] != '\0')) {
    func_0x009b90e0(*puVar6,0x45,(char *)puVar6[1],puVar6[2],0,0,0,0,0,0,0);
  }
LAB_009e6d83:
  *unaff_FS_OFFSET = iStack_144;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009e7b50(int param_1,undefined4 param_2)

{
  if (*(char *)(*(int *)(param_1 + 4) + 100) == '\0') {
    func_0x00a2f4d0(param_1 + 0x1f98,param_1 + 0x1fe0,param_2);
  }
  func_0x0095c700(param_2,*(int *)(param_1 + 4) + 8);
  return;
}



void __thiscall FUN_009e7b90(int param_1,undefined4 param_2)

{
  if (*(char *)(*(int *)(param_1 + 4) + 100) == '\0') {
    func_0x00a2f930(param_1 + 0x1fe0,param_2);
  }
  func_0x0095c700(param_2,*(int *)(param_1 + 4) + 8);
  return;
}



bool FUN_009e7bf0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = func_0x00a75b50(param_1);
  if (cVar1 == '\0') {
    cVar1 = func_0x00a76590(param_1);
    return cVar1 != '\0';
  }
  return true;
}



// WARNING: Instruction at (ram,0x009e827d) overlaps instruction at (ram,0x009e8277)
// 

undefined4 __thiscall
FUN_009e7c20(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            int *param_6,char param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  uint3 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int extraout_ECX;
  char unaff_BL;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *unaff_FS_OFFSET;
  char cVar14;
  char cVar15;
  undefined6 uVar16;
  undefined1 auStack_70 [16];
  undefined **ppuStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49611;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = param_4;
  uStack_34 = param_3;
  iStack_28 = param_1;
  switch(param_5) {
  case 0:
    ppuStack_60 = rx::Resource11Base<>::vftable;
    puStack_2c = (undefined4 *)func_0x008ab47d(8,uVar7);
    if (puStack_2c == (undefined4 *)0x0) {
      puStack_5c = (undefined4 *)0x0;
    }
    else {
      *puStack_2c = 0;
      puStack_2c[1] = 0;
      puStack_5c = puStack_2c;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    ppuStack_60 = rx::Resource11<>::vftable;
    uStack_8 = 0;
    func_0x009dd530();
    uStack_8._0_1_ = 1;
    puStack_2c = (undefined4 *)(param_1 + 0x23c0);
    iVar10 = func_0x00a316e0(param_2,param_1,&uStack_34,0,&ppuStack_60);
    if (iVar10 != 1) {
      if (*param_6 == param_6[1]) goto code_r0x009e7fcb;
      puVar13 = (undefined4 *)0x0;
      puVar12 = (undefined4 *)0x0;
      puStack_40 = (undefined4 *)0x0;
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      uStack_8._0_1_ = 2;
      uVar7 = (param_6[1] - *param_6) / 0x24;
      if (uVar7 != 0) {
        cVar15 = SBORROW4(uVar7,0xfffffff);
        cVar14 = (int)(uVar7 + 0xf0000001) < 0;
        if (0xfffffff < uVar7) {
code_r0x009e82d1:
          func_0x0046e700();
          goto code_r0x009e82d6;
        }
        puVar8 = (undefined4 *)(uVar7 * 0x10);
        puStack_18 = puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          if (puVar8 < (undefined4 *)0x1000) {
            puVar8 = (undefined4 *)func_0x008ab47d(puVar8);
          }
          else {
            puVar1 = (undefined4 *)((int)puVar8 + 0x23);
            cVar15 = SBORROW4((int)puVar1,(int)puVar8);
            cVar14 = (int)(puVar1 + uVar7 * -4) < 0;
            if (puVar1 <= puVar8) {
              func_0x00463420();
              goto code_r0x009e82d1;
            }
            iVar10 = func_0x008ab47d(puVar1);
            cVar15 = '\0';
            cVar14 = iVar10 < 0;
            if (iVar10 == 0) goto code_r0x009e82d6;
            puVar8 = (undefined4 *)(iVar10 + 0x23U & 0xffffffe0);
            puVar8[-1] = iVar10;
          }
        }
        puVar13 = puStack_40;
        puVar12 = (undefined4 *)((int)puStack_3c - (int)puStack_40);
        puStack_14 = puVar8;
        func_0x008ab0e6(puVar8,puStack_40,puVar12);
        if (puStack_40 != (undefined4 *)0x0) {
          uVar7 = (int)puStack_38 - (int)puStack_40 & 0xfffffff0;
          puVar8 = puStack_40;
          if (0xfff < uVar7) {
            puVar8 = (undefined4 *)puStack_40[-1];
            uVar7 = uVar7 + 0x23;
            uVar9 = (int)puStack_40 + (-4 - (int)puVar8);
            cVar15 = SBORROW4(uVar9,0x1f);
            cVar14 = (int)puStack_40 + (-0x23 - (int)puVar8) < 0;
            if (0x1f < uVar9) goto code_r0x009e82d6;
          }
          func_0x008ab812(puVar8,uVar7);
        }
        puStack_38 = (undefined4 *)((int)puStack_14 + (int)puStack_18);
        puStack_3c = puStack_14;
      }
      puVar13 = (undefined4 *)*param_6;
      puStack_24 = (undefined4 *)param_6[1];
      puStack_40 = puStack_3c;
      if (puVar13 != puStack_24) {
        do {
          puVar12 = puStack_3c;
          uStack_50 = 0;
          puStack_4c = puVar13;
          if (0xf < (uint)puVar13[5]) {
            puStack_4c = (undefined4 *)*puVar13;
          }
          uStack_48 = puVar13[6];
          if (param_7 == '\0') {
            uVar6 = (uint3)*(byte *)(puVar13 + 7);
          }
          else {
            uVar6 = (uint3)CONCAT11(*(undefined1 *)(puVar13 + 8),*(byte *)(puVar13 + 7));
          }
          uStack_44 = (uint)(uint3)(uVar6 << 8);
          if (puStack_3c == puStack_38) {
            puStack_20 = (undefined4 *)((int)puStack_3c - (int)puStack_40 >> 4);
            cVar15 = SBORROW4((int)puStack_20,0xfffffff);
            cVar14 = (int)puStack_20 + -0xfffffff < 0;
            if (puStack_20 == (undefined4 *)0xfffffff) goto code_r0x009e82d1;
            puStack_18 = (undefined4 *)((int)puStack_20 + 1);
            uVar7 = (int)puStack_38 - (int)puStack_40 >> 4;
            if (0xfffffff - (uVar7 >> 1) < uVar7) {
              puStack_1c = (undefined4 *)0xfffffff;
            }
            else {
              puStack_1c = (undefined4 *)((uVar7 >> 1) + uVar7);
              if (puStack_1c < puStack_18) {
                puStack_1c = puStack_18;
              }
            }
            puStack_14 = puStack_1c;
            puStack_1c = (undefined4 *)func_0x008c03d0(&puStack_40,&puStack_1c);
            puStack_20 = puStack_1c + (int)puStack_20 * 4;
            *puStack_20 = uStack_50;
            puStack_20[1] = puStack_4c;
            puStack_20[2] = uStack_48;
            puStack_20[3] = uStack_44;
            if (puVar12 == puStack_3c) {
              func_0x008ab0e6(puStack_1c,puStack_40,(int)puStack_3c - (int)puStack_40);
            }
            else {
              func_0x008ab0e6(puStack_1c,puStack_40,(int)puVar12 - (int)puStack_40);
              func_0x008ab0e6(puStack_20 + 4,puVar12,(int)puStack_3c - (int)puVar12);
            }
            func_0x009df780(puStack_1c,puStack_18,puStack_14);
          }
          else {
            *puStack_3c = 0;
            puStack_3c[1] = puStack_4c;
            puStack_3c[2] = uStack_48;
            puStack_3c[3] = uStack_44;
            puStack_3c = puStack_3c + 4;
          }
          puVar13 = puVar13 + 9;
        } while (puVar13 != puStack_24);
      }
      puVar12 = puStack_3c;
      iVar10 = func_0x00a30ab0(param_2,iStack_28,&uStack_34,&puStack_40,auStack_70);
      if (iVar10 != 1) {
        uStack_8._0_1_ = 1;
        if (puStack_40 != (undefined4 *)0x0) {
          uVar7 = (int)puStack_38 - (int)puStack_40 & 0xfffffff0;
          puVar8 = puStack_40;
          if (0xfff < uVar7) {
            puVar8 = (undefined4 *)puStack_40[-1];
            uVar7 = uVar7 + 0x23;
            uVar9 = (int)puStack_40 + (-4 - (int)puVar8);
            cVar15 = SBORROW4(uVar9,0x1f);
            cVar14 = (int)puStack_40 + (-0x23 - (int)puVar8) < 0;
            if (0x1f < uVar9) goto code_r0x009e82d6;
          }
          func_0x008ab812(puVar8,uVar7);
        }
code_r0x009e7fcb:
        puStack_2c = (undefined4 *)func_0x008ab47d(0x78);
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        if (puStack_2c == (undefined4 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = func_0x00a617d0(param_3,param_4,&ppuStack_60,auStack_70);
        }
        *param_8 = uVar11;
        func_0x009dde90();
        func_0x009de550();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
      if (puStack_40 != (undefined4 *)0x0) {
        uVar7 = (int)puStack_38 - (int)puStack_40 & 0xfffffff0;
        puVar8 = puStack_40;
        if (0xfff < uVar7) {
          puVar8 = (undefined4 *)puStack_40[-1];
          uVar7 = uVar7 + 0x23;
          uVar9 = (int)puStack_40 + (-4 - (int)puVar8);
          cVar15 = SBORROW4(uVar9,0x1f);
          cVar14 = (int)puStack_40 + (-0x23 - (int)puVar8) < 0;
          if (0x1f < uVar9) {
code_r0x009e82d6:
            uVar16 = func_0x008aaf66();
            uVar4 = in((short)((uint6)uVar16 >> 0x20));
            *(undefined1 *)puVar13 = uVar4;
            if (cVar15 != cVar14) {
              *(char *)(extraout_ECX + 0x5f) = *(char *)(extraout_ECX + 0x5f) + unaff_BL;
              return (int)uVar16;
            }
            pbVar2 = (byte *)((int)puVar13 + -0x78ff617d);
            bVar3 = *pbVar2;
            *pbVar2 = *pbVar2 + (byte)uVar16;
            *(char *)(puVar12 + -0x185fbf80) =
                 *(char *)(puVar12 + -0x185fbf80) - CARRY1(bVar3,(byte)uVar16);
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return uVar11;
          }
        }
        func_0x008ab812(puVar8,uVar7);
        puStack_40 = (undefined4 *)0x0;
        puStack_3c = (undefined4 *)0x0;
        puStack_38 = (undefined4 *)0x0;
      }
    }
    func_0x009dde90();
    func_0x009de550();
    break;
  default:
    pcVar5 = *(code **)(*param_2 + 4);
    _guard_check_icall(0x80004005,"Unreachble code reached.",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Renderer11.cpp"
                       ,"rx::Renderer11::loadExecutable",0xc27);
    (*pcVar5)();
    break;
  case 3:
    func_0x009dd530();
    uStack_8 = 6;
    iVar10 = func_0x00a30ab0(param_2,param_1,&uStack_34,0,auStack_70);
    if (iVar10 != 1) {
      puStack_2c = (undefined4 *)func_0x008ab47d(0x78);
      uStack_8 = CONCAT31(uStack_8._1_3_,7);
      if (puStack_2c == (undefined4 *)0x0) {
        *param_8 = 0;
        func_0x009dde90();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
      uVar11 = func_0x00a61430(param_3,param_4,auStack_70);
      *param_8 = uVar11;
      func_0x009dde90();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    func_0x009dde90();
    break;
  case 4:
    ppuStack_60 = rx::Resource11Base<>::vftable;
    puStack_2c = (undefined4 *)func_0x008ab47d(8,uVar7);
    if (puStack_2c == (undefined4 *)0x0) {
      puStack_5c = (undefined4 *)0x0;
    }
    else {
      *puStack_2c = 0;
      puStack_2c[1] = 0;
      puStack_5c = puStack_2c;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    ppuStack_60 = rx::Resource11<>::vftable;
    uStack_8 = 4;
    iVar10 = func_0x00a30d00(param_2,param_1,&uStack_34,0,&ppuStack_60);
    if (iVar10 != 1) {
      puStack_2c = (undefined4 *)func_0x008ab47d(0x78);
      uStack_8 = CONCAT31(uStack_8._1_3_,5);
      if (puStack_2c == (undefined4 *)0x0) {
        *param_8 = 0;
        func_0x009ddf70();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
      uVar11 = func_0x00a61600(param_3,param_4,&ppuStack_60);
      *param_8 = uVar11;
      func_0x009ddf70();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    func_0x009ddf70();
    break;
  case 5:
    ppuStack_60 = rx::Resource11Base<>::vftable;
    puStack_2c = (undefined4 *)func_0x008ab47d(8,uVar7);
    if (puStack_2c == (undefined4 *)0x0) {
      puStack_5c = (undefined4 *)0x0;
    }
    else {
      *puStack_2c = 0;
      puStack_2c[1] = 0;
      puStack_5c = puStack_2c;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    ppuStack_60 = rx::Resource11<>::vftable;
    uStack_8 = 8;
    iVar10 = func_0x00a307d0(param_2,param_1,&uStack_34,0,&ppuStack_60);
    if (iVar10 != 1) {
      puStack_2c = (undefined4 *)func_0x008ab47d(0x78);
      uStack_8 = CONCAT31(uStack_8._1_3_,9);
      if (puStack_2c == (undefined4 *)0x0) {
        *param_8 = 0;
        func_0x009ddcd0();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
      uVar11 = func_0x00a61260(param_3,param_4,&ppuStack_60);
      *param_8 = uVar11;
      func_0x009ddcd0();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    func_0x009ddcd0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined1 __fastcall FUN_009e9700(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int *unaff_FS_OFFSET;
  int aiStack_20 [3];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f497b9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  func_0x009e90e0(uVar3);
  pcVar1 = *(code **)(*param_1 + 0x18);
  _guard_check_icall(aiStack_20);
  (*pcVar1)();
  uStack_8 = 0;
  if (aiStack_20[0] == 0x3000) {
    uVar6 = 1;
  }
  else {
    cVar2 = func_0x00952a70(3);
    if (cVar2 != '\0') {
      iVar4 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Renderer11.cpp"
                              ,"rx::Renderer11::resetDevice",0x90e,3);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      uStack_14 = 1;
      uVar5 = func_0x0046b6e0(iVar4 + 0x10,"Could not reinitialize D3D11 device: ",aiStack_20);
      func_0x00920000(uVar5);
      func_0x00952760();
    }
    uVar6 = 0;
  }
  func_0x008a4620();
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



void __fastcall FUN_009e9b00(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49839;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de344) {
    func_0x008ab40d(&DAT_013de344,uVar2,param_1);
    if (DAT_013de344 == -1) {
      uStack_8 = 0;
      func_0x00a2b670();
      uStack_8 = 0xffffffff;
      func_0x008ab3bc(&DAT_013de344);
    }
  }
  iVar3 = func_0x00e7307f(&DAT_01295268,uVar2,&DAT_01295268);
  if (iVar3 == 0) {
    if (DAT_01295294 != 0x7fffffff) {
      uStack_8 = 1;
      func_0x00952a00(&DAT_013de340);
      func_0x00e730b2(&DAT_01295268);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    func_0x00e7304a(5);
  }
  DAT_01295294 = 0x7ffffffe;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint __thiscall FUN_009e9c70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = func_0x00946ea0(param_2);
  uVar2 = func_0x00a329e0(param_2,param_1 + 0x1f98);
  uVar3 = uVar2;
  if (((*(int *)(iVar1 + 0x58) != 0x8c40) && (*(int *)(uVar2 + 0x14) != 0)) &&
     (*(int *)(iVar1 + 0x30) != 3)) {
    uVar3 = func_0x00a33e30();
    if ((*(int *)(uVar3 + 4) == param_2) && (uVar3 = *(uint *)(uVar2 + 8), uVar3 != 0x56)) {
      return CONCAT31((int3)(uVar3 >> 8),uVar3 != 0x41);
    }
  }
  return uVar3 & 0xffffff00;
}



uint __fastcall FUN_009e9cd0(int param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49881;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar7 = false;
  uStack_18 = 0;
  piVar6 = *(int **)(param_1 + 0x1f90);
  if (piVar6 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar6 + 0x9c);
    _guard_check_icall(piVar6,uVar3);
    uVar3 = (*pcVar1)();
    uStack_14 = uVar3 >> 0x1f;
    if ((int)uVar3 < 0) {
      cVar2 = func_0x00952a70(3);
      if (cVar2 != '\0') {
        iVar4 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Renderer11.cpp"
                                ,"rx::Renderer11::testDeviceLost",0x8a5,3);
        uStack_8 = 0;
        bVar7 = true;
        uStack_18 = 1;
        uVar5 = func_0x0046b6e0(iVar4 + 0x10,"The D3D11 device was removed, ");
        piVar6 = (int *)func_0x009529d0(auStack_20,uVar3);
        iVar4 = piVar6[1];
        if (*piVar6 != 0) {
          func_0x0046b6e0(uVar5,*piVar6);
        }
        func_0x0091fdc0(uVar5,iVar4,&DAT_00f9ad64,0x30);
      }
      if (bVar7) {
        func_0x00952760();
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return uStack_14;
  }
  *unaff_FS_OFFSET = iStack_10;
  return CONCAT31((int3)((uint)&iStack_10 >> 8),1);
}



undefined4 __fastcall FUN_009e9de0(int param_1)

{
  code *pcVar1;
  FARPROC pFVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 0x1588),"D3D11CreateDevice");
  if (pFVar2 != (FARPROC)0x0) {
    piVar8 = *(int **)(param_1 + 0x1598);
    piVar5 = (int *)0x0;
    puVar12 = auStack_c;
    if (*(char *)(param_1 + 0x15a8) != '\0') {
      piVar5 = (int *)0x2;
    }
    puVar11 = auStack_4;
    puVar10 = auStack_8;
    iVar3 = *(int *)(param_1 + 0x159c) - (int)piVar8 >> 2;
    uVar9 = 7;
    uVar7 = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x15a4);
    _guard_check_icall(0,uVar6,0,piVar5,piVar8,iVar3,7,puVar10,puVar11,puVar12);
    iVar4 = (*pFVar2)();
    if ((*(int *)(param_1 + 0x1f90) != 0) && (-1 < iVar4)) {
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar5 + 8);
        _guard_check_icall(piVar5,uVar6,uVar7,piVar5,piVar8,iVar3,uVar9,puVar10,puVar11,puVar12);
        (*pcVar1)();
        piVar5 = (int *)0x0;
      }
      if (piVar8 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar8 + 8);
        _guard_check_icall(piVar8,uVar6,uVar7,piVar5,piVar8,iVar3,uVar9,puVar10,puVar11,puVar12);
        (*pcVar1)();
      }
      return 1;
    }
  }
  return 0;
}



void __thiscall
FUN_009e9eb0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  char *pcVar5;
  undefined1 auStack_198 [152];
  undefined4 uStack_100;
  undefined1 auStack_f8 [156];
  undefined1 auStack_5c [4];
  undefined4 *puStack_58;
  int iStack_54;
  int iStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f498e1;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_58 = param_3;
  piStack_44 = param_4;
  iStack_50 = param_5;
  iStack_54 = param_1;
  if (param_4 == (int *)0x0) {
    uStack_100 = 0x300c;
    func_0x005d5720(1);
    uStack_8 = 0;
    pcVar5 = "NULL share handle.";
LAB_009e9f21:
    func_0x0046b6e0(auStack_f8,pcVar5);
    func_0x00926aa0(param_2);
  }
  else {
    piStack_48 = (int *)0x0;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x1f90) + 0x70);
    _guard_check_icall(*(int **)(param_1 + 0x1f90),param_4,&DAT_00fbce20,&piStack_48,uStack_14);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      piVar3 = *(int **)(iStack_54 + 0x1f94);
      if (piVar3 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar3 + 0xc0);
        _guard_check_icall(piVar3,piStack_44,&DAT_00fbce20,&piStack_48);
        iVar2 = (*pcVar1)();
      }
      if (-1 < iVar2) goto LAB_009ea031;
      uStack_100 = 0x300c;
      func_0x005d5720(1);
      uStack_8 = 1;
      func_0x0046b6e0(auStack_f8,"Failed to open share handle, ");
      piVar3 = (int *)func_0x009529d0(auStack_5c,iVar2);
      iVar2 = piVar3[1];
      if (*piVar3 != 0) {
        func_0x0046b6e0(auStack_f8,*piVar3);
      }
      func_0x0091fdc0(auStack_f8,iVar2,&DAT_00f9ad64,0x30);
      func_0x00926aa0(param_2);
    }
    else {
LAB_009ea031:
      piStack_4c = (int *)0x0;
      pcVar1 = *(code **)*piStack_48;
      _guard_check_icall(piStack_48,&DAT_00fbd348,&piStack_4c);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        if (piStack_4c != (int *)0x0) {
          pcVar1 = *(code **)(*piStack_4c + 8);
          _guard_check_icall(piStack_4c);
          (*pcVar1)();
          piStack_4c = (int *)0x0;
        }
        piStack_44 = (int *)0x0;
      }
      else {
        piStack_44 = piStack_4c;
      }
      if (piStack_48 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_48 + 8);
        _guard_check_icall(piStack_48);
        (*pcVar1)();
        piStack_48 = (int *)0x0;
      }
      if (piStack_44 == (int *)0x0) {
        uStack_100 = 0x300c;
        func_0x005d5720(1);
        uStack_8 = 2;
        pcVar5 = "Failed to query ID3D11Texture2D object from share handle.";
        goto LAB_009e9f21;
      }
      memset(&iStack_40,0,0x2c);
      pcVar1 = *(code **)(*piStack_44 + 0x28);
      _guard_check_icall(piStack_44,&iStack_40);
      (*pcVar1)();
      pcVar1 = *(code **)(*piStack_44 + 8);
      _guard_check_icall(piStack_44);
      (*pcVar1)();
      iVar2 = func_0x008acb20(0x3057,0);
      iStack_50 = func_0x008acb20(0x3056,0);
      iVar4 = func_0x00a329e0(*puStack_58,iStack_54 + 0x1f98);
      if ((((iStack_40 == iVar2) && (iStack_3c == iStack_50)) && (iStack_30 == *(int *)(iVar4 + 8)))
         && ((iStack_38 == 1 && (iStack_34 == 1)))) {
        *param_2 = 0x3000;
        param_2[1] = 0;
        param_2[2] = 0;
        goto LAB_009ea1c6;
      }
      func_0x005d5720(1);
      uStack_8 = 3;
      func_0x0046b6e0(auStack_198,"Invalid texture parameters in share handle texture.");
      func_0x00926aa0(param_2);
    }
  }
  func_0x005d3940();
LAB_009ea1c6:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_009eb230(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::DebugAnnotator::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x204);
  }
  return param_1;
}



undefined4 __thiscall FUN_009eb260(undefined4 param_1,byte param_2)

{
  func_0x009eaf80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3360);
  }
  return param_1;
}



undefined4 __thiscall FUN_009eb290(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49ac7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x3360,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009eaa50(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void __thiscall
FUN_009ed3e0(int param_1,undefined4 param_2,int *param_3,float *param_4,undefined4 param_5,
            byte param_6)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int iVar8;
  undefined4 *puVar9;
  int *piStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&piStack_2c;
  piStack_2c = param_3;
  if (param_4[3] <= 1.0) {
    if (0.0 <= param_4[3]) {
      iVar8 = func_0x008abcb0();
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = 0xff;
  }
  if (*param_4 <= 1.0) {
    if (0.0 <= *param_4) {
      uVar3 = func_0x008abcb0();
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xff;
  }
  if (param_4[1] <= 1.0) {
    if (0.0 <= param_4[1]) {
      uVar4 = func_0x008abcb0();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  if (param_4[2] <= 1.0) {
    if (0.0 <= param_4[2]) {
      uVar5 = func_0x008abcb0();
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xff;
  }
  piVar2 = piStack_2c;
  uStack_20 = uVar5 & 0xff | (uVar4 & 0xff) << 8 | (uVar3 & 0xff) << 0x10 | iVar8 << 0x18;
  uStack_24 = (uint)param_6;
  pcVar1 = *(code **)(*piStack_2c + 0x18);
  _guard_check_icall();
  iStack_28 = (*pcVar1)();
  pcVar1 = *(code **)(*piVar2 + 0x24);
  _guard_check_icall();
  piVar6 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar2 + 0x10);
  _guard_check_icall();
  uVar7 = (*pcVar1)();
  iVar8 = func_0x00946ea0(uVar7);
  if ((*(int *)(iVar8 + 0x24) == 0) && (*(int *)(iVar8 + 0x28) == 0)) {
    piStack_2c = (int *)0x1;
    if (*(int *)(param_1 + 0x1b48) != iStack_28) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x159c) + 0x94);
      _guard_check_icall(*(int **)(param_1 + 0x159c),0,piVar6);
      (*pcVar1)();
    }
  }
  else {
    piStack_2c = (int *)0x6;
    if (*(int *)(param_1 + 0x1b4c) != iStack_28) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x159c) + 0x9c);
      _guard_check_icall(*(int **)(param_1 + 0x159c),piVar6);
      (*pcVar1)();
    }
  }
  if (piVar6 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar6 + 8);
    _guard_check_icall(piVar6);
    (*pcVar1)();
  }
  uStack_1c = 0;
  uStack_18 = 0;
  pcVar1 = *(code **)(*piVar2 + 4);
  _guard_check_icall();
  uStack_14 = (*pcVar1)();
  pcVar1 = *(code **)(*piVar2 + 8);
  _guard_check_icall();
  uStack_10 = (*pcVar1)();
  puVar9 = &uStack_1c;
  pcVar1 = *(code **)(**(int **)(param_1 + 0x159c) + 0xbc);
  _guard_check_icall(*(int **)(param_1 + 0x159c),puVar9);
  (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(param_1 + 0x159c) + 0xe4);
  _guard_check_icall(*(int **)(param_1 + 0x159c),0xae,0);
  (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(param_1 + 0x159c) + 0xac);
  _guard_check_icall(*(int **)(param_1 + 0x159c),0,0,puVar9,unaff_EBP,uStack_4,unaff_ESI);
  (*pcVar1)();
  func_0x009f3050();
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009ed6b0(int *param_1,int *param_2,code *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,char *param_8,undefined4 *param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [160];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *piStack_9c;
  code *pcStack_98;
  undefined4 *puStack_94;
  int *piStack_90;
  int *piStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  uint uStack_7c;
  uint auStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  uint auStack_60 [7];
  uint uStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49b4b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_98 = param_3;
  uStack_a0 = param_4;
  uStack_a4 = param_6;
  piStack_9c = param_2;
  puStack_94 = param_9;
  piStack_90 = param_1;
  func_0x004687a0(1,uStack_14);
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  if ((char)param_5 == '\0') {
    puVar6 = &DAT_00fbd138;
  }
  else {
    if ((char)param_5 != '\x04') {
      pcVar1 = *(code **)(*param_2 + 4);
      _guard_check_icall(0x80004005,"Unreachble code reached.",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                         ,"rx::Renderer9::compileToExecutable",0xa81);
      (*pcVar1)();
      goto LAB_009edda9;
    }
    puVar6 = &DAT_00fbd13c;
  }
  func_0x0046b6e0(auStack_144,puVar6);
  func_0x0046b6e0(auStack_144,&DAT_00fb8b8c);
  pcVar1 = *(code **)(*param_1 + 0x54);
  _guard_check_icall();
  iVar7 = (*pcVar1)();
  func_0x00482d80((2 < iVar7) + '\x02');
  uVar8 = func_0x0046b6e0(auStack_144,&DAT_00fb8b8c,&DAT_0113ffdc);
  func_0x0046b6e0(uVar8);
  func_0x0046a470(auStack_78);
  uVar14 = 0;
  uStack_8._0_1_ = 3;
  if (*param_8 == '\0') {
    if (param_8[1] != '\0') {
      uVar14 = 0x8000;
    }
  }
  else {
    uVar14 = 4;
  }
  cVar5 = FUN_00466fd0(0);
  iStack_88 = 0;
  puStack_84 = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x0;
  uVar12 = uVar14 | 1;
  if (cVar5 == '\0') {
    uVar12 = uVar14;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  pcStack_2c = (char *)0x61666564;
  uStack_1c = 7;
  uStack_18 = 0xf;
  uStack_28 = 0x746c75;
  uStack_8._0_1_ = 5;
  puVar9 = (undefined4 *)func_0x00a2a5e0(uVar12,&pcStack_2c);
  uStack_8._0_1_ = 6;
  if (puStack_84 == puStack_80) {
    func_0x009dca60(puStack_84,puVar9);
  }
  else {
    *puStack_84 = *puVar9;
    puStack_84[1] = 0;
    puStack_84[2] = 0;
    puStack_84[3] = 0;
    puStack_84[4] = 0;
    puStack_84[5] = 0;
    puStack_84[6] = 0;
    uVar8 = puVar9[2];
    uVar10 = puVar9[3];
    uVar2 = puVar9[4];
    puStack_84[1] = puVar9[1];
    puStack_84[2] = uVar8;
    puStack_84[3] = uVar10;
    puStack_84[4] = uVar2;
    *(undefined8 *)(puStack_84 + 5) = *(undefined8 *)(puVar9 + 5);
    puVar9[5] = 0;
    puVar9[6] = 0xf;
    *(undefined1 *)(puVar9 + 1) = 0;
    puStack_84 = puStack_84 + 7;
  }
  uStack_8._0_1_ = 5;
  uVar4 = (undefined1)uStack_8;
  uStack_8._0_1_ = 5;
  if (uStack_30 < 0x10) {
LAB_009ed914:
    uStack_34 = 0;
    uStack_30 = 0xf;
    uStack_44 = uStack_44 & 0xffffff00;
    uStack_8._0_1_ = 4;
    if (0xf < uStack_18) {
      uVar14 = uStack_18 + 1;
      pcVar13 = pcStack_2c;
      if (0xfff < uVar14) {
        pcVar13 = *(char **)(pcStack_2c + -4);
        uVar14 = uStack_18 + 0x24;
        uVar4 = (undefined1)uStack_8;
        if ((char *)0x1f < pcStack_2c + (-4 - (int)pcVar13)) goto LAB_009eddd3;
      }
      func_0x008ab812(pcVar13,uVar14);
    }
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_7c = 0x1f;
    pcStack_2c = (char *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    pcStack_2c = (char *)func_0x0046cf00(&pcStack_2c,&uStack_7c);
    uStack_1c = 0x12;
    uStack_18 = uStack_7c;
    builtin_strncpy(pcStack_2c,"avoid flow control",0x13);
    uStack_8._0_1_ = 7;
    uVar8 = func_0x00a2a5e0(uVar12 | 0x200,&pcStack_2c);
    uStack_8._0_1_ = 8;
    func_0x009e8b70(uVar8);
    uStack_8._0_1_ = 7;
    if (0xf < uStack_30) {
      uVar11 = uStack_30 + 1;
      uVar14 = uStack_44;
      if (0xfff < uVar11) {
        uVar14 = *(uint *)(uStack_44 - 4);
        uVar11 = uStack_30 + 0x24;
        if (0x1f < (uStack_44 - uVar14) - 4) goto LAB_009eddd8;
      }
      func_0x008ab812(uVar14,uVar11);
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    uStack_44 = uStack_44 & 0xffffff00;
    uStack_8._0_1_ = 4;
    if (0xf < uStack_18) {
      uVar14 = uStack_18 + 1;
      pcVar13 = pcStack_2c;
      if (0xfff < uVar14) {
        pcVar13 = *(char **)(pcStack_2c + -4);
        uVar14 = uStack_18 + 0x24;
        if ((char *)0x1f < pcStack_2c + (-4 - (int)pcVar13)) goto LAB_009eddd8;
      }
      func_0x008ab812(pcVar13,uVar14);
    }
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_7c = 0x1f;
    pcStack_2c = (char *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    pcStack_2c = (char *)func_0x0046cf00(&pcStack_2c,&uStack_7c);
    uStack_1c = 0x13;
    uStack_18 = uStack_7c;
    builtin_strncpy(pcStack_2c,"prefer flow control",0x14);
    uStack_8._0_1_ = 9;
    uVar8 = func_0x00a2a5e0(uVar12 | 0x400,&pcStack_2c);
    uStack_8._0_1_ = 10;
    func_0x009e8b70(uVar8);
    uStack_8._0_1_ = 9;
    if (0xf < uStack_30) {
      uVar12 = uStack_30 + 1;
      uVar14 = uStack_44;
      if (0xfff < uVar12) {
        uVar14 = *(uint *)(uStack_44 - 4);
        uVar12 = uStack_30 + 0x24;
        if (0x1f < (uStack_44 - uVar14) - 4) goto LAB_009edddd;
      }
      func_0x008ab812(uVar14,uVar12);
    }
    uStack_34 = 0;
    uStack_30 = 0xf;
    uStack_44 = uStack_44 & 0xffffff00;
    uStack_8._0_1_ = 4;
    if (0xf < uStack_18) {
      uVar14 = uStack_18 + 1;
      pcVar13 = pcStack_2c;
      if (0xfff < uVar14) {
        pcVar13 = *(char **)(pcStack_2c + -4);
        uVar14 = uStack_18 + 0x24;
        if ((char *)0x1f < pcStack_2c + (-4 - (int)pcVar13)) goto LAB_009edddd;
      }
      func_0x008ab812(pcVar13,uVar14);
    }
    piVar3 = piStack_90;
    piStack_8c = (int *)0x0;
    auStack_60[1] = 0;
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[4] = 0;
    auStack_60[5] = 0xf;
    auStack_60[0] = 0;
    uStack_8._0_1_ = 0xb;
    iVar7 = func_0x00a2a660(piStack_9c,pcStack_98,uStack_a0,auStack_78,&iStack_88,0,&piStack_8c,
                            auStack_60);
    if (iVar7 != 1) {
      if (piStack_8c == (int *)0x0) {
        *puStack_94 = 0;
      }
      else {
        pcStack_98 = *(code **)(*piVar3 + 0x7c);
        pcVar1 = *(code **)(*piStack_8c + 0x10);
        _guard_check_icall(piStack_8c);
        uVar8 = (*pcVar1)();
        pcVar1 = *(code **)(*piStack_8c + 0xc);
        _guard_check_icall(piStack_8c);
        uVar10 = (*pcVar1)();
        pcVar1 = pcStack_98;
        _guard_check_icall(piStack_9c,uVar10,uVar8,param_5,uStack_a4,param_7,puStack_94);
        iVar7 = (*pcVar1)();
        if (piStack_8c != (int *)0x0) {
          pcVar1 = *(code **)(*piStack_8c + 8);
          _guard_check_icall(piStack_8c);
          (*pcVar1)();
          piStack_8c = (int *)0x0;
        }
        if ((iVar7 != 1) && (auStack_60[4] != 0)) {
          func_0x00a61210(auStack_60);
        }
      }
    }
    if (0xf < auStack_60[5]) {
      uVar12 = auStack_60[5] + 1;
      uVar14 = auStack_60[0];
      if (0xfff < uVar12) {
        uVar14 = *(uint *)(auStack_60[0] - 4);
        uVar12 = auStack_60[5] + 0x24;
        if (0x1f < (auStack_60[0] - uVar14) - 4) goto LAB_009edde2;
      }
      func_0x008ab812(uVar14,uVar12);
    }
    auStack_60[4] = 0;
    auStack_60[5] = 0xf;
    auStack_60[0] = auStack_60[0] & 0xffffff00;
    if (iStack_88 != 0) {
      func_0x009dc9f0(iStack_88,puStack_84,&iStack_88);
      uVar14 = (((int)puStack_80 - iStack_88) / 0x1c) * 0x1c;
      iVar7 = iStack_88;
      if (0xfff < uVar14) {
        iVar7 = *(int *)(iStack_88 + -4);
        uVar14 = uVar14 + 0x23;
        if (0x1f < (iStack_88 - iVar7) - 4U) goto LAB_009edde2;
      }
      func_0x008ab812(iVar7,uVar14);
      iStack_88 = 0;
      puStack_84 = (undefined4 *)0x0;
      puStack_80 = (undefined4 *)0x0;
    }
    if (0xf < uStack_64) {
      uVar12 = uStack_64 + 1;
      uVar14 = auStack_78[0];
      if (0xfff < uVar12) {
        uVar14 = *(uint *)(auStack_78[0] - 4);
        uVar12 = uStack_64 + 0x24;
        if (0x1f < (auStack_78[0] - uVar14) - 4) goto LAB_009edde2;
      }
      func_0x008ab812(uVar14,uVar12);
    }
    uStack_68 = 0;
    uStack_64 = 0xf;
    auStack_78[0] = auStack_78[0] & 0xffffff00;
LAB_009edda9:
    func_0x004673c0();
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  uVar11 = uStack_30 + 1;
  uVar14 = uStack_44;
  if (uVar11 < 0x1000) {
LAB_009ed90a:
    func_0x008ab812(uVar14,uVar11);
    goto LAB_009ed914;
  }
  uVar14 = *(uint *)(uStack_44 - 4);
  uVar11 = uStack_30 + 0x24;
  if ((uStack_44 - uVar14) - 4 < 0x20) goto LAB_009ed90a;
LAB_009eddd3:
  uStack_8._0_1_ = uVar4;
  func_0x008aaf66();
LAB_009eddd8:
  func_0x008aaf66();
LAB_009edddd:
  func_0x008aaf66();
LAB_009edde2:
  func_0x008aaf66();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_009eddf0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                     ,"rx::Renderer9::copyCompressedTexture",0x9ec);
  (*pcVar1)();
  return 1;
}



void FUN_009ede40(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_1c;
  uStack_18 = param_1;
  iStack_14 = *param_3;
  iStack_10 = param_3[1];
  uStack_1c = param_2;
  iStack_c = param_3[2] + iStack_14;
  iStack_8 = param_3[3] + iStack_10;
  func_0x00a7c720(param_1,param_2,&iStack_14,param_4,param_5,param_6,param_7);
  FUN_008ab370();
  return;
}



undefined4 FUN_009eded0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                     ,"rx::Renderer9::copyImage2DArray",0x9c8);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_009edf20(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                     ,"rx::Renderer9::copyImage3D",0x9bb);
  (*pcVar1)();
  return 1;
}



void FUN_009edf70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  undefined1 auStack_10 [16];
  
  uVar1 = func_0x00955050(auStack_10,param_5,param_6,param_7,param_8);
  func_0x00a7fdc0(unaff_retaddr,param_1,param_2,uVar1);
  return;
}



void FUN_009edfb0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_1c;
  iStack_14 = *param_3;
  iStack_10 = param_3[1];
  uStack_18 = param_1;
  uStack_1c = param_2;
  iStack_c = param_3[2] + iStack_14;
  iStack_8 = param_3[3] + iStack_10;
  func_0x00a7cbe0(param_1,param_2,&iStack_14,param_4,param_5,param_6,param_7,param_8);
  FUN_008ab370();
  return;
}



void FUN_009ee040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_1c;
  iStack_14 = *param_5;
  iStack_10 = param_5[1];
  uStack_18 = param_1;
  uStack_1c = param_2;
  iStack_c = param_5[3] + iStack_14;
  iStack_8 = param_5[4] + iStack_10;
  func_0x00a7cf80(param_1,param_2,param_3,&iStack_14,param_6,param_8,param_9,param_10,param_11,
                  param_12,param_13,param_14);
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_009ee850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c07;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1a8,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a78760(param_2,param_3,param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009ee8d0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a7ed70(param_2,param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009ee950(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f465a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x10,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009c2960(0x33a0,*(undefined4 *)(param_1 + 0x159c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009ee9d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48d04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a7fce0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009eeaa0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49bd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a81ef0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009eeb10(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cb04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(8,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a82250(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4
FUN_009eeb90(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49c14;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_20 = (undefined4 *)func_0x00a86250(param_4,uVar3);
  func_0x009dbfe0();
  func_0x00957a20(param_4);
  iStack_1c = func_0x00957ae0(param_5);
  piStack_24 = (int *)0x0;
  uStack_18 = 0;
  if ((0 < param_2) && (0 < param_3)) {
    cStack_11 = '\0';
    iVar4 = func_0x00946ea0(param_4);
    if ((*(int *)(iVar4 + 0x24) == 0) && (*(int *)(iVar4 + 0x28) == 0)) {
      cStack_11 = puStack_20[2] != 0;
      piStack_2c = *(int **)(iStack_28 + 0x159c);
      if (iStack_1c == 0) {
        pcVar1 = *(code **)(*piStack_2c + 0x5c);
        _guard_check_icall(piStack_2c,param_2,param_3,1,1,*puStack_20,0,&piStack_24,0);
        iVar4 = (*pcVar1)();
        if (iVar4 < 0) goto LAB_009eed11;
        pcVar1 = *(code **)(*piStack_24 + 0x48);
        _guard_check_icall(piStack_24,0,&uStack_18);
        iVar4 = (*pcVar1)();
      }
      else {
        pcVar1 = *(code **)(*piStack_2c + 0x70);
        uVar5 = func_0x00a7ec70(iStack_1c);
        _guard_check_icall(piStack_2c,param_2,param_3,puStack_20[1],uVar5,0,0,&uStack_18,0);
        iVar4 = (*pcVar1)();
      }
    }
    else {
      piVar2 = *(int **)(iStack_28 + 0x159c);
      pcVar1 = *(code **)(*piVar2 + 0x74);
      uVar5 = func_0x00a7ec70(iStack_1c);
      _guard_check_icall(piVar2,param_2,param_3,puStack_20[1],uVar5,0,0,&uStack_18,0);
      iVar4 = (*pcVar1)();
    }
    puVar6 = (undefined4 *)(iStack_28 + 0x159c);
    if (iVar4 < 0) {
LAB_009eed11:
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
      _guard_check_icall(iVar4,"Failed to create render target",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                         ,"rx::Renderer9::createRenderTarget",0xa1f);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
    if (cStack_11 != '\0') {
      piStack_2c = (int *)0x0;
      pcVar1 = *(code **)(*(int *)*puVar6 + 0x98);
      _guard_check_icall((int *)*puVar6,0,&piStack_2c);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)*puVar6 + 0x94);
      _guard_check_icall((int *)*puVar6,0,uStack_18);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)*puVar6 + 0xac);
      _guard_check_icall((int *)*puVar6,0,0,1,0xff000000,0,0);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)*puVar6 + 0x94);
      _guard_check_icall((int *)*puVar6,0,piStack_2c);
      (*pcVar1)();
    }
  }
  piStack_2c = (int *)func_0x008ab47d(0x2c);
  uStack_8 = 0;
  if (piStack_2c == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x00a822c0(piStack_24,0,uStack_18,param_4,param_2,param_3,1,iStack_1c);
  }
  *param_6 = uVar5;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009eee40(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_EBX;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_c;
  code *pcStack_8;
  int *piStack_4;
  
  uStack_c = 0;
  pcStack_8 = *(code **)(*param_1 + 0x74);
  pcVar1 = *(code **)(*param_3 + 0x14);
  piStack_4 = param_1;
  _guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*param_3 + 0x10);
  _guard_check_icall();
  uVar5 = (*pcVar1)();
  pcVar1 = *(code **)(*param_3 + 8);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  pcVar1 = *(code **)(*param_3 + 4);
  _guard_check_icall();
  uVar7 = (*pcVar1)();
  pcVar1 = pcStack_8;
  puVar10 = &uStack_c;
  _guard_check_icall(param_2,uVar7,iVar6,uVar5,piVar4,puVar10);
  piVar2 = piStack_4;
  iVar8 = (*pcVar1)();
  if (iVar8 != 1) {
    piVar2 = (int *)piVar2[0x567];
    pcVar1 = *(code **)(*piVar2 + 0x88);
    pcVar3 = *(code **)(*piVar4 + 0x24);
    _guard_check_icall(param_2,uVar7,iVar6,uVar5,piVar4,puVar10);
    uVar5 = (*pcVar3)();
    pcVar3 = *(code **)(*unaff_EBX + 0x24);
    _guard_check_icall();
    uVar7 = (*pcVar3)();
    iVar9 = 0;
    _guard_check_icall(piVar2,uVar7,0,uVar5,0,0);
    iVar8 = (*pcVar1)();
    if (-1 < iVar8) {
      *piVar4 = iVar9;
      return 0;
    }
    pcVar1 = *(code **)(*(int *)(*(int *)(iVar6 + 0x1d14) + 0x24) + 4);
    _guard_check_icall(iVar8,"Failed to copy render target",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                       ,"rx::Renderer9::createRenderTargetCopy",0xa42);
    (*pcVar1)();
  }
  return 1;
}



undefined4 __thiscall
FUN_009eef90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49c54;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x5c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a826c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009ef010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a83960(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009ef0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a83ab0(param_1,param_2,param_3);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_009ef120(void)

{
  return 0;
}



undefined4 FUN_009ef130(void)

{
  return 0;
}



undefined4 __thiscall
FUN_009ef140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49c97;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x8c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a83c00(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009ef1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49cd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x74,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a83d20(param_1,param_2,param_3,param_4);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009ef250(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49d14;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0xc,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a61000(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_009ef320(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49bd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a84fc0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009f0230(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  HMODULE pHVar5;
  int iVar6;
  int *piVar7;
  FARPROC pFVar8;
  code *pcVar9;
  HMODULE *phModule;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  undefined4 uVar11;
  char cStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  uint auStack_34 [2];
  int *piStack_2c;
  uint uStack_28;
  char *pcStack_24;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  uint uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pcStack_24 = (char *)(param_1 + 0x15a4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4ecf1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_18 = 0;
  if (*pcStack_24 != '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de41c) &&
     (func_0x008ab40d(&DAT_013de41c,uVar2), DAT_013de41c == -1)) {
    uStack_8 = 0;
    uVar3 = func_0x0093d430("gpu.angle");
    DAT_013de418 = (char *)func_0x009b9170(uVar3);
    func_0x008ab3bc(&DAT_013de41c);
  }
  pcVar10 = DAT_013de418;
  puStack_44 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de418 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar10,"HLSLCompiler::initialize",0,0,0,0,0,0,0);
    pcVar10 = DAT_013de418;
    uStack_40 = func_0x0093d430();
    puStack_44 = &uStack_40;
    pcStack_3c = pcVar10;
    pcStack_38 = "HLSLCompiler::initialize";
  }
  phModule = (HMODULE *)(param_1 + 0x15a8);
  uVar2 = 0;
  do {
    BVar4 = GetModuleHandleExA(0,*(LPCSTR *)((int)&PTR_s_d3dcompiler_47_dll_012952a8 + uVar2),
                               phModule);
    if (BVar4 != 0) break;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0xc);
  if (*phModule == (HMODULE)0x0) {
    pHVar5 = LoadLibraryA("d3dcompiler_47.dll");
    *phModule = pHVar5;
    if (pHVar5 == (HMODULE)0x0) {
      cVar1 = func_0x00952a70(2);
      if (cVar1 != '\0') {
        iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\HLSLCompiler.cpp"
                                ,"rx::HLSLCompiler::ensureInitialized",0x99,2);
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        uStack_18 = 1;
        uStack_28 = 1;
        func_0x0046b6e0(iVar6 + 0x10,"Failed to load HLSL compiler library. Using \'old\' DLL.");
      }
      uStack_8 = 1;
      if ((uStack_18 & 1) != 0) {
        uStack_18 = uStack_18 & 0xfffffffe;
        func_0x00952760();
      }
      pHVar5 = LoadLibraryA("d3dcompiler_old.dll");
      *phModule = pHVar5;
      if (pHVar5 == (HMODULE)0x0) goto LAB_00a2b3b9;
      iVar6 = func_0x0093d430();
      pcVar9 = *(code **)(iVar6 + 0x28);
      uVar3 = func_0x0093d430();
      uVar11 = 1;
    }
    else {
      iVar6 = func_0x0093d430();
      pcVar9 = *(code **)(iVar6 + 0x28);
      uVar3 = func_0x0093d430();
      uVar11 = 0;
    }
    _guard_check_icall(uVar3,"GPU.ANGLE.D3DCompilerLoadLibraryResult",uVar11,3);
    (*pcVar9)();
  }
LAB_00a2b3b9:
  if (*phModule == (HMODULE)0x0) {
    pcStack_24 = (char *)GetLastError();
    cVar1 = func_0x00952a70(3);
    if (cVar1 != '\0') {
      iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\HLSLCompiler.cpp"
                              ,"rx::HLSLCompiler::ensureInitialized",0xa6,3);
      uStack_28 = uStack_18 | 2;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      uStack_18 = uStack_28;
      piVar7 = (int *)func_0x0046b6e0(iVar6 + 0x10,"D3D Compiler LoadLibrary failed. GetLastError=")
      ;
      piStack_1c = (int *)0x0;
      piStack_2c = piVar7;
      func_0x0046a2c0(piVar7);
      uVar2 = 4;
      uStack_8 = 4;
      if (cStack_48 != '\0') {
        piStack_1c = *(int **)(*(int *)(*(int *)(*piVar7 + 4) + 0x30 + (int)piVar7) + 4);
        pcVar9 = *(code **)(*piStack_1c + 4);
        piStack_14 = piStack_1c;
        _guard_check_icall();
        (*pcVar9)();
        uStack_8._0_1_ = 5;
        piStack_1c = (int *)func_0x00485b10(auStack_20);
        uStack_8 = CONCAT31(uStack_8._1_3_,4);
        if (piStack_14 != (int *)0x0) {
          pcVar9 = *(code **)(*piStack_14 + 8);
          _guard_check_icall();
          piStack_14 = (int *)(*pcVar9)();
          if (piStack_14 != (int *)0x0) {
            pcVar9 = *(code **)*piStack_14;
            _guard_check_icall(1);
            (*pcVar9)();
          }
        }
        iVar6 = (int)piStack_2c + *(int *)(*piStack_2c + 4);
        piStack_14 = (int *)CONCAT31(piStack_14._1_3_,*(undefined1 *)(iVar6 + 0x40));
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        pcVar9 = *(code **)(*piStack_1c + 0x20);
        _guard_check_icall(auStack_34,auStack_34[0],*(undefined4 *)(iVar6 + 0x38),iVar6,piStack_14,
                           pcStack_24);
        (*pcVar9)();
        piStack_1c = (int *)0x0;
        piVar7 = piStack_2c;
        if ((char)auStack_34[0] != '\0') {
          piStack_1c = (int *)0x4;
        }
      }
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) != 0) {
        uVar2 = 0;
      }
      func_0x00464710(uVar2 | *(uint *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) |
                              (uint)piStack_1c,0);
      func_0x0046a240();
    }
    uStack_8 = 1;
    if ((uStack_18 & 2) != 0) {
      func_0x00952760();
    }
    iVar6 = func_0x0093d430();
    pcVar9 = *(code **)(iVar6 + 0x28);
    uVar3 = func_0x0093d430();
    _guard_check_icall(uVar3,"GPU.ANGLE.D3DCompilerLoadLibraryResult",2,3);
    (*pcVar9)();
    uVar3 = 0xa9;
    pcVar10 = "LoadLibrary failed to load D3D Compiler DLL.";
  }
  else {
    pFVar8 = GetProcAddress(*phModule,"D3DCompile");
    pcVar10 = pcStack_24;
    pHVar5 = *phModule;
    *(FARPROC *)(pcStack_24 + 8) = pFVar8;
    pFVar8 = GetProcAddress(pHVar5,"D3DDisassemble");
    *(FARPROC *)(pcVar10 + 0xc) = pFVar8;
    if (*(int *)(pcVar10 + 8) != 0) {
      *pcVar10 = '\x01';
      uVar3 = 0;
      goto LAB_00a2b5d7;
    }
    uVar3 = 0xbd;
    pcVar10 = "Error finding D3DCompile entry point.";
  }
  pcVar9 = *(code **)(*param_2 + 4);
  _guard_check_icall(0x8007000e,pcVar10,
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\HLSLCompiler.cpp"
                     ,"rx::HLSLCompiler::ensureInitialized",uVar3);
  (*pcVar9)();
  uVar3 = 1;
LAB_00a2b5d7:
  uStack_8 = 8;
  if ((puStack_44 != (undefined4 *)0x0) && (*(char *)puStack_44[1] != '\0')) {
    func_0x009b90e0(*puStack_44,0x45,(char *)puStack_44[1],puStack_44[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



undefined4 FUN_009f02e0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                     ,"rx::Renderer9::fastCopyBufferToTexture",0x3ce);
  (*pcVar1)();
  return 1;
}



void __thiscall
FUN_009f0710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  func_0x00a7e190(*(undefined4 *)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x159c),
                  *(undefined4 *)(param_1 + 0x1590),*(undefined4 *)(param_1 + 0x158c),param_2,
                  param_3,param_4,param_5);
  return;
}



void __thiscall FUN_009f0750(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a4;
  uint uStack_a0;
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
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined1 auStack_24 [12];
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f49de9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_2;
  uStack_8 = 0;
  uStack_30 = param_2;
  uStack_40 = 0;
  iStack_50 = func_0x009dbea0(uStack_14);
  uStack_38 = func_0x009dbfe0();
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x20);
  _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),auStack_24);
  (*pcVar1)();
  uVar4 = *(uint *)(param_1 + 0x15d0);
  uStack_28 = ((int)uVar4 >> 0x1f & 0xfffffffcU) + 4;
  uStack_2c = uVar4 & 1;
  if ((uStack_2c != 0) && (1 < uStack_28)) {
    uStack_28 = 1;
  }
  if (((uVar4 & 2) != 0) && (uStack_2c = 2, 2 < uStack_28)) {
    uStack_28 = 2;
  }
  if (((uVar4 & 4) != 0) && (uStack_2c = 3, 3 < (int)uStack_28)) {
    uStack_28 = 3;
  }
  if (((uVar4 & 8) != 0) && (uStack_2c = 4, 4 < (int)uStack_28)) {
    uStack_28 = 4;
  }
  func_0x009b0510();
  uStack_8 = 0;
  uStack_40 = 1;
  uStack_3c = 0;
  do {
    uStack_34 = *(undefined4 *)((int)&DAT_00fbd8d8 + uStack_3c);
    iVar2 = func_0x00957a20(uStack_34);
    if (*(char *)(iVar2 + 3) != '\0') {
      uVar4 = 0;
      do {
        iVar2 = *(int *)((int)&DAT_00fbd8e4 + uVar4);
        iVar3 = func_0x00957a20(iVar2);
        if ((*(char *)(iVar3 + 3) != '\0') || (iVar2 == 0)) {
          iStack_44 = func_0x00946ea0(uStack_34);
          iStack_4c = func_0x00946ea0(iVar2);
          iStack_48 = func_0x00a86250(uStack_34);
          func_0x009b03d0();
          iVar3 = iStack_44;
          uStack_fc = uStack_34;
          uStack_8 = 5;
          iStack_f4 = *(int *)(iStack_44 + 0x2c) << 3;
          uStack_f0 = *(undefined4 *)(iStack_44 + 0xc);
          uStack_ec = *(undefined4 *)(iStack_44 + 0x10);
          uStack_e8 = *(undefined4 *)(iStack_44 + 0x14);
          uStack_e4 = *(undefined4 *)(iStack_44 + 0x18);
          uStack_e0 = *(undefined4 *)(iStack_44 + 0x1c);
          uStack_dc = 0;
          uStack_d8 = (uint)(*(int *)(iStack_44 + 0x4c) == 0x1907);
          if ((*(int *)(iStack_44 + 0x4c) == 0x1908) ||
             (uStack_d4 = 0, *(int *)(iStack_44 + 0x4c) == 0x80e1)) {
            uStack_d4 = 1;
          }
          uStack_c8 = 0x3050;
          uStack_cc = 0x308e;
          if (iStack_18 == *(int *)(iStack_48 + 4)) {
            uStack_c8 = 0x3038;
          }
          iStack_f8 = iVar2;
          iStack_c4 = FUN_004b5b10();
          iStack_c4 = iStack_c4 + 1;
          uStack_c0 = 4;
          uStack_bc = *(undefined4 *)(iStack_4c + 0x24);
          uStack_b8 = 0;
          uStack_b4 = 0x3038;
          uStack_9c = 0;
          iStack_b0 = *(int *)(iStack_50 + 0x1c);
          iStack_a8 = iStack_b0 * iStack_b0;
          uStack_98 = 0;
          uStack_94 = 0x3038;
          uStack_90 = 4;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_a4 = uStack_2c;
          uStack_a0 = uStack_28;
          uStack_84 = *(undefined4 *)(iStack_4c + 0x28);
          uStack_80 = 0x405;
          uStack_7c = 0x3038;
          uStack_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          iStack_ac = iStack_b0;
          uStack_68 = func_0x0093deb0(*(undefined4 *)(iVar3 + 0x54));
          func_0x009b0700(&uStack_fc);
          uStack_8 = uStack_8 & 0xffffff00;
          _guard_check_icall();
        }
        uVar4 = uVar4 + 4;
      } while (uVar4 < 0x14);
    }
    uStack_3c = uStack_3c + 4;
  } while (uStack_3c < 0xc);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009f0ab0(int param_1,undefined1 *param_2)

{
  char cVar1;
  
  *param_2 = 1;
  if (*(int *)(param_1 + 0x1598) != 0) {
    cVar1 = FUN_00466fd0(0);
    if (cVar1 == '\0') {
      param_2[1] = 1;
      param_2[3] = 1;
    }
  }
  param_2[2] = 1;
  *(undefined2 *)(param_2 + 4) = 0x101;
  param_2[8] = 1;
  *(undefined2 *)(param_2 + 10) = 0x101;
  param_2[0xd] = 1;
  param_2[0x10] = 1;
  param_2[0x36] = 1;
  *(undefined2 *)(param_2 + 0x22) = 0x101;
  param_2[0x21] = 1;
  param_2[0x26] = 1;
  return;
}



void FUN_009f0b10(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a803b0(*(undefined4 *)(param_1 + 0x1d14),param_2,param_3);
  return;
}



undefined4 FUN_009f0b30(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                     ,"rx::Renderer9::generateMipmapUsingD3D",0xb29);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_009f0d40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x1b14);
  param_2[1] = *(undefined4 *)(param_1 + 0x1b18);
  uVar1 = *(undefined4 *)(param_1 + 0x1b20);
  param_2[2] = *(undefined4 *)(param_1 + 0x1b1c);
  param_2[3] = uVar1;
  param_2[4] = 0;
  return;
}



undefined4 __fastcall FUN_009f11b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x159c);
}



void FUN_009f11c0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,int param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [152];
  int iStack_5c;
  undefined *puStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [8];
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_54 = 0xffffffff;
  puStack_58 = &DAT_00f49e91;
  iStack_5c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_50;
  *unaff_FS_OFFSET = (int)&iStack_5c;
  puStack_3c = param_5;
  puStack_40 = param_7;
  iStack_44 = param_8;
  puStack_48 = param_9;
  puStack_34 = param_10;
  piStack_2c = (int *)0x0;
  pcVar1 = *(code **)*param_3;
  _guard_check_icall(param_3,&DAT_00fbdeb0,&piStack_2c,uStack_8);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    func_0x005d5720(1);
    uStack_54 = 0;
    func_0x0046b6e0(auStack_f4,"Client buffer is not a IDirect3DTexture9");
  }
  else {
    piStack_30 = (int *)0x0;
    pcVar1 = *(code **)(*piStack_2c + 0xc);
    _guard_check_icall(piStack_2c,&piStack_30);
    (*pcVar1)();
    if (piStack_30 == *(int **)(iStack_38 + 0x159c)) {
      if (piStack_30 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_30 + 8);
        _guard_check_icall(piStack_30);
        (*pcVar1)();
        piStack_30 = (int *)0x0;
      }
      pcVar1 = *(code **)(*piStack_2c + 0x44);
      _guard_check_icall(piStack_2c,0,auStack_28);
      (*pcVar1)();
      if (piStack_2c != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_2c + 8);
        _guard_check_icall(piStack_2c);
        (*pcVar1)();
        piStack_2c = (int *)0x0;
      }
      if (puStack_3c != (undefined4 *)0x0) {
        *puStack_3c = uStack_10;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = uStack_c;
      }
      iVar2 = func_0x00a7ec80(uStack_18);
      if (((param_2 == 0) || (*(int *)(param_2 + 0x74) < 2)) && (iVar2 == 0)) {
        if (puStack_40 != (undefined4 *)0x0) {
          *puStack_40 = 0;
        }
        switch(auStack_28[0]) {
        case 0x14:
        case 0x15:
        case 0x71:
        case 0x74:
          iVar2 = func_0x00a85390(auStack_28[0]);
          if (iStack_44 != 0) {
            uVar3 = func_0x00940030(*(undefined4 *)(&DAT_0129044c + *(int *)(iVar2 + 0x28) * 0x54));
            func_0x00940020(uVar3);
          }
          if (puStack_48 != (undefined4 *)0x0) {
            *puStack_48 = &DAT_01290448 + *(int *)(iVar2 + 0x28) * 0x54;
          }
          if (puStack_34 != (undefined4 *)0x0) {
            *puStack_34 = 0;
          }
          *param_1 = 0x3000;
          param_1[1] = 0;
          param_1[2] = 0;
          goto code_r0x009f1494;
        default:
          func_0x005d5720(1);
          uStack_54 = 3;
          func_0x0046b6e0(auStack_f4,"Unknown client buffer texture format: ");
          func_0x00482d80(auStack_28[0]);
        }
      }
      else {
        func_0x005d5720(1);
        uStack_54 = 2;
        func_0x0046b6e0(auStack_f4,"Multisampling not supported for client buffer texture");
      }
    }
    else {
      if (piStack_2c != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_2c + 8);
        _guard_check_icall(piStack_2c);
        (*pcVar1)();
        piStack_2c = (int *)0x0;
      }
      func_0x005d5720(1);
      uStack_54 = 1;
      func_0x0046b6e0(auStack_f4,"Texture\'s device does not match.");
    }
  }
  func_0x00926aa0(param_1);
  func_0x005d3940();
code_r0x009f1494:
  *unaff_FS_OFFSET = iStack_5c;
  FUN_008ab370();
  return;
}



void FUN_009f1600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00960fd0(param_1,param_2,0,0,param_3);
  return;
}



undefined4 __thiscall FUN_009f1620(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  param_2[1] = 0;
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x1598);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x54);
    _guard_check_icall(piVar1,*(undefined4 *)(param_1 + 0x158c),param_2);
    (*pcVar2)();
    return 1;
  }
  return 0;
}



undefined1 __fastcall FUN_009f1660(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1689);
}



void FUN_009f1670(undefined4 *param_1)

{
  *param_1 = 2;
  param_1[1] = 0;
  return;
}



undefined1 __fastcall FUN_009f1690(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1688);
}



undefined4 __thiscall FUN_009f16a0(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int aiStack_ac [20];
  undefined **appuStack_5c [19];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49ed0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar3);
  uStack_8 = 0;
  func_0x0046b6e0(aiStack_ac,param_1 + 0x18ec);
  if (*(int *)(param_1 + 0x1598) != 0) {
    cVar2 = FUN_00466fd0(0);
    if (cVar2 == '\0') {
      bVar1 = true;
      goto LAB_009f1712;
    }
  }
  bVar1 = false;
LAB_009f1712:
  pcVar4 = " Direct3D9";
  if (bVar1) {
    pcVar4 = " Direct3D9Ex";
  }
  func_0x0046b6e0(aiStack_ac,pcVar4);
  func_0x0046b6e0(aiStack_ac,&DAT_00fbd060);
  uVar5 = func_0x005b0d50(*(undefined1 *)(param_1 + 0x1681),&DAT_00fb8b8c);
  func_0x0046b6e0(uVar5);
  func_0x005b0d50(*(undefined1 *)(param_1 + 0x1680));
  func_0x0046b6e0(aiStack_ac,&DAT_00fbd068);
  uVar5 = func_0x005b0d50(*(undefined1 *)(param_1 + 0x1689),&DAT_00fb8b8c);
  func_0x0046b6e0(uVar5);
  func_0x005b0d50(*(undefined1 *)(param_1 + 0x1688));
  func_0x0046a470(param_2);
  *(undefined ***)((int)aiStack_ac + *(int *)(aiStack_ac[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_ac + *(int *)(aiStack_ac[0] + 4) + -4) = *(int *)(aiStack_ac[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_ac + *(int *)(aiStack_ac[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_ac + *(int *)(aiStack_ac[0] + 4) + -4) = *(int *)(aiStack_ac[0] + 4) + -8;
  uStack_8 = 1;
  appuStack_5c[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_5c);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_009f1850(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined4 * __thiscall FUN_009f18d0(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)func_0x00a75600(*(undefined4 *)(param_1 + 0x1b14));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_2;
}



void __thiscall FUN_009f1920(int param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  code *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int aiStack_e8 [20];
  undefined **appuStack_98 [19];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_44 [5];
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49f10;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_48 = param_2;
  uStack_4c = param_2;
  func_0x005d5720(1,uStack_14);
  pcVar2 = (char *)(param_1 + 0x16ec);
  uStack_8 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  pcVar6 = pcVar2;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar6 - (param_1 + 0x16ed));
  uStack_8._0_1_ = 1;
  pcVar6 = "D3D9";
  if (iStack_1c != 0) {
    pcVar6 = pcVar2;
  }
  func_0x0046b6e0(aiStack_e8,pcVar6);
  if (param_3 != '\0') {
    func_0x0046b6e0(aiStack_e8,&DAT_00fbdda8);
    puVar5 = (undefined4 *)
             func_0x00a75320(aiStack_44,*(undefined4 *)(param_1 + 0x1b0c),
                             *(undefined4 *)(param_1 + 0x1b10));
    puVar1 = puVar5 + 4;
    uStack_8._0_1_ = 2;
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    func_0x0046cb10(aiStack_e8,puVar5,*puVar1);
    uStack_8._0_1_ = 1;
    if (0xf < uStack_30) {
      uVar7 = uStack_30 + 1;
      iVar8 = aiStack_44[0];
      if (0xfff < uVar7) {
        iVar8 = *(int *)(aiStack_44[0] + -4);
        uVar7 = uStack_30 + 0x24;
        if (0x1f < (aiStack_44[0] - iVar8) - 4U) {
          func_0x008aaf66();
          goto LAB_009f1b32;
        }
      }
      func_0x008ab812(iVar8,uVar7);
    }
  }
  func_0x0046a470(uStack_48);
  uStack_8._0_1_ = 0;
  if (0xf < uStack_18) {
    uVar7 = uStack_18 + 1;
    iVar8 = iStack_2c;
    if (0xfff < uVar7) {
      iVar8 = *(int *)(iStack_2c + -4);
      uVar7 = uStack_18 + 0x24;
      if (0x1f < (iStack_2c - iVar8) - 4U) {
LAB_009f1b32:
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar8,uVar7);
  }
  *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[0] + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[0] + 4) + -4) = *(int *)(aiStack_e8[0] + 4) + -0x50
  ;
  func_0x00469040();
  *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[0] + 4)) = std::basic_ostream<>::vftable;
  *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[0] + 4) + -4) = *(int *)(aiStack_e8[0] + 4) + -8;
  uStack_8 = 3;
  appuStack_98[0] = std::ios_base::vftable;
  func_0x00e706cb(appuStack_98);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_009f1b40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00a86370(*(undefined4 *)(param_1 + 0x16a8),param_2);
  return *(undefined4 *)(iVar1 + 0x10);
}



undefined4 __thiscall FUN_009f1b60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00a86370(*(undefined4 *)(param_1 + 0x16a8),param_2);
  return *puVar1;
}



undefined4 __thiscall
FUN_009f1b80(int param_1,undefined4 param_2,char *param_3,int param_4,uint param_5,uint param_6,
            undefined4 param_7,int *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_3 == '\0') {
    *param_8 = 0x10;
    return 0;
  }
  uVar2 = func_0x009498d0(param_3,6);
  iVar3 = func_0x00a86370(*(undefined4 *)(param_1 + 0x16a8),uVar2);
  if ((param_6 != 0) && (uVar1 = *(uint *)(param_4 + 4), uVar1 != 0)) {
    param_5 = (uint)(param_6 % uVar1 != 0) + param_6 / uVar1;
  }
  if (*(uint *)(iVar3 + 4) <= (uint)(0xffffffff / (ulonglong)param_5)) {
    *param_8 = *(uint *)(iVar3 + 4) * param_5;
    return 0;
  }
  func_0x0098f180(0x505,"New vertex buffer size would result in an overflow.",
                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                  ,"rx::Renderer9::getVertexSpaceRequired",0xbe5);
  return 1;
}



void __thiscall FUN_009f1c30(int param_1,int *param_2)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  HMODULE pHVar6;
  FARPROC pFVar7;
  int iVar8;
  HWND pHVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  LPVOID lpParam;
  undefined1 auStack_170 [64];
  undefined4 uStack_130;
  undefined1 auStack_128 [152];
  uint uStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  char *pcStack_80;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  char *pcStack_74;
  char *pcStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  char *pcStack_64;
  char *pcStack_60;
  int *piStack_5c;
  int iStack_58;
  char *pcStack_54;
  char *pcStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  int *piStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  char *pcStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4a082;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_40 = param_2;
  uStack_90 = 0;
  piStack_2c = param_2;
  iStack_28 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(int *)(iStack_28 + 0x14) < DAT_013de358) {
    func_0x008ab40d(&DAT_013de358,uStack_14);
    if (DAT_013de358 == -1) {
      uStack_8 = 0;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de354 = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de358);
    }
  }
  pcVar2 = DAT_013de354;
  puStack_6c = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de354 != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"GetModuleHandle_d3d9",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de354;
    uStack_68 = func_0x0093d430();
    puStack_6c = &uStack_68;
    pcStack_64 = pcVar2;
    pcStack_60 = "GetModuleHandle_d3d9";
  }
  pHVar6 = LoadLibraryA("d3d9.dll");
  *(HMODULE *)(param_1 + 0x1588) = pHVar6;
  if (pHVar6 == (HMODULE)0x0) {
    uStack_130 = 2;
    func_0x005d5720(1);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    func_0x0046b6e0(auStack_128,"No D3D9 module found.");
    func_0x00926940(piStack_2c);
    func_0x005d3940();
    uStack_8 = 3;
    goto LAB_009f2984;
  }
  pFVar7 = GetProcAddress(pHVar6,"Direct3DCreate9Ex");
  if (pFVar7 == (FARPROC)0x0) {
LAB_009f1e2f:
    if (*(int *)(iStack_28 + 0x14) < DAT_013de368) {
      func_0x008ab40d(&DAT_013de368);
      if (DAT_013de368 == -1) {
        uStack_8 = CONCAT31(uStack_8._1_3_,6);
        uVar5 = func_0x0093d430("gpu.angle");
        DAT_013de364 = (char *)func_0x009b9170(uVar5);
        func_0x008ab3bc(&DAT_013de368);
      }
    }
    pcVar2 = DAT_013de364;
    puStack_3c = (undefined4 *)0x0;
    uStack_8._0_1_ = 7;
    if (*DAT_013de364 != '\0') {
      uVar5 = func_0x0093d430();
      func_0x009b90e0(uVar5,0x42,pcVar2,"Direct3DCreate9",0,0,0,0,0,0,0);
      pcVar2 = DAT_013de364;
      uStack_38 = func_0x0093d430();
      puStack_3c = &uStack_38;
      pcStack_34 = pcVar2;
      pcStack_30 = "Direct3DCreate9";
    }
    uVar5 = func_0x00e878cf(0x20);
    *(undefined4 *)(param_1 + 0x1594) = uVar5;
    uStack_8._0_1_ = 8;
    if ((puStack_3c != (undefined4 *)0x0) && (*(char *)puStack_3c[1] != '\0')) {
      func_0x009b90e0(*puStack_3c,0x45,(char *)puStack_3c[1],puStack_3c[2],0,0,0,0,0,0,0);
    }
    uStack_8._0_1_ = 1;
  }
  else {
    _guard_check_icall(0x20,param_1 + 0x1598);
    iVar8 = (*pFVar7)();
    if (iVar8 < 0) goto LAB_009f1e2f;
    if (*(int *)(iStack_28 + 0x14) < DAT_013de360) {
      func_0x008ab40d(&DAT_013de360);
      if (DAT_013de360 == -1) {
        uStack_8 = CONCAT31(uStack_8._1_3_,4);
        uVar5 = func_0x0093d430("gpu.angle");
        DAT_013de35c = (char *)func_0x009b9170(uVar5);
        func_0x008ab3bc(&DAT_013de360);
      }
    }
    pcVar2 = DAT_013de35c;
    puStack_7c = (undefined4 *)0x0;
    uStack_8._0_1_ = 5;
    if (*DAT_013de35c != '\0') {
      uVar5 = func_0x0093d430();
      func_0x009b90e0(uVar5,0x42,pcVar2,"D3d9Ex_QueryInterface",0,0,0,0,0,0,0);
      pcVar2 = DAT_013de35c;
      uStack_78 = func_0x0093d430();
      puStack_7c = &uStack_78;
      pcStack_74 = pcVar2;
      pcStack_70 = "D3d9Ex_QueryInterface";
    }
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x1598);
    _guard_check_icall(*(undefined4 **)(param_1 + 0x1598),&DAT_00fbd5c8,param_1 + 0x1594);
    (*pcVar1)();
    uStack_8._0_1_ = 1;
    func_0x00926640();
  }
  if (*(int *)(param_1 + 0x1594) == 0) {
    uStack_130 = 2;
    func_0x005d5720(1);
    uStack_8 = CONCAT31(uStack_8._1_3_,9);
    func_0x0046b6e0(auStack_128,"Could not create D3D9 device.");
    func_0x00926940(piStack_2c);
    func_0x005d3940();
    uStack_8 = 10;
    goto LAB_009f2984;
  }
  if (*(int *)(iStack_28 + 0x14) < DAT_013de370) {
    func_0x008ab40d(&DAT_013de370);
    if (DAT_013de370 == -1) {
      uStack_8._0_1_ = 0xb;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de36c = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de370);
    }
  }
  pcVar2 = DAT_013de36c;
  piStack_5c = (int *)0x0;
  uStack_8 = CONCAT31(uStack_8._1_3_,0xc);
  if (*DAT_013de36c != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"GetDeviceCaps",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de36c;
    iStack_58 = func_0x0093d430();
    piStack_5c = &iStack_58;
    pcStack_54 = pcVar2;
    pcStack_50 = "GetDeviceCaps";
  }
  piStack_40 = (int *)0x0;
  do {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x38);
    _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),
                       *(undefined4 *)(param_1 + 0x1590),param_1 + 0x15bc);
    iVar8 = (*pcVar1)();
    if (-1 < iVar8) break;
    if (iVar8 != -0x7789f796) {
      uStack_130 = 7;
      func_0x005d5720(1);
      uStack_8 = CONCAT31(uStack_8._1_3_,0xd);
      func_0x0046b6e0(auStack_128,"Failed to get device caps, ");
      piVar10 = (int *)func_0x009529d0(&pcStack_44,iVar8);
      iVar8 = piVar10[1];
      if (*piVar10 != 0) {
        func_0x0046b6e0(auStack_128,*piVar10);
      }
      func_0x0091fdc0(auStack_128,iVar8,&DAT_00f9ad64,0x30);
      func_0x00926940(piStack_2c);
      func_0x005d3940();
      uStack_8 = CONCAT31(uStack_8._1_3_,0xe);
      if ((piStack_5c != (int *)0x0) && (*(char *)piStack_5c[1] != '\0')) {
        func_0x009b90e0(*piStack_5c,0x45,(char *)piStack_5c[1],piStack_5c[2],0,0,0,0,0,0,0);
      }
      uStack_8 = 0xf;
      goto LAB_009f2984;
    }
    Sleep(100);
    piStack_40 = (int *)((int)piStack_40 + 1);
  } while ((int)piStack_40 < 10);
  uStack_8._0_1_ = 0x10;
  if ((piStack_5c != (int *)0x0) && (*(char *)piStack_5c[1] != '\0')) {
    func_0x009b90e0(*piStack_5c,0x45,(char *)piStack_5c[1],piStack_5c[2],0,0,0,0,0,0,0);
  }
  uStack_8._0_1_ = 1;
  uVar4 = (undefined1)uStack_8;
  uStack_8._0_1_ = 1;
  if (*(uint *)(param_1 + 0x1688) < 0xffff0300) {
    uStack_130 = 4;
    func_0x005d5720(1);
    uStack_8 = CONCAT31(uStack_8._1_3_,0x11);
    func_0x0046b6e0(auStack_128,"Renderer does not support PS ");
    func_0x005b0d50(3);
    func_0x0046b6e0(auStack_128,".0, aborting!");
    func_0x00926940(piStack_2c);
    func_0x005d3940();
    uStack_8 = 0x12;
    goto LAB_009f2984;
  }
  uStack_8._0_1_ = uVar4;
  if ((*(byte *)(param_1 + 0x1690) & 0x10) == 0) {
    uStack_130 = 5;
    func_0x005d5720(1);
    uStack_8 = CONCAT31(uStack_8._1_3_,0x13);
    func_0x0046b6e0(auStack_128,"Renderer does not support StretctRect from textures.");
    func_0x00926940(piStack_2c);
    func_0x005d3940();
    uStack_8 = 0x14;
    goto LAB_009f2984;
  }
  if (*(int *)(iStack_28 + 0x14) < DAT_013de378) {
    func_0x008ab40d(&DAT_013de378);
    if (DAT_013de378 == -1) {
      uStack_8._0_1_ = 0x15;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de374 = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de378);
    }
  }
  pcVar2 = DAT_013de374;
  puStack_8c = (undefined4 *)0x0;
  uStack_8._0_1_ = 0x16;
  if (*DAT_013de374 != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"GetAdapterIdentifier",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de374;
    uStack_88 = func_0x0093d430();
    puStack_8c = &uStack_88;
    pcStack_84 = pcVar2;
    pcStack_80 = "GetAdapterIdentifier";
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x14);
  _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),0,
                     param_1 + 0x16ec);
  (*pcVar1)();
  uStack_8._0_1_ = 0x17;
  if ((puStack_8c != (undefined4 *)0x0) && (*(char *)puStack_8c[1] != '\0')) {
    func_0x009b90e0(*puStack_8c,0x45,(char *)puStack_8c[1],puStack_8c[2],0,0,0,0,0,0,0);
  }
  iVar8 = iStack_28;
  if (*(int *)(iStack_28 + 0x14) < DAT_013de380) {
    func_0x008ab40d(&DAT_013de380);
    if (DAT_013de380 == -1) {
      uStack_8._0_1_ = 0x18;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de37c = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de380);
    }
  }
  puStack_3c = (undefined4 *)0x0;
  uStack_8._0_1_ = 0x19;
  piStack_40 = (int *)DAT_013de37c;
  if (*DAT_013de37c != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,piStack_40,"CreateWindowEx",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de37c;
    uStack_38 = func_0x0093d430();
    puStack_3c = &uStack_38;
    pcStack_34 = pcVar2;
    pcStack_30 = "CreateWindowEx";
    iVar8 = iStack_28;
  }
  lpParam = (LPVOID)0x0;
  pHVar6 = GetModuleHandleA((LPCSTR)0x0);
  pHVar9 = CreateWindowExA(0x8000000,"STATIC","AngleHiddenWindow",0x88000000,0,0,1,1,
                           (HWND)0xfffffffd,(HMENU)0x0,pHVar6,lpParam);
  *(HWND *)(param_1 + 0x15b8) = pHVar9;
  uStack_8._0_1_ = 0x1a;
  if ((puStack_3c != (undefined4 *)0x0) && (*(char *)puStack_3c[1] != '\0')) {
    func_0x009b90e0(*puStack_3c,0x45,(char *)puStack_3c[1],puStack_3c[2],0,0,0,0,0,0,0);
  }
  func_0x009f1530(auStack_170);
  if (*(int *)(iVar8 + 0x14) < DAT_013de388) {
    func_0x008ab40d(&DAT_013de388);
    if (DAT_013de388 == -1) {
      uStack_8._0_1_ = 0x1b;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de384 = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de388);
    }
  }
  pcVar2 = DAT_013de384;
  puStack_8c = (undefined4 *)0x0;
  uStack_8._0_1_ = 0x1c;
  if (*DAT_013de384 != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"D3d9_CreateDevice",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de384;
    uStack_88 = func_0x0093d430();
    puStack_8c = &uStack_88;
    pcStack_84 = pcVar2;
    pcStack_80 = "D3d9_CreateDevice";
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x40);
  _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),
                     *(undefined4 *)(param_1 + 0x1590),*(undefined4 *)(param_1 + 0x15b8),0x856,
                     auStack_170,param_1 + 0x159c);
  piVar10 = (int *)(*pcVar1)();
  piStack_40 = piVar10;
  if ((int)piVar10 < 0) {
    cVar3 = func_0x00952a70(3);
    if (cVar3 != '\0') {
      iVar8 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                              ,"rx::Renderer9::initialize",0x140,3);
      uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
      uStack_90 = 2;
      uVar5 = func_0x0046b6e0(iVar8 + 0x10,"CreateDevice1 failed: (");
      uVar11 = func_0x009529d0(&pcStack_54,piStack_40);
      uVar5 = func_0x009b9220(uVar5,uVar11,&DAT_0112e458);
      func_0x0046b6e0(uVar5);
      piVar10 = piStack_40;
    }
    uStack_8._0_1_ = 0x1c;
    uStack_8._1_3_ = 0;
    if ((uStack_90 & 2) != 0) {
      func_0x00952760();
    }
  }
  uStack_8._0_1_ = 0x1e;
  if ((puStack_8c != (undefined4 *)0x0) && (*(char *)puStack_8c[1] != '\0')) {
    func_0x009b90e0(*puStack_8c,0x45,(char *)puStack_8c[1],puStack_8c[2],0,0,0,0,0,0,0);
  }
  uStack_8._0_1_ = 1;
  if (((piVar10 == (int *)0x8876017c) || (piVar10 == (int *)0x8007000e)) ||
     (piVar10 == (int *)0x88760868)) {
    uStack_130 = 6;
    func_0x005d5720(1);
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1f);
    func_0x0046b6e0(auStack_128,"CreateDevice failed: device lost or out of memory (");
    piVar10 = (int *)func_0x009529d0(&pcStack_54,piVar10);
    iVar8 = piVar10[1];
    if (*piVar10 != 0) {
      func_0x0046b6e0(auStack_128,*piVar10);
    }
    func_0x0091fdc0(auStack_128,iVar8,&DAT_00f9ad64,0x30);
    func_0x0046b6e0(auStack_128,&DAT_0112e458);
    func_0x009b9260(piStack_2c);
    func_0x005d3940();
    uStack_8 = 0x20;
    goto LAB_009f2984;
  }
  if ((int)piVar10 < 0) {
    if (*(int *)(iStack_28 + 0x14) < DAT_013de390) {
      func_0x008ab40d(&DAT_013de390);
      if (DAT_013de390 == -1) {
        uStack_8._0_1_ = 0x21;
        uVar5 = func_0x0093d430("gpu.angle");
        DAT_013de38c = (char *)func_0x009b9170(uVar5);
        func_0x008ab3bc(&DAT_013de390);
      }
    }
    pcVar2 = DAT_013de38c;
    puStack_4c = (undefined4 *)0x0;
    uStack_8._0_1_ = 0x22;
    if (*DAT_013de38c != '\0') {
      uVar5 = func_0x0093d430();
      func_0x009b90e0(uVar5,0x42,pcVar2,"D3d9_CreateDevice2",0,0,0,0,0,0,0);
      pcVar2 = DAT_013de38c;
      uStack_48 = func_0x0093d430();
      puStack_4c = &uStack_48;
      pcStack_44 = pcVar2;
      piStack_40 = (int *)0xfbd84c;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x40);
    _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),
                       *(undefined4 *)(param_1 + 0x1590),*(undefined4 *)(param_1 + 0x15b8),0x826,
                       auStack_170,param_1 + 0x159c);
    iVar8 = (*pcVar1)();
    if (iVar8 < 0) {
      uStack_130 = 6;
      func_0x005d5720(1);
      uStack_8._0_1_ = 0x23;
      func_0x0046b6e0(auStack_128,
                      "CreateDevice2 failed: device lost, not available, or of out of memory (");
      puVar12 = (undefined4 *)func_0x009529d0(&pcStack_54,iVar8);
      iVar8 = func_0x009ea1f0(*puVar12,puVar12[1]);
      func_0x0046b6e0(iVar8 + 8,&DAT_0112e458);
      func_0x009b9260(piStack_2c);
      func_0x005d3940();
      uStack_8 = CONCAT31(uStack_8._1_3_,0x24);
      if ((puStack_4c != (undefined4 *)0x0) && (*(char *)puStack_4c[1] != '\0')) {
        func_0x009b90e0(*puStack_4c,0x45,(char *)puStack_4c[1],puStack_4c[2],0,0,0,0,0,0,0);
      }
      uStack_8 = 0x25;
      goto LAB_009f2984;
    }
    uStack_8._0_1_ = 0x26;
    if ((puStack_4c != (undefined4 *)0x0) && (*(char *)puStack_4c[1] != '\0')) {
      func_0x009b90e0(*puStack_4c,0x45,(char *)puStack_4c[1],puStack_4c[2],0,0,0,0,0,0,0);
    }
  }
  if (*(int *)(param_1 + 0x1598) != 0) {
    if (*(int *)(iStack_28 + 0x14) < DAT_013de398) {
      func_0x008ab40d(&DAT_013de398);
      if (DAT_013de398 == -1) {
        uStack_8._0_1_ = 0x27;
        uVar5 = func_0x0093d430("gpu.angle");
        DAT_013de394 = (char *)func_0x009b9170(uVar5);
        func_0x008ab3bc(&DAT_013de398);
      }
    }
    pcVar2 = DAT_013de394;
    puStack_3c = (undefined4 *)0x0;
    uStack_8._0_1_ = 0x28;
    if (*DAT_013de394 != '\0') {
      uVar5 = func_0x0093d430();
      func_0x009b90e0(uVar5,0x42,pcVar2,"mDevice_QueryInterface",0,0,0,0,0,0,0);
      pcVar2 = DAT_013de394;
      uStack_38 = func_0x0093d430();
      puStack_3c = &uStack_38;
      pcStack_34 = pcVar2;
      pcStack_30 = "mDevice_QueryInterface";
    }
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x159c);
    _guard_check_icall(*(undefined4 **)(param_1 + 0x159c),&DAT_00fbd5f4,param_1 + 0x15a0);
    (*pcVar1)();
    uStack_8._0_1_ = 0x29;
    if ((puStack_3c != (undefined4 *)0x0) && (*(char *)puStack_3c[1] != '\0')) {
      func_0x009b90e0(*puStack_3c,0x45,(char *)puStack_3c[1],puStack_3c[2],0,0,0,0,0,0,0);
    }
  }
  if (*(int *)(iStack_28 + 0x14) < DAT_013de3a0) {
    func_0x008ab40d(&DAT_013de3a0);
    if (DAT_013de3a0 == -1) {
      uStack_8._0_1_ = 0x2a;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de39c = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de3a0);
    }
  }
  pcVar2 = DAT_013de39c;
  puStack_7c = (undefined4 *)0x0;
  uStack_8._0_1_ = 0x2b;
  if (*DAT_013de39c != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"ShaderCache initialize",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de39c;
    uStack_78 = func_0x0093d430();
    puStack_7c = &uStack_78;
    pcStack_74 = pcVar2;
    pcStack_70 = "ShaderCache initialize";
  }
  *(undefined4 *)(param_1 + 0x1d54) = *(undefined4 *)(param_1 + 0x159c);
  *(undefined4 *)(param_1 + 0x1da8) = *(undefined4 *)(param_1 + 0x159c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00926640();
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x20);
  _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),auStack_24);
  (*pcVar1)();
  if (*(uint *)(param_1 + 0x1688) < 0xffff0300) {
LAB_009f2884:
    uVar4 = 0;
  }
  else {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x1594) + 0x28);
    _guard_check_icall(*(int **)(param_1 + 0x1594),*(undefined4 *)(param_1 + 0x158c),
                       *(undefined4 *)(param_1 + 0x1590),uStack_18,0x100000,3,0x6f);
    iVar8 = (*pcVar1)();
    if (iVar8 < 0) goto LAB_009f2884;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x1b45) = uVar4;
  func_0x009f2c90(&iStack_58);
  if (iStack_58 == 0x3000) {
    func_0x008a4620();
    *piStack_2c = 0x3000;
    piStack_2c[1] = 0;
    piStack_2c[2] = 0;
    uStack_8 = 0x2d;
  }
  else {
    *piStack_2c = iStack_58;
    piStack_2c[1] = (int)pcStack_54;
    piStack_2c[2] = (int)pcStack_50;
    uStack_8 = 0x2c;
  }
LAB_009f2984:
  if ((puStack_6c != (undefined4 *)0x0) && (*(char *)puStack_6c[1] != '\0')) {
    func_0x009b90e0(*puStack_6c,0x45,(char *)puStack_6c[1],puStack_6c[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009f2ed0(int param_1,undefined4 param_2)

{
  if (*(char *)(*(int *)(param_1 + 4) + 100) == '\0') {
    func_0x00a7ec90(param_2);
  }
  func_0x0095c700(param_2,*(int *)(param_1 + 4) + 8);
  return;
}



void FUN_009f2f00(undefined4 param_1)

{
  func_0x00a75b50(param_1);
  return;
}



undefined4
FUN_009f2f10(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4a113;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_4 == '\0') {
    uStack_14 = 0;
    iVar3 = func_0x009ee560(param_1,param_2,param_3,&uStack_14,uVar2);
    if (iVar3 == 1) goto LAB_009f2f73;
    iVar3 = func_0x008ab47d(0x30);
    uStack_8 = 0;
    if (iVar3 != 0) {
      uVar4 = func_0x00a825e0(param_2,param_3,uStack_14);
      goto LAB_009f302d;
    }
  }
  else {
    if (param_4 != '\x04') {
      pcVar1 = *(code **)(*param_1 + 4);
      _guard_check_icall(0x80004005,"Unreachble code reached.",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                         ,"rx::Renderer9::loadExecutable",0xa64);
      (*pcVar1)();
LAB_009f2f73:
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
    uStack_14 = 0;
    iVar3 = func_0x009ee270(param_1,param_2,param_3,&uStack_14);
    if (iVar3 == 1) goto LAB_009f2f73;
    iVar3 = func_0x008ab47d(0x30);
    uStack_8 = 1;
    if (iVar3 != 0) {
      uVar4 = func_0x00a825b0(param_2,param_3,uStack_14);
      goto LAB_009f302d;
    }
  }
  uVar4 = 0;
LAB_009f302d:
  *param_7 = uVar4;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



bool __fastcall FUN_009f35a0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int *unaff_FS_OFFSET;
  char cVar8;
  undefined1 auStack_74 [56];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4a1ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  func_0x009f32b0(uVar2);
  func_0x009f1530(auStack_74);
  iVar6 = 0;
  pcVar7 = *(code **)(*param_1 + 0xd4);
  _guard_check_icall();
  cStack_11 = (*pcVar7)();
  piVar3 = (int *)param_1[0x568];
  iStack_18 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)param_1[0x567];
    if (piVar3 != (int *)0x0) {
      pcVar7 = *(code **)(*piVar3 + 0xc);
      _guard_check_icall(piVar3);
      iStack_18 = (*pcVar7)();
    }
  }
  else {
    pcVar7 = *(code **)(*piVar3 + 0x200);
    _guard_check_icall(piVar3,0);
    iStack_18 = (*pcVar7)();
  }
  iStack_20 = 3;
  cVar8 = cStack_11;
  if (cStack_11 != '\0') {
    do {
      if (iStack_20 < 1) break;
      if (iStack_18 == -0x7789f790) {
        Sleep(800);
        func_0x009f31a0();
        pcVar7 = *(code **)(*param_1 + 0x18);
        _guard_check_icall(auStack_30);
        piVar3 = (int *)(*pcVar7)();
        iVar4 = *piVar3;
        func_0x008a4620();
        cVar8 = iVar4 != 0x3000;
      }
      else {
        if (param_1[0x568] == 0) {
          pcVar7 = *(code **)(*(int *)param_1[0x567] + 0xc);
          _guard_check_icall((int *)param_1[0x567]);
          iVar6 = (*pcVar7)();
          while (iVar6 == -0x7789f798) {
            Sleep(100);
            pcVar7 = *(code **)(*(int *)param_1[0x567] + 0xc);
            _guard_check_icall((int *)param_1[0x567]);
            iVar6 = (*pcVar7)();
          }
          if (iVar6 == -0x7789f797) {
            pcVar7 = *(code **)(*(int *)param_1[0x567] + 0x40);
            _guard_check_icall((int *)param_1[0x567],auStack_74);
            iVar6 = (*pcVar7)();
          }
          pcVar7 = *(code **)(*param_1 + 0xd4);
        }
        else {
          Sleep(500);
          pcVar7 = *(code **)(*(int *)param_1[0x568] + 0x210);
          _guard_check_icall((int *)param_1[0x568],auStack_74,0);
          iVar6 = (*pcVar7)();
          pcVar7 = *(code **)(*param_1 + 0xd4);
        }
        _guard_check_icall();
        cVar8 = (*pcVar7)();
      }
      iStack_20 = iStack_20 + -1;
    } while (cVar8 != '\0');
    if (iVar6 < 0) {
      cVar8 = func_0x00952a70(3);
      if (cVar8 != '\0') {
        iVar4 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                                ,"rx::Renderer9::resetDevice",0x8f8,3);
        uStack_8 = 0;
        uStack_1c = 1;
        uVar5 = func_0x0046b6e0(iVar4 + 0x10,"Reset/ResetEx failed multiple times, ");
        piVar3 = (int *)func_0x009529d0(auStack_24,iVar6);
        iVar6 = piVar3[1];
        if (*piVar3 != 0) {
          func_0x0046b6e0(uVar5,*piVar3);
        }
        func_0x0091fdc0(uVar5,iVar6,&DAT_00f9ad64,0x30);
      }
      bVar1 = (byte)uStack_1c & 1;
      goto LAB_009f3863;
    }
  }
  if (iStack_18 != -0x7789f790) {
    piVar3 = (int *)func_0x009f2c90(auStack_3c);
    iVar6 = *piVar3;
    func_0x008a4620();
    *unaff_FS_OFFSET = iStack_10;
    return iVar6 == 0x3000;
  }
  if (cVar8 == '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return true;
  }
  cVar8 = func_0x00952a70(3);
  if (cVar8 != '\0') {
    iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Renderer9.cpp"
                            ,"rx::Renderer9::resetDevice",0x8fe,3);
    uStack_8 = 1;
    uStack_1c = 2;
    func_0x0046b6e0(iVar6 + 0x10,"Device lost reset failed multiple times");
  }
  bVar1 = (byte)uStack_1c & 2;
LAB_009f3863:
  if (bVar1 != 0) {
    func_0x00952760();
  }
  *unaff_FS_OFFSET = iStack_10;
  return false;
}



void __fastcall FUN_009f3960(int param_1)

{
  func_0x00952a00(param_1 + 0x3158);
  return;
}



uint __fastcall FUN_009f3e30(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x15a0);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x200);
    _guard_check_icall(piVar1,0);
    uVar3 = (*pcVar2)();
    return uVar3 >> 0x1f;
  }
  piVar1 = *(int **)(param_1 + 0x159c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    _guard_check_icall(piVar1);
    uVar3 = (*pcVar2)();
  }
  return uVar3 >> 0x1f;
}



void __fastcall FUN_009f3e80(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  FARPROC pFVar4;
  int iVar5;
  int *piStack_138;
  undefined1 auStack_134 [304];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&piStack_138;
  uVar3 = 0;
  piVar1 = *(int **)(param_1 + 0x15a0);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x159c);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0xc);
      _guard_check_icall(piVar1);
      uVar3 = (*pcVar2)();
    }
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x200);
    _guard_check_icall(piVar1,0);
    uVar3 = (*pcVar2)();
  }
  switch(uVar3) {
  case 0x88760868:
    FUN_008ab370();
    return;
  case 0x88760869:
  case 0x88760874:
    FUN_008ab370();
    return;
  default:
    FUN_008ab370();
    return;
  case 0x88760870:
    break;
  }
  piStack_138 = (int *)0x0;
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x1588),"Direct3DCreate9Ex");
  if (pFVar4 != (FARPROC)0x0) {
    _guard_check_icall(0x20,&piStack_138);
    iVar5 = (*pFVar4)();
    if (-1 < iVar5) {
      pcVar2 = *(code **)(*piStack_138 + 0x38);
      _guard_check_icall(piStack_138,*(undefined4 *)(param_1 + 0x158c),
                         *(undefined4 *)(param_1 + 0x1590),auStack_134);
      (*pcVar2)();
    }
  }
  if (piStack_138 != (int *)0x0) {
    pcVar2 = *(code **)(*piStack_138 + 8);
    _guard_check_icall(piStack_138);
    (*pcVar2)();
  }
  FUN_008ab370();
  return;
}



void FUN_009f4270(undefined4 *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18c [152];
  undefined4 uStack_f4;
  undefined1 auStack_ec [156];
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int aiStack_34 [6];
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4a1f6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_3c = param_2;
  iStack_48 = param_3;
  if (param_3 == 0) {
    uStack_f4 = 0x300c;
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_ec,"NULL share handle.");
    func_0x00926aa0(param_1);
  }
  else {
    iStack_40 = func_0x008acb20(0x3057,0,uStack_14);
    iStack_44 = func_0x008acb20(0x3056,0);
    piStack_3c = (int *)func_0x00a86250(*piStack_3c);
    piStack_38 = (int *)0x0;
    pcVar1 = *(code **)(**(int **)(iStack_4c + 0x159c) + 0x5c);
    _guard_check_icall(*(int **)(iStack_4c + 0x159c),iStack_40,iStack_44,1,1,*piStack_3c,0,
                       &piStack_38,&iStack_48);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      uStack_f4 = 0x300c;
      func_0x005d5720(1);
      uStack_8 = 1;
      func_0x0046b6e0(auStack_ec,"Failed to open share handle, ");
      piVar3 = (int *)func_0x009529d0(auStack_50,iVar2);
      iVar2 = piVar3[1];
      if (*piVar3 != 0) {
        func_0x0046b6e0(auStack_ec,*piVar3);
      }
      func_0x0091fdc0(auStack_ec,iVar2,&DAT_00f9ad64,0x30);
      func_0x00926aa0(param_1);
    }
    else {
      pcVar1 = *(code **)(*piStack_38 + 0x34);
      _guard_check_icall(piStack_38);
      iStack_4c = (*pcVar1)();
      pcVar1 = *(code **)(*piStack_38 + 0x44);
      _guard_check_icall(piStack_38,0,aiStack_34);
      (*pcVar1)();
      if (piStack_38 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_38 + 8);
        _guard_check_icall(piStack_38);
        (*pcVar1)();
        piStack_38 = (int *)0x0;
      }
      if ((((iStack_4c == 1) && (iStack_1c == iStack_40)) && (iStack_18 == iStack_44)) &&
         (aiStack_34[0] == *piStack_3c)) {
        *param_1 = 0x3000;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_009f44c3;
      }
      func_0x005d5720(1);
      uStack_8 = 2;
      func_0x0046b6e0(auStack_18c,"Invalid texture parameters in share handle texture.");
      func_0x00926aa0(param_1);
    }
  }
  func_0x005d3940();
LAB_009f44c3:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_009f4560(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::EGLImageD3D::vftable;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[3];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[3] = 0;
  *param_1 = rx::ImageImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009f45b0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ImageImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __thiscall FUN_009f4630(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4a25d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  if (param_3 != iVar3) {
LAB_009f4745:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if (iVar3 == 0) {
    uStack_18 = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    uStack_14 = 0;
    iVar3 = func_0x00968fa0(param_2,0,*(int *)(param_1 + 4) + 0xc,0,&uStack_14,uVar2);
    if (iVar3 == 1) goto LAB_009f472c;
    uStack_18 = uStack_14;
  }
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = func_0x00e7307f(iVar3 + 0x48);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x74) != 0x7fffffff) {
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x80);
      iVar4 = iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x84) * 4;
      uStack_8 = 0;
      for (; iVar6 != iVar4; iVar6 = iVar6 + 4) {
        func_0x00953460(3);
      }
      uStack_8 = 0xffffffff;
      func_0x00e730b2(iVar3 + 0x48);
      pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x78);
      _guard_check_icall(param_2,uStack_18,param_1 + 0xc);
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
LAB_009f472c:
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      goto LAB_009f4745;
    }
  }
  else {
    func_0x00e7304a(5);
  }
  *(undefined4 *)(iVar3 + 0x74) = 0x7ffffffe;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 * __thiscall FUN_009f4af0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::PbufferSurfaceD3D::vftable;
  func_0x009f4990();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  return param_1;
}



undefined4 __thiscall FUN_009f4b20(undefined4 param_1,byte param_2)

{
  func_0x009f4990();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009f4b40(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::WindowSurfaceD3D::vftable;
  func_0x009f4990();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  return param_1;
}



undefined4 __thiscall
FUN_009f4d90(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_3 == 0x405) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x58) + 0x14);
  }
  else {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x58) + 0x18);
  }
  _guard_check_icall();
  uVar1 = (*pcVar2)();
  *param_6 = uVar1;
  return 0;
}



void FUN_009f4dd0(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f464b8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uStack_14);
  uStack_8 = 2;
  func_0x0046a470(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  func_0x0091ffd0(0x3002,0x3002,aiStack_2c);
  if (0xf < uStack_18) {
    uVar2 = uStack_18 + 1;
    iVar3 = aiStack_2c[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_2c[0] + -4);
      uVar2 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_009f4eb0(void)

{
  return 0x3094;
}



undefined4 __thiscall
FUN_009f4ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_ac [156];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4a2c0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x40) == '\0') {
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_ac,"getSyncValues: surface requires Direct Composition to be enabled");
    func_0x009f4a40(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x58) + 0x20);
  _guard_check_icall(param_2,param_3,param_4,param_5,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_009f4f90(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_dc [152];
  int iStack_44;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int aiStack_20 [3];
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_3c = 0xffffffff;
  puStack_40 = &DAT_00f4a303;
  iStack_44 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_38;
  *unaff_FS_OFFSET = (int)&iStack_44;
  uStack_28 = param_3;
  iStack_24 = param_1;
  if ((*(int **)(param_1 + 0x60))[1] != 0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x60) + 4);
    _guard_check_icall(uStack_8);
    cVar3 = (*pcVar2)();
    if (cVar3 == '\0') {
      func_0x005d5720(1);
      uStack_3c = 0;
      func_0x009f4a40(param_2);
      func_0x005d3940();
      goto LAB_009f5210;
    }
  }
  if (*(int *)(iStack_24 + 0x78) == 0x33a3) {
    pcVar2 = *(code **)(**(int **)(iStack_24 + 0x34) + 0x4c);
    _guard_check_icall(&iStack_34,*(undefined4 *)(*(int *)(iStack_24 + 0x30) + 8),
                       *(undefined4 *)(iStack_24 + 0x74),*(int *)(iStack_24 + 0x30) + 0xc,
                       iStack_24 + 0x40,iStack_24 + 0x44,0,0,iStack_24 + 0x54,0);
    (*pcVar2)();
    if (iStack_34 != 0x3000) {
      *param_2 = iStack_34;
      param_2[1] = iStack_30;
      param_2[2] = iStack_2c;
      goto LAB_009f5210;
    }
    func_0x008a4620();
    iVar6 = iStack_24;
    cVar3 = func_0x008ac9e0(0x309d);
    piVar1 = (int *)(iVar6 + 0x54);
    if (((cVar3 != '\0') && (*(int *)*piVar1 != 0xcb)) && (*(int *)*piVar1 != 0x46)) {
      func_0x005d5720(1);
      uStack_3c = 1;
      func_0x0046b6e0(auStack_dc,"EGL_GL_COLORSPACE may only be specified for TYPELESS textures");
      func_0x0046a470(aiStack_20);
      uStack_3c = CONCAT31(uStack_3c._1_3_,2);
      func_0x0091ffd0(0x3009,0x3009,aiStack_20);
      if (0xf < uStack_c) {
        uVar5 = uStack_c + 1;
        iVar6 = aiStack_20[0];
        if (0xfff < uVar5) {
          iVar6 = *(int *)(aiStack_20[0] + -4);
          uVar5 = uStack_c + 0x24;
          if (0x1f < (aiStack_20[0] - iVar6) - 4U) {
            func_0x008aaf66();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        func_0x008ab812(iVar6,uVar5);
      }
      func_0x005d3940();
      goto LAB_009f5210;
    }
    if ((*(int *)*piVar1 == 0xcb) && (iVar4 = func_0x008acb20(0x309d,0x308a), iVar4 == 0x3089)) {
      *piVar1 = (int)&DAT_01294738;
    }
    if ((*(int *)*piVar1 == 0x46) && (iVar4 = func_0x008acb20(0x309d,0x308a), iVar4 == 0x3089)) {
      *piVar1 = (int)&DAT_01291b94;
    }
    *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(*piVar1 + 8);
  }
  func_0x009f5460(&iStack_14,uStack_28);
  if (iStack_14 == 0x3000) {
    func_0x008a4620();
    *param_2 = 0x3000;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = iStack_14;
    param_2[1] = iStack_10;
    param_2[2] = uStack_c;
  }
LAB_009f5210:
  *unaff_FS_OFFSET = iStack_44;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_009f5240(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == 0x405) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x58) + 0x14);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
    iVar3 = func_0x009dc090(param_2,uVar2);
  }
  else {
    if ((param_3 != 0x1801) && (param_3 != 0x1802)) {
      return 0;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0x58) + 0x18);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
    iVar3 = func_0x009dc090(param_2,uVar2);
  }
  if (iVar3 != 1) {
    return 0;
  }
  return 1;
}



undefined4 __thiscall
FUN_009f52d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  func_0x009f5750(param_2,*(undefined4 *)(*(int *)(param_3 + 0x1fcc) + 0x6c),param_4,param_5,param_6
                  ,param_7,param_1);
  return param_4;
}



void __thiscall FUN_009f5300(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3d9e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_3 == 0x3200) {
    *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc);
  }
  else if (param_3 == 0x33a2) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x58) + 0x1c);
    _guard_check_icall(uVar2);
    uVar3 = (*pcVar1)();
    *param_4 = uVar3;
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_009f56e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



void __thiscall FUN_009f56f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



void __thiscall FUN_009f5700(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x6c) != param_2) {
    *(int *)(param_1 + 0x6c) = param_2;
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  return;
}



undefined4 __thiscall FUN_009f5720(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  func_0x009f5750(param_2,*(undefined4 *)(*(int *)(param_3 + 0x1fcc) + 0x6c),0,0,
                  *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),param_1);
  return uVar1;
}



undefined4 * __thiscall FUN_009f5a00(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FunctionsGL::vftable;
  FUN_004c7ec0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb48);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009f6510(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = rx::DisplayGL::vftable;
  *param_1 = rx::DisplayGL::vftable;
  func_0x009b8a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x98);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_009f6520(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::DisplayGL::vftable;
  param_1[2] = rx::DisplayGL::vftable;
  func_0x009b8a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  return param_1;
}



undefined8 * __fastcall FUN_009f6d20(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)func_0x008ab47d(8,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 4) = 0;
    *(undefined ***)puVar1 = rx::ShareGroupGL::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



void FUN_009f6d50(int param_1)

{
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}



void __fastcall FUN_009f6d60(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint unaff_ESI;
  uint *unaff_retaddr;
  undefined1 auStack_8 [8];
  
  pcVar1 = *(code **)(*param_1 + 0x74);
  _guard_check_icall(auStack_8);
  puVar4 = (uint *)(*pcVar1)();
  if ((unaff_ESI < *puVar4) || ((unaff_ESI <= *puVar4 && (3 < puVar4[1])))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  puVar5 = (uint *)&stack0xffffffec;
  if (!bVar3) {
    puVar5 = puVar4;
  }
  uVar2 = puVar5[1];
  *unaff_retaddr = *puVar5;
  unaff_retaddr[1] = uVar2;
  return;
}



void __thiscall FUN_009f6dd0(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cb3d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0xb4);
  _guard_check_icall(uStack_14);
  iVar2 = (*pcVar1)();
  func_0x00a01f20(&iStack_2c,*(undefined4 *)(iVar2 + 0x10));
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xb4);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if (*(char *)(iVar2 + 0x1a70) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *param_2 = iStack_2c;
    param_2[1] = iStack_28;
    param_2[2] = iStack_24;
    param_2[3] = iStack_20;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_18,uStack_1c);
  }
  else {
    func_0x00469da0(&iStack_2c);
    func_0x009f6550(param_2);
    if (0xf < uStack_18) {
      uVar3 = uStack_18 + 1;
      iVar2 = iStack_2c;
      if (0xfff < uVar3) {
        iVar2 = *(int *)(iStack_2c + -4);
        uVar3 = uStack_18 + 0x24;
        if (0x1f < (iStack_2c - iVar2) - 4U) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(iVar2,uVar3);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_009f6ef0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0xb4);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  func_0x00a02700(param_2,*(undefined4 *)(iVar2 + 0x10));
  return param_2;
}



void __thiscall FUN_009f6f30(int *param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cb3d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = (uint)param_3;
  pcVar1 = *(code **)(*param_1 + 0xb4);
  _guard_check_icall(uStack_14);
  iVar2 = (*pcVar1)();
  func_0x00a02750(aiStack_2c,*(undefined4 *)(iVar2 + 0x10));
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xb4);
  _guard_check_icall();
  (*pcVar1)();
  func_0x00469da0(aiStack_2c);
  func_0x009f66a0(param_2);
  if (0xf < uStack_18) {
    uVar3 = uStack_18 + 1;
    iVar2 = aiStack_2c[0];
    if (0xfff < uVar3) {
      iVar2 = *(int *)(aiStack_2c[0] + -4);
      uVar3 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar2) - 4U) {
        func_0x008aaf66(uStack_30);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar2,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009f7030(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  func_0x00952a00(param_3 + 0x274);
  if (param_6 != 0) {
    func_0x00ab52e0();
    func_0x00ab7840();
    if (param_4 == 0) {
      pcVar1 = *(code **)(*param_1 + 0xb8);
      _guard_check_icall(&iStack_c,param_6);
      (*pcVar1)();
      if (iStack_c != 0x3000) {
        *param_2 = iStack_c;
        param_2[1] = iStack_8;
        param_2[2] = (int)piStack_4;
        return;
      }
      if (piStack_4 != (int *)0x0) {
        uVar2 = piStack_4[5];
        if (0xf < uVar2) {
          iVar3 = *piStack_4;
          uVar5 = uVar2 + 1;
          iVar4 = iVar3;
          if (0xfff < uVar5) {
            iVar4 = *(int *)(iVar3 + -4);
            uVar5 = uVar2 + 0x24;
            if (0x1f < (iVar3 - iVar4) - 4U) {
              func_0x008aaf66();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          func_0x008ab812(iVar4,uVar5);
        }
        piStack_4[4] = 0;
        piStack_4[5] = 0xf;
        *(undefined1 *)piStack_4 = 0;
        func_0x008ab812(piStack_4,0x18);
      }
    }
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void FUN_009f7130(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void _vsscanf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    // 0x6049e0  109  _vsscanf_l
  puVar1 = (undefined4 *)func_0x00877a80(param_1,0xffffffff,param_2,param_3,param_4);
  func_0x008ab076(*puVar1,puVar1[1]);
  return;
}



int __cdecl sscanf(char *_Src,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x604a10  147  sscanf
  puVar1 = (undefined4 *)func_0x00877a80(_Src,0xffffffff,_Format,0,&stack0x0000000c);
  iVar2 = func_0x008ab076(*puVar1,puVar1[1]);
  return iVar2;
}



undefined4 __thiscall FUN_00a06380(undefined4 param_1,byte param_2)

{
  func_0x00a06180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c00);
  }
  return param_1;
}



void FUN_00a063b0(undefined4 param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  undefined **ppuVar11;
  int *unaff_FS_OFFSET;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  undefined4 ***pppuStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 ***pppuStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
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
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c245;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_64 = (char *)param_4;
  uStack_60 = 0;
  pcVar5 = (char *)func_0x0093df30(param_1,uStack_14);
  uStack_4c = 0;
  uStack_48 = 0;
  pppuStack_5c = (undefined4 ****)0x0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  pcVar8 = pcVar5;
  do {
    cVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar4 != '\0');
  func_0x0046bc40(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
  uStack_8 = 0;
  pcVar5 = (char *)func_0x0093df90(param_2);
  uStack_34 = 0;
  uStack_30 = 0;
  pppuStack_44 = (undefined4 ****)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  pcVar8 = pcVar5;
  do {
    cVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar4 != '\0');
  func_0x0046bc40(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
  uStack_8._0_1_ = 1;
  pcVar5 = (char *)func_0x0093dee0(pcStack_64);
  uStack_1c = 0;
  uStack_18 = 0;
  pppuStack_2c = (undefined4 ****)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  pcStack_64 = pcVar5 + 1;
  pcVar8 = pcVar5;
  do {
    cVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar4 != '\0');
  func_0x0046bc40(pcVar5,(int)pcVar8 - (int)pcStack_64);
  uStack_8._0_1_ = 2;
  uVar3 = (undefined1)uStack_8;
  uStack_8._0_1_ = 2;
  if (param_2 == 0x824c) {
    cVar4 = func_0x00952a70(3);
    if (cVar4 != '\0') {
      iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RendererGL.cpp"
                              ,"LogGLDebugMessage",0x72,3);
      uStack_8._0_1_ = 3;
      uStack_60 = 1;
      uVar7 = func_0x004849e0(iVar6 + 0x10);
      uVar7 = func_0x0046b6e0(uVar7,"\tSource: ");
      ppppuVar9 = &pppuStack_5c;
      if (0xf < uStack_48) {
        ppppuVar9 = (undefined4 ****)pppuStack_5c;
      }
      uVar7 = func_0x0046cb10(uVar7,ppppuVar9,uStack_4c);
      uVar7 = func_0x004849e0(uVar7);
      uVar7 = func_0x0046b6e0(uVar7,"\tType: ");
      ppppuVar9 = &pppuStack_44;
      if (0xf < uStack_30) {
        ppppuVar9 = (undefined4 ****)pppuStack_44;
      }
      uVar7 = func_0x0046cb10(uVar7,ppppuVar9,uStack_34);
      uVar7 = func_0x004849e0(uVar7);
      uVar7 = func_0x0046b6e0(uVar7,"\tID: ");
      pcStack_64 = param_3;
      uStack_68 = 0;
      uVar7 = func_0x008c2c60(uVar7,&uStack_68);
      uVar7 = func_0x004849e0(uVar7);
      uVar7 = func_0x0046b6e0(uVar7,"\tSeverity: ");
      ppppuVar9 = &pppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar9 = (undefined4 ****)pppuStack_2c;
      }
      uVar7 = func_0x0046cb10(uVar7,ppppuVar9,uStack_1c);
      uVar7 = func_0x004849e0(uVar7);
      uVar7 = func_0x0046b6e0(uVar7,"\tMessage: ",param_6);
      func_0x0046b6e0(uVar7);
    }
    bVar2 = (byte)uStack_60 & 1;
LAB_00a066fc:
    if (bVar2 != 0) {
      func_0x00952760();
    }
  }
  else {
    uStack_8._0_1_ = uVar3;
    if (param_2 != 0x8250) {
      ppuVar11 = &PTR_s_extension__GL_ARB_gpu_shader5__u_0129529c;
      do {
        iVar6 = func_0x00e87d34(param_6,*ppuVar11);
        if (iVar6 != 0) goto LAB_00a06709;
        ppuVar11 = ppuVar11 + 1;
      } while (ppuVar11 != (undefined **)&DAT_012952a4);
      cVar4 = func_0x00952a70(2);
      if (cVar4 != '\0') {
        iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RendererGL.cpp"
                                ,"LogGLDebugMessage",0x87,2);
        uStack_8._0_1_ = 4;
        uStack_60 = 2;
        uVar7 = func_0x004849e0(iVar6 + 0x10);
        uVar7 = func_0x0046b6e0(uVar7,"\tSource: ");
        ppppuVar9 = &pppuStack_5c;
        if (0xf < uStack_48) {
          ppppuVar9 = (undefined4 ****)pppuStack_5c;
        }
        uVar7 = func_0x0046cb10(uVar7,ppppuVar9,uStack_4c);
        uVar7 = func_0x004849e0(uVar7);
        uVar7 = func_0x0046b6e0(uVar7,"\tType: ");
        ppppuVar9 = &pppuStack_44;
        if (0xf < uStack_30) {
          ppppuVar9 = (undefined4 ****)pppuStack_44;
        }
        uVar7 = func_0x0046cb10(uVar7,ppppuVar9,uStack_34);
        uVar7 = func_0x004849e0(uVar7);
        uVar7 = func_0x0046b6e0(uVar7,"\tID: ");
        pcStack_64 = param_3;
        uStack_68 = 0;
        uVar7 = func_0x008c2c60(uVar7,&uStack_68);
        uVar7 = func_0x004849e0(uVar7);
        uVar7 = func_0x0046b6e0(uVar7,"\tSeverity: ");
        ppppuVar9 = &pppuStack_2c;
        if (0xf < uStack_18) {
          ppppuVar9 = (undefined4 ****)pppuStack_2c;
        }
        uVar7 = func_0x0046cb10(uVar7,ppppuVar9,uStack_1c);
        uVar7 = func_0x004849e0(uVar7);
        uVar7 = func_0x0046b6e0(uVar7,"\tMessage: ",param_6);
        func_0x0046b6e0(uVar7);
      }
      bVar2 = (byte)uStack_60 & 2;
      goto LAB_00a066fc;
    }
  }
LAB_00a06709:
  if (0xf < uStack_18) {
    uVar10 = uStack_18 + 1;
    ppppuVar9 = (undefined4 ****)pppuStack_2c;
    if (0xfff < uVar10) {
      ppppuVar9 = (undefined4 ****)pppuStack_2c[-1];
      uVar10 = uStack_18 + 0x24;
      if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar9))) goto LAB_00a067de;
    }
    func_0x008ab812(ppppuVar9,uVar10);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
  if (0xf < uStack_30) {
    uVar10 = uStack_30 + 1;
    ppppuVar9 = (undefined4 ****)pppuStack_44;
    if (0xfff < uVar10) {
      ppppuVar9 = (undefined4 ****)pppuStack_44[-1];
      uVar10 = uStack_30 + 0x24;
      if (0x1f < (uint)((int)pppuStack_44 + (-4 - (int)ppppuVar9))) goto LAB_00a067de;
    }
    func_0x008ab812(ppppuVar9,uVar10);
  }
  uStack_34 = 0;
  uStack_30 = 0xf;
  pppuStack_44 = (undefined4 ***)((uint)pppuStack_44 & 0xffffff00);
  if (0xf < uStack_48) {
    uVar10 = uStack_48 + 1;
    ppppuVar9 = (undefined4 ****)pppuStack_5c;
    if (0xfff < uVar10) {
      ppppuVar9 = (undefined4 ****)pppuStack_5c[-1];
      uVar10 = uStack_48 + 0x24;
      if (0x1f < (uint)((int)pppuStack_5c + (-4 - (int)ppppuVar9))) {
LAB_00a067de:
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(ppppuVar9,uVar10);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00a09420(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::RendererWGL::vftable;
  if (param_1[0x702] != 0) {
    func_0x009bf010(param_1[0x702],uVar3);
  }
  func_0x009bf010(param_1[0x701],uVar3);
  param_1[0x701] = 0;
  iVar1 = param_1[0x703];
  if (iVar1 != 0) {
    uVar3 = param_1[0x705] - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar2)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar3);
    param_1[0x703] = 0;
    param_1[0x704] = 0;
    param_1[0x705] = 0;
  }
  func_0x00a06180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00a09520(int param_1,undefined4 param_2)

{
  func_0x009beaa0(param_2,*(undefined4 *)(param_1 + 0x1c08),param_1 + 0x1c0c);
  return;
}



undefined4 * __thiscall FUN_00a09650(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  *param_1 = rx::ContextWGL::vftable;
  piVar2 = (int *)param_1[0xd];
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
  func_0x00ab34f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a097d0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::D3DTextureSurfaceWGL::vftable;
  piVar1 = (int *)param_1[0x1a];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[0x1a] = 0;
  }
  piVar1 = (int *)param_1[0x1b];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[0x1b] = 0;
  }
  if (param_1[0x19] != 0) {
    if (param_1[0x1d] != 0) {
      pcVar2 = *(code **)(param_1[0x14] + 0xa8);
      _guard_check_icall(param_1[0x19],param_1[0x1d]);
      (*pcVar2)();
      param_1[0x1d] = 0;
    }
    func_0x00ab7170(param_1[0x1f]);
    func_0x00ab7170(param_1[0x20]);
    func_0x00ab6ff0(param_1[0x1e]);
    if (param_1[0x1c] != 0) {
      pcVar2 = *(code **)(param_1[0x14] + 0xa8);
      _guard_check_icall(param_1[0x19],param_1[0x1c]);
      (*pcVar2)();
      param_1[0x1c] = 0;
    }
    func_0x009c1e50(param_1[0x19]);
    param_1[0x19] = 0;
  }
  *param_1 = rx::SurfaceWGL::vftable;
  func_0x00ad7340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x84);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a09900(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SurfaceWGL::vftable;
  func_0x00ad7340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



void __thiscall FUN_00a0a1f0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 unaff_EDI;
  int aiStack_8 [2];
  
  iVar1 = *(int *)(param_4 + 0x338);
  aiStack_8[0] = *(int *)(param_1 + 0x78);
  if (aiStack_8[0] == 0) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0x3b8);
    _guard_check_icall(1,aiStack_8);
    (*pcVar2)();
    func_0x00ab6ac0(0x8d40,unaff_EDI);
    pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0x3a4);
    _guard_check_icall(0x8d40,0x8ce0,0x8d41,*(undefined4 *)(param_1 + 0x7c));
    (*pcVar2)();
    if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 8) + 0x40)) {
      pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0x3a4);
      _guard_check_icall(0x8d40,0x8d00,0x8d41,*(undefined4 *)(param_1 + 0x80));
      (*pcVar2)();
    }
    if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 8) + 0x78)) {
      pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0x3a4);
      _guard_check_icall(0x8d40,0x8d20,0x8d41,*(undefined4 *)(param_1 + 0x80));
      (*pcVar2)();
    }
    *(int *)(param_1 + 0x78) = aiStack_8[0];
  }
  *(int *)(iVar1 + 8) = aiStack_8[0];
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



undefined4 * __thiscall FUN_00a0a300(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_15c [152];
  undefined4 uStack_c4;
  undefined1 auStack_bc [152];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c70b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x50) + 0xa4);
  _guard_check_icall(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                     *(undefined4 *)(*(int *)(param_4 + 0x140) + 0xa4),0xde1,1,uVar2);
  iVar3 = (*pcVar1)();
  *(int *)(param_1 + 0x70) = iVar3;
  if (iVar3 == 0) {
    DVar4 = GetLastError();
    uStack_c4 = 0x3003;
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_bc,"Failed to register D3D object, ");
    piVar5 = (int *)func_0x009529b0(auStack_1c,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_bc,*piVar5);
    }
    func_0x009baba0(auStack_bc,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x50) + 0xb0);
  _guard_check_icall(*(undefined4 *)(param_1 + 100),1,param_1 + 0x70);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    DVar4 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 1;
    func_0x0046b6e0(auStack_15c,"Failed to lock object, ");
    piVar5 = (int *)func_0x009529b0(auStack_24,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_15c,*piVar5);
    }
    func_0x009baba0(auStack_15c,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_00a0a510(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(*(int *)(param_3 + 0x338) + 8) = 0;
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 FUN_00a0a540(void)

{
  return 1;
}



void __thiscall FUN_00a0a550(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_198 [152];
  undefined4 uStack_100;
  undefined1 auStack_f8 [152];
  undefined1 auStack_60 [12];
  int iStack_54;
  int iStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  int aiStack_2c [3];
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c75b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_44 = (undefined4 *)(param_1 + 0x68);
  piStack_38 = param_2;
  puStack_48 = (undefined4 *)(param_1 + 0x5c);
  puStack_40 = (undefined4 *)(param_1 + 0x58);
  piStack_34 = (int *)0x0;
  iStack_30 = param_1;
  func_0x00a09ea0(&iStack_20,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                  *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),param_1 + 0x58,
                  puStack_48,param_1 + 0x60,puStack_44,&piStack_34,uStack_14);
  piVar5 = piStack_38;
  if (iStack_20 == 0x3000) {
    func_0x008a4620();
    if ((((*(int *)(param_1 + 0x60) == 0) || (cVar2 = func_0x008ac9e0(0x309d), cVar2 == '\0')) ||
        (**(int **)(param_1 + 0x60) == 0xcb)) || (**(int **)(param_1 + 0x60) == 0x46)) {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x68);
      _guard_check_icall(*(undefined4 **)(param_1 + 0x68),&DAT_00fc3754,iStack_30 + 0x6c);
      (*pcVar1)();
      iVar3 = iStack_30;
      puStack_3c = (undefined4 *)(iStack_30 + 100);
      func_0x009c1c30(&iStack_54,piStack_34,puStack_3c);
      uStack_8 = 2;
      if (piStack_34 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_34 + 8);
        _guard_check_icall(piStack_34);
        (*pcVar1)();
        iVar3 = iStack_30;
      }
      if (iStack_54 == 0x3000) {
        puVar9 = (undefined4 *)(iStack_30 + 0x7c);
        pcVar1 = *(code **)(*(int *)(iVar3 + 0x4c) + 0x3bc);
        _guard_check_icall(1,puVar9);
        (*pcVar1)();
        iVar3 = iStack_30;
        func_0x00ab6c70(0x8d41,*puVar9);
        pcVar1 = *(code **)(*(int *)(iVar3 + 0x50) + 0xa4);
        _guard_check_icall(*puStack_3c,*puStack_44,*puVar9,0x8d41,1);
        iVar3 = (*pcVar1)();
        *(int *)(iStack_30 + 0x74) = iVar3;
        if (iVar3 == 0) {
          uStack_100 = 0x3003;
          func_0x005d5720(1);
          uStack_8 = CONCAT31(uStack_8._1_3_,3);
          func_0x0046b6e0(auStack_f8,"Failed to register D3D object, ");
          DVar4 = GetLastError();
          piVar5 = (int *)func_0x009529b0(auStack_60,DVar4 & 0xffff);
          iVar3 = piVar5[1];
          if (*piVar5 != 0) {
            func_0x0046b6e0(auStack_f8,*piVar5);
          }
          func_0x009baba0(auStack_f8,iVar3,&DAT_00f9ad64,0x30);
          func_0x009b9260(piStack_38);
          func_0x005d3940();
        }
        else {
          puStack_3c = *(undefined4 **)(*(int *)(iStack_30 + 0x30) + 8);
          if (puStack_3c[1] != 0) {
            puVar9 = (undefined4 *)(iStack_30 + 0x80);
            pcVar1 = *(code **)(*(int *)(iStack_30 + 0x4c) + 0x3bc);
            _guard_check_icall(1,puVar9);
            (*pcVar1)();
            iVar3 = iStack_30;
            func_0x00ab6c70(0x8d41,*puVar9);
            pcVar1 = *(code **)(*(int *)(iVar3 + 0x4c) + 0x40c);
            _guard_check_icall(0x8d41,puStack_3c[1],*puStack_40,*puStack_48);
            (*pcVar1)();
          }
          *piStack_38 = 0x3000;
          piStack_38[1] = 0;
          piStack_38[2] = 0;
        }
        if (piStack_4c != (int *)0x0) {
          uVar7 = piStack_4c[5];
          if (0xf < uVar7) {
            iVar3 = *piStack_4c;
            uVar8 = uVar7 + 1;
            iVar6 = iVar3;
            if (0xfff < uVar8) {
              iVar6 = *(int *)(iVar3 + -4);
              uVar8 = uVar7 + 0x24;
              if (0x1f < (iVar3 - iVar6) - 4U) goto LAB_00a0a927;
            }
            func_0x008ab812(iVar6,uVar8);
          }
          piStack_4c[4] = 0;
          piStack_4c[5] = 0xf;
          *(undefined1 *)piStack_4c = 0;
          func_0x008ab812(piStack_4c,0x18);
        }
      }
      else {
        *piVar5 = iStack_54;
        piVar5[1] = iStack_50;
        piVar5[2] = (int)piStack_4c;
      }
    }
    else {
      func_0x005d5720(1);
      uStack_8 = 0;
      func_0x0046b6e0(auStack_198,"EGL_GL_COLORSPACE may only be specified for TYPELESS textures");
      func_0x0046a470(aiStack_2c);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      func_0x0091ffd0(0x3009,0x3009,aiStack_2c);
      if (0xf < uStack_18) {
        uVar7 = uStack_18 + 1;
        iVar3 = aiStack_2c[0];
        if (0xfff < uVar7) {
          iVar3 = *(int *)(aiStack_2c[0] + -4);
          uVar7 = uStack_18 + 0x24;
          if (0x1f < (aiStack_2c[0] - iVar3) - 4U) {
LAB_00a0a927:
            func_0x008aaf66();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        func_0x008ab812(iVar3,uVar7);
      }
      func_0x005d3940();
    }
  }
  else {
    piStack_38[1] = iStack_1c;
    *piStack_38 = iStack_20;
    piStack_38[2] = uStack_18;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00a0a930(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [152];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c7a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x50) + 0xb0);
  _guard_check_icall(*(undefined4 *)(param_1 + 100),1,param_1 + 0x74,uVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    DVar4 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_b4,"Failed to lock object, ");
    piVar5 = (int *)func_0x009529b0(auStack_1c,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_b4,*piVar5);
    }
    func_0x009baba0(auStack_b4,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00a0aa50(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  if (param_3 == 0x3200) {
    if (*(int *)(param_1 + 0x34) == 0x3200) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if (param_3 != 0x33a2) goto LAB_00a0aa9e;
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
  }
  *param_4 = uVar2;
LAB_00a0aa9e:
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_00a0aad0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_15c [152];
  undefined4 uStack_c4;
  undefined1 auStack_bc [152];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c70b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x50) + 0xb4);
  _guard_check_icall(*(undefined4 *)(param_1 + 100),1,param_1 + 0x70,uVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    DVar4 = GetLastError();
    uStack_c4 = 0x3003;
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_bc,"Failed to unlock object, ");
    piVar5 = (int *)func_0x009529b0(auStack_1c,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_bc,*piVar5);
    }
    func_0x009baba0(auStack_bc,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x50) + 0xa8);
  _guard_check_icall(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70));
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    DVar4 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 1;
    func_0x0046b6e0(auStack_15c,"Failed to unregister D3D object, ");
    piVar5 = (int *)func_0x009529b0(auStack_24,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_15c,*piVar5);
    }
    func_0x009baba0(auStack_15c,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00a0acc0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [152];
  undefined1 auStack_1c [12];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c7a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x50) + 0xb4);
  _guard_check_icall(*(undefined4 *)(param_1 + 100),1,param_1 + 0x74,uVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    DVar4 = GetLastError();
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_b4,"Failed to unlock object, ");
    piVar5 = (int *)func_0x009529b0(auStack_1c,DVar4 & 0xffff);
    iVar3 = piVar5[1];
    if (*piVar5 != 0) {
      func_0x0046b6e0(auStack_b4,*piVar5);
    }
    func_0x009baba0(auStack_b4,iVar3,&DAT_00f9ad64,0x30);
    func_0x009b9260(param_2);
    func_0x005d3940();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00a0af60(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::DXGISwapChainWindowSurfaceWGL::vftable;
  if (param_1[0x1c] != 0) {
    pcVar1 = *(code **)(param_1[0x10] + 0xb4);
    _guard_check_icall(param_1[0x12],1,param_1 + 0x1c,uVar3);
    (*pcVar1)();
    pcVar1 = *(code **)(param_1[0x10] + 0xa8);
    _guard_check_icall(param_1[0x12],param_1[0x1c]);
    (*pcVar1)();
  }
  if (param_1[0x1a] != 0) {
    func_0x00ab6ff0(param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  if (param_1[0x1b] != 0) {
    func_0x00ab7170(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  if (param_1[0x1d] != 0) {
    func_0x00ab7170(param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  piVar2 = (int *)param_1[0x18];
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
    param_1[0x18] = 0;
  }
  piVar2 = (int *)param_1[0x19];
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
    param_1[0x19] = 0;
  }
  *param_1 = rx::SurfaceWGL::vftable;
  func_0x00ad7340();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x90);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00a0b090(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_EBP;
  int iVar3;
  int *piVar4;
  int iStack_10;
  int *piStack_c;
  int iStack_8;
  
  iVar3 = *(int *)(param_4 + 0x338);
  iStack_10 = *(int *)(param_1 + 0x68);
  if (iStack_10 == 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3b8);
    iStack_8 = iVar3;
    _guard_check_icall(1,&iStack_10);
    (*pcVar1)();
    func_0x00ab6ac0(0x8d40,unaff_EBP);
    pcVar1 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3a4);
    _guard_check_icall(0x8d40,0x8ce0,0x8d41,*(undefined4 *)(param_1 + 0x6c));
    (*pcVar1)();
    piVar4 = (int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x58) != 0) {
      iVar2 = func_0x00946ea0(*(int *)(param_1 + 0x58));
      if (*(int *)(iVar2 + 0x24) != 0) {
        pcVar1 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3a4);
        _guard_check_icall(0x8d40,0x8d00,0x8d41,*(undefined4 *)(param_1 + 0x74));
        (*pcVar1)();
      }
      piStack_c = (int *)(param_1 + 0x68);
      iVar3 = iStack_8;
      if (*(int *)(iVar2 + 0x28) != 0) {
        pcVar1 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3a4);
        _guard_check_icall(0x8d40,0x8d20,0x8d41,*(undefined4 *)(param_1 + 0x74));
        (*pcVar1)();
        iVar3 = iStack_8;
        piVar4 = piStack_c;
      }
    }
    *piVar4 = iStack_10;
  }
  *(int *)(iVar3 + 8) = iStack_10;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



undefined4 * __thiscall FUN_00a0b1c0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_160 [152];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [152];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c7e6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = *(undefined4 *)(*(int *)(param_4 + 0x140) + 0xa4);
  piStack_14 = (int *)0x0;
  pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x24);
  _guard_check_icall(*(int **)(param_1 + 0x60),0,&DAT_00fbd348,&piStack_14,uVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 < 0) {
    uStack_c8 = 0x3003;
    func_0x005d5720();
    uStack_8 = 0;
    func_0x0046b6e0(auStack_c0,"Failed to query texture from swap chain, ");
    piVar4 = (int *)func_0x009529d0(auStack_1c,iVar3);
    iVar3 = piVar4[1];
    if (*piVar4 != 0) {
      func_0x0046b6e0(auStack_c0,*piVar4);
    }
    func_0x0091fdc0(auStack_c0,iVar3,&DAT_00f9ad64,0x30);
  }
  else {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xa4);
    _guard_check_icall(*(undefined4 *)(param_1 + 0x48),piStack_14,uStack_18,0xde1,1);
    uVar5 = (*pcVar1)();
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    if (piStack_14 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_14 + 8);
      _guard_check_icall(piStack_14);
      (*pcVar1)();
      piStack_14 = (int *)0x0;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xb0);
      _guard_check_icall(*(undefined4 *)(param_1 + 0x48),1,(int *)(param_1 + 0x7c));
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x78) = uStack_18;
        *param_2 = 0x3000;
        param_2[1] = 0;
        param_2[2] = 0;
        *unaff_FS_OFFSET = iStack_10;
        return param_2;
      }
      pcVar1 = *(code **)(*(int *)(param_1 + 0x40) + 0xa8);
      _guard_check_icall(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x7c));
      (*pcVar1)();
      *(undefined4 *)(param_1 + 0x7c) = 0;
      func_0x005d5720(1);
      uStack_8 = 2;
      func_0x0046b6e0(auStack_160,"Failed to lock D3D object, ");
      DVar6 = GetLastError();
      piVar4 = (int *)func_0x009529b0(auStack_28,DVar6 & 0xffff);
      iVar3 = piVar4[1];
      if (*piVar4 != 0) {
        func_0x0046b6e0(auStack_160,*piVar4);
      }
      func_0x009baba0(auStack_160,iVar3,&DAT_00f9ad64,0x30);
      func_0x009b9260(param_2);
      goto LAB_00a0b2ae;
    }
    uStack_c8 = 0x3003;
    func_0x005d5720(1);
    uStack_8 = 1;
    func_0x0046b6e0(auStack_c0,"Failed to register D3D object, ");
    DVar6 = GetLastError();
    piVar4 = (int *)func_0x009529b0(auStack_1c,DVar6 & 0xffff);
    iVar3 = piVar4[1];
    if (*piVar4 != 0) {
      func_0x0046b6e0(auStack_c0,*piVar4);
    }
    func_0x009baba0(auStack_c0,iVar3,&DAT_00f9ad64,0x30);
  }
  func_0x009b9260(param_2);
LAB_00a0b2ae:
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 FUN_00a0be30(void)

{
  return 0x3095;
}



void __thiscall FUN_00a0be40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_180 [152];
  undefined4 uStack_e8;
  undefined1 auStack_e0 [156];
  undefined4 uStack_44;
  int iStack_40;
  int aiStack_3c [5];
  uint uStack_28;
  tagRECT tStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4c903;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_44 = param_2;
  iStack_40 = param_1;
  uStack_14 = uVar3;
  if (*(int *)(param_1 + 0x8c) == 2) {
    BVar4 = GetClientRect(*(HWND *)(param_1 + 0x34),&tStack_24);
    if (BVar4 == 0) {
      func_0x005d5720(1,uVar3);
      uStack_8 = 2;
      func_0x0046b6e0(auStack_180,"Failed to query the window size.");
      func_0x00a0aeb0(param_2);
      func_0x005d3940();
    }
    else {
      *(LONG *)(param_1 + 0x80) = tStack_24.right - tStack_24.left;
      *(LONG *)(param_1 + 0x84) = tStack_24.bottom - tStack_24.top;
      *(undefined4 *)(param_1 + 0x50) = 0x1c;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0x88f0;
      pcVar2 = *(code **)(*(int *)(param_1 + 0x3c) + 0x3bc);
      _guard_check_icall(1,(undefined4 *)(param_1 + 0x6c));
      (*pcVar2)();
      iVar5 = iStack_40;
      func_0x00ab6c70(0x8d41,*(undefined4 *)(param_1 + 0x6c));
      puVar1 = (undefined4 *)(iVar5 + 0x74);
      pcVar2 = *(code **)(*(int *)(iVar5 + 0x3c) + 0x3bc);
      _guard_check_icall(1,puVar1);
      (*pcVar2)();
      func_0x00ab6c70(0x8d41,*puVar1);
      func_0x00a0b610(param_2);
    }
  }
  else {
    uStack_e8 = 0x3004;
    func_0x005d5720(1,uVar3);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_e0,
                    "DXGISwapChainWindowSurfaceWGL requires an orientation of EGL_SURFACE_ORIENTATION_INVERT_Y_ANGLE."
                   );
    func_0x0046a470(aiStack_3c);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x0091ffd0(0x3004,uStack_e8,aiStack_3c);
