


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __fastcall FUN_00df4640(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_EBP;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar3 = func_0x00e7307f(param_1 + 0x60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
    if (iVar3 != 0x7fffffff) {
      iVar3 = *(int *)(param_1 + 4);
      uVar7 = func_0x00e87db0((ulonglong)*(uint *)(iVar3 + 0xe0) * 1000000000,
                              *(undefined4 *)(iVar3 + 4));
      uVar5 = *(uint *)(iVar3 + 0xe8);
      iVar1 = *(int *)(iVar3 + 0xec);
      *unaff_EBP = (uint)uVar7 + *(uint *)(iVar3 + 0xe8);
      unaff_EBP[1] = (int)((ulonglong)uVar7 >> 0x20) + iVar1 + (uint)CARRY4((uint)uVar7,uVar5);
      lVar8 = (ulonglong)*(uint *)(param_1 + 0x5c) * 1000000000;
      *(longlong *)(unaff_EBP + 2) = lVar8;
      uVar7 = func_0x00e87db0(lVar8,*(undefined4 *)(param_1 + 0x38),0);
      *(undefined8 *)(unaff_EBP + 2) = uVar7;
      iVar3 = *(int *)(param_1 + 0x30);
      if (iVar3 != 0) {
        uVar5 = *(uint *)(iVar3 + 0xc) - 0x18;
        uVar6 = uVar5 * 0x10000;
        lVar8 = func_0x00e87d70(uVar6 + *(uint *)(iVar3 + 0x10),
                                ((uint)(*(uint *)(iVar3 + 0xc) < 0x18) * -0x10000 | uVar5 >> 0x10) +
                                (uint)CARRY4(uVar6,*(uint *)(iVar3 + 0x10)),0x1dcd65,0);
        uVar7 = func_0x00e87ec0(lVar8,0x80);
        lVar9 = func_0x00e87ec0(uVar7,*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
        _DAT_00000008 = lVar8 + lVar9;
        lVar10 = func_0x00e87db0((ulonglong)*(uint *)(param_1 + 0x2c) * 1000000000,
                                 *(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
        _DAT_00000008 = lVar8 + lVar9 + lVar10;
        unaff_EBP = (int *)0x0;
      }
      func_0x00e730b2(param_1 + 0x60);
      return unaff_EBP;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x8c) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  piVar4 = (int *)(*pcVar2)();
  return piVar4;
}



undefined ** FUN_00df4780(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e02c8) {
    func_0x008ab40d(&DAT_013e02c8);
    if (DAT_013e02c8 == -1) {
      func_0x008ab7fd(FUN_00f75af0);
      func_0x008ab3bc(&DAT_013e02c8);
    }
  }
  return &PTR_vftable_012ba674;
}



void __fastcall FUN_00df4d50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  uint uStack_b8;
  int aiStack_a8 [9];
  int *piStack_84;
  undefined1 *puStack_80;
  int iStack_7c;
  undefined *puStack_78;
  int iStack_74;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined ***pppuStack_4c;
  int *piStack_48;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int aiStack_30 [9];
  int *piStack_c;
  uint uStack_8;
  
  iStack_74._0_1_ = 0xff;
  iStack_74._1_3_ = 0xffffff;
  puStack_78 = &DAT_00f6da75;
  iStack_7c = *unaff_FS_OFFSET;
  uStack_b8 = DAT_0128fd40 ^ (uint)&ppuStack_70;
  puStack_80 = (undefined1 *)&uStack_b8;
  *unaff_FS_OFFSET = (int)&iStack_7c;
  iVar3 = param_1[1];
  piVar1 = param_1 + 1;
  iVar8 = iVar3 + 0x14;
  piStack_3c = piVar1;
  piStack_38 = param_1;
  piStack_34 = param_1;
  uStack_8 = uStack_b8;
  iVar6 = func_0x00e7307f(iVar8);
  if (iVar6 == 0) {
    if (*(int *)(iVar3 + 0x40) != 0x7fffffff) {
      if (*(int *)(iVar3 + 4) == 2) {
        func_0x00e730b2(iVar8);
        (**(code **)(*(int *)*piVar1 + 4))(1,0,0,(int *)*piVar1 + 3);
LAB_00df4f84:
        *unaff_FS_OFFSET = iStack_7c;
        FUN_008ab370();
        return;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      func_0x00e730b2(iVar8);
      piStack_48 = aiStack_a8;
      ppuStack_70 = std::_Func_impl_no_alloc<>::vftable;
      iStack_6c = piStack_38[3];
      iStack_74._0_1_ = 2;
      iStack_74._1_3_ = 0;
      piStack_c = (int *)0x0;
      pppuStack_4c = &ppuStack_70;
      piStack_c = (int *)FUN_00df29d0(aiStack_30);
      piStack_84 = (int *)0x0;
      iStack_74._0_1_ = 4;
      piVar7 = (int *)func_0x008ab47d(0x30);
      piVar2 = piVar7 + 2;
      *piVar7 = (int)std::_Func_impl_no_alloc<>::vftable;
      piVar7[0xb] = 0;
      iStack_74 = CONCAT31(iStack_74._1_3_,6);
      piStack_40 = piVar2;
      piStack_38 = piVar7;
      if (piStack_c != (int *)0x0) {
        iVar8 = (**(code **)*piStack_c)(piVar2);
        piVar7[0xb] = iVar8;
      }
      piStack_84 = piVar7;
      if (piStack_c != (int *)0x0) {
        (**(code **)(*piStack_c + 0x10))(piStack_c != aiStack_30);
      }
      if (pppuStack_4c != (undefined ***)0x0) {
        (*(code *)(*pppuStack_4c)[4])(pppuStack_4c != &ppuStack_70);
        pppuStack_4c = (undefined ***)0x0;
      }
      piStack_40 = (int *)(*piVar1 + 200);
      iStack_74._0_1_ = 7;
      _guard_check_icall();
      iStack_74._0_1_ = 8;
      uVar5 = (undefined1)iStack_74;
      iStack_74._0_1_ = 8;
      if (piStack_84 != (int *)0x0) {
        uVar5 = (**(code **)(*piStack_84 + 8))();
        iStack_74._0_1_ = 9;
        _guard_check_icall();
        iStack_74 = (uint)iStack_74._1_3_ << 8;
        if (piStack_84 != (int *)0x0) {
          (**(code **)(*piStack_84 + 0x10))(piStack_84 != aiStack_a8);
          piStack_84 = (int *)0x0;
        }
        func_0x00df3270(CONCAT31((int3)((uint)piVar2 >> 8),uVar5));
        iStack_74._0_1_ = 0xff;
        iStack_74._1_3_ = 0xffffff;
        _guard_check_icall();
        goto LAB_00df4f84;
      }
      goto LAB_00df4fb6;
    }
  }
  else {
    func_0x00e7304a(5);
  }
  *(undefined4 *)(iVar3 + 0x40) = 0x7ffffffe;
  func_0x00e7304a(6);
  uVar5 = (undefined1)iStack_74;
LAB_00df4fb6:
  iStack_74._0_1_ = uVar5;
  func_0x00e701bd();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



undefined * Catch_00df4f09(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + 0x3c) + 4);
  (**(code **)(*piVar1 + 4))(1,0,0,piVar1 + 3);
  return &DAT_00df4f6d;
}



undefined * Catch_00df4f24(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + 0x3c) + 4);
  (**(code **)(*piVar1 + 4))(1,0,0,piVar1 + 3);
  return &DAT_00df4f6d;
}



undefined * Catch_All_00df4f3f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = func_0x0062c5e0(unaff_EBP + 0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  func_0x00df2830(uVar1);
  func_0x00e75356(unaff_EBP + 0x2c);
  return &DAT_00df4f6d;
}



undefined4 FUN_00df4fd0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  char extraout_AH;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *extraout_ECX;
  int extraout_EDX;
  char *unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined4 *puVar8;
  int *piStack_20;
  uint uStack_1c;
  int iStack_18;
  HRESULT HStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00f6dab5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  if (2 < DAT_012ba4e8) {
    func_0x00ddf410(3,DAT_013e0188,"Starting message thread\n",uVar5);
  }
  HStack_14 = CoInitializeEx((LPVOID)0x0,0);
  if (HStack_14 < 0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Failed to initialize COM: 0x%08lx\n",HStack_14);
    }
    func_0x00df8580(&HStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  piStack_20 = (int *)0x0;
  iVar6 = *param_1;
  if ((iVar6 != 0) &&
     (((char)param_1[1] == '\0' ||
      ((*(char *)(iVar6 + 0x6c) == '\0' &&
       (((char)param_1[1] == '\0' || (*(char *)(iVar6 + 0x6c) == '\0')))))))) {
    func_0x00df3ec0(&piStack_20,0);
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410(3,DAT_013e0188,"Starting message loop\n");
    }
LAB_00df50d0:
    iVar6 = func_0x00e7307f(&DAT_012ba678);
    if (iVar6 == 0) {
      if (DAT_012ba6a4 == 0x7fffffff) goto LAB_00df53ac;
      while (DAT_013e0284 == 0) {
        func_0x00e73265(&DAT_013e029c,&DAT_012ba678);
      }
      uStack_1c = uStack_1c | 1;
      piVar2 = *(int **)(DAT_013e0278 + (DAT_013e027c - 1U & DAT_013e0280) * 4);
      iStack_18 = piVar2[3];
      iVar6 = *piVar2;
      piVar3 = (int *)piVar2[1];
      unaff_EBX = (char *)piVar2[2];
      piVar2[3] = 0;
      func_0x00df0cc0();
      DAT_013e0284 = DAT_013e0284 + -1;
      if (DAT_013e0284 == 0) {
        DAT_013e0280 = 0;
      }
      else {
        DAT_013e0280 = DAT_013e0280 + 1;
      }
      func_0x00e730b2(&DAT_012ba678);
      uStack_8._0_1_ = 0;
      uStack_8._1_3_ = 0;
      if (iVar6 == 7) {
        uStack_8 = 0xffffffff;
        func_0x00df0cc0();
        if (2 < DAT_012ba4e8) {
          func_0x00ddf410(3,DAT_013e0188,"Message loop finished\n");
        }
        CoUninitialize();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
      if (2 < DAT_012ba4e8) {
        func_0x00ddf410(3,DAT_013e0188,"Got message \"%s\" (0x%04x, this=%p, param=%p)\n",
                        "Open Device" + iVar6 * 0x14,iVar6,piVar3,unaff_EBX);
      }
      switch(iVar6) {
      case 0:
        HStack_14 = (**(code **)(*piVar3 + 4))(unaff_EBX);
        break;
      case 1:
        HStack_14 = (**(code **)(*piVar3 + 0xc))();
        break;
      case 2:
        HStack_14 = (**(code **)(*piVar3 + 0x10))();
        break;
      case 3:
        (**(code **)(*piVar3 + 0x14))();
        piStack_20 = (int *)0x0;
        goto code_r0x00df5331;
      case 4:
        (**(code **)(*piVar3 + 8))();
        piStack_20 = (int *)0x0;
        goto code_r0x00df5331;
      case 5:
      case 6:
        piStack_20 = (int *)0x0;
        HStack_14 = CoCreateInstance((IID *)&DAT_010e7078,(LPUNKNOWN)0x0,1,(IID *)&DAT_010e7088,
                                     &piStack_20);
        piVar2 = piStack_20;
        if (-1 < HStack_14) {
          uStack_8._0_1_ = 1;
          if (iVar6 == 5) {
            puVar8 = &DAT_013e0288;
            uVar7 = 0;
code_r0x00df52c3:
            func_0x00df6400(piStack_20,uVar7,puVar8);
          }
          else if (iVar6 == 6) {
            puVar8 = &DAT_013e0268;
            uVar7 = 1;
            goto code_r0x00df52c3;
          }
          HStack_14 = 0;
          if (iStack_18 != 0) goto code_r0x00df52de;
          goto LAB_00df53a5;
        }
        func_0x00df8580(&HStack_14);
        uStack_8._0_1_ = 0xff;
        uStack_8._1_3_ = 0xffffff;
        func_0x00df0cc0();
        goto LAB_00df50d0;
      default:
        if (0 < DAT_012ba4e8) {
          func_0x00ddf410(1,DAT_013e0188,"Unexpected message: %u\n",iVar6);
        }
        piStack_20 = (int *)0x80004005;
code_r0x00df5331:
        if (iStack_18 == 0) goto LAB_00df53a5;
        func_0x00df3ec0(&piStack_20,0);
        uStack_8._0_1_ = 0xff;
        uStack_8._1_3_ = 0xffffff;
        func_0x00df0cc0();
        goto LAB_00df50d0;
      }
      func_0x00df8580(&HStack_14);
      uStack_8._0_1_ = 0xff;
      uStack_8._1_3_ = 0xffffff;
      func_0x00df0cc0();
      goto LAB_00df50d0;
    }
    func_0x00e7304a(5);
  }
LAB_00df53a5:
  func_0x00837270(4);
LAB_00df53ac:
  DAT_012ba6a4 = 0x7ffffffe;
  func_0x00e7304a(6);
  extraout_ECX[-0x21] = ~extraout_ECX[-0x21];
  *extraout_ECX = *extraout_ECX + extraout_AH;
  cVar1 = *(char *)(extraout_EDX + -0x21);
  *unaff_EBX = *unaff_EBX + (char)((uint)extraout_EDX >> 8);
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)((char)extraout_EDX - cVar1,extraout_EDX);
  return uVar7;
code_r0x00df52de:
  func_0x00df3ec0(&HStack_14,0);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  func_0x00df0cc0();
  goto LAB_00df50d0;
}



undefined4 __fastcall FUN_00df53e0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  HRESULT HVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  char *pcVar11;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6daf5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  HVar3 = CoInitializeEx((LPVOID)0x0,0);
  if (HVar3 < 0) {
    if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,
                      "CoInitializeEx(nullptr, COINIT_MULTITHREADED) failed: 0x%08lx\n",HVar3);
    }
    func_0x00e04820(*(undefined4 *)(param_1 + 4),"COM init failed: 0x%08lx",HVar3);
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  func_0x00e18030(uVar2);
  func_0x00e33a80("alsoft-mixer");
  iStack_18 = *(int *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar8 = (uint)*(ushort *)(param_1 + 0x42) * (uint)*(ushort *)(param_1 + 0x36) >> 3;
  iVar6 = iStack_18;
  do {
    while( true ) {
      if (*(char *)(param_1 + 0x90) != '\0') goto code_r0x00df56a1;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(*(int **)(param_1 + 0x14),&iStack_20)
      ;
      if (iVar4 < 0) {
        if (0 < DAT_012ba4e8) {
          func_0x00ddf410(1,DAT_013e0188,"Failed to get padding: 0x%08lx\n",iVar4);
        }
        pcVar11 = "Failed to retrieve buffer padding: 0x%08lx";
        goto LAB_00df5695;
      }
      uVar9 = iVar6 - iStack_20;
      *(int *)(param_1 + 0x5c) = iStack_20;
      if (uVar2 <= uVar9) break;
      DVar5 = WaitForSingleObjectEx(*(HANDLE *)(param_1 + 0x1c),2000,0);
      iVar6 = iStack_18;
      if ((DVar5 != 0) && (0 < DAT_012ba4e8)) {
        func_0x00ddf410(1,DAT_013e0188,"WaitForSingleObjectEx error: 0x%lx\n",DVar5);
      }
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))
                      (*(int **)(param_1 + 0x18),uVar9,&iStack_14);
    if (iVar4 < 0) break;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar6 = func_0x00e7307f(param_1 + 0x60);
      if (iVar6 != 0) goto LAB_00df56cd;
      iVar6 = *(int *)(param_1 + 0x8c);
      if (iVar6 == 0x7fffffff) goto LAB_00df56c2;
      uStack_8 = 1;
      func_0x00e04c70(iStack_14,uVar9,*(undefined2 *)(param_1 + 0x36));
      *(uint *)(param_1 + 0x5c) = iStack_20 + uVar9;
    }
    else {
      iVar6 = func_0x00e7307f(param_1 + 0x60);
      if (iVar6 != 0) goto LAB_00df56cd;
      iVar6 = *(int *)(param_1 + 0x8c);
      if (iVar6 == 0x7fffffff) {
LAB_00df56c2:
        *(int *)(param_1 + 0x8c) = iVar6 + -1;
        func_0x00e7304a(6);
LAB_00df56cd:
        func_0x00e7304a(5);
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      uStack_8 = 0;
      if (uVar9 != 0) {
        uVar10 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x2c);
          if (iVar6 == 0) {
            func_0x00e04c70(*(undefined4 *)(param_1 + 0x28),
                            *(undefined4 *)(*(int *)(param_1 + 4) + 8),
                            *(undefined2 *)(param_1 + 0x36));
            iVar6 = *(int *)(*(int *)(param_1 + 4) + 8);
            *(int *)(param_1 + 0x2c) = iVar6;
          }
          uStack_24 = *(undefined4 *)(param_1 + 0x28);
          iStack_1c = iVar6;
          iVar6 = func_0x00e362a0(&uStack_24,&iStack_1c,iStack_14,uVar9 - uVar10);
          uVar10 = uVar10 + iVar6;
          iStack_14 = iStack_14 + iVar6 * uVar8;
          *(uint *)(param_1 + 0x5c) = iStack_20 + uVar10;
          if (iStack_1c != 0) {
            func_0x008ab0e6(*(undefined4 *)(param_1 + 0x28),uStack_24,iStack_1c * uVar8);
          }
          *(int *)(param_1 + 0x2c) = iStack_1c;
        } while (uVar10 < uVar9);
      }
    }
    uStack_8 = 0xffffffff;
    func_0x00e730b2(param_1 + 0x60);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(*(int **)(param_1 + 0x18),uVar9,0);
    iVar6 = iStack_18;
  } while (-1 < iVar4);
  if (0 < DAT_012ba4e8) {
    func_0x00ddf410(1,DAT_013e0188,"Failed to buffer data: 0x%08lx\n",iVar4);
  }
  pcVar11 = "Failed to send playback samples: 0x%08lx";
LAB_00df5695:
  func_0x00e04820(*(undefined4 *)(param_1 + 4),pcVar11,iVar4);
code_r0x00df56a1:
  *(undefined4 *)(param_1 + 0x5c) = 0;
  CoUninitialize();
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void __thiscall FUN_00df56e0(int param_1,char *param_2)

{
  code *pcVar1;
  uint uVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *apuStack_6c [2];
  undefined1 auStack_64 [40];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6db35;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar2;
  if (*(int *)(param_1 + 0xc) < 0) {
    pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0x1c) = pvVar3;
    if (pvVar3 == (HANDLE)0x0) {
      if (0 < DAT_012ba4e8) {
        DVar4 = GetLastError();
        func_0x00ddf410(1,DAT_013e0188,"Failed to create notify events: %lu\n",DVar4);
      }
      pcVar9 = "Failed to create notify events";
      goto LAB_00df58bb;
    }
    iVar5 = func_0x00df2030();
    if (-1 < iVar5) {
      if (param_2 != (char *)0x0) {
        if (DAT_013e0268 == DAT_013e026c) {
          func_0x00df66f0(apuStack_6c,6,0);
          func_0x00df0c90();
        }
        iVar5 = func_0x008ab040(param_2,"OpenAL Soft on ",0xf);
        if ((iVar5 == 0) && (param_2 = param_2 + 0xf, *param_2 == '\0')) {
          param_2 = (char *)0x0;
        }
      }
      func_0x00df66f0(apuStack_6c,0,param_2);
      uStack_8 = 0;
      uVar8 = func_0x00df45a0();
      *(undefined4 *)(param_1 + 0xc) = uVar8;
      uStack_8 = 0xffffffff;
      if (apuStack_6c[0] != (undefined4 *)0x0) {
        LOCK();
        iVar5 = apuStack_6c[0][1] + -1;
        apuStack_6c[0][1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          if ((undefined4 *)apuStack_6c[0][0x1e] == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)*apuStack_6c[0];
            apuStack_6c[0] = (undefined4 *)0x1;
          }
          else {
            puVar6 = *(undefined4 **)apuStack_6c[0][0x1e];
          }
          (*(code *)*puVar6)(apuStack_6c[0]);
        }
      }
      if (*(int *)(param_1 + 0xc) < 0) {
        func_0x00df1f50();
        func_0x00e0c6f0(auStack_3c,1,"Device init failed: 0x%08lx",*(undefined4 *)(param_1 + 0xc));
        goto LAB_00df58c9;
      }
      func_0x00df66f0(apuStack_6c,1,0);
      uStack_8 = 1;
      iVar5 = func_0x00df45a0();
      uStack_8 = 0xffffffff;
      func_0x00df0c90();
      if (-1 < iVar5) {
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      if (iVar5 != -0x7ff8fff2) {
        func_0x00e0c6f0(auStack_64,1,"Device reset failed");
        puVar7 = auStack_64;
        goto LAB_00df58d1;
      }
      pcVar9 = "Out of memory";
      uVar8 = 2;
      goto LAB_00df58bd;
    }
    func_0x00e0c6f0(auStack_3c,1,"Failed to init COM thread: 0x%08lx",iVar5);
  }
  else {
    pcVar9 = "Unexpected duplicate open call";
LAB_00df58bb:
    uVar8 = 1;
LAB_00df58bd:
    func_0x00e0c6f0(auStack_3c,uVar8,pcVar9,uVar2);
  }
LAB_00df58c9:
  puVar7 = auStack_3c;
LAB_00df58d1:
  func_0x00e87d2e(puVar7,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00df58e0(int param_1,char *param_2)

{
  code *pcVar1;
  uint uVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *unaff_FS_OFFSET;
  char *pcVar9;
  undefined4 *apuStack_6c [2];
  undefined1 auStack_64 [40];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6db6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar2;
  if (*(int *)(param_1 + 0xc) < 0) {
    pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0x1c) = pvVar3;
    if (pvVar3 == (HANDLE)0x0) {
      if (0 < DAT_012ba4e8) {
        DVar4 = GetLastError();
        func_0x00ddf410(1,DAT_013e0188,"Failed to create notify events: %lu\n",DVar4);
      }
      pcVar9 = "Failed to create notify events";
      goto LAB_00df5a5d;
    }
    iVar5 = func_0x00df2030();
    if (-1 < iVar5) {
      if (param_2 != (char *)0x0) {
        if (DAT_013e0288 == DAT_013e028c) {
          func_0x00df66f0(apuStack_6c,5,0);
          func_0x00df0c90();
        }
        iVar5 = func_0x008ab040(param_2,"OpenAL Soft on ",0xf);
        if ((iVar5 == 0) && (param_2 = param_2 + 0xf, *param_2 == '\0')) {
          param_2 = (char *)0x0;
        }
      }
      func_0x00df66f0(apuStack_6c,0,param_2);
      uStack_8 = 0;
      uVar6 = func_0x00df45a0();
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      uStack_8 = 0xffffffff;
      if (apuStack_6c[0] != (undefined4 *)0x0) {
        LOCK();
        iVar5 = apuStack_6c[0][1] + -1;
        apuStack_6c[0][1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          if ((undefined4 *)apuStack_6c[0][0x1e] == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)*apuStack_6c[0];
            apuStack_6c[0] = (undefined4 *)0x1;
          }
          else {
            puVar7 = *(undefined4 **)apuStack_6c[0][0x1e];
          }
          (*(code *)*puVar7)(apuStack_6c[0]);
        }
      }
      if (-1 < *(int *)(param_1 + 0xc)) {
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      func_0x00df1f50();
      func_0x00e0c6f0(auStack_64,1,"Device init failed: 0x%08lx",*(undefined4 *)(param_1 + 0xc));
      puVar8 = auStack_64;
      goto LAB_00df5a73;
    }
    func_0x00e0c6f0(auStack_3c,1,"Failed to init COM thread: 0x%08lx",iVar5);
  }
  else {
    pcVar9 = "Unexpected duplicate open call";
LAB_00df5a5d:
    func_0x00e0c6f0(auStack_3c,1,pcVar9,uVar2);
  }
  puVar8 = auStack_3c;
LAB_00df5a73:
  func_0x00e87d2e(puVar8,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00df5a80(int param_1,char *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 ****ppppuVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  int *unaff_FS_OFFSET;
  int iStack_bc;
  int *piStack_b8;
  undefined8 uStack_b4;
  int iStack_ac;
  int *piStack_a8;
  undefined1 auStack_a4 [48];
  undefined1 auStack_74 [24];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined8 uStack_4c;
  undefined4 ***apppuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6dbce;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_a8 = (int *)param_2;
  uStack_b4 = (ulonglong)(uint)uStack_b4;
  iStack_ac = param_1;
  uStack_14 = uVar6;
  if (param_2 == (char *)0x0) {
    pcVar17 = (char *)0x0;
  }
  else {
    if (DAT_013e0268 == DAT_013e026c) {
LAB_00df5b87:
      func_0x00ddf7a0(apppuStack_44,piStack_a8);
      pcVar17 = DAT_013e026c;
      for (pcVar11 = DAT_013e0268; pcVar11 != pcVar17; pcVar11 = pcVar11 + 0x48) {
        piVar12 = (int *)(pcVar11 + 0x30);
        ppppuVar13 = apppuStack_44;
        if (7 < uStack_30) {
          ppppuVar13 = (undefined4 ****)apppuStack_44[0];
        }
        if (7 < *(uint *)(pcVar11 + 0x44)) {
          piVar12 = (int *)*piVar12;
        }
        cVar5 = func_0x0060ae00(piVar12,*(undefined4 *)(pcVar11 + 0x40),ppppuVar13,uStack_34);
        if (cVar5 != '\0') break;
      }
      func_0x00588fe0();
      if (pcVar11 == DAT_013e026c) {
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Failed to find device name matching \"%s\"\n",piStack_a8);
        }
        goto LAB_00df5eec;
      }
    }
    else {
      pcVar17 = DAT_013e0268 + 0x28;
      pcVar11 = DAT_013e0268;
      do {
        uStack_b4 = CONCAT44((char *)((int)piStack_a8 + 1),(uint)uStack_b4);
        piVar12 = piStack_a8;
        do {
          cVar5 = *(char *)piVar12;
          piVar12 = (int *)((int)piVar12 + 1);
        } while (cVar5 != '\0');
        pcVar7 = pcVar11;
        if (0xf < *(uint *)(pcVar17 + -0x14)) {
          pcVar7 = *(char **)pcVar11;
        }
        cVar5 = func_0x0046cf20(pcVar7,*(undefined4 *)(pcVar17 + -0x18),piStack_a8,
                                (int)piVar12 - ((int)piStack_a8 + 1),uVar6);
        if (cVar5 != '\0') break;
        uStack_b4 = CONCAT44((char *)((int)piStack_a8 + 1),(uint)uStack_b4);
        piVar12 = piStack_a8;
        do {
          cVar5 = *(char *)piVar12;
          piVar12 = (int *)((int)piVar12 + 1);
        } while (cVar5 != '\0');
        piVar8 = (int *)(pcVar17 + -0x10);
        if (0xf < *(uint *)(pcVar17 + 4)) {
          piVar8 = (int *)*piVar8;
        }
        cVar5 = func_0x0046cf20(piVar8,*(undefined4 *)pcVar17,piStack_a8,
                                (int)piVar12 - ((int)piStack_a8 + 1));
        if (cVar5 != '\0') break;
        pcVar11 = pcVar11 + 0x48;
        pcVar17 = pcVar17 + 0x48;
      } while (pcVar11 != DAT_013e026c);
      if (pcVar11 == DAT_013e026c) goto LAB_00df5b87;
    }
    pcVar17 = pcVar11;
    if (0xf < *(uint *)(pcVar11 + 0x14)) {
      pcVar17 = *(char **)pcVar11;
    }
    uStack_b4 = CONCAT44(pcVar11 + 0x30,(uint)uStack_b4);
    if (7 < *(uint *)(pcVar11 + 0x44)) {
      uStack_b4 = CONCAT44(*(undefined4 *)(pcVar11 + 0x30),(uint)uStack_b4);
    }
  }
  piStack_a8 = (int *)CoCreateInstance((IID *)&DAT_010e7078,(LPUNKNOWN)0x0,1,(IID *)&DAT_010e7088,
                                       &piStack_b8);
  if (-1 < (int)piStack_a8) {
    piStack_a8 = piStack_b8;
    uStack_8 = 0;
    if (uStack_b4._4_4_ == 0) {
      piStack_a8 = (int *)(**(code **)(*piStack_b8 + 0x10))(piStack_b8,1,1);
    }
    else {
      piStack_a8 = (int *)(**(code **)(*piStack_b8 + 0x14))
                                    (piStack_b8,uStack_b4._4_4_,iStack_ac + 8);
    }
    uStack_8 = 1;
    if (piStack_b8 != (int *)0x0) {
      (**(code **)(*piStack_b8 + 8))(piStack_b8);
    }
    uStack_8 = 0xffffffff;
    if (-1 < (int)piStack_a8) {
      iStack_bc = 0;
      uStack_8 = 2;
      piVar12 = (int *)(iStack_ac + 0xc);
      if (&iStack_bc != piVar12) {
        piVar8 = (int *)*piVar12;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        *piVar12 = 0;
      }
      uStack_8 = 0xffffffff;
      if (pcVar17 == (char *)0x0) {
        func_0x00df4880(auStack_a4,*(undefined4 *)(iStack_ac + 8));
        uStack_8 = 5;
        pcVar17 = "OpenAL Soft on ";
        do {
          pcVar11 = pcVar17;
          pcVar17 = pcVar11 + 1;
        } while (*pcVar11 != '\0');
        puVar10 = (uint *)func_0x005df0b0(0,"OpenAL Soft on ",pcVar11 + -0x10dc750);
        uStack_5c = *puVar10;
        uStack_58 = puVar10[1];
        uStack_54 = puVar10[2];
        uStack_50 = puVar10[3];
        uStack_b4 = *(ulonglong *)(puVar10 + 4);
        puVar10[4] = 0;
        puVar10[5] = 0xf;
        *(undefined1 *)puVar10 = 0;
        iVar15 = *(int *)(iStack_ac + -4);
        uStack_4c = uStack_b4;
        uStack_24 = uStack_5c;
        uStack_20 = uStack_58;
        uStack_1c = uStack_54;
        uStack_18 = uStack_50;
        if ((uint *)(iVar15 + 0x20) == &uStack_5c) {
          uStack_4c._4_4_ = (uint)(uStack_b4 >> 0x20);
          uVar6 = uStack_4c._4_4_;
        }
        else {
          FUN_00469ba0();
          uStack_5c = uStack_5c & 0xffffff00;
          *(uint *)(iVar15 + 0x20) = uStack_24;
          *(uint *)(iVar15 + 0x24) = uStack_20;
          *(uint *)(iVar15 + 0x28) = uStack_1c;
          *(uint *)(iVar15 + 0x2c) = uStack_18;
          *(ulonglong *)(iVar15 + 0x30) = uStack_b4;
          uVar6 = 0xf;
        }
        if (0xf < uVar6) {
          uVar14 = uVar6 + 1;
          uVar16 = uStack_5c;
          if (0xfff < uVar14) {
            uVar16 = *(uint *)(uStack_5c - 4);
            uVar14 = uVar6 + 0x24;
            if (0x1f < (uStack_5c - uVar16) - 4) goto LAB_00df5f0e;
          }
          func_0x008ab812(uVar16,uVar14);
        }
        func_0x00dc6fb0();
      }
      else {
        uStack_1c = 0;
        uStack_18 = 0;
        iStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        pcVar11 = "OpenAL Soft on ";
        do {
          pcVar7 = pcVar11;
          pcVar11 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        func_0x0046bc40("OpenAL Soft on ",pcVar7 + -0x10dc750);
        uStack_8 = 4;
        puVar9 = (undefined4 *)func_0x0046b5c0(auStack_74,&iStack_2c,pcVar17);
        iVar15 = *(int *)(iStack_ac + -4);
        if ((undefined4 *)(iVar15 + 0x20) != puVar9) {
          FUN_00469ba0();
          uVar2 = puVar9[1];
          uVar3 = puVar9[2];
          uVar4 = puVar9[3];
          *(undefined4 *)(iVar15 + 0x20) = *puVar9;
          *(undefined4 *)(iVar15 + 0x24) = uVar2;
          *(undefined4 *)(iVar15 + 0x28) = uVar3;
          *(undefined4 *)(iVar15 + 0x2c) = uVar4;
          *(undefined8 *)(iVar15 + 0x30) = *(undefined8 *)(puVar9 + 4);
          puVar9[4] = 0;
          puVar9[5] = 0xf;
          *(undefined1 *)puVar9 = 0;
        }
        FUN_00469ba0();
        if (0xf < uStack_18) {
          uVar6 = uStack_18 + 1;
          iVar15 = iStack_2c;
          if (0xfff < uVar6) {
            iVar15 = *(int *)(iStack_2c + -4);
            uVar6 = uStack_18 + 0x24;
            if (0x1f < (iStack_2c - iVar15) - 4U) {
              func_0x008aaf66();
LAB_00df5f0e:
              func_0x008aaf66();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          func_0x008ab812(iVar15,uVar6);
        }
      }
      goto LAB_00df5eec;
    }
  }
  if (1 < DAT_012ba4e8) {
    pcVar11 = "(default)";
    if (pcVar17 != (char *)0x0) {
      pcVar11 = pcVar17;
    }
    func_0x00ddf410(2,DAT_013e0188,"Failed to open device \"%s\"\n",pcVar11);
  }
LAB_00df5eec:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00df5f20(int param_1,char *param_2)

{
  int **ppiVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint3 uVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 ****ppppuVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  int *unaff_FS_OFFSET;
  int iStack_a8;
  int *piStack_a4;
  undefined8 uStack_a0;
  int iStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [24];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined8 uStack_4c;
  undefined4 ***apppuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6dc39;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_90 = (int *)param_2;
  uStack_a0 = (ulonglong)(uint)uStack_a0;
  iStack_98 = param_1;
  uStack_14 = uVar8;
  if (param_2 == (char *)0x0) {
    pcVar19 = (char *)0x0;
  }
  else {
    if (DAT_013e0288 == DAT_013e028c) {
LAB_00df6027:
      func_0x00ddf7a0(apppuStack_44,piStack_90);
      pcVar19 = DAT_013e028c;
      for (pcVar13 = DAT_013e0288; pcVar13 != pcVar19; pcVar13 = pcVar13 + 0x48) {
        piVar14 = (int *)(pcVar13 + 0x30);
        ppppuVar15 = apppuStack_44;
        if (7 < uStack_30) {
          ppppuVar15 = (undefined4 ****)apppuStack_44[0];
        }
        if (7 < *(uint *)(pcVar13 + 0x44)) {
          piVar14 = (int *)*piVar14;
        }
        cVar7 = func_0x0060ae00(piVar14,*(undefined4 *)(pcVar13 + 0x40),ppppuVar15,uStack_34);
        if (cVar7 != '\0') break;
      }
      func_0x00588fe0();
      if (pcVar13 == DAT_013e028c) {
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Failed to find device name matching \"%s\"\n",piStack_90);
        }
        goto LAB_00df63d6;
      }
    }
    else {
      pcVar19 = DAT_013e0288 + 0x28;
      pcVar13 = DAT_013e0288;
      do {
        uStack_a0 = CONCAT44((char *)((int)piStack_90 + 1),(uint)uStack_a0);
        piVar14 = piStack_90;
        do {
          cVar7 = *(char *)piVar14;
          piVar14 = (int *)((int)piVar14 + 1);
        } while (cVar7 != '\0');
        pcVar9 = pcVar13;
        if (0xf < *(uint *)(pcVar19 + -0x14)) {
          pcVar9 = *(char **)pcVar13;
        }
        cVar7 = func_0x0046cf20(pcVar9,*(undefined4 *)(pcVar19 + -0x18),piStack_90,
                                (int)piVar14 - ((int)piStack_90 + 1),uVar8);
        if (cVar7 != '\0') break;
        uStack_a0 = CONCAT44((char *)((int)piStack_90 + 1),(uint)uStack_a0);
        piVar14 = piStack_90;
        do {
          cVar7 = *(char *)piVar14;
          piVar14 = (int *)((int)piVar14 + 1);
        } while (cVar7 != '\0');
        piVar10 = (int *)(pcVar19 + -0x10);
        if (0xf < *(uint *)(pcVar19 + 4)) {
          piVar10 = (int *)*piVar10;
        }
        cVar7 = func_0x0046cf20(piVar10,*(undefined4 *)pcVar19,piStack_90,
                                (int)piVar14 - ((int)piStack_90 + 1));
        if (cVar7 != '\0') break;
        pcVar13 = pcVar13 + 0x48;
        pcVar19 = pcVar19 + 0x48;
      } while (pcVar13 != DAT_013e028c);
      if (pcVar13 == DAT_013e028c) goto LAB_00df6027;
    }
    pcVar19 = pcVar13;
    if (0xf < *(uint *)(pcVar13 + 0x14)) {
      pcVar19 = *(char **)pcVar13;
    }
    uStack_a0 = CONCAT44(pcVar13 + 0x30,(uint)uStack_a0);
    if (7 < *(uint *)(pcVar13 + 0x44)) {
      uStack_a0 = CONCAT44(*(undefined4 *)(pcVar13 + 0x30),(uint)uStack_a0);
    }
  }
  piStack_94 = (int *)0x0;
  uStack_8 = 0;
  piStack_90 = (int *)CoCreateInstance((IID *)&DAT_010e7078,(LPUNKNOWN)0x0,1,(IID *)&DAT_010e7088,
                                       &piStack_a4);
  if ((int)piStack_90 < 0) {
LAB_00df6390:
    if (1 < DAT_012ba4e8) {
      pcVar13 = "(default)";
      if (pcVar19 != (char *)0x0) {
        pcVar13 = pcVar19;
      }
      func_0x00ddf410(2,DAT_013e0188,"Failed to open device \"%s\"\n",pcVar13);
    }
  }
  else {
    piStack_90 = piStack_a4;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (uStack_a0._4_4_ == 0) {
      piStack_90 = (int *)(**(code **)(*piStack_a4 + 0x10))(piStack_a4,0,1,&piStack_94);
    }
    else {
      piStack_90 = (int *)(**(code **)(*piStack_a4 + 0x14))(piStack_a4,uStack_a0._4_4_,&piStack_94);
    }
    uStack_8._0_1_ = 2;
    if (piStack_a4 != (int *)0x0) {
      (**(code **)(*piStack_a4 + 8))(piStack_a4);
    }
    uVar6 = uStack_8._1_3_;
    uStack_8 = (uint)uStack_8._1_3_ << 8;
    if ((int)piStack_90 < 0) goto LAB_00df6390;
    iStack_a8 = 0;
    uStack_8._0_1_ = 4;
    piVar14 = (int *)(iStack_98 + 0xc);
    uStack_8._1_3_ = uVar6;
    if (&iStack_a8 != piVar14) {
      piVar10 = (int *)*piVar14;
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 8))(piVar10);
      }
      *piVar14 = 0;
    }
    ppiVar1 = (int **)(iStack_98 + 8);
    uStack_8._0_1_ = 0;
    if (&piStack_94 != ppiVar1) {
      piVar14 = *ppiVar1;
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 8))(piVar14);
      }
      piVar14 = piStack_94;
      piStack_94 = (int *)0x0;
      *ppiVar1 = piVar14;
    }
    if (pcVar19 == (char *)0x0) {
      func_0x00df4880(auStack_8c,*ppiVar1);
      uStack_8 = CONCAT31(uStack_8._1_3_,7);
      pcVar19 = "OpenAL Soft on ";
      do {
        pcVar13 = pcVar19;
        pcVar19 = pcVar13 + 1;
      } while (*pcVar13 != '\0');
      puVar12 = (uint *)func_0x005df0b0(0,"OpenAL Soft on ",pcVar13 + -0x10dc750);
      uStack_5c = *puVar12;
      uStack_58 = puVar12[1];
      uStack_54 = puVar12[2];
      uStack_50 = puVar12[3];
      uStack_a0 = *(ulonglong *)(puVar12 + 4);
      puVar12[4] = 0;
      puVar12[5] = 0xf;
      *(undefined1 *)puVar12 = 0;
      iVar17 = *(int *)(iStack_98 + -4);
      uStack_4c = uStack_a0;
      uStack_24 = uStack_5c;
      uStack_20 = uStack_58;
      uStack_1c = uStack_54;
      uStack_18 = uStack_50;
      if ((uint *)(iVar17 + 0x20) == &uStack_5c) {
        uStack_4c._4_4_ = (uint)(uStack_a0 >> 0x20);
        uVar8 = uStack_4c._4_4_;
      }
      else {
        FUN_00469ba0();
        uStack_5c = uStack_5c & 0xffffff00;
        *(uint *)(iVar17 + 0x20) = uStack_24;
        *(uint *)(iVar17 + 0x24) = uStack_20;
        *(uint *)(iVar17 + 0x28) = uStack_1c;
        *(uint *)(iVar17 + 0x2c) = uStack_18;
        *(ulonglong *)(iVar17 + 0x30) = uStack_a0;
        uVar8 = 0xf;
      }
      if (0xf < uVar8) {
        uVar16 = uVar8 + 1;
        uVar18 = uStack_5c;
        if (0xfff < uVar16) {
          uVar18 = *(uint *)(uStack_5c - 4);
          uVar16 = uVar8 + 0x24;
          if (0x1f < (uStack_5c - uVar18) - 4) goto LAB_00df63f8;
        }
        func_0x008ab812(uVar18,uVar16);
      }
      func_0x00dc6fb0();
    }
    else {
      uStack_1c = 0;
      uStack_18 = 0;
      iStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      pcVar13 = "OpenAL Soft on ";
      do {
        pcVar9 = pcVar13;
        pcVar13 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      func_0x0046bc40("OpenAL Soft on ",pcVar9 + -0x10dc750);
      uStack_8 = CONCAT31(uStack_8._1_3_,6);
      puVar11 = (undefined4 *)func_0x0046b5c0(auStack_74,&iStack_2c,pcVar19);
      iVar17 = *(int *)(iStack_98 + -4);
      if ((undefined4 *)(iVar17 + 0x20) != puVar11) {
        FUN_00469ba0();
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *(undefined4 *)(iVar17 + 0x20) = *puVar11;
        *(undefined4 *)(iVar17 + 0x24) = uVar3;
        *(undefined4 *)(iVar17 + 0x28) = uVar4;
        *(undefined4 *)(iVar17 + 0x2c) = uVar5;
        *(undefined8 *)(iVar17 + 0x30) = *(undefined8 *)(puVar11 + 4);
        puVar11[4] = 0;
        puVar11[5] = 0xf;
        *(undefined1 *)puVar11 = 0;
      }
      FUN_00469ba0();
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < uStack_18) {
        uVar8 = uStack_18 + 1;
        iVar17 = iStack_2c;
        if (0xfff < uVar8) {
          iVar17 = *(int *)(iStack_2c + -4);
          uVar8 = uStack_18 + 0x24;
          if (0x1f < (iStack_2c - iVar17) - 4U) {
            func_0x008aaf66();
LAB_00df63f8:
            func_0x008aaf66();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        func_0x008ab812(iVar17,uVar8);
      }
    }
  }
  uStack_8 = 8;
  if (piStack_94 != (int *)0x0) {
    (**(code **)(*piStack_94 + 8))(piStack_94);
  }
LAB_00df63d6:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_00df6970(int param_1)

{
  char cVar1;
  uint uVar2;
  HRESULT HVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  size_t sVar8;
  int *unaff_FS_OFFSET;
  char *pcVar9;
  void *pvStack_48;
  uint uStack_44;
  void *pvStack_40;
  uint uStack_3c;
  void *pvStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  void *pvStack_24;
  size_t sStack_20;
  size_t sStack_1c;
  void *pvStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6dded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  HVar3 = CoInitializeEx((LPVOID)0x0,0);
  if (HVar3 < 0) {
    if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,
                      "CoInitializeEx(nullptr, COINIT_MULTITHREADED) failed: 0x%08lx\n",HVar3);
    }
    func_0x00e04820(*(undefined4 *)(param_1 + 4),"COM init failed: 0x%08lx",HVar3);
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  func_0x00e33a80("alsoft-record",uVar2);
  pvStack_38 = (void *)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  cVar1 = *(char *)(param_1 + 0x38);
  uStack_8 = 0;
  do {
    if (cVar1 != '\0') {
LAB_00df6c3b:
      CoUninitialize();
      if (pvStack_38 != (void *)0x0) {
        func_0x00ddbb20(pvStack_38);
      }
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),&iStack_28);
    if (iVar4 < 0) {
      if (0 < DAT_012ba4e8) {
        pcVar9 = "Failed to get next packet size: 0x%08lx\n";
        goto LAB_00df6c1a;
      }
LAB_00df6c2a:
      func_0x00e04820(*(undefined4 *)(param_1 + 4),"Failed to capture samples: 0x%08lx",iVar4);
      goto LAB_00df6c3b;
    }
    if (iStack_28 != 0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))
                        (*(int **)(param_1 + 0x18),&pvStack_18,&sStack_1c,auStack_2c,0,0);
      if (iVar4 < 0) {
        if (0 < DAT_012ba4e8) {
          pcVar9 = "Failed to get capture buffer: 0x%08lx\n";
LAB_00df6c1a:
          func_0x00ddf410(1,DAT_013e0188,pcVar9,iVar4);
        }
      }
      else {
        if (*(int *)(param_1 + 0x28) != 0) {
          func_0x00dcc7b0(sStack_1c * 2,&uStack_11);
          func_0x00e35a10(pvStack_18,pvStack_38,sStack_1c);
          pvStack_18 = pvStack_38;
        }
        func_0x00e190f0(&pvStack_48);
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar4 = *(int *)(param_1 + 4);
          iVar6 = func_0x00dfe9a0(*(undefined1 *)(iVar4 + 0x11));
          iVar4 = func_0x00dfe9f0(*(undefined1 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
          pvStack_24 = (void *)(iVar4 * iVar6);
          sVar8 = uStack_44;
          if (sStack_1c < uStack_44) {
            sVar8 = sStack_1c;
          }
          uVar2 = uStack_3c;
          if (sStack_1c - sVar8 < uStack_3c) {
            uVar2 = sStack_1c - sVar8;
          }
          sStack_20 = sVar8 * (int)pvStack_24;
          memcpy(pvStack_48,pvStack_18,sStack_20);
          if (uVar2 != 0) {
            memcpy(pvStack_40,(void *)((int)pvStack_18 + sStack_20),uVar2 * (int)pvStack_24);
          }
          uVar2 = uVar2 + sVar8;
        }
        else {
          pvStack_24 = pvStack_18;
          sStack_20 = sStack_1c;
          uVar2 = uStack_44;
          if (0x7fffffff < uStack_44) {
            uVar2 = 0x7fffffff;
          }
          uVar2 = func_0x00e362a0(&pvStack_24,&sStack_20,pvStack_48,uVar2);
          if (((sStack_20 != 0) && (uVar2 == uStack_44)) && (uStack_3c != 0)) {
            uVar5 = uStack_3c;
            if (0x7fffffff < uStack_3c) {
              uVar5 = 0x7fffffff;
            }
            iVar4 = func_0x00e362a0(&pvStack_24,&sStack_20,pvStack_40,uVar5);
            uVar2 = uVar2 + iVar4;
          }
        }
        LOCK();
        **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + uVar2;
        UNLOCK();
        iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))
                          (*(int **)(param_1 + 0x18),sStack_1c);
        if (-1 < iVar4) goto LAB_00df6ba9;
        if (0 < DAT_012ba4e8) {
          pcVar9 = "Failed to release capture buffer: 0x%08lx\n";
          goto LAB_00df6c1a;
        }
      }
      goto LAB_00df6c2a;
    }
LAB_00df6ba9:
    DVar7 = WaitForSingleObjectEx(*(HANDLE *)(param_1 + 0x1c),2000,0);
    if ((DVar7 != 0) && (0 < DAT_012ba4e8)) {
      func_0x00ddf410(1,DAT_013e0188,"WaitForSingleObjectEx error: 0x%lx\n",DVar7);
    }
    cVar1 = *(char *)(param_1 + 0x38);
  } while( true );
}



void FUN_00df6c70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_44 [2];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6de1d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00df66f0(apuStack_44,1,0,uStack_14);
  uStack_8 = 0;
  iVar3 = func_0x00df45a0();
  uStack_8 = 0xffffffff;
  if (apuStack_44[0] != (undefined4 *)0x0) {
    LOCK();
    iVar2 = apuStack_44[0][1] + -1;
    apuStack_44[0][1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)apuStack_44[0][0x1e] == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*apuStack_44[0];
        apuStack_44[0] = (undefined4 *)0x1;
      }
      else {
        puVar4 = *(undefined4 **)apuStack_44[0][0x1e];
      }
      (*(code *)*puVar4)(apuStack_44[0]);
    }
  }
  if (-1 < iVar3) {
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x00e0c6f0(auStack_3c,1,"0x%08lx",iVar3);
  func_0x00e87d2e(auStack_3c,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00df6f06)

void __fastcall FUN_00df6d30(int param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  char *pcVar14;
  undefined8 uStack_c0;
  int *piStack_b8;
  int *piStack_b4;
  int aiStack_b0 [4];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined8 uStack_94;
  uint uStack_8c;
  LPVOID pvStack_88;
  char cStack_81;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int aiStack_64 [2];
  undefined8 uStack_5c;
  undefined1 auStack_54 [64];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6de6b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_b0[0] = 0;
  piVar10 = (int *)(param_1 + 0xc);
  uStack_8 = 0;
  iStack_80 = param_1;
  if (aiStack_b0 != piVar10) {
    piVar9 = (int *)*piVar10;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9,uStack_14);
    }
    *piVar10 = 0;
  }
  uStack_8 = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0xc))
                    (*(int **)(param_1 + 8),&DAT_010e7098,1,0,&piStack_b4);
  if (iVar3 < 0) {
    uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
    if (DAT_012ba4e8 < 1) goto LAB_00df7739;
    pcVar14 = "Failed to reactivate audio client: 0x%08lx\n";
  }
  else {
    piStack_b8 = piStack_b4;
    uStack_8 = 2;
    piVar10 = piStack_b4;
    if (&piStack_b8 != (int **)(param_1 + 0xc)) {
      piVar10 = *(int **)(param_1 + 0xc);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 8))(piVar10);
      }
      piVar10 = (int *)0x0;
      *(int **)(param_1 + 0xc) = piStack_b4;
    }
    uStack_8 = 3;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))(piVar10);
    }
    uStack_8 = 0xffffffff;
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(*(int **)(param_1 + 0xc),&pvStack_88);
    if (-1 < iVar3) {
      func_0x00df23e0("Device capture format",pvStack_88);
      uStack_7c = 0;
      iStack_78 = 0;
      iStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      aiStack_64[0] = 0;
      aiStack_64[1] = 0;
      uStack_5c = 0;
      cVar2 = func_0x00df2220(&uStack_7c,pvStack_88);
      if (cVar2 == '\0') {
        CoTaskMemFree(pvStack_88);
        uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
      }
      else {
        CoTaskMemFree(pvStack_88);
        pvStack_88 = (LPVOID)0x0;
        if ((uStack_7c._2_2_ != 6) || (cStack_81 = '\x01', ((byte)uStack_68 & 0x3f) != 0x3f)) {
          cStack_81 = '\0';
        }
        iVar3 = *(int *)(param_1 + -4);
        uStack_94 = func_0x00e87db0((ulonglong)*(uint *)(iVar3 + 0xc) * 10000000,
                                    *(undefined4 *)(iVar3 + 4),0);
        aiStack_b0[1] = 1000000;
        aiStack_b0[2] = 0;
        piVar10 = aiStack_b0 + 1;
        if (999999 < uStack_94) {
          piVar10 = (int *)&uStack_94;
        }
        uStack_5c = 0;
        iStack_78 = 0;
        iStack_74 = 0;
        uStack_70 = 0;
        iVar8 = 8;
        uStack_6c = 0;
        uStack_68 = 0;
        aiStack_64[0] = 0;
        aiStack_64[1] = 0;
        aiStack_b0[3] = *piVar10;
        aiStack_b0[2] = piVar10[1];
        uStack_7c = 0xfffe;
        uVar7 = 1;
        switch(*(undefined1 *)(iVar3 + 0x10)) {
        case 0:
          uStack_7c = 0x1fffe;
          uStack_68 = 4;
          break;
        case 1:
          uVar7 = 2;
          uStack_68 = 3;
          uStack_7c = 0x2fffe;
          break;
        case 2:
          uVar7 = 4;
          uStack_68 = 0x33;
          uStack_7c = 0x4fffe;
          break;
        case 3:
          uStack_8c = 0x3f;
          uVar7 = 6;
          uStack_68 = 0x60f;
          if (cStack_81 != '\0') {
            uStack_68 = 0x3f;
          }
          uStack_7c = 0x6fffe;
          break;
        case 4:
          uVar7 = 7;
          uStack_68 = 0x70f;
          uStack_7c = 0x7fffe;
          break;
        case 5:
          uStack_68 = 0x63f;
          uStack_7c = 0x8fffe;
          uVar7 = 8;
          break;
        case 6:
          uStack_68 = 0x2d63f;
          uStack_7c = 0xcfffe;
          uVar7 = 0xc;
          break;
        case 7:
        case 8:
          goto LAB_00df7734;
        default:
          uStack_7c._2_2_ = 0;
          uVar7 = uStack_7c._2_2_;
        }
        switch(*(undefined1 *)(iVar3 + 0x11)) {
        case 0:
        case 1:
          uStack_70 = 0x80000;
          aiStack_64[0] = 1;
          aiStack_64[1] = 0x100000;
          uStack_5c = 0x719b3800aa000080;
          break;
        case 2:
        case 3:
          iVar8 = 0x10;
          uStack_70 = 0x100000;
          aiStack_64[0] = 1;
          aiStack_64[1] = 0x100000;
          uStack_5c = 0x719b3800aa000080;
          break;
        case 4:
        case 5:
          iVar8 = 0x20;
          uStack_70 = 0x200000;
          aiStack_64[0] = 1;
          aiStack_64[1] = 0x100000;
          uStack_5c = 0x719b3800aa000080;
          break;
        case 6:
          iVar8 = 0x20;
          uStack_70 = 0x200000;
          aiStack_64[0] = 3;
          aiStack_64[1] = 0x100000;
          uStack_5c = 0x719b3800aa000080;
          break;
        default:
          iVar8 = 0;
        }
        iStack_78 = *(int *)(iVar3 + 4);
        iStack_74 = (int)(iVar8 * (uint)uVar7) >> 3;
        uStack_70 = CONCAT22(uStack_70._2_2_,(short)iStack_74);
        iStack_74 = iStack_74 * iStack_78;
        uStack_6c = CONCAT22((short)iVar8,0x16);
        func_0x00df23e0("Requesting capture format",&uStack_7c);
        iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))
                          (*(int **)(param_1 + 0xc),0,&uStack_7c,&pvStack_88);
        lVar1 = uStack_94;
        if (iVar3 < 0) {
          if (1 < DAT_012ba4e8) {
            func_0x00ddf410(2,DAT_013e0188,"Failed to check capture format support: 0x%08lx\n",iVar3
                           );
          }
          iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))
                            (*(int **)(param_1 + 0xc),&pvStack_88);
          lVar1 = uStack_94;
          if (iVar3 < 0) {
            if (DAT_012ba4e8 < 1) goto LAB_00df7739;
            pcVar14 = "Failed to find a supported capture format: 0x%08lx\n";
            goto LAB_00df6dc7;
          }
        }
        uStack_94._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
        iVar3 = *(int *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x28) = 0;
        if (iVar3 != 0) {
          uStack_94 = lVar1;
          func_0x00ddbb20(iVar3);
        }
        uStack_9c = uStack_9c & 0xffffff00;
        uStack_98 = 0;
        uStack_94._0_4_ = 0;
        uStack_94._4_4_ = uStack_94._4_4_ & 0xffffff00;
        *(uint *)(param_1 + 0x18) = uStack_9c;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(uint *)(param_1 + 0x24) = uStack_94._4_4_;
        if (pvStack_88 == (LPVOID)0x0) {
LAB_00df723e:
          piVar10 = aiStack_64;
          piVar9 = &DAT_010dca04;
          uVar12 = 0xc;
          do {
            if (*piVar10 != *piVar9) {
              piVar10 = aiStack_64;
              piVar9 = &DAT_010dca14;
              uVar12 = 0xc;
              goto LAB_00df72b0;
            }
            piVar10 = piVar10 + 1;
            piVar9 = piVar9 + 1;
            bVar13 = 3 < uVar12;
            uVar12 = uVar12 - 4;
          } while (bVar13);
          if (uStack_70._2_2_ == 8) {
            cVar2 = '\x01';
          }
          else if (uStack_70._2_2_ == 0x10) {
            cVar2 = '\x02';
          }
          else {
            if (uStack_70._2_2_ != 0x20) {
              uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
              if (0 < DAT_012ba4e8) {
                pcVar14 = "Unhandled integer bit depth: %d\n";
                goto LAB_00df76bb;
              }
              goto LAB_00df7734;
            }
            cVar2 = '\x04';
          }
LAB_00df72d5:
          iVar3 = *(int *)(param_1 + -4);
          iStack_80 = CONCAT31(iStack_80._1_3_,cVar2);
          if ((*(char *)(iVar3 + 0x10) == '\0') && (uStack_7c._2_2_ != 1)) {
            uStack_98 = (uint)uStack_7c._2_2_;
            uStack_8c = (1 << ((byte)(uStack_7c >> 0x10) & 0x1f)) - 1;
            uStack_94._0_4_ = uStack_8c;
            if ((uStack_68 & 8) != 0) {
              uVar12 = (uStack_68 & 0xf) - ((uStack_68 & 0xf) >> 1 & 0x55555555);
              uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
              uStack_94._0_4_ =
                   uStack_8c &
                   ~(1 << ((((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18) - 1 & 0x1f));
            }
            uStack_9c = CONCAT31(uStack_9c._1_3_,cVar2);
            uStack_94._4_4_ = (uStack_7c >> 0x18) << 8;
            *(uint *)(param_1 + 0x18) = uStack_9c;
            *(uint *)(param_1 + 0x1c) = uStack_98;
            *(uint *)(param_1 + 0x20) = (uint)uStack_94;
            *(uint *)(param_1 + 0x24) = uStack_94._4_4_;
            if (2 < DAT_012ba4e8) {
              uVar4 = func_0x00dfeae0(iStack_80);
              func_0x00ddf410(3,DAT_013e0188,"Created %s multichannel-to-mono converter\n",uVar4);
              iVar3 = *(int *)(param_1 + -4);
            }
            cVar2 = '\x06';
            iStack_80 = CONCAT31(iStack_80._1_3_,6);
          }
          else if ((*(char *)(iVar3 + 0x10) == '\x01') && (uStack_7c._2_2_ == 1)) {
            uStack_9c = CONCAT31(uStack_9c._1_3_,cVar2);
            uStack_98 = 1;
            uStack_94._0_4_ = 1;
            uStack_94._4_4_ = CONCAT31(uStack_94._5_3_,1);
            *(uint *)(param_1 + 0x18) = uStack_9c;
            *(undefined4 *)(param_1 + 0x1c) = 1;
            *(undefined4 *)(param_1 + 0x20) = 1;
            *(uint *)(param_1 + 0x24) = uStack_94._4_4_;
            if (2 < DAT_012ba4e8) {
              uVar4 = func_0x00dfeae0(iStack_80);
              func_0x00ddf410(3,DAT_013e0188,"Created %s mono-to-stereo converter\n",uVar4);
              iVar3 = *(int *)(param_1 + -4);
            }
            cVar2 = '\x06';
            iStack_80 = CONCAT31(iStack_80._1_3_,6);
          }
          if ((*(int *)(iVar3 + 4) != iStack_78) || (*(char *)(iVar3 + 0x11) != cVar2)) {
            uVar4 = func_0x00dfe9f0(*(undefined1 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14));
            uVar4 = func_0x00e34d00((int)&uStack_94 + 4,iStack_80,
                                    *(undefined1 *)(*(int *)(param_1 + -4) + 0x11),uVar4,iStack_78,
                                    *(undefined4 *)(*(int *)(param_1 + -4) + 4),5);
            func_0x00df0110(uVar4);
            if (uStack_94._4_4_ != 0) {
              func_0x00ddbb20(uStack_94._4_4_);
            }
            if (*(int *)(param_1 + 0x28) == 0) {
              uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
              if (0 < DAT_012ba4e8) {
                iVar3 = *(int *)(param_1 + -4);
                uVar4 = *(undefined4 *)(iVar3 + 4);
                uStack_94._4_4_ = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar3 + 0x11));
                uStack_8c = CONCAT31((int3)((uint)*(int *)(param_1 + -4) >> 8),
                                     *(undefined1 *)(*(int *)(param_1 + -4) + 0x10));
                uVar5 = func_0x00dfeae0(iStack_80,iStack_78);
                uVar4 = func_0x00dfeae0(uStack_94._4_4_,uVar4,uVar5);
                uVar4 = func_0x00dfea60(uStack_8c,uVar4);
                func_0x00ddf410(1,DAT_013e0188,
                                "Failed to create converter for %s format, dst: %s %uhz, src: %s %luhz\n"
                                ,uVar4);
                uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
              }
              goto LAB_00df7734;
            }
            if (2 < DAT_012ba4e8) {
              iVar3 = *(int *)(param_1 + -4);
              uVar4 = *(undefined4 *)(iVar3 + 4);
              uStack_94._4_4_ = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar3 + 0x11));
              uStack_8c = CONCAT31((int3)((uint)*(int *)(param_1 + -4) >> 8),
                                   *(undefined1 *)(*(int *)(param_1 + -4) + 0x10));
              uVar5 = func_0x00dfeae0(iStack_80,iStack_78);
              uVar4 = func_0x00dfeae0(uStack_94._4_4_,uVar4,uVar5);
              uVar4 = func_0x00dfea60(uStack_8c,uVar4);
              func_0x00ddf410(3,DAT_013e0188,
                              "Created converter for %s format, dst: %s %uhz, src: %s %luhz\n",uVar4
                             );
            }
          }
          iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                            (*(int **)(param_1 + 0xc),0,0x40000,aiStack_b0[3],aiStack_b0[2],0,0,
                             &uStack_7c,0);
          if (iVar3 < 0) {
            uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
            if (DAT_012ba4e8 < 1) goto LAB_00df7739;
            pcVar14 = "Failed to initialize audio client: 0x%08lx\n";
          }
          else {
            uStack_a0 = 0;
            uStack_c0 = 0;
            iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
            if ((iVar3 < 0) ||
               (iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                                  (*(int **)(param_1 + 0xc),&uStack_a0), iVar3 < 0)) {
              if (DAT_012ba4e8 < 1) goto LAB_00df7739;
              pcVar14 = "Failed to get buffer size: 0x%08lx\n";
            }
            else {
              iVar3 = *(int *)(param_1 + -4);
              uVar4 = func_0x00df2390(&uStack_c0,*(undefined4 *)(iVar3 + 4));
              *(undefined4 *)(iVar3 + 8) = uVar4;
              *(undefined4 *)(*(int *)(param_1 + -4) + 0xc) = uStack_a0;
              uVar4 = func_0x00df4570(0);
              puVar6 = (undefined4 *)func_0x00e18f20(aiStack_b0 + 3,uStack_a0,uVar4);
              uVar4 = *puVar6;
              *puVar6 = 0;
              iVar3 = *(int *)(param_1 + 0x2c);
              *(undefined4 *)(param_1 + 0x2c) = uVar4;
              if (iVar3 != 0) {
                func_0x00ddbb20(iVar3);
              }
              if (aiStack_b0[3] != 0) {
                func_0x00ddbb20(aiStack_b0[3]);
              }
              iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))
                                (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
              uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
              if ((-1 < iVar3) ||
                 (uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94), DAT_012ba4e8 < 1))
              goto LAB_00df7739;
              pcVar14 = "Failed to set event handle: 0x%08lx\n";
            }
          }
          goto LAB_00df6dc7;
        }
        func_0x00df23e0("Got capture format",pvStack_88);
        cVar2 = func_0x00df2220(&uStack_7c,pvStack_88);
        if (cVar2 == '\0') {
          CoTaskMemFree(pvStack_88);
          uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
        }
        else {
          CoTaskMemFree(pvStack_88);
          pvStack_88 = (LPVOID)0x0;
          cVar2 = func_0x00df1880();
          if (cVar2 != '\0') goto LAB_00df723e;
          uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
          if (0 < DAT_012ba4e8) {
            puVar11 = &DAT_0112e1b4;
            iVar3 = *(int *)(iStack_80 + -4);
            if (uStack_7c._2_2_ != 1) {
              puVar11 = &DAT_01141e74;
            }
            uStack_8c = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar3 + 0x11));
            iStack_80 = CONCAT31((int3)((uint)*(int *)(iStack_80 + -4) >> 8),
                                 *(undefined1 *)(*(int *)(iStack_80 + -4) + 0x10));
            uVar4 = func_0x00dfeae0(uStack_8c,*(undefined4 *)(iVar3 + 4),uStack_68,uStack_7c._2_2_,
                                    puVar11,uStack_70 >> 0x10,iStack_78);
            uVar4 = func_0x00dfea60(iStack_80,uVar4);
            func_0x00ddf410(1,DAT_013e0188,
                            "Failed to match format, wanted: %s %s %uhz, got: 0x%08lx mask %d channel%s %d-bit %luhz\n"
                            ,uVar4);
            uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
          }
        }
      }
LAB_00df7734:
      goto LAB_00df7739;
    }
    uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
    if (DAT_012ba4e8 < 1) goto LAB_00df7739;
    pcVar14 = "Failed to get capture format: 0x%08lx\n";
  }
LAB_00df6dc7:
  func_0x00ddf410(1,DAT_013e0188,pcVar14,iVar3);
LAB_00df7739:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
  while( true ) {
    piVar10 = piVar10 + 1;
    piVar9 = piVar9 + 1;
    bVar13 = uVar12 < 4;
    uVar12 = uVar12 - 4;
    if (bVar13) break;
LAB_00df72b0:
    if (*piVar10 != *piVar9) {
      if (0 < DAT_012ba4e8) {
        snprintf(auStack_54,0x40,"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",aiStack_64[0]
                 ,aiStack_64[1] & 0xffff,(uint)aiStack_64[1] >> 0x10,(undefined1)uStack_5c,
                 uStack_5c._1_1_,uStack_5c._2_1_,uStack_5c._3_1_,uStack_5c._4_1_,uStack_5c._5_1_,
                 uStack_5c._6_1_,uStack_5c._7_1_);
        func_0x00ddf410(1,DAT_013e0188,"Unhandled format sub-type: %s\n",auStack_54);
      }
      goto LAB_00df7734;
    }
  }
  if (uStack_70._2_2_ == 0x20) {
    cVar2 = '\x06';
    goto LAB_00df72d5;
  }
  uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
  if (DAT_012ba4e8 < 1) goto LAB_00df7734;
  pcVar14 = "Unhandled float bit depth: %d\n";
LAB_00df76bb:
  func_0x00ddf410(1,DAT_013e0188,pcVar14,uStack_70._2_2_);
  uStack_94 = CONCAT44(uStack_94._4_4_,(uint)uStack_94);
  goto LAB_00df7734;
}



// WARNING: Removing unreachable block (ram,0x00df8262)

void __fastcall FUN_00df77a0(int param_1)

{
  void *pvVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *_Dst;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  char *pcVar15;
  undefined4 uVar16;
  int **ppiVar17;
  int iStack_c8;
  short asStack_c4 [4];
  int iStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  undefined8 uStack_94;
  size_t sStack_8c;
  int *piStack_88;
  LPVOID pvStack_84;
  char cStack_7d;
  undefined1 auStack_7c [64];
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int aiStack_24 [2];
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ded1;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_ac = 0;
  piVar9 = (int *)(param_1 + 0xc);
  uStack_8 = 0;
  iStack_9c = param_1;
  if (&iStack_ac != piVar9) {
    piVar8 = (int *)*piVar9;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8,uStack_14);
    }
    *piVar9 = 0;
  }
  uStack_8 = 0xffffffff;
  iVar5 = (**(code **)(**(int **)(param_1 + 8) + 0xc))
                    (*(int **)(param_1 + 8),&DAT_010e7098,1,0,&piStack_b0);
  if (iVar5 < 0) {
    if (DAT_012ba4e8 < 1) goto LAB_00df8479;
    pcVar15 = "Failed to reactivate audio client: 0x%08lx\n";
    goto LAB_00df8467;
  }
  piStack_b4 = piStack_b0;
  uStack_8 = 2;
  piVar9 = piStack_b0;
  if (&piStack_b4 != (int **)(param_1 + 0xc)) {
    piVar9 = *(int **)(param_1 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    piVar9 = (int *)0x0;
    *(int **)(param_1 + 0xc) = piStack_b0;
  }
  uStack_8 = 3;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  uStack_8 = 0xffffffff;
  iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(*(int **)(param_1 + 0xc),&pvStack_84);
  if (iVar5 < 0) {
    if (DAT_012ba4e8 < 1) goto LAB_00df8479;
    pcVar15 = "Failed to get mix format: 0x%08lx\n";
    goto LAB_00df8467;
  }
  func_0x00df23e0("Device mix format",pvStack_84);
  cVar3 = func_0x00df2220(&uStack_3c,pvStack_84);
  if (cVar3 == '\0') {
    CoTaskMemFree(pvStack_84);
    goto LAB_00df8479;
  }
  CoTaskMemFree(pvStack_84);
  pvStack_84 = (LPVOID)0x0;
  uVar16 = *(undefined4 *)(*(int *)(param_1 + -4) + 4);
  uStack_a8 = func_0x00e87db0((ulonglong)*(uint *)(*(int *)(param_1 + -4) + 8) * 10000000,uVar16,0);
  uVar13 = func_0x00e87db0((ulonglong)*(uint *)(*(int *)(param_1 + -4) + 0xc) * 10000000,uVar16,0);
  uStack_a0 = (undefined4)((ulonglong)uVar13 >> 0x20);
  sStack_8c = (size_t)uVar13;
  cStack_7d = '\0';
  if ((*(byte *)(*(int *)(param_1 + -4) + 0x38) & 1) == 0) {
    *(uint *)(*(int *)(param_1 + -4) + 4) = uStack_38;
  }
  iVar5 = *(int *)(param_1 + -4);
  bVar2 = (byte)uStack_28;
  if ((*(uint *)(iVar5 + 0x38) >> 1 & 1) == 0) {
    if (uStack_3c._2_2_ < 0xc) {
      if (7 < uStack_3c._2_2_) goto LAB_00df7991;
      if (6 < uStack_3c._2_2_) goto LAB_00df79ad;
      if (5 < uStack_3c._2_2_) goto LAB_00df79c9;
      if (uStack_3c._2_2_ < 4) {
        if (1 < uStack_3c._2_2_) goto LAB_00df7a11;
        if (uStack_3c._2_2_ != 0) goto LAB_00df7a2b;
      }
      else {
LAB_00df79fb:
        if ((bVar2 & 0x3f) == 0x33) {
          *(undefined1 *)(iVar5 + 0x10) = 2;
          goto LAB_00df7a7a;
        }
LAB_00df7a11:
        if (((bVar2 & 3) == 3) || (uStack_28 == 0)) {
          *(undefined1 *)(iVar5 + 0x10) = 1;
          goto LAB_00df7a7a;
        }
LAB_00df7a2b:
        if (((bVar2 & 7) == 4) || (uStack_28 == 0)) {
          *(undefined1 *)(iVar5 + 0x10) = 0;
          goto LAB_00df7a7a;
        }
      }
      if (0 < DAT_012ba4e8) {
        func_0x00ddf410(1,DAT_013e0188,"Unhandled channel config: %d -- 0x%08lx\n",uStack_3c._2_2_,
                        uStack_28);
        uVar13 = CONCAT44(uStack_a0,sStack_8c);
      }
    }
    else if ((uStack_28 & 0x3ffff) == 0x2d63f) {
      *(undefined1 *)(iVar5 + 0x10) = 5;
    }
    else {
LAB_00df7991:
      if ((uStack_28 & 0x7ff) == 0x63f) {
        *(undefined1 *)(iVar5 + 0x10) = 5;
      }
      else {
LAB_00df79ad:
        if ((uStack_28 & 0x7ff) == 0x70f) {
          *(undefined1 *)(iVar5 + 0x10) = 4;
        }
        else {
LAB_00df79c9:
          if ((uStack_28 & 0x7ff) == 0x60f) {
            *(undefined1 *)(iVar5 + 0x10) = 3;
          }
          else {
            if ((bVar2 & 0x3f) != 0x3f) goto LAB_00df79fb;
            *(undefined1 *)(iVar5 + 0x10) = 3;
            cStack_7d = '\x01';
          }
        }
      }
    }
  }
  else if ((uStack_3c._2_2_ != 6) || (cStack_7d = '\x01', (bVar2 & 0x3f) != 0x3f)) {
    cStack_7d = '\0';
  }
LAB_00df7a7a:
  uStack_a0 = (undefined4)((ulonglong)uVar13 >> 0x20);
  sStack_8c = (size_t)uVar13;
  iVar5 = *(int *)(param_1 + -4);
  uStack_3c = CONCAT22(uStack_3c._2_2_,0xfffe);
  uVar7 = 8;
  piStack_88 = (int *)0x1;
  switch(*(undefined1 *)(iVar5 + 0x10)) {
  case 0:
    uVar4 = 1;
    uStack_28 = 4;
    break;
  case 2:
    uVar4 = 4;
    uStack_28 = 0x33;
    break;
  case 3:
    uStack_3c = 0x6fffe;
    uStack_28 = 0x60f;
    if (cStack_7d != '\0') {
      uStack_28 = 0x3f;
    }
    goto LAB_00df7b28;
  case 4:
    uVar4 = 7;
    uStack_28 = 0x70f;
    break;
  case 5:
  case 7:
    uStack_3c = 0x8fffe;
    uStack_28 = 0x63f;
    goto LAB_00df7b28;
  case 6:
    uVar4 = 0xc;
    uStack_28 = 0x2d63f;
    break;
  case 8:
    *(undefined1 *)(iVar5 + 0x10) = 1;
    iVar5 = *(int *)(param_1 + -4);
  case 1:
    uVar4 = 2;
    uStack_28 = 3;
    break;
  default:
    goto LAB_00df7b28;
  }
  uStack_3c = CONCAT22(uVar4,0xfffe);
LAB_00df7b28:
  switch(*(undefined1 *)(iVar5 + 0x11)) {
  case 0:
    *(undefined1 *)(iVar5 + 0x11) = 1;
  case 1:
    uStack_30._2_2_ = 8;
    uStack_2c = CONCAT22(8,(undefined2)uStack_2c);
    aiStack_24[0] = 1;
    aiStack_24[1] = 0x100000;
    uStack_1c = 0x80;
    uStack_1b = 0;
    uStack_1a = 0;
    uStack_19 = 0xaa;
    uStack_18 = 0;
    uStack_17 = 0x38;
    uStack_16 = 0x9b;
    uStack_15 = 0x71;
    break;
  case 3:
    *(undefined1 *)(iVar5 + 0x11) = 2;
  case 2:
    uVar7 = 0x10;
    uStack_2c = CONCAT22(0x10,(undefined2)uStack_2c);
    uStack_30._2_2_ = 0x10;
    aiStack_24[0] = 1;
    aiStack_24[1] = 0x100000;
    uStack_1c = 0x80;
    uStack_1b = 0;
    uStack_1a = 0;
    uStack_19 = 0xaa;
    uStack_18 = 0;
    uStack_17 = 0x38;
    uStack_16 = 0x9b;
    uStack_15 = 0x71;
    break;
  case 5:
    *(undefined1 *)(iVar5 + 0x11) = 4;
  case 4:
    uVar7 = 0x20;
    uStack_2c = CONCAT22(0x20,(undefined2)uStack_2c);
    uStack_30._2_2_ = 0x20;
    aiStack_24[0] = 1;
    aiStack_24[1] = 0x100000;
    uStack_1c = 0x80;
    uStack_1b = 0;
    uStack_1a = 0;
    uStack_19 = 0xaa;
    uStack_18 = 0;
    uStack_17 = 0x38;
    uStack_16 = 0x9b;
    uStack_15 = 0x71;
    break;
  case 6:
    uVar7 = 0x20;
    uStack_2c = CONCAT22(0x20,(undefined2)uStack_2c);
    uStack_30._2_2_ = 0x20;
    aiStack_24[0] = 3;
    aiStack_24[1] = 0x100000;
    uStack_1c = 0x80;
    uStack_1b = 0;
    uStack_1a = 0;
    uStack_19 = 0xaa;
    uStack_18 = 0;
    uStack_17 = 0x38;
    uStack_16 = 0x9b;
    uStack_15 = 0x71;
    break;
  default:
    uVar7 = (uint)uStack_30._2_2_;
  }
  uStack_38 = *(uint *)(*(int *)(param_1 + -4) + 4);
  iVar5 = uVar7 * (uStack_3c >> 0x10);
  uVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  uStack_30 = CONCAT22(uStack_30._2_2_,(short)uVar7);
  iStack_34 = (uVar7 & 0xffff) * uStack_38;
  func_0x00df23e0("Requesting playback format",&uStack_3c);
  iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))
                    (*(int **)(param_1 + 0xc),0,&uStack_3c,&pvStack_84);
  if (iVar5 < 0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Failed to check format support: 0x%08lx\n",iVar5);
    }
    iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(*(int **)(param_1 + 0xc),&pvStack_84);
    if (-1 < iVar5) goto LAB_00df7c4a;
    if (DAT_012ba4e8 < 1) goto LAB_00df8479;
    pcVar15 = "Failed to find a supported format: 0x%08lx\n";
  }
  else {
LAB_00df7c4a:
    if (pvStack_84 != (LPVOID)0x0) {
      func_0x00df23e0("Got playback format",pvStack_84);
      cVar3 = func_0x00df2220(&uStack_3c);
      if (cVar3 == '\0') {
        CoTaskMemFree(pvStack_84);
        goto LAB_00df8479;
      }
      CoTaskMemFree(pvStack_84);
      puVar6 = (undefined4 *)(*(int *)(param_1 + -4) + 0x20);
      pvStack_84 = (LPVOID)0x0;
      if (0xf < *(uint *)(*(int *)(param_1 + -4) + 0x34)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      cVar3 = func_0x00dfcab0(puVar6,&DAT_010d2178,"allow-resampler",1);
      iVar5 = *(int *)(param_1 + -4);
      if (cVar3 == '\0') {
        *(uint *)(iVar5 + 4) = uStack_38;
      }
      else {
        uVar7 = *(uint *)(iVar5 + 4);
        if (uStack_38 < *(uint *)(iVar5 + 4)) {
          uVar7 = uStack_38;
        }
        *(uint *)(iVar5 + 4) = uVar7;
      }
      iVar5 = *(int *)(param_1 + -4);
      bVar2 = (byte)uStack_28;
      if ((*(uint *)(iVar5 + 0x38) >> 1 & 1) == 0) goto LAB_00df7d0b;
      switch(*(undefined1 *)(iVar5 + 0x10)) {
      case 0:
        if (uStack_3c._2_2_ == 0) break;
        if ((bVar2 & 7) != 4) {
joined_r0x00df7ddb:
          if (uStack_28 != 0) break;
        }
        goto LAB_00df7ef0;
      case 1:
        if ((1 < uStack_3c._2_2_) && (((bVar2 & 3) == 3 || (uStack_28 == 0)))) goto LAB_00df7ef0;
        break;
      case 2:
        if (3 < uStack_3c._2_2_) {
          if ((bVar2 & 0x3f) != 0x33) goto joined_r0x00df7ddb;
          goto LAB_00df7ef0;
        }
        break;
      case 3:
        if (5 < uStack_3c._2_2_) {
          if (((uStack_28 & 0x7ff) != 0x60f) && ((bVar2 & 0x3f) != 0x3f)) goto joined_r0x00df7ddb;
          goto LAB_00df7ef0;
        }
        break;
      case 4:
        if (6 < uStack_3c._2_2_) {
          if ((uStack_28 & 0x7ff) != 0x70f) goto joined_r0x00df7ddb;
          goto LAB_00df7ef0;
        }
        break;
      case 5:
      case 7:
        if (7 < uStack_3c._2_2_) {
          if ((uStack_28 & 0x7ff) != 0x63f) goto joined_r0x00df7ddb;
          goto LAB_00df7ef0;
        }
        break;
      case 6:
        if (uStack_3c._2_2_ < 0xc) goto LAB_00df7e09;
        if (((uStack_28 & 0x3ffff) == 0x2d63f) || (uStack_28 == 0)) goto LAB_00df7ef0;
        goto LAB_00df7e0e;
      }
LAB_00df7d0b:
      if (uStack_3c._2_2_ < 0xc) {
LAB_00df7e09:
        if (7 < uStack_3c._2_2_) goto LAB_00df7e0e;
        if (6 < uStack_3c._2_2_) goto LAB_00df7e2c;
        if (5 < uStack_3c._2_2_) goto LAB_00df7e4a;
        if (3 < uStack_3c._2_2_) goto LAB_00df7e71;
        if (1 < uStack_3c._2_2_) goto LAB_00df7e87;
        if (uStack_3c._2_2_ != 0) goto LAB_00df7ea1;
LAB_00df7eb5:
        if (0 < DAT_012ba4e8) {
          func_0x00ddf410(1,DAT_013e0188,"Unhandled extensible channels: %d -- 0x%08lx\n",
                          uStack_3c._2_2_,uStack_28);
        }
        *(undefined1 *)(*(int *)(param_1 + -4) + 0x10) = 1;
        uStack_3c = CONCAT22(2,(short)uStack_3c);
        uStack_28 = 3;
      }
      else if ((uStack_28 & 0x3ffff) == 0x2d63f) {
        *(undefined1 *)(iVar5 + 0x10) = 6;
      }
      else {
LAB_00df7e0e:
        if ((uStack_28 & 0x7ff) == 0x63f) {
          *(undefined1 *)(iVar5 + 0x10) = 5;
        }
        else {
LAB_00df7e2c:
          if ((uStack_28 & 0x7ff) == 0x70f) {
            *(undefined1 *)(iVar5 + 0x10) = 4;
          }
          else {
LAB_00df7e4a:
            if (((uStack_28 & 0x7ff) == 0x60f) || ((bVar2 & 0x3f) == 0x3f)) {
              *(undefined1 *)(iVar5 + 0x10) = 3;
            }
            else {
LAB_00df7e71:
              if ((bVar2 & 0x3f) == 0x33) {
                *(undefined1 *)(iVar5 + 0x10) = 2;
              }
              else {
LAB_00df7e87:
                if (((bVar2 & 3) == 3) || (uStack_28 == 0)) {
                  *(undefined1 *)(iVar5 + 0x10) = 1;
                }
                else {
LAB_00df7ea1:
                  if (((bVar2 & 7) != 4) && (uStack_28 != 0)) goto LAB_00df7eb5;
                  *(undefined1 *)(iVar5 + 0x10) = 0;
                }
              }
            }
          }
        }
      }
LAB_00df7ef0:
      piVar9 = aiStack_24;
      piVar8 = &DAT_010dca04;
      uVar7 = 0xc;
      do {
        if (*piVar9 != *piVar8) {
          piVar9 = aiStack_24;
          piVar8 = &DAT_010dca14;
          uVar7 = 0xc;
          goto LAB_00df7f60;
        }
        piVar9 = piVar9 + 1;
        piVar8 = piVar8 + 1;
        bVar12 = 3 < uVar7;
        uVar7 = uVar7 - 4;
      } while (bVar12);
      iVar5 = *(int *)(param_1 + -4);
      if (uStack_30._2_2_ == 8) {
        *(undefined1 *)(iVar5 + 0x11) = 1;
      }
      else if (uStack_30._2_2_ == 0x10) {
        *(undefined1 *)(iVar5 + 0x11) = 2;
      }
      else if (uStack_30._2_2_ == 0x20) {
        *(undefined1 *)(iVar5 + 0x11) = 4;
      }
      else {
        *(undefined1 *)(iVar5 + 0x11) = 2;
LAB_00df8010:
        uVar4 = 0x10;
LAB_00df8015:
        uStack_30 = CONCAT22(uVar4,(undefined2)uStack_30);
      }
      uStack_2c = CONCAT22(uStack_30._2_2_,(undefined2)uStack_2c);
    }
    piVar9 = *(int **)(param_1 + 8);
    piStack_88 = (int *)0x0;
    *(uint *)(param_1 + 0x2c) = uStack_3c;
    *(uint *)(param_1 + 0x30) = uStack_38;
    *(int *)(param_1 + 0x34) = iStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
    *(uint *)(param_1 + 0x40) = uStack_28;
    *(int *)(param_1 + 0x44) = aiStack_24[0];
    *(int *)(param_1 + 0x48) = aiStack_24[1];
    *(ulonglong *)(param_1 + 0x4c) =
         CONCAT17(uStack_15,
                  CONCAT16(uStack_16,
                           CONCAT15(uStack_17,
                                    CONCAT14(uStack_18,
                                             CONCAT13(uStack_19,
                                                      CONCAT12(uStack_1a,
                                                               CONCAT11(uStack_1b,uStack_1c)))))));
    ppiVar17 = &piStack_88;
    uVar16 = 0;
    uStack_8 = 4;
    iVar5 = (**(code **)(*piVar9 + 0x10))();
    if (iVar5 < 0) {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410();
      }
      uStack_8 = 5;
      if (piStack_88 != (int *)0x0) {
        (**(code **)(*piStack_88 + 8))(piStack_88);
      }
      cStack_7d = '\0';
    }
    else {
      iVar10 = 10;
      asStack_c4[0] = 0;
      asStack_c4[1] = 0;
      asStack_c4[2] = 0;
      asStack_c4[3] = 0;
      iStack_bc = 0;
      uStack_b8 = 0;
      uStack_8 = CONCAT31(uStack_8._1_3_,6);
      iVar5 = (**(code **)(*piStack_88 + 0x14))
                        (piStack_88,&DAT_010e70dc,asStack_c4,piVar9,uVar16,ppiVar17);
      if (((iVar5 < 0) ||
          ((iVar5 = iStack_bc, asStack_c4[0] != 0x13 && (iVar5 = iVar10, asStack_c4[0] != 0)))) &&
         (iVar5 = iVar10, 1 < DAT_012ba4e8)) {
        func_0x00ddf410();
      }
      PropVariantClear((PROPVARIANT *)asStack_c4);
      uStack_8 = 7;
      if (piStack_88 != (int *)0x0) {
        (**(code **)(*piStack_88 + 8))(piStack_88);
      }
      if ((iVar5 == 3) || (iVar5 == 5)) {
        cStack_7d = '\x01';
      }
      else {
        cStack_7d = '\0';
      }
    }
    uStack_8 = 0xffffffff;
    uVar7 = *(uint *)(*(int *)(param_1 + -4) + 0x38);
    uVar11 = uVar7 | 0x20;
    if (cStack_7d == '\0') {
      uVar11 = uVar7 & 0xffffffdf;
    }
    *(uint *)(*(int *)(param_1 + -4) + 0x38) = uVar11;
    func_0x00e0c860();
    iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                      (*(int **)(param_1 + 0xc),0,0x40000,sStack_8c,uStack_a0,0,0,&uStack_3c,0);
    if (iVar5 < 0) {
      if (DAT_012ba4e8 < 1) goto LAB_00df8479;
      pcVar15 = "Failed to initialize audio client: 0x%08lx\n";
    }
    else {
      uStack_98 = 0;
      uStack_94 = 0;
      iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
      if (-1 < iVar5) {
        iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc),&uStack_98)
        ;
        if (-1 < iVar5) {
          cVar3 = func_0x0060bc00(&uStack_94,&uStack_a8);
          if (cVar3 != '\0') {
            uVar16 = uStack_94._4_4_;
            lVar14 = func_0x00e87ec0((undefined4)uStack_94,uStack_94._4_4_,2,0);
            lVar14 = func_0x00e87ec0(lVar14 + uStack_a8,(undefined4)uStack_94,uVar16);
            if (lVar14 < 2) {
              lVar14 = 1;
            }
            uStack_94 = func_0x00e87d70(lVar14,(undefined4)uStack_94,uVar16);
          }
          *(uint *)(param_1 + 0x18) = uStack_98;
          uVar16 = *(undefined4 *)(param_1 + 0x30);
          uVar11 = uStack_98 >> 1;
          uVar7 = func_0x00df2390(&uStack_94,uVar16);
          if (uVar11 < uVar7) {
            uVar7 = uVar11;
          }
          iVar5 = *(int *)(iStack_9c + -4);
          *(uint *)(iStack_9c + 0x1c) = uVar7;
          uVar16 = func_0x00e87db0((ulonglong)uStack_98 * (ulonglong)*(uint *)(iVar5 + 4),uVar16,0);
          *(undefined4 *)(iVar5 + 0xc) = uVar16;
          iVar5 = *(int *)(iStack_9c + -4);
          uVar11 = *(uint *)(iVar5 + 0xc) >> 1;
          uVar7 = func_0x00df2390(&uStack_94,*(undefined4 *)(iVar5 + 4));
          iVar10 = iStack_9c;
          if (uVar11 < uVar7) {
            uVar7 = uVar11;
          }
          *(uint *)(iVar5 + 8) = uVar7;
          func_0x00df1590(0);
          iVar5 = *(int *)(iVar10 + 0x20);
          *(undefined4 *)(iVar10 + 0x20) = 0;
          if (iVar5 != 0) {
            func_0x008ab37e(iVar5);
          }
          iVar5 = *(int *)(iVar10 + -4);
          *(undefined4 *)(iVar10 + 0x24) = 0;
          if (*(int *)(iVar5 + 4) != *(int *)(iVar10 + 0x30)) {
            uVar16 = CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)(iVar5 + 0x11));
            uVar16 = func_0x00e34d00(&sStack_8c,uVar16,uVar16,*(undefined2 *)(iVar10 + 0x2e),
                                     *(int *)(iVar5 + 4),*(int *)(iVar10 + 0x30),5);
            func_0x00df0110(uVar16);
            if (sStack_8c != 0) {
              func_0x00ddbb20();
            }
            sStack_8c = (uint)*(ushort *)(iVar10 + 0x3a) * *(int *)(*(int *)(iVar10 + -4) + 8) *
                        (uint)*(ushort *)(iVar10 + 0x2e) >> 3;
            _Dst = (void *)func_0x008ab843();
            if (_Dst == (void *)0x0) {
              _Dst = (void *)0x0;
            }
            else {
              memset(_Dst,0,sStack_8c);
            }
            piVar9 = (int *)(iVar10 + 0x20);
            if (piVar9 != &iStack_c8) {
              pvVar1 = (void *)*piVar9;
              *piVar9 = (int)_Dst;
              _Dst = pvVar1;
            }
            if (_Dst != (void *)0x0) {
              func_0x008ab37e(_Dst);
            }
            if (2 < DAT_012ba4e8) {
              iVar5 = *(int *)(iVar10 + -4);
              sStack_8c = CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)(iVar5 + 0x11));
              uStack_a0 = CONCAT31((int3)((uint)*(int *)(iVar10 + -4) >> 8),
                                   *(undefined1 *)(*(int *)(iVar10 + -4) + 0x10));
              uVar16 = func_0x00dfeae0(sStack_8c,*(undefined4 *)(iVar10 + 0x30),
                                       *(undefined4 *)(iVar10 + 0x1c),*(undefined4 *)(iVar5 + 4),
                                       *(undefined4 *)(iVar5 + 8));
              uVar16 = func_0x00dfea60(uStack_a0,uVar16);
              func_0x00ddf410(3,DAT_013e0188,
                              "Created converter for %s/%s format, dst: %luhz (%u), src: %uhz (%u)\n"
                              ,uVar16);
            }
          }
          iVar5 = (**(code **)(**(int **)(iVar10 + 0xc) + 0x34))();
          if ((-1 < iVar5) || (DAT_012ba4e8 < 1)) goto LAB_00df8479;
          pcVar15 = "Failed to set event handle: 0x%08lx\n";
          goto LAB_00df8467;
        }
      }
      if (DAT_012ba4e8 < 1) goto LAB_00df8479;
      pcVar15 = "Failed to get audio buffer info: 0x%08lx\n";
    }
  }
LAB_00df8467:
  func_0x00ddf410(1,DAT_013e0188,pcVar15,iVar5);
LAB_00df8479:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
  while( true ) {
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
    bVar12 = uVar7 < 4;
    uVar7 = uVar7 - 4;
    if (bVar12) break;
LAB_00df7f60:
    if (*piVar9 != *piVar8) {
      if (0 < DAT_012ba4e8) {
        snprintf(auStack_7c,0x40,"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",aiStack_24[0]
                 ,aiStack_24[1] & 0xffff,(uint)aiStack_24[1] >> 0x10,uStack_1c,uStack_1b,uStack_1a,
                 uStack_19,uStack_18,uStack_17,uStack_16,uStack_15);
        func_0x00ddf410(1,DAT_013e0188,"Unhandled format sub-type: %s\n",auStack_7c);
      }
      *(undefined1 *)(*(int *)(param_1 + -4) + 0x11) = 2;
      if ((short)uStack_3c != -2) {
        uStack_3c = CONCAT22(uStack_3c._2_2_,(short)piStack_88);
      }
      aiStack_24[0] = 1;
      aiStack_24[1] = 0x100000;
      uStack_1c = 0x80;
      uStack_1b = 0;
      uStack_1a = 0;
      uStack_19 = 0xaa;
      uStack_18 = 0;
      uStack_17 = 0x38;
      uStack_16 = 0x9b;
      uStack_15 = 0x71;
      goto LAB_00df8010;
    }
  }
  *(undefined1 *)(*(int *)(param_1 + -4) + 0x11) = 6;
  uVar4 = 0x20;
  goto LAB_00df8015;
}



void FUN_00df8660(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_44 [2];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6de1d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00df66f0(apuStack_44,2,0,uStack_14);
  uStack_8 = 0;
  iVar3 = func_0x00df45a0();
  uStack_8 = 0xffffffff;
  if (apuStack_44[0] != (undefined4 *)0x0) {
    LOCK();
    iVar2 = apuStack_44[0][1] + -1;
    apuStack_44[0][1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)apuStack_44[0][0x1e] == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*apuStack_44[0];
        apuStack_44[0] = (undefined4 *)0x1;
      }
      else {
        puVar4 = *(undefined4 **)apuStack_44[0][0x1e];
      }
      (*(code *)*puVar4)(apuStack_44[0]);
    }
  }
  if (-1 < iVar3) {
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x00e0c6f0(auStack_3c,1,"Failed to start recording: 0x%lx",iVar3);
  func_0x00e87d2e(auStack_3c,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00df8720(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_44 [2];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6de1d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00df66f0(apuStack_44,2,0,uStack_14);
  uStack_8 = 0;
  iVar3 = func_0x00df45a0();
  uStack_8 = 0xffffffff;
  if (apuStack_44[0] != (undefined4 *)0x0) {
    LOCK();
    iVar2 = apuStack_44[0][1] + -1;
    apuStack_44[0][1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      if ((undefined4 *)apuStack_44[0][0x1e] == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*apuStack_44[0];
        apuStack_44[0] = (undefined4 *)0x1;
      }
      else {
        puVar4 = *(undefined4 **)apuStack_44[0][0x1e];
      }
      (*(code *)*puVar4)(apuStack_44[0]);
    }
  }
  if (-1 < iVar3) {
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  func_0x00e0c6f0(auStack_3c,1,"Failed to start playback: 0x%lx",iVar3);
  func_0x00e87d2e(auStack_3c,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int __fastcall FUN_00df87e0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_40;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6df1d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_40;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_24 = param_1;
  ResetEvent(*(HANDLE *)(param_1 + 0x14));
  puVar1 = (undefined4 *)(param_1 + 0xc);
  puStack_28 = puVar1;
  iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc));
  if (iVar3 < 0) {
    if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,"Failed to start audio client: 0x%08lx\n",iVar3);
      *unaff_FS_OFFSET = iStack_10;
      return iVar3;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,&DAT_010e70b8,&piStack_1c);
    if (-1 < iVar3) {
      piStack_20 = piStack_1c;
      uStack_8 = 0;
      piVar5 = piStack_1c;
      if (&piStack_20 != (int **)(param_1 + 0x10)) {
        piVar5 = *(int **)(param_1 + 0x10);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        piVar5 = (int *)0x0;
        *(int **)(param_1 + 0x10) = piStack_1c;
      }
      uStack_8 = 1;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      uStack_8 = 2;
      *(undefined1 *)(param_1 + 0x30) = 0;
      piStack_18 = (int *)func_0x008ab47d(0x10);
      if (piStack_18 == (int *)0x0) {
        piStack_18 = (int *)0x0;
      }
      else {
        *piStack_18 = param_1 + -8;
        piStack_18[2] = (int)FUN_00df6970;
        piStack_18[3] = 0;
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      iVar4 = func_0x008aafea(0,0,FUN_00df0410,piStack_18,0,&uStack_2c);
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x38) = uStack_2c;
          *(int *)(param_1 + 0x34) = iVar4;
          *unaff_FS_OFFSET = iStack_10;
          return iVar3;
        }
        func_0x008aaff0();
      }
      uStack_2c = 0;
      func_0x00e7304a(6);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
    (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar3;
}



undefined * Catch_All_00df8943(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  func_0x00df1560(unaff_EBP + -0x14);
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = DAT_012ba4e8;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (0 < iVar2) {
    func_0x00ddf410(1,DAT_013e0188,"Failed to start thread\n");
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0x80004005;
  return &DAT_00df899d;
}



int __fastcall FUN_00df89f0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_40;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6df5d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_40;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_24 = param_1;
  ResetEvent(*(HANDLE *)(param_1 + 0x14));
  puVar1 = (undefined4 *)(param_1 + 0xc);
  puStack_28 = puVar1;
  iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc));
  if (iVar3 < 0) {
    if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,"Failed to start audio client: 0x%08lx\n",iVar3);
      *unaff_FS_OFFSET = iStack_10;
      return iVar3;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,&DAT_010e70a8,&piStack_1c);
    if (-1 < iVar3) {
      piStack_20 = piStack_1c;
      uStack_8 = 0;
      piVar5 = piStack_1c;
      if (&piStack_20 != (int **)(param_1 + 0x10)) {
        piVar5 = *(int **)(param_1 + 0x10);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        piVar5 = (int *)0x0;
        *(int **)(param_1 + 0x10) = piStack_1c;
      }
      uStack_8 = 1;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      uStack_8 = 2;
      *(undefined1 *)(param_1 + 0x88) = 0;
      piStack_18 = (int *)func_0x008ab47d(0x10);
      if (piStack_18 == (int *)0x0) {
        piStack_18 = (int *)0x0;
      }
      else {
        *piStack_18 = param_1 + -8;
        piStack_18[2] = (int)FUN_00df53e0;
        piStack_18[3] = 0;
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      iVar4 = func_0x008aafea(0,0,FUN_00df0410,piStack_18,0,&uStack_2c);
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x90) == 0) {
          *(undefined4 *)(param_1 + 0x90) = uStack_2c;
          *(int *)(param_1 + 0x8c) = iVar4;
          *unaff_FS_OFFSET = iStack_10;
          return iVar3;
        }
        func_0x008aaff0();
      }
      uStack_2c = 0;
      func_0x00e7304a(6);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar3;
}



undefined * Catch_All_00df8b5f(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  func_0x00df1560(unaff_EBP + -0x14);
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = DAT_012ba4e8;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (0 < iVar2) {
    func_0x00ddf410(1,DAT_013e0188,"Failed to start thread\n");
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0x80004005;
  return &DAT_00df8bb9;
}



int FUN_00df8c00(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_18 [2];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6df8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar5 = (int *)func_0x00df66f0(apuStack_18,3,0,uVar4);
  piVar2 = (int *)*piVar5;
  uStack_8 = 0;
  if ((piVar2 != (int *)0x0) && (((char)piVar5[1] == '\0' || ((char)piVar2[0x1b] == '\0')))) {
    iVar6 = (**(code **)(*piVar2 + 4))();
    if (apuStack_18[0] != (undefined4 *)0x0) {
      LOCK();
      piVar2 = apuStack_18[0] + 1;
      iVar1 = *piVar2;
      iVar6 = *piVar2;
      *piVar2 = iVar1 + -1;
      UNLOCK();
      if (iVar1 + -1 == 0) {
        if ((undefined4 *)apuStack_18[0][0x1e] == (undefined4 *)0x0) {
          iVar6 = (**(code **)*apuStack_18[0])(1);
          *unaff_FS_OFFSET = iStack_10;
          return iVar6;
        }
        iVar6 = (*(code *)**(undefined4 **)apuStack_18[0][0x1e])(apuStack_18[0]);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
  func_0x00837270(4);
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}



void __fastcall FUN_00df8ca0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6dfbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    iStack_14 = param_1;
    func_0x005e0860(uVar3);
    iStack_14 = 0;
    uStack_8 = 0;
    if (&iStack_14 != piVar1) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *piVar1 = 0;
    }
    uStack_8 = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc));
    (**(code **)(**(int **)(param_1 + 0xc) + 0x30))(*(int **)(param_1 + 0xc));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_00df8d40(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6dfbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x90) != 0)) {
    *(undefined1 *)(param_1 + 0x88) = 1;
    iStack_14 = param_1;
    func_0x005e0860(uVar3);
    iStack_14 = 0;
    uStack_8 = 0;
    if (&iStack_14 != piVar1) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *piVar1 = 0;
    }
    uStack_8 = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_00df8de0(void)

{
  if (DAT_013e02e4 != 0) {
    return 1;
  }
  DAT_013e02e4 = func_0x00e366b0("dsound.dll");
  if (DAT_013e02e4 != 0) {
    DAT_013e02e8 = func_0x00e366a0(DAT_013e02e4,"DirectSoundCreate");
    if ((((DAT_013e02e8 != 0) &&
         (DAT_013e02ec = func_0x00e366a0(DAT_013e02e4,"DirectSoundEnumerateW"), DAT_013e02ec != 0))
        && (DAT_013e02f0 = func_0x00e366a0(DAT_013e02e4,"DirectSoundCaptureCreate"),
           DAT_013e02f0 != 0)) &&
       (DAT_013e02f4 = func_0x00e366a0(DAT_013e02e4,"DirectSoundCaptureEnumerateW"),
       DAT_013e02f4 != 0)) {
      return 1;
    }
    func_0x00e36690(DAT_013e02e4);
    DAT_013e02e4 = 0;
    return 0;
  }
  if (0 < DAT_012ba4e8) {
    func_0x00ddf410(1,DAT_013e0188,"Failed to load dsound.dll\n");
  }
  return 0;
}



void FUN_00df8eb0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  HRESULT HVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6e10e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
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
  uStack_8 = 0;
  uStack_18 = 1;
  uStack_14 = uVar1;
  HVar2 = CoInitialize((LPVOID)0x0);
  if (param_2 == 0) {
    if (DAT_013e02d8 != DAT_013e02dc) {
      func_0x00df9140(DAT_013e02d8,DAT_013e02dc,&DAT_013e02d8,uVar1);
      DAT_013e02dc = DAT_013e02d8;
    }
    iVar3 = (*DAT_013e02ec)(FUN_00df96b0,&DAT_013e02d8);
    iVar4 = DAT_013e02d8;
    iVar5 = DAT_013e02dc;
    if ((iVar3 < 0) && (0 < DAT_012ba4e8)) {
      func_0x00ddf410(1,DAT_013e0188,"Error enumerating DirectSound playback devices (0x%lx)!\n",
                      iVar3);
      iVar4 = DAT_013e02d8;
      iVar5 = DAT_013e02dc;
    }
  }
  else {
    if (param_2 != 1) goto LAB_00df9010;
    if (DAT_013e02cc != DAT_013e02d0) {
      func_0x00df9140(DAT_013e02cc,DAT_013e02d0,&DAT_013e02cc,uVar1);
      DAT_013e02d0 = DAT_013e02cc;
    }
    iVar3 = (*DAT_013e02f4)(FUN_00df96b0,&DAT_013e02cc);
    iVar4 = DAT_013e02cc;
    iVar5 = DAT_013e02d0;
    if ((iVar3 < 0) && (0 < DAT_012ba4e8)) {
      func_0x00ddf410(1,DAT_013e0188,"Error enumerating DirectSound capture devices (0x%lx)!\n",
                      iVar3);
      iVar4 = DAT_013e02cc;
      iVar5 = DAT_013e02d0;
    }
  }
  func_0x00df93d0(auStack_1c,iVar4,iVar5,param_1);
LAB_00df9010:
  if (-1 < HVar2) {
    CoUninitialize();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00df9040(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)func_0x00ddbb30(4,0x28);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = param_2;
      *puVar2 = _anon_F8E7DB26::DSoundPlayback::vftable;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *(undefined1 *)(puVar2 + 7) = 1;
      *(undefined8 *)(puVar2 + 8) = 0;
      *param_1 = puVar2;
      return;
    }
    func_0x0062c530();
    func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  }
  else {
    if (param_3 != 1) {
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined4 *)func_0x00ddbb30(4,0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = param_2;
      *puVar2 = _anon_F8E7DB26::DSoundCapture::vftable;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *param_1 = puVar2;
      return;
    }
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00df9570(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  code *pcStack_c;
  uint uStack_8;
  
  pcStack_c = FUN_00f6e000;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)param_1[3];
  piVar3 = param_1 + 3;
  uStack_8 = 0;
  *param_1 = _anon_F8E7DB26::DSoundCapture::vftable;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,uVar4);
    if (&iStack_18 != piVar3) {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *piVar3 = 0;
    }
    uStack_8 = uStack_8 & 0xffffff00;
  }
  piVar1 = param_1 + 2;
  if (&iStack_1c != piVar1) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      piStack_14 = piVar1;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *piVar1 = 0;
  }
  piStack_14 = param_1 + 2;
  if (param_1[6] != 0) {
    func_0x00ddbb20(param_1[6]);
  }
  piVar1 = piStack_14;
  piVar3 = (int *)*piVar3;
  uStack_8._0_1_ = 3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar1 = (int *)*piVar1;
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
    }
    else {
      _guard_check_icall(param_1,0x1c);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00df9670(undefined4 param_1,uint param_2)

{
  func_0x00df9420();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x28);
  }
  return param_1;
}



void FUN_00df96b0(IID *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int ****ppppiVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  HRESULT HVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *unaff_FS_OFFSET;
  int iStack_8c;
  uint uStack_88;
  LPOLESTR pOStack_84;
  IID *pIStack_80;
  undefined4 *puStack_7c;
  undefined1 uStack_75;
  undefined4 ***apppuStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  int ***pppiStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 ***pppuStack_44;
  int **ppiStack_40;
  int **ppiStack_3c;
  int **ppiStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 auStack_17 [3];
  uint uStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f6e020;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pIStack_80 = param_1;
  puStack_7c = param_4;
  if (param_1 == (IID *)0x0) goto LAB_00df9a34;
  func_0x00ddf8c0(apppuStack_74,param_2,uStack_14);
  puVar6 = (undefined4 *)func_0x005df0b0(0,"OpenAL Soft on ",0xf);
  pppiStack_5c = (int ***)*puVar6;
  uStack_58 = puVar6[1];
  uStack_54 = puVar6[2];
  uStack_50 = puVar6[3];
  uStack_4c = *(undefined8 *)(puVar6 + 4);
  puVar6[4] = 0;
  puVar6[5] = 0xf;
  *(undefined1 *)puVar6 = 0;
  if (uStack_60 < 0x10) {
LAB_00df9764:
    uVar11 = (uint)uStack_4c;
    ppppiVar7 = &pppiStack_5c;
    if (0xf < uStack_4c._4_4_) {
      ppppiVar7 = (int ****)pppiStack_5c;
    }
    iStack_8c = 1;
    uStack_34 = 0;
    uStack_30 = 0;
    pppuStack_44 = (undefined4 ****)0x0;
    ppiStack_40 = (int **)0x0;
    ppiStack_3c = (int **)0x0;
    ppiStack_38 = (int **)0x0;
    if ((uint)uStack_4c < 0x80000000) {
      if ((uint)uStack_4c < 0x10) {
        uStack_34 = (uint)uStack_4c;
        uStack_30 = 0xf;
        pppuStack_44 = *ppppiVar7;
        ppiStack_40 = (int **)ppppiVar7[1];
        ppiStack_3c = (int **)ppppiVar7[2];
        ppiStack_38 = (int **)ppppiVar7[3];
      }
      else {
        uStack_88 = (uint)uStack_4c | 0xf;
        if (uStack_88 < 0x80000000) {
          if (uStack_88 < 0x16) {
            uStack_88 = 0x16;
          }
        }
        else {
          uStack_88 = 0x7fffffff;
        }
        pppuStack_44 = (undefined4 ***)func_0x0046cf00(&pppuStack_44,&uStack_88);
        uStack_30 = uStack_88;
        uStack_34 = uVar11;
        memcpy(pppuStack_44,ppppiVar7,uVar11 + 1);
      }
      while( true ) {
        puVar6 = (undefined4 *)puStack_7c[1];
        puVar13 = (undefined4 *)*puStack_7c;
        if (puVar13 == puVar6) break;
        do {
          ppppuVar9 = &pppuStack_44;
          if (0xf < uStack_30) {
            ppppuVar9 = (undefined4 ****)pppuStack_44;
          }
          puVar12 = puVar13;
          if (0xf < (uint)puVar13[5]) {
            puVar12 = (undefined4 *)*puVar13;
          }
          cVar5 = func_0x0046cf20(puVar12,puVar13[4],ppppuVar9,uStack_34);
        } while ((cVar5 == '\0') && (puVar13 = puVar13 + 10, puVar13 != puVar6));
        if (puVar13 == puVar6) break;
        ppppiVar7 = &pppiStack_5c;
        if (0xf < uStack_4c._4_4_) {
          ppppiVar7 = (int ****)pppiStack_5c;
        }
        func_0x0046a660(ppppiVar7,(uint)uStack_4c);
        func_0x0046a880(&DAT_010dc990,2);
        iStack_8c = iStack_8c + 1;
        if (iStack_8c < 0) {
          iVar8 = func_0x0046ca80(auStack_17,-iStack_8c);
          *(undefined1 *)(iVar8 + -1) = 0x2d;
          iVar8 = iVar8 + -1;
        }
        else {
          iVar8 = func_0x0046ca80(auStack_17,iStack_8c);
        }
        func_0x0046cac0(iVar8,auStack_17,&uStack_75);
        ppppuVar9 = apppuStack_74;
        if (0xf < uStack_60) {
          ppppuVar9 = (undefined4 ****)apppuStack_74[0];
        }
        func_0x0046a880(ppppuVar9,uStack_64);
        if (0xf < uStack_60) {
          uVar11 = uStack_60 + 1;
          ppppuVar9 = (undefined4 ****)apppuStack_74[0];
          if (0xfff < uVar11) {
            ppppuVar9 = (undefined4 ****)apppuStack_74[0][-1];
            uVar11 = uStack_60 + 0x24;
            if (0x1f < (uint)((int)apppuStack_74[0] + (-4 - (int)ppppuVar9))) goto LAB_00df9a60;
          }
          func_0x008ab812(ppppuVar9,uVar11);
        }
      }
      if (puVar6 == (undefined4 *)puStack_7c[2]) {
        func_0x00df91a0(puVar6,&pppuStack_44,pIStack_80);
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *puVar6 = pppuStack_44;
        puVar6[1] = ppiStack_40;
        puVar6[2] = ppiStack_3c;
        puVar6[3] = ppiStack_38;
        *(ulonglong *)(puVar6 + 4) = CONCAT44(uStack_30,uStack_34);
        uVar2 = *(undefined4 *)&pIStack_80->Data2;
        uVar3 = *(undefined4 *)pIStack_80->Data4;
        uVar4 = *(undefined4 *)(pIStack_80->Data4 + 4);
        uStack_34 = 0;
        uStack_30 = 0xf;
        pppuStack_44 = (undefined4 ***)((uint)pppuStack_44 & 0xffffff00);
        puVar6[6] = pIStack_80->Data1;
        puVar6[7] = uVar2;
        puVar6[8] = uVar3;
        puVar6[9] = uVar4;
        puStack_7c[1] = puStack_7c[1] + 0x28;
      }
      iVar8 = puStack_7c[1];
      puVar6 = (undefined4 *)(iVar8 + -0x28);
      pOStack_84 = (LPOLESTR)0x0;
      HVar10 = StringFromCLSID(pIStack_80,&pOStack_84);
      if (-1 < HVar10) {
        if (2 < DAT_012ba4e8) {
          if (0xf < *(uint *)(iVar8 + -0x14)) {
            puVar6 = (undefined4 *)*puVar6;
          }
          func_0x00ddf410(3,DAT_013e0188,"Got device \"%s\", GUID \"%ls\"\n",puVar6,pOStack_84);
        }
        CoTaskMemFree(pOStack_84);
      }
      if (0xf < uStack_30) {
        uVar11 = uStack_30 + 1;
        ppppuVar9 = (undefined4 ****)pppuStack_44;
        if (0xfff < uVar11) {
          ppppuVar9 = (undefined4 ****)pppuStack_44[-1];
          uVar11 = uStack_30 + 0x24;
          if (0x1f < (uint)((int)pppuStack_44 + (-4 - (int)ppppuVar9))) goto LAB_00df9a60;
        }
        func_0x008ab812(ppppuVar9,uVar11);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      pppuStack_44 = (undefined4 ***)((uint)pppuStack_44 & 0xffffff00);
      if (0xf < uStack_4c._4_4_) {
        uVar11 = uStack_4c._4_4_ + 1;
        ppppiVar7 = (int ****)pppiStack_5c;
        if (0xfff < uVar11) {
          ppppiVar7 = (int ****)pppiStack_5c[-1];
          uVar11 = uStack_4c._4_4_ + 0x24;
          if (0x1f < (uint)((int)pppiStack_5c + (-4 - (int)ppppiVar7))) goto LAB_00df9a60;
        }
        func_0x008ab812(ppppiVar7,uVar11);
      }
LAB_00df9a34:
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  else {
    uVar11 = uStack_60 + 1;
    ppppuVar9 = (undefined4 ****)apppuStack_74[0];
    if (uVar11 < 0x1000) {
LAB_00df975a:
      func_0x008ab812(ppppuVar9,uVar11);
      goto LAB_00df9764;
    }
    ppppuVar9 = (undefined4 ****)apppuStack_74[0][-1];
    uVar11 = uStack_60 + 0x24;
    if ((uint)((int)apppuStack_74[0] + (-4 - (int)ppppuVar9)) < 0x20) goto LAB_00df975a;
    func_0x008aaf66();
  }
  func_0x00463570();
LAB_00df9a60:
  func_0x008aaf66();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint __fastcall FUN_00df9a70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (**(char **)(param_1 + 4) == '\0') {
    piVar1 = *(int **)(param_1 + 0x18);
    return *piVar1 - piVar1[1] & piVar1[3];
  }
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = func_0x00dfe9a0(*(undefined1 *)(iVar3 + 0x11));
  iVar3 = func_0x00dfe9f0(*(undefined1 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14));
  uStack_8 = 0;
  uStack_4 = *(undefined4 *)(param_1 + 0x14);
  puVar6 = &uStack_8;
  uStack_c = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  uStack_18 = 0;
  uVar5 = *(uint *)(param_1 + 0x10);
  iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc),0);
  if (-1 < iVar4) {
    uVar5 = ((iStack_14 - iStack_10) + uVar5) % uVar5;
    if (uVar5 == 0) goto LAB_00df9bd3;
    iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))
                      (*(int **)(param_1 + 0xc),iStack_10,uVar5,&uStack_18,&stack0xffffffe4,
                       &stack0xffffffe0,&stack0xffffffdc,0);
    if (-1 < iVar4) {
      func_0x00e19240(uStack_18,unaff_EBX / (uint)(iVar3 * iVar2));
      if ((unaff_EDI != 0) && (puVar6 != (undefined4 *)0x0)) {
        func_0x00e19240(unaff_EDI,(uint)puVar6 / (uint)(iVar3 * iVar2));
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))
                        (*(int **)(param_1 + 0xc),unaff_EBP,unaff_ESI,unaff_EDI,puVar6);
      *(int *)(param_1 + 0x14) = iStack_14;
      if (-1 < iVar4) goto LAB_00df9bd3;
    }
  }
  if (0 < DAT_012ba4e8) {
    func_0x00ddf410(1,DAT_013e0188,"update failed: 0x%08lx\n",iVar4);
  }
  func_0x00e04820(*(undefined4 *)(param_1 + 4),"Failure retrieving capture data: 0x%lx",iVar4);
LAB_00df9bd3:
  piVar1 = *(int **)(param_1 + 0x18);
  return *piVar1 - piVar1[1] & piVar1[3];
}



uint __thiscall FUN_00df9bf0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x18);
  uVar3 = *piVar1 - piVar1[1] & piVar1[3];
  if (uVar3 != 0) {
    uVar2 = piVar1[3];
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    uVar3 = uVar2 & piVar1[1];
    if (uVar2 + 1 < uVar3 + param_3) {
      uVar5 = uVar2 & uVar3 + param_3;
      uVar2 = (uVar2 - uVar3) + 1;
    }
    else {
      uVar5 = 0;
      uVar2 = param_3;
    }
    iVar4 = piVar1[4] * uVar2;
    if (iVar4 != 0) {
      func_0x008ab0e6(param_2,(int)piVar1 + piVar1[4] * uVar3 + 0x30,iVar4);
      param_2 = iVar4 + param_2;
    }
    iVar4 = uVar3 + uVar2;
    if (uVar5 != 0) {
      if (piVar1[4] * uVar5 != 0) {
        func_0x008ab0e6(param_2,piVar1 + 0xc,piVar1[4] * uVar5);
      }
      iVar4 = iVar4 + uVar5;
    }
    piVar1[1] = iVar4;
    return param_3;
  }
  return 0;
}



undefined ** FUN_00df9c00(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e02f8) {
    func_0x008ab40d(&DAT_013e02f8);
    if (DAT_013e02f8 == -1) {
      func_0x008ab7fd(FUN_00f75ba0);
      func_0x008ab3bc(&DAT_013e02f8);
    }
  }
  return &PTR_vftable_012ba6dc;
}



void __fastcall FUN_00df9c60(int param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  uint3 unaff_EDI;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piStack_50;
  char *pcStack_4c;
  uint uVar11;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  pcStack_4c = (char *)0xdf9c77;
  func_0x00e18030();
  pcStack_4c = "alsoft-mixer";
  piStack_50 = (int *)0xdf9c81;
  func_0x00e33a80();
  piStack_50 = *(int **)(param_1 + 0x10);
  pcStack_4c = (char *)&uStack_18;
  uStack_18 = 0x14;
  uStack_14 = 0;
  uStack_c = 0;
  iVar4 = (**(code **)(*piStack_50 + 0xc))();
  if (iVar4 < 0) {
    if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,"Failed to get buffer caps: 0x%lx\n",iVar4);
    }
    func_0x00e04820(*(undefined4 *)(param_1 + 4),"Failure retrieving playback buffer info: 0x%lx",
                    iVar4);
    pcStack_4c = (char *)0xdf9cf1;
    FUN_008ab370();
    return;
  }
  uStack_28 = func_0x00dfe9f0(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10),
                              *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = func_0x00dfe9a0(*(undefined1 *)(iVar4 + 0x11));
  iVar4 = func_0x00dfe9f0(*(undefined1 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
  uStack_24 = iVar4 * iVar5;
  uVar11 = (uint)unaff_EDI;
  uVar8 = *(int *)(*(int *)(param_1 + 4) + 8) * uStack_24;
  uVar10 = 0;
  uStack_3c = 0;
  uStack_30 = uVar8;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),&uStack_3c,0);
  cVar1 = *(char *)(param_1 + 0x1c);
  while( true ) {
    if ((cVar1 != '\0') || (**(char **)(param_1 + 4) == '\0')) {
      FUN_008ab370();
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),&iStack_38,0);
    uVar2 = (ulonglong)((uStack_24 - uVar11) + iStack_38) % (ulonglong)uStack_24;
    uVar7 = (uint)uVar2;
    if (uVar8 <= uVar7) break;
    if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x30))(*(int **)(param_1 + 0x10),0,0,1);
      if (iVar4 < 0) {
        if (0 < DAT_012ba4e8) {
          func_0x00ddf410(1,DAT_013e0188,"Failed to play buffer: 0x%lx\n",iVar4);
        }
        pcVar9 = "Failure starting playback: 0x%lx";
        goto LAB_00df9f7d;
      }
      unaff_EBX = 0x1000000;
    }
    DVar6 = WaitForSingleObjectEx(*(HANDLE *)(param_1 + 0x18),2000,0);
    if ((DVar6 != 0) && (0 < DAT_012ba4e8)) {
      func_0x00ddf410(1,DAT_013e0188,"WaitForSingleObjectEx error: 0x%lx\n",DVar6);
    }
LAB_00df9f20:
    cVar1 = *(char *)(param_1 + 0x1c);
    uVar8 = uStack_3c;
  }
  piStack_50 = (int *)0x0;
  pcStack_4c = (char *)0x0;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                    (*(int **)(param_1 + 0x10),uVar11,uVar7 - (int)(uVar2 % (ulonglong)uStack_3c),
                     &uStack_40,&piStack_50,&stack0xffffffbc,&pcStack_4c,0);
  if (iVar4 == -0x7787ff6a) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Buffer lost, restoring...\n");
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x50))(*(int **)(param_1 + 0x10));
    if (-1 < iVar4) {
      uVar11 = 0;
      unaff_EBX = 0;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                        (*(int **)(param_1 + 0x10),0,uStack_24,&uStack_40,&piStack_50,
                         &stack0xffffffbc,&pcStack_4c,0);
      goto LAB_00df9eae;
    }
  }
  else {
LAB_00df9eae:
    uVar8 = uStack_30;
    uVar3 = uStack_34;
    if (-1 < iVar4) {
      func_0x00e04c70(uStack_40,(uint)piStack_50 / uStack_30,uStack_34);
      if (unaff_EBP != 0) {
        func_0x00e04c70(piStack_50,unaff_EBP / uVar8,uVar3);
      }
      (**(code **)(**(int **)(param_1 + 0x10) + 0x4c))
                (*(int **)(param_1 + 0x10),pcStack_4c,uVar10,piStack_50,unaff_EBP);
      uVar11 = (uint)(pcStack_4c + (int)piStack_50 + uVar11) % uStack_24;
      goto LAB_00df9f20;
    }
  }
  if (0 < DAT_012ba4e8) {
    func_0x00ddf410(1,DAT_013e0188,"Buffer lock error: %#lx\n",iVar4);
  }
  pcVar9 = "Failed to lock output buffer: 0x%lx";
LAB_00df9f7d:
  func_0x00e04820(*(undefined4 *)(param_1 + 4),pcVar9,iVar4);
  FUN_008ab370();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void __thiscall FUN_00df9fc0(char *param_1,char *param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  HRESULT HVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  LPCOLESTR lpsz;
  undefined4 *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  ulong *puVar13;
  char *pcVar14;
  CLSID *pCVar15;
  int extraout_EDX;
  int *unaff_FS_OFFSET;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined8 uStack_b4;
  uint uStack_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  char *pcStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined1 auStack_74 [40];
  CLSID CStack_4c;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6e06b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_a8 = param_2;
  pcStack_a0 = param_1;
  uStack_14 = uVar5;
  if (DAT_013e02cc == DAT_013e02d0) {
    HVar6 = CoInitialize((LPVOID)0x0);
    iVar7 = (*DAT_013e02f4)(FUN_00df96b0,&DAT_013e02cc);
    if ((iVar7 < 0) && (0 < DAT_012ba4e8)) {
      func_0x00ddf410(1,DAT_013e0188,"Error enumerating DirectSound devices (0x%lx)!\n",iVar7);
    }
    if (-1 < HVar6) {
      CoUninitialize();
    }
  }
  pcVar14 = DAT_013e02cc;
  if ((param_2 == (char *)0x0) && (DAT_013e02cc != DAT_013e02d0)) {
    pcStack_a8 = DAT_013e02cc;
    if (0xf < *(uint *)(DAT_013e02cc + 0x14)) {
      pcStack_a8 = *(char **)DAT_013e02cc;
    }
LAB_00dfa07d:
    pcVar9 = pcStack_a0;
    pcStack_a4 = pcVar14 + 0x18;
    iVar7 = *(int *)(pcStack_a0 + 4);
    bVar1 = *(byte *)(iVar7 + 0x11);
    if (((bVar1 != 0) && (bVar1 != 3)) && (iVar8 = bVar1 - 5, iVar8 != 0)) {
      uStack_9c = 0;
      iStack_98 = 0;
      iStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uVar11 = CONCAT31((int3)((uint)iVar8 >> 8),*(undefined1 *)(iVar7 + 0x10));
      pcVar14 = pcStack_a0;
      switch(*(undefined1 *)(iVar7 + 0x10)) {
      case 0:
        uStack_88 = 4;
        break;
      case 1:
        uStack_88 = 3;
        break;
      case 2:
        uStack_88 = 0x33;
        break;
      case 3:
        uStack_88 = 0x60f;
        break;
      case 4:
        uStack_88 = 0x70f;
        break;
      case 5:
        uStack_88 = 0x63f;
        break;
      case 6:
        uStack_88 = 0x2d63f;
        break;
      case 7:
      case 8:
        goto code_r0x00dfa46a;
      }
      uStack_9c = 1;
      uVar4 = func_0x00dfe9f0(*(undefined1 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 0x14));
      uStack_9c = CONCAT22(uVar4,(undefined2)uStack_9c);
      uStack_8c = func_0x00dfe9a0(*(undefined1 *)(*(int *)(pcVar9 + 4) + 0x11));
      iVar8 = (uStack_8c << 3 & 0xffffU) * (uint)uStack_9c._2_2_;
      uVar4 = (undefined2)(uStack_8c << 3);
      iVar7 = *(int *)(pcVar9 + 4);
      uVar5 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
      uStack_ac = uVar5 & 0xffff;
      uStack_90 = CONCAT22(uVar4,(short)uVar5);
      iStack_98 = *(int *)(iVar7 + 4);
      iStack_94 = uStack_ac * iStack_98;
      uStack_8c = uStack_8c << 0x13;
      if (*(char *)(iVar7 + 0x11) == '\x06') {
        uStack_84 = 3;
      }
      else {
        uStack_84 = 1;
      }
      uStack_80 = 0x100000;
      uStack_7c = 0x719b3800aa000080;
      if ((2 < uStack_9c._2_2_) || (*(char *)(iVar7 + 0x11) == '\x06')) {
        uStack_9c = CONCAT22(uStack_9c._2_2_,0xfffe);
        uStack_8c = CONCAT22(uVar4,0x16);
      }
      uStack_bc = 0;
      uStack_b4 = 0;
      uVar5 = (uint)(*(int *)(iVar7 + 4) * 100) / 1000;
      uStack_c8 = 0x1c;
      uStack_c4 = 0;
      if (uVar5 < *(uint *)(iVar7 + 0xc)) {
        uVar5 = *(uint *)(iVar7 + 0xc);
      }
      param_2 = pcVar9 + 8;
      iStack_c0 = uStack_ac * uVar5;
      puStack_b8 = &uStack_9c;
      pcStack_a4 = (char *)(*DAT_013e02f0)(pcStack_a4,param_2,0);
      uVar17 = 0;
      if (-1 < (int)pcStack_a4) {
        (**(code **)(**(int **)param_2 + 0xc))(*(int **)param_2,&uStack_c8,pcVar9 + 0xc);
        puVar10 = (undefined4 *)
                  func_0x00e18f20(&pcStack_a4,*(undefined4 *)(*(int *)(pcVar9 + 4) + 0xc),
                                  uStack_90 & 0xffff,0);
        uVar11 = *puVar10;
        *puVar10 = 0;
        iVar7 = *(int *)(pcVar9 + 0x18);
        *(undefined4 *)(pcVar9 + 0x18) = uVar11;
        if (iVar7 != 0) {
          func_0x00ddbb20(iVar7);
        }
        if (pcStack_a4 != (char *)0x0) {
          func_0x00ddbb20(pcStack_a4);
        }
        *(int *)(pcVar9 + 0x10) = iStack_c0;
        func_0x00e0c860();
        pcVar14 = pcStack_a8;
        do {
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        func_0x0046a660(pcStack_a8,(int)pcVar14 - (int)(pcStack_a8 + 1));
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      goto LAB_00dfa4be;
    }
    if (1 < DAT_012ba4e8) {
      uVar11 = func_0x00dfeae0(bVar1);
      func_0x00ddf410(2,DAT_013e0188,"%s capture samples not supported\n",uVar11);
    }
    uVar11 = func_0x00dfeae0(*(undefined1 *)(*(int *)(pcVar9 + 4) + 0x11));
    pcVar14 = "%s capture samples not supported";
  }
  else {
    if (DAT_013e02cc != DAT_013e02d0) {
      do {
        pcVar9 = param_2;
        do {
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        pcVar12 = pcVar14;
        if (0xf < *(uint *)(pcVar14 + 0x14)) {
          pcVar12 = *(char **)pcVar14;
        }
        cVar3 = func_0x0046cf20(pcVar12,*(undefined4 *)(pcVar14 + 0x10),param_2,
                                (int)pcVar9 - (int)(param_2 + 1),uVar5);
      } while ((cVar3 == '\0') && (pcVar14 = pcVar14 + 0x28, pcVar14 != DAT_013e02d0));
      if (pcVar14 != DAT_013e02d0) goto LAB_00dfa07d;
    }
    CStack_4c.Data1 = 0;
    CStack_4c.Data2 = 0;
    CStack_4c.Data3 = 0;
    CStack_4c.Data4[0] = '\0';
    CStack_4c.Data4[1] = '\0';
    CStack_4c.Data4[2] = '\0';
    CStack_4c.Data4[3] = '\0';
    CStack_4c.Data4[4] = '\0';
    CStack_4c.Data4[5] = '\0';
    CStack_4c.Data4[6] = '\0';
    CStack_4c.Data4[7] = '\0';
    lpsz = (LPCOLESTR)func_0x00ddf7a0(auStack_2c,param_2);
    if (7 < *(uint *)(lpsz + 10)) {
      lpsz = *(LPCOLESTR *)lpsz;
    }
    param_2 = (char *)CLSIDFromString(lpsz,&CStack_4c);
    func_0x00588fe0();
    if ((int)param_2 < 0) {
LAB_00dfa196:
      if (pcVar14 != DAT_013e02d0) goto LAB_00dfa07d;
    }
    else {
      pcVar14 = DAT_013e02cc;
      if (DAT_013e02cc != DAT_013e02d0) {
        do {
          puVar13 = (ulong *)(pcVar14 + 0x18);
          param_2 = (char *)0xc;
          pCVar15 = &CStack_4c;
          while (*puVar13 == pCVar15->Data1) {
            puVar13 = puVar13 + 1;
            pCVar15 = (CLSID *)&pCVar15->Data2;
            bVar16 = param_2 < &DAT_00000004;
            param_2 = param_2 + -4;
            if (bVar16) goto LAB_00dfa196;
          }
          pcVar14 = pcVar14 + 0x28;
        } while (pcVar14 != DAT_013e02d0);
        goto LAB_00dfa196;
      }
    }
    func_0x00e0c6f0(auStack_3c,0,"Device name \"%s\" not found",pcStack_a8);
    uVar11 = func_0x00e87d2e(auStack_3c,&DAT_012818e0);
code_r0x00dfa46a:
    if (1 < DAT_012ba4e8) {
      uVar11 = func_0x00dfea60(uVar11);
      func_0x00ddf410(2,DAT_013e0188,"%s capture not supported\n",uVar11);
    }
    uVar11 = func_0x00dfea60(*(undefined1 *)(*(int *)(pcVar14 + 4) + 0x10));
    pcVar14 = "%s capture not supported";
  }
  uVar17 = 1;
  func_0x00e0c6f0(auStack_3c,1,pcVar14,uVar11);
  func_0x00e87d2e(auStack_3c,&DAT_012818e0);
LAB_00dfa4be:
  func_0x00df1590(uVar17);
  func_0x00df9410(0);
  uStack_8 = 0;
  func_0x00df1560(&pcStack_a0);
  func_0x00df0be0();
  func_0x00df9410(0);
  uStack_8 = 1;
  func_0x00df1560(&pcStack_a0);
  uStack_8 = 0xffffffff;
  func_0x00df0be0();
  func_0x00e0c6f0(auStack_74,1,"Device init failed: 0x%08lx",pcStack_a4);
  DAT_a26000df = func_0x00e87d2e(auStack_74,&DAT_012818e0);
  out(*(undefined4 *)param_2,(short)extraout_EDX);
  DAT_a27e00df = DAT_a26000df;
  *(undefined4 *)(extraout_EDX + -0x5d63ff25) = 0xffffffa4;
  *(undefined4 *)(extraout_EDX + -0x5d63ff29) = 0xffffffa4;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_00dfa580(int param_1,char *param_2)

{
  int *piVar1;
  int **ppiVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  HRESULT HVar7;
  int iVar8;
  HANDLE pvVar9;
  HWND pHVar10;
  char *pcVar11;
  LPCOLESTR lpsz;
  char *pcVar12;
  ulong *puVar13;
  char *pcVar14;
  CLSID *pCVar15;
  char *pcVar16;
  int *unaff_FS_OFFSET;
  bool bVar17;
  undefined4 uVar18;
  int aiStack_64 [3];
  int *piStack_58;
  int iStack_54;
  char *pcStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [24];
  CLSID CStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6e0c5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_50 = param_2;
  iStack_54 = param_1;
  uStack_14 = uVar6;
  if (DAT_013e02d8 == DAT_013e02dc) {
    HVar7 = CoInitialize((LPVOID)0x0);
    iVar8 = (*DAT_013e02ec)(FUN_00df96b0,&DAT_013e02d8);
    if ((iVar8 < 0) && (0 < DAT_012ba4e8)) {
      func_0x00ddf410(1,DAT_013e0188,"Error enumerating DirectSound devices (0x%lx)!\n",iVar8);
    }
    if (-1 < HVar7) {
      CoUninitialize();
    }
  }
  pcVar14 = DAT_013e02dc;
  pcVar16 = DAT_013e02d8;
  if ((pcStack_50 == (char *)0x0) && (DAT_013e02d8 != DAT_013e02dc)) {
    pcStack_50 = DAT_013e02d8;
    if (0xf < *(uint *)(DAT_013e02d8 + 0x14)) {
      pcStack_50 = *(char **)DAT_013e02d8;
    }
  }
  else {
    if (DAT_013e02d8 != DAT_013e02dc) {
      do {
        pcVar12 = pcStack_50;
        do {
          cVar5 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar5 != '\0');
        pcVar11 = pcVar16;
        if (0xf < *(uint *)(pcVar16 + 0x14)) {
          pcVar11 = *(char **)pcVar16;
        }
        cVar5 = func_0x0046cf20(pcVar11,*(undefined4 *)(pcVar16 + 0x10),pcStack_50,
                                (int)pcVar12 - (int)(pcStack_50 + 1),uVar6);
      } while ((cVar5 == '\0') && (pcVar16 = pcVar16 + 0x28, pcVar16 != pcVar14));
      if (pcVar16 != pcVar14) goto LAB_00dfa639;
    }
    CStack_24.Data1 = 0;
    CStack_24.Data2 = 0;
    CStack_24.Data3 = 0;
    CStack_24.Data4[0] = '\0';
    CStack_24.Data4[1] = '\0';
    CStack_24.Data4[2] = '\0';
    CStack_24.Data4[3] = '\0';
    CStack_24.Data4[4] = '\0';
    CStack_24.Data4[5] = '\0';
    CStack_24.Data4[6] = '\0';
    CStack_24.Data4[7] = '\0';
    lpsz = (LPCOLESTR)func_0x00ddf7a0(auStack_3c,pcStack_50);
    if (7 < *(uint *)(lpsz + 10)) {
      lpsz = *(LPCOLESTR *)lpsz;
    }
    HVar7 = CLSIDFromString(lpsz,&CStack_24);
    func_0x00588fe0();
    if (-1 < HVar7) {
      pcVar16 = DAT_013e02d8;
      if (DAT_013e02d8 == DAT_013e02dc) goto LAB_00dfa88f;
      do {
        puVar13 = (ulong *)(pcVar16 + 0x18);
        uVar6 = 0xc;
        pCVar15 = &CStack_24;
        while (*puVar13 == pCVar15->Data1) {
          puVar13 = puVar13 + 1;
          pCVar15 = (CLSID *)&pCVar15->Data2;
          bVar17 = uVar6 < 4;
          uVar6 = uVar6 - 4;
          if (bVar17) goto LAB_00dfa856;
        }
        pcVar16 = pcVar16 + 0x28;
      } while (pcVar16 != DAT_013e02dc);
    }
LAB_00dfa856:
    if (pcVar16 == DAT_013e02dc) goto LAB_00dfa88f;
  }
LAB_00dfa639:
  iVar8 = 0;
  if (*(int *)(iStack_54 + 0x18) == 0) {
    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)(iStack_54 + 0x18) = pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
      iVar8 = -0x7fffbffb;
    }
  }
  piStack_58 = (int *)0x0;
  iStack_8 = 0;
  if ((-1 < iVar8) &&
     (iVar8 = (*DAT_013e02e8)(pcVar16 + 0x18,&piStack_58,0), piVar1 = piStack_58, -1 < iVar8)) {
    uVar18 = 2;
    iVar8 = *piStack_58;
    pHVar10 = GetForegroundWindow();
    iVar8 = (**(code **)(iVar8 + 0x18))(piVar1,pHVar10,uVar18);
    if (-1 < iVar8) {
      aiStack_64[2] = 0;
      iStack_8._0_1_ = 1;
      piVar1 = (int *)(iStack_54 + 0x14);
      if (aiStack_64 + 2 != piVar1) {
        piVar3 = (int *)*piVar1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *piVar1 = 0;
      }
      aiStack_64[1] = 0;
      piVar1 = (int *)(iStack_54 + 0x10);
      iStack_8._0_1_ = 3;
      if (aiStack_64 + 1 != piVar1) {
        piVar3 = (int *)*piVar1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *piVar1 = 0;
      }
      aiStack_64[0] = 0;
      piVar1 = (int *)(iStack_54 + 0xc);
      iStack_8._0_1_ = 5;
      if (aiStack_64 != piVar1) {
        piVar3 = (int *)*piVar1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *piVar1 = 0;
      }
      ppiVar2 = (int **)(iStack_54 + 8);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (&piStack_58 != ppiVar2) {
        piVar1 = *ppiVar2;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = piStack_58;
        piStack_58 = (int *)0x0;
        *ppiVar2 = piVar1;
      }
      pcVar14 = pcStack_50;
      do {
        cVar5 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar5 != '\0');
      func_0x0046a660(pcStack_50,(int)pcVar14 - (int)(pcStack_50 + 1));
      iStack_8 = 7;
      if (piStack_58 != (int *)0x0) {
        (**(code **)(*piStack_58 + 8))(piStack_58);
      }
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  func_0x00e0c6f0(auStack_4c,1,"Device init failed: 0x%08lx",iVar8);
  func_0x00e87d2e(auStack_4c,&DAT_012818e0);
LAB_00dfa88f:
  func_0x00e0c6f0(auStack_4c,0,"Device name \"%s\" not found",pcStack_50);
  func_0x00e87d2e(auStack_4c,&DAT_012818e0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00dfa8c0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int aiStack_49c [3];
  int *piStack_490;
  uint uStack_48c;
  uint *puStack_484;
  int *piStack_480;
  int aiStack_47c [4];
  int *piStack_46c;
  uint uStack_468;
  int aiStack_464 [256];
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  undefined2 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  ushort uStack_3a;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6e19d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_47c[3] = 0;
  piVar9 = param_1 + 5;
  uStack_8 = 0;
  piStack_490 = param_1;
  if (aiStack_47c + 3 != piVar9) {
    piVar1 = (int *)*piVar9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,uStack_14);
    }
    *piVar9 = 0;
  }
  aiStack_47c[2] = 0;
  piVar9 = param_1 + 4;
  uStack_8 = 2;
  if (aiStack_47c + 2 != piVar9) {
    piVar1 = (int *)*piVar9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar9 = 0;
  }
  aiStack_47c[1] = 0;
  piVar9 = param_1 + 3;
  uStack_8 = 4;
  if (aiStack_47c + 1 != piVar9) {
    piVar1 = (int *)*piVar9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar9 = 0;
  }
  iVar5 = param_1[1];
  uStack_8 = 0xffffffff;
  switch(*(undefined1 *)(iVar5 + 0x11)) {
  case 0:
    *(undefined1 *)(iVar5 + 0x11) = 1;
    break;
  case 3:
code_r0x00dfa9af:
    *(undefined1 *)(iVar5 + 0x11) = 2;
    break;
  case 5:
    *(undefined1 *)(iVar5 + 0x11) = 4;
    break;
  case 6:
    if ((*(uint *)(iVar5 + 0x38) >> 2 & 1) == 0) goto code_r0x00dfa9af;
  }
  uStack_468 = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar5 = (**(code **)(*(int *)param_1[2] + 0x20))((int *)param_1[2],&uStack_468);
  if (iVar5 < 0) {
    func_0x00e0c6f0(auStack_64,1,"Failed to get speaker config: 0x%08lx",iVar5);
    uVar3 = func_0x00e87d2e(auStack_64,&DAT_012818e0);
    *param_1 = *piVar9;
    *(undefined1 *)(param_1 + 2) = uVar3;
    *(undefined1 *)((int)param_1 + 9) = 0xaa;
    out(0xaa,0xc10000c0);
    *(undefined1 **)((int)param_1 + 10) = &DAT_c10000c0;
    *(undefined1 *)((int)param_1 + 0xe) = 0xc0;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = param_1[1];
  uStack_468 = uStack_468 & 0xff;
  if ((*(uint *)(iVar5 + 0x38) >> 1 & 1) == 0) {
    if (uStack_468 == 2) {
      *(undefined1 *)(iVar5 + 0x10) = 0;
    }
    else if ((uStack_468 == 4) || (uStack_468 == 1)) {
      *(undefined1 *)(iVar5 + 0x10) = 1;
    }
    else if (uStack_468 == 3) {
      *(undefined1 *)(iVar5 + 0x10) = 2;
    }
    else if ((uStack_468 == 9) || (uStack_468 == 6)) {
      *(undefined1 *)(iVar5 + 0x10) = 3;
    }
    else if ((uStack_468 == 7) || (uStack_468 == 8)) {
      *(undefined1 *)(iVar5 + 0x10) = 5;
    }
    else if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,"Unknown system speaker config: 0x%lx\n",uStack_468);
    }
  }
  uVar6 = *(uint *)(param_1[1] + 0x38);
  if (uStack_468 == 1) {
    uVar6 = uVar6 | 0x20;
  }
  else {
    uVar6 = uVar6 & 0xffffffdf;
  }
  *(uint *)(param_1[1] + 0x38) = uVar6;
  switch(*(undefined1 *)(param_1[1] + 0x10)) {
  case 0:
    uStack_28 = 4;
    break;
  case 2:
    uStack_28 = 0x33;
    break;
  case 3:
    uStack_28 = 0x60f;
    if (uStack_468 == 6) {
      uStack_28 = 0x3f;
    }
    break;
  case 4:
    uStack_28 = 0x70f;
    break;
  case 5:
  case 7:
    uStack_28 = 0x63f;
    break;
  case 6:
    uStack_28 = 0x2d63f;
    break;
  case 8:
    *(undefined1 *)(param_1[1] + 0x10) = 1;
  case 1:
    uStack_28 = 3;
  }
  while( true ) {
    _uStack_3c = CONCAT22(uStack_3a,1);
    uVar4 = func_0x00dfe9f0(*(undefined1 *)(param_1[1] + 0x10),*(undefined4 *)(param_1[1] + 0x14));
    uStack_3a = uVar4;
    iVar5 = func_0x00dfe9a0(*(undefined1 *)(param_1[1] + 0x11));
    piStack_46c = (int *)(iVar5 << 3);
    iVar7 = ((uint)piStack_46c & 0xffff) * (uint)uStack_3a;
    iVar5 = param_1[1];
    uVar6 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
    uStack_30 = CONCAT22((short)piStack_46c,(short)uVar6);
    iStack_38 = *(int *)(iVar5 + 4);
    iStack_34 = (uVar6 & 0xffff) * iStack_38;
    uStack_2c = uStack_2c & 0xffff0000;
    if ((uStack_3a < 3) && (*(char *)(iVar5 + 0x11) != '\x06')) {
      if (param_1[3] == 0) {
        uStack_40 = 0;
        uStack_58 = 0;
        puStack_50 = (undefined2 *)0x0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_60 = 0x24;
        uStack_5c = 1;
        iVar5 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],&uStack_60,param_1 + 3,0);
        if (iVar5 < 0) goto LAB_00dfabbf;
      }
      piVar9 = (int *)param_1[3];
      iVar5 = (**(code **)(*piVar9 + 0x38))(piVar9,&uStack_3c);
      if (iVar5 < 0) goto LAB_00dfabbf;
    }
    else {
      uStack_3c = 0xfffe;
      uStack_2c = CONCAT22((short)piStack_46c,0x16);
      if (*(char *)(iVar5 + 0x11) == '\x06') {
        uStack_24 = 3;
      }
      else {
        uStack_24 = 1;
      }
      uStack_20 = 0x100000;
      uStack_1c = 0x719b3800aa000080;
      aiStack_47c[0] = 0;
      uStack_8 = 6;
      piVar9 = param_1 + 3;
      if (aiStack_47c != piVar9) {
        piVar1 = (int *)*piVar9;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *piVar9 = 0;
      }
      uStack_8 = 0xffffffff;
    }
    iVar5 = param_1[1];
    uVar6 = *(uint *)(iVar5 + 0xc) / *(uint *)(iVar5 + 8);
    if (0x80 < uVar6) {
      uVar6 = 0x80;
    }
    *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 8) * uVar6;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_60 = 0x24;
    uStack_5c = 0x18100;
    puStack_50 = &uStack_3c;
    uStack_58 = (ulonglong)((uStack_30 & 0xffff) * *(int *)(param_1[1] + 0xc));
    iVar5 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],&uStack_60,param_1 + 4,0);
    if (-1 < iVar5) break;
    if (*(char *)(param_1[1] + 0x11) != '\x06') goto LAB_00dfabbf;
    *(undefined1 *)(param_1[1] + 0x11) = 2;
  }
  iVar5 = (*(code *)**(undefined4 **)param_1[4])
                    ((undefined4 *)param_1[4],&DAT_010e7068,&piStack_46c);
  piVar9 = piStack_46c;
  if (-1 < iVar5) {
    piStack_480 = piStack_46c;
    uStack_8 = 8;
    if (&piStack_480 != (int **)(param_1 + 5)) {
      piVar1 = (int *)param_1[5];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      param_1[5] = (int)piVar9;
      piVar9 = (int *)0x0;
    }
    uStack_8 = 9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    uStack_8 = 0xffffffff;
    puStack_484 = (uint *)(param_1[1] + 8);
    uVar6 = *(uint *)(param_1[1] + 0xc) / *puStack_484;
    uVar8 = 0;
    if (uVar6 != 0) {
      uStack_48c = uStack_30 & 0xffff;
      iVar5 = param_1[6];
      do {
        aiStack_464[uVar8 * 2] = uVar8 * uStack_48c * *puStack_484;
        aiStack_464[uVar8 * 2 + 1] = iVar5;
        uVar8 = uVar8 + 1;
        param_1 = piStack_490;
      } while (uVar8 < uVar6);
    }
    iVar5 = (**(code **)(*(int *)param_1[5] + 0xc))((int *)param_1[5],uVar6,aiStack_464);
    if (iVar5 == 0) {
      ResetEvent((HANDLE)param_1[6]);
      func_0x00e0c860();
      goto LAB_00dfac51;
    }
  }
LAB_00dfabbf:
  aiStack_49c[2] = 0;
  piVar9 = param_1 + 5;
  uStack_8 = 10;
  if (aiStack_49c + 2 != piVar9) {
    piVar1 = (int *)*piVar9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar9 = 0;
  }
  aiStack_49c[1] = 0;
  piVar9 = param_1 + 4;
  uStack_8 = 0xc;
  if (aiStack_49c + 1 != piVar9) {
    piVar1 = (int *)*piVar9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar9 = 0;
  }
  aiStack_49c[0] = 0;
  param_1 = param_1 + 3;
  uStack_8 = 0xe;
  if (aiStack_49c != param_1) {
    piVar9 = (int *)*param_1;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    *param_1 = 0;
  }
LAB_00dfac51:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00dfaeb0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  piStack_34 = *(int **)(param_1 + 0xc);
  uStack_30 = 1;
  iVar2 = (**(code **)(*piStack_34 + 0x24))();
  if (-1 < iVar2) {
    FUN_008ab370();
    return;
  }
  func_0x00e0c6f0(&piStack_34,1,"Failure starting capture: 0x%lx",iVar2);
  func_0x00e87d2e(&piStack_34,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00dfaf00(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  uint uStack_60;
  undefined4 uStack_48;
  int *piStack_44;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6e1dd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_60 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_60;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  uStack_18 = uStack_60;
  piStack_44 = (int *)func_0x008ab47d(8);
  if (piStack_44 == (int *)0x0) {
    piStack_44 = (int *)0x0;
  }
  else {
    *piStack_44 = param_1;
    piStack_44[1] = (int)FUN_00df9c60;
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar2 = func_0x008aafea(0,0,FUN_00def040,piStack_44,0,&uStack_48);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(int *)(param_1 + 0x20) = iVar2;
      *(undefined4 *)(param_1 + 0x24) = uStack_48;
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    func_0x008aaff0();
  }
  uStack_48 = 0;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_00dfafaa(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x4c) + 4))();
  func_0x00e0c6f0(unaff_EBP + -0x3c,1,"Failed to start mixing thread: %s",uVar2);
  func_0x00e87d2e(unaff_EBP + -0x3c,&DAT_012818e0);
  func_0x008aaff0();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00dfaff0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc));
  if (iVar1 < 0) {
    if (0 < DAT_012ba4e8) {
      func_0x00ddf410(1,DAT_013e0188,"stop failed: 0x%08lx\n",iVar1);
    }
    func_0x00e04820(*(undefined4 *)(param_1 + 4),"Failure stopping capture: 0x%lx",iVar1);
  }
  return;
}



void __fastcall FUN_00dfb040(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  LOCK();
  cVar1 = *(char *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x1c) = '\x01';
  UNLOCK();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x24) != 0)) {
    iVar4 = *(int *)(param_1 + 0x24);
    iVar3 = func_0x00bbb310();
    if (iVar4 == iVar3) {
      func_0x00e7304a(5);
    }
    else {
      iVar4 = func_0x00e74718(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        (**(code **)(**(int **)(param_1 + 0x10) + 0x48))(*(int **)(param_1 + 0x10));
        return;
      }
    }
    func_0x00e7304a(2);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}



undefined4 * FUN_00dfb0a0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f69f5e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
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
  uStack_8 = 0;
  if (param_2 == 0) {
    func_0x0046a880("Wave File Writer",0x11,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00dfb130(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  if (param_3 != 0) {
    *param_1 = 0;
    return;
  }
  puVar2 = (undefined4 *)func_0x00ddbb30(4,0x28);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = _anon_D8D0C5A2::WaveBackend::vftable;
    puVar2[2] = 0;
    puVar2[3] = 0xffffffff;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 1;
    *(undefined8 *)(puVar2 + 8) = 0;
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00dfb1c0(undefined4 *param_1,uint param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  *param_1 = _anon_D8D0C5A2::WaveBackend::vftable;
  if (param_1[2] != 0) {
    func_0x008aafb6(param_1[2]);
  }
  param_1[2] = 0;
  if (param_1[9] == 0) {
    if (param_1[4] != 0) {
      func_0x00ddbb20(param_1[4]);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    if ((param_2 & 1) != 0) {
      if ((param_2 & 4) == 0) {
        func_0x00ddbb20(param_1);
        return param_1;
      }
      _guard_check_icall(param_1,0x28);
    }
    return param_1;
  }
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}



undefined ** FUN_00dfb280(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e02fc) {
    func_0x008ab40d(&DAT_013e02fc);
    if (DAT_013e02fc == -1) {
      func_0x008ab7fd(FUN_00f75bb0);
      func_0x008ab3bc(&DAT_013e02fc);
    }
  }
  return &PTR_vftable_012ba6e0;
}



// WARNING: Removing unreachable block (ram,0x00dfb605)
// WARNING: Removing unreachable block (ram,0x00dfb61f)
// WARNING: Removing unreachable block (ram,0x00dfb65b)

undefined4 __fastcall FUN_00dfb2e0(int param_1)

{
  uint _Count;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar7;
  undefined4 unaff_EBX;
  int unaff_EDI;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_3c;
  int iStack_38;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  size_t sStack_c;
  undefined8 uStack_8;
  
  uVar2 = (uint)(*(int *)(*(int *)(param_1 + 4) + 8) * 1000) / *(uint *)(*(int *)(param_1 + 4) + 4)
          >> 1;
  func_0x00e33a80("alsoft-mixer");
  uStack_10 = func_0x00dfe9f0(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10),
                              *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = func_0x00dfe9a0(*(undefined1 *)(iVar4 + 0x11));
  iVar4 = func_0x00dfe9f0(*(undefined1 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
  sStack_c = iVar4 * iVar3;
  uStack_8 = 0;
  func_0x0046ede0(&uStack_18);
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return 0;
  }
  iStack_38 = uStack_8._4_4_;
  uStack_3c = (uint)uStack_8;
  lVar1 = CONCAT44(uStack_14,uStack_18);
  do {
    if (**(char **)(param_1 + 4) == '\0') {
      return 0;
    }
    lVar9 = func_0x00e728cb();
    uVar14 = (undefined4)((ulonglong)lVar9 >> 0x20);
    iVar4 = (int)lVar9;
    lVar10 = func_0x00e728b4();
    uVar5 = (uint)lVar10;
    if (lVar9 == 10000000) {
      lVar10 = lVar10 * 100;
    }
    else {
      if (lVar9 == 24000000) {
        uVar13 = func_0x00e87ec0(lVar10,24000000,0);
        uVar11 = func_0x00e87d70(uVar13,24000000,0);
        uVar15 = unaff_EBX;
        uVar11 = func_0x00e87d70(uVar5 - (uint)uVar11,
                                 (iVar4 - (int)((ulonglong)uVar11 >> 0x20)) -
                                 (uint)(uVar5 < (uint)uVar11),1000000000,0);
        uVar14 = 0;
        unaff_EBX = 24000000;
      }
      else {
        uVar13 = func_0x00e87fa0(lVar10,lVar9);
        uVar11 = func_0x00e87d70(extraout_ECX,uVar5,1000000000,0);
        uVar15 = unaff_EBX;
      }
      lVar10 = func_0x00e87ec0(uVar11,unaff_EBX,uVar14);
      lVar9 = (uVar13 & 0xffffffff) * 1000000000;
      lVar10 = lVar10 + CONCAT44((int)(uVar13 >> 0x20) * 1000000000 +
                                 (int)((ulonglong)lVar9 >> 0x20),(int)lVar9);
      unaff_EBX = uVar15;
    }
    iVar4 = *(int *)(param_1 + 4);
    uVar11 = func_0x00e87d70(*(undefined4 *)(iVar4 + 4),0,lVar10 - lVar1);
    uVar11 = func_0x00e87ec0(uVar11,1000000000,0);
    uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar5 = (uint)uVar11;
    bVar8 = -1 < (int)((uVar7 - iStack_38) - (uint)(uVar5 < uStack_3c));
    uStack_18 = uVar7;
    if ((uVar7 - iStack_38 != (uint)(uVar5 < uStack_3c) && bVar8) ||
       ((bVar8 && (*(uint *)(iVar4 + 8) <= uVar5 - uStack_3c)))) {
      while( true ) {
        func_0x00e04c70(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar4 + 8),uStack_10);
        _Count = *(uint *)(*(int *)(param_1 + 4) + 8);
        bVar8 = CARRY4(_Count,uStack_3c);
        uStack_3c = _Count + uStack_3c;
        iStack_38 = iStack_38 + (uint)bVar8;
        sVar6 = fwrite(*(void **)(param_1 + 0x10),sStack_c,_Count,*(FILE **)(param_1 + 8));
        if ((sVar6 < *(uint *)(*(int *)(param_1 + 4) + 8)) ||
           (iVar4 = func_0x008ab05e(*(undefined4 *)(param_1 + 8)), iVar4 != 0)) break;
        iVar4 = *(int *)(param_1 + 4);
        bVar8 = (int)((uVar7 - iStack_38) - (uint)(uVar5 < uStack_3c)) < 0;
        if ((uVar7 - iStack_38 == (uint)(uVar5 < uStack_3c) || bVar8) &&
           ((bVar8 || (uVar5 - uStack_3c < *(uint *)(iVar4 + 8))))) goto LAB_00dfb716;
      }
      if (0 < DAT_012ba4e8) {
        func_0x00ddf410(1,DAT_013e0188,"Error writing to file\n");
      }
      func_0x00e04820(*(undefined4 *)(param_1 + 4),"Failed to write playback samples");
LAB_00dfb716:
      uVar5 = *(uint *)(*(int *)(param_1 + 4) + 4);
      if ((-1 < iStack_38) && ((0 < iStack_38 || (uVar5 <= uStack_3c)))) {
        uVar11 = func_0x00e87fa0(uStack_3c,iStack_38,uVar5,0);
        unaff_EBX = extraout_ECX_01;
        lVar10 = func_0x00e87d70(uVar11,1000000000,0);
        lVar1 = lVar10 + lVar1;
        unaff_EDI = iStack_38;
      }
    }
    else {
      func_0x0046ede0(&uStack_8);
      lVar10 = uStack_8;
      if (uVar2 != 0) {
        lVar10 = func_0x00e87d70(uVar2,0,1000000,0);
        iVar4 = 0x7fffffff - (int)((ulonglong)lVar10 >> 0x20);
        if ((iVar4 < uStack_8._4_4_) ||
           ((iVar4 <= uStack_8._4_4_ && (-(int)lVar10 - 1U <= (uint)uStack_8)))) {
          lVar10 = 0x7fffffffffffffff;
        }
        else {
          lVar10 = lVar10 + uStack_8;
        }
      }
      while( true ) {
        lVar12 = func_0x00e728cb();
        uVar14 = (undefined4)((ulonglong)lVar12 >> 0x20);
        uStack_18 = (uint)lVar12;
        lVar9 = func_0x00e728b4();
        uVar5 = (uint)lVar9;
        if (lVar12 == 10000000) {
          lVar9 = lVar9 * 100;
        }
        else {
          if (lVar12 == 24000000) {
            uVar13 = func_0x00e87ec0(lVar9,24000000,0);
            uVar11 = func_0x00e87d70(uVar13,24000000,0);
            uVar11 = func_0x00e87d70(uVar5 - (uint)uVar11,
                                     (uStack_3c - (int)((ulonglong)uVar11 >> 0x20)) -
                                     (uint)(uVar5 < (uint)uVar11),1000000000,0);
            uVar14 = 0;
            iVar4 = 24000000;
          }
          else {
            uVar13 = func_0x00e87fa0(lVar9,lVar12);
            uVar11 = func_0x00e87d70(extraout_ECX_00,uVar5,1000000000,0);
            iVar4 = unaff_EDI;
          }
          lVar9 = func_0x00e87ec0(uVar11,iVar4,uVar14);
          lVar12 = (uVar13 & 0xffffffff) * 1000000000;
          lVar9 = lVar9 + CONCAT44((int)(uVar13 >> 0x20) * 1000000000 +
                                   (int)((ulonglong)lVar12 >> 0x20),(int)lVar12);
        }
        if (lVar10 <= lVar9) break;
        lVar9 = lVar10 - lVar9;
        if (lVar9 < 0x4e94914f0001) {
          uVar11 = func_0x00e87ec0(lVar9,1000000,0);
          iVar4 = (int)uVar11;
          lVar12 = func_0x00e87d70(uVar11,1000000,0);
          if (lVar12 < lVar9) {
            iVar4 = iVar4 + 1;
          }
          func_0x00e754f7(iVar4);
        }
        else {
          func_0x00e754f7(86400000);
        }
      }
    }
    if (*(char *)(param_1 + 0x1c) != '\0') {
      return 0;
    }
  } while( true );
}



void __thiscall FUN_00dfb780(int param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 ***pppuVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  char acStack_64 [4];
  undefined4 **appuStack_60 [5];
  uint uStack_4c;
  uint uStack_48;
  int *piStack_40;
  undefined1 auStack_3c [16];
  undefined4 **appuStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6e21d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00dfc540(acStack_64,0,&DAT_010d2188,&DAT_0113c44c,uStack_14);
  uStack_8 = 0;
  if (acStack_64[0] == '\0') {
LAB_00dfb9e0:
    func_0x00e0c6f0(auStack_3c,0,"No wave output filename");
    func_0x00e87d2e(auStack_3c,&DAT_012818e0);
LAB_00dfba01:
    func_0x00e0c6f0(auStack_3c,0,"Device name \"%s\" not found",param_2);
    func_0x00e87d2e(auStack_3c,&DAT_012818e0);
  }
  else {
    if (param_2 != (byte *)0x0) {
      pcVar12 = "Wave File Writer";
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar15 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_00dfb865:
          uVar11 = -(uint)bVar15 | 1;
          goto LAB_00dfb86a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar15 = bVar1 < ((byte *)pcVar12)[1];
        if (bVar1 != ((byte *)pcVar12)[1]) goto LAB_00dfb865;
        pbVar4 = pbVar4 + 2;
        pcVar12 = (char *)((byte *)pcVar12 + 2);
      } while (bVar1 != 0);
      uVar11 = 0;
LAB_00dfb86a:
      pbVar4 = param_2;
      if (uVar11 == 0) goto LAB_00dfb7e2;
      goto LAB_00dfba01;
    }
    pbVar4 = (byte *)"Wave File Writer";
LAB_00dfb7e2:
    param_2 = pbVar4;
    if (*(int *)(param_1 + 8) != 0) {
      if (uStack_4c < 0x10) goto LAB_00dfb820;
      uVar11 = uStack_4c + 1;
      if (0xfff < uVar11) {
        iVar3 = (int)appuStack_60[0] - (int)appuStack_60[0][-1];
        appuStack_60[0] = (undefined4 **)appuStack_60[0][-1];
joined_r0x00dfb9d5:
        uVar11 = uStack_4c + 0x24;
        if (0x1f < iVar3 - 4U) goto LAB_00dfb9db;
      }
LAB_00dfb816:
      func_0x008ab812(appuStack_60[0],uVar11);
LAB_00dfb820:
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    pppuVar5 = appuStack_60;
    if (0xf < uStack_4c) {
      pppuVar5 = (undefined4 ***)appuStack_60[0];
    }
    func_0x00ddf7a0(appuStack_2c,pppuVar5);
    pppuVar5 = appuStack_2c;
    if (7 < uStack_18) {
      pppuVar5 = (undefined4 ***)appuStack_2c[0];
    }
    uVar8 = func_0x00e87a8a(pppuVar5,&DAT_010ddc30);
    *(undefined4 *)(param_1 + 8) = uVar8;
    func_0x00588fe0();
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = *(int *)(param_1 + 4);
      piVar14 = (int *)(iVar3 + 0x20);
      pbVar13 = pbVar4;
      do {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar1 != 0);
      uStack_48 = *(uint *)(iVar3 + 0x34);
      uVar11 = (int)pbVar13 - (int)(pbVar4 + 1);
      if (uStack_48 < uVar11) {
        if (0x7fffffff < uVar11) goto LAB_00dfba63;
        piStack_40 = (int *)(uVar11 | 0xf);
        if (piStack_40 < (int *)0x80000000) {
          if (0x7fffffff - (uStack_48 >> 1) < uStack_48) {
            piStack_40 = (int *)0x7fffffff;
          }
          else {
            piVar6 = (int *)((uStack_48 >> 1) + uStack_48);
            if (piStack_40 < piVar6) {
              piStack_40 = piVar6;
            }
          }
        }
        else {
          piStack_40 = (int *)0x7fffffff;
        }
        param_2 = (byte *)func_0x0046cf00(piVar14,&piStack_40);
        *(uint *)(iVar3 + 0x30) = uVar11;
        *(int **)(iVar3 + 0x34) = piStack_40;
        memcpy(param_2,pbVar4,uVar11);
        param_2[uVar11] = 0;
        if (uStack_48 < 0x10) {
LAB_00dfb99d:
          *piVar14 = (int)param_2;
          goto LAB_00dfb99f;
        }
        uVar11 = uStack_48 + 1;
        iVar3 = *piVar14;
        iVar7 = iVar3;
        if (uVar11 < 0x1000) {
LAB_00dfb993:
          func_0x008ab812(iVar7,uVar11);
          goto LAB_00dfb99d;
        }
        iVar7 = *(int *)(iVar3 + -4);
        uVar11 = uStack_48 + 0x24;
        if ((iVar3 - iVar7) - 4U < 0x20) goto LAB_00dfb993;
LAB_00dfb9db:
        func_0x008aaf66();
        goto LAB_00dfb9e0;
      }
      if (0xf < uStack_48) {
        piVar14 = (int *)*piVar14;
      }
      *(uint *)(iVar3 + 0x30) = uVar11;
      piStack_40 = piVar14;
      func_0x008ab0e6(piVar14,pbVar4,uVar11);
      *(undefined1 *)((int)piStack_40 + uVar11) = 0;
LAB_00dfb99f:
      if ((acStack_64[0] == '\0') || (uStack_4c < 0x10)) goto LAB_00dfb820;
      uVar11 = uStack_4c + 1;
      if (0xfff < uVar11) {
        iVar3 = (int)appuStack_60[0] - (int)appuStack_60[0][-1];
        appuStack_60[0] = (undefined4 **)appuStack_60[0][-1];
        goto joined_r0x00dfb9d5;
      }
      goto LAB_00dfb816;
    }
  }
  FUN_0046d0f0();
  uVar8 = func_0x00469a10();
  puVar9 = (undefined4 *)func_0x008aaf8a();
  uVar10 = func_0x008ab022(*puVar9);
  func_0x00e0c6f0(auStack_3c,1,"Could not open file \'%s\': %s",uVar8,uVar10);
  func_0x00e87d2e(auStack_3c,&DAT_012818e0);
LAB_00dfba63:
  func_0x00463570();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack

uint __fastcall FUN_00dfba70(uint param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined *_Str;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined *puVar13;
  void *pvVar14;
  int extraout_ECX;
  undefined2 extraout_DX;
  byte bVar16;
  uint uVar15;
  void *pvVar17;
  size_t _Size;
  void *_Dst;
  int *unaff_FS_OFFSET;
  uint uStack_98;
  void *pvStack_94;
  void *pvStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  void *pvStack_10;
  
  uStack_18 = 0;
  bVar3 = false;
  func_0x008ab064();
  func_0x00e87be2();
  piVar12 = (int *)(param_1 + 4);
  piStack_14 = piVar12;
  cVar6 = func_0x00dfcab0();
  piVar5 = piVar12;
  if (cVar6 != '\0') {
    *(undefined1 *)(*piVar12 + 0x10) = 8;
    *(undefined4 *)(*piVar12 + 0x14) = 1;
    piVar5 = piStack_14;
  }
  piStack_14 = piVar5;
  iVar11 = *piVar12;
  cVar6 = *(char *)(iVar11 + 0x11);
  if (cVar6 == '\0') {
    *(undefined1 *)(iVar11 + 0x11) = 1;
  }
  else if (cVar6 == '\x03') {
    *(undefined1 *)(iVar11 + 0x11) = 2;
  }
  else if (cVar6 == '\x05') {
    *(undefined1 *)(iVar11 + 0x11) = 4;
  }
  iVar11 = *piVar12;
  switch(*(undefined1 *)(iVar11 + 0x10)) {
  case 0:
    uStack_18 = 4;
    break;
  case 1:
    uStack_18 = 3;
    break;
  case 2:
    uStack_18 = 0x33;
    break;
  case 3:
    uStack_18 = 0x60f;
    break;
  case 4:
    uStack_18 = 0x70f;
    break;
  case 5:
  case 7:
    uStack_18 = 0x63f;
    break;
  case 6:
    uStack_18 = 0x2d63f;
    break;
  case 8:
    uVar7 = *(uint *)(iVar11 + 0x14);
    bVar3 = true;
    if (3 < uVar7) {
      uVar7 = 3;
    }
    *(uint *)(iVar11 + 0x14) = uVar7;
    *(undefined1 *)(*piVar12 + 0x1d) = 0;
    *(undefined1 *)(*piVar12 + 0x1e) = 0;
    uStack_18 = 0;
  }
  uVar7 = func_0x00dfe9a0();
  iVar8 = func_0x00dfe9f0();
  func_0x00e87c54();
  func_0x00e87aae();
  uStack_1c = 0xffffffff;
  fwrite(&uStack_1c,1,4,*(FILE **)(param_1 + 8));
  func_0x00e87aae();
  func_0x00e87aae();
  uStack_1c = 0x28;
  uStack_7c = 0xdfbbda;
  fwrite(&uStack_1c,1,4,*(FILE **)(param_1 + 8));
  uStack_1c._0_2_ = 0xfffe;
  fwrite(&uStack_1c,1,2,*(FILE **)(param_1 + 8));
  uStack_1c = CONCAT22(uStack_1c._2_2_,(short)iVar8);
  fwrite(&uStack_1c,1,2,*(FILE **)(param_1 + 8));
  uStack_1c = *(undefined4 *)(*piStack_14 + 4);
  fwrite(&uStack_1c,1,4,*(FILE **)(param_1 + 8));
  uStack_1c = *(int *)(*piStack_14 + 4) * uVar7 * iVar8;
  fwrite(&uStack_1c,1,4,*(FILE **)(param_1 + 8));
  iVar11 = uStack_1c;
  uStack_1c._0_2_ = (short)uVar7 * (short)iVar8;
  uStack_1c._2_2_ = SUB42(iVar11,2);
  fwrite(&uStack_1c,1,2,*(FILE **)(param_1 + 8));
  uVar7 = (uVar7 & 0xffff) * 8;
  pvStack_10 = (void *)(uVar7 & 0xffff);
  uVar15 = (uint)pvStack_10 >> 8;
  uVar4 = (uint)pvStack_10 >> 8;
  uStack_1c._0_2_ = (short)uVar7;
  fwrite(&uStack_1c,1,2,*(FILE **)(param_1 + 8));
  uStack_1c._0_2_ = 0x16;
  fwrite(&uStack_1c,1,2,*(FILE **)(param_1 + 8));
  uStack_1c._0_2_ = CONCAT11((char)uVar4,(char)pvStack_10);
  fwrite(&uStack_1c,1,2,*(FILE **)(param_1 + 8));
  fwrite(&uStack_18,1,4,*(FILE **)(param_1 + 8));
  if (*(char *)(*piStack_14 + 0x11) == '\x06') {
    _Str = &DAT_010ddba8;
    puVar13 = &DAT_010ddb88;
  }
  else {
    _Str = &UNK_010ddb98;
    puVar13 = &DAT_010ddb78;
  }
  if (!bVar3) {
    _Str = puVar13;
  }
  fwrite(_Str,1,0x10,*(FILE **)(param_1 + 8));
  func_0x00e87aae();
  piStack_14 = (int *)0xffffffff;
  fwrite(&piStack_14,1,4,*(FILE **)(param_1 + 8));
  uVar7 = func_0x008ab05e();
  if (uVar7 == 0) {
    uVar9 = func_0x008ab03a();
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    func_0x00e0c860();
    iVar8 = func_0x00dfe9a0();
    iVar10 = func_0x00dfe9f0();
    iVar11 = *(int *)(param_1 + 0x10);
    _Dst = *(void **)(param_1 + 0x14);
    pvVar17 = (void *)(*(int *)(*(int *)(param_1 + 4) + 8) * iVar10 * iVar8);
    pvStack_10 = (void *)((int)_Dst - iVar11);
    if (pvVar17 < pvStack_10) {
      *(int *)(param_1 + 0x14) = iVar11 + (int)pvVar17;
      return CONCAT31((int3)((uint)(iVar11 + (int)pvVar17) >> 8),1);
    }
    if (pvVar17 >= pvStack_10 && (int)pvVar17 - (int)pvStack_10 != 0) {
      pvVar14 = (void *)(*(int *)(param_1 + 0x18) - iVar11);
      if (pvVar14 <= pvVar17 && (int)pvVar17 - (int)pvVar14 != 0) {
        if (pvVar17 < (void *)0x80000000) {
          if ((void *)(0x7fffffff - ((uint)pvVar14 >> 1)) < pvVar14) {
            _Dst = (void *)0x7fffffff;
          }
          else {
            _Dst = (void *)((int)pvVar14 + ((uint)pvVar14 >> 1));
            if (_Dst < pvVar17) {
              _Dst = pvVar17;
            }
          }
          uVar15 = func_0x00ddbb30();
          if (uVar15 != 0) {
            memset((void *)(uVar15 + (int)pvStack_10),0,(int)pvVar17 - (int)pvStack_10);
            func_0x008ab0e6();
            if (*(int *)(param_1 + 0x10) != 0) {
              func_0x00ddbb20();
            }
            *(uint *)(param_1 + 0x10) = uVar15;
            *(uint *)(param_1 + 0x14) = uVar15 + (int)pvVar17;
            *(uint *)(param_1 + 0x18) = uVar15 + (int)_Dst;
            return CONCAT31((int3)(uVar15 + (int)_Dst >> 8),1);
          }
        }
        else {
          func_0x0046e700();
        }
        func_0x0062c530();
        func_0x00e87d2e();
        bVar16 = (byte)(uVar15 >> 8);
        cVar6 = bVar16 + *(byte *)(uVar15 + 0xbb0900df);
        pcVar1 = (char *)(CONCAT22((short)(uVar15 >> 0x10),CONCAT11(cVar6,(char)uVar15)) +
                         -0x44e8ff21);
        *pcVar1 = *pcVar1 + cVar6 + CARRY1(bVar16,*(byte *)(uVar15 + 0xbb0900df));
        in(extraout_DX);
        uStack_98 = DAT_0128fd40 ^ param_1;
        *(uint *)(param_1 - 0x14) = uStack_98;
        uStack_8c = 0x8b5500df;
        *unaff_FS_OFFSET = param_1 - 0xc;
        *(uint **)(param_1 - 0x10) = &uStack_98;
        pvStack_94 = _Dst;
        pvStack_90 = pvVar17;
        if (((0 < *(int *)(extraout_ECX + 0xc)) &&
            (iVar11 = func_0x008ab064(*(undefined4 *)(extraout_ECX + 8),0,2), iVar11 != 0)) &&
           (1 < DAT_012ba4e8)) {
          func_0x00ddf410(2,DAT_013e0188,"Failed to seek on output file\n");
        }
        *(undefined4 *)(param_1 - 4) = 0;
        *(undefined1 *)(extraout_ECX + 0x1c) = 0;
        piVar12 = (int *)func_0x008ab47d(8);
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          *piVar12 = extraout_ECX;
          piVar12[1] = (int)FUN_00dfb2e0;
        }
        *(int **)(param_1 - 0x40) = piVar12;
        *(undefined1 *)(param_1 - 4) = 1;
        iVar11 = func_0x008aafea(0,0,FUN_00def040,piVar12,0,param_1 - 0x44);
        *(int *)(param_1 - 0x48) = iVar11;
        if (iVar11 != 0) {
          if (*(int *)(extraout_ECX + 0x24) == 0) {
            uVar9 = *(undefined4 *)(param_1 - 0x44);
            *(int *)(extraout_ECX + 0x20) = iVar11;
            *(undefined4 *)(extraout_ECX + 0x24) = uVar9;
            *unaff_FS_OFFSET = *(int *)(param_1 - 0xc);
            uStack_8c = 0xdfc02d;
            uVar7 = FUN_008ab370();
            return uVar7;
          }
          func_0x008aaff0();
        }
        *(undefined4 *)(param_1 - 0x44) = 0;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      _Size = (int)pvVar17 - (int)pvStack_10;
      memset(_Dst,0,_Size);
      pvStack_10 = (void *)((int)_Dst + _Size);
      *(void **)(param_1 + 0x14) = pvStack_10;
    }
    return CONCAT31((int3)((uint)pvStack_10 >> 8),1);
  }
  if (0 < DAT_012ba4e8) {
    func_0x008aaf8a();
    func_0x008ab022();
    uVar7 = func_0x00ddf410();
  }
  return uVar7 & 0xffffff00;
}



void Catch_00dfc031(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x4c) + 4))();
  func_0x00e0c6f0(unaff_EBP + -0x3c,1,"Failed to start mixing thread: %s",uVar2);
  func_0x00e87d2e(unaff_EBP + -0x3c,&DAT_012818e0);
  func_0x008aaff0();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00dfc070(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  LOCK();
  cVar1 = *(char *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x1c) = '\x01';
  UNLOCK();
  if ((cVar1 != '\0') || (*(int *)(param_1 + 0x24) == 0)) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = func_0x00bbb310();
  if (iVar4 == iVar3) {
    func_0x00e7304a(5);
  }
  else {
    iVar4 = func_0x00e74718(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      if (*(int *)(param_1 + 0xc) < 1) {
        return;
      }
      iVar4 = func_0x008ab03a(*(undefined4 *)(param_1 + 8));
      if (iVar4 < 1) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = func_0x008ab064(*(undefined4 *)(param_1 + 8),4,0);
      if (iVar5 == 0) {
        func_0x00dfb240(iVar4 + -8,*(undefined4 *)(param_1 + 8));
      }
      iVar5 = func_0x008ab064(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) + -4,0);
      if (iVar5 != 0) {
        return;
      }
      func_0x00dfb240(iVar4 - iVar3,*(undefined4 *)(param_1 + 8));
      return;
    }
  }
  func_0x00e7304a(2);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 * __thiscall FUN_00dfc390(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(param_1 - *(int *)(param_1 + -4));
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00e36840(uVar1);
  uStack_8 = 0;
  *puVar2 = std::ios_base::vftable;
  func_0x00e706cb(puVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2 + -0x1c,0xb8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2 + -0x1c;
}



int * __thiscall FUN_00dfe7b0(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  uint uStack_48;
  undefined1 auStack_38 [20];
  int *piStack_24;
  char cStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6e425;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_48 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_48;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar10 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_1c = 0;
  piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  piStack_24 = param_1;
  piStack_18 = param_1;
  puVar4 = &uStack_48;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    puVar4 = (uint *)puStack_14;
  }
  puStack_14 = (undefined1 *)puVar4;
  uStack_8 = 0;
  cStack_20 = func_0x00484390(1);
  piVar6 = param_1;
  if ((cStack_20 != '\0') && (piVar6 = piStack_24, -1 < param_3)) {
    if ((param_3 < 1) && (param_2 == 0)) {
      uVar10 = 0;
    }
    else {
      uStack_8 = 2;
      iVar8 = param_3;
      iVar11 = param_2;
      do {
        if ((iVar11 != -1) || (iVar8 != 0x7fffffff)) {
          bVar12 = iVar11 != 0;
          iVar11 = iVar11 + -1;
          iVar8 = iVar8 + -1 + (uint)bVar12;
          if (iVar8 < 0) break;
        }
        piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
        if (*(int *)piVar6[7] == 0) {
LAB_00dfe889:
          uVar10 = (**(code **)(*piVar6 + 0x1c))();
        }
        else {
          iVar1 = *(int *)piVar6[0xb];
          if (iVar1 < 1) goto LAB_00dfe889;
          *(int *)piVar6[0xb] = iVar1 + -1;
          pbVar2 = *(byte **)piVar6[7];
          *(byte **)piVar6[7] = pbVar2 + 1;
          uVar10 = (uint)*pbVar2;
        }
        if (uVar10 == 0xffffffff) {
          uVar10 = 1;
          piVar6 = piStack_24;
          goto LAB_00dfe8f8;
        }
        uVar7 = param_1[2];
        if ((uVar7 != 0xffffffff) || (param_1[3] != 0x7fffffff)) {
          param_1[2] = uVar7 + 1;
          param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar7);
        }
      } while (uVar10 != param_4);
      uVar10 = 0;
      piVar6 = piStack_24;
    }
  }
LAB_00dfe8f8:
  uStack_8 = 1;
  uVar7 = 4;
  iVar8 = *(int *)(*param_1 + 4);
  if (*(int *)((int)param_1 + iVar8 + 0x38) != 0) {
    uVar7 = 0;
  }
  uVar7 = uVar7 | *(uint *)(iVar8 + 0xc + (int)param_1) & 0x17 | uVar10;
  *(uint *)((int)param_1 + iVar8 + 0xc) = uVar7;
  uVar7 = *(uint *)((int)param_1 + iVar8 + 0x10) & uVar7;
  if (uVar7 != 0) {
    if ((uVar7 & 4) == 0) {
      pcVar9 = "ios_base::failbit set";
      if ((uVar7 & 2) == 0) {
        pcVar9 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar9 = "ios_base::badbit set";
    }
    uVar5 = func_0x00463740(&param_2,1);
    func_0x004646a0(pcVar9,uVar5);
    func_0x00e87d2e(auStack_38,&DAT_01288518);
    pcVar3 = (code *)swi(3);
    piVar6 = (int *)(*pcVar3)();
    return piVar6;
  }
  uStack_8 = 4;
  piVar6 = *(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_All_00dfe8cb(void)

{
  func_0x0046a610(4,1);
  return &DAT_00dfe8e4;
}



void __thiscall FUN_00e03b30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a3ec);
  func_0x00e36ca0(iVar1,(*(int *)(param_1 + 0x1a3f0) - iVar1 & 0xfffff000U) + iVar1,
                  *(undefined4 *)(param_1 + 0x1a34c),param_2);
  return;
}



void __thiscall FUN_00e03b70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a3ec);
  func_0x00e36de0(iVar1,(*(int *)(param_1 + 0x1a3f0) - iVar1 & 0xfffff000U) + iVar1,
                  *(undefined4 *)(param_1 + 0x1a34c),*(undefined4 *)(param_1 + 0x1a36c),
                  *(undefined4 *)(param_1 + 0x1a370),*(undefined4 *)(param_1 + 0x1a374),param_2);
  return;
}



void __thiscall FUN_00e03bc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1a34c);
  iVar1 = *(int *)(param_1 + 0x1a3ec);
  func_0x00e36ca0(iVar1,(*(int *)(param_1 + 0x1a3f0) - iVar1 & 0xfffff000U) + iVar1,uVar2,param_2);
  func_0x00e375a0(*(undefined4 *)(param_1 + 0x1a408),
                  *(int *)(param_1 + 0x1a36c) * 0x1000 + *(int *)(param_1 + 0x1a3ec),
                  *(int *)(param_1 + 0x1a370) * 0x1000 + *(int *)(param_1 + 0x1a3ec),uVar2);
  return;
}



void __thiscall FUN_00e03f30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a3f4);
  iVar2 = *(int *)(param_1 + 0x1a34c);
  (*(code *)PTR_FUN_012ba6f4)
            (*(int *)(param_1 + 0x1a36c) * 0x1000 + *(int *)(param_1 + 0x1a3ec),
             *(int *)(param_1 + 0x1a370) * 0x1000 + *(int *)(param_1 + 0x1a3ec),iVar2,
             (*(int *)(param_1 + 0x1a350) - iVar2 & 0xfffff000U) + iVar2,param_1 + 0x17ec0,iVar1,
             iVar1 + 0x1020,*(undefined4 *)(iVar1 + 0x1000),param_2);
  return;
}



void __thiscall FUN_00e04120(int param_1,undefined4 param_2)

{
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_10;
  iStack_10 = *(int *)(param_1 + 0x1a34c);
  iStack_c = iStack_10 + 0x1000;
  iStack_8 = iStack_10 + 0x2000;
  (**(code **)(**(int **)(param_1 + 0x1a400) + 8))
            (*(int *)(param_1 + 0x1a36c) * 0x1000 + *(int *)(param_1 + 0x1a3ec),
             *(int *)(param_1 + 0x1a370) * 0x1000 + *(int *)(param_1 + 0x1a3ec),&iStack_10,param_2);
  FUN_008ab370();
  return;
}



void __fastcall FUN_00e06470(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1[0xe];
  if (0xf < uVar1) {
    iVar2 = param_1[9];
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) goto LAB_00e064f7;
    }
    func_0x008ab812(iVar4,uVar5);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    iVar2 = *param_1;
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_00e064f7:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined4 __thiscall FUN_00e06850(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x6e10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e06890(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x7c10);
  }
  return param_1;
}



undefined4 __thiscall FUN_00e068d0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x4100);
  }
  return param_1;
}



undefined4 FUN_00e09a30(void)

{
  return 0x80;
}



undefined4 FUN_00e09a40(void)

{
  return 0x100;
}



undefined1 * __fastcall FUN_00e0a110(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  memset(param_1 + 8,0,0x80);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  param_1[0x94] = 1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9c] = 0;
  memset(param_1 + 0xa0,0,0x6c);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return param_1;
}



undefined4 * __fastcall FUN_00e0a1e0(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_20 [12];
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6e6b1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  uStack_8 = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  puStack_14 = param_1;
  iVar3 = func_0x00ddbb30(0x10,0x180,uVar2);
  if (iVar3 != 0) {
    param_1[0x7d] = iVar3;
    param_1[0x7f] = iVar3 + 0x180;
    pvVar5 = (void *)param_1[0x7d];
    memset(pvVar5,0,0x180);
    param_1[0x7e] = (int)pvVar5 + 0x180;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    iVar3 = func_0x00ddbb30(0x10,0x1dc0);
    if (iVar3 != 0) {
      param_1[0x80] = iVar3;
      param_1[0x82] = iVar3 + 0x1dc0;
      pvVar5 = (void *)param_1[0x80];
      iVar3 = 2;
      puVar4 = (undefined4 *)((int)pvVar5 + 0x44);
      do {
        memset(pvVar5,0,0xee0);
        puVar4[-0xf] = 0;
        puVar4[-0xe] = 0;
        puVar4[-0xd] = 0;
        puVar4[-0xc] = 0;
        puVar4[-9] = 0;
        puVar4[-8] = 0;
        puVar4[-7] = 0x3f800000;
        puVar4[-6] = 0;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-3] = 0;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x3f800000;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        func_0x00de0410();
        pvVar5 = (void *)((int)pvVar5 + 0xee0);
        puVar4 = puVar4 + 0x3b8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puStack_14[0x81] = pvVar5;
      *unaff_FS_OFFSET = iStack_10;
      return puStack_14;
    }
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_20,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar1)();
  return puVar4;
}



void __fastcall FUN_00e0c770(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = al::backend_exception::vftable;
  *param_1 = al::base_exception::vftable;
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    iVar2 = param_1[3];
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
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = std::exception::vftable;
  func_0x008ab0a6(param_1 + 1);
  return;
}



int * __thiscall FUN_00e0c780(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  do {
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a420);
    } while ((uVar1 & 1) != 0);
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = func_0x00e87db0((ulonglong)*(uint *)(iVar2 + 0xe0) * 1000000000,
                            *(undefined4 *)(iVar2 + 4),0);
    uVar3 = *(uint *)(iVar2 + 0xe8);
    iVar4 = *(int *)(iVar2 + 0xec);
    *param_2 = (uint)uVar5 + *(uint *)(iVar2 + 0xe8);
    param_2[1] = (int)((ulonglong)uVar5 >> 0x20) + iVar4 + (uint)CARRY4((uint)uVar5,uVar3);
  } while (uVar1 != *(uint *)(*(int *)(param_1 + 4) + 0x1a420));
  uVar5 = func_0x00e87d70(*(int *)(*(int *)(param_1 + 4) + 0xc) -
                          *(int *)(*(int *)(param_1 + 4) + 8),0,1000000000,0);
  *(undefined8 *)(param_2 + 2) = uVar5;
  uVar5 = func_0x00e87db0(uVar5,*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  *(undefined8 *)(param_2 + 2) = uVar5;
  return param_2;
}



void FUN_00e0c820(void)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00e0c6f0(auStack_2c,1,"Invalid BackendBase call");
  func_0x00e87d2e(auStack_2c,&DAT_012818e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e0cb50(undefined4 *param_1)

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



void FUN_00e0cb80(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(4,8);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = _anon_BEFD3B12::LoopbackBackend::vftable;
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00e0cbd0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,8);
  }
  return param_1;
}



void __thiscall FUN_00e0cc60(uint param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  void *_Dst;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  uint uStack_4;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar9 = (int *)(iVar3 + 0x20);
  pcVar7 = param_2;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar4 = *(uint *)(iVar3 + 0x34);
  uVar8 = (int)pcVar7 - (int)(param_2 + 1);
  uStack_4 = param_1;
  if (uVar8 <= uVar4) {
    if (0xf < uVar4) {
      piVar9 = (int *)*piVar9;
    }
    *(uint *)(iVar3 + 0x30) = uVar8;
    func_0x008ab0e6(piVar9,param_2,uVar8);
    *(undefined1 *)(uVar8 + (int)piVar9) = 0;
    return;
  }
  if (0x7fffffff < uVar8) {
LAB_00e0cd4d:
    func_0x00463570();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_4 = uVar8 | 0xf;
  if (uStack_4 < 0x80000000) {
    if (0x7fffffff - (uVar4 >> 1) < uVar4) {
      uStack_4 = 0x7fffffff;
    }
    else {
      uVar1 = (uVar4 >> 1) + uVar4;
      if (uStack_4 < uVar1) {
        uStack_4 = uVar1;
      }
    }
  }
  else {
    uStack_4 = 0x7fffffff;
  }
  _Dst = (void *)func_0x0046cf00(piVar9,&uStack_4);
  *(uint *)(iVar3 + 0x30) = uVar8;
  *(uint *)(iVar3 + 0x34) = uStack_4;
  memcpy(_Dst,param_2,uVar8);
  *(undefined1 *)(uVar8 + (int)_Dst) = 0;
  if (0xf < uVar4) {
    iVar3 = *piVar9;
    uVar8 = uVar4 + 1;
    iVar6 = iVar3;
    if (0xfff < uVar8) {
      iVar6 = *(int *)(iVar3 + -4);
      uVar8 = uVar4 + 0x24;
      if (0x1f < (iVar3 - iVar6) - 4U) {
        func_0x008aaf66();
        goto LAB_00e0cd4d;
      }
    }
    func_0x008ab812(iVar6,uVar8);
  }
  *piVar9 = (int)_Dst;
  return;
}



void __thiscall FUN_00e0d820(int param_1,int *param_2,undefined4 param_3,uint param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float *pfVar18;
  undefined4 *puVar19;
  int unaff_EBX;
  int unaff_EBP;
  int iVar20;
  int iVar21;
  int unaff_ESI;
  int iVar22;
  uint uVar23;
  uint unaff_retaddr;
  uint uStack_14;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  uVar23 = param_4 + 0x80;
  iVar21 = *param_2;
  uStack_8 = param_2[2];
  iVar20 = param_2[1] - iVar21;
  uStack_14 = 0;
  if (3 < uVar23) {
    pfVar16 = (float *)(param_1 + 0x14);
    pfVar18 = (float *)(param_2[1] + 0xc);
    pfVar15 = (float *)(iVar21 + 4);
    iStack_c = (param_4 + 0x7c >> 2) + 1;
    uStack_14 = iStack_c * 4;
    do {
      pfVar16[-1] = pfVar15[-1] + pfVar18[-3];
      *pfVar16 = *(float *)((int)pfVar15 + iVar20) + *pfVar15;
      pfVar16[1] = pfVar15[1] + pfVar18[-1];
      pfVar1 = pfVar15 + 2;
      pfVar15 = pfVar15 + 4;
      fVar2 = *pfVar18;
      pfVar18 = pfVar18 + 4;
      pfVar16[2] = *pfVar1 + fVar2;
      pfVar16 = pfVar16 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  if (uStack_14 < uVar23) {
    pfVar16 = (float *)(iVar21 + uStack_14 * 4);
    iVar22 = uVar23 - uStack_14;
    pfVar15 = (float *)(param_1 + (uStack_14 + 4) * 4);
    do {
      pfVar18 = (float *)((int)pfVar16 + iVar20);
      fVar2 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      *pfVar15 = *pfVar18 + fVar2;
      pfVar15 = pfVar15 + 1;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  uVar23 = param_4 + 0x80;
  uStack_14 = 0;
  if (3 < uVar23) {
    pfVar18 = (float *)(param_1 + 0x1214);
    pfVar16 = (float *)(iVar21 + 0xc);
    iVar20 = param_2[1];
    iVar22 = (param_4 + 0x7c >> 2) + 1;
    pfVar15 = (float *)(iVar20 + 4);
    uStack_14 = iVar22 * 4;
    do {
      pfVar18[-1] = pfVar16[-3] - pfVar15[-1];
      *pfVar18 = *(float *)((iVar21 - iVar20) + (int)pfVar15) - *pfVar15;
      pfVar18[1] = pfVar16[-1] - pfVar15[1];
      fVar2 = *pfVar16;
      pfVar16 = pfVar16 + 4;
      pfVar1 = pfVar15 + 2;
      pfVar15 = pfVar15 + 4;
      pfVar18[2] = fVar2 - *pfVar1;
      pfVar18 = pfVar18 + 4;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  if (uStack_14 < uVar23) {
    iVar20 = param_2[1];
    pfVar15 = (float *)(uStack_14 * 4 + iVar20);
    iVar22 = uVar23 - uStack_14;
    pfVar16 = (float *)(param_1 + (uStack_14 + 0x484) * 4);
    do {
      pfVar18 = (float *)((int)pfVar15 + (iVar21 - iVar20));
      fVar2 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      *pfVar16 = *pfVar18 - fVar2;
      pfVar16 = pfVar16 + 1;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  uVar23 = 0;
  if (3 < param_4 + 0x80) {
    iVar21 = (param_4 + 0x7c >> 2) + 1;
    uVar23 = iVar21 * 4;
    puVar17 = (undefined4 *)(uStack_8 + 8);
    puVar19 = (undefined4 *)(param_1 + 0x2414);
    do {
      puVar19[-1] = puVar17[-2];
      *puVar19 = puVar17[-1];
      puVar19[1] = *puVar17;
      puVar19[2] = puVar17[1];
      iVar21 = iVar21 + -1;
      puVar17 = puVar17 + 4;
      puVar19 = puVar19 + 4;
    } while (iVar21 != 0);
  }
  if (uVar23 < param_4 + 0x80) {
    puVar17 = (undefined4 *)(param_1 + (uVar23 + 0x904) * 4);
    do {
      iVar21 = uVar23 * 4;
      uVar23 = uVar23 + 1;
      *puVar17 = *(undefined4 *)(uStack_8 + iVar21);
      puVar17 = puVar17 + 1;
    } while (uVar23 < param_4 + 0x80);
  }
  uStack_14 = *param_2;
  iVar20 = param_2[1];
  iStack_4 = param_2[2];
  iVar21 = param_1 + 0x3a10;
  func_0x008ab0e6(iVar21,param_1 + 0x3610,0x1fc);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00e0d110(&uStack_8,param_1 + 0x1210,param_1 + 0x1210 + (param_4 + 0x80) * 4,
                  param_1 + 0x2410,param_1 + 0x3c0c,uStack_8);
  if (param_5 != '\0') {
    func_0x008ab0e6(param_1 + 0x3610,iVar21 + param_4 * 4,0x1fc);
  }
  func_0x00e120b0(iVar20,param_4 * 4 + iVar20,iVar21);
  uVar23 = 0;
  if (7 < param_4) {
    pfVar15 = (float *)(unaff_EBP + 0x10);
    pfVar16 = (float *)(unaff_EBX + 0x18);
    uStack_14 = iVar20 - unaff_EBP;
    do {
      fVar2 = pfVar16[-1];
      fVar3 = *pfVar16;
      fVar4 = pfVar16[1];
      pfVar1 = (float *)(iVar20 + uVar23 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      uVar23 = uVar23 + 8;
      pfVar18 = (float *)((int)pfVar15 + uStack_14);
      fVar8 = *pfVar18;
      fVar9 = pfVar18[1];
      fVar10 = pfVar18[2];
      fVar11 = pfVar18[3];
      pfVar15[-4] = pfVar16[-2] * 0.981532 + *pfVar1 * 0.197484;
      pfVar15[-3] = fVar2 * 0.981532 + fVar5 * 0.197484;
      pfVar15[-2] = fVar3 * 0.981532 + fVar6 * 0.197484;
      pfVar15[-1] = fVar4 * 0.981532 + fVar7 * 0.197484;
      pfVar18 = pfVar16 + 2;
      fVar2 = pfVar16[3];
      fVar3 = pfVar16[4];
      fVar4 = pfVar16[5];
      pfVar16 = pfVar16 + 8;
      *pfVar15 = *pfVar18 * 0.981532 + fVar8 * 0.197484;
      pfVar15[1] = fVar2 * 0.981532 + fVar9 * 0.197484;
      pfVar15[2] = fVar3 * 0.981532 + fVar10 * 0.197484;
      pfVar15[3] = fVar4 * 0.981532 + fVar11 * 0.197484;
      pfVar15 = pfVar15 + 8;
    } while (uVar23 < (param_4 & 0xfffffff8));
    unaff_ESI = unaff_EBX + 0x3a10;
    param_4 = unaff_retaddr;
  }
  if (uVar23 < param_4) {
    if (3 < param_4 - uVar23) {
      pfVar16 = (float *)(iVar20 + 0xc + uVar23 * 4);
      pfVar15 = (float *)(unaff_EBX + 0x14 + uVar23 * 4);
      pfVar18 = (float *)(unaff_EBP + uVar23 * 4 + 4);
      uStack_14 = ((param_4 - uVar23) - 4 >> 2) + 1;
      uVar23 = uVar23 + uStack_14 * 4;
      do {
        fVar2 = *pfVar15;
        pfVar18[-1] = pfVar15[-1] * 0.981532 + pfVar16[-3] * 0.197484;
        fVar3 = pfVar16[-1];
        *pfVar18 = *(float *)((int)pfVar18 + (iVar20 - unaff_EBP)) * 0.197484 + fVar2 * 0.981532;
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 4;
        pfVar18[1] = pfVar15[1] * 0.981532 + fVar3 * 0.197484;
        pfVar1 = pfVar15 + 2;
        pfVar15 = pfVar15 + 4;
        pfVar18[2] = *pfVar1 * 0.981532 + fVar2 * 0.197484;
        pfVar18 = pfVar18 + 4;
        uStack_14 = uStack_14 + -1;
      } while (uStack_14 != 0);
      unaff_ESI = unaff_EBX + 0x3a10;
      uStack_14 = 0;
      param_4 = unaff_retaddr;
    }
    if (uVar23 < param_4) {
      pfVar16 = (float *)(unaff_EBX + (uVar23 + 4) * 4);
      pfVar15 = (float *)(unaff_EBP + uVar23 * 4);
      iVar21 = param_4 - uVar23;
      do {
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        *pfVar15 = *(float *)((int)pfVar15 + (iVar20 - unaff_EBP)) * 0.197484 + fVar2 * 0.981532;
        pfVar15 = pfVar15 + 1;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      unaff_ESI = unaff_EBX + 0x3a10;
    }
  }
  uVar23 = 0;
  if (7 < param_4) {
    pfVar16 = (float *)(unaff_EBX + 0x18);
    do {
      fVar2 = pfVar16[-1];
      fVar3 = *pfVar16;
      fVar4 = pfVar16[1];
      pfVar15 = (float *)(iVar20 + uVar23 * 4);
      fVar5 = pfVar15[1];
      fVar6 = pfVar15[2];
      fVar7 = pfVar15[3];
      pfVar18 = (float *)(iVar20 + uVar23 * 4);
      *pfVar18 = pfVar16[-2] * 0.418496 - *pfVar15;
      pfVar18[1] = fVar2 * 0.418496 - fVar5;
      pfVar18[2] = fVar3 * 0.418496 - fVar6;
      pfVar18[3] = fVar4 * 0.418496 - fVar7;
      pfVar15 = pfVar16 + 2;
      fVar2 = pfVar16[3];
      fVar3 = pfVar16[4];
      fVar4 = pfVar16[5];
      pfVar16 = pfVar16 + 8;
      pfVar18 = (float *)(iVar20 + 0x10 + uVar23 * 4);
      fVar5 = pfVar18[1];
      fVar6 = pfVar18[2];
      fVar7 = pfVar18[3];
      pfVar1 = (float *)(iVar20 + 0x10 + uVar23 * 4);
      *pfVar1 = *pfVar15 * 0.418496 - *pfVar18;
      pfVar1[1] = fVar2 * 0.418496 - fVar5;
      pfVar1[2] = fVar3 * 0.418496 - fVar6;
      pfVar1[3] = fVar4 * 0.418496 - fVar7;
      uVar23 = uVar23 + 8;
    } while (uVar23 < (param_4 & 0xfffffff8));
    unaff_ESI = unaff_EBX + 0x3a10;
  }
  if (uVar23 < param_4) {
    if (3 < param_4 - uVar23) {
      pfVar16 = (float *)(iVar20 + 8 + uVar23 * 4);
      pfVar15 = (float *)(unaff_EBX + (uVar23 + 5) * 4);
      iVar21 = ((param_4 - uVar23) - 4 >> 2) + 1;
      uVar23 = uVar23 + iVar21 * 4;
      do {
        pfVar16[-2] = pfVar15[-1] * 0.418496 - pfVar16[-2];
        pfVar16[-1] = *pfVar15 * 0.418496 - pfVar16[-1];
        *pfVar16 = pfVar15[1] * 0.418496 - *pfVar16;
        pfVar18 = pfVar15 + 2;
        pfVar15 = pfVar15 + 4;
        pfVar16[1] = *pfVar18 * 0.418496 - pfVar16[1];
        pfVar16 = pfVar16 + 4;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      unaff_ESI = unaff_EBX + 0x3a10;
    }
    if (uVar23 < param_4) {
      pfVar16 = (float *)(unaff_EBX + (uVar23 + 4) * 4);
      do {
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        *(float *)(iVar20 + uVar23 * 4) = fVar2 * 0.418496 - *(float *)(iVar20 + uVar23 * 4);
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
      unaff_ESI = unaff_EBX + 0x3a10;
    }
  }
  func_0x008ab0e6(unaff_EBX + 0x3a10,unaff_EBX + 0x3810,0x1fc);
  if (param_4 + 0x80 != 0) {
    func_0x008ab0e6(unaff_EBX + 0x3c0c,unaff_EBX + 0x10,(param_4 + 0x80) * 4);
  }
  if ((char)param_2 != '\0') {
    func_0x008ab0e6(unaff_EBX + 0x3810,unaff_EBX + 0x3a10 + param_4 * 4,0x1fc);
  }
  func_0x00e120b0(param_1,param_1 + param_4 * 4,unaff_ESI);
  uVar23 = 0;
  if (7 < param_4) {
    pfVar16 = (float *)(unaff_EBX + 0x1218);
    do {
      fVar2 = pfVar16[0x47f];
      fVar3 = pfVar16[0x480];
      fVar4 = pfVar16[0x481];
      fVar5 = pfVar16[-1];
      fVar6 = *pfVar16;
      fVar7 = pfVar16[1];
      pfVar15 = (float *)(param_1 + uVar23 * 4);
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      fVar11 = pfVar16[2];
      fVar12 = pfVar16[3];
      fVar13 = pfVar16[4];
      fVar14 = pfVar16[5];
      pfVar18 = (float *)(param_1 + uVar23 * 4);
      *pfVar18 = (pfVar16[-2] * 0.795968 - pfVar16[0x47e] * 0.676392) + *pfVar15 * 0.186633;
      pfVar18[1] = (fVar5 * 0.795968 - fVar2 * 0.676392) + fVar8 * 0.186633;
      pfVar18[2] = (fVar6 * 0.795968 - fVar3 * 0.676392) + fVar9 * 0.186633;
      pfVar18[3] = (fVar7 * 0.795968 - fVar4 * 0.676392) + fVar10 * 0.186633;
      pfVar15 = pfVar16 + 0x482;
      fVar2 = pfVar16[0x483];
      fVar3 = pfVar16[0x484];
      fVar4 = pfVar16[0x485];
      pfVar16 = pfVar16 + 8;
      pfVar18 = (float *)(param_1 + 0x10 + uVar23 * 4);
      fVar5 = pfVar18[1];
      fVar6 = pfVar18[2];
      fVar7 = pfVar18[3];
      pfVar1 = (float *)(param_1 + 0x10 + uVar23 * 4);
      *pfVar1 = (fVar11 * 0.795968 - *pfVar15 * 0.676392) + *pfVar18 * 0.186633;
      pfVar1[1] = (fVar12 * 0.795968 - fVar2 * 0.676392) + fVar5 * 0.186633;
      pfVar1[2] = (fVar13 * 0.795968 - fVar3 * 0.676392) + fVar6 * 0.186633;
      pfVar1[3] = (fVar14 * 0.795968 - fVar4 * 0.676392) + fVar7 * 0.186633;
      uVar23 = uVar23 + 8;
    } while (uVar23 < (param_4 & 0xfffffff8));
  }
  if (uVar23 < param_4) {
    pfVar16 = (float *)(unaff_EBX + 0x2410 + uVar23 * 4);
    do {
      fVar2 = *pfVar16;
      pfVar15 = pfVar16 + -0x480;
      pfVar16 = pfVar16 + 1;
      *(float *)(param_1 + uVar23 * 4) =
           (*pfVar15 * 0.795968 - fVar2 * 0.676392) + *(float *)(param_1 + uVar23 * 4) * 0.186633;
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_4);
  }
  if (3 < (uint)((int)(param_1 - uStack_14) >> 2)) {
    iVar21 = *(int *)(uStack_14 + 0xc);
    uVar23 = 0;
    if (0xf < param_4) {
      pfVar16 = (float *)(iVar21 + 0x20);
      do {
        uVar23 = uVar23 + 0x10;
        pfVar16[-8] = pfVar16[-8] * 1.023332;
        pfVar16[-7] = pfVar16[-7] * 1.023332;
        pfVar16[-6] = pfVar16[-6] * 1.023332;
        pfVar16[-5] = pfVar16[-5] * 1.023332;
        pfVar16[-4] = pfVar16[-4] * 1.023332;
        pfVar16[-3] = pfVar16[-3] * 1.023332;
        pfVar16[-2] = pfVar16[-2] * 1.023332;
        pfVar16[-1] = pfVar16[-1] * 1.023332;
        *pfVar16 = *pfVar16 * 1.023332;
        pfVar16[1] = pfVar16[1] * 1.023332;
        pfVar16[2] = pfVar16[2] * 1.023332;
        pfVar16[3] = pfVar16[3] * 1.023332;
        pfVar16[4] = pfVar16[4] * 1.023332;
        pfVar16[5] = pfVar16[5] * 1.023332;
        pfVar16[6] = pfVar16[6] * 1.023332;
        pfVar16[7] = pfVar16[7] * 1.023332;
        pfVar16 = pfVar16 + 0x10;
      } while (uVar23 < (param_4 & 0xfffffff0));
    }
    if (uVar23 < param_4) {
      if (3 < param_4 - uVar23) {
        iVar20 = uVar23 * 4;
        iVar22 = ((param_4 - uVar23) - 4 >> 2) + 1;
        uVar23 = uVar23 + iVar22 * 4;
        pfVar16 = (float *)(iVar21 + 8 + iVar20);
        do {
          pfVar16[-2] = pfVar16[-2] * 1.023332;
          pfVar16[-1] = pfVar16[-1] * 1.023332;
          *pfVar16 = *pfVar16 * 1.023332;
          pfVar16[1] = pfVar16[1] * 1.023332;
          iVar22 = iVar22 + -1;
          pfVar16 = pfVar16 + 4;
        } while (iVar22 != 0);
        if (param_4 <= uVar23) {
          return;
        }
      }
      do {
        *(float *)(iVar21 + uVar23 * 4) = *(float *)(iVar21 + uVar23 * 4) * 1.023332;
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
  return;
}



void __thiscall FUN_00e0e040(int param_1,int *param_2,undefined4 param_3,uint param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float *pfVar18;
  undefined4 *puVar19;
  int unaff_EBX;
  int unaff_EBP;
  int iVar20;
  int iVar21;
  int unaff_ESI;
  int iVar22;
  uint uVar23;
  uint unaff_retaddr;
  uint uStack_14;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  uVar23 = param_4 + 0x100;
  iVar21 = *param_2;
  uStack_8 = param_2[2];
  iVar20 = param_2[1] - iVar21;
  uStack_14 = 0;
  if (3 < uVar23) {
    pfVar16 = (float *)(param_1 + 0x14);
    pfVar18 = (float *)(param_2[1] + 0xc);
    pfVar15 = (float *)(iVar21 + 4);
    iStack_c = (param_4 + 0xfc >> 2) + 1;
    uStack_14 = iStack_c * 4;
    do {
      pfVar16[-1] = pfVar15[-1] + pfVar18[-3];
      *pfVar16 = *(float *)((int)pfVar15 + iVar20) + *pfVar15;
      pfVar16[1] = pfVar15[1] + pfVar18[-1];
      pfVar1 = pfVar15 + 2;
      pfVar15 = pfVar15 + 4;
      fVar2 = *pfVar18;
      pfVar18 = pfVar18 + 4;
      pfVar16[2] = *pfVar1 + fVar2;
      pfVar16 = pfVar16 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  if (uStack_14 < uVar23) {
    pfVar16 = (float *)(iVar21 + uStack_14 * 4);
    iVar22 = uVar23 - uStack_14;
    pfVar15 = (float *)(param_1 + (uStack_14 + 4) * 4);
    do {
      pfVar18 = (float *)((int)pfVar16 + iVar20);
      fVar2 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      *pfVar15 = *pfVar18 + fVar2;
      pfVar15 = pfVar15 + 1;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  uVar23 = param_4 + 0x100;
  uStack_14 = 0;
  if (3 < uVar23) {
    pfVar18 = (float *)(param_1 + 0x1414);
    pfVar16 = (float *)(iVar21 + 0xc);
    iVar20 = param_2[1];
    iVar22 = (param_4 + 0xfc >> 2) + 1;
    pfVar15 = (float *)(iVar20 + 4);
    uStack_14 = iVar22 * 4;
    do {
      pfVar18[-1] = pfVar16[-3] - pfVar15[-1];
      *pfVar18 = *(float *)((iVar21 - iVar20) + (int)pfVar15) - *pfVar15;
      pfVar18[1] = pfVar16[-1] - pfVar15[1];
      fVar2 = *pfVar16;
      pfVar16 = pfVar16 + 4;
      pfVar1 = pfVar15 + 2;
      pfVar15 = pfVar15 + 4;
      pfVar18[2] = fVar2 - *pfVar1;
      pfVar18 = pfVar18 + 4;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  if (uStack_14 < uVar23) {
    iVar20 = param_2[1];
    pfVar15 = (float *)(uStack_14 * 4 + iVar20);
    iVar22 = uVar23 - uStack_14;
    pfVar16 = (float *)(param_1 + (uStack_14 + 0x504) * 4);
    do {
      pfVar18 = (float *)((int)pfVar15 + (iVar21 - iVar20));
      fVar2 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      *pfVar16 = *pfVar18 - fVar2;
      pfVar16 = pfVar16 + 1;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  uVar23 = 0;
  if (3 < param_4 + 0x100) {
    iVar21 = (param_4 + 0xfc >> 2) + 1;
    uVar23 = iVar21 * 4;
    puVar17 = (undefined4 *)(uStack_8 + 8);
    puVar19 = (undefined4 *)(param_1 + 0x2814);
    do {
      puVar19[-1] = puVar17[-2];
      *puVar19 = puVar17[-1];
      puVar19[1] = *puVar17;
      puVar19[2] = puVar17[1];
      iVar21 = iVar21 + -1;
      puVar17 = puVar17 + 4;
      puVar19 = puVar19 + 4;
    } while (iVar21 != 0);
  }
  if (uVar23 < param_4 + 0x100) {
    puVar17 = (undefined4 *)(param_1 + (uVar23 + 0xa04) * 4);
    do {
      iVar21 = uVar23 * 4;
      uVar23 = uVar23 + 1;
      *puVar17 = *(undefined4 *)(uStack_8 + iVar21);
      puVar17 = puVar17 + 1;
    } while (uVar23 < param_4 + 0x100);
  }
  uStack_14 = *param_2;
  iVar20 = param_2[1];
  iStack_4 = param_2[2];
  iVar21 = param_1 + 0x4410;
  func_0x008ab0e6(iVar21,param_1 + 0x3c10,0x3fc);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00e0d110(&uStack_8,param_1 + 0x1410,param_1 + 0x1410 + (param_4 + 0x100) * 4,
                  param_1 + 0x2810,param_1 + 0x480c,uStack_8);
  if (param_5 != '\0') {
    func_0x008ab0e6(param_1 + 0x3c10,iVar21 + param_4 * 4,0x3fc);
  }
  func_0x00e121d0(iVar20,param_4 * 4 + iVar20,iVar21);
  uVar23 = 0;
  if (7 < param_4) {
    pfVar15 = (float *)(unaff_EBP + 0x10);
    pfVar16 = (float *)(unaff_EBX + 0x18);
    uStack_14 = iVar20 - unaff_EBP;
    do {
      fVar2 = pfVar16[-1];
      fVar3 = *pfVar16;
      fVar4 = pfVar16[1];
      pfVar1 = (float *)(iVar20 + uVar23 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      uVar23 = uVar23 + 8;
      pfVar18 = (float *)((int)pfVar15 + uStack_14);
      fVar8 = *pfVar18;
      fVar9 = pfVar18[1];
      fVar10 = pfVar18[2];
      fVar11 = pfVar18[3];
      pfVar15[-4] = pfVar16[-2] * 0.981532 + *pfVar1 * 0.197484;
      pfVar15[-3] = fVar2 * 0.981532 + fVar5 * 0.197484;
      pfVar15[-2] = fVar3 * 0.981532 + fVar6 * 0.197484;
      pfVar15[-1] = fVar4 * 0.981532 + fVar7 * 0.197484;
      pfVar18 = pfVar16 + 2;
      fVar2 = pfVar16[3];
      fVar3 = pfVar16[4];
      fVar4 = pfVar16[5];
      pfVar16 = pfVar16 + 8;
      *pfVar15 = *pfVar18 * 0.981532 + fVar8 * 0.197484;
      pfVar15[1] = fVar2 * 0.981532 + fVar9 * 0.197484;
      pfVar15[2] = fVar3 * 0.981532 + fVar10 * 0.197484;
      pfVar15[3] = fVar4 * 0.981532 + fVar11 * 0.197484;
      pfVar15 = pfVar15 + 8;
    } while (uVar23 < (param_4 & 0xfffffff8));
    unaff_ESI = unaff_EBX + 0x4410;
    param_4 = unaff_retaddr;
  }
  if (uVar23 < param_4) {
    if (3 < param_4 - uVar23) {
      pfVar16 = (float *)(iVar20 + 0xc + uVar23 * 4);
      pfVar15 = (float *)(unaff_EBX + 0x14 + uVar23 * 4);
      pfVar18 = (float *)(unaff_EBP + uVar23 * 4 + 4);
      uStack_14 = ((param_4 - uVar23) - 4 >> 2) + 1;
      uVar23 = uVar23 + uStack_14 * 4;
      do {
        fVar2 = *pfVar15;
        pfVar18[-1] = pfVar15[-1] * 0.981532 + pfVar16[-3] * 0.197484;
        fVar3 = pfVar16[-1];
        *pfVar18 = *(float *)((int)pfVar18 + (iVar20 - unaff_EBP)) * 0.197484 + fVar2 * 0.981532;
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 4;
        pfVar18[1] = pfVar15[1] * 0.981532 + fVar3 * 0.197484;
        pfVar1 = pfVar15 + 2;
        pfVar15 = pfVar15 + 4;
        pfVar18[2] = *pfVar1 * 0.981532 + fVar2 * 0.197484;
        pfVar18 = pfVar18 + 4;
        uStack_14 = uStack_14 + -1;
      } while (uStack_14 != 0);
      unaff_ESI = unaff_EBX + 0x4410;
      uStack_14 = 0;
      param_4 = unaff_retaddr;
    }
    if (uVar23 < param_4) {
      pfVar16 = (float *)(unaff_EBX + (uVar23 + 4) * 4);
      pfVar15 = (float *)(unaff_EBP + uVar23 * 4);
      iVar21 = param_4 - uVar23;
      do {
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        *pfVar15 = *(float *)((int)pfVar15 + (iVar20 - unaff_EBP)) * 0.197484 + fVar2 * 0.981532;
        pfVar15 = pfVar15 + 1;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      unaff_ESI = unaff_EBX + 0x4410;
    }
  }
  uVar23 = 0;
  if (7 < param_4) {
    pfVar16 = (float *)(unaff_EBX + 0x18);
    do {
      fVar2 = pfVar16[-1];
      fVar3 = *pfVar16;
      fVar4 = pfVar16[1];
      pfVar15 = (float *)(iVar20 + uVar23 * 4);
      fVar5 = pfVar15[1];
      fVar6 = pfVar15[2];
      fVar7 = pfVar15[3];
      pfVar18 = (float *)(iVar20 + uVar23 * 4);
      *pfVar18 = pfVar16[-2] * 0.418496 - *pfVar15;
      pfVar18[1] = fVar2 * 0.418496 - fVar5;
      pfVar18[2] = fVar3 * 0.418496 - fVar6;
      pfVar18[3] = fVar4 * 0.418496 - fVar7;
      pfVar15 = pfVar16 + 2;
      fVar2 = pfVar16[3];
      fVar3 = pfVar16[4];
      fVar4 = pfVar16[5];
      pfVar16 = pfVar16 + 8;
      pfVar18 = (float *)(iVar20 + 0x10 + uVar23 * 4);
      fVar5 = pfVar18[1];
      fVar6 = pfVar18[2];
      fVar7 = pfVar18[3];
      pfVar1 = (float *)(iVar20 + 0x10 + uVar23 * 4);
      *pfVar1 = *pfVar15 * 0.418496 - *pfVar18;
      pfVar1[1] = fVar2 * 0.418496 - fVar5;
      pfVar1[2] = fVar3 * 0.418496 - fVar6;
      pfVar1[3] = fVar4 * 0.418496 - fVar7;
      uVar23 = uVar23 + 8;
    } while (uVar23 < (param_4 & 0xfffffff8));
    unaff_ESI = unaff_EBX + 0x4410;
  }
  if (uVar23 < param_4) {
    if (3 < param_4 - uVar23) {
      pfVar16 = (float *)(iVar20 + 8 + uVar23 * 4);
      pfVar15 = (float *)(unaff_EBX + (uVar23 + 5) * 4);
      iVar21 = ((param_4 - uVar23) - 4 >> 2) + 1;
      uVar23 = uVar23 + iVar21 * 4;
      do {
        pfVar16[-2] = pfVar15[-1] * 0.418496 - pfVar16[-2];
        pfVar16[-1] = *pfVar15 * 0.418496 - pfVar16[-1];
        *pfVar16 = pfVar15[1] * 0.418496 - *pfVar16;
        pfVar18 = pfVar15 + 2;
        pfVar15 = pfVar15 + 4;
        pfVar16[1] = *pfVar18 * 0.418496 - pfVar16[1];
        pfVar16 = pfVar16 + 4;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      unaff_ESI = unaff_EBX + 0x4410;
    }
    if (uVar23 < param_4) {
      pfVar16 = (float *)(unaff_EBX + (uVar23 + 4) * 4);
      do {
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        *(float *)(iVar20 + uVar23 * 4) = fVar2 * 0.418496 - *(float *)(iVar20 + uVar23 * 4);
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
      unaff_ESI = unaff_EBX + 0x4410;
    }
  }
  func_0x008ab0e6(unaff_EBX + 0x4410,unaff_EBX + 0x4010,0x3fc);
  if (param_4 + 0x100 != 0) {
    func_0x008ab0e6(unaff_EBX + 0x480c,unaff_EBX + 0x10,(param_4 + 0x100) * 4);
  }
  if ((char)param_2 != '\0') {
    func_0x008ab0e6(unaff_EBX + 0x4010,unaff_EBX + 0x4410 + param_4 * 4,0x3fc);
  }
  func_0x00e121d0(param_1,param_1 + param_4 * 4,unaff_ESI);
  uVar23 = 0;
  if (7 < param_4) {
    pfVar16 = (float *)(unaff_EBX + 0x1418);
    do {
      fVar2 = pfVar16[0x4ff];
      fVar3 = pfVar16[0x500];
      fVar4 = pfVar16[0x501];
      fVar5 = pfVar16[-1];
      fVar6 = *pfVar16;
      fVar7 = pfVar16[1];
      pfVar15 = (float *)(param_1 + uVar23 * 4);
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      fVar11 = pfVar16[2];
      fVar12 = pfVar16[3];
      fVar13 = pfVar16[4];
      fVar14 = pfVar16[5];
      pfVar18 = (float *)(param_1 + uVar23 * 4);
      *pfVar18 = (pfVar16[-2] * 0.795968 - pfVar16[0x4fe] * 0.676392) + *pfVar15 * 0.186633;
      pfVar18[1] = (fVar5 * 0.795968 - fVar2 * 0.676392) + fVar8 * 0.186633;
      pfVar18[2] = (fVar6 * 0.795968 - fVar3 * 0.676392) + fVar9 * 0.186633;
      pfVar18[3] = (fVar7 * 0.795968 - fVar4 * 0.676392) + fVar10 * 0.186633;
      pfVar15 = pfVar16 + 0x502;
      fVar2 = pfVar16[0x503];
      fVar3 = pfVar16[0x504];
      fVar4 = pfVar16[0x505];
      pfVar16 = pfVar16 + 8;
      pfVar18 = (float *)(param_1 + 0x10 + uVar23 * 4);
      fVar5 = pfVar18[1];
      fVar6 = pfVar18[2];
      fVar7 = pfVar18[3];
      pfVar1 = (float *)(param_1 + 0x10 + uVar23 * 4);
      *pfVar1 = (fVar11 * 0.795968 - *pfVar15 * 0.676392) + *pfVar18 * 0.186633;
      pfVar1[1] = (fVar12 * 0.795968 - fVar2 * 0.676392) + fVar5 * 0.186633;
      pfVar1[2] = (fVar13 * 0.795968 - fVar3 * 0.676392) + fVar6 * 0.186633;
      pfVar1[3] = (fVar14 * 0.795968 - fVar4 * 0.676392) + fVar7 * 0.186633;
      uVar23 = uVar23 + 8;
    } while (uVar23 < (param_4 & 0xfffffff8));
  }
  if (uVar23 < param_4) {
    pfVar16 = (float *)(unaff_EBX + 0x2810 + uVar23 * 4);
    do {
      fVar2 = *pfVar16;
      pfVar15 = pfVar16 + -0x500;
      pfVar16 = pfVar16 + 1;
      *(float *)(param_1 + uVar23 * 4) =
           (*pfVar15 * 0.795968 - fVar2 * 0.676392) + *(float *)(param_1 + uVar23 * 4) * 0.186633;
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_4);
  }
  if (3 < (uint)((int)(param_1 - uStack_14) >> 2)) {
    iVar21 = *(int *)(uStack_14 + 0xc);
    uVar23 = 0;
    if (0xf < param_4) {
      pfVar16 = (float *)(iVar21 + 0x20);
      do {
        uVar23 = uVar23 + 0x10;
        pfVar16[-8] = pfVar16[-8] * 1.023332;
        pfVar16[-7] = pfVar16[-7] * 1.023332;
        pfVar16[-6] = pfVar16[-6] * 1.023332;
        pfVar16[-5] = pfVar16[-5] * 1.023332;
        pfVar16[-4] = pfVar16[-4] * 1.023332;
        pfVar16[-3] = pfVar16[-3] * 1.023332;
        pfVar16[-2] = pfVar16[-2] * 1.023332;
        pfVar16[-1] = pfVar16[-1] * 1.023332;
        *pfVar16 = *pfVar16 * 1.023332;
        pfVar16[1] = pfVar16[1] * 1.023332;
        pfVar16[2] = pfVar16[2] * 1.023332;
        pfVar16[3] = pfVar16[3] * 1.023332;
        pfVar16[4] = pfVar16[4] * 1.023332;
        pfVar16[5] = pfVar16[5] * 1.023332;
        pfVar16[6] = pfVar16[6] * 1.023332;
        pfVar16[7] = pfVar16[7] * 1.023332;
        pfVar16 = pfVar16 + 0x10;
      } while (uVar23 < (param_4 & 0xfffffff0));
    }
    if (uVar23 < param_4) {
      if (3 < param_4 - uVar23) {
        iVar20 = uVar23 * 4;
        iVar22 = ((param_4 - uVar23) - 4 >> 2) + 1;
        uVar23 = uVar23 + iVar22 * 4;
        pfVar16 = (float *)(iVar21 + 8 + iVar20);
        do {
          pfVar16[-2] = pfVar16[-2] * 1.023332;
          pfVar16[-1] = pfVar16[-1] * 1.023332;
          *pfVar16 = *pfVar16 * 1.023332;
          pfVar16[1] = pfVar16[1] * 1.023332;
          iVar22 = iVar22 + -1;
          pfVar16 = pfVar16 + 4;
        } while (iVar22 != 0);
        if (param_4 <= uVar23) {
          return;
        }
      }
      do {
        *(float *)(iVar21 + uVar23 * 4) = *(float *)(iVar21 + uVar23 * 4) * 1.023332;
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
  return;
}



void __thiscall FUN_00e0e860(int param_1,int *param_2,undefined4 param_3,uint param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int unaff_EBP;
  int iVar14;
  int unaff_ESI;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint unaff_retaddr;
  uint uStack_10;
  int iStack_c;
  
  iVar13 = *param_2;
  iVar3 = param_2[1];
  uVar12 = param_4 + 0x80;
  uStack_10 = 0;
  if (3 < uVar12) {
    pfVar10 = (float *)(iVar3 + 0xc);
    iStack_c = (param_4 + 0x7c >> 2) + 1;
    pfVar8 = (float *)(iVar13 + 4);
    pfVar11 = (float *)(param_1 + 0x14);
    uStack_10 = iStack_c * 4;
    do {
      pfVar11[-1] = pfVar8[-1] + pfVar10[-3];
      *pfVar11 = *(float *)((iVar3 - iVar13) + (int)pfVar8) + *pfVar8;
      pfVar11[1] = pfVar8[1] + pfVar10[-1];
      pfVar1 = pfVar8 + 2;
      pfVar8 = pfVar8 + 4;
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 4;
      pfVar11[2] = *pfVar1 + fVar2;
      pfVar11 = pfVar11 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  if (uStack_10 < uVar12) {
    pfVar10 = (float *)(iVar13 + uStack_10 * 4);
    iVar14 = uVar12 - uStack_10;
    pfVar8 = (float *)(param_1 + (uStack_10 + 4) * 4);
    do {
      pfVar11 = (float *)((int)pfVar10 + (iVar3 - iVar13));
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *pfVar8 = *pfVar11 + fVar2;
      pfVar8 = pfVar8 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  uVar12 = param_4 + 0x80;
  fVar16 = 0.0;
  fVar2 = *(float *)(param_1 + 4);
  fVar15 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) < 0.0) {
    fVar15 = fVar2;
  }
  if ((fVar2 == fVar15) || (param_5 == '\0')) {
    uStack_10 = 0;
    if (3 < uVar12) {
      pfVar10 = (float *)(iVar13 + 0xc);
      pfVar11 = (float *)(param_1 + 0x1214);
      pfVar8 = (float *)(iVar3 + 4);
      iVar14 = (param_4 + 0x7c >> 2) + 1;
      uStack_10 = iVar14 * 4;
      do {
        pfVar11[-1] = (pfVar10[-3] - pfVar8[-1]) * fVar15;
        *pfVar11 = (*(float *)((iVar13 - iVar3) + (int)pfVar8) - *pfVar8) * fVar15;
        pfVar11[1] = (pfVar10[-1] - pfVar8[1]) * fVar15;
        fVar2 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar11[2] = (fVar2 - *pfVar1) * fVar15;
        pfVar11 = pfVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (uStack_10 < uVar12) {
      pfVar8 = (float *)(uStack_10 * 4 + iVar3);
      iVar14 = uVar12 - uStack_10;
      pfVar10 = (float *)(param_1 + (uStack_10 + 0x484) * 4);
      do {
        pfVar11 = (float *)((int)pfVar8 + (iVar13 - iVar3));
        fVar2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *pfVar10 = (*pfVar11 - fVar2) * fVar15;
        pfVar10 = pfVar10 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    *(float *)(param_1 + 8) = fVar15;
  }
  else {
    uStack_10 = 0;
    fVar19 = (fVar2 - fVar15) /
             (float)((double)(int)param_4 + (double)(&DAT_011a2c10)[-((int)param_4 >> 0x1f)]);
    if (3 < param_4) {
      pfVar11 = (float *)(param_1 + 0x1214);
      pfVar10 = (float *)(iVar3 + 4);
      iVar14 = (param_4 - 4 >> 2) + 1;
      uStack_10 = iVar14 * 4;
      pfVar8 = (float *)(iVar13 + 0xc);
      do {
        fVar17 = fVar16 + 1.0 + 1.0;
        pfVar11[-1] = (pfVar8[-3] - pfVar10[-1]) * (fVar16 * fVar19 + fVar15);
        fVar18 = fVar17 + 1.0;
        *pfVar11 = (*(float *)((int)pfVar10 + (iVar13 - iVar3)) - *pfVar10) *
                   ((fVar16 + 1.0) * fVar19 + fVar15);
        fVar16 = fVar18 + 1.0;
        pfVar11[1] = (pfVar8[-1] - pfVar10[1]) * (fVar17 * fVar19 + fVar15);
        fVar17 = *pfVar8;
        pfVar8 = pfVar8 + 4;
        pfVar1 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pfVar11[2] = (fVar17 - *pfVar1) * (fVar18 * fVar19 + fVar15);
        pfVar11 = pfVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (uStack_10 < param_4) {
      pfVar8 = (float *)(uStack_10 * 4 + iVar3);
      iVar14 = param_4 - uStack_10;
      pfVar10 = (float *)(param_1 + (uStack_10 + 0x484) * 4);
      do {
        pfVar11 = (float *)((int)pfVar8 + (iVar13 - iVar3));
        fVar17 = *pfVar8;
        fVar18 = fVar16 * fVar19;
        fVar16 = fVar16 + 1.0;
        pfVar8 = pfVar8 + 1;
        *pfVar10 = (*pfVar11 - fVar17) * (fVar18 + fVar15);
        pfVar10 = pfVar10 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar12 = param_4 + 0x80;
    if (param_4 < uVar12) {
      pfVar10 = (float *)(iVar13 + 0xc + param_4 * 4);
      pfVar8 = (float *)(param_4 * 4 + 4 + iVar3);
      pfVar11 = (float *)(param_1 + param_4 * 4 + 0x1214);
      iVar14 = ((uVar12 - param_4) - 4 >> 2) + 1;
      uVar9 = param_4 + iVar14 * 4;
      do {
        pfVar11[-1] = (pfVar10[-3] - pfVar8[-1]) * fVar2;
        *pfVar11 = (*(float *)((iVar13 - iVar3) + (int)pfVar8) - *pfVar8) * fVar2;
        pfVar11[1] = (pfVar10[-1] - pfVar8[1]) * fVar2;
        fVar15 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar11[2] = (fVar15 - *pfVar1) * fVar2;
        pfVar11 = pfVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      if (uVar9 < uVar12) {
        pfVar8 = (float *)(uVar9 * 4 + iVar3);
        iVar14 = uVar12 - uVar9;
        pfVar10 = (float *)(param_1 + (uVar9 + 0x484) * 4);
        do {
          pfVar11 = (float *)((int)pfVar8 + (iVar13 - iVar3));
          fVar15 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *pfVar10 = (*pfVar11 - fVar15) * fVar2;
          pfVar10 = pfVar10 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    *(float *)(param_1 + 8) = fVar2;
  }
  iVar3 = param_2[1];
  iVar14 = param_2[2];
  iVar13 = param_1 + 0x2810;
  func_0x008ab0e6(iVar13,param_1 + 0x2410,0x1fc);
  if (param_4 != 0xffffff80) {
    func_0x008ab0e6(param_1 + 0x2a0c,param_1 + 0x1210,(param_4 + 0x80) * 4);
  }
  if (param_5 != '\0') {
    func_0x008ab0e6(param_1 + 0x2410,iVar13 + param_4 * 4,0x1fc);
  }
  func_0x00e120b0(iVar3,iVar3 + param_4 * 4,iVar13);
  uVar12 = 0;
  if (7 < param_4) {
    uVar9 = param_4 & 0xfffffff8;
    pfVar8 = (float *)(unaff_ESI + 0x18);
    pfVar10 = (float *)(unaff_EBP + 0x10);
    do {
      fVar2 = pfVar8[-1];
      fVar15 = *pfVar8;
      fVar16 = pfVar8[1];
      pfVar11 = (float *)(iVar3 + uVar12 * 4);
      fVar19 = pfVar11[1];
      fVar17 = pfVar11[2];
      fVar18 = pfVar11[3];
      uVar12 = uVar12 + 8;
      pfVar1 = (float *)((iVar3 - unaff_EBP) + (int)pfVar10);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar10[-4] = pfVar8[-2] * 0.6098637 - *pfVar11 * 0.6896511;
      pfVar10[-3] = fVar2 * 0.6098637 - fVar19 * 0.6896511;
      pfVar10[-2] = fVar15 * 0.6098637 - fVar17 * 0.6896511;
      pfVar10[-1] = fVar16 * 0.6098637 - fVar18 * 0.6896511;
      pfVar11 = pfVar8 + 2;
      fVar2 = pfVar8[3];
      fVar15 = pfVar8[4];
      fVar16 = pfVar8[5];
      pfVar8 = pfVar8 + 8;
      *pfVar10 = *pfVar11 * 0.6098637 - fVar4 * 0.6896511;
      pfVar10[1] = fVar2 * 0.6098637 - fVar5 * 0.6896511;
      pfVar10[2] = fVar15 * 0.6098637 - fVar6 * 0.6896511;
      pfVar10[3] = fVar16 * 0.6098637 - fVar7 * 0.6896511;
      pfVar10 = pfVar10 + 8;
      param_4 = unaff_retaddr;
    } while (uVar12 < uVar9);
  }
  if (uVar12 < param_4) {
    if (3 < param_4 - uVar12) {
      pfVar10 = (float *)(iVar3 + 0xc + uVar12 * 4);
      pfVar8 = (float *)(unaff_ESI + 0x14 + uVar12 * 4);
      pfVar11 = (float *)(unaff_EBP + uVar12 * 4 + 4);
      uStack_10 = ((param_4 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + uStack_10 * 4;
      do {
        fVar2 = *(float *)((int)pfVar11 + (iVar3 - unaff_EBP));
        pfVar11[-1] = pfVar8[-1] * 0.6098637 - pfVar10[-3] * 0.6896511;
        fVar15 = pfVar10[-1];
        *pfVar11 = *pfVar8 * 0.6098637 - fVar2 * 0.6896511;
        fVar2 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar11[1] = pfVar8[1] * 0.6098637 - fVar15 * 0.6896511;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar11[2] = *pfVar1 * 0.6098637 - fVar2 * 0.6896511;
        pfVar11 = pfVar11 + 4;
        uStack_10 = uStack_10 + -1;
      } while (uStack_10 != 0);
      param_4 = unaff_retaddr;
      if (unaff_retaddr <= uVar12) goto LAB_00e0ef38;
    }
    pfVar10 = (float *)(unaff_ESI + 0x10 + uVar12 * 4);
    iVar13 = param_4 - uVar12;
    pfVar8 = (float *)(unaff_EBP + uVar12 * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *pfVar8 = fVar2 * 0.6098637 - *(float *)((int)pfVar8 + (iVar3 - unaff_EBP)) * 0.6896511;
      pfVar8 = pfVar8 + 1;
      iVar13 = iVar13 + -1;
      param_4 = unaff_retaddr;
    } while (iVar13 != 0);
  }
LAB_00e0ef38:
  uVar12 = 0;
  if (7 < param_4) {
    pfVar10 = (float *)(unaff_ESI + 0x18);
    do {
      pfVar8 = (float *)(iVar3 + uVar12 * 4);
      fVar2 = pfVar8[1];
      fVar15 = pfVar8[2];
      fVar16 = pfVar8[3];
      fVar19 = pfVar10[-1];
      fVar17 = *pfVar10;
      fVar18 = pfVar10[1];
      pfVar11 = (float *)(iVar3 + uVar12 * 4);
      *pfVar11 = pfVar10[-2] * 0.8624776 + *pfVar8 * 0.7626955;
      pfVar11[1] = fVar19 * 0.8624776 + fVar2 * 0.7626955;
      pfVar11[2] = fVar17 * 0.8624776 + fVar15 * 0.7626955;
      pfVar11[3] = fVar18 * 0.8624776 + fVar16 * 0.7626955;
      pfVar11 = (float *)(iVar3 + 0x10 + uVar12 * 4);
      fVar2 = pfVar11[1];
      fVar15 = pfVar11[2];
      fVar16 = pfVar11[3];
      pfVar8 = pfVar10 + 2;
      fVar19 = pfVar10[3];
      fVar17 = pfVar10[4];
      fVar18 = pfVar10[5];
      pfVar10 = pfVar10 + 8;
      pfVar1 = (float *)(iVar3 + 0x10 + uVar12 * 4);
      *pfVar1 = *pfVar8 * 0.8624776 + *pfVar11 * 0.7626955;
      pfVar1[1] = fVar19 * 0.8624776 + fVar2 * 0.7626955;
      pfVar1[2] = fVar17 * 0.8624776 + fVar15 * 0.7626955;
      pfVar1[3] = fVar18 * 0.8624776 + fVar16 * 0.7626955;
      uVar12 = uVar12 + 8;
    } while (uVar12 < (param_4 & 0xfffffff8));
  }
  if (uVar12 < param_4) {
    if (3 < param_4 - uVar12) {
      pfVar10 = (float *)(iVar3 + 8 + uVar12 * 4);
      pfVar8 = (float *)(unaff_ESI + 0x14 + uVar12 * 4);
      iVar13 = ((param_4 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + iVar13 * 4;
      do {
        pfVar10[-2] = pfVar8[-1] * 0.8624776 + pfVar10[-2] * 0.7626955;
        pfVar10[-1] = *pfVar8 * 0.8624776 + pfVar10[-1] * 0.7626955;
        *pfVar10 = pfVar8[1] * 0.8624776 + *pfVar10 * 0.7626955;
        pfVar11 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar10[1] = *pfVar11 * 0.8624776 + pfVar10[1] * 0.7626955;
        pfVar10 = pfVar10 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_4 <= uVar12) goto LAB_00e0f074;
    }
    pfVar10 = (float *)(unaff_ESI + (uVar12 + 4) * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *(float *)(iVar3 + uVar12 * 4) =
           *(float *)(iVar3 + uVar12 * 4) * 0.7626955 + fVar2 * 0.8624776;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
  }
LAB_00e0f074:
  func_0x008ab0e6(unaff_ESI + 0x2810,unaff_ESI + 0x2610,0x1fc);
  if (param_4 + 0x80 != 0) {
    func_0x008ab0e6(unaff_ESI + 0x2a0c,unaff_ESI + 0x10,(param_4 + 0x80) * 4);
  }
  if ((char)param_2 != '\0') {
    func_0x008ab0e6(unaff_ESI + 0x2610,unaff_ESI + 0x2810 + param_4 * 4,0x1fc);
  }
  func_0x00e120b0(iVar14,param_4 * 4 + iVar14,unaff_ESI + 0x2810);
  uVar12 = 0;
  if (7 < param_4) {
    pfVar10 = (float *)(unaff_ESI + 0x1218);
    do {
      pfVar8 = (float *)(iVar14 + uVar12 * 4);
      fVar2 = pfVar8[1];
      fVar15 = pfVar8[2];
      fVar16 = pfVar8[3];
      fVar19 = pfVar10[-1];
      fVar17 = *pfVar10;
      fVar18 = pfVar10[1];
      pfVar11 = (float *)(iVar14 + uVar12 * 4);
      *pfVar11 = pfVar10[-2] * 1.6822416 - *pfVar8 * 0.2156194;
      pfVar11[1] = fVar19 * 1.6822416 - fVar2 * 0.2156194;
      pfVar11[2] = fVar17 * 1.6822416 - fVar15 * 0.2156194;
      pfVar11[3] = fVar18 * 1.6822416 - fVar16 * 0.2156194;
      pfVar11 = (float *)(iVar14 + 0x10 + uVar12 * 4);
      fVar2 = pfVar11[1];
      fVar15 = pfVar11[2];
      fVar16 = pfVar11[3];
      pfVar8 = pfVar10 + 2;
      fVar19 = pfVar10[3];
      fVar17 = pfVar10[4];
      fVar18 = pfVar10[5];
      pfVar10 = pfVar10 + 8;
      pfVar1 = (float *)(iVar14 + 0x10 + uVar12 * 4);
      *pfVar1 = *pfVar8 * 1.6822416 - *pfVar11 * 0.2156194;
      pfVar1[1] = fVar19 * 1.6822416 - fVar2 * 0.2156194;
      pfVar1[2] = fVar17 * 1.6822416 - fVar15 * 0.2156194;
      pfVar1[3] = fVar18 * 1.6822416 - fVar16 * 0.2156194;
      uVar12 = uVar12 + 8;
    } while (uVar12 < (param_4 & 0xfffffff8));
  }
  if (uVar12 < param_4) {
    if (3 < param_4 - uVar12) {
      pfVar10 = (float *)(iVar14 + 8 + uVar12 * 4);
      pfVar8 = (float *)(unaff_ESI + 0x1214 + uVar12 * 4);
      iVar13 = ((param_4 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + iVar13 * 4;
      do {
        pfVar10[-2] = pfVar8[-1] * 1.6822416 - pfVar10[-2] * 0.2156194;
        pfVar10[-1] = *pfVar8 * 1.6822416 - pfVar10[-1] * 0.2156194;
        *pfVar10 = pfVar8[1] * 1.6822416 - *pfVar10 * 0.2156194;
        pfVar11 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar10[1] = *pfVar11 * 1.6822416 - pfVar10[1] * 0.2156194;
        pfVar10 = pfVar10 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_4 <= uVar12) {
        return;
      }
    }
    pfVar10 = (float *)(unaff_ESI + 0x1210 + uVar12 * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *(float *)(iVar14 + uVar12 * 4) =
           fVar2 * 1.6822416 - *(float *)(iVar14 + uVar12 * 4) * 0.2156194;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
  }
  return;
}



void __thiscall FUN_00e0f250(int param_1,int *param_2,undefined4 param_3,uint param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int unaff_EBP;
  int iVar14;
  int unaff_ESI;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint unaff_retaddr;
  uint uStack_10;
  int iStack_c;
  
  iVar13 = *param_2;
  iVar3 = param_2[1];
  uVar12 = param_4 + 0x100;
  uStack_10 = 0;
  if (3 < uVar12) {
    pfVar10 = (float *)(iVar3 + 0xc);
    iStack_c = (param_4 + 0xfc >> 2) + 1;
    pfVar8 = (float *)(iVar13 + 4);
    pfVar11 = (float *)(param_1 + 0x14);
    uStack_10 = iStack_c * 4;
    do {
      pfVar11[-1] = pfVar8[-1] + pfVar10[-3];
      *pfVar11 = *(float *)((iVar3 - iVar13) + (int)pfVar8) + *pfVar8;
      pfVar11[1] = pfVar8[1] + pfVar10[-1];
      pfVar1 = pfVar8 + 2;
      pfVar8 = pfVar8 + 4;
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 4;
      pfVar11[2] = *pfVar1 + fVar2;
      pfVar11 = pfVar11 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  if (uStack_10 < uVar12) {
    pfVar10 = (float *)(iVar13 + uStack_10 * 4);
    iVar14 = uVar12 - uStack_10;
    pfVar8 = (float *)(param_1 + (uStack_10 + 4) * 4);
    do {
      pfVar11 = (float *)((int)pfVar10 + (iVar3 - iVar13));
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *pfVar8 = *pfVar11 + fVar2;
      pfVar8 = pfVar8 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  uVar12 = param_4 + 0x100;
  fVar16 = 0.0;
  fVar2 = *(float *)(param_1 + 4);
  fVar15 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) < 0.0) {
    fVar15 = fVar2;
  }
  if ((fVar2 == fVar15) || (param_5 == '\0')) {
    uStack_10 = 0;
    if (3 < uVar12) {
      pfVar10 = (float *)(iVar13 + 0xc);
      pfVar11 = (float *)(param_1 + 0x1414);
      pfVar8 = (float *)(iVar3 + 4);
      iVar14 = (param_4 + 0xfc >> 2) + 1;
      uStack_10 = iVar14 * 4;
      do {
        pfVar11[-1] = (pfVar10[-3] - pfVar8[-1]) * fVar15;
        *pfVar11 = (*(float *)((iVar13 - iVar3) + (int)pfVar8) - *pfVar8) * fVar15;
        pfVar11[1] = (pfVar10[-1] - pfVar8[1]) * fVar15;
        fVar2 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar11[2] = (fVar2 - *pfVar1) * fVar15;
        pfVar11 = pfVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (uStack_10 < uVar12) {
      pfVar8 = (float *)(uStack_10 * 4 + iVar3);
      iVar14 = uVar12 - uStack_10;
      pfVar10 = (float *)(param_1 + (uStack_10 + 0x504) * 4);
      do {
        pfVar11 = (float *)((int)pfVar8 + (iVar13 - iVar3));
        fVar2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *pfVar10 = (*pfVar11 - fVar2) * fVar15;
        pfVar10 = pfVar10 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    *(float *)(param_1 + 8) = fVar15;
  }
  else {
    uStack_10 = 0;
    fVar19 = (fVar2 - fVar15) /
             (float)((double)(int)param_4 + (double)(&DAT_011a2c10)[-((int)param_4 >> 0x1f)]);
    if (3 < param_4) {
      pfVar11 = (float *)(param_1 + 0x1414);
      pfVar10 = (float *)(iVar3 + 4);
      iVar14 = (param_4 - 4 >> 2) + 1;
      uStack_10 = iVar14 * 4;
      pfVar8 = (float *)(iVar13 + 0xc);
      do {
        fVar17 = fVar16 + 1.0 + 1.0;
        pfVar11[-1] = (pfVar8[-3] - pfVar10[-1]) * (fVar16 * fVar19 + fVar15);
        fVar18 = fVar17 + 1.0;
        *pfVar11 = (*(float *)((int)pfVar10 + (iVar13 - iVar3)) - *pfVar10) *
                   ((fVar16 + 1.0) * fVar19 + fVar15);
        fVar16 = fVar18 + 1.0;
        pfVar11[1] = (pfVar8[-1] - pfVar10[1]) * (fVar17 * fVar19 + fVar15);
        fVar17 = *pfVar8;
        pfVar8 = pfVar8 + 4;
        pfVar1 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pfVar11[2] = (fVar17 - *pfVar1) * (fVar18 * fVar19 + fVar15);
        pfVar11 = pfVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (uStack_10 < param_4) {
      pfVar8 = (float *)(uStack_10 * 4 + iVar3);
      iVar14 = param_4 - uStack_10;
      pfVar10 = (float *)(param_1 + (uStack_10 + 0x504) * 4);
      do {
        pfVar11 = (float *)((int)pfVar8 + (iVar13 - iVar3));
        fVar17 = *pfVar8;
        fVar18 = fVar16 * fVar19;
        fVar16 = fVar16 + 1.0;
        pfVar8 = pfVar8 + 1;
        *pfVar10 = (*pfVar11 - fVar17) * (fVar18 + fVar15);
        pfVar10 = pfVar10 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar12 = param_4 + 0x100;
    if (param_4 < uVar12) {
      pfVar10 = (float *)(iVar13 + 0xc + param_4 * 4);
      pfVar8 = (float *)(param_4 * 4 + 4 + iVar3);
      pfVar11 = (float *)(param_1 + param_4 * 4 + 0x1414);
      iVar14 = ((uVar12 - param_4) - 4 >> 2) + 1;
      uVar9 = param_4 + iVar14 * 4;
      do {
        pfVar11[-1] = (pfVar10[-3] - pfVar8[-1]) * fVar2;
        *pfVar11 = (*(float *)((iVar13 - iVar3) + (int)pfVar8) - *pfVar8) * fVar2;
        pfVar11[1] = (pfVar10[-1] - pfVar8[1]) * fVar2;
        fVar15 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar11[2] = (fVar15 - *pfVar1) * fVar2;
        pfVar11 = pfVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      if (uVar9 < uVar12) {
        pfVar8 = (float *)(uVar9 * 4 + iVar3);
        iVar14 = uVar12 - uVar9;
        pfVar10 = (float *)(param_1 + (uVar9 + 0x504) * 4);
        do {
          pfVar11 = (float *)((int)pfVar8 + (iVar13 - iVar3));
          fVar15 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *pfVar10 = (*pfVar11 - fVar15) * fVar2;
          pfVar10 = pfVar10 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    *(float *)(param_1 + 8) = fVar2;
  }
  iVar3 = param_2[1];
  iVar14 = param_2[2];
  iVar13 = param_1 + 0x3010;
  func_0x008ab0e6(iVar13,param_1 + 0x2810,0x3fc);
  if (param_4 != 0xffffff00) {
    func_0x008ab0e6(param_1 + 0x340c,param_1 + 0x1410,(param_4 + 0x100) * 4);
  }
  if (param_5 != '\0') {
    func_0x008ab0e6(param_1 + 0x2810,iVar13 + param_4 * 4,0x3fc);
  }
  func_0x00e121d0(iVar3,iVar3 + param_4 * 4,iVar13);
  uVar12 = 0;
  if (7 < param_4) {
    uVar9 = param_4 & 0xfffffff8;
    pfVar8 = (float *)(unaff_ESI + 0x18);
    pfVar10 = (float *)(unaff_EBP + 0x10);
    do {
      fVar2 = pfVar8[-1];
      fVar15 = *pfVar8;
      fVar16 = pfVar8[1];
      pfVar11 = (float *)(iVar3 + uVar12 * 4);
      fVar19 = pfVar11[1];
      fVar17 = pfVar11[2];
      fVar18 = pfVar11[3];
      uVar12 = uVar12 + 8;
      pfVar1 = (float *)((iVar3 - unaff_EBP) + (int)pfVar10);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar10[-4] = pfVar8[-2] * 0.6098637 - *pfVar11 * 0.6896511;
      pfVar10[-3] = fVar2 * 0.6098637 - fVar19 * 0.6896511;
      pfVar10[-2] = fVar15 * 0.6098637 - fVar17 * 0.6896511;
      pfVar10[-1] = fVar16 * 0.6098637 - fVar18 * 0.6896511;
      pfVar11 = pfVar8 + 2;
      fVar2 = pfVar8[3];
      fVar15 = pfVar8[4];
      fVar16 = pfVar8[5];
      pfVar8 = pfVar8 + 8;
      *pfVar10 = *pfVar11 * 0.6098637 - fVar4 * 0.6896511;
      pfVar10[1] = fVar2 * 0.6098637 - fVar5 * 0.6896511;
      pfVar10[2] = fVar15 * 0.6098637 - fVar6 * 0.6896511;
      pfVar10[3] = fVar16 * 0.6098637 - fVar7 * 0.6896511;
      pfVar10 = pfVar10 + 8;
      param_4 = unaff_retaddr;
    } while (uVar12 < uVar9);
  }
  if (uVar12 < param_4) {
    if (3 < param_4 - uVar12) {
      pfVar10 = (float *)(iVar3 + 0xc + uVar12 * 4);
      pfVar8 = (float *)(unaff_ESI + 0x14 + uVar12 * 4);
      pfVar11 = (float *)(unaff_EBP + uVar12 * 4 + 4);
      uStack_10 = ((param_4 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + uStack_10 * 4;
      do {
        fVar2 = *(float *)((int)pfVar11 + (iVar3 - unaff_EBP));
        pfVar11[-1] = pfVar8[-1] * 0.6098637 - pfVar10[-3] * 0.6896511;
        fVar15 = pfVar10[-1];
        *pfVar11 = *pfVar8 * 0.6098637 - fVar2 * 0.6896511;
        fVar2 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar11[1] = pfVar8[1] * 0.6098637 - fVar15 * 0.6896511;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar11[2] = *pfVar1 * 0.6098637 - fVar2 * 0.6896511;
        pfVar11 = pfVar11 + 4;
        uStack_10 = uStack_10 + -1;
      } while (uStack_10 != 0);
      param_4 = unaff_retaddr;
      if (unaff_retaddr <= uVar12) goto LAB_00e0f928;
    }
    pfVar10 = (float *)(unaff_ESI + 0x10 + uVar12 * 4);
    iVar13 = param_4 - uVar12;
    pfVar8 = (float *)(unaff_EBP + uVar12 * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *pfVar8 = fVar2 * 0.6098637 - *(float *)((int)pfVar8 + (iVar3 - unaff_EBP)) * 0.6896511;
      pfVar8 = pfVar8 + 1;
      iVar13 = iVar13 + -1;
      param_4 = unaff_retaddr;
    } while (iVar13 != 0);
  }
LAB_00e0f928:
  uVar12 = 0;
  if (7 < param_4) {
    pfVar10 = (float *)(unaff_ESI + 0x18);
    do {
      pfVar8 = (float *)(iVar3 + uVar12 * 4);
      fVar2 = pfVar8[1];
      fVar15 = pfVar8[2];
      fVar16 = pfVar8[3];
      fVar19 = pfVar10[-1];
      fVar17 = *pfVar10;
      fVar18 = pfVar10[1];
      pfVar11 = (float *)(iVar3 + uVar12 * 4);
      *pfVar11 = pfVar10[-2] * 0.8624776 + *pfVar8 * 0.7626955;
      pfVar11[1] = fVar19 * 0.8624776 + fVar2 * 0.7626955;
      pfVar11[2] = fVar17 * 0.8624776 + fVar15 * 0.7626955;
      pfVar11[3] = fVar18 * 0.8624776 + fVar16 * 0.7626955;
      pfVar11 = (float *)(iVar3 + 0x10 + uVar12 * 4);
      fVar2 = pfVar11[1];
      fVar15 = pfVar11[2];
      fVar16 = pfVar11[3];
      pfVar8 = pfVar10 + 2;
      fVar19 = pfVar10[3];
      fVar17 = pfVar10[4];
      fVar18 = pfVar10[5];
      pfVar10 = pfVar10 + 8;
      pfVar1 = (float *)(iVar3 + 0x10 + uVar12 * 4);
      *pfVar1 = *pfVar8 * 0.8624776 + *pfVar11 * 0.7626955;
      pfVar1[1] = fVar19 * 0.8624776 + fVar2 * 0.7626955;
      pfVar1[2] = fVar17 * 0.8624776 + fVar15 * 0.7626955;
      pfVar1[3] = fVar18 * 0.8624776 + fVar16 * 0.7626955;
      uVar12 = uVar12 + 8;
    } while (uVar12 < (param_4 & 0xfffffff8));
  }
  if (uVar12 < param_4) {
    if (3 < param_4 - uVar12) {
      pfVar10 = (float *)(iVar3 + 8 + uVar12 * 4);
      pfVar8 = (float *)(unaff_ESI + 0x14 + uVar12 * 4);
      iVar13 = ((param_4 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + iVar13 * 4;
      do {
        pfVar10[-2] = pfVar8[-1] * 0.8624776 + pfVar10[-2] * 0.7626955;
        pfVar10[-1] = *pfVar8 * 0.8624776 + pfVar10[-1] * 0.7626955;
        *pfVar10 = pfVar8[1] * 0.8624776 + *pfVar10 * 0.7626955;
        pfVar11 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar10[1] = *pfVar11 * 0.8624776 + pfVar10[1] * 0.7626955;
        pfVar10 = pfVar10 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_4 <= uVar12) goto LAB_00e0fa64;
    }
    pfVar10 = (float *)(unaff_ESI + (uVar12 + 4) * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *(float *)(iVar3 + uVar12 * 4) =
           *(float *)(iVar3 + uVar12 * 4) * 0.7626955 + fVar2 * 0.8624776;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
  }
LAB_00e0fa64:
  func_0x008ab0e6(unaff_ESI + 0x3010,unaff_ESI + 0x2c10,0x3fc);
  if (param_4 + 0x100 != 0) {
    func_0x008ab0e6(unaff_ESI + 0x340c,unaff_ESI + 0x10,(param_4 + 0x100) * 4);
  }
  if ((char)param_2 != '\0') {
    func_0x008ab0e6(unaff_ESI + 0x2c10,unaff_ESI + 0x3010 + param_4 * 4,0x3fc);
  }
  func_0x00e121d0(iVar14,param_4 * 4 + iVar14,unaff_ESI + 0x3010);
  uVar12 = 0;
  if (7 < param_4) {
    pfVar10 = (float *)(unaff_ESI + 0x1418);
    do {
      pfVar8 = (float *)(iVar14 + uVar12 * 4);
      fVar2 = pfVar8[1];
      fVar15 = pfVar8[2];
      fVar16 = pfVar8[3];
      fVar19 = pfVar10[-1];
      fVar17 = *pfVar10;
      fVar18 = pfVar10[1];
      pfVar11 = (float *)(iVar14 + uVar12 * 4);
      *pfVar11 = pfVar10[-2] * 1.6822416 - *pfVar8 * 0.2156194;
      pfVar11[1] = fVar19 * 1.6822416 - fVar2 * 0.2156194;
      pfVar11[2] = fVar17 * 1.6822416 - fVar15 * 0.2156194;
      pfVar11[3] = fVar18 * 1.6822416 - fVar16 * 0.2156194;
      pfVar11 = (float *)(iVar14 + 0x10 + uVar12 * 4);
      fVar2 = pfVar11[1];
      fVar15 = pfVar11[2];
      fVar16 = pfVar11[3];
      pfVar8 = pfVar10 + 2;
      fVar19 = pfVar10[3];
      fVar17 = pfVar10[4];
      fVar18 = pfVar10[5];
      pfVar10 = pfVar10 + 8;
      pfVar1 = (float *)(iVar14 + 0x10 + uVar12 * 4);
      *pfVar1 = *pfVar8 * 1.6822416 - *pfVar11 * 0.2156194;
      pfVar1[1] = fVar19 * 1.6822416 - fVar2 * 0.2156194;
      pfVar1[2] = fVar17 * 1.6822416 - fVar15 * 0.2156194;
      pfVar1[3] = fVar18 * 1.6822416 - fVar16 * 0.2156194;
      uVar12 = uVar12 + 8;
    } while (uVar12 < (param_4 & 0xfffffff8));
  }
  if (uVar12 < param_4) {
    if (3 < param_4 - uVar12) {
      pfVar10 = (float *)(iVar14 + 8 + uVar12 * 4);
      pfVar8 = (float *)(unaff_ESI + 0x1414 + uVar12 * 4);
      iVar13 = ((param_4 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + iVar13 * 4;
      do {
        pfVar10[-2] = pfVar8[-1] * 1.6822416 - pfVar10[-2] * 0.2156194;
        pfVar10[-1] = *pfVar8 * 1.6822416 - pfVar10[-1] * 0.2156194;
        *pfVar10 = pfVar8[1] * 1.6822416 - *pfVar10 * 0.2156194;
        pfVar11 = pfVar8 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar10[1] = *pfVar11 * 1.6822416 - pfVar10[1] * 0.2156194;
        pfVar10 = pfVar10 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_4 <= uVar12) {
        return;
      }
    }
    pfVar10 = (float *)(unaff_ESI + 0x1410 + uVar12 * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *(float *)(iVar14 + uVar12 * 4) =
           fVar2 * 1.6822416 - *(float *)(iVar14 + uVar12 * 4) * 0.2156194;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
  }
  return;
}



void __thiscall
FUN_00e0fc40(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  char unaff_BL;
  undefined4 *puVar16;
  uint unaff_EBP;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iStack_3c;
  uint uStack_10;
  
  iVar18 = *param_2;
  iVar19 = param_2[1] - iVar18;
  uStack_10 = 0;
  if (3 < param_4) {
    pfVar15 = (float *)(param_2[1] + 0xc);
    pfVar13 = (float *)(iVar18 + 4);
    pfVar14 = (float *)(param_1 + 5);
    iVar17 = (param_4 - 4 >> 2) + 1;
    uStack_10 = iVar17 * 4;
    do {
      pfVar14[-1] = pfVar13[-1] + pfVar15[-3];
      *pfVar14 = *(float *)((int)pfVar13 + iVar19) + *pfVar13;
      pfVar14[1] = pfVar13[1] + pfVar15[-1];
      pfVar2 = pfVar13 + 2;
      pfVar13 = pfVar13 + 4;
      fVar3 = *pfVar15;
      pfVar15 = pfVar15 + 4;
      pfVar14[2] = *pfVar2 + fVar3;
      pfVar14 = pfVar14 + 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if (uStack_10 < param_4) {
    pfVar13 = (float *)(uStack_10 * 4 + iVar18);
    iVar17 = param_4 - uStack_10;
    pfVar15 = (float *)(param_1 + uStack_10 + 4);
    do {
      pfVar14 = (float *)((int)pfVar13 + iVar19);
      fVar3 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      *pfVar15 = *pfVar14 + fVar3;
      pfVar15 = pfVar15 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  uVar20 = 0;
  if (3 < param_4) {
    pfVar14 = (float *)(param_1 + 0x405);
    pfVar15 = (float *)(iVar18 + 0xc);
    iVar19 = param_2[1];
    iVar17 = (param_4 - 4 >> 2) + 1;
    pfVar13 = (float *)(iVar19 + 4);
    uVar20 = iVar17 * 4;
    do {
      pfVar14[-1] = pfVar15[-3] - pfVar13[-1];
      *pfVar14 = *(float *)((iVar18 - iVar19) + (int)pfVar13) - *pfVar13;
      pfVar14[1] = pfVar15[-1] - pfVar13[1];
      fVar3 = *pfVar15;
      pfVar15 = pfVar15 + 4;
      pfVar2 = pfVar13 + 2;
      pfVar13 = pfVar13 + 4;
      pfVar14[2] = fVar3 - *pfVar2;
      pfVar14 = pfVar14 + 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if (uVar20 < param_4) {
    pfVar15 = (float *)(param_1 + uVar20 + 0x404);
    iVar19 = param_2[1];
    pfVar13 = (float *)(iVar19 + uVar20 * 4);
    iVar17 = param_4 - uVar20;
    do {
      pfVar14 = (float *)((int)pfVar13 + (iVar18 - iVar19));
      fVar3 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      *pfVar15 = *pfVar14 - fVar3;
      pfVar15 = pfVar15 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  puVar1 = param_1 + 0x804;
  iVar18 = param_2[1];
  func_0x00e0d110();
  func_0x00e122f0();
  *puVar1 = param_1[0xc05];
  func_0x00e122f0();
  if (unaff_BL != '\0') {
    param_1[0xc05] = param_1[param_4 + 0x804];
  }
  uVar20 = 0;
  puVar16 = param_1;
  if (7 < param_4) {
    pfVar13 = (float *)(param_1 + 0x806);
    uVar21 = param_4 & 0xfffffff8;
    pfVar15 = (float *)&UNK_010e04d8;
    do {
      fVar3 = pfVar13[-1];
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      pfVar2 = (float *)(iVar18 + uVar20 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      uVar20 = uVar20 + 8;
      pfVar14 = (float *)(iVar18 + -0x10e04c8 + (int)pfVar15);
      fVar9 = *pfVar14;
      fVar10 = pfVar14[1];
      fVar11 = pfVar14[2];
      fVar12 = pfVar14[3];
      pfVar15[-4] = pfVar13[-2] * 0.981532 + *pfVar2 * 0.197484;
      pfVar15[-3] = fVar3 * 0.981532 + fVar6 * 0.197484;
      pfVar15[-2] = fVar4 * 0.981532 + fVar7 * 0.197484;
      pfVar15[-1] = fVar5 * 0.981532 + fVar8 * 0.197484;
      pfVar14 = pfVar13 + 2;
      fVar3 = pfVar13[3];
      fVar4 = pfVar13[4];
      fVar5 = pfVar13[5];
      pfVar13 = pfVar13 + 8;
      *pfVar15 = *pfVar14 * 0.981532 + fVar9 * 0.197484;
      pfVar15[1] = fVar3 * 0.981532 + fVar10 * 0.197484;
      pfVar15[2] = fVar4 * 0.981532 + fVar11 * 0.197484;
      pfVar15[3] = fVar5 * 0.981532 + fVar12 * 0.197484;
      pfVar15 = pfVar15 + 8;
      puVar16 = puVar1;
      param_4 = unaff_EBP;
    } while (uVar20 < uVar21);
  }
  if (uVar20 < param_4) {
    if (3 < param_4 - uVar20) {
      pfVar15 = (float *)(iVar18 + 0xc + uVar20 * 4);
      pfVar13 = (float *)(puVar16 + uVar20 + 0x805);
      pfVar14 = (float *)(&UNK_010e04cc + uVar20 * 4);
      iStack_3c = ((param_4 - uVar20) - 4 >> 2) + 1;
      uVar20 = uVar20 + iStack_3c * 4;
      do {
        fVar3 = *pfVar13;
        pfVar14[-1] = pfVar13[-1] * 0.981532 + pfVar15[-3] * 0.197484;
        fVar4 = pfVar15[-1];
        *pfVar14 = *(float *)((int)pfVar14 + iVar18 + -0x10e04c8) * 0.197484 + fVar3 * 0.981532;
        fVar3 = *pfVar15;
        pfVar15 = pfVar15 + 4;
        pfVar14[1] = pfVar13[1] * 0.981532 + fVar4 * 0.197484;
        pfVar2 = pfVar13 + 2;
        pfVar13 = pfVar13 + 4;
        pfVar14[2] = *pfVar2 * 0.981532 + fVar3 * 0.197484;
        pfVar14 = pfVar14 + 4;
        iStack_3c = iStack_3c + -1;
        puVar16 = puVar1;
        param_4 = unaff_EBP;
      } while (iStack_3c != 0);
    }
    if (uVar20 < param_4) {
      pfVar15 = (float *)(puVar16 + uVar20 + 0x804);
      pfVar13 = (float *)(&DAT_010e04c8 + uVar20 * 4);
      iVar19 = param_4 - uVar20;
      do {
        fVar3 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        *pfVar13 = *(float *)((int)pfVar13 + iVar18 + -0x10e04c8) * 0.197484 + fVar3 * 0.981532;
        pfVar13 = pfVar13 + 1;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
  }
  uVar20 = 0;
  if (7 < param_4) {
    pfVar15 = (float *)(puVar16 + 0x806);
    do {
      fVar3 = pfVar15[-1];
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar13 = (float *)(iVar18 + uVar20 * 4);
      fVar6 = pfVar13[1];
      fVar7 = pfVar13[2];
      fVar8 = pfVar13[3];
      pfVar14 = (float *)(iVar18 + uVar20 * 4);
      *pfVar14 = pfVar15[-2] * 0.418496 - *pfVar13;
      pfVar14[1] = fVar3 * 0.418496 - fVar6;
      pfVar14[2] = fVar4 * 0.418496 - fVar7;
      pfVar14[3] = fVar5 * 0.418496 - fVar8;
      pfVar13 = pfVar15 + 2;
      fVar3 = pfVar15[3];
      fVar4 = pfVar15[4];
      fVar5 = pfVar15[5];
      pfVar15 = pfVar15 + 8;
      pfVar14 = (float *)(iVar18 + 0x10 + uVar20 * 4);
      fVar6 = pfVar14[1];
      fVar7 = pfVar14[2];
      fVar8 = pfVar14[3];
      pfVar2 = (float *)(iVar18 + 0x10 + uVar20 * 4);
      *pfVar2 = *pfVar13 * 0.418496 - *pfVar14;
      pfVar2[1] = fVar3 * 0.418496 - fVar6;
      pfVar2[2] = fVar4 * 0.418496 - fVar7;
      pfVar2[3] = fVar5 * 0.418496 - fVar8;
      uVar20 = uVar20 + 8;
    } while (uVar20 < (param_4 & 0xfffffff8));
  }
  if (uVar20 < param_4) {
    if (3 < param_4 - uVar20) {
      pfVar15 = (float *)(iVar18 + 8 + uVar20 * 4);
      pfVar13 = (float *)(puVar16 + uVar20 + 0x805);
      iVar19 = ((param_4 - uVar20) - 4 >> 2) + 1;
      uVar20 = uVar20 + iVar19 * 4;
      do {
        pfVar15[-2] = pfVar13[-1] * 0.418496 - pfVar15[-2];
        pfVar15[-1] = *pfVar13 * 0.418496 - pfVar15[-1];
        *pfVar15 = pfVar13[1] * 0.418496 - *pfVar15;
        pfVar14 = pfVar13 + 2;
        pfVar13 = pfVar13 + 4;
        pfVar15[1] = *pfVar14 * 0.418496 - pfVar15[1];
        pfVar15 = pfVar15 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    if (uVar20 < param_4) {
      pfVar15 = (float *)(puVar16 + uVar20 + 0x804);
      do {
        fVar3 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        *(float *)(iVar18 + uVar20 * 4) = fVar3 * 0.418496 - *(float *)(iVar18 + uVar20 * 4);
        uVar20 = uVar20 + 1;
      } while (uVar20 < param_4);
    }
  }
  func_0x00e0cfe0();
  puVar16[0x804] = puVar16[0xc06];
  func_0x00e122f0();
  if ((char)param_5 != '\0') {
    puVar16[0xc06] = puVar16[param_4 + 0x804];
  }
  func_0x00e122f0();
  uVar20 = 0;
  if (7 < param_4) {
    pfVar15 = (float *)(puVar16 + 0x806);
    do {
      pfVar13 = (float *)(param_5 + uVar20 * 4);
      fVar3 = pfVar13[1];
      fVar4 = pfVar13[2];
      fVar5 = pfVar13[3];
      fVar6 = pfVar15[-1];
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      pfVar14 = (float *)(param_5 + uVar20 * 4);
      *pfVar14 = pfVar15[-2] + *pfVar13 * 0.186633;
      pfVar14[1] = fVar6 + fVar3 * 0.186633;
      pfVar14[2] = fVar7 + fVar4 * 0.186633;
      pfVar14[3] = fVar8 + fVar5 * 0.186633;
      pfVar14 = (float *)(param_5 + 0x10 + uVar20 * 4);
      fVar3 = pfVar14[1];
      fVar4 = pfVar14[2];
      fVar5 = pfVar14[3];
      pfVar13 = pfVar15 + 2;
      fVar6 = pfVar15[3];
      fVar7 = pfVar15[4];
      fVar8 = pfVar15[5];
      pfVar15 = pfVar15 + 8;
      pfVar2 = (float *)(param_5 + 0x10 + uVar20 * 4);
      *pfVar2 = *pfVar13 + *pfVar14 * 0.186633;
      pfVar2[1] = fVar6 + fVar3 * 0.186633;
      pfVar2[2] = fVar7 + fVar4 * 0.186633;
      pfVar2[3] = fVar8 + fVar5 * 0.186633;
      uVar20 = uVar20 + 8;
    } while (uVar20 < (param_4 & 0xfffffff8));
  }
  if (uVar20 < param_4) {
    if (3 < param_4 - uVar20) {
      pfVar15 = (float *)(param_5 + 8 + uVar20 * 4);
      pfVar13 = (float *)(puVar16 + uVar20 + 0x805);
      iVar18 = ((param_4 - uVar20) - 4 >> 2) + 1;
      uVar20 = uVar20 + iVar18 * 4;
      do {
        pfVar15[-2] = pfVar15[-2] * 0.186633 + pfVar13[-1];
        pfVar15[-1] = pfVar15[-1] * 0.186633 + *pfVar13;
        *pfVar15 = *pfVar15 * 0.186633 + pfVar13[1];
        pfVar14 = pfVar13 + 2;
        pfVar13 = pfVar13 + 4;
        pfVar15[1] = pfVar15[1] * 0.186633 + *pfVar14;
        pfVar15 = pfVar15 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      if (param_4 <= uVar20) goto LAB_00e1035b;
    }
    pfVar15 = (float *)(puVar16 + uVar20 + 0x804);
    do {
      fVar3 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      *(float *)(param_5 + uVar20 * 4) = *(float *)(param_5 + uVar20 * 4) * 0.186633 + fVar3;
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_4);
  }
LAB_00e1035b:
  if (3 < (uint)((int)(param_1 + -0x43812a) >> 2)) {
    puVar16[0x804] = puVar16[0xc07];
    func_0x00e122f0(&DAT_010e04b8);
    if (unaff_BL != '\0') {
      puVar16[0xc07] = puVar16[param_4 + 0x804];
    }
    uVar20 = 0;
    if (7 < param_4) {
      pfVar15 = (float *)(puVar16 + 0x806);
      do {
        fVar3 = pfVar15[-1];
        fVar4 = *pfVar15;
        fVar5 = pfVar15[1];
        iVar18 = uVar20 * 4;
        *(float *)(iVar18 + 0x3f7f5c1c) = pfVar15[-2] * 1.023332;
        *(float *)(iVar18 + 0x3f7f5c20) = fVar3 * 1.023332;
        *(float *)(iVar18 + 0x3f7f5c24) = fVar4 * 1.023332;
        *(float *)(iVar18 + 0x3f7f5c28) = fVar5 * 1.023332;
        fVar3 = pfVar15[3];
        fVar4 = pfVar15[4];
        fVar5 = pfVar15[5];
        iVar18 = uVar20 * 4;
        *(float *)(iVar18 + 0x3f7f5c2c) = pfVar15[2] * 1.023332;
        *(float *)(iVar18 + 0x3f7f5c30) = fVar3 * 1.023332;
        *(float *)(iVar18 + 0x3f7f5c34) = fVar4 * 1.023332;
        *(float *)(iVar18 + 0x3f7f5c38) = fVar5 * 1.023332;
        uVar20 = uVar20 + 8;
        pfVar15 = pfVar15 + 8;
      } while (uVar20 < (param_4 & 0xfffffff8));
    }
    if (uVar20 < param_4) {
      if (3 < param_4 - uVar20) {
        iVar18 = uVar20 + 0x805;
        iVar19 = uVar20 * 4;
        iVar17 = ((param_4 - uVar20) - 4 >> 2) + 1;
        uVar20 = uVar20 + iVar17 * 4;
        pfVar15 = (float *)(iVar19 + 0x3f7f5c24);
        pfVar13 = (float *)(puVar16 + iVar18);
        do {
          fVar3 = *pfVar13;
          fVar4 = pfVar13[1];
          fVar5 = pfVar13[2];
          pfVar15[-2] = pfVar13[-1] * 1.023332;
          pfVar15[-1] = fVar3 * 1.023332;
          *pfVar15 = fVar4 * 1.023332;
          pfVar15[1] = fVar5 * 1.023332;
          iVar17 = iVar17 + -1;
          pfVar15 = pfVar15 + 4;
          pfVar13 = pfVar13 + 4;
        } while (iVar17 != 0);
        if (param_4 <= uVar20) {
          return;
        }
      }
      pfVar15 = (float *)(puVar16 + uVar20 + 0x804);
      do {
        fVar3 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        *(float *)(uVar20 * 4 + 0x3f7f5c1c) = fVar3 * 1.023332;
        uVar20 = uVar20 + 1;
      } while (uVar20 < param_4);
    }
  }
  return;
}



void __thiscall FUN_00e10480(int param_1,int *param_2,undefined4 param_3,uint param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  char unaff_BL;
  int iVar13;
  uint unaff_EBP;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iStack_30;
  uint uStack_c;
  int iStack_8;
  char cStack_4;
  
  iVar13 = *param_2;
  iVar3 = param_2[1];
  uStack_c = 0;
  if (3 < param_4) {
    pfVar11 = (float *)(param_1 + 0x14);
    pfVar10 = (float *)(iVar3 + 0xc);
    iStack_8 = (param_4 - 4 >> 2) + 1;
    pfVar9 = (float *)(iVar13 + 4);
    uStack_c = iStack_8 * 4;
    do {
      pfVar11[-1] = pfVar9[-1] + pfVar10[-3];
      *pfVar11 = *(float *)((int)pfVar9 + (iVar3 - iVar13)) + *pfVar9;
      pfVar11[1] = pfVar9[1] + pfVar10[-1];
      pfVar1 = pfVar9 + 2;
      pfVar9 = pfVar9 + 4;
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 4;
      pfVar11[2] = *pfVar1 + fVar2;
      pfVar11 = pfVar11 + 4;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  if (uStack_c < param_4) {
    pfVar11 = (float *)(iVar13 + uStack_c * 4);
    iVar12 = param_4 - uStack_c;
    pfVar10 = (float *)(param_1 + (uStack_c + 4) * 4);
    do {
      pfVar9 = (float *)((int)pfVar11 + (iVar3 - iVar13));
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar10 = *pfVar9 + fVar2;
      pfVar10 = pfVar10 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  fVar16 = 0.0;
  fVar2 = *(float *)(param_1 + 4);
  fVar15 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) < 0.0) {
    fVar15 = fVar2;
  }
  if ((fVar2 == fVar15) || (param_5 == '\0')) {
    uVar14 = 0;
    if (3 < param_4) {
      pfVar9 = (float *)(param_1 + 0x1014);
      pfVar11 = (float *)(iVar13 + 0xc);
      pfVar10 = (float *)(iVar3 + 4);
      iVar12 = (param_4 - 4 >> 2) + 1;
      uVar14 = iVar12 * 4;
      do {
        pfVar9[-1] = (pfVar11[-3] - pfVar10[-1]) * fVar15;
        *pfVar9 = (*(float *)((int)pfVar10 + (iVar13 - iVar3)) - *pfVar10) * fVar15;
        pfVar9[1] = (pfVar11[-1] - pfVar10[1]) * fVar15;
        fVar2 = *pfVar11;
        pfVar11 = pfVar11 + 4;
        pfVar1 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pfVar9[2] = (fVar2 - *pfVar1) * fVar15;
        pfVar9 = pfVar9 + 4;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (uVar14 < param_4) {
      pfVar11 = (float *)(param_1 + (uVar14 + 0x404) * 4);
      pfVar10 = (float *)(iVar3 + uVar14 * 4);
      iVar12 = param_4 - uVar14;
      do {
        pfVar9 = (float *)((int)pfVar10 + (iVar13 - iVar3));
        fVar2 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        *pfVar11 = (*pfVar9 - fVar2) * fVar15;
        pfVar11 = pfVar11 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    *(float *)(param_1 + 8) = fVar15;
  }
  else {
    uVar14 = 0;
    fVar19 = (fVar2 - fVar15) /
             (float)((double)(int)param_4 + (double)(&DAT_011a2c10)[-((int)param_4 >> 0x1f)]);
    if (3 < param_4) {
      pfVar9 = (float *)(param_1 + 0x1014);
      pfVar11 = (float *)(iVar3 + 4);
      iVar12 = (param_4 - 4 >> 2) + 1;
      uVar14 = iVar12 * 4;
      pfVar10 = (float *)(iVar13 + 0xc);
      do {
        fVar17 = fVar16 + 1.0 + 1.0;
        pfVar9[-1] = (pfVar10[-3] - pfVar11[-1]) * (fVar16 * fVar19 + fVar15);
        fVar18 = fVar17 + 1.0;
        *pfVar9 = (*(float *)((iVar13 - iVar3) + (int)pfVar11) - *pfVar11) *
                  ((fVar16 + 1.0) * fVar19 + fVar15);
        fVar16 = fVar18 + 1.0;
        pfVar9[1] = (pfVar10[-1] - pfVar11[1]) * (fVar17 * fVar19 + fVar15);
        fVar17 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        pfVar1 = pfVar11 + 2;
        pfVar11 = pfVar11 + 4;
        pfVar9[2] = (fVar17 - *pfVar1) * (fVar18 * fVar19 + fVar15);
        pfVar9 = pfVar9 + 4;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (uVar14 < param_4) {
      pfVar11 = (float *)(iVar3 + uVar14 * 4);
      pfVar10 = (float *)(param_1 + (uVar14 + 0x404) * 4);
      iVar12 = param_4 - uVar14;
      do {
        pfVar9 = (float *)((int)pfVar11 + (iVar13 - iVar3));
        fVar17 = *pfVar11;
        fVar18 = fVar16 * fVar19;
        fVar16 = fVar16 + 1.0;
        pfVar11 = pfVar11 + 1;
        *pfVar10 = (*pfVar9 - fVar17) * (fVar18 + fVar15);
        pfVar10 = pfVar10 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    *(float *)(param_1 + 8) = fVar2;
  }
  iVar13 = param_2[1];
  iVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0x2010) = *(undefined4 *)(param_1 + 0x3014);
  func_0x00e122f0();
  if (cStack_4 != '\0') {
    *(undefined4 *)(param_1 + 0x3014) = *(undefined4 *)(param_1 + 0x2010 + param_4 * 4);
  }
  func_0x00e122f0();
  uVar14 = 0;
  if (7 < param_4) {
    uVar8 = param_4 & 0xfffffff8;
    pfVar10 = (float *)(param_1 + 0x2018);
    pfVar11 = (float *)&DAT_010e04c8;
    do {
      fVar2 = pfVar10[-1];
      fVar15 = *pfVar10;
      fVar16 = pfVar10[1];
      pfVar9 = (float *)(iVar13 + uVar14 * 4);
      fVar19 = pfVar9[1];
      fVar17 = pfVar9[2];
      fVar18 = pfVar9[3];
      uVar14 = uVar14 + 8;
      pfVar1 = (float *)(iVar13 + -0x10e04b8 + (int)pfVar11);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar11[-4] = pfVar10[-2] * 0.6098637 - *pfVar9 * 0.6896511;
      pfVar11[-3] = fVar2 * 0.6098637 - fVar19 * 0.6896511;
      pfVar11[-2] = fVar15 * 0.6098637 - fVar17 * 0.6896511;
      pfVar11[-1] = fVar16 * 0.6098637 - fVar18 * 0.6896511;
      pfVar9 = pfVar10 + 2;
      fVar2 = pfVar10[3];
      fVar15 = pfVar10[4];
      fVar16 = pfVar10[5];
      pfVar10 = pfVar10 + 8;
      *pfVar11 = *pfVar9 * 0.6098637 - fVar4 * 0.6896511;
      pfVar11[1] = fVar2 * 0.6098637 - fVar5 * 0.6896511;
      pfVar11[2] = fVar15 * 0.6098637 - fVar6 * 0.6896511;
      pfVar11[3] = fVar16 * 0.6098637 - fVar7 * 0.6896511;
      pfVar11 = pfVar11 + 8;
      param_4 = unaff_EBP;
      param_1 = iVar13;
    } while (uVar14 < uVar8);
  }
  if (uVar14 < param_4) {
    if (3 < param_4 - uVar14) {
      pfVar11 = (float *)(iVar13 + 0xc + uVar14 * 4);
      pfVar10 = (float *)(param_1 + 0x2014 + uVar14 * 4);
      pfVar9 = (float *)(&UNK_010e04bc + uVar14 * 4);
      iStack_30 = ((param_4 - uVar14) - 4 >> 2) + 1;
      uVar14 = uVar14 + iStack_30 * 4;
      do {
        fVar2 = *(float *)(iVar13 + -0x10e04b8 + (int)pfVar9);
        pfVar9[-1] = pfVar10[-1] * 0.6098637 - pfVar11[-3] * 0.6896511;
        fVar15 = pfVar11[-1];
        *pfVar9 = *pfVar10 * 0.6098637 - fVar2 * 0.6896511;
        fVar2 = *pfVar11;
        pfVar11 = pfVar11 + 4;
        pfVar9[1] = pfVar10[1] * 0.6098637 - fVar15 * 0.6896511;
        pfVar1 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pfVar9[2] = *pfVar1 * 0.6098637 - fVar2 * 0.6896511;
        pfVar9 = pfVar9 + 4;
        iStack_30 = iStack_30 + -1;
      } while (iStack_30 != 0);
      param_4 = unaff_EBP;
      param_1 = iVar13;
      if (unaff_EBP <= uVar14) goto LAB_00e109fb;
    }
    pfVar11 = (float *)(param_1 + 0x2010 + uVar14 * 4);
    iVar12 = param_4 - uVar14;
    pfVar10 = (float *)(&DAT_010e04b8 + uVar14 * 4);
    do {
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar10 = fVar2 * 0.6098637 - *(float *)(iVar13 + -0x10e04b8 + (int)pfVar10) * 0.6896511;
      pfVar10 = pfVar10 + 1;
      iVar12 = iVar12 + -1;
      param_4 = unaff_EBP;
      param_1 = iVar13;
    } while (iVar12 != 0);
  }
LAB_00e109fb:
  uVar14 = 0;
  if (7 < param_4) {
    pfVar11 = (float *)(param_1 + 0x2018);
    do {
      pfVar10 = (float *)(iVar13 + uVar14 * 4);
      fVar2 = pfVar10[1];
      fVar15 = pfVar10[2];
      fVar16 = pfVar10[3];
      fVar19 = pfVar11[-1];
      fVar17 = *pfVar11;
      fVar18 = pfVar11[1];
      pfVar9 = (float *)(iVar13 + uVar14 * 4);
      *pfVar9 = pfVar11[-2] * 0.8624776 + *pfVar10 * 0.7626955;
      pfVar9[1] = fVar19 * 0.8624776 + fVar2 * 0.7626955;
      pfVar9[2] = fVar17 * 0.8624776 + fVar15 * 0.7626955;
      pfVar9[3] = fVar18 * 0.8624776 + fVar16 * 0.7626955;
      pfVar9 = (float *)(iVar13 + 0x10 + uVar14 * 4);
      fVar2 = pfVar9[1];
      fVar15 = pfVar9[2];
      fVar16 = pfVar9[3];
      pfVar10 = pfVar11 + 2;
      fVar19 = pfVar11[3];
      fVar17 = pfVar11[4];
      fVar18 = pfVar11[5];
      pfVar11 = pfVar11 + 8;
      pfVar1 = (float *)(iVar13 + 0x10 + uVar14 * 4);
      *pfVar1 = *pfVar10 * 0.8624776 + *pfVar9 * 0.7626955;
      pfVar1[1] = fVar19 * 0.8624776 + fVar2 * 0.7626955;
      pfVar1[2] = fVar17 * 0.8624776 + fVar15 * 0.7626955;
      pfVar1[3] = fVar18 * 0.8624776 + fVar16 * 0.7626955;
      uVar14 = uVar14 + 8;
    } while (uVar14 < (param_4 & 0xfffffff8));
  }
  if (uVar14 < param_4) {
    if (3 < param_4 - uVar14) {
      pfVar11 = (float *)(iVar13 + 8 + uVar14 * 4);
      pfVar10 = (float *)(param_1 + 0x2014 + uVar14 * 4);
      iVar12 = ((param_4 - uVar14) - 4 >> 2) + 1;
      uVar14 = uVar14 + iVar12 * 4;
      do {
        pfVar11[-2] = pfVar10[-1] * 0.8624776 + pfVar11[-2] * 0.7626955;
        pfVar11[-1] = *pfVar10 * 0.8624776 + pfVar11[-1] * 0.7626955;
        *pfVar11 = pfVar10[1] * 0.8624776 + *pfVar11 * 0.7626955;
        pfVar9 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pfVar11[1] = *pfVar9 * 0.8624776 + pfVar11[1] * 0.7626955;
        pfVar11 = pfVar11 + 4;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      param_1 = iVar13;
      if (param_4 <= uVar14) goto LAB_00e10b55;
    }
    pfVar11 = (float *)(param_1 + (uVar14 + 0x804) * 4);
    do {
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *(float *)(iVar13 + uVar14 * 4) =
           fVar2 * 0.8624776 + *(float *)(iVar13 + uVar14 * 4) * 0.7626955;
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_4);
  }
LAB_00e10b55:
  func_0x00e122f0();
  *(undefined4 *)(param_1 + 0x2010) = *(undefined4 *)(param_1 + 0x3018);
  func_0x00e122f0(&DAT_010e04b8);
  if (unaff_BL != '\0') {
    *(undefined4 *)(param_1 + 0x3018) = *(undefined4 *)(param_1 + 0x2010 + param_4 * 4);
  }
  uVar14 = 0;
  if (7 < param_4) {
    pfVar11 = (float *)(param_1 + 0x2018);
    do {
      pfVar10 = (float *)(iVar3 + uVar14 * 4);
      fVar2 = pfVar10[1];
      fVar15 = pfVar10[2];
      fVar16 = pfVar10[3];
      fVar19 = pfVar11[-1];
      fVar17 = *pfVar11;
      fVar18 = pfVar11[1];
      pfVar9 = (float *)(iVar3 + uVar14 * 4);
      *pfVar9 = pfVar11[-2] * 1.6822416 - *pfVar10 * 0.2156194;
      pfVar9[1] = fVar19 * 1.6822416 - fVar2 * 0.2156194;
      pfVar9[2] = fVar17 * 1.6822416 - fVar15 * 0.2156194;
      pfVar9[3] = fVar18 * 1.6822416 - fVar16 * 0.2156194;
      pfVar9 = (float *)(iVar3 + 0x10 + uVar14 * 4);
      fVar2 = pfVar9[1];
      fVar15 = pfVar9[2];
      fVar16 = pfVar9[3];
      pfVar10 = pfVar11 + 2;
      fVar19 = pfVar11[3];
      fVar17 = pfVar11[4];
      fVar18 = pfVar11[5];
      pfVar11 = pfVar11 + 8;
      pfVar1 = (float *)(iVar3 + 0x10 + uVar14 * 4);
      *pfVar1 = *pfVar10 * 1.6822416 - *pfVar9 * 0.2156194;
      pfVar1[1] = fVar19 * 1.6822416 - fVar2 * 0.2156194;
      pfVar1[2] = fVar17 * 1.6822416 - fVar15 * 0.2156194;
      pfVar1[3] = fVar18 * 1.6822416 - fVar16 * 0.2156194;
      uVar14 = uVar14 + 8;
    } while (uVar14 < (param_4 & 0xfffffff8));
  }
  if (uVar14 < param_4) {
    if (3 < param_4 - uVar14) {
      pfVar11 = (float *)(iVar3 + 8 + uVar14 * 4);
      pfVar10 = (float *)(param_1 + (uVar14 + 0x805) * 4);
      iVar13 = ((param_4 - uVar14) - 4 >> 2) + 1;
      uVar14 = uVar14 + iVar13 * 4;
      do {
        pfVar11[-2] = pfVar10[-1] * 1.6822416 - pfVar11[-2] * 0.2156194;
        pfVar11[-1] = *pfVar10 * 1.6822416 - pfVar11[-1] * 0.2156194;
        *pfVar11 = pfVar10[1] * 1.6822416 - *pfVar11 * 0.2156194;
        pfVar9 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pfVar11[1] = *pfVar9 * 1.6822416 - pfVar11[1] * 0.2156194;
        pfVar11 = pfVar11 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_4 <= uVar14) {
        return;
      }
    }
    pfVar11 = (float *)(param_1 + (uVar14 + 0x804) * 4);
    do {
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *(float *)(iVar3 + uVar14 * 4) =
           fVar2 * 1.6822416 - *(float *)(iVar3 + uVar14 * 4) * 0.2156194;
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_4);
  }
  return;
}



void __thiscall
FUN_00e10d20(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4,uint param_5)

{
  void *pvVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  void **ppvVar16;
  uint uVar17;
  float *pfVar18;
  int unaff_EBX;
  float *pfVar19;
  int unaff_EBP;
  int unaff_ESI;
  int iVar20;
  void *pvVar21;
  void *pvVar22;
  int iVar23;
  int iStack_28;
  uint uStack_20;
  void *pvStack_14;
  void *pvStack_10;
  void *pvStack_c;
  void *pvStack_8;
  void *pvStack_4;
  
  pvStack_10 = (void *)*param_4;
  pvVar6 = (void *)param_4[2];
  pvStack_14 = (void *)param_4[1];
  pvStack_c = (void *)(param_5 * 4);
  pfVar19 = (float *)(param_1 + 0x10);
  memcpy((void *)(param_1 + 0x210),pvStack_10,(size_t)pvStack_c);
  memcpy((void *)(param_1 + 0x1410),pvStack_14,param_5 * 4);
  memcpy((void *)(param_1 + 0x2610),pvVar6,param_5 * 4);
  uVar17 = 0;
  if (3 < param_5) {
    iVar15 = (param_5 - 4 >> 2) + 1;
    uVar17 = iVar15 * 4;
    do {
      pfVar19[0xd80] = pfVar19[0x480] * 0.185574 + *pfVar19 * 0.9396926;
      pfVar19[0xd81] = pfVar19[0x481] * 0.185574 + pfVar19[1] * 0.9396926;
      pfVar19[0xd82] = pfVar19[0x482] * 0.185574 + pfVar19[2] * 0.9396926;
      pfVar19[0xd83] = pfVar19[0x483] * 0.185574 + pfVar19[3] * 0.9396926;
      pfVar19 = pfVar19 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (uVar17 < param_5) {
    pfVar19 = (float *)(param_1 + 0x10 + uVar17 * 4);
    iVar15 = param_5 - uVar17;
    do {
      pfVar19[0xd80] = pfVar19[0x480] * 0.185574 + *pfVar19 * 0.9396926;
      pfVar19 = pfVar19 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  iStack_28 = param_5 * 4;
  iVar20 = param_1 + 0x2410;
  iVar15 = param_1 + 0x10;
  iVar23 = param_1 + 0x5610;
  func_0x00e0cea0(&pvStack_10,pvStack_10,(void *)(param_5 * 4 + (int)pvStack_10),pvStack_14,
                  param_1 + 0x5a0c,0x2400);
  pfVar19 = (float *)(param_1 + 0x4610);
  func_0x00e120b0(pfVar19,(int)pvStack_c + (int)pfVar19,iVar23);
  uStack_20 = 0;
  if (3 < param_2) {
    iVar15 = (iStack_28 - 1U >> 2) + 1;
    uStack_20 = iVar15 * 4;
    do {
      *pfVar19 = pfVar19[-0x880] * 0.6554516 + *pfVar19;
      pfVar19[1] = pfVar19[-0x87f] * 0.6554516 + pfVar19[1];
      pfVar19[2] = pfVar19[-0x87e] * 0.6554516 + pfVar19[2];
      pfVar19[3] = pfVar19[-0x87d] * 0.6554516 + pfVar19[3];
      pfVar19 = pfVar19 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    iVar15 = unaff_EBP + 0x10;
    unaff_ESI = param_2 * 4;
    iVar20 = unaff_EBP + 0x2410;
    unaff_EBX = unaff_EBP + 0x1210;
    iVar23 = unaff_EBP + 0x5610;
  }
  if (uStack_20 < param_2) {
    pfVar19 = (float *)(unaff_EBP + (uStack_20 + 0x1184) * 4);
    iVar15 = param_2 - uStack_20;
    do {
      *pfVar19 = pfVar19[-0x880] * 0.6554516 + *pfVar19;
      pfVar19 = pfVar19 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    unaff_ESI = param_2 * 4;
    iVar15 = unaff_EBP + 0x10;
    unaff_EBX = unaff_EBP + 0x1210;
    iVar20 = unaff_EBP + 0x2410;
    iVar23 = unaff_EBP + 0x5610;
  }
  func_0x008ab0e6(unaff_EBP + 0x10,param_2 * 4 + iVar15,0x200);
  func_0x008ab0e6(unaff_EBP + 0x1210,unaff_ESI + unaff_EBX,0x200);
  func_0x008ab0e6(iVar20,unaff_ESI + 0x2410 + unaff_EBP,0x200);
  func_0x008ab0e6(iVar23,unaff_ESI + iVar23,0x3fc);
  pvStack_14 = pvStack_8;
  pvStack_10 = pvStack_4;
  ppvVar16 = &pvStack_14;
  iVar15 = unaff_EBP + 0x6a10;
  do {
    pvVar6 = *ppvVar16;
    iVar20 = iVar15 + 0x200;
    pvVar21 = (void *)(unaff_ESI + (int)pvVar6);
    if (param_2 < 0x80) {
      func_0x00e727f0(pvVar6,pvVar21,iVar15);
      iVar23 = ((int)pvVar21 - (int)pvVar6 >> 2) * 4 + iVar15;
      if ((iVar15 != iVar23) && (iVar23 != iVar20)) {
        func_0x00e72640(iVar15,iVar23);
        func_0x00e72640(iVar23,iVar20);
        func_0x00e72640(iVar15,iVar20);
      }
    }
    else {
      pvVar1 = (void *)((int)pvVar21 + -0x200);
      pvVar22 = pvVar21;
      if ((pvVar6 != pvVar1) && (pvVar22 = pvVar6, pvVar1 != pvVar21)) {
        func_0x00e72640(pvVar6,pvVar1);
        func_0x00e72640(pvVar1,pvVar21);
        func_0x00e72640(pvVar6,pvVar21);
        pvVar22 = (void *)((int)pvVar6 + ((int)pvVar21 - (int)pvVar1 >> 2) * 4);
      }
      func_0x00e727f0(pvVar6,pvVar22,iVar15);
    }
    ppvVar16 = ppvVar16 + 1;
    iVar15 = iVar20;
  } while (ppvVar16 != &pvStack_c);
  uVar17 = 0;
  if (7 < param_2) {
    pfVar19 = (float *)(unaff_EBP + 0x4618);
    do {
      fVar5 = pfVar19[-1];
      fVar7 = *pfVar19;
      fVar8 = pfVar19[1];
      fVar9 = pfVar19[-0x401];
      fVar10 = pfVar19[-0x400];
      fVar11 = pfVar19[-0x3ff];
      pfVar18 = (float *)((int)pvStack_8 + uVar17 * 4);
      fVar12 = pfVar18[1];
      fVar13 = pfVar18[2];
      fVar14 = pfVar18[3];
      pfVar2 = (float *)((int)pvStack_8 + uVar17 * 4);
      *pfVar2 = (pfVar19[-0x402] + pfVar19[-2]) * 0.5 + *pfVar18;
      pfVar2[1] = (fVar9 + fVar5) * 0.5 + fVar12;
      pfVar2[2] = (fVar10 + fVar7) * 0.5 + fVar13;
      pfVar2[3] = (fVar11 + fVar8) * 0.5 + fVar14;
      pfVar18 = pfVar19 + 2;
      fVar5 = pfVar19[3];
      fVar7 = pfVar19[4];
      fVar8 = pfVar19[5];
      pfVar2 = pfVar19 + -0x3fe;
      fVar9 = pfVar19[-0x3fd];
      fVar10 = pfVar19[-0x3fc];
      fVar11 = pfVar19[-0x3fb];
      pfVar19 = pfVar19 + 8;
      pfVar3 = (float *)((int)pvStack_8 + uVar17 * 4 + 0x10);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)((int)pvStack_8 + uVar17 * 4 + 0x10);
      *pfVar4 = (*pfVar18 + *pfVar2) * 0.5 + *pfVar3;
      pfVar4[1] = (fVar5 + fVar9) * 0.5 + fVar12;
      pfVar4[2] = (fVar7 + fVar10) * 0.5 + fVar13;
      pfVar4[3] = (fVar8 + fVar11) * 0.5 + fVar14;
      uVar17 = uVar17 + 8;
    } while (uVar17 < (param_2 & 0xfffffff8));
  }
  if (uVar17 < param_2) {
    if (3 < param_2 - uVar17) {
      pfVar19 = (float *)((int)pvStack_8 + (uVar17 + 2) * 4);
      pfVar18 = (float *)(uVar17 * 4 + 0x3610 + unaff_EBP);
      iVar15 = ((param_2 - uVar17) - 4 >> 2) + 1;
      uVar17 = uVar17 + iVar15 * 4;
      do {
        pfVar19[-2] = (pfVar18[0x400] + *pfVar18) * 0.5 + pfVar19[-2];
        pfVar19[-1] = (pfVar18[0x401] + pfVar18[1]) * 0.5 + pfVar19[-1];
        *pfVar19 = (pfVar18[0x402] + pfVar18[2]) * 0.5 + *pfVar19;
        pfVar3 = pfVar18 + 0x403;
        pfVar2 = pfVar18 + 3;
        pfVar18 = pfVar18 + 4;
        pfVar19[1] = (*pfVar3 + *pfVar2) * 0.5 + pfVar19[1];
        pfVar19 = pfVar19 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (param_2 <= uVar17) goto LAB_00e112a3;
    }
    pfVar19 = (float *)(uVar17 * 4 + 0x3610 + unaff_EBP);
    do {
      pfVar18 = pfVar19 + 0x400;
      fVar5 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      *(float *)((int)pvStack_8 + uVar17 * 4) =
           (*pfVar18 + fVar5) * 0.5 + *(float *)((int)pvStack_8 + uVar17 * 4);
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_2);
  }
LAB_00e112a3:
  uVar17 = 0;
  if (7 < param_2) {
    pfVar19 = (float *)(unaff_EBP + 0x4618);
    do {
      fVar5 = pfVar19[-0x401];
      fVar7 = pfVar19[-0x400];
      fVar8 = pfVar19[-0x3ff];
      fVar9 = pfVar19[-1];
      fVar10 = *pfVar19;
      fVar11 = pfVar19[1];
      pfVar18 = (float *)((int)pvStack_4 + uVar17 * 4);
      fVar12 = pfVar18[1];
      fVar13 = pfVar18[2];
      fVar14 = pfVar18[3];
      pfVar2 = (float *)((int)pvStack_4 + uVar17 * 4);
      *pfVar2 = (pfVar19[-0x402] - pfVar19[-2]) * 0.5 + *pfVar18;
      pfVar2[1] = (fVar5 - fVar9) * 0.5 + fVar12;
      pfVar2[2] = (fVar7 - fVar10) * 0.5 + fVar13;
      pfVar2[3] = (fVar8 - fVar11) * 0.5 + fVar14;
      pfVar18 = pfVar19 + 2;
      fVar5 = pfVar19[3];
      fVar7 = pfVar19[4];
      fVar8 = pfVar19[5];
      pfVar2 = pfVar19 + -0x3fe;
      fVar9 = pfVar19[-0x3fd];
      fVar10 = pfVar19[-0x3fc];
      fVar11 = pfVar19[-0x3fb];
      pfVar19 = pfVar19 + 8;
      pfVar3 = (float *)((int)pvStack_4 + uVar17 * 4 + 0x10);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)((int)pvStack_4 + uVar17 * 4 + 0x10);
      *pfVar4 = (*pfVar2 - *pfVar18) * 0.5 + *pfVar3;
      pfVar4[1] = (fVar9 - fVar5) * 0.5 + fVar12;
      pfVar4[2] = (fVar10 - fVar7) * 0.5 + fVar13;
      pfVar4[3] = (fVar11 - fVar8) * 0.5 + fVar14;
      uVar17 = uVar17 + 8;
    } while (uVar17 < (param_2 & 0xfffffff8));
  }
  if (uVar17 < param_2) {
    if (3 < param_2 - uVar17) {
      pfVar19 = (float *)((int)pvStack_4 + (uVar17 + 2) * 4);
      pfVar18 = (float *)(uVar17 * 4 + 0x4610 + unaff_EBP);
      iVar15 = ((param_2 - uVar17) - 4 >> 2) + 1;
      uVar17 = uVar17 + iVar15 * 4;
      do {
        pfVar19[-2] = (pfVar18[-0x400] - *pfVar18) * 0.5 + pfVar19[-2];
        pfVar19[-1] = (pfVar18[-0x3ff] - pfVar18[1]) * 0.5 + pfVar19[-1];
        *pfVar19 = (pfVar18[-0x3fe] - pfVar18[2]) * 0.5 + *pfVar19;
        pfVar3 = pfVar18 + -0x3fd;
        pfVar2 = pfVar18 + 3;
        pfVar18 = pfVar18 + 4;
        pfVar19[1] = (*pfVar3 - *pfVar2) * 0.5 + pfVar19[1];
        pfVar19 = pfVar19 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (param_2 <= uVar17) {
        return;
      }
    }
    pfVar19 = (float *)(uVar17 * 4 + 0x4610 + unaff_EBP);
    do {
      pfVar18 = pfVar19 + -0x400;
      fVar5 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      *(float *)((int)pvStack_4 + uVar17 * 4) =
           (*pfVar18 - fVar5) * 0.5 + *(float *)((int)pvStack_4 + uVar17 * 4);
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_2);
  }
  return;
}



void __thiscall
FUN_00e11440(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4,uint param_5)

{
  void *pvVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  void **ppvVar16;
  uint uVar17;
  float *pfVar18;
  int unaff_EBX;
  float *pfVar19;
  int unaff_EBP;
  int unaff_ESI;
  int iVar20;
  void *pvVar21;
  void *pvVar22;
  int iVar23;
  int iStack_28;
  uint uStack_20;
  void *pvStack_14;
  void *pvStack_10;
  void *pvStack_c;
  void *pvStack_8;
  void *pvStack_4;
  
  pvStack_10 = (void *)*param_4;
  pvVar6 = (void *)param_4[2];
  pvStack_14 = (void *)param_4[1];
  pvStack_c = (void *)(param_5 * 4);
  pfVar19 = (float *)(param_1 + 0x10);
  memcpy((void *)(param_1 + 0x410),pvStack_10,(size_t)pvStack_c);
  memcpy((void *)(param_1 + 0x1810),pvStack_14,param_5 * 4);
  memcpy((void *)(param_1 + 0x2c10),pvVar6,param_5 * 4);
  uVar17 = 0;
  if (3 < param_5) {
    iVar15 = (param_5 - 4 >> 2) + 1;
    uVar17 = iVar15 * 4;
    do {
      pfVar19[0xf00] = pfVar19[0x500] * 0.185574 + *pfVar19 * 0.9396926;
      pfVar19[0xf01] = pfVar19[0x501] * 0.185574 + pfVar19[1] * 0.9396926;
      pfVar19[0xf02] = pfVar19[0x502] * 0.185574 + pfVar19[2] * 0.9396926;
      pfVar19[0xf03] = pfVar19[0x503] * 0.185574 + pfVar19[3] * 0.9396926;
      pfVar19 = pfVar19 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (uVar17 < param_5) {
    pfVar19 = (float *)(param_1 + 0x10 + uVar17 * 4);
    iVar15 = param_5 - uVar17;
    do {
      pfVar19[0xf00] = pfVar19[0x500] * 0.185574 + *pfVar19 * 0.9396926;
      pfVar19 = pfVar19 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  iStack_28 = param_5 * 4;
  iVar20 = param_1 + 0x2810;
  iVar15 = param_1 + 0x10;
  iVar23 = param_1 + 0x5c10;
  func_0x00e0cea0(&pvStack_10,pvStack_10,(void *)(param_5 * 4 + (int)pvStack_10),pvStack_14,
                  param_1 + 0x640c,0x2800);
  pfVar19 = (float *)(param_1 + 0x4c10);
  func_0x00e121d0(pfVar19,(int)pvStack_c + (int)pfVar19,iVar23);
  uStack_20 = 0;
  if (3 < param_2) {
    iVar15 = (iStack_28 - 1U >> 2) + 1;
    uStack_20 = iVar15 * 4;
    do {
      *pfVar19 = pfVar19[-0x900] * 0.6554516 + *pfVar19;
      pfVar19[1] = pfVar19[-0x8ff] * 0.6554516 + pfVar19[1];
      pfVar19[2] = pfVar19[-0x8fe] * 0.6554516 + pfVar19[2];
      pfVar19[3] = pfVar19[-0x8fd] * 0.6554516 + pfVar19[3];
      pfVar19 = pfVar19 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    iVar15 = unaff_EBP + 0x10;
    unaff_ESI = param_2 * 4;
    iVar20 = unaff_EBP + 0x2810;
    unaff_EBX = unaff_EBP + 0x1410;
    iVar23 = unaff_EBP + 0x5c10;
  }
  if (uStack_20 < param_2) {
    pfVar19 = (float *)(unaff_EBP + (uStack_20 + 0x1304) * 4);
    iVar15 = param_2 - uStack_20;
    do {
      *pfVar19 = pfVar19[-0x900] * 0.6554516 + *pfVar19;
      pfVar19 = pfVar19 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    unaff_ESI = param_2 * 4;
    iVar15 = unaff_EBP + 0x10;
    unaff_EBX = unaff_EBP + 0x1410;
    iVar20 = unaff_EBP + 0x2810;
    iVar23 = unaff_EBP + 0x5c10;
  }
  func_0x008ab0e6(unaff_EBP + 0x10,param_2 * 4 + iVar15,0x400);
  func_0x008ab0e6(unaff_EBP + 0x1410,unaff_ESI + unaff_EBX,0x400);
  func_0x008ab0e6(iVar20,unaff_ESI + 0x2810 + unaff_EBP,0x400);
  func_0x008ab0e6(iVar23,unaff_ESI + iVar23,0x7fc);
  pvStack_14 = pvStack_8;
  pvStack_10 = pvStack_4;
  ppvVar16 = &pvStack_14;
  iVar15 = unaff_EBP + 0x7410;
  do {
    pvVar6 = *ppvVar16;
    iVar20 = iVar15 + 0x400;
    pvVar21 = (void *)(unaff_ESI + (int)pvVar6);
    if (param_2 < 0x100) {
      func_0x00e727f0(pvVar6,pvVar21,iVar15);
      iVar23 = ((int)pvVar21 - (int)pvVar6 >> 2) * 4 + iVar15;
      if ((iVar15 != iVar23) && (iVar23 != iVar20)) {
        func_0x00e72640(iVar15,iVar23);
        func_0x00e72640(iVar23,iVar20);
        func_0x00e72640(iVar15,iVar20);
      }
    }
    else {
      pvVar1 = (void *)((int)pvVar21 + -0x400);
      pvVar22 = pvVar21;
      if ((pvVar6 != pvVar1) && (pvVar22 = pvVar6, pvVar1 != pvVar21)) {
        func_0x00e72640(pvVar6,pvVar1);
        func_0x00e72640(pvVar1,pvVar21);
        func_0x00e72640(pvVar6,pvVar21);
        pvVar22 = (void *)((int)pvVar6 + ((int)pvVar21 - (int)pvVar1 >> 2) * 4);
      }
      func_0x00e727f0(pvVar6,pvVar22,iVar15);
    }
    ppvVar16 = ppvVar16 + 1;
    iVar15 = iVar20;
  } while (ppvVar16 != &pvStack_c);
  uVar17 = 0;
  if (7 < param_2) {
    pfVar19 = (float *)(unaff_EBP + 0x3c18);
    do {
      fVar5 = pfVar19[-1];
      fVar7 = *pfVar19;
      fVar8 = pfVar19[1];
      fVar9 = pfVar19[0x3ff];
      fVar10 = pfVar19[0x400];
      fVar11 = pfVar19[0x401];
      pfVar18 = (float *)((int)pvStack_8 + uVar17 * 4);
      fVar12 = pfVar18[1];
      fVar13 = pfVar18[2];
      fVar14 = pfVar18[3];
      pfVar2 = (float *)((int)pvStack_8 + uVar17 * 4);
      *pfVar2 = (pfVar19[0x3fe] + pfVar19[-2]) * 0.5 + *pfVar18;
      pfVar2[1] = (fVar9 + fVar5) * 0.5 + fVar12;
      pfVar2[2] = (fVar10 + fVar7) * 0.5 + fVar13;
      pfVar2[3] = (fVar11 + fVar8) * 0.5 + fVar14;
      pfVar18 = pfVar19 + 2;
      fVar5 = pfVar19[3];
      fVar7 = pfVar19[4];
      fVar8 = pfVar19[5];
      pfVar2 = pfVar19 + 0x402;
      fVar9 = pfVar19[0x403];
      fVar10 = pfVar19[0x404];
      fVar11 = pfVar19[0x405];
      pfVar19 = pfVar19 + 8;
      pfVar3 = (float *)((int)pvStack_8 + uVar17 * 4 + 0x10);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)((int)pvStack_8 + uVar17 * 4 + 0x10);
      *pfVar4 = (*pfVar18 + *pfVar2) * 0.5 + *pfVar3;
      pfVar4[1] = (fVar5 + fVar9) * 0.5 + fVar12;
      pfVar4[2] = (fVar7 + fVar10) * 0.5 + fVar13;
      pfVar4[3] = (fVar8 + fVar11) * 0.5 + fVar14;
      uVar17 = uVar17 + 8;
    } while (uVar17 < (param_2 & 0xfffffff8));
  }
  if (uVar17 < param_2) {
    if (3 < param_2 - uVar17) {
      pfVar19 = (float *)((int)pvStack_8 + (uVar17 + 2) * 4);
      pfVar18 = (float *)(uVar17 * 4 + 0x3c10 + unaff_EBP);
      iVar15 = ((param_2 - uVar17) - 4 >> 2) + 1;
      uVar17 = uVar17 + iVar15 * 4;
      do {
        pfVar19[-2] = (pfVar18[0x400] + *pfVar18) * 0.5 + pfVar19[-2];
        pfVar19[-1] = (pfVar18[0x401] + pfVar18[1]) * 0.5 + pfVar19[-1];
        *pfVar19 = (pfVar18[0x402] + pfVar18[2]) * 0.5 + *pfVar19;
        pfVar3 = pfVar18 + 0x403;
        pfVar2 = pfVar18 + 3;
        pfVar18 = pfVar18 + 4;
        pfVar19[1] = (*pfVar3 + *pfVar2) * 0.5 + pfVar19[1];
        pfVar19 = pfVar19 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (param_2 <= uVar17) goto LAB_00e119c3;
    }
    pfVar19 = (float *)(uVar17 * 4 + 0x3c10 + unaff_EBP);
    do {
      pfVar18 = pfVar19 + 0x400;
      fVar5 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      *(float *)((int)pvStack_8 + uVar17 * 4) =
           (*pfVar18 + fVar5) * 0.5 + *(float *)((int)pvStack_8 + uVar17 * 4);
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_2);
  }
LAB_00e119c3:
  uVar17 = 0;
  if (7 < param_2) {
    pfVar19 = (float *)(unaff_EBP + 0x3c18);
    do {
      fVar5 = pfVar19[0x3ff];
      fVar7 = pfVar19[0x400];
      fVar8 = pfVar19[0x401];
      fVar9 = pfVar19[-1];
      fVar10 = *pfVar19;
      fVar11 = pfVar19[1];
      pfVar18 = (float *)((int)pvStack_4 + uVar17 * 4);
      fVar12 = pfVar18[1];
      fVar13 = pfVar18[2];
      fVar14 = pfVar18[3];
      pfVar2 = (float *)((int)pvStack_4 + uVar17 * 4);
      *pfVar2 = (pfVar19[-2] - pfVar19[0x3fe]) * 0.5 + *pfVar18;
      pfVar2[1] = (fVar9 - fVar5) * 0.5 + fVar12;
      pfVar2[2] = (fVar10 - fVar7) * 0.5 + fVar13;
      pfVar2[3] = (fVar11 - fVar8) * 0.5 + fVar14;
      pfVar18 = pfVar19 + 2;
      fVar5 = pfVar19[3];
      fVar7 = pfVar19[4];
      fVar8 = pfVar19[5];
      pfVar2 = pfVar19 + 0x402;
      fVar9 = pfVar19[0x403];
      fVar10 = pfVar19[0x404];
      fVar11 = pfVar19[0x405];
      pfVar19 = pfVar19 + 8;
      pfVar3 = (float *)((int)pvStack_4 + uVar17 * 4 + 0x10);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)((int)pvStack_4 + uVar17 * 4 + 0x10);
      *pfVar4 = (*pfVar18 - *pfVar2) * 0.5 + *pfVar3;
      pfVar4[1] = (fVar5 - fVar9) * 0.5 + fVar12;
      pfVar4[2] = (fVar7 - fVar10) * 0.5 + fVar13;
      pfVar4[3] = (fVar8 - fVar11) * 0.5 + fVar14;
      uVar17 = uVar17 + 8;
    } while (uVar17 < (param_2 & 0xfffffff8));
  }
  if (uVar17 < param_2) {
    if (3 < param_2 - uVar17) {
      pfVar19 = (float *)((int)pvStack_4 + (uVar17 + 2) * 4);
      pfVar18 = (float *)(uVar17 * 4 + 0x4c10 + unaff_EBP);
      iVar15 = ((param_2 - uVar17) - 4 >> 2) + 1;
      uVar17 = uVar17 + iVar15 * 4;
      do {
        pfVar19[-2] = (pfVar18[-0x400] - *pfVar18) * 0.5 + pfVar19[-2];
        pfVar19[-1] = (pfVar18[-0x3ff] - pfVar18[1]) * 0.5 + pfVar19[-1];
        *pfVar19 = (pfVar18[-0x3fe] - pfVar18[2]) * 0.5 + *pfVar19;
        pfVar3 = pfVar18 + -0x3fd;
        pfVar2 = pfVar18 + 3;
        pfVar18 = pfVar18 + 4;
        pfVar19[1] = (*pfVar3 - *pfVar2) * 0.5 + pfVar19[1];
        pfVar19 = pfVar19 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (param_2 <= uVar17) {
        return;
      }
    }
    pfVar19 = (float *)(uVar17 * 4 + 0x4c10 + unaff_EBP);
    do {
      pfVar18 = pfVar19 + -0x400;
      fVar5 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      *(float *)((int)pvStack_4 + uVar17 * 4) =
           (*pfVar18 - fVar5) * 0.5 + *(float *)((int)pvStack_4 + uVar17 * 4);
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_2);
  }
  return;
}



void __thiscall FUN_00e11b60(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  uint unaff_ESI;
  int iVar17;
  
  iVar17 = *(int *)(param_4 + 8);
  func_0x00e0cd60();
  func_0x00e122f0();
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x4058);
  *(undefined4 *)(param_1 + 0x4058) = *(undefined4 *)(param_1 + 0x24 + iVar17 * 4);
  func_0x00e0cea0();
  func_0x00e122f0();
  iVar17 = param_1 + 0x1038;
  func_0x00e122f0();
  pfVar15 = (float *)(param_1 + 0x1034);
  uVar16 = 0;
  *pfVar15 = *(float *)(param_1 + 0x405c);
  *(undefined4 *)(param_1 + 0x405c) = *(undefined4 *)(param_1 + 0x1034 + unaff_ESI * 4);
  if (3 < unaff_ESI) {
    iVar13 = (unaff_ESI - 4 >> 2) + 1;
    uVar16 = iVar13 * 4;
    do {
      *pfVar15 = *pfVar15 * 0.6554516 + pfVar15[0x404];
      pfVar15[1] = pfVar15[1] * 0.6554516 + pfVar15[0x405];
      pfVar15[2] = pfVar15[2] * 0.6554516 + pfVar15[0x406];
      pfVar15[3] = pfVar15[3] * 0.6554516 + pfVar15[0x407];
      pfVar15 = pfVar15 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (uVar16 < unaff_ESI) {
    pfVar15 = (float *)(param_1 + 0x1034 + uVar16 * 4);
    iVar13 = unaff_ESI - uVar16;
    do {
      *pfVar15 = *pfVar15 * 0.6554516 + pfVar15[0x404];
      pfVar15 = pfVar15 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  func_0x00e122f0(&DAT_010e04b8);
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x3054) = *(undefined4 *)(param_1 + 0x4100);
  *(undefined4 *)(param_1 + 0x4100) = *(undefined4 *)(param_1 + 0x3054 + unaff_ESI * 4);
  if (7 < unaff_ESI) {
    pfVar15 = (float *)(param_1 + 0x103c);
    do {
      fVar4 = pfVar15[-1];
      fVar5 = *pfVar15;
      fVar6 = pfVar15[1];
      fVar7 = pfVar15[-0x405];
      fVar8 = pfVar15[-0x404];
      fVar9 = pfVar15[-0x403];
      fVar10 = pfVar15[0x807];
      fVar11 = pfVar15[0x808];
      fVar12 = pfVar15[0x809];
      iVar13 = uVar16 * 4;
      *(float *)(iVar13 + 1) = (pfVar15[-0x406] + pfVar15[-2]) * 0.5 + pfVar15[0x806];
      *(float *)(iVar13 + 5) = (fVar7 + fVar4) * 0.5 + fVar10;
      *(float *)(iVar13 + 9) = (fVar8 + fVar5) * 0.5 + fVar11;
      *(float *)(iVar13 + 0xd) = (fVar9 + fVar6) * 0.5 + fVar12;
      pfVar1 = pfVar15 + -0x402;
      fVar4 = pfVar15[-0x401];
      fVar5 = pfVar15[-0x400];
      fVar6 = pfVar15[-0x3ff];
      pfVar14 = pfVar15 + 2;
      fVar7 = pfVar15[3];
      fVar8 = pfVar15[4];
      fVar9 = pfVar15[5];
      pfVar2 = pfVar15 + 0x80a;
      fVar10 = pfVar15[0x80b];
      fVar11 = pfVar15[0x80c];
      fVar12 = pfVar15[0x80d];
      pfVar15 = pfVar15 + 8;
      iVar13 = uVar16 * 4;
      *(float *)(iVar13 + 0x11) = (*pfVar14 + *pfVar1) * 0.5 + *pfVar2;
      *(float *)(iVar13 + 0x15) = (fVar7 + fVar4) * 0.5 + fVar10;
      *(float *)(iVar13 + 0x19) = (fVar8 + fVar5) * 0.5 + fVar11;
      *(float *)(iVar13 + 0x1d) = (fVar9 + fVar6) * 0.5 + fVar12;
      uVar16 = uVar16 + 8;
    } while (uVar16 < (unaff_ESI & 0xfffffff8));
  }
  if (uVar16 < unaff_ESI) {
    if (3 < unaff_ESI - uVar16) {
      pfVar15 = (float *)(uVar16 * 4 + 9);
      pfVar14 = (float *)(param_1 + 0x24 + uVar16 * 4);
      iVar13 = ((unaff_ESI - uVar16) - 4 >> 2) + 1;
      uVar16 = uVar16 + iVar13 * 4;
      do {
        pfVar15[-2] = (pfVar14[0x404] + *pfVar14) * 0.5 + pfVar14[0xc0c];
        pfVar15[-1] = (pfVar14[0x405] + pfVar14[1]) * 0.5 + pfVar14[0xc0d];
        *pfVar15 = (pfVar14[0x406] + pfVar14[2]) * 0.5 + pfVar14[0xc0e];
        pfVar2 = pfVar14 + 0x407;
        pfVar1 = pfVar14 + 3;
        pfVar3 = pfVar14 + 0xc0f;
        pfVar14 = pfVar14 + 4;
        pfVar15[1] = (*pfVar2 + *pfVar1) * 0.5 + *pfVar3;
        pfVar15 = pfVar15 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (unaff_ESI <= uVar16) goto LAB_00e11ee5;
    }
    pfVar15 = (float *)(param_1 + 0x24 + uVar16 * 4);
    do {
      pfVar14 = pfVar15 + 0x404;
      fVar4 = *pfVar15;
      pfVar1 = pfVar15 + 0xc0c;
      pfVar15 = pfVar15 + 1;
      *(float *)(uVar16 * 4 + 1) = (*pfVar14 + fVar4) * 0.5 + *pfVar1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < unaff_ESI);
  }
LAB_00e11ee5:
  func_0x00e122f0(&DAT_010e04b8,iVar17,iVar17 + unaff_ESI * 4,1,param_1 + 0x3058);
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x3054) = *(undefined4 *)(param_1 + 0x4104);
  *(undefined4 *)(param_1 + 0x4104) = *(undefined4 *)(param_1 + 0x3054 + unaff_ESI * 4);
  if (7 < unaff_ESI) {
    pfVar15 = (float *)(param_1 + 0x103c);
    do {
      fVar4 = pfVar15[-1];
      fVar5 = *pfVar15;
      fVar6 = pfVar15[1];
      fVar7 = pfVar15[-0x405];
      fVar8 = pfVar15[-0x404];
      fVar9 = pfVar15[-0x403];
      fVar10 = pfVar15[0x807];
      fVar11 = pfVar15[0x808];
      fVar12 = pfVar15[0x809];
      pfVar14 = (float *)(iVar17 + uVar16 * 4);
      *pfVar14 = (pfVar15[-0x406] - pfVar15[-2]) * 0.5 + pfVar15[0x806];
      pfVar14[1] = (fVar7 - fVar4) * 0.5 + fVar10;
      pfVar14[2] = (fVar8 - fVar5) * 0.5 + fVar11;
      pfVar14[3] = (fVar9 - fVar6) * 0.5 + fVar12;
      pfVar14 = pfVar15 + 2;
      fVar4 = pfVar15[3];
      fVar5 = pfVar15[4];
      fVar6 = pfVar15[5];
      pfVar1 = pfVar15 + -0x402;
      fVar7 = pfVar15[-0x401];
      fVar8 = pfVar15[-0x400];
      fVar9 = pfVar15[-0x3ff];
      pfVar2 = pfVar15 + 0x80a;
      fVar10 = pfVar15[0x80b];
      fVar11 = pfVar15[0x80c];
      fVar12 = pfVar15[0x80d];
      pfVar15 = pfVar15 + 8;
      pfVar3 = (float *)(param_1 + 0x1048 + uVar16 * 4);
      *pfVar3 = (*pfVar1 - *pfVar14) * 0.5 + *pfVar2;
      pfVar3[1] = (fVar7 - fVar4) * 0.5 + fVar10;
      pfVar3[2] = (fVar8 - fVar5) * 0.5 + fVar11;
      pfVar3[3] = (fVar9 - fVar6) * 0.5 + fVar12;
      uVar16 = uVar16 + 8;
    } while (uVar16 < (unaff_ESI & 0xfffffff8));
  }
  if (uVar16 < unaff_ESI) {
    if (3 < unaff_ESI - uVar16) {
      pfVar15 = (float *)(param_1 + 0x1040 + uVar16 * 4);
      pfVar14 = (float *)(param_1 + 0x1034 + uVar16 * 4);
      iVar17 = ((unaff_ESI - uVar16) - 4 >> 2) + 1;
      uVar16 = uVar16 + iVar17 * 4;
      do {
        pfVar15[-2] = (pfVar14[-0x404] - *pfVar14) * 0.5 + pfVar14[0x808];
        pfVar15[-1] = (pfVar14[-0x403] - pfVar14[1]) * 0.5 + pfVar14[0x809];
        *pfVar15 = (pfVar14[-0x402] - pfVar14[2]) * 0.5 + pfVar14[0x80a];
        pfVar2 = pfVar14 + -0x401;
        pfVar1 = pfVar14 + 3;
        pfVar3 = pfVar14 + 0x80b;
        pfVar14 = pfVar14 + 4;
        pfVar15[1] = (*pfVar2 - *pfVar1) * 0.5 + *pfVar3;
        pfVar15 = pfVar15 + 4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      iVar17 = param_1 + 0x3058;
      if (unaff_ESI <= uVar16) {
        return;
      }
    }
    pfVar15 = (float *)(param_1 + 0x1034 + uVar16 * 4);
    do {
      pfVar14 = pfVar15 + -0x404;
      fVar4 = *pfVar15;
      pfVar1 = pfVar15 + 0x808;
      pfVar15 = pfVar15 + 1;
      *(float *)(iVar17 + uVar16 * 4) = (*pfVar14 - fVar4) * 0.5 + *pfVar1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < unaff_ESI);
  }
  return;
}



undefined4 * FUN_00e127a0(undefined4 *param_1)

{
  code *pcVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_c [12];
  
  _Dst = (void *)func_0x00ddbb30(0x10,0xa6f0);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0xa6f0);
    uVar2 = func_0x00e12dd0();
    *param_1 = uVar2;
    return param_1;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}



int __thiscall FUN_00e131c0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0xa6f0);
  }
  return param_1;
}



undefined ** FUN_00e133b0(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e0cb8) {
    func_0x008ab40d(&DAT_013e0cb8);
    if (DAT_013e0cb8 == -1) {
      func_0x008ab7fd(FUN_00f75c30);
      func_0x008ab3bc(&DAT_013e0cb8);
    }
  }
  return &PTR_vftable_012ba840;
}



undefined ** FUN_00e13410(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e0cbc) {
    func_0x008ab40d(&DAT_013e0cbc);
    if (DAT_013e0cbc == -1) {
      func_0x008ab7fd(FUN_00f75c40);
      func_0x008ab3bc(&DAT_013e0cbc);
    }
  }
  return &PTR_vftable_012ba844;
}



// WARNING: Removing unreachable block (ram,0x00e13d23)
// WARNING: Removing unreachable block (ram,0x00e13d27)
// WARNING: Removing unreachable block (ram,0x00e13d2f)
// WARNING: Removing unreachable block (ram,0x00e13d37)
// WARNING: Removing unreachable block (ram,0x00e13d43)
// WARNING: Removing unreachable block (ram,0x00e13ca9)
// WARNING: Removing unreachable block (ram,0x00e13cad)
// WARNING: Removing unreachable block (ram,0x00e13cb5)
// WARNING: Removing unreachable block (ram,0x00e13cbd)
// WARNING: Removing unreachable block (ram,0x00e13cc9)
// WARNING: Removing unreachable block (ram,0x00e13b33)
// WARNING: Removing unreachable block (ram,0x00e13b39)
// WARNING: Removing unreachable block (ram,0x00e13b41)
// WARNING: Removing unreachable block (ram,0x00e13b49)
// WARNING: Removing unreachable block (ram,0x00e13b51)
// WARNING: Removing unreachable block (ram,0x00e13aff)
// WARNING: Removing unreachable block (ram,0x00e13adf)
// WARNING: Removing unreachable block (ram,0x00e13ae3)
// WARNING: Removing unreachable block (ram,0x00e13aeb)
// WARNING: Removing unreachable block (ram,0x00e13af3)
// WARNING: Removing unreachable block (ram,0x00e13b5b)
// WARNING: Removing unreachable block (ram,0x00e13dc2)
// WARNING: Removing unreachable block (ram,0x00e13dc8)
// WARNING: Removing unreachable block (ram,0x00e13dd0)
// WARNING: Removing unreachable block (ram,0x00e13dd8)
// WARNING: Removing unreachable block (ram,0x00e13de4)
// WARNING: Removing unreachable block (ram,0x00e13de0)
// WARNING: Removing unreachable block (ram,0x00e13f3e)
// WARNING: Removing unreachable block (ram,0x00e13e4f)
// WARNING: Removing unreachable block (ram,0x00e13e53)
// WARNING: Removing unreachable block (ram,0x00e13e5b)
// WARNING: Removing unreachable block (ram,0x00e13e63)
// WARNING: Removing unreachable block (ram,0x00e13e6f)
// WARNING: Removing unreachable block (ram,0x00e13ce7)
// WARNING: Removing unreachable block (ram,0x00e13cf5)
// WARNING: Removing unreachable block (ram,0x00e13cf9)
// WARNING: Removing unreachable block (ram,0x00e13d65)
// WARNING: Removing unreachable block (ram,0x00e13d73)
// WARNING: Removing unreachable block (ram,0x00e13d77)
// WARNING: Removing unreachable block (ram,0x00e13e05)
// WARNING: Removing unreachable block (ram,0x00e13e13)
// WARNING: Removing unreachable block (ram,0x00e13e17)
// WARNING: Removing unreachable block (ram,0x00e13e8d)
// WARNING: Removing unreachable block (ram,0x00e13e9b)
// WARNING: Removing unreachable block (ram,0x00e13e9f)

void __thiscall FUN_00e13a60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int unaff_retaddr;
  int iStack_68;
  int iStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  undefined4 *puStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float afStack_18 [5];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_68;
  afStack_18[0] =
       (float)((double)*(int *)(param_2 + 4) +
              (double)(&DAT_011a2c10)[-(*(int *)(param_2 + 4) >> 0x1f)]);
  iStack_24 = param_1;
  func_0x00e135b0(afStack_18[0]);
  puStack_2c = (undefined4 *)(param_1 + 0x44);
  puStack_60 = (undefined4 *)(param_1 + 0x16cc);
  if (puStack_2c != puStack_60) {
    uStack_5c = 0;
    uStack_58 = 0;
    iStack_64 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    puVar9 = (undefined4 *)(param_1 + 0x4dc);
    do {
      if (puVar9 != puVar9 + 0x38) {
        puVar7 = puVar9 + -0x125;
        do {
          *puVar7 = 0;
          puVar7[-1] = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7 = puVar7 + 0xe;
        } while (puVar7 != puVar9 + -0xed);
      }
      puVar7 = puVar9 + -0xe2;
      if (iStack_64 == 0) {
        puVar9[-0xe2] = 0;
        puVar9[-0xe1] = 0;
        puVar9[-0xe0] = 0;
        puVar9[-0xdf] = 0;
      }
      else {
        iVar6 = (-(uint)(puVar9 + -0xde < puVar7) & 0xfffffffc) + 4;
        if (puVar7 <= puVar9 + -0xde) {
          puVar4 = puVar9 + -0xe2;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
      }
      if (iStack_68 == 0) {
        puVar9[-0xe2] = 0;
        puVar9[-0xe1] = 0;
        puVar9[-0xe0] = 0;
        puVar9[-0xdf] = 0;
      }
      else {
        iVar6 = (-(uint)(puVar9 + -0xde < puVar7) & 0xfffffffc) + 4;
        if (puVar7 <= puVar9 + -0xde) {
          puVar7 = puVar9 + -0xe2;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
      }
      puVar9[-0x3d] = 0;
      if (puVar9 + -0x3c != puVar9) {
        puVar7 = puVar9 + -0x33;
        do {
          puVar7[-9] = 0;
          puVar7[-7] = 0;
          puVar7[-8] = 0;
          *puVar7 = 0;
          puVar7[-1] = 0;
          puVar4 = puVar7 + 6;
          puVar7 = puVar7 + 0xf;
        } while (puVar4 != puVar9);
      }
      *puVar9 = 0;
      puVar9[1] = 1;
      puVar9[2] = 0;
      if (puVar9 != puVar9 + 0x40) {
        uStack_4c = 0;
        uStack_48 = 0;
        puVar7 = puVar9 + -0xc3;
        do {
          puVar4 = puVar7 + 0x10;
          memset(puVar7,0,0x40);
          puVar7 = puVar4;
        } while (puVar4 != puVar9 + -0x83);
        uStack_44 = 0;
        uStack_40 = 0;
        puVar7 = puVar9 + -0x83;
        do {
          puVar4 = puVar7 + 0x10;
          memset(puVar7,0,0x40);
          puVar7 = puVar4;
        } while (puVar4 != puVar9 + -0x43);
      }
      puVar7 = puVar9 + 0x14a;
      if (puVar9 + 0x10a != puVar7) {
        uStack_3c = 0;
        uStack_38 = 0;
        puVar4 = puVar9 + 0x10a;
        do {
          puVar5 = puVar4 + 0x10;
          memset(puVar4,0,0x40);
          puVar4 = puVar5;
        } while (puVar5 != puVar7);
      }
      if (puVar7 != puVar9 + 0x18a) {
        uStack_34 = 0;
        uStack_30 = 0;
        do {
          puVar4 = puVar7 + 0x10;
          memset(puVar7,0,0x40);
          puVar7 = puVar4;
        } while (puVar4 != puVar9 + 0x18a);
      }
      puVar7 = puVar9 + 0x1ab;
      param_1 = iStack_28;
      puVar9 = puVar9 + 0x2d1;
      param_2 = unaff_retaddr;
    } while (puVar7 != puStack_60);
  }
  puVar7 = puStack_2c;
  puVar9 = puStack_60;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x16cc) = 0;
  if (*(uint *)(param_2 + 0x14) < 2) {
    iStack_24 = 0x3f800000;
    uStack_20 = 0;
    *(undefined1 *)(param_1 + 0xa6e0) = 0;
    *(undefined4 *)(param_1 + 0xa6d0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa6d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa6d8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa6dc) = 0x3f800000;
  }
  else {
    *(undefined1 *)(param_1 + 0xa6e0) = 1;
    puVar4 = (undefined4 *)
             func_0x00e1a160(afStack_18,1,*(undefined4 *)(param_2 + 0x14),
                             *(undefined1 *)(param_2 + 0x1c));
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(param_1 + 0xa6d0) = *puVar4;
    *(undefined4 *)(param_1 + 0xa6d4) = uVar1;
    *(undefined4 *)(param_1 + 0xa6d8) = uVar2;
    *(undefined4 *)(param_1 + 0xa6dc) = uVar3;
  }
  func_0x00e1a840(*(float *)(param_2 + 0x18) / fStack_1c);
  if (puVar7 != puVar9) {
    puVar4 = puVar7 + 0x2b0;
    do {
      puVar5 = puVar4 + 0x10;
      for (puVar8 = puVar4; puVar8 != puVar5; puVar8 = puVar8 + 4) {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        *puVar8 = *puVar4;
        puVar8[1] = uVar1;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
      }
      for (; puVar5 != puVar4 + 0x20; puVar5 = puVar5 + 4) {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar7 = puVar7 + 0x2d1;
      puVar4 = puVar4 + 0x2d1;
    } while (puVar7 != puVar9);
  }
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e14e09)
// WARNING: Removing unreachable block (ram,0x00e14e0f)
// WARNING: Removing unreachable block (ram,0x00e14e17)
// WARNING: Removing unreachable block (ram,0x00e14e1f)
// WARNING: Removing unreachable block (ram,0x00e14e27)
// WARNING: Removing unreachable block (ram,0x00e14d78)
// WARNING: Removing unreachable block (ram,0x00e14892)
// WARNING: Removing unreachable block (ram,0x00e14896)
// WARNING: Removing unreachable block (ram,0x00e1489e)
// WARNING: Removing unreachable block (ram,0x00e148a6)
// WARNING: Removing unreachable block (ram,0x00e145e1)
// WARNING: Removing unreachable block (ram,0x00e141b8)
// WARNING: Removing unreachable block (ram,0x00e14198)
// WARNING: Removing unreachable block (ram,0x00e1419c)
// WARNING: Removing unreachable block (ram,0x00e141a4)
