                puVar11 = puVar11 + 1;
              }
              uStack_98 = uStack_54;
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar4 = (*pcVar1)();
              puVar7 = (undefined4 *)(iVar4 + 0x14);
              puVar11 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              uStack_94 = func_0x00b26530(uStack_48);
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar4 = (*pcVar1)();
              puVar7 = (undefined4 *)(iVar4 + 0x14);
              puVar11 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              uStack_a0 = auStack_70[0];
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar4 = (*pcVar1)();
              puVar7 = (undefined4 *)(iVar4 + 0x14);
              puVar11 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              uStack_90 = uStack_50;
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar4 = (*pcVar1)();
              puVar7 = (undefined4 *)(iVar4 + 0x14);
              puVar11 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              uStack_8c = uStack_c;
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar4 = (*pcVar1)();
              uStack_205 = *(undefined4 *)(iVar4 + 0xe);
              uStack_8b = (undefined1)uStack_205;
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar8 = (*pcVar1)();
              iVar4 = iStack_1f8;
              uStack_8a = (undefined1)((uint)*(undefined4 *)(iVar8 + 0xe) >> 8);
              if (*(int *)(iStack_1f8 + 4) == *(int *)(iStack_1f8 + 8)) {
                func_0x0096a6e0(*(int *)(iStack_1f8 + 4),auStack_128);
                uStack_1f0 = uStack_1f0 & 0xfffffffb;
              }
              else {
                func_0x009c34c0();
                *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0xb4;
                uStack_1f0 = uStack_1f0 & 0xfffffffb;
              }
              break;
            case 10:
            case 0xd:
              iStack_1f8 = *(int *)(iStack_1f4 + 0x5c);
              uStack_1e0 = 2;
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar8 = (*pcVar1)();
              func_0x009c37e0();
              uStack_1f0 = uStack_1f0 | 2;
              func_0x00af4df0(iVar8,piVar3[6],auStack_128);
              iVar4 = iStack_1f8;
              puVar7 = (undefined4 *)(iVar8 + 0x14);
              puVar11 = puVar7;
              puVar12 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              uStack_a0 = auStack_70[0];
              puVar11 = puVar7;
              puVar12 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              uStack_88 = uStack_1c;
              puVar11 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              uStack_84 = uStack_40;
              if (*(int *)(iStack_1f8 + 4) == *(int *)(iStack_1f8 + 8)) {
                func_0x0096a6e0(*(int *)(iStack_1f8 + 4),auStack_128);
                uStack_1f0 = uStack_1f0 & 0xfffffffd;
              }
              else {
                func_0x009c34c0();
                *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0xb4;
                uStack_1f0 = uStack_1f0 & 0xfffffffd;
              }
            }
            uStack_1e0 = 0xffffffff;
            FUN_009c38e0();
          }
        }
LAB_00af5c5e:
        puVar7 = puStack_1fc + 1;
        puStack_1fc = puVar7;
      } while (puVar7 != puStack_210);
    }
  }
  *unaff_FS_OFFSET = iStack_1e8;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00af5cc0(int param_1,int *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_304 [8];
  char acStack_2fc [4];
  undefined4 uStack_2f8;
  undefined1 auStack_2f4 [4];
  undefined4 uStack_2f0;
  undefined2 uStack_2b0;
  undefined1 auStack_240 [4];
  undefined4 uStack_23c;
  undefined2 uStack_1fc;
  undefined1 auStack_18c [4];
  undefined4 uStack_188;
  undefined2 uStack_148;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_94;
  char acStack_24 [8];
  undefined4 uStack_1c;
  ushort uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5f5bc;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar3 = *(byte *)(param_2[6] + 0xf) & 0xf;
  if ((bVar3 == 2) || (bVar3 == 3)) goto LAB_00af64cb;
  func_0x00aea310(auStack_304,uStack_14);
  uStack_2f8 = *(undefined1 **)(*(int *)(param_2[6] + 0x10) + 8);
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar5 = (*pcVar1)();
  iVar5 = *(int *)(iVar5 + 0x8c);
  uStack_1c = iVar5;
  cVar4 = func_0x00b26ab0(uStack_2f8);
  if (cVar4 != '\0') {
    uVar9 = *(undefined4 *)(param_1 + 100);
    if (iVar5 == 0) {
      iVar5 = func_0x00af3d50(auStack_304,uVar9);
    }
    else {
      pcVar8 = acStack_24 + 4;
LAB_00af5d5e:
      uVar6 = func_0x00aee9d0(pcVar8);
      iVar5 = func_0x00af4180(uVar6,uVar9);
    }
    goto LAB_00af61de;
  }
  cVar4 = func_0x00b26b30(uStack_2f8);
  if (cVar4 != '\0') {
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    if (iVar5 != 0) {
      pcVar8 = acStack_2fc;
      goto LAB_00af5d5e;
    }
    iVar5 = func_0x00af3d50(auStack_304,uVar9);
    goto LAB_00af61de;
  }
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  piVar7 = (int *)(*pcVar1)();
  if (*piVar7 == 0x5e) goto LAB_00af64cb;
  cVar4 = func_0x00aec040("gl_DepthRange");
  if (cVar4 != '\0') {
    if (*(char *)(param_1 + 0x80) == '\0') {
      func_0x009c37e0();
      pcVar8 = acStack_24;
      uStack_1c._0_1_ = 'R';
      uStack_1c._1_1_ = 'a';
      uStack_1c._2_1_ = 'n';
      uStack_1c._3_1_ = 'g';
      uStack_8 = 0;
      builtin_strncpy(acStack_24,"gl_Depth",8);
      uStack_18 = 0x65;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(acStack_24,(int)pcVar8 - (int)(acStack_24 + 1));
      pcVar8 = acStack_24;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(acStack_24,(int)pcVar8 - (int)(acStack_24 + 1));
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_94 = 0x101;
      func_0x009c36c0(0x1406);
      pcVar8 = (char *)&uStack_1c;
      uStack_1c = 0x7261656e;
      uStack_8._0_1_ = 1;
      uStack_18 = uStack_18 & 0xff00;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(&uStack_1c,(int)pcVar8 - ((int)&uStack_1c + 1));
      pcVar8 = (char *)&uStack_1c;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(&uStack_1c,(int)pcVar8 - ((int)&uStack_1c + 1));
      uStack_2f0 = 0x8df2;
      uStack_2b0 = 0x101;
      func_0x009c36c0(0x1406);
      pcVar8 = (char *)&uStack_2f8;
      uStack_8._0_1_ = 2;
      uStack_2f8 = &LAB_00726166;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(&uStack_2f8,(int)pcVar8 - ((int)&uStack_2f8 + 1));
      pcVar8 = (char *)&uStack_2f8;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(&uStack_2f8,(int)pcVar8 - ((int)&uStack_2f8 + 1));
      uStack_23c = 0x8df2;
      uStack_1fc = 0x101;
      func_0x009c36c0(0x1406);
      pcVar8 = (char *)&uStack_1c;
      uStack_1c = 0x66666964;
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      uStack_18 = uStack_18 & 0xff00;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(&uStack_1c,(int)pcVar8 - ((int)&uStack_1c + 1));
      pcVar8 = (char *)&uStack_1c;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(&uStack_1c,(int)pcVar8 - ((int)&uStack_1c + 1));
      uStack_188 = 0x8df2;
      uStack_148 = 0x101;
      func_0x0096f510(auStack_2f4);
      func_0x0096f510(auStack_240);
      func_0x0096f510(auStack_18c);
      func_0x0096f510(&uStack_d8);
      *(undefined1 *)(param_1 + 0x80) = 1;
      FUN_009c38e0();
      FUN_009c38e0();
      FUN_009c38e0();
      FUN_009c38e0();
    }
    goto LAB_00af64cb;
  }
  cVar4 = func_0x00aec040("gl_NumSamples");
  puVar2 = uStack_2f8;
  if (cVar4 != '\0') {
    if (*(char *)(param_1 + 0x81) == '\0') {
      func_0x009c37e0();
      pcVar8 = acStack_24;
      uStack_1c._0_1_ = 'm';
      uStack_1c._1_1_ = 'p';
      uStack_1c._2_1_ = 'l';
      uStack_1c._3_1_ = 'e';
      uStack_8 = 4;
      builtin_strncpy(acStack_24,"gl_NumSa",8);
      uStack_18 = 0x73;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(acStack_24,(int)pcVar8 - (int)(acStack_24 + 1));
      pcVar8 = acStack_24;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      func_0x0046a660(acStack_24,(int)pcVar8 - (int)(acStack_24 + 1));
      uStack_d8 = 0x1404;
      uStack_d4 = 0x8df3;
      uStack_94 = 0x101;
      func_0x0096f510(&uStack_d8);
      *(undefined1 *)(param_1 + 0x81) = 1;
      FUN_009c38e0();
    }
    goto LAB_00af64cb;
  }
  switch(uStack_2f8) {
  case (undefined1 *)0x3:
  case (undefined1 *)0x9:
    iVar5 = func_0x00af3d50(auStack_304,*(undefined4 *)(param_1 + 0x58));
    goto LAB_00af61de;
  default:
    goto LAB_00af64cb;
  case (undefined1 *)0x6:
    if (uStack_1c != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x70);
      goto LAB_00af61cc;
    }
    iVar5 = func_0x00af3d50(auStack_304,*(undefined4 *)(param_1 + 0x60));
    goto LAB_00af61de;
  case (undefined1 *)0x7:
    uVar9 = *(undefined4 *)(param_1 + 0x74);
LAB_00af61cc:
    iVar5 = func_0x00af4260(auStack_304,uStack_1c,uVar9);
    goto LAB_00af61de;
  case (undefined1 *)0xa:
  case (undefined1 *)0xd:
    iVar5 = func_0x00af3d50(auStack_304,*(undefined4 *)(param_1 + 0x5c));
    *(bool *)(iVar5 + 0x9f) = puVar2 == (undefined1 *)0xd;
LAB_00af61de:
    if (iVar5 != 0) {
      func_0x00af4320(iVar5);
    }
    goto LAB_00af64cb;
  case (undefined1 *)0x12:
    func_0x00af43d0(param_2[6],param_1 + 0x87);
    goto LAB_00af64cb;
  case (undefined1 *)0x13:
    func_0x00af43d0(param_2[6],param_1 + 0x88);
    goto LAB_00af64cb;
  case (undefined1 *)0x14:
    iVar5 = param_1 + 0x8b;
    goto LAB_00af64bd;
  case (undefined1 *)0x15:
    iVar5 = param_1 + 0x89;
    goto LAB_00af64bd;
  case (undefined1 *)0x16:
    func_0x00af43d0(param_2[6],param_1 + 0x8a);
    goto LAB_00af64cb;
  case (undefined1 *)0x17:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x91;
    break;
  case (undefined1 *)0x18:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x8f;
    break;
  case (undefined1 *)0x19:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x8e;
    break;
  case (undefined1 *)0x1a:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x90;
    break;
  case (undefined1 *)0x1b:
    func_0x00af4490(param_2[6],param_1 + 0x93);
    goto LAB_00af64cb;
  case (undefined1 *)0x1c:
    func_0x00af4490(param_2[6],param_1 + 0x94);
    goto LAB_00af64cb;
  case (undefined1 *)0x1d:
    func_0x00af4490(param_2[6],param_1 + 0x95);
    goto LAB_00af64cb;
  case (undefined1 *)0x1e:
    func_0x00af4490(param_2[6],param_1 + 0x96);
    goto LAB_00af64cb;
  case (undefined1 *)0x1f:
    func_0x00af4490(param_2[6],param_1 + 0x97);
    goto LAB_00af64cb;
  case (undefined1 *)0x22:
    if (*(int *)(param_1 + 0xb0) == 0x8b30) {
      uVar9 = *(undefined4 *)(param_1 + 100);
      iVar5 = param_1 + 0x8c;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x68);
      iVar5 = param_1 + 0x8c;
    }
    break;
  case (undefined1 *)0x23:
    if (*(int *)(param_1 + 0xb0) == 0x8b30) {
      uVar9 = *(undefined4 *)(param_1 + 100);
      iVar5 = param_1 + 0x8d;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x68);
      iVar5 = param_1 + 0x8d;
    }
    break;
  case (undefined1 *)0x25:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x92;
    break;
  case (undefined1 *)0x35:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x98;
    break;
  case (undefined1 *)0x36:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x99;
    break;
  case (undefined1 *)0x37:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x9b;
    break;
  case (undefined1 *)0x38:
    func_0x00af4490(param_2[6],param_1 + 0x9a);
    goto LAB_00af64cb;
  case (undefined1 *)0x3a:
    if (*(int *)(param_1 + 0xb0) != 0x91b9) goto LAB_00af64cb;
    uVar9 = *(undefined4 *)(param_1 + 0x6c);
    iVar5 = param_1 + 0xa2;
    break;
  case (undefined1 *)0x3c:
    func_0x00af43d0(param_2[6],param_1 + 0x82);
    goto LAB_00af64cb;
  case (undefined1 *)0x3e:
    func_0x00af43d0(param_2[6],param_1 + 0x83);
    goto LAB_00af64cb;
  case (undefined1 *)0x3f:
    func_0x00af43d0(param_2[6],param_1 + 0x84);
    goto LAB_00af64cb;
  case (undefined1 *)0x40:
    func_0x00af43d0(param_2[6],param_1 + 0x85);
    goto LAB_00af64cb;
  case (undefined1 *)0x41:
    func_0x00af43d0(param_2[6],param_1 + 0x86);
    goto LAB_00af64cb;
  case (undefined1 *)0x4a:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x9e;
    break;
  case (undefined1 *)0x4b:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0x9f;
    break;
  case (undefined1 *)0x4c:
    iVar5 = param_1 + 0xa0;
    if (*(int *)(param_1 + 0xb0) == 0x8dd9) {
      uVar9 = *(undefined4 *)(param_1 + 0x68);
      break;
    }
    goto LAB_00af63a6;
  case (undefined1 *)0x4d:
    if (*(int *)(param_1 + 0xb0) != 0x8dd9) goto LAB_00af64cb;
    iVar5 = param_1 + 0xa1;
    goto LAB_00af64bd;
  case (undefined1 *)0x4e:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0xa1;
    break;
  case (undefined1 *)0x55:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0xa3;
    break;
  case (undefined1 *)0x56:
    iVar5 = param_1 + 0xa4;
    goto LAB_00af6498;
  case (undefined1 *)0x57:
    iVar5 = param_1 + 0xa5;
LAB_00af6498:
    if (*(int *)(param_1 + 0xb0) == 0x8e88) {
      uVar9 = *(undefined4 *)(param_1 + 0x68);
    }
    else {
LAB_00af63a6:
      uVar9 = *(undefined4 *)(param_1 + 100);
    }
    break;
  case (undefined1 *)0x58:
    iVar5 = param_1 + 0xa6;
LAB_00af64bd:
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    break;
  case (undefined1 *)0x5b:
    uVar9 = *(undefined4 *)(param_1 + 100);
    iVar5 = param_1 + 0xa7;
  }
  func_0x00af4550(param_2[6],iVar5,uVar9);
LAB_00af64cb:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00af7470(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x60);
  }
  return param_1;
}



undefined4 __thiscall FUN_00af75e0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(param_3[1],param_3[2]);
  if (0 < iVar6) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar2 = *(ushort *)(param_3 + 0x2e);
  if (uVar2 == 0) {
    func_0x00b66530(1);
    func_0x0046a880("node is still EOpNull!\n",0x17);
    return 1;
  }
  switch(uVar2) {
  case 1:
    func_0x00af74a0(*(undefined4 *)(param_1 + 0x58),"Call a user-defined function",param_3[0x34]);
    goto LAB_00af7769;
  case 2:
    func_0x00af74a0(*(undefined4 *)(param_1 + 0x58),
                    "Call an internal function with raw implementation",param_3[0x34]);
    goto LAB_00af7769;
  default:
    if (0x3d < uVar2) {
      func_0x00af74a0(*(undefined4 *)(param_1 + 0x58),"Call a built-in function",param_3[0x34]);
      goto LAB_00af7769;
    }
    pcVar4 = (char *)func_0x00b65bc0(uVar2);
    pcVar7 = pcVar4;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = (int)pcVar7 - (int)(pcVar4 + 1);
    break;
  case 7:
    iVar6 = 9;
    pcVar4 = "Construct";
    break;
  case 0x7a:
    iVar6 = 0xb;
    pcVar4 = "dot product";
    break;
  case 0x7b:
    iVar6 = 0xd;
    pcVar4 = "cross product";
    break;
  case 0x81:
    iVar6 = 0x17;
    pcVar4 = "component-wise multiply";
    break;
  case 0x86:
    iVar6 = 0x18;
    pcVar4 = "component-wise less than";
    break;
  case 0x87:
    iVar6 = 0x21;
    pcVar4 = "component-wise less than or equal";
    break;
  case 0x88:
    iVar6 = 0x1b;
    pcVar4 = "component-wise greater than";
    break;
  case 0x89:
    iVar6 = 0x24;
    pcVar4 = "component-wise greater than or equal";
    break;
  case 0x8a:
    iVar6 = 0x14;
    pcVar4 = "component-wise equal";
    break;
  case 0x8b:
    iVar6 = 0x18;
    pcVar4 = "component-wise not equal";
  }
  func_0x0046a880(pcVar4,iVar6);
LAB_00af7769:
  func_0x0046a880(&DAT_0112e454,2);
  pcVar3 = *(code **)(*param_3 + 0x7c);
  _guard_check_icall();
  uVar5 = (*pcVar3)();
  func_0x00b66100(uVar5);
  func_0x0046a880(&DAT_0112e458,1);
  func_0x0046a880(&DAT_0113d23c,1);
  return 1;
}



uint __thiscall FUN_00af7880(int param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piStack_3c;
  undefined *puStack_38;
  int iStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_18 = param_3[2];
  iStack_1c = param_3[1];
  iVar5 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  uStack_20 = 0xaf78aa;
  func_0x00b663a0();
  if (0 < iVar5) {
    do {
      uStack_20 = 2;
      pcStack_24 = "  ";
      uStack_28 = 0xaf78be;
      func_0x0046a880();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  switch((short)param_3[0x2e]) {
  case 0x11:
    pcStack_24 = "add";
    uStack_20 = 3;
    break;
  case 0x12:
    pcStack_24 = "subtract";
    uStack_20 = 8;
    break;
  case 0x13:
    pcStack_24 = "component-wise multiply";
    uStack_20 = 0x17;
    break;
  case 0x14:
    pcStack_24 = "divide";
    uStack_20 = 6;
    break;
  case 0x15:
    pcStack_24 = "modulo";
    uStack_20 = 6;
    break;
  case 0x16:
    pcStack_24 = "Compare Equal";
    uStack_20 = 0xd;
    break;
  case 0x17:
    pcStack_24 = "Compare Not Equal";
    uStack_20 = 0x11;
    break;
  case 0x18:
    pcStack_24 = "Compare Less Than";
    uStack_20 = 0x11;
    break;
  case 0x19:
    pcStack_24 = "Compare Greater Than";
    uStack_20 = 0x14;
    break;
  case 0x1a:
    pcStack_24 = "Compare Less Than or Equal";
    uStack_20 = 0x1a;
    break;
  case 0x1b:
    pcStack_24 = "Compare Greater Than or Equal";
    uStack_20 = 0x1d;
    break;
  case 0x1c:
    pcStack_24 = "comma";
    uStack_20 = 5;
    break;
  case 0x1d:
    pcStack_24 = "vector-scale";
    goto code_r0x00af7b3c;
  case 0x1e:
    pcStack_24 = "vector-times-matrix";
    uStack_20 = 0x13;
    break;
  case 0x1f:
    pcStack_24 = "matrix-times-vector";
    uStack_20 = 0x13;
    break;
  case 0x20:
    pcStack_24 = "matrix-scale";
    goto code_r0x00af7b3c;
  case 0x21:
    pcStack_24 = "matrix-multiply";
    uStack_20 = 0xf;
    break;
  case 0x22:
    pcStack_24 = "logical-or";
    uStack_20 = 10;
    break;
  case 0x23:
    pcStack_24 = "logical-xor";
    uStack_20 = 0xb;
    break;
  case 0x24:
    pcStack_24 = "logical-and";
    uStack_20 = 0xb;
    break;
  case 0x25:
    pcStack_24 = "bit-wise shift left";
    uStack_20 = 0x13;
    break;
  case 0x26:
    pcStack_24 = "bit-wise shift right";
    uStack_20 = 0x14;
    break;
  case 0x27:
    pcStack_24 = "bit-wise and";
    goto code_r0x00af7b3c;
  case 0x28:
    pcStack_24 = "bit-wise xor";
    goto code_r0x00af7b3c;
  case 0x29:
    pcStack_24 = "bit-wise or";
    uStack_20 = 0xb;
    break;
  case 0x2a:
    pcStack_24 = "direct index";
    goto code_r0x00af7b3c;
  case 0x2b:
    pcStack_24 = "indirect index";
    uStack_20 = 0xe;
    break;
  case 0x2c:
    pcStack_24 = "direct index for structure";
    uStack_20 = 0x1a;
    break;
  case 0x2d:
    pcStack_24 = "direct index for interface block";
    uStack_20 = 0x20;
    break;
  case 0x2e:
    pcStack_24 = "move second child to first child";
    uStack_20 = 0x20;
    break;
  case 0x2f:
    pcStack_24 = "initialize first child with second child";
    uStack_20 = 0x28;
    break;
  case 0x30:
    pcStack_24 = "add second child into first child";
    uStack_20 = 0x21;
    break;
  case 0x31:
    pcStack_24 = "subtract second child into first child";
    uStack_20 = 0x26;
    break;
  case 0x32:
    pcStack_24 = "multiply second child into first child";
    uStack_20 = 0x26;
    break;
  case 0x33:
  case 0x36:
    pcStack_24 = "matrix mult second child into first child";
    uStack_20 = 0x29;
    break;
  case 0x34:
    pcStack_24 = "vector scale second child into first child";
    uStack_20 = 0x2a;
    break;
  case 0x35:
    pcStack_24 = "matrix scale second child into first child";
    uStack_20 = 0x2a;
    break;
  case 0x37:
    pcStack_24 = "divide second child into first child";
    uStack_20 = 0x24;
    break;
  case 0x38:
    pcStack_24 = "modulo second child into first child";
    uStack_20 = 0x24;
    break;
  case 0x39:
    pcStack_24 = "bit-wise shift first child left by second child";
    uStack_20 = 0x2f;
    break;
  case 0x3a:
    pcStack_24 = "bit-wise shift first child right by second child";
    uStack_20 = 0x30;
    break;
  case 0x3b:
    pcStack_24 = "bit-wise and second child into first child";
    uStack_20 = 0x2a;
    break;
  case 0x3c:
    pcStack_24 = "bit-wise xor second child into first child";
    uStack_20 = 0x2a;
    break;
  case 0x3d:
    pcStack_24 = "bit-wise or second child into first child";
    uStack_20 = 0x29;
    break;
  default:
    pcStack_24 = "<unknown op>";
code_r0x00af7b3c:
    uStack_20 = 0xc;
  }
  uStack_28 = 0xaf7b4b;
  func_0x0046a880();
  uStack_28 = 2;
  puStack_2c = &DAT_0112e454;
  iStack_30 = 0xaf7b5c;
  func_0x0046a880();
  pcVar2 = *(code **)(*param_3 + 0x7c);
  iStack_30 = 0xaf7b6a;
  _guard_check_icall();
  iStack_30 = 0xaf7b6e;
  iStack_30 = (*pcVar2)();
  iStack_34 = 0xaf7b76;
  func_0x00b66100();
  iStack_34 = 1;
  puStack_38 = &DAT_0112e458;
  piStack_3c = (int *)0xaf7b84;
  func_0x0046a880();
  piStack_3c = (int *)0x1;
  func_0x0046a880(&DAT_0113d23c);
  sVar1 = (short)param_3[0x2e];
  if ((sVar1 != 0x2c) && (sVar1 != 0x2d)) {
    return CONCAT31((uint3)(byte)((ushort)sVar1 >> 8),1);
  }
  pcVar2 = *(code **)(*(int *)param_3[0x2f] + 4);
  _guard_check_icall(param_1);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)param_3[0x30] + 0x10);
  _guard_check_icall();
  iStack_34 = (*pcVar2)();
  iVar5 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2) + *(int *)(param_1 + 0x5c);
  func_0x00b663a0(*(undefined4 *)(iStack_34 + 4),*(undefined4 *)(iStack_34 + 8));
  if (0 < iVar5) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pcVar2 = *(code **)(*piStack_3c + 0x74);
  _guard_check_icall();
  piStack_3c = (int *)(*pcVar2)();
  pcVar2 = *(code **)(*(int *)param_3[0x2f] + 0x7c);
  _guard_check_icall();
  iVar5 = (*pcVar2)();
  iVar5 = *(int *)(iVar5 + 0x90);
  pcVar2 = *(code **)(**(int **)(iStack_30 + 0xbc) + 0x7c);
  _guard_check_icall();
  iVar3 = (*pcVar2)();
  if (iVar5 == 0) {
    piVar6 = *(int **)(*(int *)(iVar3 + 0x8c) + 0x10);
  }
  else {
    piVar6 = *(int **)(iVar5 + 0x10);
  }
  iVar5 = FUN_005beae0();
  iVar5 = *(int *)(*piVar6 + iVar5 * 4);
  piStack_3c = (int *)FUN_005beae0();
  func_0x00af6e40(&piStack_3c);
  func_0x0046a880(" (field \'",9);
  func_0x00b660c0(iVar5 + 4);
  func_0x0046a880(&DAT_0100274c,2);
  uVar4 = func_0x0046a880(&DAT_0113d23c,1);
  return uVar4 & 0xffffff00;
}



undefined4 __thiscall FUN_00af7da0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar1) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  func_0x0046a880("Code block\n",0xb);
  return 1;
}



uint __thiscall FUN_00af7e00(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar5) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  switch(*(undefined2 *)(param_3 + 0x14)) {
  case 3:
    pcVar2 = "Branch: Kill";
    uVar4 = 0xc;
    break;
  case 4:
    pcVar2 = "Branch: Return";
    uVar4 = 0xe;
    break;
  case 5:
    pcVar2 = "Branch: Break";
    uVar4 = 0xd;
    break;
  case 6:
    pcVar2 = "Branch: Continue";
    uVar4 = 0x10;
    break;
  default:
    pcVar2 = "Branch: Unknown Branch";
    uVar4 = 0x16;
  }
  func_0x0046a880(pcVar2,uVar4);
  if (*(int *)(param_3 + 0x18) == 0) {
    uVar3 = func_0x0046a880(&DAT_0113d23c,1);
    return uVar3 & 0xffffff00;
  }
  func_0x0046a880(" with expression\n",0x11);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  pcVar1 = *(code **)(**(int **)(param_3 + 0x18) + 4);
  _guard_check_icall(param_1);
  uVar3 = (*pcVar1)();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall FUN_00af7f00(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar4 = *(int *)(param_3 + 0x14) != 0;
  uVar1 = 8;
  if (bVar4) {
    uVar1 = 5;
  }
  pcVar2 = "Case\n";
  if (!bVar4) {
    pcVar2 = "Default\n";
  }
  func_0x0046a880(pcVar2,uVar1);
  return 1;
}



// WARNING: Type propagation algorithm not settling

void FUN_00af7f80(int *param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  char cVar3;
  code *pcVar4;
  int *piVar5;
  byte bVar6;
  undefined4 *******pppppppuVar7;
  char *pcVar8;
  byte extraout_CL;
  uint uVar9;
  undefined4 uVar10;
  undefined4 unaff_EBX;
  int iVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined1 auStack_ec [4];
  int aiStack_e8 [6];
  uint auStack_d0 [15];
  undefined **appuStack_94 [18];
  double dStack_4c;
  uint uStack_44;
  uint uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  float fStack_30;
  undefined4 *******apppppppuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5f708;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_3c = param_1;
  pcVar4 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall(uStack_14);
  (*pcVar4)();
  uStack_44 = func_0x00adaa80();
  uStack_40 = 0;
  if (uStack_44 != 0) {
    do {
      iVar11 = *(int *)(iStack_34 + 0x5c) + -1 +
               (*(int *)(iStack_34 + 0x40) - *(int *)(iStack_34 + 0x3c) >> 2);
      func_0x00b663a0(piStack_3c[1],piStack_3c[2]);
      if (0 < iVar11) {
        do {
          func_0x0046a880();
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      piVar5 = piStack_3c;
      fStack_30 = (float)(uStack_40 << 3);
      pcVar4 = *(code **)(*piStack_3c + 0x74);
      _guard_check_icall();
      iVar11 = (*pcVar4)();
      switch(*(undefined4 *)(iVar11 + (int)fStack_30 + 4)) {
      case 1:
        uStack_38 = *(undefined4 *)(iStack_34 + 0x58);
        pcVar4 = *(code **)(*piVar5 + 0x74);
        _guard_check_icall();
        (*pcVar4)();
        fVar12 = (float10)func_0x00b656b0();
        fStack_30 = (float)fVar12;
        func_0x00a10320(aiStack_e8 + 1);
        iStack_8 = 0;
        fVar12 = (float10)func_0x00e879ec((double)fStack_30,auStack_ec);
        dStack_4c = (double)fVar12;
        iVar11 = *(int *)(aiStack_e8[1] + 4);
        if ((float)fVar12 == 0.0) {
          *(undefined4 *)((int)auStack_d0 + iVar11 + 4) = 1;
          *(undefined4 *)((int)auStack_d0 + iVar11 + 8) = 0;
          puVar1 = (uint *)((int)auStack_d0 + *(int *)(aiStack_e8[1] + 4));
          *puVar1 = *puVar1 | 0x10;
          *(uint *)((int)auStack_d0 + *(int *)(aiStack_e8[1] + 4)) =
               *(uint *)((int)auStack_d0 + *(int *)(aiStack_e8[1] + 4)) & 0xffffefff | 0x2000;
        }
        else {
          *(uint *)((int)auStack_d0 + iVar11) = *(uint *)((int)auStack_d0 + iVar11) & 0xffffdfff;
          puVar1 = (uint *)((int)auStack_d0 + *(int *)(aiStack_e8[1] + 4));
          *puVar1 = *puVar1 & 0xffffefff;
          iVar11 = *(int *)(aiStack_e8[1] + 4);
          *(undefined4 *)((int)auStack_d0 + iVar11 + 4) = 8;
          *(undefined4 *)((int)auStack_d0 + iVar11 + 8) = 0;
        }
        func_0x00af7320(fStack_30);
        func_0x0046a470();
        pppppppuVar7 = apppppppuStack_2c;
        if (0xf < uStack_18) {
          pppppppuVar7 = apppppppuStack_2c[0];
        }
        iStack_8._0_1_ = 1;
        func_0x0046a880(pppppppuVar7,uStack_1c);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (0xf < uStack_18) {
          uVar9 = uStack_18 + 1;
          pppppppuVar7 = apppppppuStack_2c[0];
          if (0xfff < uVar9) {
            pppppppuVar7 = (undefined4 *******)apppppppuStack_2c[0][-1];
            uVar9 = uStack_18 + 0x24;
            if (0x1f < (uint)((int)apppppppuStack_2c[0] + (-4 - (int)pppppppuVar7))) {
              iVar11 = func_0x008aaf66();
              puVar1 = (uint *)(iVar11 + -0x7c2bff51);
              *puVar1 = *puVar1 << (extraout_CL & 0x1f) | *puVar1 >> 0x20 - (extraout_CL & 0x1f);
              *(char *)(piVar5 + -0x141f37bf) = (char)piVar5[-0x141f37bf];
              *(char *)(piVar5 + -0x141f0aff) = (char)piVar5[-0x141f0aff];
              puVar2 = (undefined2 *)
                       (CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)((uint)unaff_EBX >> 8) + (char)unaff_EBX,
                                          (char)unaff_EBX)) + -0x3333ff51);
              *puVar2 = *puVar2;
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          func_0x008ab812(pppppppuVar7,uVar9);
        }
        *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 4U) =
             std::basic_ostringstream<>::vftable;
        *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4)) =
             *(int *)(aiStack_e8[1] + 4) + -0x50;
        func_0x00469040();
        *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 4U) =
             std::basic_ostream<>::vftable;
        *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4)) = *(int *)(aiStack_e8[1] + 4) + -8;
        iStack_8 = 2;
        appuStack_94[0] = std::ios_base::vftable;
        func_0x00e706cb(appuStack_94);
        iStack_8 = 0xffffffff;
        pcVar8 = " (const float)\n";
        uVar10 = 0xf;
        break;
      default:
        func_0x00b66530(1);
        pcVar8 = "Unknown constant\n";
        uVar10 = 0x11;
        break;
      case 3:
        pcVar4 = *(code **)(*piStack_3c + 0x74);
        _guard_check_icall();
        (*pcVar4)();
        uStack_38 = FUN_005beae0();
        func_0x00af6e40(&uStack_38);
        pcVar8 = " (const int)\n";
        uVar10 = 0xd;
        break;
      case 4:
        pcVar4 = *(code **)(*piStack_3c + 0x74);
        _guard_check_icall();
        (*pcVar4)();
        uStack_38 = FUN_005beae0();
        func_0x00af70b0(&uStack_38);
        pcVar8 = " (const uint)\n";
        uVar10 = 0xe;
        break;
      case 5:
        pcVar4 = *(code **)(*piVar5 + 0x74);
        _guard_check_icall();
        (*pcVar4)();
        bVar6 = FUN_004b5b30();
        iVar11 = (bVar6 ^ 1) + 4;
        pcVar8 = "false";
        if (bVar6 != 0) {
          pcVar8 = "true";
        }
        func_0x0046a880();
        func_0x0046a880(&DAT_0112e454,2,pcVar8,iVar11);
        func_0x0046a880("const bool",10);
        func_0x0046a880(&DAT_0112e458,1);
        pcVar8 = "\n";
        uVar10 = 1;
        break;
      case 7:
        uStack_38 = *(undefined4 *)(iStack_34 + 0x58);
        pcVar4 = *(code **)(*piVar5 + 0x74);
        _guard_check_icall();
        (*pcVar4)();
        iVar11 = FUN_005beae0();
        if (iVar11 == 1) {
          pcVar8 = "itu_601";
        }
        else if (iVar11 == 2) {
          pcVar8 = "itu_601_full_range";
        }
        else if (iVar11 == 3) {
          pcVar8 = "itu_709";
        }
        else {
          pcVar8 = "unknown color space conversion standard";
        }
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        func_0x0046a880();
        pcVar8 = " (const yuvCscStandardEXT)\n";
        uVar10 = 0x1b;
      }
      func_0x0046a880(pcVar8,uVar10);
      uStack_40 = uStack_40 + 1;
    } while (uStack_40 < uStack_44);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00af8450(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar1) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  func_0x0046a880("Declaration\n",0xc);
  return 1;
}



undefined4 __thiscall FUN_00af84b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar1) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  func_0x0046a880("Function Definition:\n",0x15);
  return 1;
}



void __thiscall FUN_00af8510(int param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_3c;
  uint uStack_38;
  char *pcStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = param_2[2];
  iStack_2c = param_2[1];
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  uStack_30 = 0xaf853c;
  func_0x00b663a0();
  if (0 < iVar3) {
    do {
      uStack_30 = 2;
      pcStack_34 = "  ";
      uStack_38 = 0xaf854e;
      func_0x0046a880();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uStack_30 = param_2[6];
  pcStack_34 = "Function Prototype";
  uStack_38 = *(undefined4 *)(param_1 + 0x58);
  uStack_3c = 0xaf8563;
  func_0x00af74a0();
  uStack_30 = 2;
  pcStack_34 = " (";
  uStack_38 = 0xaf8577;
  func_0x0046a880();
  pcVar1 = *(code **)(*param_2 + 0x7c);
  uStack_38 = 0xaf8585;
  _guard_check_icall();
  uStack_38 = 0xaf8589;
  uStack_38 = (*pcVar1)();
  uStack_3c = 0xaf8591;
  func_0x00b66100();
  uStack_3c = 1;
  func_0x0046a880(&DAT_0112e458);
  func_0x0046a880(&DAT_0113d23c);
  uStack_38 = 0;
  uStack_30 = *(uint *)(param_2[6] + 0x24);
  if (uStack_30 != 0) {
    do {
      pcStack_34 = *(char **)(*(int *)(param_2[6] + 0x14) + uStack_38 * 4);
      iVar3 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2) + *(int *)(param_1 + 0x5c);
      func_0x00b663a0(param_2[1],param_2[2]);
      if (0 < iVar3) {
        do {
          func_0x0046a880(&DAT_0119c998,2);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      func_0x0046a880("parameter: ",0xb);
      uVar2 = func_0x00aee9d0(&uStack_3c);
      func_0x00b660c0(uVar2);
      func_0x0046a880(&DAT_0112e454,2);
      func_0x00b66100(uRam00000011);
      func_0x0046a880(&DAT_011a2310,2);
      uStack_38 = uStack_38 + 1;
    } while (uStack_38 < uStack_30);
  }
  return;
}



undefined4 __thiscall FUN_00af8680(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar2) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  pcVar1 = "Invariant Declaration:\n";
  if (*(char *)(param_3 + 0x18) != '\0') {
    pcVar1 = "Precise Declaration:\n";
  }
  func_0x0046a880(pcVar1,(*(char *)(param_3 + 0x18) == '\0') * '\x02' + '\x15');
  return 1;
}



uint __thiscall FUN_00af8700(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  func_0x0046a880("If test\n",8);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  func_0x0046a880("Condition\n",10);
  pcVar1 = *(code **)(**(int **)(param_3 + 0x14) + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    uVar2 = func_0x0046a880("true case is null\n",0x12);
  }
  else {
    func_0x0046a880("true case\n",10);
    uVar2 = FUN_00ade830(param_1);
  }
  if (*(int *)(param_3 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x5c) + -1 +
            (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2);
    func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
    if (0 < iVar3) {
      do {
        func_0x0046a880(&DAT_0119c998,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    func_0x0046a880("false case\n",0xb);
    uVar2 = FUN_00ade830(param_1);
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  return uVar2 & 0xffffff00;
}



uint __thiscall FUN_00af8890(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  func_0x0046a880("Loop with condition ",0x14);
  if (*(int *)(param_3 + 0x14) == 2) {
    func_0x0046a880(&DAT_01002ad4,4);
  }
  func_0x0046a880("tested first\n",0xd);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x0046a880("No loop condition\n",0x12);
  }
  else {
    func_0x0046a880("Loop Condition\n",0xf);
    pcVar1 = *(code **)(**(int **)(param_3 + 0x1c) + 4);
    _guard_check_icall(param_1);
    (*pcVar1)();
  }
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_3 + 0x24) == 0) {
    uVar2 = func_0x0046a880("No loop body\n",0xd);
  }
  else {
    func_0x0046a880("Loop Body\n",10);
    uVar2 = FUN_00ade830(param_1);
  }
  if (*(int *)(param_3 + 0x20) != 0) {
    iVar3 = *(int *)(param_1 + 0x5c) + -1 +
            (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2);
    func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
    if (0 < iVar3) {
      do {
        func_0x0046a880(&DAT_0119c998,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    func_0x0046a880("Loop Terminal Expression\n",0x19);
    pcVar1 = *(code **)(**(int **)(param_3 + 0x20) + 4);
    _guard_check_icall(param_1);
    uVar2 = (*pcVar1)();
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  return uVar2 & 0xffffff00;
}



undefined4 __thiscall FUN_00af8a60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (0 < iVar1) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  func_0x0046a880("Switch\n",7);
  return 1;
}



undefined4 __thiscall FUN_00af8ac0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(param_3[1],param_3[2]);
  if (0 < iVar3) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  func_0x0046a880("vector swizzle (",0x10);
  func_0x00aebb40(*(undefined4 *)(param_1 + 0x58));
  func_0x0046a880(&DAT_0112e458,1);
  func_0x0046a880(&DAT_0112e454,2);
  pcVar1 = *(code **)(*param_3 + 0x7c);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  func_0x00b66100(uVar2);
  func_0x0046a880(&DAT_0112e458,1);
  func_0x0046a880(&DAT_0113d23c,1);
  return 1;
}



void __thiscall FUN_00af8b80(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = param_2[2];
  iStack_20 = param_2[1];
  iVar4 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0();
  if (0 < iVar4) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(byte *)(param_2[6] + 0xf) & 0xf) == 3) {
    puVar5 = &DAT_01002284;
  }
  else {
    func_0x0046a880(&DAT_0112e4e8,1);
    uVar3 = func_0x00aea310(&stack0xffffffe8);
    func_0x00b660c0(uVar3);
    puVar5 = &DAT_01002288;
  }
  func_0x0046a880(puVar5,2);
  func_0x0046a880("(symbol id ",0xb);
  piVar2 = (int *)func_0x00aebb30();
  iStack_20 = *piVar2;
  func_0x00af6e40(&iStack_20);
  func_0x0046a880(&DAT_01002298,2);
  func_0x0046a880(&DAT_011434e0,1);
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  func_0x00b66100(uVar3);
  func_0x0046a880(&DAT_0112e458,1);
  func_0x0046a880(&DAT_0113d23c,1);
  return;
}



uint __thiscall FUN_00af8ca0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(param_3[1],param_3[2]);
  if (0 < iVar4) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  func_0x0046a880("Ternary selection",0x11);
  func_0x0046a880(&DAT_0112e454,2);
  pcVar1 = *(code **)(*param_3 + 0x7c);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  func_0x00b66100(uVar2);
  func_0x0046a880(&DAT_011a2310,2);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  iVar4 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(param_3[1],param_3[2]);
  if (0 < iVar4) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  func_0x0046a880("Condition\n",10);
  pcVar1 = *(code **)(*(int *)param_3[0x2e] + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  iVar4 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  uVar3 = func_0x00b663a0(param_3[1],param_3[2]);
  if (0 < iVar4) {
    do {
      uVar3 = func_0x0046a880(&DAT_0119c998,2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_3[0x2f] != 0) {
    func_0x0046a880("true case\n",10);
    pcVar1 = *(code **)(*(int *)param_3[0x2f] + 4);
    _guard_check_icall(param_1);
    uVar3 = (*pcVar1)();
  }
  if (param_3[0x30] != 0) {
    iVar4 = *(int *)(param_1 + 0x5c) + -1 +
            (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2);
    func_0x00b663a0(param_3[1],param_3[2]);
    if (0 < iVar4) {
      do {
        func_0x0046a880(&DAT_0119c998,2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    func_0x0046a880("false case\n",0xb);
    pcVar1 = *(code **)(*(int *)param_3[0x30] + 4);
    _guard_check_icall(param_1);
    uVar3 = (*pcVar1)();
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall FUN_00af8e70(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = *(int *)(param_1 + 0x5c) + -1 + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)
  ;
  func_0x00b663a0(param_3[1],param_3[2]);
  if (0 < iVar6) {
    do {
      func_0x0046a880(&DAT_0119c998,2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar2 = *(ushort *)(param_3 + 0x2e);
  switch(uVar2) {
  case 8:
    iVar6 = 0xc;
    pcVar4 = "Negate value";
    break;
  case 9:
    iVar6 = 0xd;
    pcVar4 = "Positive sign";
    break;
  case 10:
    iVar6 = 8;
    pcVar4 = "negation";
    break;
  case 0xb:
    iVar6 = 0xc;
    pcVar4 = "bit-wise not";
    break;
  case 0xc:
    iVar6 = 0xe;
    pcVar4 = "Post-Increment";
    break;
  case 0xd:
    iVar6 = 0xe;
    pcVar4 = "Post-Decrement";
    break;
  case 0xe:
    iVar6 = 0xd;
    pcVar4 = "Pre-Increment";
    break;
  case 0xf:
    iVar6 = 0xd;
    pcVar4 = "Pre-Decrement";
    break;
  case 0x10:
    iVar6 = 0xc;
    pcVar4 = "Array length";
    break;
  default:
    if (0x3d < uVar2) {
      func_0x00af74a0(*(undefined4 *)(param_1 + 0x58),"Call a built-in function",param_3[0x31]);
      goto LAB_00af8fa2;
    }
    pcVar4 = (char *)func_0x00b65bc0(uVar2);
    pcVar7 = pcVar4;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = (int)pcVar7 - (int)(pcVar4 + 1);
    break;
  case 0x8e:
    iVar6 = 0x12;
    pcVar4 = "component-wise not";
  }
  func_0x0046a880(pcVar4,iVar6);
LAB_00af8fa2:
  func_0x0046a880(&DAT_0112e454,2);
  pcVar3 = *(code **)(*param_3 + 0x7c);
  _guard_check_icall();
  uVar5 = (*pcVar3)();
  func_0x00b66100(uVar5);
  func_0x0046a880(&DAT_0112e458,1);
  func_0x0046a880(&DAT_0113d23c,1);
  return 1;
}



undefined4 * __thiscall FUN_00af9ad0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TQualifierWrapperBase::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00af9b00(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TQualifierWrapperBase::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b04ae0(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)func_0x00b04b30(*(undefined4 *)(param_1 + 0x14));
  *param_2 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    iVar3 = 0;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
      cVar1 = pcVar2[iVar3];
    }
    param_2[1] = iVar3;
    return param_2;
  }
  param_2[1] = 0;
  return param_2;
}



undefined4 FUN_00b04e90(void)

{
  return 4;
}



undefined4 __thiscall FUN_00b0a430(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,100);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b0a4f0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  if (*(short *)(param_3 + 0xb8) != 0x123) {
    return 1;
  }
  if (*(char *)(param_1 + 0x5d) == '\0') {
    if (*(int *)(param_1 + 0x60) == 0) {
      return 1;
    }
    pcVar1 = "barrier() may not be called in potentially divergent flow control.";
  }
  else {
    pcVar1 = 
    "barrier() may not be called at any point after a return statement in the function main().";
  }
  func_0x00aeced0(param_3 + 4,pcVar1,"barrier");
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return 0;
}



void __thiscall FUN_00b0a550(int param_1,undefined4 param_2,int param_3)

{
  if (*(short *)(param_3 + 0x14) == 4) {
    *(undefined1 *)(param_1 + 0x5d) = 1;
  }
  return;
}



undefined1 __thiscall FUN_00b0a570(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = func_0x00aee990();
  if (cVar1 == '\0') {
    return 0;
  }
  *(bool *)(param_1 + 0x5c) = param_2 == 0;
  return 1;
}



undefined4 __thiscall FUN_00b0a5a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 == 0) * 2 + -1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



undefined4 __thiscall FUN_00b0a5c0(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x70);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b0a9d0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 unaff_EBP;
  bool bVar8;
  byte *pbStack_c;
  undefined1 auStack_8 [8];
  
  if ((*(short *)(param_3 + 0xb8) == 0x2a) || (*(short *)(param_3 + 0xb8) == 0x2b)) {
    pcVar2 = *(code **)(**(int **)(param_3 + 0xbc) + 0x48);
    _guard_check_icall();
    iVar3 = (*pcVar2)();
    if (iVar3 != 0) {
      func_0x00aea310(auStack_8);
      pcVar4 = "gl_ClipDistance";
      pbVar7 = &DAT_0112e1b4;
      if (pbStack_c != (byte *)0x0) {
        pbVar7 = pbStack_c;
      }
      do {
        bVar1 = *pbVar7;
        bVar8 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_00b0aa56:
          uVar5 = -(uint)bVar8 | 1;
          goto LAB_00b0aa5b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar8 = bVar1 < ((byte *)pcVar4)[1];
        if (bVar1 != ((byte *)pcVar4)[1]) goto LAB_00b0aa56;
        pbVar7 = pbVar7 + 2;
        pcVar4 = (char *)((byte *)pcVar4 + 2);
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_00b0aa5b:
      if (uVar5 != 0) {
        pcVar4 = "gl_CullDistance";
        pbVar7 = &DAT_0112e1b4;
        if (pbStack_c != (byte *)0x0) {
          pbVar7 = pbStack_c;
        }
        do {
          bVar1 = *pbVar7;
          bVar8 = bVar1 < (byte)*pcVar4;
          if (bVar1 != *pcVar4) {
LAB_00b0aa90:
            uVar5 = -(uint)bVar8 | 1;
            goto LAB_00b0aa95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < ((byte *)pcVar4)[1];
          if (bVar1 != ((byte *)pcVar4)[1]) goto LAB_00b0aa90;
          pcVar4 = (char *)((byte *)pcVar4 + 2);
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_00b0aa95:
        if (uVar5 != 0) {
          return 1;
        }
      }
      pcVar2 = *(code **)(**(int **)(param_2 + 0xc0) + 0x74);
      _guard_check_icall();
      iVar3 = (*pcVar2)();
      if (iVar3 != 0) {
        uVar5 = 0;
        switch(*(undefined4 *)(iVar3 + 4)) {
        case 1:
          func_0x00b656b0();
          uVar5 = func_0x008abcb0();
          break;
        case 3:
          uVar5 = FUN_005beae0();
          break;
        case 4:
          uVar5 = FUN_005beae0();
          break;
        case 5:
          uVar5 = FUN_004b5b30();
          uVar5 = uVar5 & 0xff;
        }
        pbVar7 = &DAT_0112e1b4;
        if (pbStack_c != (byte *)0x0) {
          pbVar7 = pbStack_c;
        }
        pcVar4 = "gl_ClipDistance";
        do {
          bVar1 = *pbVar7;
          bVar8 = bVar1 < (byte)*pcVar4;
          if (bVar1 != *pcVar4) {
LAB_00b0ab40:
            uVar6 = -(uint)bVar8 | 1;
            goto LAB_00b0ab45;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < ((byte *)pcVar4)[1];
          if (bVar1 != ((byte *)pcVar4)[1]) goto LAB_00b0ab40;
          pbVar7 = pbVar7 + 2;
          pcVar4 = (char *)((byte *)pcVar4 + 2);
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_00b0ab45:
        if (uVar6 == 0) {
          if ((*(uint *)(param_1 + 0x60) < uVar5) &&
             (*(uint *)(param_1 + 0x60) = uVar5, *(int *)(param_1 + 0x68) == 0)) {
            *(undefined4 *)(param_1 + 0x68) = unaff_EBP;
            return 1;
          }
        }
        else if ((*(uint *)(param_1 + 100) < uVar5) &&
                (*(uint *)(param_1 + 100) = uVar5, *(int *)(param_1 + 0x6c) == 0)) {
          *(undefined4 *)(param_1 + 0x6c) = unaff_EBP;
        }
      }
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00b0aba0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auStack_8 [8];
  
  pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  piVar3 = (int *)(*pcVar2)();
  if ((undefined1 *)(piVar3[1] - *piVar3 & 0xfffffffcU) == &DAT_00000004) {
    pcVar2 = *(code **)(**(int **)*piVar3 + 0x48);
    _guard_check_icall();
    piVar3 = (int *)(*pcVar2)();
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)func_0x00aea310(auStack_8);
      pbVar5 = &DAT_0112e1b4;
      if ((byte *)*puVar4 != (byte *)0x0) {
        pbVar5 = (byte *)*puVar4;
      }
      pcVar9 = "gl_ClipDistance";
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00b0ac30:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_00b0ac35;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < ((byte *)pcVar9)[1];
        if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00b0ac30;
        pbVar5 = pbVar5 + 2;
        pcVar9 = (char *)((byte *)pcVar9 + 2);
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_00b0ac35:
      if (uVar6 == 0) {
        pcVar2 = *(code **)(*piVar3 + 0x7c);
        _guard_check_icall();
        iVar7 = (*pcVar2)();
        uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x80) + -4 + *(int *)(iVar7 + 0x84) * 4);
        *(int **)(param_1 + 0x68) = piVar3;
        *(undefined4 *)(param_1 + 0x58) = uVar8;
        return 1;
      }
      puVar4 = (undefined4 *)func_0x00aea310(&stack0xfffffff4);
      pbVar5 = &DAT_0112e1b4;
      if ((byte *)*puVar4 != (byte *)0x0) {
        pbVar5 = (byte *)*puVar4;
      }
      pcVar9 = "gl_CullDistance";
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00b0aca3:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_00b0aca8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < ((byte *)pcVar9)[1];
        if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00b0aca3;
        pbVar5 = pbVar5 + 2;
        pcVar9 = (char *)((byte *)pcVar9 + 2);
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_00b0aca8:
      if (uVar6 == 0) {
        uVar8 = func_0x00aea330();
        *(undefined4 *)(param_1 + 0x5c) = uVar8;
        *(int **)(param_1 + 0x6c) = piVar3;
      }
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00b0ad90(undefined4 param_1,byte param_2)

{
  func_0x00b0acd0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x68);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b0adc0(undefined4 param_1,byte param_2)

{
  func_0x00b0ad30();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x70);
  }
  return param_1;
}



void __thiscall FUN_00b0b810(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  if ((*(short *)(param_3 + 0xb8) == 0x2a) || (*(short *)(param_3 + 0xb8) == 0x2b)) {
    iVar1 = *(int *)(param_3 + 0xc0);
    if (*(int *)(param_1 + 0x5c) == 0x8b31) {
      pcVar2 = *(code **)(**(int **)(param_3 + 0xbc) + 0x7c);
      _guard_check_icall();
      iVar4 = (*pcVar2)();
      if (*(int *)(iVar4 + 8) == 6) goto LAB_00b0b893;
    }
    cVar3 = func_0x00b0afe0(iVar1);
    if (cVar3 == '\0') {
      uStack_14 = *(undefined4 *)(iVar1 + 4);
      uStack_10 = *(undefined4 *)(iVar1 + 8);
      uStack_c = *(undefined4 *)(iVar1 + 0xc);
      uStack_8 = *(undefined4 *)(iVar1 + 0x10);
      func_0x00aeced0(&uStack_14,"Index expression must be constant",&DAT_01006010);
    }
  }
LAB_00b0b893:
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b0b8b0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_18;
  if (*(int *)(param_3 + 0x14) == 0) {
    iVar5 = func_0x00b0b620(param_3);
    if ((((-1 < iVar5) && (cVar3 = func_0x00b0b160(param_3,iVar5), cVar3 != '\0')) &&
        (cVar3 = func_0x00b0b390(param_3,iVar5), cVar3 != '\0')) &&
       (piVar1 = *(int **)(param_3 + 0x24), piVar1 != (int *)0x0)) {
      pcVar2 = *(code **)(**(int **)(param_3 + 0x18) + 0x28);
      _guard_check_icall();
      iVar5 = (*pcVar2)();
      pcVar2 = *(code **)(*(int *)(iVar5 + 0x14) + 8);
      _guard_check_icall();
      puVar6 = (undefined4 *)(*pcVar2)();
      pcVar2 = *(code **)(**(int **)*puVar6 + 0x30);
      _guard_check_icall();
      iVar5 = (*pcVar2)();
      pcVar2 = *(code **)(**(int **)(iVar5 + 0xbc) + 0x48);
      _guard_check_icall();
      (*pcVar2)();
      func_0x00aebb30();
      func_0x005a9660(&stack0xffffffe4);
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -4;
    }
    FUN_008ab370();
    return;
  }
  uStack_14 = *(undefined4 *)(param_3 + 4);
  uStack_10 = *(undefined4 *)(param_3 + 8);
  uStack_c = *(undefined4 *)(param_3 + 0xc);
  uStack_8 = *(undefined4 *)(param_3 + 0x10);
  pcVar4 = "while";
  if (*(int *)(param_3 + 0x14) != 1) {
    pcVar4 = "do";
  }
  func_0x00aeced0(&uStack_14,"This type of loop is not allowed",pcVar4);
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b0b9f0(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    puVar3 = (undefined4 *)func_0x00aebb30();
    iVar4 = func_0x00e72280(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),*puVar3)
    ;
    iVar1 = *(int *)(param_1 + 0x60);
    pcVar2 = *(code **)(*param_2 + 0x7c);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    if ((*(int *)(iVar5 + 8) != 2) && (iVar4 == iVar1)) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



void __thiscall FUN_00b0ba60(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)&uStack_38;
  uStack_44 = 0xb0ba82;
  puVar1 = (undefined4 *)func_0x00aebb30();
  uStack_44 = *puVar1;
  iVar2 = func_0x00e72280(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  if ((iVar2 != *(int *)(param_1 + 0x68)) &&
     ((*(char *)(param_1 + 0x58) != '\0' || (*(char *)(param_1 + 0x59) != '\0')))) {
    puVar1 = (undefined4 *)func_0x00aea310(&uStack_44);
    uStack_38 = *(undefined4 *)(param_2 + 0xc);
    uStack_34 = *(undefined4 *)(param_2 + 0x10);
    puVar3 = &DAT_0112e1b4;
    if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*puVar1;
    }
    func_0x00aeced0(&stack0xffffffc0,
                    "Loop index cannot be statically assigned to within the body of the loop",puVar3
                   );
  }
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00b0bd90(undefined4 param_1,byte param_2)

{
  func_0x00b0bc90();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x8c);
  }
  return param_1;
}



void __thiscall FUN_00b0c560(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int aiStack_a0 [26];
  int iStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined8 uStack_20;
  int iStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  piVar9 = param_2;
  uStack_30 = 0xffffffff;
  puStack_34 = &DAT_00f6069d;
  iStack_38 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)auStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_38;
  if ((*(byte *)(param_2[6] + 0xf) & 0xf) != 3) {
    iStack_8 = param_1;
    piVar4 = (int *)func_0x00aebb30(uVar3);
    iVar8 = *piVar4;
    iStack_c = iVar8;
    iVar5 = func_0x004a0d30(&uStack_20,&iStack_c);
    if ((*(char *)(*(int *)(iVar5 + 8) + 0xd) != '\0') ||
       (iVar8 < *(int *)(*(int *)(iVar5 + 8) + 0x10))) {
      piVar4 = (int *)func_0x00aebb30();
      iVar8 = *piVar4;
      iStack_14 = iVar8;
      iStack_c = iVar8;
      puVar6 = (undefined8 *)func_0x004a0d30(auStack_2c,&iStack_c);
      uStack_20 = *puVar6;
      if ((*(char *)(*(int *)(puVar6 + 1) + 0xd) != '\0') ||
         (iVar8 < *(int *)(*(int *)(puVar6 + 1) + 0x10))) {
        if (*(int *)(param_1 + 0x88) == 0xccccccc) {
          func_0x0048d790();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x84);
        uStack_30 = 0;
        iStack_c = 0;
        puStack_10 = (undefined4 *)(param_1 + 0x84);
        puVar7 = (undefined4 *)func_0x008ab47d(0x14);
        uStack_30 = 0xffffffff;
        puVar7[4] = iStack_14;
        *puVar7 = uVar1;
        puVar7[1] = uVar1;
        puVar7[2] = uVar1;
        *(undefined2 *)(puVar7 + 3) = 0;
        func_0x0056d580((undefined4)uStack_20,uStack_20._4_4_,puVar7);
      }
      pcVar2 = *(code **)(*piVar9 + 0x7c);
      _guard_check_icall();
      iVar8 = (*pcVar2)();
      if (*(int *)(iVar8 + 8) == 10) {
        pcVar2 = *(code **)(*piVar9 + 0x7c);
        _guard_check_icall();
        iVar8 = (*pcVar2)();
        piVar4 = (int *)(iVar8 + 0x14);
        piVar10 = aiStack_a0;
        for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar10 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar10 = piVar10 + 1;
        }
        if (aiStack_a0[0] == -1) {
          pcVar2 = *(code **)(*piVar9 + 0x7c);
          _guard_check_icall();
          iVar8 = (*pcVar2)();
          piVar9 = (int *)(iVar8 + 0x14);
          piVar4 = aiStack_a0;
          for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar4 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar4 = piVar4 + 1;
          }
          func_0x00b0bb50(&param_2);
        }
        else {
          func_0x00b0bb50(&param_2);
        }
      }
      else if (*(int *)(iVar8 + 8) == 0x1d) {
        *(undefined1 *)(iStack_8 + 0x5d) = 1;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_38;
  return;
}



void FUN_00b0cae0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_168 [60];
  undefined1 auStack_12c [8];
  undefined4 uStack_124;
  undefined **appuStack_120 [3];
  code *pcStack_114;
  code *pcStack_110;
  code *pcStack_10c;
  undefined1 auStack_108 [180];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00f60786;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  uStack_14 = uVar3;
  _guard_check_icall(uVar3);
  puVar4 = (undefined4 *)(*pcVar1)();
  puVar8 = (undefined4 *)*puVar4;
  puVar4 = (undefined4 *)puVar4[1];
  do {
    if (puVar8 == puVar4) {
LAB_00b0cde0:
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    pcStack_110 = (code *)*puVar8;
    pcStack_114 = *(code **)(*(int *)pcStack_110 + 0x48);
    _guard_check_icall(uVar3);
    pcStack_114 = (code *)(*pcStack_114)();
    pcStack_10c = *(code **)(*(int *)pcStack_110 + 0x30);
    _guard_check_icall();
    iVar5 = (*pcStack_10c)();
    if (iVar5 != 0) {
      pcStack_10c = *(code **)(iVar5 + 0xbc);
      pcStack_110 = *(code **)(*(int *)pcStack_10c + 0x48);
      _guard_check_icall();
      pcStack_114 = (code *)(*pcStack_110)();
    }
    pcStack_110 = *(code **)((int)pcStack_114 + 0x18);
    if ((*(byte *)((int)pcStack_110 + 0xf) & 0xf) != 2) {
      pcStack_10c = *(code **)(*(int *)pcStack_114 + 0x7c);
      _guard_check_icall();
      pcStack_10c = (code *)(*pcStack_10c)();
      func_0x009c37e0();
      uStack_8 = 4;
      uStack_124 = CONCAT31(uStack_124._1_3_,*(int *)(pcStack_10c + 0x8c) != 0);
      func_0x00b0c810(pcStack_10c,1,uStack_124,0,auStack_108);
      if ((*(byte *)((int)pcStack_110 + 0xf) & 0xf) != 3) {
        iVar5 = func_0x00aee9d0(&iStack_4c);
        pcStack_10c = *(code **)(iVar5 + 4);
        puVar6 = (undefined4 *)func_0x00aee9d0(auStack_12c);
        puVar10 = &DAT_0112e1b4;
        if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)*puVar6;
        }
        func_0x0046a660(puVar10,pcStack_10c);
      }
      func_0x00a186b0();
      uStack_34 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_30 = 0xf;
      uStack_44 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0xf;
      uStack_2c = 0;
      uStack_8._0_1_ = 7;
      func_0x00a18650(&uStack_2c,&uStack_44,appuStack_120);
      uStack_8._0_1_ = 9;
      uVar2 = (undefined1)uStack_8;
      uStack_8._0_1_ = 9;
      if (0xf < uStack_18) {
        uVar9 = uStack_18 + 1;
        uVar7 = uStack_2c;
        if (0xfff < uVar9) {
          uVar7 = *(uint *)(uStack_2c - 4);
          uVar9 = uStack_18 + 0x24;
          if (0x1f < (uStack_2c - uVar7) - 4) goto LAB_00b0ce64;
        }
        func_0x008ab812(uVar7,uVar9);
      }
      uStack_1c = 0;
      uStack_18 = 0xf;
      uStack_2c = uStack_2c & 0xffffff00;
      uStack_8._0_1_ = 10;
      if (0xf < uStack_30) {
        uVar9 = uStack_30 + 1;
        uVar7 = uStack_44;
        if (0xfff < uVar9) {
          uVar7 = *(uint *)(uStack_44 - 4);
          uVar9 = uStack_30 + 0x24;
          uVar2 = (undefined1)uStack_8;
          if (0x1f < (uStack_44 - uVar7) - 4) {
LAB_00b0ce64:
            uStack_8._0_1_ = uVar2;
            func_0x008aaf66();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        func_0x008ab812(uVar7,uVar9);
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      uStack_44 = uStack_44 & 0xffffff00;
      func_0x00a18da0(auStack_108,0,auStack_168);
      uVar7 = func_0x00a19f10();
      pcVar1 = pcStack_114;
      if (0x80000000 < uVar7) {
        puVar8 = (undefined4 *)func_0x00aea310(auStack_12c);
        iStack_54 = *(int *)((int)pcVar1 + 4);
        iStack_50 = *(int *)((int)pcVar1 + 8);
        iStack_4c = *(int *)((int)pcVar1 + 0xc);
        iStack_48 = *(int *)((int)pcVar1 + 0x10);
        puVar10 = &DAT_0112e1b4;
        if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)*puVar8;
        }
        func_0x00aeced0(&iStack_54,"Size of declared variable exceeds implementation-defined limit",
                        puVar10);
        func_0x00a18930();
        appuStack_120[0] = sh::BlockLayoutEncoder::vftable;
        FUN_009c38e0();
        goto LAB_00b0cde0;
      }
      func_0x00a18930();
      appuStack_120[0] = sh::BlockLayoutEncoder::vftable;
      uStack_8._0_1_ = 0xff;
      uStack_8._1_3_ = 0xffffff;
      FUN_009c38e0();
    }
    puVar8 = puVar8 + 1;
  } while( true );
}



undefined4 __thiscall FUN_00b0cfb0(undefined4 param_1,byte param_2)

{
  func_0x00b0cf00();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x74);
  }
  return param_1;
}



uint FUN_00b0da00(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piStack_6c;
  int aiStack_68 [26];
  
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall();
  puVar4 = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)*puVar4 + 0x48);
  _guard_check_icall();
  piVar5 = (int *)(*pcVar1)();
  piVar7 = piVar5;
  if ((piVar5 != (int *)0x0) &&
     (piVar7 = (int *)(CONCAT31((int3)((uint)piVar5[6] >> 8),*(undefined1 *)(piVar5[6] + 0xf)) &
                      0xffffff0f), (char)piVar7 != '\x03')) {
    pcVar1 = *(code **)(*piVar5 + 0x7c);
    piStack_6c = piVar5;
    _guard_check_icall();
    iVar6 = (*pcVar1)();
    uVar2 = *(undefined4 *)(iVar6 + 8);
    pcVar1 = *(code **)(*piVar5 + 0x7c);
    _guard_check_icall();
    piVar7 = (int *)(*pcVar1)();
    piVar5 = piVar7 + 5;
    piVar8 = aiStack_68;
    for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((aiStack_68[0] != -1) &&
       ((cVar3 = func_0x00b26ab0(uVar2), cVar3 != '\0' ||
        (piVar7 = (int *)func_0x00b26b30(uVar2), (char)piVar7 != '\0')))) {
      piVar7 = (int *)func_0x00b0d9d0(&piStack_6c);
    }
  }
  return (uint)piVar7 & 0xffffff00;
}



undefined4 __thiscall FUN_00b0db50(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_40 [12];
  int aiStack_34 [6];
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f608ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(short *)(param_3 + 0xb8) == 0x2b) {
    iStack_18 = param_1;
    func_0x00b0dac0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_3 + 0xbc),
                    *(undefined4 *)(param_1 + 0x20),uVar3);
    func_0x00b0dac0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_3 + 0xc0),
                    *(undefined4 *)(param_1 + 0x20));
    pcVar1 = *(code **)(**(int **)(param_3 + 0xbc) + 0x7c);
    _guard_check_icall();
    piStack_14 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_3 + 0xc0) + 0x7c);
    _guard_check_icall();
    piStack_1c = (int *)(*pcVar1)();
    piVar6 = piStack_14;
    cVar2 = func_0x00adadc0();
    if (cVar2 == '\0') {
      piVar4 = (int *)func_0x00b760d0(0,3);
      if (piVar6[0x21] == 0) {
        uVar3 = (uint)*(byte *)(piVar6 + 0x1f);
      }
      else {
        uVar3 = *(uint *)(piVar6[0x20] + -4 + piVar6[0x21] * 4);
      }
      piVar5 = (int *)func_0x00b760d0((float)(int)(uVar3 - 1),3);
      piVar6 = *(int **)(param_3 + 0xc0);
      if (*piStack_1c != 1) {
        piStack_14 = piVar6;
        func_0x00adfe20(&piStack_14,&iStack_10);
        uStack_8 = 0;
        piVar6 = (int *)func_0x00ae1980(&DAT_01295848,auStack_40);
      }
      aiStack_34[3] = 0;
      aiStack_34[4] = 0;
      aiStack_34[5] = 0;
      uStack_8 = 1;
      piStack_1c = piVar6;
      func_0x00ade4a0(&piStack_1c);
      piStack_1c = piVar4;
      func_0x00ade4a0(&piStack_1c);
      piStack_1c = piVar5;
      func_0x00ade4a0(&piStack_1c);
      iStack_18 = func_0x00b75fc0("clamp",aiStack_34 + 3,*(undefined4 *)(iStack_18 + 0x20),100);
      func_0x00adfe20(&iStack_18,&piStack_14);
      uStack_8._0_1_ = 2;
      uVar7 = func_0x00ae1980(&DAT_012958e8,aiStack_34);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (aiStack_34[0] != 0) {
        aiStack_34[0] = 0;
        aiStack_34[1] = 0;
        aiStack_34[2] = 0;
      }
      func_0x00ade790(param_3,*(undefined4 *)(param_3 + 0xc0),uVar7,1);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void __thiscall FUN_00b0f470(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 auStack_8 [8];
  
  if ((*(byte *)(*(int *)(param_2 + 0x18) + 0xf) & 0xf) == 0) {
    puVar2 = (undefined4 *)func_0x00aea310(auStack_8);
    pbVar3 = &DAT_0112e1b4;
    if ((byte *)*puVar2 != (byte *)0x0) {
      pbVar3 = (byte *)*puVar2;
    }
    pcVar6 = "gl_FragColor";
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00b0f4c0:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_00b0f4c5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < ((byte *)pcVar6)[1];
      if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00b0f4c0;
      pbVar3 = pbVar3 + 2;
      pcVar6 = (char *)((byte *)pcVar6 + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00b0f4c5:
    if (uVar4 == 0) {
      uVar5 = func_0x00b0f3d0(0,1);
      func_0x00ade720(uVar5);
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  return;
}



void FUN_00b0fbe0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f60d6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = *(int *)(param_1 + 0x18);
  iVar2 = func_0x00b1e6d0(uVar1);
  if (iVar3 == iVar2) {
    func_0x00ad78b0();
    iVar3 = func_0x00ad7620(0x1c);
    uStack_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = func_0x00b1e660();
      uVar4 = func_0x00ae10c0(uVar4);
    }
    uStack_8 = 0xffffffff;
    func_0x00ad78b0();
    iVar3 = func_0x00ad7620(0xc4);
    uStack_8 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = func_0x00ae02d0(0x11,param_1,uVar4);
    }
    uStack_8 = 0xffffffff;
    func_0x00ade720(uVar4,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b0fcb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = func_0x00b1e650();
  if (iVar1 == iVar2) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  return;
}



void __thiscall FUN_00b0fcd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = func_0x00b1e660();
  if (iVar1 == iVar2) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  return;
}



void __thiscall FUN_00b0fcf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = func_0x00b1e670();
  if (iVar1 == iVar2) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  return;
}



undefined4 __thiscall FUN_00b0fdb0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  
  pcVar1 = *(code **)(*param_3 + 0x68);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x58));
  piVar2 = (int *)(*pcVar1)();
  if (piVar2 != param_3) {
    func_0x00ade720(piVar2,1);
    *(undefined1 *)(param_1 + 0x5c) = 1;
    return 0;
  }
  return 1;
}



undefined4 FUN_00b0fe80(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall();
  puVar3 = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)*puVar3 + 0xc);
  _guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar4 + 0x7c);
  _guard_check_icall();
  piVar5 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar4 + 0x7c);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if (*(int *)(iVar6 + 8) != 6) {
    if ((char)piVar5[0x25] == '\0') {
      if (*piVar5 == 0x5e) {
        puVar3 = (undefined4 *)**(int **)(piVar5[0x23] + 0x10);
        puVar2 = (undefined4 *)(*(int **)(piVar5[0x23] + 0x10))[1];
        if (puVar3 != puVar2) {
          do {
            if (*(int *)(*(int *)*puVar3 + 4) == 3) {
              *(undefined4 *)(*(int *)*puVar3 + 4) = 2;
            }
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar2);
          return 1;
        }
      }
      else if (piVar5[1] == 3) {
        piVar5[1] = 2;
        return 1;
      }
    }
    else {
      piVar4 = *(int **)(piVar5[0x24] + 0x10);
      uVar7 = 0;
      iVar6 = *piVar4;
      if (piVar4[1] - iVar6 >> 2 != 0) {
        do {
          iVar6 = **(int **)(iVar6 + uVar7 * 4);
          if (*(int *)(iVar6 + 4) == 3) {
            *(undefined4 *)(iVar6 + 4) = 2;
          }
          uVar7 = uVar7 + 1;
          iVar6 = *piVar4;
        } while (uVar7 < (uint)(piVar4[1] - iVar6 >> 2));
      }
    }
  }
  return 1;
}



uint __thiscall FUN_00b10af0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f60f50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  iStack_18 = param_1;
  _guard_check_icall(uVar4);
  piVar5 = (int *)(*pcVar1)();
  puVar8 = (undefined4 *)*piVar5;
  puVar2 = (undefined4 *)piVar5[1];
  do {
    if (puVar8 == puVar2) {
      *unaff_FS_OFFSET = iStack_10;
      return (uint)piVar5 & 0xffffff00;
    }
    piVar5 = (int *)*puVar8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      pcVar1 = *(code **)(*piVar5 + 0x30);
      piStack_14 = piVar5;
      _guard_check_icall(uVar4);
      piVar5 = (int *)(*pcVar1)();
      param_1 = iStack_18;
      if (piVar5 == (int *)0x0) {
        pcVar1 = *(code **)(*piStack_14 + 0x48);
        _guard_check_icall();
        piVar5 = (int *)(*pcVar1)();
        param_1 = iStack_18;
        if ((*(byte *)(piVar5[6] + 0xf) & 0xf) != 3) {
          pcVar1 = *(code **)(*piVar5 + 0x7c);
          piStack_14 = piVar5;
          _guard_check_icall();
          iVar6 = (*pcVar1)();
          if (*(int *)(iVar6 + 0x84) == 0) {
            pcVar1 = *(code **)(*piStack_14 + 0x7c);
            _guard_check_icall();
            (*pcVar1)();
            cVar3 = func_0x00adace0();
            if (cVar3 != '\0') goto LAB_00b10bce;
LAB_00b10bdb:
            pcVar1 = *(code **)(*piStack_14 + 0x7c);
            _guard_check_icall();
            (*pcVar1)();
            cVar3 = func_0x00adaca0();
            if (cVar3 == '\0') {
              func_0x00ad78b0();
              iStack_1c = func_0x00ad7620(0xc4);
              uStack_8 = 2;
              if (iStack_1c == 0) {
                uVar7 = 0;
              }
              else {
                pcVar1 = *(code **)(*piStack_14 + 0x7c);
                _guard_check_icall();
                uVar7 = (*pcVar1)();
                uVar7 = func_0x00b76a40(uVar7);
                uVar7 = func_0x00ae02d0(0x2f,piStack_14,uVar7);
              }
              param_1 = iStack_18;
              uStack_8 = 0xffffffff;
              piVar5 = (int *)func_0x00ade790(param_3,piStack_14,uVar7,0);
              goto LAB_00b10d16;
            }
          }
          else {
LAB_00b10bce:
            if (*(int *)(iStack_18 + 0x58) != 100) goto LAB_00b10bdb;
          }
          param_1 = iStack_18;
          iStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          uStack_20 = CONCAT31(uStack_20._1_3_,*(undefined1 *)(iStack_18 + 0x5d));
          uStack_24 = CONCAT31(uStack_24._1_3_,*(undefined1 *)(iStack_18 + 0x5c));
          uStack_8 = 0;
          func_0x00b103f0(piStack_14,uStack_24,uStack_20,&iStack_30,
                          *(undefined4 *)(iStack_18 + 0x20));
          iStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
          piVar5 = (int *)func_0x00ade270(&iStack_3c,&iStack_30);
          if (iStack_3c != 0) {
            iStack_3c = 0;
            uStack_38 = 0;
            uStack_34 = 0;
          }
          uStack_8 = 0xffffffff;
          if (iStack_30 != 0) {
            iStack_30 = 0;
            uStack_2c = 0;
            uStack_28 = 0;
          }
        }
      }
    }
LAB_00b10d16:
    puVar8 = puVar8 + 1;
  } while( true );
}



undefined4 __thiscall FUN_00b11570(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x6c);
  }
  return param_1;
}



undefined4 FUN_00b12d00(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int unaff_EDI;
  undefined1 *puVar12;
  undefined4 auStack_1c [5];
  undefined1 auStack_8 [8];
  
  if (*(short *)(param_2 + 0xb8) == 1) {
    auStack_1c[0] = *(undefined4 *)(param_2 + 0xd0);
    puVar12 = auStack_8;
    piVar6 = (int *)func_0x00b10f60(puVar12,auStack_1c);
    iVar1 = *piVar6;
    iVar7 = func_0x00b127d0(param_2,*(undefined4 *)(iVar1 + 0x10),iVar1 + 0xc);
    if (iVar7 != 0) {
      piVar6 = *(int **)(iVar1 + 0x18);
      if (piVar6 != *(int **)(iVar1 + 0x1c)) {
        *piVar6 = iVar7;
        *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 4;
        return 1;
      }
      iVar7 = (int)piVar6 - *(int *)(iVar1 + 0x14) >> 2;
      if (iVar7 == 0x3fffffff) {
        func_0x0046e700();
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return uVar9;
      }
      uVar10 = (int)*(int **)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14) >> 2;
      if (0x3fffffff - (uVar10 >> 1) < uVar10) {
        uVar10 = 0x3fffffff;
      }
      else {
        uVar10 = (uVar10 >> 1) + uVar10;
        if (uVar10 < iVar7 + 1U) {
          uVar10 = iVar7 + 1U;
        }
      }
      func_0x00ad78b0();
      piVar8 = (int *)func_0x00ad7620(uVar10 * 4);
      piVar8[iVar7] = (int)puVar12;
      piVar2 = *(int **)(iVar1 + 0x18);
      piVar11 = *(int **)(iVar1 + 0x14);
      piVar4 = piVar8;
      if (piVar6 == piVar2) {
        for (; piVar11 != piVar2; piVar11 = piVar11 + 1) {
          *piVar4 = *piVar11;
          piVar4 = piVar4 + 1;
        }
      }
      else {
        for (; piVar11 != piVar6; piVar11 = piVar11 + 1) {
          *piVar4 = *piVar11;
          piVar4 = piVar4 + 1;
        }
        piVar2 = *(int **)(iVar1 + 0x18);
        if (piVar6 != piVar2) {
          iVar5 = iVar7 * 4 - (int)piVar6;
          do {
            *(int *)((int)piVar8 + iVar5 + 4 + (int)piVar6) = *piVar6;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar2);
        }
      }
      *(int **)(iVar1 + 0x14) = piVar8;
      *(int **)(iVar1 + 0x18) = piVar8 + unaff_EDI;
      *(int *)(iVar1 + 0x1c) = iVar7 + 1 + (int)piVar8;
    }
  }
  return 1;
}



uint FUN_00b12e60(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  char *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  int iStack_28;
  char *pcStack_24;
  char *pcStack_20;
  int iStack_1c;
  uint uStack_18;
  char *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uVar6 = param_2;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6114d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = *(uint *)(*(int *)(param_2 + 0x14) + 0x18);
  pcVar5 = (char *)func_0x00b125a0(&uStack_18,uVar4);
  pcStack_34 = pcVar5;
  if (*(int *)(pcVar5 + 8) != *(int *)(pcVar5 + 0xc)) {
    pcStack_34 = (char *)0x0;
    pcStack_30 = (char *)0x0;
    pcStack_2c = (char *)0x0;
    uStack_8 = 0;
    if (*pcVar5 != '\0') {
      uStack_18 = uVar6;
      func_0x00ade4a0(&uStack_18);
    }
    puVar1 = *(undefined4 **)(pcVar5 + 0xc);
    puVar8 = *(undefined4 **)(pcVar5 + 8);
    pcVar5 = pcStack_30;
    for (; pcStack_30 = pcVar5, puVar8 != puVar1; puVar8 = puVar8 + 1) {
      pcStack_24 = (char *)*puVar8;
      if (pcVar5 == pcStack_2c) {
        pcStack_20 = (char *)((int)pcVar5 - (int)pcStack_34 >> 2);
        if (pcStack_20 == (char *)0x3fffffff) {
          func_0x0046e700();
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
        uStack_18 = (int)pcStack_20 + 1;
        uVar6 = (int)pcStack_2c - (int)pcStack_34 >> 2;
        if (0x3fffffff - (uVar6 >> 1) < uVar6) {
          pcStack_14 = (char *)0x3fffffff;
        }
        else {
          pcStack_14 = (char *)(uVar6 + (uVar6 >> 1));
          if (pcStack_14 < uStack_18) {
            pcStack_14 = (char *)uStack_18;
          }
        }
        func_0x00ad78b0();
        iStack_28 = (int)pcStack_14 << 2;
        pcStack_14 = (char *)func_0x00ad7620(iStack_28);
        *(char **)(pcStack_14 + (int)pcStack_20 * 4) = pcStack_24;
        pcStack_20 = pcStack_14 + (int)pcStack_20 * 4;
        pcStack_24 = pcStack_30;
        pcVar7 = pcStack_14;
        if (pcVar5 == pcStack_30) {
          for (; pcStack_34 != pcStack_30; pcStack_34 = pcStack_34 + 4) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcStack_34;
            pcVar7 = pcVar7 + 4;
          }
        }
        else {
          for (; pcStack_34 != pcVar5; pcStack_34 = pcStack_34 + 4) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcStack_34;
            pcVar7 = pcVar7 + 4;
          }
          pcStack_24 = pcStack_14;
          if (pcVar5 != pcStack_30) {
            pcVar7 = pcVar5;
            do {
              *(undefined4 *)(pcVar7 + (int)(pcStack_20 + (4 - (int)pcVar5))) =
                   *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
            } while (pcVar7 != pcStack_30);
          }
        }
        pcVar5 = pcStack_14 + uStack_18 * 4;
        pcStack_2c = pcStack_14 + iStack_28;
        pcStack_34 = pcStack_14;
      }
      else {
        *(char **)pcVar5 = pcStack_24;
        pcVar5 = pcVar5 + 4;
      }
    }
    uVar6 = *(int *)(iStack_1c + 0x40) - *(int *)(iStack_1c + 0x3c) >> 2;
    if (uVar6 < 2) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(*(int *)(iStack_1c + 0x3c) + -8 + uVar6 * 4);
    }
    pcVar2 = *(code **)(*piVar9 + 0x1c);
    _guard_check_icall();
    iStack_28 = (*pcVar2)();
    puVar3 = *(uint **)(iStack_1c + 0x18);
    if (puVar3 == *(uint **)(iStack_1c + 0x1c)) {
      pcStack_34 = (char *)func_0x00b10da0(puVar3,&iStack_28,&param_2,&pcStack_34);
    }
    else {
      *puVar3 = -(uint)(iStack_28 != 0) & iStack_28 + 0x14U;
      puVar3[1] = param_2;
      puVar3[2] = (uint)pcStack_34;
      puVar3[3] = (uint)pcStack_30;
      puVar3[4] = (uint)pcStack_2c;
      *(int *)(iStack_1c + 0x18) = *(int *)(iStack_1c + 0x18) + 0x14;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (uint)pcStack_34 & 0xffffff00;
}



void __thiscall FUN_00b130a0(int param_1,uint param_2)

{
  code *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61188;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar6 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar6 < 2) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar6 * 4);
  }
  pcVar1 = *(code **)(*piVar10 + 0x14);
  iStack_18 = param_1;
  _guard_check_icall(uVar5);
  iVar7 = (*pcVar1)();
  uVar5 = param_2;
  if (iVar7 == 0) {
    uStack_20 = *(uint *)(param_2 + 0x18);
    pcVar8 = (char *)func_0x00b125a0(&uStack_20);
    if (*(int *)(pcVar8 + 8) != *(int *)(pcVar8 + 0xc)) {
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      puStack_34 = (undefined4 *)0x0;
      iStack_8 = 0;
      if (*pcVar8 != '\0') {
        uStack_20 = uVar5;
        func_0x00ade4a0(&uStack_20);
      }
      piVar2 = *(int **)(pcVar8 + 0xc);
      for (piVar10 = *(int **)(pcVar8 + 8); piVar10 != piVar2; piVar10 = piVar10 + 1) {
        iVar7 = *piVar10;
        func_0x00ad78b0();
        iStack_30 = func_0x00ad7620(0x1c);
        iStack_8._0_1_ = 1;
        if (iStack_30 == 0) {
          uStack_1c = 0;
        }
        else {
          uStack_1c = func_0x00ae0a00(*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x18));
        }
        puVar4 = puStack_38;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (puStack_38 == puStack_34) {
          puStack_24 = (undefined4 *)((int)puStack_38 - (int)puStack_3c >> 2);
          if (puStack_24 == (undefined4 *)0x3fffffff) {
            func_0x0046e700();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uStack_20 = (int)puStack_24 + 1;
          uVar5 = (int)puStack_34 - (int)puStack_3c >> 2;
          if (0x3fffffff - (uVar5 >> 1) < uVar5) {
            puStack_14 = (undefined4 *)0x3fffffff;
          }
          else {
            puStack_14 = (undefined4 *)((uVar5 >> 1) + uVar5);
            if (puStack_14 < uStack_20) {
              puStack_14 = (undefined4 *)uStack_20;
            }
          }
          func_0x00ad78b0();
          iStack_2c = (int)puStack_14 << 2;
          puStack_14 = (undefined4 *)func_0x00ad7620(iStack_2c);
          puStack_28 = puStack_14 + (int)puStack_24;
          *puStack_28 = uStack_1c;
          puStack_24 = puStack_38;
          puVar9 = puStack_14;
          if (puVar4 == puStack_38) {
            for (; puStack_3c != puStack_38; puStack_3c = puStack_3c + 1) {
              *puVar9 = *puStack_3c;
              puVar9 = puVar9 + 1;
            }
          }
          else {
            for (; puStack_3c != puVar4; puStack_3c = puStack_3c + 1) {
              *puVar9 = *puStack_3c;
              puVar9 = puVar9 + 1;
            }
            puStack_24 = puStack_14;
            if (puVar4 != puStack_38) {
              puVar9 = puVar4;
              do {
                *(undefined4 *)((int)puStack_28 + (4 - (int)puVar4) + (int)puVar9) = *puVar9;
                puVar9 = puVar9 + 1;
              } while (puVar9 != puStack_38);
            }
          }
          puStack_38 = puStack_14 + uStack_20;
          puStack_34 = (undefined4 *)(iStack_2c + (int)puStack_14);
          puStack_3c = puStack_14;
        }
        else {
          *puStack_38 = uStack_1c;
          puStack_38 = puStack_38 + 1;
        }
      }
      uVar5 = *(int *)(iStack_18 + 0x40) - *(int *)(iStack_18 + 0x3c) >> 2;
      if (uVar5 < 2) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = *(int **)(*(int *)(iStack_18 + 0x3c) + -8 + uVar5 * 4);
      }
      pcVar1 = *(code **)(*piVar10 + 0x1c);
      _guard_check_icall();
      iStack_2c = (*pcVar1)();
      puVar3 = *(uint **)(iStack_18 + 0x18);
      if (puVar3 != *(uint **)(iStack_18 + 0x1c)) {
        *puVar3 = -(uint)(iStack_2c != 0) & iStack_2c + 0x14U;
        puVar3[1] = param_2;
        puVar3[2] = (uint)puStack_3c;
        puVar3[3] = (uint)puStack_38;
        puVar3[4] = (uint)puStack_34;
        *(int *)(iStack_18 + 0x18) = *(int *)(iStack_18 + 0x18) + 0x14;
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      func_0x00b10da0(puVar3,&iStack_2c,&param_2,&puStack_3c);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint FUN_00b13670(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f611ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_2 + 0x18) + 0x14) + 8);
  _guard_check_icall(uVar4);
  piVar5 = (int *)(*pcVar1)();
  uVar7 = piVar5[1] - *piVar5 >> 2;
  do {
    uStack_18 = uVar7;
    if (uStack_18 == 0) break;
    uVar7 = uStack_18 - 1;
    if ((uint)(piVar5[1] - *piVar5 >> 2) <= uVar7) {
      func_0x0046e490();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    piStack_14 = *(int **)(*piVar5 + uVar7 * 4);
    pcVar1 = *(code **)(*piStack_14 + 0x44);
    _guard_check_icall(uVar4);
    iVar6 = (*pcVar1)();
  } while ((iVar6 != 0) || (cVar3 = func_0x00b13540(piStack_14), cVar3 != '\0'));
  if (uStack_18 != 0) {
    uVar4 = piVar5[1] - *piVar5 >> 2;
    if ((uStack_18 < uVar4) && (uVar4 = *piVar5 + uStack_18 * 4, uVar4 != piVar5[1])) {
      piVar5[1] = uVar4;
    }
    *unaff_FS_OFFSET = iStack_10;
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  piVar5 = *(int **)(param_2 + 0x14);
  pcVar1 = *(code **)(*piVar5 + 0x78);
  _guard_check_icall(uVar4);
  cVar3 = (*pcVar1)();
  if (cVar3 != '\0') {
    uVar4 = func_0x00ade720(piVar5,1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4 & 0xffffff00;
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uVar4 = *(int *)(iStack_1c + 0x40) - *(int *)(iStack_1c + 0x3c) >> 2;
  if (uVar4 < 2) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(iStack_1c + 0x3c) + -8 + uVar4 * 4);
  }
  pcVar1 = *(code **)(*piVar5 + 0x1c);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  puVar2 = *(uint **)(iStack_1c + 0x18);
  if (puVar2 == *(uint **)(iStack_1c + 0x1c)) {
    iStack_1c = iVar6;
    uVar4 = func_0x00b13350(puVar2,&iStack_1c,&param_2,&uStack_28);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4 & 0xffffff00;
  }
  puVar2[1] = param_2;
  *puVar2 = -(uint)(iVar6 != 0) & iVar6 + 0x14U;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(int *)(iStack_1c + 0x18) = *(int *)(iStack_1c + 0x18) + 0x14;
  *unaff_FS_OFFSET = iStack_10;
  return param_2 & 0xffffff00;
}



uint __thiscall FUN_00b13940(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int aiStack_2c [3];
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6124d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall(uVar3);
  piVar4 = (int *)(*pcVar1)();
  piStack_18 = (int *)0x0;
  iVar5 = *piVar4;
  piStack_20 = piVar4;
  if (piVar4[1] - iVar5 >> 2 != 0) {
    do {
      piVar4 = *(int **)(iVar5 + (int)piStack_18 * 4);
      pcVar1 = *(code **)(*piVar4 + 0x44);
      piStack_1c = piVar4;
      piStack_14 = piVar4;
      _guard_check_icall(uVar3);
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      if (*(char *)(param_1 + 0x58) == '\0') {
        pcVar1 = *(code **)(*piVar4 + 0x10);
        _guard_check_icall();
        iVar5 = (*pcVar1)();
        if (iVar5 != 0) goto LAB_00b13a38;
        pcVar1 = *(code **)(*piVar4 + 0x28);
        _guard_check_icall();
        iVar5 = (*pcVar1)();
        if (iVar5 != 0) {
          pcVar1 = *(code **)(*piVar4 + 0x28);
          _guard_check_icall();
          iVar5 = (*pcVar1)();
          pcVar1 = *(code **)(*(int *)(iVar5 + 0x14) + 8);
          _guard_check_icall();
          piVar6 = (int *)(*pcVar1)();
          piVar4 = piStack_14;
          if (*piVar6 == piVar6[1]) goto LAB_00b13a38;
        }
        pcVar1 = *(code **)(*piVar4 + 4);
        _guard_check_icall(param_1);
        (*pcVar1)();
      }
      else {
LAB_00b13a38:
        aiStack_2c[0] = 0;
        aiStack_2c[1] = 0;
        aiStack_2c[2] = 0;
        puVar2 = *(uint **)(param_1 + 0x18);
        uStack_8 = 0;
        if (puVar2 == *(uint **)(param_1 + 0x1c)) {
          func_0x00b10da0(puVar2,&param_3,&piStack_1c,aiStack_2c);
        }
        else {
          puVar2[1] = (uint)piVar4;
          aiStack_2c[2] = 0;
          aiStack_2c[1] = 0;
          *puVar2 = -(uint)(param_3 != 0) & param_3 + 0x14U;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
        }
        uStack_8 = 0xffffffff;
        if (aiStack_2c[0] != 0) {
          aiStack_2c[0] = 0;
          aiStack_2c[1] = 0;
          aiStack_2c[2] = 0;
        }
      }
      piStack_18 = (int *)((int)piStack_18 + 1);
      iVar5 = *piStack_20;
      piVar4 = (int *)(piStack_20[1] - iVar5 >> 2);
    } while (piStack_18 < piVar4);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar7 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar7 < 2) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar7 * 4);
    }
    pcVar1 = *(code **)(*piVar4 + 0x1c);
    _guard_check_icall(uVar3);
    piVar4 = (int *)(*pcVar1)();
    if (piVar4 == (int *)0x0) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (uint)piVar4 & 0xffffff00;
}



undefined1 __fastcall FUN_00b13b30(int param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return 0;
}



uint __thiscall FUN_00b13b40(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6129e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != 0) {
    *unaff_FS_OFFSET = iStack_10;
    return CONCAT31((int3)((uint)&iStack_10 >> 8),1);
  }
  iStack_14 = param_3;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall(uVar2);
  piStack_18 = (int *)(*pcVar1)();
  piVar4 = piStack_18;
  if (piStack_18[1] - *piStack_18 >> 2 != 0) {
    pcVar1 = *(code **)(**(int **)*piStack_18 + 0x48);
    _guard_check_icall(uVar2);
    piVar3 = (int *)(*pcVar1)();
    piVar4 = piVar3;
    if ((piVar3 != (int *)0x0) && ((*(byte *)(piVar3[6] + 0xf) & 0xf) == 3)) {
      pcVar1 = *(code **)(*piVar3 + 0x7c);
      piStack_1c = piVar3;
      _guard_check_icall(uVar2);
      piVar4 = (int *)(*pcVar1)();
      if (*piVar4 != 0x5e) {
        if ((uint)(piStack_18[1] - *piStack_18 >> 2) < 2) {
          pcVar1 = *(code **)(*piVar3 + 0x7c);
          _guard_check_icall();
          piVar4 = (int *)(*pcVar1)();
          if (*piVar4 == 0x5d) {
            piVar4 = (int *)func_0x00aea380();
            if (piVar4 != (int *)0x1) {
              piVar4 = (int *)func_0x00aea380();
              if (piVar4 != (int *)0x0) {
                func_0x00ad78b0();
                piStack_1c = (int *)func_0x00ad7620(0xa0);
                uStack_8 = 1;
                if (piStack_1c == (int *)0x0) {
                  iVar6 = 0;
                }
                else {
                  pcVar1 = *(code **)(*piVar3 + 0x7c);
                  _guard_check_icall();
                  uVar5 = (*pcVar1)();
                  iVar6 = func_0x00ad8850(uVar5);
                }
                uStack_8 = 0xffffffff;
                *(uint *)(iVar6 + 8) = (uint)(*(char *)(param_1 + 0x10) != '\0');
                func_0x00ad78b0();
                piStack_1c = (int *)func_0x00ad7620(0x18);
                uStack_8 = 2;
                if (piStack_1c == (int *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = func_0x00aee0e0(*(undefined4 *)(param_1 + 0x20),&PTR_DAT_01008cdc,iVar6,3,
                                          0);
                }
                uStack_8 = 0xffffffff;
                func_0x00ad78b0();
                piStack_1c = (int *)func_0x00ad7620(0x1c);
                uStack_8 = 3;
                if (piStack_1c == (int *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = func_0x00ae10c0(uVar5);
                }
                uStack_8 = 0xffffffff;
                piVar4 = (int *)func_0x00ade790(iStack_14,piVar3,uVar5,1);
              }
            }
          }
        }
        else {
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          piVar4 = *(int **)(param_1 + 0x18);
          uStack_8 = 0;
          if (piVar4 == *(int **)(param_1 + 0x1c)) {
            piVar4 = (int *)func_0x00b10da0(piVar4,&param_3,&piStack_1c,&uStack_28);
          }
          else {
            piVar4[1] = (int)piVar3;
            iVar6 = iStack_14 + 0x14;
            if (iStack_14 == 0) {
              iVar6 = 0;
            }
            *piVar4 = iVar6;
            piVar4[2] = 0;
            piVar4[3] = 0;
            piVar4[4] = 0;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (uint)piVar4 & 0xffffff00;
}



undefined4 FUN_00b13d90(int param_1,int param_2)

{
  char cVar1;
  
  if (param_1 != 0) {
    return 1;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    cVar1 = func_0x00b13850(*(int *)(param_2 + 0x20));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 0x20) = 0;
    }
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    cVar1 = func_0x00b13850(*(int *)(param_2 + 0x18));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    return 1;
  }
  return 1;
}



undefined4 __thiscall FUN_00b13f10(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f612e3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((short)param_3[0x2e] == 0x10) {
    pcVar1 = *(code **)(*(int *)param_3[0x2f] + 0x7c);
    _guard_check_icall(uVar3);
    (*pcVar1)();
    cVar2 = func_0x00adadc0();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      func_0x00b13e90(param_3[0x2f]);
      func_0x00ad78b0();
      puVar4 = (undefined4 *)func_0x00ad7620(8);
      uStack_8 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        FUN_0046f300();
      }
      uStack_8 = 0xffffffff;
      pcVar1 = *(code **)(*(int *)param_3[0x2f] + 0x7c);
      _guard_check_icall();
      iVar5 = (*pcVar1)();
      *puVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x80) + -4 + *(int *)(iVar5 + 0x84) * 4);
      puVar4[1] = 3;
      func_0x00ad78b0();
      puVar6 = (undefined4 *)func_0x00ad7620(0xbc);
      uStack_8 = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*param_3 + 0x7c);
        _guard_check_icall();
        uVar7 = (*pcVar1)();
        func_0x00ae0980(uVar7);
        *puVar6 = sh::TIntermConstantUnion::vftable;
        puVar6[0x2e] = puVar4;
      }
      uStack_8 = 0xffffffff;
      func_0x00ade720(puVar6,1);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall FUN_00b14440(undefined4 param_1,byte param_2)

{
  func_0x00b141e0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xa0);
  }
  return param_1;
}



void FUN_00b15a90(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00b15aa0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00b15ab0(undefined4 *param_1)

{
  func_0x00b77cc0(*param_1);
  return;
}



void FUN_00b15ad0(undefined4 *param_1)

{
  func_0x00b77cf0(*param_1);
  return;
}



TypeDescriptor * FUN_00b15af0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b15b00(void)

{
  return &<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00b15ec0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  char cStack_49;
  int *piStack_48;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6167a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_50 = param_3;
  iStack_64 = param_1;
  if ((*(char *)(param_1 + 0x6c) == '\0') && ((short)param_3[0x2e] == 0x2b)) {
    if (*(char *)(param_1 + 0x6d) == '\0') {
      iStack_58 = param_1 + 0x70;
      piStack_60 = param_3;
      piStack_68 = *(int **)(param_1 + 0x94);
      if (piStack_68 == (int *)0x0) {
        func_0x00e701bd(uStack_14);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = *(code **)(*piStack_68 + 8);
      _guard_check_icall(&piStack_60);
      cVar3 = (*pcVar1)();
      piVar6 = piStack_50;
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x98) != 0) {
          func_0x00aed010(piStack_50 + 1,
                          "Performance: dynamic indexing of vectors and matrices is emulated and can be slow."
                          ,&DAT_01006010);
        }
        if ((*(char *)(param_1 + 0x58) != '\0') ||
           (cStack_49 = '\0', *(char *)(param_1 + 0x59) != '\0')) {
          cStack_49 = '\x01';
        }
        pcVar1 = *(code **)(*(int *)piVar6[0x2f] + 0x7c);
        _guard_check_icall();
        iVar5 = (*pcVar1)();
        iStack_5c = iVar5;
        uVar4 = func_0x00b155b0(auStack_44,iVar5,0);
        uStack_8 = 0;
        func_0x00ad8660(uVar4);
        uStack_8 = 0xffffffff;
        FUN_00469ba0();
        iVar8 = iStack_64;
        piVar6 = (int *)func_0x00b15b10(&piStack_48,iVar5);
        if (*piVar6 == *(int *)(iVar8 + 0x5c)) {
          func_0x00ad78b0();
          piStack_60 = (int *)func_0x00ad7620(0x2c);
          uStack_8 = 1;
          if (piStack_60 == (int *)0x0) {
            uStack_54 = 0;
          }
          else {
            uVar4 = func_0x00b14730(iVar5);
            uStack_54 = func_0x00aedf50(*(undefined4 *)(iVar8 + 0x20),auStack_7c,2,uVar4,1);
          }
          uStack_8 = 0xffffffff;
          func_0x00ad78b0();
          piStack_60 = (int *)func_0x00ad7620(0x18);
          uStack_8 = 2;
          if (piStack_60 == (int *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = func_0x00b146b0(iVar5,0);
            uVar4 = func_0x00aee0e0(*(undefined4 *)(iVar8 + 0x20),&PTR_DAT_01008db8,uVar4,2,0);
          }
          uStack_8 = 0xffffffff;
          func_0x00aee150(uVar4);
          func_0x00ad78b0();
          piStack_48 = (int *)func_0x00ad7620(0x18);
          uStack_8 = 3;
          if (piStack_48 == (int *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = func_0x00aee0e0(*(undefined4 *)(iVar8 + 0x20),&PTR_s_index_01008dc0,
                                    PTR_DAT_01295de8,2,0);
          }
          uStack_8 = 0xffffffff;
          func_0x00aee150(uVar4);
          puVar7 = (undefined4 *)func_0x00b14270(iVar5);
          *puVar7 = uStack_54;
        }
        else {
          puVar7 = (undefined4 *)func_0x00b14270(iVar5);
          uStack_54 = *puVar7;
        }
        piVar6 = piStack_50;
        if (cStack_49 == '\0') {
          uVar4 = func_0x00b145f0(piStack_50[0x30],uStack_54);
          uVar4 = func_0x00b14470(piVar6,uVar4);
          func_0x00ade720(uVar4,1);
        }
        else {
          pcVar1 = *(code **)(*(int *)piStack_50[0x2f] + 0x78);
          _guard_check_icall();
          cVar3 = (*pcVar1)();
          if (cVar3 == '\0') {
            pcVar1 = *(code **)(*(int *)piStack_50[0x2f] + 0x30);
            _guard_check_icall();
            iVar8 = (*pcVar1)();
            if ((iVar8 == 0) || (cVar3 = func_0x00b14350(iVar8), cVar3 == '\0')) {
              iVar5 = iStack_5c;
              iVar8 = iStack_64;
              piVar6 = (int *)func_0x00b15b10(&piStack_48,iStack_5c);
              if (*piVar6 == *(int *)(iVar8 + 100)) {
                pcVar1 = *(code **)(*(int *)piStack_50[0x2f] + 0x7c);
                _guard_check_icall(1);
                uVar4 = (*pcVar1)();
                uVar4 = func_0x00b155b0(auStack_2c,uVar4);
                uStack_8 = 4;
                func_0x00ad8660(uVar4);
                uStack_8 = 0xffffffff;
                FUN_00469ba0();
                func_0x00ad78b0();
                piStack_48 = (int *)func_0x00ad7620(0x2c);
                iVar8 = iStack_64;
                uStack_8 = 5;
                if (piStack_48 == (int *)0x0) {
                  iStack_58 = 0;
                }
                else {
                  iStack_58 = func_0x00aedf50(*(undefined4 *)(iStack_64 + 0x20),auStack_84,2,
                                              &DAT_01295df0,0);
                }
                uStack_8 = 0xffffffff;
                func_0x00ad78b0();
                piStack_48 = (int *)func_0x00ad7620(0x18);
                iVar5 = iStack_5c;
                uStack_8 = 6;
                if (piStack_48 == (int *)0x0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = func_0x00b146b0(iStack_5c,1);
                  uVar4 = func_0x00aee0e0(*(undefined4 *)(iVar8 + 0x20),&PTR_DAT_01008db8,uVar4,2,0)
                  ;
                }
                uStack_8 = 0xffffffff;
                func_0x00aee150(uVar4);
                func_0x00ad78b0();
                piStack_48 = (int *)func_0x00ad7620(0x18);
                uStack_8 = 7;
                if (piStack_48 == (int *)0x0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = func_0x00aee0e0(*(undefined4 *)(iVar8 + 0x20),&PTR_s_index_01008dc0,
                                          PTR_DAT_01295de8,2,0);
                }
                uStack_8 = 0xffffffff;
                func_0x00aee150(uVar4);
                piStack_48 = (int *)func_0x00b14730(iVar5);
                piStack_48[2] = 0xe;
                func_0x00ad78b0();
                iStack_5c = func_0x00ad7620(0x18);
                uStack_8 = 8;
                if (iStack_5c == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = func_0x00aee0e0(*(undefined4 *)(iVar8 + 0x20),&PTR_s_value_01008dc8,
                                          piStack_48,2,0);
                }
                uStack_8 = 0xffffffff;
                func_0x00aee150(uVar4);
                piVar6 = (int *)func_0x00b14270(iVar5);
                *piVar6 = iStack_58;
              }
              else {
                piVar6 = (int *)func_0x00b14270(iVar5);
                iStack_58 = *piVar6;
              }
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              uStack_38 = 0;
              uStack_34 = 0;
              uStack_30 = 0;
              uStack_8._0_1_ = 10;
              uStack_8._1_3_ = 0;
              uVar4 = func_0x00b145f0(piStack_50[0x30]);
              piStack_68 = (int *)0x0;
              iVar5 = func_0x00b76e80(*(undefined4 *)(iVar8 + 0x20),uVar4,0,&piStack_68);
              piStack_48 = piStack_68;
              iStack_5c = iVar5;
              func_0x00ade4a0(&piStack_48);
              uVar4 = func_0x00b76660(iVar5,uStack_54);
              piVar6 = piStack_50;
              uVar4 = func_0x00b14470(piStack_50,uVar4);
              piStack_60 = (int *)0x0;
              uStack_54 = func_0x00b76e80(*(undefined4 *)(iVar8 + 0x20),uVar4,0,&piStack_60);
              piStack_48 = piStack_60;
              func_0x00ade4a0(&piStack_48);
              uStack_20 = 0;
              uStack_1c = 0;
              uStack_18 = 0;
              uStack_8._0_1_ = 0xb;
              pcVar1 = *(code **)(*(int *)piVar6[0x2f] + 0x58);
              _guard_check_icall();
              piStack_48 = (int *)(*pcVar1)();
              func_0x00ade4a0(&piStack_48);
              piStack_48 = (int *)func_0x00b76660(iStack_5c);
              func_0x00ade4a0(&piStack_48);
              uVar4 = uStack_54;
              piStack_48 = (int *)func_0x00b76660(uStack_54);
              func_0x00ade4a0(&piStack_48);
              piStack_48 = (int *)func_0x00ae1ac0(iStack_58,&uStack_20);
              uStack_8 = CONCAT31(uStack_8._1_3_,10);
              iVar8 = piStack_50[2];
              iVar5 = piStack_50[3];
              iVar2 = piStack_50[4];
              piStack_48[1] = piStack_50[1];
              piStack_48[2] = iVar8;
              piStack_48[3] = iVar5;
              piStack_48[4] = iVar2;
              func_0x00ade4a0(&piStack_48);
              iVar8 = iStack_64;
              func_0x00ade270(&uStack_74,&uStack_38);
              uVar4 = func_0x00b76660(uVar4,1);
              func_0x00ade720(uVar4);
              *(undefined1 *)(iVar8 + 0x6c) = 1;
            }
          }
          else {
            *(undefined1 *)(iStack_64 + 0x6d) = 1;
          }
        }
      }
    }
    else {
      iStack_5c = 0;
      uVar4 = func_0x00b76e80(*(undefined4 *)(param_1 + 0x20),param_3[0x30],0,&iStack_5c);
      func_0x00ade110(iStack_5c);
      *(undefined1 *)(param_1 + 0x6c) = 1;
      uVar4 = func_0x00b76660(uVar4);
      func_0x00ade790(piStack_50,piStack_50[0x30],uVar4,1);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



uint __thiscall FUN_00b165c0(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f616ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_3 + 0x18) == '\0') {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uVar4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    uStack_8 = 0;
    if (uVar4 < 2) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar4 * 4);
    }
    pcVar1 = *(code **)(*piVar5 + 0x1c);
    _guard_check_icall(uVar3);
    iStack_14 = (*pcVar1)();
    puVar2 = *(uint **)(param_1 + 0x18);
    if (puVar2 == *(uint **)(param_1 + 0x1c)) {
      param_3 = func_0x00b13350(puVar2,&iStack_14,&param_3,&uStack_20);
    }
    else {
      *puVar2 = -(uint)(iStack_14 != 0) & iStack_14 + 0x14U;
      puVar2[1] = param_3;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_3 & 0xffffff00;
}



undefined4 __thiscall FUN_00b16770(undefined4 param_1,byte param_2)

{
  func_0x008c25a0();
  func_0x008c25a0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x98);
  }
  return param_1;
}



void __thiscall FUN_00b16cf0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5dddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ade0e0(param_2,uVar3);
  uStack_8 = 0;
  cStack_11 = '\x01';
  pcVar2 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall();
  piVar4 = (int *)(*pcVar2)();
  if ((char)param_1[1] != '\0') {
    pcVar2 = *(code **)(*param_1 + 0x34);
    _guard_check_icall(0,param_2);
    cStack_11 = (*pcVar2)();
    if (cStack_11 == '\0') goto LAB_00b16df6;
  }
  iVar5 = piVar4[1];
  if (iVar5 != *piVar4) {
    do {
      puVar1 = (undefined4 *)(iVar5 + -4);
      iVar5 = iVar5 + -4;
      pcVar2 = *(code **)(*(int *)*puVar1 + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
      if (((cStack_11 != '\0') && (*(char *)((int)param_1 + 5) != '\0')) && (iVar5 != *piVar4)) {
        pcVar2 = *(code **)(*param_1 + 0x34);
        _guard_check_icall(1,param_2);
        cStack_11 = (*pcVar2)();
      }
    } while (iVar5 != *piVar4);
    if (cStack_11 == '\0') goto LAB_00b16df6;
  }
  if (*(char *)((int)param_1 + 6) != '\0') {
    pcVar2 = *(code **)(*param_1 + 0x34);
    _guard_check_icall(2,param_2);
    (*pcVar2)();
  }
LAB_00b16df6:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b16e10(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e0ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ade0e0(param_2,uVar3);
  uStack_8 = 0;
  if ((char)param_1[1] != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall(0,param_2);
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') goto LAB_00b16eb2;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_00ade830(param_1);
  }
  if (*(int **)(param_2 + 0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_2 + 0x18) + 4);
    _guard_check_icall(param_1);
    (*pcVar1)();
  }
  if (*(char *)((int)param_1 + 6) != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall(2,param_2);
    (*pcVar1)();
  }
LAB_00b16eb2:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_00b16ed0(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  func_0x00b16910(uVar2);
  return 1;
}



undefined4 __thiscall FUN_00b16f00(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x60) != '\0')) {
    pcVar1 = *(code **)(*param_3 + 0x7c);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
    func_0x00b168b0(uVar2);
  }
  return 1;
}



undefined4 __thiscall FUN_00b16f40(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  float *pfVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *unaff_FS_OFFSET;
  float fVar12;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  uint *puStack_20;
  uint uStack_1c;
  int iStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61805;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 == 0) {
    pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
    iStack_18 = param_1;
    _guard_check_icall(uVar4);
    iVar5 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(*(int *)(iVar5 + 4) + -4) + 0xc);
    _guard_check_icall();
    piVar6 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piVar6 + 0x7c);
    _guard_check_icall();
    iVar5 = (*pcVar1)();
    iVar5 = *(int *)(iVar5 + 8);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      cStack_11 = '\0';
      pcVar1 = *(code **)(*piVar6 + 0x48);
      _guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        puVar7 = (uint *)func_0x00aebb30();
        uStack_1c = *puVar7;
        piVar8 = (int *)func_0x00a2c540(&uStack_1c);
        if ((*piVar8 == 1) ||
           (cStack_11 = '\0', (*(byte *)(*(int *)(iVar5 + 0x18) + 0xf) & 0xf) == 3)) {
          cStack_11 = '\x01';
        }
      }
      pcVar1 = *(code **)(*piVar6 + 0x30);
      _guard_check_icall();
      iStack_24 = (*pcVar1)();
      if (iStack_24 == 0) {
        if (cStack_11 == '\0') goto LAB_00b171b1;
      }
      else {
        pcVar1 = *(code **)(**(int **)(iStack_24 + 0xbc) + 0x48);
        _guard_check_icall();
        (*pcVar1)();
        puVar7 = (uint *)func_0x00aebb30();
        uStack_1c = *puVar7;
        pfVar2 = *(float **)(iStack_18 + 0x58);
        iVar5 = (((uStack_1c >> 8 & 0xff ^ (uStack_1c & 0xff ^ 0x811c9dc5) * 0x1000193) * 0x1000193
                 ^ uStack_1c >> 0x10 & 0xff) * 0x1000193 ^ uStack_1c >> 0x18) * 0x1000193;
        func_0x00887e10(&uStack_2c,&uStack_1c,iVar5);
        if (iStack_28 == 0) {
          if (pfVar2[2] == 2.5243547e-29) {
            func_0x00e701fa("unordered_map/set too long");
            pcVar1 = (code *)swi(3);
            uVar11 = (*pcVar1)();
            return uVar11;
          }
          uStack_8 = 0;
          iVar9 = func_0x008ab47d(0x10);
          puStack_20 = (uint *)(iVar9 + 8);
          *puStack_20 = uStack_1c;
          *(undefined4 *)(iVar9 + 0xc) = 0;
          uStack_8 = 1;
          fVar12 = (float)((double)((int)pfVar2[2] + 1) +
                          (double)(&DAT_011a2c10)[-((int)pfVar2[2] + 1 >> 0x1f)]) /
                   (float)((double)(int)pfVar2[7] +
                          (double)(&DAT_011a2c10)[-((int)pfVar2[7] >> 0x1f)]);
          if (*pfVar2 <= fVar12 && fVar12 != *pfVar2) {
            func_0x0094a520();
            puVar10 = (undefined4 *)func_0x00887e10(&uStack_2c,puStack_20,iVar5);
            uStack_2c = *puVar10;
          }
          iStack_28 = func_0x00928050(iVar5,uStack_2c,iVar9);
          uStack_8 = 0xffffffff;
        }
        if (*(int *)(iStack_28 + 0xc) != 1) goto LAB_00b171b1;
        pcVar1 = *(code **)(**(int **)(iStack_24 + 0xc0) + 0x78);
        _guard_check_icall();
        cVar3 = (*pcVar1)();
        if (cVar3 != '\0') goto LAB_00b171b1;
      }
      iVar5 = iStack_18;
      func_0x00b169e0(param_3,piVar6);
      *(undefined1 *)(iVar5 + 0x60) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
LAB_00b171b1:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void __thiscall FUN_00b171e0(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int unaff_retaddr;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  iStack_4 = param_1;
  _guard_check_icall();
  uVar6 = (*pcVar1)();
  func_0x00b16910(uVar6);
  uStack_c = 0;
  uVar2 = *(uint *)(*(int *)(unaff_retaddr + 0x18) + 0x24);
  if (uVar2 != 0) {
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(unaff_retaddr + 0x18) + 0x14) + uStack_c * 4) +
                        0x10);
      if (*piVar3 == 0x5e) {
        puVar4 = (undefined4 *)(*(undefined4 **)(piVar3[0x23] + 0x10))[1];
        param_1 = iStack_8;
        for (puVar7 = (undefined4 *)**(undefined4 **)(piVar3[0x23] + 0x10); iStack_8 = param_1,
            puVar7 != puVar4; puVar7 = puVar7 + 1) {
          func_0x00b16910(*(undefined4 *)*puVar7);
          param_1 = iStack_8;
        }
      }
      else {
        iVar5 = piVar3[0x24];
        if (iVar5 != 0) {
          uStack_10 = *(undefined4 *)(iVar5 + 8);
          func_0x00888200(&iStack_14,&uStack_10);
          if (iStack_14 == *(int *)(param_1 + 0x7c)) {
            uStack_18 = *(undefined4 *)(iVar5 + 8);
            puVar7 = (undefined4 *)func_0x00a2c540(&uStack_18);
            *puVar7 = 1;
            puVar4 = (undefined4 *)(*(undefined4 **)(iVar5 + 0x10))[1];
            param_1 = iStack_8;
            for (puVar7 = (undefined4 *)**(undefined4 **)(iVar5 + 0x10); iStack_8 = param_1,
                puVar7 != puVar4; puVar7 = puVar7 + 1) {
              func_0x00b16910(*(undefined4 *)*puVar7);
              param_1 = iStack_8;
            }
          }
          else {
            *(int *)(iStack_14 + 0xc) = *(int *)(iStack_14 + 0xc) + 1;
          }
        }
      }
      uStack_c = uStack_c + 1;
    } while (uStack_c < uVar2);
  }
  return;
}



void __thiscall FUN_00b17300(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_1c;
  undefined1 auStack_c [12];
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  uStack_1c = 0xb17319;
  _guard_check_icall();
  uStack_1c = 0xb1731d;
  uStack_1c = (*pcVar1)();
  func_0x00b16910();
  puVar3 = (uint *)func_0x00aebb30();
  uVar2 = *puVar3;
  iVar4 = func_0x00887e10(auStack_c,&stack0xfffffff0,
                          ((((uVar2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ uVar2 >> 8 & 0xff) *
                            0x1000193 ^ uVar2 >> 0x10 & 0xff) * 0x1000193 ^ uVar2 >> 0x18) *
                          0x1000193);
  iVar4 = *(int *)(iVar4 + 4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x5c);
  }
  if (iVar4 == *(int *)(param_1 + 0x5c)) {
    puVar5 = (undefined4 *)func_0x00aebb30();
    uStack_1c = *puVar5;
    puVar5 = (undefined4 *)func_0x00a2c540(&uStack_1c);
    *puVar5 = 1;
    return;
  }
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
  return;
}



void __thiscall FUN_00b173d0(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_4;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    iStack_4 = param_1;
    piVar2 = (int *)func_0x00aebb30();
    iStack_4 = *piVar2;
    piVar2 = (int *)func_0x00a2c540(&iStack_4);
    *piVar2 = *piVar2 + -1;
    pcVar1 = *(code **)(*param_2 + 0x7c);
    _guard_check_icall();
    uVar3 = (*pcVar1)();
    func_0x00b168b0(uVar3);
  }
  return;
}



undefined4 __thiscall FUN_00b178e0(undefined4 param_1,byte param_2)

{
  func_0x00b0ceb0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x74);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b17910(undefined4 param_1,byte param_2)

{
  func_0x00b0ceb0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x70);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b17940(undefined4 param_1,byte param_2)

{
  func_0x00993430();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x70);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00b189a0)
// WARNING: Removing unreachable block (ram,0x00b18af1)
// WARNING: Removing unreachable block (ram,0x00b18af5)
// WARNING: Removing unreachable block (ram,0x00b18b04)
// WARNING: Removing unreachable block (ram,0x00b18b07)
// WARNING: Removing unreachable block (ram,0x00b18b0b)
// WARNING: Removing unreachable block (ram,0x00b18b10)

void __thiscall FUN_00b18920(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f61b53;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_34 = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  uVar2 = *(uint *)(param_1 + 0x6c);
  iStack_8 = 0;
  if (uVar2 != 0) {
    if (0x3fffffff < uVar2) {
LAB_00b18bde:
      func_0x0046e700();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    func_0x00ad78b0(uVar7);
    puStack_34 = (undefined4 *)func_0x00ad7620(uVar2 * 4);
    puStack_30 = puStack_34 + uVar2;
  }
  piVar10 = (int *)**(int **)(param_1 + 0x68);
  cVar1 = *(char *)((int)piVar10 + 0xd);
  puVar11 = puStack_34;
  do {
    if (cVar1 != '\0') {
      pcVar4 = *(code **)(*(int *)(in_stack_00000010 + 0x14) + 8);
      _guard_check_icall();
      (*pcVar4)();
      pcVar4 = *(code **)(*(int *)(in_stack_00000010 + 0x14) + 8);
      _guard_check_icall();
      piVar10 = (int *)(*pcVar4)();
      func_0x00ad8460(*piVar10 + in_stack_00000014 * 4,puVar11,(int)puStack_34 - (int)puVar11 >> 2);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    func_0x00ad78b0(uVar7);
    iVar8 = func_0x00ad7620(0xc4);
    iStack_8._0_1_ = 1;
    if (iVar8 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x00ad78b0();
      iVar8 = func_0x00ad7620(0x1c);
      iStack_8._0_1_ = 2;
      if (iVar8 == 0) {
        uStack_14 = 0;
      }
      else {
        uStack_14 = func_0x00ae10c0(piVar10[6]);
      }
      iStack_8._0_1_ = 1;
      uVar9 = func_0x00b17f60(piVar10[5],*(undefined1 *)(*(int *)(piVar10[6] + 0x10) + 0x7c));
      uVar9 = func_0x00ae02d0(0x2e,uVar9,uStack_14);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (puStack_34 == puStack_30) {
      iVar8 = (int)puStack_34 - (int)puVar11 >> 2;
      if (iVar8 == 0x3fffffff) goto LAB_00b18bde;
      uStack_14 = (int)puStack_30 - (int)puVar11 >> 2;
      if (0x3fffffff - (uStack_14 >> 1) < uStack_14) {
        uStack_14 = 0x3fffffff;
      }
      else {
        uStack_14 = uStack_14 + (uStack_14 >> 1);
        if (uStack_14 < iVar8 + 1U) {
          uStack_14 = iVar8 + 1U;
        }
      }
      func_0x00ad78b0();
      puStack_38 = (undefined4 *)func_0x00ad7620(uStack_14 * 4);
      puStack_38[iVar8] = uVar9;
      puVar5 = puStack_38;
      for (; puVar11 != puStack_34; puVar11 = puVar11 + 1) {
        *puVar5 = *puVar11;
        puVar5 = puVar5 + 1;
      }
      puStack_34 = puStack_38 + iVar8 + 1;
      puStack_30 = puStack_38 + uStack_14;
    }
    else {
      *puStack_34 = uVar9;
      puStack_34 = puStack_34 + 1;
      puStack_38 = puVar11;
    }
    piVar3 = (int *)piVar10[2];
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar10 = piVar3;
      piVar3 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar3 + 0xd);
        piVar10 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    }
    else {
      cVar1 = *(char *)(piVar10[1] + 0xd);
      piVar6 = (int *)piVar10[1];
      piVar3 = piVar10;
      while ((piVar10 = piVar6, cVar1 == '\0' && (piVar3 == (int *)piVar10[2]))) {
        cVar1 = *(char *)(piVar10[1] + 0xd);
        piVar6 = (int *)piVar10[1];
        piVar3 = piVar10;
      }
    }
    cVar1 = *(char *)((int)piVar10 + 0xd);
    puVar11 = puStack_38;
  } while( true );
}



void FUN_00b18bf0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  switch(*(undefined4 *)(param_3 + 0x18)) {
  default:
    goto LAB_00b18c54;
  case 2:
    pcVar2 = "endInvocationInterlockNV";
    break;
  case 4:
    pcVar2 = "endInvocationInterlockARB";
  }
  uStack_8 = 0;
  uStack_4 = 0;
  uVar1 = func_0x00b75e40(pcVar2,&uStack_8,param_2,0x3fff);
  func_0x00aea780(param_5,uVar1);
LAB_00b18c54:
  return;
}



// WARNING: Removing unreachable block (ram,0x00b18d00)
// WARNING: Removing unreachable block (ram,0x00b18df4)
// WARNING: Removing unreachable block (ram,0x00b18df8)
// WARNING: Removing unreachable block (ram,0x00b18e07)
// WARNING: Removing unreachable block (ram,0x00b18e0a)
// WARNING: Removing unreachable block (ram,0x00b18e0e)
// WARNING: Removing unreachable block (ram,0x00b18e13)

void __thiscall FUN_00b18c80(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f61b7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_2c = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  uVar2 = *(uint *)(param_1 + 0x6c);
  uStack_8 = 0;
  if (uVar2 != 0) {
    if (0x3fffffff < uVar2) {
LAB_00b18eea:
      func_0x0046e700();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    func_0x00ad78b0(uVar7);
    puStack_2c = (undefined4 *)func_0x00ad7620(uVar2 * 4);
    puStack_28 = puStack_2c + uVar2;
  }
  piVar9 = (int *)**(int **)(param_1 + 0x68);
  cVar1 = *(char *)((int)piVar9 + 0xd);
  puVar10 = puStack_2c;
  do {
    if (cVar1 != '\0') {
      pcVar4 = *(code **)(*(int *)(in_stack_00000010 + 0x14) + 8);
      _guard_check_icall();
      (*pcVar4)();
      pcVar4 = *(code **)(*(int *)(in_stack_00000010 + 0x14) + 8);
      _guard_check_icall();
      piVar9 = (int *)(*pcVar4)();
      func_0x00ad8460(*piVar9 + in_stack_00000014 * 4,puVar10,(int)puStack_2c - (int)puVar10 >> 2);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    uVar8 = func_0x00b17f60(piVar9[5],*(undefined1 *)(*(int *)(piVar9[6] + 0x10) + 0x7c));
    uVar8 = func_0x00b763d0(piVar9[6],uVar8);
    if (puStack_2c == puStack_28) {
      iVar11 = (int)puStack_2c - (int)puVar10 >> 2;
      if (iVar11 == 0x3fffffff) goto LAB_00b18eea;
      uStack_14 = (int)puStack_28 - (int)puVar10 >> 2;
      if (0x3fffffff - (uStack_14 >> 1) < uStack_14) {
        uStack_14 = 0x3fffffff;
      }
      else {
        uStack_14 = uStack_14 + (uStack_14 >> 1);
        if (uStack_14 < iVar11 + 1U) {
          uStack_14 = iVar11 + 1U;
        }
      }
      func_0x00ad78b0();
      puStack_30 = (undefined4 *)func_0x00ad7620(uStack_14 * 4);
      puStack_30[iVar11] = uVar8;
      puVar5 = puStack_30;
      for (; puVar10 != puStack_2c; puVar10 = puVar10 + 1) {
        *puVar5 = *puVar10;
        puVar5 = puVar5 + 1;
      }
      puStack_2c = puStack_30 + iVar11 + 1;
      puStack_28 = puStack_30 + uStack_14;
    }
    else {
      *puStack_2c = uVar8;
      puStack_2c = puStack_2c + 1;
      puStack_30 = puVar10;
    }
    piVar3 = (int *)piVar9[2];
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar9 = piVar3;
      piVar3 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar3 + 0xd);
        piVar9 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    }
    else {
      cVar1 = *(char *)(piVar9[1] + 0xd);
      piVar6 = (int *)piVar9[1];
      piVar3 = piVar9;
      while ((piVar9 = piVar6, cVar1 == '\0' && (piVar3 == (int *)piVar9[2]))) {
        cVar1 = *(char *)(piVar9[1] + 0xd);
        piVar6 = (int *)piVar9[1];
        piVar3 = piVar9;
      }
    }
    cVar1 = *(char *)((int)piVar9 + 0xd);
    puVar10 = puStack_30;
  } while( true );
}



void FUN_00b18ef0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined1 *)(param_1 + 0x86c) = 1;
  switch(*(undefined4 *)(param_3 + 0x18)) {
  default:
    goto LAB_00b18f74;
  case 2:
    pcVar2 = "beginInvocationInterlockNV";
    break;
  case 3:
    pcVar2 = "beginFragmentShaderOrderingINTEL";
    break;
  case 4:
    pcVar2 = "beginInvocationInterlockARB";
  }
  uStack_8 = 0;
  uStack_4 = 0;
  uVar1 = func_0x00b75e40(pcVar2,&uStack_8,param_2,0x3fff);
  func_0x00aea780(param_5,uVar1);
LAB_00b18f74:
  return;
}



uint __thiscall FUN_00b19c00(int *param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(ushort *)(param_3 + 0xb8) - 0x111;
  if ((ushort)uVar4 < 2) {
    pcVar2 = *(code **)(*(int *)(param_3 + 0xbc) + 8);
    _guard_check_icall(uVar3);
    piVar5 = (int *)(*pcVar2)();
    pcVar2 = *(code **)(**(int **)*piVar5 + 0x48);
    _guard_check_icall();
    piVar6 = (int *)(*pcVar2)();
    uVar1 = *(ushort *)(param_3 + 0xb8);
    uVar4 = (uint)uVar1;
    if (uVar1 == 0x111) {
      pcVar2 = *(code **)(*param_1 + 0x70);
      _guard_check_icall(piVar6);
      uVar3 = (*pcVar2)();
      *unaff_FS_OFFSET = iStack_10;
      return uVar3 & 0xffffff00;
    }
    if (uVar1 == 0x112) {
      func_0x00ad78b0();
      iVar7 = func_0x00ad7620(0xa0);
      uStack_8 = 0;
      if (iVar7 == 0) {
        uVar10 = 0;
      }
      else {
        pcVar2 = *(code **)(*piVar6 + 0x7c);
        _guard_check_icall();
        iVar7 = (*pcVar2)();
        uVar10 = *(undefined4 *)(iVar7 + 4);
        pcVar2 = *(code **)(*piVar6 + 0x7c);
        _guard_check_icall();
        piVar8 = (int *)(*pcVar2)();
        iVar7 = *piVar8;
        if (iVar7 == 0x54) {
          uVar9 = 1;
        }
        else if (iVar7 == 0x55) {
          uVar9 = 3;
        }
        else if (iVar7 == 0x56) {
          uVar9 = 4;
        }
        else {
          uVar9 = 0;
        }
        uVar10 = func_0x00ad8ab0(uVar9,uVar10,0,4,1);
      }
      uStack_8 = 0xffffffff;
      uVar10 = func_0x00b766d0(param_1[8],uVar10);
      pcVar2 = *(code **)(**(int **)(*piVar5 + 4) + 0xc);
      _guard_check_icall();
      uVar9 = (*pcVar2)();
      piVar5 = (int *)func_0x00b76550(uVar10,uVar9);
      pcVar2 = *(code **)(*piVar5 + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
      func_0x00ade110(piVar5);
      pcVar2 = *(code **)(*param_1 + 0x74);
      _guard_check_icall(piVar6,uVar10);
      uVar3 = (*pcVar2)();
      *unaff_FS_OFFSET = iStack_10;
      return uVar3 & 0xffffff00;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return CONCAT31((int3)(uVar4 >> 8),1);
}



undefined4 __thiscall FUN_00b19e00(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  puVar2 = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)*puVar2 + 0xc);
  _guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar3 + 0x7c);
  _guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  if (2 < *piVar4 - 0x54U) {
    return 1;
  }
  pcVar1 = *(code **)(*piVar3 + 0x48);
  _guard_check_icall();
  uVar5 = (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall(uVar5);
  (*pcVar1)();
  return 0;
}



void __thiscall FUN_00b19e90(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 auStack_a4 [7];
  int iStack_88;
  int iStack_3c;
  undefined8 uStack_38;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61d33;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_1c = param_1;
  func_0x00b174c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x20),
                  *(undefined4 *)(param_1 + 0x5c),param_2[6],uVar2);
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  puVar5 = puStack_28;
  puVar9 = (undefined4 *)(iVar3 + 0x14);
  puVar8 = auStack_a4;
  for (iVar7 = 0x1a; iVar3 = iStack_1c, iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar9 = (undefined4 *)(iStack_1c + 0x68);
  puStack_18 = puVar5;
  iStack_20 = iStack_24;
  iStack_30 = iStack_24;
  iStack_14 = iStack_88;
  puVar4 = (undefined8 *)func_0x0092d560(auStack_2c,&uStack_38);
  uStack_38 = *puVar4;
  if ((*(char *)(*(int *)(puVar4 + 1) + 0xd) != '\0') ||
     (iStack_88 < *(int *)(*(int *)(puVar4 + 1) + 0x10))) {
    if (*(int *)(iVar3 + 0x6c) == 0x9249249) {
      func_0x0048d790();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = *puVar9;
    uStack_8 = 0;
    iStack_24 = 0;
    puStack_28 = puVar9;
    puVar5 = (undefined4 *)func_0x008ab47d(0x1c);
    uStack_8 = 0xffffffff;
    puVar5[4] = iStack_14;
    puVar5[5] = puStack_18;
    puVar5[6] = iStack_20;
    *puVar5 = uVar6;
    puVar5[1] = uVar6;
    puVar5[2] = uVar6;
    *(undefined2 *)(puVar5 + 3) = 0;
    func_0x008b95c0((undefined4)uStack_38,uStack_38._4_4_,puVar5);
  }
  func_0x00ad78b0();
  iStack_3c = func_0x00ad7620(0x24);
  uStack_8 = 1;
  if (iStack_3c == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00ad78b0();
    iStack_24 = func_0x00ad7620(0x1c);
    uStack_8._0_1_ = 2;
    if (iStack_24 == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = func_0x00ae10c0(puStack_18);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uVar6 = func_0x00ae08a0(&iStack_14,&iStack_10);
  }
  uStack_8 = 0xffffffff;
  func_0x00ade110(uVar6);
  uVar6 = func_0x00b76480(iStack_20,1);
  func_0x00ade720(uVar6);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b1a040(int param_1,int *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 auStack_a8 [7];
  undefined4 *puStack_8c;
  undefined1 auStack_40 [12];
  undefined8 uStack_34;
  int iStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61d8e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_28 = param_1;
  if (*(int *)(param_1 + 100) == 0) {
    func_0x00ad78b0(uVar4);
    puStack_18 = (undefined4 *)func_0x00ad7620(0xa0);
    uStack_8 = 0;
    if (puStack_18 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = func_0x00ad8ab0(3,3,1,2,1);
    }
    uStack_8 = 0xffffffff;
    uVar5 = func_0x00b766d0(*(undefined4 *)(param_1 + 0x20),uVar5);
    *(undefined4 *)(param_1 + 100) = uVar5;
    uVar5 = func_0x00b76480(uVar5);
    func_0x00ade110(uVar5);
  }
  iStack_14 = func_0x00b186d0(param_2);
  puStack_18 = (undefined4 *)(param_1 + 0x68);
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  iStack_20 = iStack_14;
  puVar8 = (undefined4 *)(iVar6 + 0x14);
  puVar10 = auStack_a8;
  for (iVar9 = 0x1a; puVar3 = puStack_18, puVar2 = puStack_8c, iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puStack_24 = puStack_8c;
  puVar7 = (undefined8 *)func_0x0092d560(auStack_40,&puStack_24);
  uStack_34 = *puVar7;
  if ((*(char *)(*(int *)(puVar7 + 1) + 0xd) != '\0') ||
     ((int)puVar2 < *(int *)(*(int *)(puVar7 + 1) + 0x10))) {
    if (puVar3[1] == 0xaaaaaaa) {
      func_0x0048d790();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = *puVar3;
    puStack_24 = puVar3;
    uStack_8 = 1;
    iStack_20 = 0;
    puVar8 = (undefined4 *)func_0x008ab47d(0x18);
    uStack_8 = 0xffffffff;
    puVar8[4] = puStack_8c;
    puVar8[5] = iStack_14;
    *puVar8 = uVar5;
    puVar8[1] = uVar5;
    puVar8[2] = uVar5;
    *(undefined2 *)(puVar8 + 3) = 0;
    func_0x008b95c0((undefined4)uStack_34,uStack_34._4_4_,puVar8);
  }
  func_0x00ad78b0();
  puStack_18 = (undefined4 *)func_0x00ad7620(0x24);
  uStack_8 = 2;
  if (puStack_18 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    func_0x00ad78b0();
    iStack_20 = func_0x00ad7620(0x1c);
    uStack_8._0_1_ = 3;
    if (iStack_20 == 0) {
      uStack_1c = 0;
    }
    else {
      uStack_1c = func_0x00ae10c0(iStack_14);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    uVar5 = func_0x00ae08a0(&uStack_1c,&puStack_18);
  }
  uStack_8 = 0xffffffff;
  func_0x00ade720(uVar5,1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b1a220(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 auStack_8c [7];
  int iStack_70;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61dde;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall(uVar2);
  iVar3 = (*pcVar1)();
  puVar4 = (undefined4 *)(iVar3 + 0x14);
  puVar7 = auStack_8c;
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  iStack_14 = iStack_70;
  func_0x0092d560(auStack_24,&iStack_14);
  if ((*(char *)(iStack_1c + 0xd) != '\0') ||
     (iVar3 = iStack_1c, iStack_70 < *(int *)(iStack_1c + 0x10))) {
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  iStack_14 = **(int **)(iVar3 + 0x14);
  func_0x00ad78b0();
  puVar4 = (undefined4 *)func_0x00ad7620(0xbc);
  uStack_8 = 0;
  puStack_18 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    func_0x00ae0980(iStack_14);
    *puVar4 = sh::TIntermConstantUnion::vftable;
    puVar4[0x2e] = uVar5;
  }
  uStack_8 = 0xffffffff;
  func_0x00ad78b0();
  puStack_18 = (undefined4 *)func_0x00ad7620(0xc4);
  uStack_8 = 2;
  if (puStack_18 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    func_0x00ad78b0();
    iStack_14 = func_0x00ad7620(0x1c);
    uStack_8._0_1_ = 3;
    if (iStack_14 == 0) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      uVar5 = func_0x00ae02d0(0x2d,0,puVar4);
    }
    else {
      uVar5 = func_0x00ae10c0(*(undefined4 *)(param_1 + 0x68));
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      uVar5 = func_0x00ae02d0(0x2d,uVar5,puVar4);
    }
  }
  uStack_8 = 0xffffffff;
  uVar5 = func_0x00b17970(uVar5,1);
  func_0x00ade720(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b1a380(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 auStack_8c [7];
  int iStack_70;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61e10;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_2 + 0x7c);
  iStack_18 = param_1;
  _guard_check_icall(uVar2);
  iVar3 = (*pcVar1)();
  puVar6 = (undefined4 *)(iVar3 + 0x14);
  puVar7 = auStack_8c;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iStack_14 = iStack_70;
  func_0x0092d560(auStack_24,&iStack_14);
  if ((*(char *)(iStack_1c + 0xd) != '\0') || (iStack_70 < *(int *)(iStack_1c + 0x10))) {
    iStack_1c = *(int *)(param_1 + 0x68);
  }
  uVar4 = *(undefined4 *)(iStack_1c + 0x18);
  func_0x00ad78b0();
  iStack_14 = func_0x00ad7620(0x1c);
  uStack_8 = 0;
  if (iStack_14 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = func_0x00ae10c0(uVar4);
  }
  uStack_8 = 0xffffffff;
  uVar4 = func_0x00b17970(uVar4);
  func_0x00ade720(uVar4,1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b1a460(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 auStack_90 [7];
  int iStack_74;
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61e4b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall(uVar2);
  iVar3 = (*pcVar1)();
  puVar7 = (undefined4 *)(iVar3 + 0x14);
  puVar8 = auStack_90;
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iStack_14 = iStack_74;
  func_0x0092d560(auStack_28,&iStack_14);
  if ((*(char *)((int)piStack_20 + 0xd) != '\0') || (iStack_74 < *(int *)((int)piStack_20 + 0x10)))
  {
    piStack_20 = *(int **)(param_1 + 0x68);
  }
  uVar5 = *(undefined4 *)((int)piStack_20 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  func_0x00ad78b0();
  iStack_14 = func_0x00ad7620(0x1c);
  uStack_8 = 0;
  if (iStack_14 == 0) {
    uStack_1c = 0;
  }
  else {
    uStack_1c = func_0x00ae10c0(uVar5);
  }
  uStack_8 = 0xffffffff;
  func_0x00ad78b0();
  iStack_14 = func_0x00ad7620(0x1c);
  uStack_8 = 1;
  if (iStack_14 == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = func_0x00ae10c0(*(undefined4 *)(param_1 + 100));
  }
  puStack_24 = &uStack_1c;
  piStack_20 = &iStack_14;
  uStack_8 = 0xffffffff;
  uVar4 = func_0x00b75e40("imageLoad",&puStack_24,uVar4,0x136);
  uVar5 = func_0x00b199b0(uVar4,param_2,uVar5);
  func_0x00ade720(uVar5,1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b1a5a0(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 auStack_94 [7];
  int iStack_78;
  undefined4 uStack_6c;
  int iStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  int iStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_24 = 0xffffffff;
  puStack_28 = &DAT_00f61ea9;
  iStack_2c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)auStack_20;
  *unaff_FS_OFFSET = (int)&iStack_2c;
  pcVar1 = *(code **)(*param_2 + 0x7c);
  iStack_c = param_1;
  _guard_check_icall(uVar2);
  iVar3 = (*pcVar1)();
  puVar4 = (undefined4 *)(iVar3 + 0x14);
  puVar8 = auStack_94;
  for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  iStack_8 = iStack_78;
  func_0x0092d560(auStack_20,&iStack_8);
  if ((*(char *)(iStack_18 + 0xd) != '\0') ||
     (iVar3 = iStack_18, iStack_78 < *(int *)(iStack_18 + 0x10))) {
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  iVar7 = **(int **)(iVar3 + 0x14);
  iStack_8 = iVar7;
  func_0x00ad78b0();
  puVar4 = (undefined4 *)func_0x00ad7620(0xbc);
  uStack_24 = 0;
  puStack_10 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    func_0x00ae0980(iVar7);
    *puVar4 = sh::TIntermConstantUnion::vftable;
    puVar4[0x2e] = uVar5;
  }
  uStack_24 = 0xffffffff;
  func_0x00ad78b0();
  puStack_10 = (undefined4 *)func_0x00ad7620(0xc4);
  uStack_24 = 2;
  if (puStack_10 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    func_0x00ad78b0();
    iStack_14 = func_0x00ad7620(0x1c);
    uStack_24._0_1_ = 3;
    if (iStack_14 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = func_0x00ae10c0(*(undefined4 *)(iStack_c + 0x68));
    }
    uStack_24 = CONCAT31(uStack_24._1_3_,2);
    uVar5 = func_0x00ae02d0(0x2d,uVar5,puVar4);
  }
  uStack_24 = 0xffffffff;
  puVar4 = (undefined4 *)(iStack_8 + 0x14);
  puVar8 = auStack_94;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  func_0x00b18570(param_3,uStack_6c);
  func_0x00ad78b0();
  iStack_14 = func_0x00ad7620(0xc4);
  uStack_24 = 4;
  if (iStack_14 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = func_0x00b17f60(param_3,*(undefined1 *)(iStack_8 + 0x7c));
    uVar5 = func_0x00ae02d0(0x2e,uVar5,uVar6);
  }
  uStack_24 = 0xffffffff;
  func_0x00ade720(uVar5,1);
  *unaff_FS_OFFSET = iStack_2c;
  return;
}



void __thiscall FUN_00b1a760(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  int iStack_78;
  int aiStack_74 [3];
  undefined4 auStack_68 [7];
  int iStack_4c;
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  puVar5 = (undefined4 *)(iVar2 + 0x14);
  puVar6 = auStack_68;
  for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iStack_78 = iStack_4c;
  func_0x0092d560(aiStack_74,&iStack_78);
  if ((*(char *)(aiStack_74[0] + 0xd) != '\0') ||
     (iVar2 = aiStack_74[0], iStack_4c < *(int *)(aiStack_74[0] + 0x10))) {
    iVar2 = *(int *)(param_1 + 0x68);
  }
  uVar3 = func_0x00b17f60(unaff_retaddr,
                          *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x18) + 0x10) + 0x7c));
  uVar3 = func_0x00b763d0(*(undefined4 *)(iVar2 + 0x18),uVar3,1);
  func_0x00ade720(uVar3);
  return;
}



void __thiscall FUN_00b1a800(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 auStack_c0 [7];
  int iStack_a4;
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  uint *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f61efb;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_2c = param_3;
  piStack_28 = param_2;
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall(uStack_14);
  iVar2 = (*pcVar1)();
  puVar6 = (undefined4 *)(iVar2 + 0x14);
  puVar7 = auStack_c0;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iStack_24 = iStack_a4;
  func_0x0092d560(&uStack_20,&iStack_24);
  if ((*(char *)(iStack_18 + 0xd) != '\0') || (iStack_a4 < *(int *)(iStack_18 + 0x10))) {
    iStack_18 = *(int *)(param_1 + 0x68);
  }
  uVar4 = *(undefined4 *)(iStack_18 + 0x14);
  uVar3 = func_0x00b18190(uStack_2c,piStack_28,uVar4);
  uStack_30 = 0;
  uStack_2c = 0;
  piStack_28 = (int *)func_0x00b75e40("memoryBarrierImage",&uStack_30,
                                      *(undefined4 *)(param_1 + 0x20),0x136);
  func_0x00adfe20(&piStack_28,&iStack_24);
  uStack_8 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  iStack_24 = func_0x00b75e40("memoryBarrierImage",&uStack_38,*(undefined4 *)(param_1 + 0x20),0x136)
  ;
  func_0x00adfe20(&iStack_24,&uStack_20);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00ade270(auStack_58,auStack_4c);
  uStack_2c = *(undefined4 *)(param_1 + 0x20);
  uStack_8 = 0xffffffff;
  func_0x00ad78b0();
  iStack_24 = func_0x00ad7620(0x1c);
  uStack_8 = 2;
  if (iStack_24 == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = func_0x00ae10c0(uVar4);
  }
  uStack_8 = 0xffffffff;
  func_0x00ad78b0();
  iStack_24 = func_0x00ad7620(0x1c);
  uStack_8 = 3;
  if (iStack_24 == 0) {
    uStack_1c = 0;
  }
  else {
    uStack_1c = func_0x00ae10c0(*(undefined4 *)(param_1 + 100));
  }
  puStack_40 = &uStack_20;
  puStack_3c = &uStack_14;
  uStack_8 = 0xffffffff;
  iStack_18 = uVar3;
  uVar4 = func_0x00b75e40("imageStore",&puStack_40,uStack_2c,0x136,1);
  func_0x00ade720(uVar4);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00b1ad10(undefined4 param_1,byte param_2)

{
  func_0x00b1ac70();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x68);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b1b680(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar3 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar3 * 4);
  }
  cVar2 = func_0x00b77d90(param_3,uVar4);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*param_3 + 0x7c);
    _guard_check_icall();
    iVar5 = (*pcVar1)();
    if ((1 < *(byte *)(iVar5 + 0x7c)) && (*(char *)(iVar5 + 0x7d) == '\x01')) {
      func_0x00b1ae80(param_3,0,1);
      return 1;
    }
    func_0x00b1ae80(param_3,1,0);
  }
  return 1;
}



uint __thiscall FUN_00b1b700(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f61fdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puVar9 = *(undefined4 **)(param_1 + 0x5c);
  uStack_8 = 0;
  iStack_14 = param_1;
  if (puVar9 == *(undefined4 **)(param_1 + 0x60)) {
    func_0x00b1aa30(puVar9,&uStack_40,uVar6);
  }
  else {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0xc;
  }
  uStack_8 = 0xffffffff;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  piVar7 = (int *)(*pcVar1)();
  piVar8 = (int *)piVar7[1];
  puVar9 = (undefined4 *)*piVar7;
  piStack_18 = piVar8;
  if (puVar9 != piVar8) {
    do {
      piStack_1c = (int *)*puVar9;
      pcStack_28 = *(code **)(*piStack_1c + 4);
      _guard_check_icall(iStack_14);
      (*pcStack_28)();
      iVar2 = *(int *)(iStack_14 + 0x5c);
      piStack_30 = *(int **)(iVar2 + -8);
      piStack_20 = (int *)(iVar2 + -0xc);
      if (piStack_30 == *(int **)(iVar2 + -4)) {
        piStack_2c = (int *)((int)piStack_30 - *piStack_20 >> 2);
        if (piStack_2c == (int *)0x3fffffff) {
          func_0x0046e700();
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        pcStack_28 = (code *)((int)piStack_2c + 1);
        uVar6 = (int)*(int **)(iVar2 + -4) - *piStack_20 >> 2;
        if (0x3fffffff - (uVar6 >> 1) < uVar6) {
          pcStack_24 = (code *)0x3fffffff;
        }
        else {
          pcStack_24 = (code *)((uVar6 >> 1) + uVar6);
          if (pcStack_24 < pcStack_28) {
            pcStack_24 = pcStack_28;
          }
        }
        func_0x00ad78b0();
        iStack_34 = (int)pcStack_24 << 2;
        pcStack_24 = (code *)func_0x00ad7620(iStack_34);
        piStack_2c = (int *)((int)pcStack_24 + piStack_2c * 4);
        *piStack_2c = (int)piStack_1c;
        piStack_1c = (int *)piStack_20[1];
        piVar7 = (int *)*piStack_20;
        piVar5 = (int *)pcStack_24;
        if (piStack_30 == piStack_1c) {
          for (; piVar3 = piStack_30, piVar7 != piStack_1c; piVar7 = piVar7 + 1) {
            *piVar5 = *piVar7;
            piVar5 = piVar5 + 1;
            piVar8 = piStack_18;
          }
        }
        else {
          for (; piVar7 != piStack_30; piVar7 = piVar7 + 1) {
            *piVar5 = *piVar7;
            piVar5 = piVar5 + 1;
          }
          piVar3 = (int *)piStack_20[1];
          piVar8 = piStack_18;
          if (piStack_30 != piVar3) {
            piVar7 = piStack_30;
            do {
              *(int *)((int)piStack_2c + (4 - (int)piStack_30) + (int)piVar7) = *piVar7;
              piVar7 = piVar7 + 1;
            } while (piVar7 != piVar3);
          }
        }
        piStack_30 = piVar3;
        *piStack_20 = (int)pcStack_24;
        piStack_20[1] = (int)((int)pcStack_24 + pcStack_28 * 4);
        piStack_20[2] = iStack_34 + (int)pcStack_24;
      }
      else {
        *piStack_30 = (int)piStack_1c;
        *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 4;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != piVar8);
  }
  piStack_18 = (int *)(param_3 + 0x14);
  iVar2 = *(int *)(*(int *)(iStack_14 + 0x5c) + -8);
  iVar4 = *(int *)(*(int *)(iStack_14 + 0x5c) + -0xc);
  pcVar1 = *(code **)(*piStack_18 + 8);
  _guard_check_icall();
  piVar8 = (int *)(*pcVar1)();
  if ((uint)(piVar8[1] - *piVar8 >> 2) < (uint)(iVar2 - iVar4 >> 2)) {
    pcVar1 = *(code **)(*piStack_18 + 8);
    _guard_check_icall();
    piVar8 = (int *)(*pcVar1)();
    if (*piVar8 != piVar8[1]) {
      piVar8[1] = *piVar8;
    }
    iVar2 = *(int *)(iStack_14 + 0x5c);
    pcVar1 = *(code **)(*piStack_18 + 8);
    _guard_check_icall();
    (*pcVar1)();
    func_0x00ae12f0(iVar2 + -0xc);
  }
  iVar2 = *(int *)(iStack_14 + 0x5c);
  piVar8 = (int *)(iVar2 + -0xc);
  if (*piVar8 != 0) {
    *piVar8 = 0;
    *(undefined4 *)(iVar2 + -8) = 0;
    *(undefined4 *)(iVar2 + -4) = 0;
  }
  *(int *)(iStack_14 + 0x5c) = *(int *)(iStack_14 + 0x5c) + -0xc;
  *unaff_FS_OFFSET = iStack_10;
  return (uint)piVar8 & 0xffffff00;
}



undefined4 __thiscall FUN_00b1bbb0(undefined4 param_1,byte param_2)

{
  func_0x008c25a0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x78);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b1c440(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f611ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall(uVar3);
  piVar4 = (int *)(*pcVar1)();
  if (1 < (uint)(piVar4[1] - *piVar4 >> 2)) {
    uVar5 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar5 < 2) {
      piStack_14 = (int *)0x0;
    }
    else {
      piStack_14 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar5 * 4);
    }
    pcVar1 = *(code **)(*piStack_14 + 0x1c);
    _guard_check_icall(uVar3);
    iStack_1c = (*pcVar1)();
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uVar3 = 0;
    uStack_8 = 0;
    piStack_14 = (int *)0x0;
    iStack_18 = iStack_1c;
    if (piVar4[1] - *piVar4 >> 2 != 0) {
      do {
        func_0x00b1bd70(piVar4,uVar3,&uStack_28,&piStack_14);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(piVar4[1] - *piVar4 >> 2));
    }
    puVar2 = *(uint **)(param_1 + 0x18);
    if (puVar2 == *(uint **)(param_1 + 0x1c)) {
      func_0x00b13350(puVar2,&iStack_1c,&param_3,&uStack_28);
    }
    else {
      *puVar2 = -(uint)(iStack_18 != 0) & iStack_18 + 0x14U;
      puVar2[1] = param_3;
      puVar2[2] = uStack_28;
      puVar2[3] = uStack_24;
      puVar2[4] = uStack_20;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
    }
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void FUN_00b1c590(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iStack_18;
  uint uStack_c;
  undefined1 auStack_8 [8];
  
  uStack_c = *(uint *)(param_1 + 0x18);
  iStack_18 = ((((uStack_c & 0xff ^ 0x811c9dc5) * 0x1000193 ^ uStack_c >> 8 & 0xff) * 0x1000193 ^
               uStack_c >> 0x10 & 0xff) * 0x1000193 ^ uStack_c >> 0x18) * 0x1000193;
  iVar2 = func_0x00887e10(auStack_8,&uStack_c);
  if (*(int *)(iVar2 + 4) != 0) {
    puVar3 = (undefined4 *)func_0x00b11550(&iStack_18);
    pcVar1 = *(code **)(*(int *)*puVar3 + 0x58);
    _guard_check_icall();
    uVar4 = (*pcVar1)();
    func_0x00ade5b0(uVar4);
  }
  return;
}



undefined4 * __thiscall FUN_00b1c810(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TLValueTrackingTraverser::vftable;
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x70);
  }
  return param_1;
}



void __thiscall FUN_00b1c9d0(int param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6214e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_1c = param_1;
  func_0x00ade0e0(param_2,uVar3);
  iStack_8 = 0;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  *(bool *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60) == 0;
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (piStack_24 = *(int **)(param_2 + 0x18), piStack_24 != (int *)0x0)) {
    pcVar2 = *(code **)(*piStack_24 + 4);
    _guard_check_icall(param_1);
    (*pcVar2)();
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    piStack_24 = *(int **)(param_2 + 0x1c);
    if (piStack_24 != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_24 + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
    }
    if ((*(char *)(param_1 + 0x5c) == '\0') &&
       (piStack_24 = *(int **)(param_2 + 0x20), piStack_24 != (int *)0x0)) {
      pcVar2 = *(code **)(*piStack_24 + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 100);
  uVar6 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  uStack_18 = uVar6;
  if (*(char *)(param_1 + 0x5c) == '\0') goto LAB_00b1cfeb;
  uVar4 = func_0x00b766d0(*(undefined4 *)(param_1 + 0x20),&DAT_01295e90);
  *(undefined4 *)(param_1 + 100) = uVar4;
  piStack_20 = *(int **)(param_2 + 0x1c);
  *(int **)(param_1 + 0x68) = piStack_20;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x14);
  if (iVar5 == 1) {
    pcVar2 = *(code **)(*piStack_20 + 0x48);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      uVar6 = uStack_18;
      goto LAB_00b1cfeb;
    }
    pcVar2 = *(code **)(**(int **)(param_1 + 0x68) + 0x10);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    uVar4 = *(undefined4 *)(param_1 + 0x68);
    uVar6 = *(undefined4 *)(param_1 + 100);
    if (iVar5 == 0) {
      uVar6 = func_0x00b76550(uVar6,uVar4);
      func_0x00ade110(uVar6);
      piStack_20 = (int *)func_0x00b1c840(param_2,&cStack_11);
      if (cStack_11 == '\0') {
        pcVar2 = *(code **)(piStack_20[5] + 8);
        _guard_check_icall();
        (*pcVar2)();
        pcVar2 = *(code **)(**(int **)(iStack_1c + 0x68) + 0x58);
        _guard_check_icall();
        uVar6 = (*pcVar2)();
        piStack_24 = (int *)func_0x00b763d0(*(undefined4 *)(iStack_1c + 100),uVar6);
        func_0x00ade4a0(&piStack_24);
        param_1 = iStack_1c;
      }
      *(int **)(param_2 + 0x24) = piStack_20;
      uVar6 = func_0x00b76660(*(undefined4 *)(param_1 + 100));
      *(undefined4 *)(param_2 + 0x1c) = uVar6;
      uVar6 = uStack_18;
      goto LAB_00b1cfeb;
    }
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 0) goto LAB_00b1cfeb;
      if (piStack_20 == (int *)0x0) {
        uVar6 = func_0x00b75d60(1);
        *(undefined4 *)(param_1 + 0x68) = uVar6;
      }
      func_0x00ad78b0();
      piStack_24 = (int *)func_0x00ad7620(0x28);
      if (piStack_24 == (int *)0x0) {
        piStack_24 = (int *)0x0;
      }
      else {
        piStack_24[3] = 0;
        piStack_24[1] = 0;
        piStack_24[4] = 0;
        piStack_24[2] = 0;
        piStack_24[5] = (int)sh::TIntermAggregateBase::vftable;
        *piStack_24 = (int)sh::TIntermBlock::vftable;
        piStack_24[5] = (int)sh::TIntermBlock::vftable;
        piStack_24[6] = 0;
        piStack_24[7] = 0;
        piStack_24[8] = 0;
        *(undefined1 *)(piStack_24 + 9) = 0;
      }
      piStack_20 = piStack_24 + 5;
      pcVar2 = *(code **)(*piStack_20 + 8);
      _guard_check_icall();
      piStack_20 = (int *)(*pcVar2)();
      if (*(int *)(param_2 + 0x18) != 0) {
        iStack_28 = *(int *)(param_2 + 0x18);
        func_0x00ade4a0(&iStack_28);
      }
      pcVar2 = *(code **)(**(int **)(param_1 + 0x68) + 0x48);
      _guard_check_icall();
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(**(int **)(param_1 + 0x68) + 0x10);
        _guard_check_icall();
        iVar5 = (*pcVar2)();
        if (iVar5 == 0) {
          iStack_28 = func_0x00b76550(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68)
                                     );
          func_0x00ade4a0(&iStack_28);
          piStack_20 = (int *)func_0x00b1c840(param_2,&cStack_11);
          if (cStack_11 == '\0') {
            piVar7 = piStack_20 + 5;
            if (*(int *)(param_2 + 0x20) != 0) {
              pcVar2 = *(code **)(*piVar7 + 8);
              _guard_check_icall();
              (*pcVar2)();
              iStack_28 = *(int *)(param_2 + 0x20);
              func_0x00ade4a0(&iStack_28);
            }
            pcVar2 = *(code **)(*piVar7 + 8);
            _guard_check_icall();
            (*pcVar2)();
            pcVar2 = *(code **)(**(int **)(iStack_1c + 0x68) + 0x58);
            _guard_check_icall();
            uVar6 = (*pcVar2)();
            iStack_28 = func_0x00b763d0(*(undefined4 *)(iStack_1c + 100),uVar6);
            func_0x00ade4a0(&iStack_28);
            param_1 = iStack_1c;
          }
          func_0x00ad78b0();
          iStack_28 = func_0x00ad7620(0x28);
          iStack_8._0_1_ = 3;
          if (iStack_28 == 0) {
            iStack_1c = 0;
          }
          else {
            uVar6 = func_0x00b76660(*(undefined4 *)(param_1 + 100));
            iStack_1c = func_0x00ae0bb0(1,0,uVar6,0,piStack_20);
          }
        }
        else {
          iStack_28 = func_0x00b76550(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68)
                                     );
          func_0x00ade4a0(&iStack_28);
          piVar7 = (int *)func_0x00b1c840(param_2,&cStack_11);
          piStack_20 = piVar7;
          if ((cStack_11 == '\0') && (*(int *)(param_2 + 0x20) != 0)) {
            pcVar2 = *(code **)(piVar7[5] + 8);
            _guard_check_icall();
            (*pcVar2)();
            iStack_28 = *(int *)(param_2 + 0x20);
            func_0x00ade4a0(&iStack_28);
          }
          func_0x00ad78b0();
          iStack_28 = func_0x00ad7620(0x28);
          iStack_8._0_1_ = 2;
          if (iStack_28 == 0) goto LAB_00b1cdea;
          uVar6 = func_0x00b76660(*(undefined4 *)(param_1 + 100));
          iStack_1c = func_0x00ae0bb0(1,0,uVar6,0,piVar7);
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
      }
      else {
        piVar7 = (int *)func_0x00b1c840(param_2,&cStack_11);
        piStack_20 = piVar7;
        if ((cStack_11 == '\0') && (*(int *)(param_2 + 0x20) != 0)) {
          pcVar2 = *(code **)(piVar7[5] + 8);
          _guard_check_icall();
          (*pcVar2)();
          iStack_28 = *(int *)(param_2 + 0x20);
          func_0x00ade4a0(&iStack_28);
        }
        func_0x00ad78b0();
        iStack_28 = func_0x00ad7620(0x28);
        iStack_8._0_1_ = 1;
        if (iStack_28 == 0) {
LAB_00b1cdea:
          iStack_1c = 0;
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
        else {
          iStack_1c = func_0x00ae0bb0(1,0,*(undefined4 *)(param_1 + 0x68),0,piVar7);
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
      }
      piVar7 = piStack_24;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      pcVar2 = *(code **)(piStack_24[5] + 8);
      _guard_check_icall();
      (*pcVar2)();
      iStack_28 = iStack_1c;
      func_0x00ade4a0(&iStack_28);
      func_0x00ade720(piVar7,1);
      uVar6 = uStack_18;
      goto LAB_00b1cfeb;
    }
    pcVar2 = *(code **)(*piStack_20 + 0x48);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      uVar6 = uStack_18;
      goto LAB_00b1cfeb;
    }
    pcVar2 = *(code **)(**(int **)(param_1 + 0x68) + 0x10);
    _guard_check_icall();
    iVar5 = (*pcVar2)();
    uVar6 = *(undefined4 *)(param_1 + 100);
    if (iVar5 == 0) {
      uVar6 = func_0x00b76480(uVar6);
      func_0x00ade110(uVar6);
      piStack_20 = (int *)func_0x00b1c840(param_2,&cStack_11);
      if (cStack_11 == '\0') {
        pcVar2 = *(code **)(piStack_20[5] + 8);
        _guard_check_icall();
        (*pcVar2)();
        piStack_24 = (int *)func_0x00b763d0(*(undefined4 *)(param_1 + 100),
                                            *(undefined4 *)(param_1 + 0x68));
        func_0x00ade4a0(&piStack_24);
      }
      *(int **)(param_2 + 0x24) = piStack_20;
      uVar6 = func_0x00b76660(*(undefined4 *)(param_1 + 100));
      *(undefined4 *)(param_2 + 0x1c) = uVar6;
      uVar6 = uStack_18;
      goto LAB_00b1cfeb;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x68);
  }
  uVar6 = func_0x00b76550(uVar6,uVar4);
  func_0x00ade110(uVar6);
  uVar6 = func_0x00b76660(*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar6 = uStack_18;
LAB_00b1cfeb:
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_00ade830(param_1);
  }
  *(undefined8 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint __thiscall FUN_00b1d030(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)(param_1 + 0x5c) == '\0')) {
    uVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar1 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar1 * 4);
    }
    uVar1 = func_0x00b77d90(param_3,uVar2);
    *(char *)(param_1 + 0x5c) = (char)uVar1;
    return uVar1 ^ 1;
  }
  return in_EAX & 0xffffff00;
}



uint __thiscall FUN_00b1d080(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)(param_1 + 0x5c) == '\0')) {
    if ((*(char *)(param_1 + 0x58) != '\0') || (uStack_4 = 0, *(char *)(param_1 + 0x59) != '\0')) {
      uStack_4 = 1;
    }
    uVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar1 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar1 * 4);
    }
    uVar1 = func_0x00b77fc0(param_3,uVar2,uStack_4);
    *(char *)(param_1 + 0x5c) = (char)uVar1;
    return uVar1 ^ 1;
  }
  return in_EAX & 0xffffff00;
}



undefined4 __thiscall FUN_00b1d0e0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f62185;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((short)param_3[5] == 6) &&
     ((*(int *)(param_1 + 0x68) != 0 || (*(int *)(param_1 + 0x6c) != 0)))) {
    piStack_18 = (int *)(param_1 + 0x68);
    uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar3 < 2) {
      piStack_14 = (int *)0x0;
    }
    else {
      piStack_14 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar3 * 4);
    }
    pcVar1 = *(code **)(*piStack_14 + 0x1c);
    _guard_check_icall(uVar2);
    iStack_1c = (*pcVar1)();
    iStack_28 = 0;
    piStack_24 = (int *)0x0;
    iStack_20 = 0;
    uStack_8 = 0;
    if (*(int **)(param_1 + 0x6c) == (int *)0x0) {
      piVar4 = (int *)(param_1 + 0x68);
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x6c) + 0x58);
      _guard_check_icall(uVar2);
      piStack_14 = (int *)(*pcVar1)();
      func_0x00ade4a0(&piStack_14);
      piVar4 = piStack_18;
    }
    if ((int *)*piVar4 != (int *)0x0) {
      pcVar1 = *(code **)(*(int *)*piVar4 + 0x58);
      _guard_check_icall(uVar2);
      uVar5 = (*pcVar1)();
      piStack_18 = (int *)func_0x00b763d0(*(undefined4 *)(param_1 + 100),uVar5);
      func_0x00ade4a0(&piStack_18);
    }
    piStack_18 = param_3;
    func_0x00ade4a0(&piStack_18);
    iStack_2c = iStack_20;
    piStack_30 = piStack_24;
    iStack_34 = iStack_28;
    if (iStack_1c == 0) {
      iStack_3c = 0;
    }
    else {
      iStack_3c = iStack_1c + 0x14;
    }
    piStack_38 = param_3;
    iStack_20 = 0;
    piStack_18 = piStack_24;
    piStack_24 = (int *)0x0;
    iStack_1c = iStack_28;
    iStack_28 = 0;
    piVar4 = *(int **)(param_1 + 0x18);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (piVar4 == *(int **)(param_1 + 0x1c)) {
      func_0x00b1c630(piVar4,&iStack_3c);
    }
    else {
      *piVar4 = iStack_3c;
      piVar4[1] = (int)param_3;
      piVar4[2] = iStack_34;
      piVar4[3] = (int)piStack_30;
      piVar4[4] = iStack_2c;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



byte __thiscall FUN_00b1d280(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)(param_1 + 0x5c) == '\0')) {
    bVar1 = func_0x00b78000(param_3);
    *(byte *)(param_1 + 0x5c) = bVar1;
    return bVar1 ^ 1;
  }
  return 0;
}



byte __thiscall FUN_00b1d2b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)(param_1 + 0x5c) == '\0')) {
    bVar1 = func_0x00b78170(param_3);
    *(byte *)(param_1 + 0x5c) = bVar1;
    return bVar1 ^ 1;
  }
  return 0;
}



byte __thiscall FUN_00b1d2e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)(param_1 + 0x5c) == '\0')) {
    bVar1 = func_0x00b78180(param_3);
    *(byte *)(param_1 + 0x5c) = bVar1;
    return bVar1 ^ 1;
  }
  return 0;
}



undefined4 * __thiscall FUN_00b1d310(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TLValueTrackingTraverser::vftable;
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x68);
  }
  return param_1;
}



byte __thiscall FUN_00b1d420(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return 0;
  }
  if ((0 < *(int *)(param_1 + 0x60)) && (param_2 == 0)) {
    uVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar2 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar2 * 4);
    }
    bVar1 = func_0x00b77d90(param_3,uVar3);
    *(byte *)(param_1 + 0x5c) = bVar1;
    return bVar1 ^ 1;
  }
  return 1;
}



byte __thiscall FUN_00b1d470(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f616ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(short *)(param_3 + 0xb8) == 0x1c) {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x5c) != '\0') goto LAB_00b1d5a4;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    else if (param_2 == 2) {
      if ((*(char *)(param_1 + 0x5c) != '\0') && (*(int *)(param_1 + 0x60) == 1)) {
        puStack_20 = (undefined4 *)0x0;
        puStack_1c = (undefined4 *)0x0;
        puStack_18 = (undefined4 *)0x0;
        uVar5 = *(undefined4 *)(param_3 + 0xbc);
        uStack_8 = 0;
        func_0x00ad78b0();
        puVar3 = (undefined4 *)func_0x00ad7620(4);
        *puVar3 = uVar5;
        puVar6 = puVar3;
        if (puStack_1c == (undefined4 *)0x0) {
          for (; puStack_20 != (undefined4 *)0x0; puStack_20 = puStack_20 + 1) {
            *puVar6 = *puStack_20;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          for (; puStack_20 != (undefined4 *)0x0; puStack_20 = puStack_20 + 1) {
            *puVar6 = *puStack_20;
            puVar6 = puVar6 + 1;
          }
          puVar6 = (undefined4 *)0x0;
          if (puStack_1c != (undefined4 *)0x0) {
            do {
              *(undefined4 *)((int)(puVar3 + 1) + (int)puVar6) = *puVar6;
              puVar6 = puVar6 + 1;
            } while (puVar6 != puStack_1c);
          }
        }
        puStack_1c = puVar3 + 1;
        puStack_20 = puVar3;
        puStack_18 = puStack_1c;
        func_0x00ade380(&puStack_20);
        func_0x00ade720(*(undefined4 *)(param_3 + 0xc0),1);
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x5c) != '\0') {
LAB_00b1d5a4:
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    if ((0 < *(int *)(param_1 + 0x60)) && (param_2 == 0)) {
      if ((*(char *)(param_1 + 0x58) != '\0') ||
         (uStack_14 = uStack_14 & 0xffffff00, *(char *)(param_1 + 0x59) != '\0')) {
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
      }
      uVar4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
      if (uVar4 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -8 + uVar4 * 4);
      }
      bVar1 = func_0x00b77fc0(param_3,uVar5,uStack_14,uVar2);
      *(byte *)(param_1 + 0x5c) = bVar1;
      *unaff_FS_OFFSET = iStack_10;
      return bVar1 ^ 1;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



byte __thiscall FUN_00b1d620(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return 0;
  }
  if ((0 < *(int *)(param_1 + 0x60)) && (param_2 == 0)) {
    bVar1 = func_0x00b78170(param_3);
    *(byte *)(param_1 + 0x5c) = bVar1;
    return bVar1 ^ 1;
  }
  return 1;
}



byte __thiscall FUN_00b1d660(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return 0;
  }
  if ((0 < *(int *)(param_1 + 0x60)) && (param_2 == 0)) {
    bVar1 = func_0x00b78180(param_3);
    *(byte *)(param_1 + 0x5c) = bVar1;
    return bVar1 ^ 1;
  }
  return 1;
}



undefined4 __thiscall FUN_00b1d900(undefined4 param_1,byte param_2)

{
  func_0x004c7eb0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,100);
  }
  return param_1;
}



uint __thiscall FUN_00b1d9f0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  puVar3 = (undefined4 *)(*pcVar1)();
  puVar2 = (undefined4 *)puVar3[1];
  for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar2; puVar4 = puVar4 + 1) {
    pcVar1 = *(code **)(*(int *)*puVar4 + 4);
    _guard_check_icall(param_1);
    puVar3 = (undefined4 *)(*pcVar1)();
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  return (uint)puVar3 & 0xffffff00;
}



void __thiscall FUN_00b1da50(int param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  int iStack_3c;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  int iStack_28;
  undefined8 uStack_24;
  int iStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f622ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_2 + 0x7c);
  iStack_28 = param_1;
  _guard_check_icall(uVar3);
  iVar4 = (*pcVar1)();
  iStack_1c = *(int *)(iVar4 + 0x90);
  if (((iStack_1c == 0) || (bVar2 = *(byte *)(iStack_1c + 0xf) & 0xf, bVar2 == 0)) || (bVar2 == 3))
  goto LAB_00b1dc87;
  uVar3 = *(uint *)(iStack_1c + 8);
  uStack_18 = uVar3;
  if (*(int *)(iStack_28 + 0x58) == 1) {
    puVar5 = (undefined8 *)func_0x004a0d30(auStack_30,&uStack_18);
    uStack_24 = *puVar5;
    if ((*(char *)(*(int *)(puVar5 + 1) + 0xd) != '\0') ||
       ((int)uVar3 < *(int *)(*(int *)(puVar5 + 1) + 0x10))) {
      if (*(int *)(param_1 + 0x60) == 0xccccccc) {
        func_0x0048d790();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x5c);
      uStack_8 = 0;
      iStack_28 = 0;
      puStack_2c = (undefined4 *)(param_1 + 0x5c);
      puVar6 = (undefined4 *)func_0x008ab47d(0x14);
      puVar6[4] = uVar3;
      *puVar6 = uVar7;
      puVar6[1] = uVar7;
      puVar6[2] = uVar7;
      *(undefined2 *)(puVar6 + 3) = 0;
      func_0x0056d580((undefined4)uStack_24,uStack_24._4_4_,puVar6);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    goto LAB_00b1dc87;
  }
  iVar4 = func_0x004a0d30(auStack_30,&uStack_18);
  if ((*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar4 + 8) + 0x10) <= (int)uVar3)) goto LAB_00b1dc87;
  puVar6 = (undefined4 *)func_0x00aee9d0(&puStack_2c);
  if (0xd < (uint)puVar6[1]) {
    pcVar10 = "_webgl_struct_";
    uVar12 = 10;
    piVar8 = (int *)&DAT_0112e1b4;
    if ((int *)*puVar6 != (int *)0x0) {
      piVar8 = (int *)*puVar6;
    }
    do {
      if (*piVar8 != *(int *)pcVar10) goto LAB_00b1dbad;
      piVar8 = piVar8 + 1;
      pcVar10 = (char *)((int)pcVar10 + 4);
      bVar13 = 3 < uVar12;
      uVar12 = uVar12 - 4;
    } while (bVar13);
    if ((short)*piVar8 == (short)*(int *)pcVar10) goto LAB_00b1dc87;
  }
LAB_00b1dbad:
  iVar4 = func_0x00aee9d0(&puStack_2c);
  iVar4 = *(int *)(iVar4 + 4);
  iStack_3c = 0;
  func_0x00ad78b0();
  iVar4 = func_0x00ad7620(iVar4 + 0x18);
  func_0x00b665e0(&PTR_s__webgl_struct__0100943c);
  iVar11 = 7;
  if ((uVar3 & 0xf0000000) == 0) {
    iVar9 = 0x1c;
    do {
      if (iVar9 < 1) break;
      iVar9 = iVar9 + -4;
      iVar11 = iVar11 + -1;
    } while (((int)uVar3 >> ((byte)iVar9 & 0x1f) & 0xfU) == 0);
    if (-1 < iVar11) goto LAB_00b1dc14;
  }
  else {
LAB_00b1dc14:
    iVar9 = iVar11 * 4;
    do {
      bVar2 = (byte)((int)uVar3 >> ((byte)iVar9 & 0x1f)) & 0xf;
      iVar9 = iVar9 + -4;
      *(byte *)(iVar4 + iStack_3c) = (-(bVar2 < 10) & 0xd9U) + bVar2 + 0x57;
      iStack_3c = iStack_3c + 1;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  uStack_11 = 0x5f;
  func_0x00b665c0(&uStack_11);
  uVar7 = func_0x00aee9d0(&puStack_2c);
  func_0x00b665e0(uVar7);
  func_0x00b66660((int)&uStack_24 + 4);
  func_0x00aeeab0((int)&uStack_24 + 4);
LAB_00b1dc87:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_00b1dd50(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f622e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(**(int **)(param_3 + 0xc0) + 0x30);
  iStack_18 = param_1;
  _guard_check_icall(uVar5);
  iStack_14 = (*pcVar1)();
  uVar9 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (uVar9 < 2) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar9 * 4);
  }
  pcVar1 = *(code **)(*piVar10 + 0x1c);
  _guard_check_icall(uVar5);
  iVar6 = (*pcVar1)();
  uVar5 = param_3;
  if (iVar6 != 0) {
    iStack_1c = iVar6;
    cVar4 = FUN_00aea620();
    if (cVar4 != '\0') {
      pcVar1 = *(code **)(**(int **)(uVar5 + 0xbc) + 0x2c);
      _guard_check_icall();
      iVar7 = (*pcVar1)();
      iVar3 = iStack_14;
      if ((iVar7 != 0) && (iStack_14 != 0)) {
        cVar4 = FUN_00aea620();
        if (cVar4 != '\0') {
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          iStack_8 = 0;
          iStack_14 = iVar3;
          func_0x00ade4a0(&iStack_14);
          pcVar1 = *(code **)(**(int **)(iVar3 + 0xbc) + 0x58);
          _guard_check_icall();
          uVar8 = (*pcVar1)();
          func_0x00ad78b0();
          iStack_14 = func_0x00ad7620(0xc4);
          iStack_8._0_1_ = 1;
          if (iStack_14 == 0) {
            iStack_14 = 0;
          }
          else {
            iStack_14 = func_0x00ae02d0(0x2e,*(undefined4 *)(param_3 + 0xbc),uVar8);
          }
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          func_0x00ade4a0(&iStack_14);
          iVar3 = iStack_18;
          puVar2 = *(uint **)(iStack_18 + 0x18);
          if (puVar2 != *(uint **)(iStack_18 + 0x1c)) {
            puVar2[1] = param_3;
            *puVar2 = -(uint)(iVar6 != 0) & iVar6 + 0x14U;
            puVar2[2] = uStack_28;
            puVar2[3] = uStack_24;
            puVar2[4] = uStack_20;
            *(int *)(iStack_18 + 0x18) = *(int *)(iStack_18 + 0x18) + 0x14;
            *(undefined1 *)(iStack_18 + 0x58) = 1;
            *unaff_FS_OFFSET = iStack_10;
            return 0;
          }
          func_0x00b13350(puVar2,&iStack_1c,&param_3,&uStack_28);
          *(undefined1 *)(iVar3 + 0x58) = 1;
          *unaff_FS_OFFSET = iStack_10;
          return 0;
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall FUN_00b25880(undefined4 param_1,byte param_2)

{
  FUN_00969f30();
  func_0x009ce920();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x88);
  }
  return param_1;
}



void __thiscall FUN_00b25ad0(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  char *pcStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 ***pppuStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f635cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_38 = param_1;
  uStack_14 = uVar4;
  if ((param_2 == 0) && (*(int *)(param_1 + 0x60) != 0)) {
    pcVar3 = *(code **)(*(int *)(param_3 + 0x14) + 8);
    _guard_check_icall(uVar4);
    piVar5 = (int *)(*pcVar3)();
    puVar14 = (undefined4 *)piVar5[1];
    puVar13 = (undefined4 *)*piVar5;
    puStack_3c = puVar14;
    if (puVar13 != puVar14) {
      iStack_40 = iStack_38 + 0x58;
      do {
        pcStack_34 = (code *)*puVar13;
        pcStack_30 = *(code **)(*(int *)pcStack_34 + 0x48);
        _guard_check_icall(uVar4);
        pcStack_34 = (code *)(*pcStack_30)();
        if (pcStack_34 == (code *)0x0) {
          pcStack_30 = (code *)*puVar13;
          pcStack_34 = *(code **)(*(int *)pcStack_30 + 0x30);
          _guard_check_icall();
          iVar6 = (*pcStack_34)();
          pcStack_30 = *(code **)(iVar6 + 0xbc);
          pcStack_34 = *(code **)(*(int *)pcStack_30 + 0x48);
          _guard_check_icall();
          pcStack_34 = (code *)(*pcStack_34)();
        }
        puVar7 = (undefined4 *)func_0x00aee9d0(auStack_60);
        uStack_1c = 0;
        uStack_18 = 0;
        pppuStack_2c = (undefined4 ****)0x0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        pcVar11 = "";
        if ((char *)*puVar7 != (char *)0x0) {
          pcVar11 = (char *)*puVar7;
        }
        pcStack_30 = (code *)(pcVar11 + 1);
        pcVar8 = pcVar11;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        func_0x0046bc40(pcVar11,(int)pcVar8 - (int)pcStack_30);
        uStack_48 = uStack_18;
        uVar12 = 0x811c9dc5;
        ppppuVar9 = &pppuStack_2c;
        if (0xf < uStack_18) {
          ppppuVar9 = (undefined4 ****)pppuStack_2c;
        }
        pppuStack_4c = pppuStack_2c;
        uVar10 = 0;
        uStack_8 = 0;
        if (uStack_1c != 0) {
          do {
            pbVar1 = (byte *)((int)ppppuVar9 + uVar10);
            uVar10 = uVar10 + 1;
            uVar12 = (*pbVar1 ^ uVar12) * 0x1000193;
            puVar14 = puStack_3c;
          } while (uVar10 < uStack_1c);
        }
        iVar6 = func_0x009ccdd0(auStack_68,&pppuStack_2c,uVar12);
        if (*(int *)(iVar6 + 4) != 0) {
          pcStack_58 = *(char **)((int)pcStack_34 + 0x18);
          pcStack_30 = (code *)pcStack_58;
          iStack_54 = func_0x00b766d0(*(undefined4 *)(iStack_38 + 0x20),
                                      *(undefined4 *)(pcStack_58 + 0x10));
          uStack_50 = *(undefined4 *)(iStack_38 + 0x78);
          puVar7 = *(undefined4 **)(iStack_38 + 0x80);
          uStack_44 = uStack_50;
          pcStack_34 = (code *)iStack_54;
          if (puVar7 == *(undefined4 **)(iStack_38 + 0x84)) {
            func_0x00b25470(puVar7,&pcStack_58);
          }
          else {
            *puVar7 = pcStack_30;
            puVar7[1] = iStack_54;
            puVar7[2] = uStack_50;
            *(int *)(iStack_38 + 0x80) = *(int *)(iStack_38 + 0x80) + 0xc;
          }
        }
        uStack_8 = 0xffffffff;
        if (0xf < uStack_48) {
          uVar12 = uStack_48 + 1;
          ppppuVar9 = (undefined4 ****)pppuStack_4c;
          if (0xfff < uVar12) {
            ppppuVar9 = (undefined4 ****)pppuStack_4c[-1];
            uVar12 = uStack_48 + 0x24;
            if (0x1f < (uint)((int)pppuStack_4c + (-4 - (int)ppppuVar9))) {
              func_0x008aaf66();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          func_0x008ab812(ppppuVar9,uVar12);
        }
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar14);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b25d10(int param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  char *pcStack_30;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3d9ad;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_3c = param_3;
  if (param_2 == 0) {
    uVar8 = 0;
    iStack_38 = *(int *)(*(int *)(param_3 + 0x14) + 0x18);
    uStack_34 = *(uint *)(iStack_38 + 0x24);
    if (uStack_34 != 0) {
      do {
        puVar3 = (undefined4 *)func_0x00aee9d0(auStack_44);
        aiStack_2c[4] = 0;
        aiStack_2c[5] = 0;
        aiStack_2c[0] = 0;
        aiStack_2c[1] = 0;
        aiStack_2c[2] = 0;
        aiStack_2c[3] = 0;
        pcVar6 = "";
        if ((char *)*puVar3 != (char *)0x0) {
          pcVar6 = (char *)*puVar3;
        }
        pcStack_30 = pcVar6 + 1;
        pcVar4 = pcVar6;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        func_0x0046bc40(pcVar6,(int)pcVar4 - (int)pcStack_30);
        uStack_8 = 0;
        func_0x00b25620(auStack_4c,aiStack_2c);
        uStack_8 = 0xffffffff;
        if (0xf < (uint)aiStack_2c[5]) {
          uVar5 = aiStack_2c[5] + 1;
          iVar7 = aiStack_2c[0];
          if (0xfff < uVar5) {
            iVar7 = *(int *)(aiStack_2c[0] + -4);
            uVar5 = aiStack_2c[5] + 0x24;
            if (0x1f < (aiStack_2c[0] - iVar7) - 4U) {
              func_0x008aaf66();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          func_0x008ab812(iVar7,uVar5);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uStack_34);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iStack_3c + 0x18);
    }
  }
  else if (param_2 == 2) {
    func_0x009d21c0(aiStack_2c[6]);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00b270b0(undefined4 param_1,uint *param_2)

{
  if ((*param_2 & 0x10000000) != 0) {
    func_0x00b78260(param_1);
  }
  return;
}



undefined1 __thiscall FUN_00b270d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [124];
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f63690;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1 + 0x834;
  iStack_14 = *(int *)(param_1 + 0x7e8);
  if ((*(char *)(param_1 + 0x8ac) != '\0') &&
     (((*(int *)(param_3 + 0x14) == 1 || (*(int *)(param_3 + 0x14) == 2)) && (iStack_14 < 0x136))))
  {
    iStack_14 = 0x136;
  }
  if (100 < iStack_14) {
    func_0x0046a880("#version ",9,uVar3);
    func_0x00af6e40(&iStack_14);
    func_0x0046a880(&DAT_0101dc08,4);
  }
  func_0x00b272f0(param_3);
  func_0x00b791e0(iVar1,param_3,param_1 + 0x8b8);
  cVar2 = func_0x00b7c8b0(param_1,param_2,param_1 + 800);
  if (cVar2 != '\0') {
    func_0x00a13860();
    cVar2 = func_0x00ad7f00();
    if (cVar2 == '\0') {
      func_0x0046a880("// BEGIN: Generated code for built-in function emulation\n\n",0x3a);
      if (*(int *)(param_1 + 0xbc) == 0x8b30) {
        func_0x0046a880("#if defined(GL_FRAGMENT_PRECISION_HIGH)\n",0x28);
        func_0x0046a880("#define emu_precision highp\n",0x1c);
        func_0x0046a880("#else\n",6);
        func_0x0046a880("#define emu_precision mediump\n",0x1e);
        pcVar4 = "#endif\n\n";
        uVar5 = 8;
      }
      else {
        pcVar4 = "#define emu_precision highp\n";
        uVar5 = 0x1c;
      }
      func_0x0046a880(pcVar4,uVar5);
      func_0x00a13860();
      func_0x00ad7fa0(iVar1);
      func_0x0046a880("// END: Generated code for built-in function emulation\n\n",0x38);
    }
    if (*(int *)(param_1 + 0xbc) == 0x8b30) {
      func_0x00b78ea0(param_1,iVar1);
    }
    if (*(int *)(param_1 + 0xbc) == 0x91b9) {
      func_0x00b79010(param_1,iVar1);
    }
    if (*(int *)(param_1 + 0xbc) == 0x8dd9) {
      func_0x00b790c0(iVar1,*(undefined4 *)(param_1 + 0x888),*(undefined4 *)(param_1 + 0x884),
                      *(undefined4 *)(param_1 + 0x88c),*(undefined4 *)(param_1 + 0x880));
    }
    func_0x00b7c770(param_1,iVar1,param_3);
    uStack_8 = 0;
    FUN_00ade830(auStack_90);
    func_0x00adddc0();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void __thiscall FUN_00b27720(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if ((*param_3 & 0x100) != 0) {
    func_0x00b78240(param_2,*(undefined4 *)(param_1 + 0xbc));
  }
  if ((*param_3 & 0x2000000) != 0) {
    func_0x00b78d50(param_2,*(undefined4 *)(param_1 + 0x7e8));
  }
  if ((*param_3 & 0x10000000) != 0) {
    func_0x00b78260(param_2);
  }
  uVar1 = func_0x00b7d630(*(undefined4 *)(param_1 + 0xc4));
  func_0x00b78cc0(param_2,*(undefined4 *)(param_1 + 0xbc),uVar1);
  return;
}



undefined1 FUN_00b277a0(uint *param_1)

{
  char cVar1;
  
  if ((*param_1 & 0x100000) == 0) {
    cVar1 = FUN_00a156a0(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



void __fastcall FUN_00b277d0(int param_1)

{
  func_0x00a11880(*(undefined4 *)(param_1 + 0xc4));
  return;
}



undefined4 __thiscall FUN_00b277e0(int param_1,int *param_2,uint *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_ECX;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  char *pcVar8;
  undefined1 auStack_fc [124];
  undefined1 auStack_80 [88];
  int *piStack_28;
  int *piStack_24;
  char cStack_1d;
  int *piStack_1c;
  int *piStack_18;
  char cStack_14;
  char cStack_13;
  char cStack_12;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f636c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00b7d4d0(*(undefined4 *)(param_1 + 0xbc),param_1 + 0x8b8,*(undefined4 *)(param_1 + 0xc4),
                  uVar3);
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_2 + 4);
  _guard_check_icall(auStack_80);
  (*pcVar1)();
  piStack_1c = piStack_28;
  if (0x6e < (int)piStack_28) {
    func_0x0046a880("#version ",9);
    func_0x00af6e40(&piStack_1c);
    func_0x0046a880(&DAT_0113d23c,1);
  }
  uStack_8 = 0xffffffff;
  func_0x00adddc0();
  func_0x00b27c20(param_2,param_3);
  func_0x00b791e0(param_1 + 0x834,param_3,param_1 + 0x8b8);
  if ((((*param_3 & 0x100000) != 0) && (*(char *)(param_1 + 0x8ba) != '\0')) &&
     (cVar2 = func_0x00a11910(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0x7e8),
                              *(undefined4 *)(param_1 + 0xc4),param_3), cVar2 == '\0')) {
    if (*(int *)(param_1 + 0xbc) == 0x8b30) {
      func_0x00b276c0("gl_FragCoord");
      pcVar8 = "gl_PointCoord";
    }
    else {
      if (*(int *)(param_1 + 0xbc) != 0x8b31) goto LAB_00b27925;
      func_0x0046a880("invariant gl_Position;\n",0x17);
      pcVar8 = "gl_PointSize";
    }
    func_0x00b276c0(pcVar8);
  }
LAB_00b27925:
  piStack_18 = (int *)(param_1 + 0x7e8);
  if (((*param_3 & 0x400000) == 0) ||
     (cVar2 = func_0x00b34eb0(param_1,param_2,param_1 + 800,*piStack_18), cVar2 != '\0')) {
    if (((*param_3 & 0x8000000) == 0) &&
       (((param_3[1] & 0x20000) == 0 || (*(int *)(param_1 + 0x7e8) < 300)))) {
      piStack_1c = (int *)(param_1 + 0x7e8);
      func_0x00a13860();
      cVar2 = func_0x00ad7f00();
      if (cVar2 == '\0') {
        func_0x0046a880("// BEGIN: Generated code for built-in function emulation\n\n",0x3a);
        func_0x0046a880("#define emu_precision\n\n",0x17);
        func_0x00a13860();
        func_0x00ad7fa0(param_1 + 0x834);
        func_0x0046a880("// END: Generated code for built-in function emulation\n\n",0x38);
        piStack_18 = piStack_1c;
      }
      if (*(int *)(param_1 + 0xbc) == 0x8b30) {
        uVar4 = func_0x00a13870(0xb);
        cVar2 = func_0x00aede60(uVar4);
        if ((cVar2 == '\0') || (cStack_12 = '\x01', *piStack_18 != 100)) {
          cStack_12 = '\0';
        }
        cStack_1d = func_0x00a11880(*(undefined4 *)(param_1 + 0xc4));
        piStack_1c = (int *)(extraout_ECX & 0xffffff00);
        cStack_11 = '\0';
        cStack_13 = '\0';
        piStack_18 = *(int **)(param_1 + 0x40);
        cStack_14 = '\0';
        piVar6 = *(int **)(param_1 + 0x44);
        if (piStack_18 != piVar6) {
          piVar7 = piStack_18 + 2;
          piStack_24 = (int *)0x1;
          do {
            if (cStack_1d == '\0') {
LAB_00b27aa1:
              if (cStack_12 != '\0') {
                cVar2 = func_0x00484a20(piVar7,"gl_SecondaryFragColorEXT");
                if (cVar2 == '\0') {
                  cVar2 = func_0x00484a20(piVar7,"gl_SecondaryFragDataEXT");
                  piStack_1c = (int *)((uint)piStack_1c & 0xff);
                  if (cVar2 != '\0') {
                    piStack_1c = piStack_24;
                  }
                }
                else {
                  cStack_14 = '\x01';
                }
                piVar6 = *(int **)(param_1 + 0x44);
              }
            }
            else {
              cVar2 = func_0x00484a20(piVar7,"gl_FragColor");
              if (cVar2 == '\0') {
                cVar2 = func_0x00484a20(piVar7,"gl_FragData");
                piVar6 = *(int **)(param_1 + 0x44);
                if (cVar2 == '\0') goto LAB_00b27aa1;
                cStack_13 = '\x01';
              }
              else {
                piVar6 = *(int **)(param_1 + 0x44);
                cStack_11 = '\x01';
              }
            }
            piStack_18 = piStack_18 + 0x2d;
            piVar7 = piVar7 + 0x2d;
          } while (piStack_18 != piVar6);
          if (cStack_11 != '\0') {
            func_0x0046a880("out vec4 webgl_FragColor;\n",0x1a);
          }
          if (cStack_13 != '\0') {
            func_0x0046a880("out vec4 webgl_FragData[gl_MaxDrawBuffers];\n",0x2c);
          }
          if (cStack_14 != '\0') {
            func_0x0046a880("out vec4 webgl_SecondaryFragColor;\n",0x23);
          }
          if ((char)piStack_1c != '\0') {
            func_0x0046a880("out vec4 webgl_SecondaryFragData[",0x21);
            iVar5 = func_0x00a13880();
            func_0x00af6e40(iVar5 + 0xf8);
            func_0x0046a880(&DAT_0101e038,3);
          }
        }
        func_0x00b78ea0(param_1,param_1 + 0x834);
      }
      iVar5 = param_1 + 0x834;
      if (*(int *)(param_1 + 0xbc) == 0x91b9) {
        func_0x00b79010(param_1,iVar5);
      }
      if (*(int *)(param_1 + 0xbc) == 0x8dd9) {
        func_0x00b790c0(iVar5,*(undefined4 *)(param_1 + 0x888),*(undefined4 *)(param_1 + 0x884),
                        *(undefined4 *)(param_1 + 0x88c),*(undefined4 *)(param_1 + 0x880));
      }
      func_0x00b7d160(param_1,iVar5,param_3);
      uStack_8 = 3;
      FUN_00ade830(auStack_fc);
      func_0x00adddc0();
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_00b29c40(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::OutputHLSL::HelperFunction::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b29c90(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::OutputHLSL::HelperFunction::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b29ce0(undefined4 param_1,byte param_2)

{
  func_0x00b29510();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x1e8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b29d10(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::OutputHLSL::HelperFunction::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



void __thiscall FUN_00b2f420(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  code ***pppcVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  code *****pppppcVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  void *_Dst;
  undefined1 *puVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  code *pcVar18;
  code *****pppppcVar19;
  int *unaff_FS_OFFSET;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  char *apcStack_128 [2];
  int *piStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  void *pvStack_110;
  int iStack_10c;
  undefined1 auStack_108 [4];
  int *piStack_104;
  code *pcStack_100;
  int *piStack_fc;
  int iStack_f8;
  byte bStack_f1;
  int *piStack_f0;
  code *pcStack_ec;
  code ****ppppcStack_e8;
  int *piStack_e4;
  undefined4 uStack_d6;
  undefined4 uStack_a8;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  code ****ppppcStack_2c;
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
  puStack_c = &DAT_00f64080;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar15 = *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) + -1;
  pcStack_ec = (code *)param_3;
  uVar1 = *(ushort *)(param_3 + 0x2e);
  uVar11 = *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0xe8) + (*(int *)(param_1 + 0xec) - 1U & uVar15 >> 2) * 4)
            + (uVar15 & 3) * 4);
  uStack_114 = uVar11;
  iStack_f8 = param_1;
  uStack_14 = uVar6;
  if (0xfd < uVar1) {
    switch(uVar1) {
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
      goto LAB_00b2f9fc;
    default:
LAB_00b2fbe6:
      ppppcStack_e8 = (code ****)(param_3 + 0x2f);
      pppcVar3 = (code ***)(*ppppcStack_e8)[2];
      _guard_check_icall();
      piStack_fc = (int *)(*(code *)pppcVar3)();
      if (((*(char *)(iStack_f8 + 0x189) == '\0') && (*(char *)(iStack_f8 + 0x188) == '\0')) ||
         (*(int *)(iStack_f8 + 0x58) != 0x8b30)) {
        bStack_f1 = 0;
        piStack_f0 = (int *)((uint)piStack_f0._1_3_ << 8);
      }
      else {
        bStack_f1 = 1;
        piStack_f0 = (int *)CONCAT31(piStack_f0._1_3_,1);
      }
      if ((short)*(int *)((int)pcStack_ec + 0xb8) == 1) {
        pcVar18 = *(code **)(*(int *)pcStack_ec + 0x7c);
        _guard_check_icall();
        (*pcVar18)();
        iVar17 = iStack_f8;
        iVar9 = func_0x00aec9e0(*(int *)((int)pcStack_ec + 0xd0) + 8);
        bStack_f1 = bStack_f1 & *(byte *)(*(int *)(iVar17 + 0x178) + 0x20 + iVar9 * 0x24);
        pcVar10 = (char *)func_0x00b82d50(&uStack_44,*(int *)((int)pcStack_ec + 0xd0));
        uStack_8 = 0;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar10 = *(char **)pcVar10;
        }
        pcVar16 = pcVar10;
        do {
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar4 != '\0');
        func_0x0046a880(pcVar10,(int)pcVar16 - (int)(pcVar10 + 1));
        uStack_8 = 0xffffffff;
        pppcVar3 = (code ***)(*ppppcStack_e8)[2];
        _guard_check_icall();
        uVar11 = (*(code *)pppcVar3)();
        pcVar10 = (char *)func_0x00b82fd0(&uStack_44,uVar11);
        uStack_8 = 1;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar10 = *(char **)pcVar10;
        }
        pcVar16 = pcVar10;
        do {
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar4 != '\0');
        func_0x0046a880(pcVar10,(int)pcVar16 - (int)(pcVar10 + 1));
        pcVar10 = "Lod0(";
        uStack_8 = 0xffffffff;
        if (bStack_f1 == 0) {
          pcVar10 = "(";
        }
        pcVar16 = pcVar10;
        do {
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar4 != '\0');
        iVar17 = (int)pcVar16 - (int)(pcVar10 + 1);
      }
      else {
        cVar4 = func_0x00aee8d0();
        if (cVar4 == '\0') {
          cVar4 = func_0x00aee870();
          if (cVar4 == '\0') {
            func_0x00aee9d0(&pvStack_110);
            ppppcStack_e8 = *(code *****)*piStack_fc;
            pcVar18 = *(code **)((int)*ppppcStack_e8 + 0xc);
            _guard_check_icall();
            ppppcStack_e8 = (code ****)(*pcVar18)();
            pppcVar3 = (code ***)(*ppppcStack_e8)[0x1f];
            _guard_check_icall();
            puVar12 = (undefined4 *)(*(code *)pppcVar3)();
            uVar5 = 0;
            pcStack_ec = (code *)*puVar12;
            if (1 < (uint)(piStack_fc[1] - *piStack_fc >> 2)) {
              ppppcStack_e8 = *(code *****)(*piStack_fc + 4);
              pcVar18 = *(code **)((int)*ppppcStack_e8 + 0xc);
              _guard_check_icall();
              ppppcStack_e8 = (code ****)(*pcVar18)();
              pppcVar3 = (code ***)(*ppppcStack_e8)[0x1f];
              _guard_check_icall();
              iVar17 = (*(code *)pppcVar3)();
              uVar5 = *(undefined1 *)(iVar17 + 0x7c);
            }
            func_0x00b90920(auStack_108,&pvStack_110,pcStack_ec,uVar5,
                            piStack_fc[1] - *piStack_fc >> 2,piStack_f0,
                            *(undefined4 *)(iStack_f8 + 0x58));
          }
          else {
            func_0x00aee9d0(&pvStack_110);
            func_0x00b81960(auStack_108,&pvStack_110);
          }
        }
        else {
          func_0x00aee9d0(&pvStack_110);
          piStack_f0 = *(int **)*piStack_fc;
          pcVar18 = *(code **)(*piStack_f0 + 0xc);
          _guard_check_icall();
          piStack_f0 = (int *)(*pcVar18)();
          pcVar18 = *(code **)(*piStack_f0 + 0x7c);
          _guard_check_icall();
          uVar11 = (*pcVar18)();
          func_0x00ad8850(uVar11);
          piStack_f0 = piStack_e4;
          func_0x00b82a50(auStack_108,&pvStack_110,&piStack_f0,uStack_a8,uStack_d6);
        }
        func_0x00b660c0(auStack_108);
        iVar17 = 1;
        pcVar10 = "(";
      }
      func_0x0046a880(pcVar10,iVar17);
      piVar7 = (int *)*piStack_fc;
      piStack_f0 = piVar7;
      if (piVar7 != (int *)piStack_fc[1]) {
        do {
          ppppcStack_e8 = (code ****)*piVar7;
          pcStack_ec = *(code **)((int)*ppppcStack_e8 + 0xc);
          piStack_f0 = piVar7;
          _guard_check_icall();
          pcStack_ec = (code *)(*pcStack_ec)();
          if (*(int *)(iStack_f8 + 0x6c) == 0x8b4a) {
            ppppcStack_e8 = *(code *****)(*(int *)pcStack_ec + 0x7c);
            _guard_check_icall();
            piVar13 = (int *)(*(code *)ppppcStack_e8)();
            if (*piVar13 - 8U < 0x2b) {
              func_0x0046a880("texture_",8);
              ppppcStack_e8 = (code ****)*piVar7;
              pcStack_100 = *(code **)((int)*ppppcStack_e8 + 4);
              _guard_check_icall(iStack_f8);
              (*pcStack_100)();
              func_0x0046a880(", sampler_",10);
            }
          }
          pcStack_100 = (code *)*piVar7;
          ppppcStack_e8 = *(code *****)(*(int *)pcStack_100 + 4);
          _guard_check_icall(iStack_f8);
          (*(code *)ppppcStack_e8)();
          pcStack_100 = *(code **)(*(int *)pcStack_ec + 0x7c);
          _guard_check_icall();
          (*pcStack_100)();
          cVar4 = func_0x00adad50();
          if (cVar4 != '\0') {
            pcVar18 = *(code **)(*(int *)pcStack_ec + 0x7c);
            _guard_check_icall();
            piStack_104 = (int *)(*pcVar18)();
            iVar17 = iStack_f8;
            piStack_120 = (int *)0x0;
            piStack_11c = (int *)0x0;
            uStack_118 = 0;
            uStack_8 = 2;
            func_0x00b2e8b0(apcStack_128,pcStack_ec);
            uStack_24 = 0;
            uStack_20 = 0;
            ppppcStack_2c = (code ****)0x6c676e61;
            iStack_1c = 6;
            uStack_18 = 0xf;
            uStack_28 = 0x5f65;
            uStack_8._0_1_ = 3;
            pcVar10 = "";
            if (apcStack_128[0] != (char *)0x0) {
              pcVar10 = apcStack_128[0];
            }
            pcStack_100 = (code *)(pcVar10 + 1);
            pcVar16 = pcVar10;
            do {
              cVar4 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar4 != '\0');
            func_0x0046a880(pcVar10,(int)pcVar16 - (int)pcStack_100);
            pcStack_ec = *(code **)(iVar17 + 0x20);
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            uStack_34 = 0;
            uStack_30 = 0xf;
            uStack_44 = 0;
            ppppcStack_e8 = (code ****)&ppppcStack_2c;
            if (0xf < uStack_18) {
              ppppcStack_e8 = ppppcStack_2c;
            }
            pcVar18 = (code *)(iStack_1c + 1);
            uStack_8._0_1_ = 4;
            pcStack_100 = pcVar18;
            func_0x00ad78b0();
            _Dst = (void *)func_0x00ad7620(pcVar18);
            memcpy(_Dst,ppppcStack_e8,(size_t)pcStack_100);
            iStack_10c = iStack_1c;
            pvStack_110 = _Dst;
            func_0x00ad99a0(&pvStack_110,&uStack_44,&piStack_120,0,pcStack_ec);
            uStack_8._0_1_ = 3;
            piStack_104 = piStack_11c;
            piVar13 = piStack_120;
            if (piStack_120 != piStack_11c) {
              do {
                ppppcStack_e8 = (code ****)*piVar13;
                if (*(int *)(iStack_f8 + 0x6c) == 0x8b4a) {
                  func_0x0046a880(", texture_",10);
                  uVar11 = func_0x00aee9d0(auStack_130);
                  func_0x00b660c0(uVar11);
                  func_0x0046a880(", sampler_",10);
                  puVar14 = auStack_138;
                }
                else {
                  func_0x0046a880(&DAT_0112e444,2);
                  puVar14 = auStack_140;
                }
                uVar11 = func_0x00aee9d0(puVar14);
                func_0x00b660c0(uVar11);
                piVar13 = piVar13 + 1;
                piVar7 = piStack_f0;
              } while (piVar13 != piStack_104);
            }
            uStack_8 = CONCAT31(uStack_8._1_3_,2);
            if (0xf < uStack_18) {
              uVar6 = uStack_18 + 1;
              pppppcVar8 = (code *****)ppppcStack_2c;
              if (0xfff < uVar6) {
                pppppcVar8 = (code *****)ppppcStack_2c[-1];
                uVar6 = uStack_18 + 0x24;
                if (0x1f < (uint)((int)ppppcStack_2c + (-4 - (int)pppppcVar8))) {
                  uVar5 = func_0x008aaf66();
                  out(0xfb,uVar5);
                  return;
                }
              }
              func_0x008ab812(pppppcVar8,uVar6);
            }
            uStack_8 = 0xffffffff;
            if (piStack_120 != (int *)0x0) {
              piStack_120 = (int *)0x0;
              piStack_11c = (int *)0x0;
              uStack_118 = 0;
            }
          }
          if (piVar7 < (int *)(piStack_fc[1] + -4)) {
            func_0x0046a880(&DAT_0112e444,2);
          }
          piVar7 = piVar7 + 1;
          piStack_f0 = piVar7;
        } while (piVar7 != (int *)piStack_fc[1]);
      }
LAB_00b2fb45:
      func_0x0046a880(&DAT_0112e458,1);
      goto LAB_00b2fb55;
    case 0x11c:
    case 0x122:
      if (param_2 == 0) {
        func_0x0046a880("AllMemoryBarrier(",0x11,uVar6);
        goto LAB_00b2fb55;
      }
      break;
    case 0x11d:
    case 0x11e:
    case 0x11f:
      if (param_2 == 0) {
        func_0x0046a880("DeviceMemoryBarrier(",0x14,uVar6);
        goto LAB_00b2fb55;
      }
      break;
    case 0x120:
      if (param_2 == 0) {
        func_0x0046a880("GroupMemoryBarrierWithGroupSync(",0x20,uVar6);
        goto LAB_00b2fb55;
      }
      break;
    case 0x121:
      if (param_2 == 0) {
        func_0x0046a880("GroupMemoryBarrier(",0x13,uVar6);
        goto LAB_00b2fb55;
      }
    }
    if (param_2 != 1) goto LAB_00b2fbcf;
    goto LAB_00b2f993;
  }
  if (uVar1 == 0xfd) {
LAB_00b2f9fc:
    piStack_fc = param_3 + 0x2f;
    pcVar18 = *(code **)(*piStack_fc + 8);
    _guard_check_icall();
    puVar12 = (undefined4 *)(*pcVar18)();
    piStack_f0 = *(int **)*puVar12;
    pcVar18 = *(code **)(*piStack_f0 + 0xc);
    _guard_check_icall();
    piStack_f0 = (int *)(*pcVar18)();
    cVar4 = func_0x00b26780(piStack_f0);
    sVar2 = (short)*(int *)((int)pcStack_ec + 0xb8);
    if (cVar4 != '\0') {
      func_0x00b80a80(piStack_f0,sVar2);
      ppppcStack_e8 = (code ****)0x1;
      uVar6 = FUN_00ae9a60();
      if (1 < uVar6) {
        do {
          func_0x0046a880(&DAT_0112e444,2);
          pcVar18 = *(code **)(*piStack_fc + 8);
          _guard_check_icall();
          piVar7 = (int *)(*pcVar18)();
          piStack_f0 = *(int **)(*piVar7 + (int)ppppcStack_e8 * 4);
          pcVar18 = *(code **)(*piStack_f0 + 0xc);
          _guard_check_icall();
          piVar7 = (int *)(*pcVar18)();
          piStack_f0 = piVar7;
          cVar4 = func_0x00b26780(piVar7);
          if (cVar4 == '\0') {
            pcVar18 = *(code **)(*piVar7 + 4);
            _guard_check_icall(iStack_f8);
            (*pcVar18)();
          }
          else {
            func_0x00b80b80(piVar7);
          }
          pppppcVar19 = (code *****)((int)ppppcStack_e8 + 1);
          ppppcStack_e8 = (code ****)pppppcVar19;
          pppppcVar8 = (code *****)FUN_00ae9a60();
        } while (pppppcVar19 < pppppcVar8);
      }
      goto LAB_00b2fb45;
    }
    if ((sVar2 == 0x103) || (sVar2 == 0x104)) goto LAB_00b2fb55;
    pcVar10 = (char *)func_0x00b2a020(sVar2);
    if (param_2 == 0) {
      pcVar16 = pcVar10;
      do {
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar4 != '\0');
      func_0x0046a880(pcVar10,(int)pcVar16 - (int)(pcVar10 + 1));
      goto LAB_00b2fb55;
    }
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0113feb4,1);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  }
  switch(uVar1) {
  default:
    goto LAB_00b2fbe6;
  case 7:
    func_0x00b2e3c0(uVar11,param_2,param_3);
    goto LAB_00b2fb55;
  case 0x45:
  case 0x5b:
  case 0x6a:
  case 0x6b:
  case 0x7d:
  case 0x82:
  case 0x8f:
  case 0x90:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
    func_0x00b33b10(uVar11,param_2,param_3[0x34]);
    goto LAB_00b2fb55;
  case 0x4c:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f8dc,4,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x5c:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f8e4,4,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x5d:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f8ec,4,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x5e:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f8f4,6,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x5f:
    pcVar18 = *(code **)(param_3[0x2f] + 8);
    _guard_check_icall();
    piVar7 = (int *)(*pcVar18)();
    piStack_f0 = *(int **)(*piVar7 + 8);
    pcVar18 = *(code **)(*piStack_f0 + 0xc);
    _guard_check_icall();
    piStack_f0 = (int *)(*pcVar18)();
    pcVar18 = *(code **)(*piStack_f0 + 0x7c);
    _guard_check_icall();
    piVar7 = (int *)(*pcVar18)();
    if (*piVar7 == 5) {
      func_0x00b33b10(uVar11,param_2,*(int *)((int)pcStack_ec + 0xd0));
      goto LAB_00b2fb55;
    }
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f8fc,5);
      goto LAB_00b2fb55;
    }
    break;
  case 0x60:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f904,5,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x61:
    if (param_2 == 0) {
      func_0x0046a880("smoothstep(",0xb,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x62:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f8d4,5,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x69:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f918,4,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x79:
    if (param_2 == 0) {
      func_0x0046a880("distance(",9,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x7a:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f92c,4,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x7b:
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f934,6,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x7e:
    if (param_2 == 0) {
      func_0x0046a880("reflect(",8,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x7f:
    if (param_2 == 0) {
      func_0x0046a880("refract(",8,uVar6);
      goto LAB_00b2fb55;
    }
    break;
  case 0x81:
    if (param_2 == 0) {
LAB_00b2f4dc:
      func_0x0046a880(&DAT_011434e0,1,uVar6);
      goto LAB_00b2fb55;
    }
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f56c,3,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0x86:
    if (param_2 == 0) goto LAB_00b2f4dc;
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f590,3,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0x87:
    if (param_2 == 0) goto LAB_00b2f4dc;
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f594,4,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0x88:
    if (param_2 == 0) goto LAB_00b2f4dc;
    if (param_2 == 1) {
      func_0x0046a880(&DAT_01008044,3,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0x89:
    if (param_2 == 0) goto LAB_00b2f4dc;
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f59c,4,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0x8a:
    if (param_2 == 0) goto LAB_00b2f4dc;
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f47c,4,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0x8b:
    if (param_2 == 0) goto LAB_00b2f4dc;
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f484,4,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  case 0xe5:
    if ((*(char *)(param_1 + 0x189) != '\0') || (*(char *)(param_1 + 0x188) != '\0')) {
      if (param_2 == 0) goto LAB_00b2f4dc;
      if (param_2 != 1) goto LAB_00b2f8af;
      goto LAB_00b2f993;
    }
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f95c,4,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2f88a;
  case 0xe6:
    if ((*(char *)(param_1 + 0x189) != '\0') || (*(char *)(param_1 + 0x188) != '\0')) {
LAB_00b2f8fb:
      if (param_2 != 0) {
        if (param_2 == 1) {
          func_0x0046a880(&DAT_0112e1b4,0,uVar6);
          goto LAB_00b2fb55;
        }
LAB_00b2f8af:
        if (param_2 == 2) {
          func_0x0046a880(&DAT_0101f954,6,uVar6);
        }
        goto LAB_00b2fb55;
      }
      goto LAB_00b2f4dc;
    }
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f964,4,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2f88a;
  case 0xe7:
    if ((*(char *)(param_1 + 0x189) != '\0') || (*(char *)(param_1 + 0x188) != '\0'))
    goto LAB_00b2f8fb;
    if (param_2 == 0) {
      func_0x0046a880(&DAT_0101f96c,7,uVar6);
      goto LAB_00b2fb55;
    }
LAB_00b2f88a:
    if (param_2 == 1) {
LAB_00b2f993:
      func_0x0046a880(&DAT_0112e1b4,0,uVar6);
      goto LAB_00b2fb55;
    }
    goto LAB_00b2fbcf;
  }
  if (param_2 == 1) {
    func_0x0046a880(&DAT_0112e444,2,uVar6);
  }
  else {
LAB_00b2fbcf:
    if (param_2 == 2) {
      func_0x0046a880(&DAT_0112e458,1,uVar6);
    }
  }
LAB_00b2fb55:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b30500(int param_1,int param_2,code *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  code *pcVar17;
  int *unaff_FS_OFFSET;
  char *pcVar18;
  undefined1 auStack_40 [4];
  code *pcStack_3c;
  code *pcStack_38;
  int iStack_34;
  int *piStack_30;
  char ***apppcStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f640e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar14 = *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) + -1;
  pcStack_38 = param_3;
  piStack_30 = (int *)(uint)*(ushort *)(param_3 + 0xb8);
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xe8) +
                           (uVar14 >> 2 & *(int *)(param_1 + 0xec) - 1U) * 4) + (uVar14 & 3) * 4);
  iVar11 = iVar6;
  iStack_34 = param_1;
  uStack_14 = uVar4;
  switch(piStack_30) {
  case (int *)0x11:
    if (param_2 == 0) {
LAB_00b30588:
      param_2 = 1;
      pcVar18 = "(";
    }
    else {
      if (param_2 == 1) {
        param_2 = 3;
        pcVar18 = " + ";
        break;
      }
LAB_00b3149a:
      if (param_2 != 2) goto LAB_00b314af;
      param_2 = 1;
      pcVar18 = ")";
    }
    break;
  case (int *)0x12:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " - ";
    break;
  case (int *)0x13:
  case (int *)0x1d:
  case (int *)0x20:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " * ";
    break;
  case (int *)0x14:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " / ";
    break;
  case (int *)0x15:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " % ";
    break;
  case (int *)0x16:
  case (int *)0x17:
    pcStack_3c = *(code **)(param_3 + 0xbc);
    pcVar17 = *(code **)(*(int *)pcStack_3c + 0x7c);
    _guard_check_icall();
    uVar7 = (*pcVar17)();
    func_0x00b2e540(param_2,uVar7,piStack_30,iVar6);
    goto LAB_00b314af;
  case (int *)0x18:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " < ";
    break;
  case (int *)0x19:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " > ";
    break;
  case (int *)0x1a:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " <= ";
    break;
  case (int *)0x1b:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " >= ";
    break;
  case (int *)0x1c:
    if (param_2 == 0) goto LAB_00b30588;
LAB_00b30594:
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 2;
    pcVar18 = ", ";
    break;
  case (int *)0x1e:
    if (param_2 == 0) {
      param_2 = 4;
      pcVar18 = "mul(";
    }
    else if (param_2 == 1) {
      param_2 = 0xc;
      pcVar18 = ", transpose(";
    }
    else {
      if (param_2 != 2) goto LAB_00b314af;
      pcVar18 = "))";
    }
    break;
  case (int *)0x1f:
    if (param_2 == 0) {
      param_2 = 0xe;
      pcVar18 = "mul(transpose(";
    }
    else {
      if (param_2 != 1) goto LAB_00b3149a;
      param_2 = 3;
      pcVar18 = "), ";
    }
    break;
  case (int *)0x21:
    if (param_2 == 0) {
      param_2 = 0x18;
      pcVar18 = "transpose(mul(transpose(";
    }
    else if (param_2 == 1) {
      param_2 = 0xd;
      pcVar18 = "), transpose(";
    }
    else {
      if (param_2 != 2) goto LAB_00b314af;
      param_2 = 3;
      pcVar18 = ")))";
    }
    break;
  case (int *)0x22:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " || ";
    break;
  case (int *)0x23:
    *(undefined1 *)(param_1 + 0x150) = 1;
    if (param_2 != 0) goto LAB_00b30594;
    param_2 = 4;
    pcVar18 = "xor(";
    break;
  case (int *)0x24:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " && ";
    break;
  case (int *)0x25:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " << ";
    break;
  case (int *)0x26:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " >> ";
    break;
  case (int *)0x27:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " & ";
    break;
  case (int *)0x28:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " ^ ";
    break;
  case (int *)0x29:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 3;
    pcVar18 = " | ";
    break;
  case (int *)0x2a:
    pcStack_3c = *(code **)(param_3 + 0xbc);
    pcVar17 = *(code **)(*(int *)pcStack_3c + 0x7c);
    _guard_check_icall();
    piStack_30 = (int *)(*pcVar17)();
    if (*piStack_30 == 0x5e) {
      iVar11 = iVar6;
      if (param_2 == 0) {
        pcStack_3c = *(code **)(pcStack_38 + 0xbc);
        pcVar17 = *(code **)(*(int *)pcStack_3c + 0x48);
        _guard_check_icall();
        iVar11 = (*pcVar17)();
        piStack_30 = (int *)piStack_30[0x23];
        iStack_34 = iStack_34 + 0x100;
        pcStack_3c = (code *)piStack_30[2];
        iVar6 = func_0x00b2bd40(&pcStack_3c);
        if (iVar6 == 0) {
          func_0x00ad78b0();
          puVar5 = (undefined4 *)func_0x00ad7620(8);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            uVar7 = *(undefined4 *)(iVar11 + 0x18);
            *puVar5 = piStack_30;
            puVar5[1] = uVar7;
          }
          pcStack_3c = (code *)piStack_30[2];
          puVar8 = (undefined4 *)func_0x00b29aa0(&pcStack_3c);
          *puVar8 = puVar5;
        }
        pcStack_3c = *(code **)(pcStack_38 + 0xc0);
        pcVar17 = *(code **)(*(int *)pcStack_3c + 0x10);
        _guard_check_icall();
        (*pcVar17)();
        uVar7 = func_0x00aea2f0(0);
        uVar7 = func_0x00aea310(auStack_40,uVar7);
        uVar7 = func_0x00b854a0(apppcStack_2c,uVar7);
        uStack_8 = 1;
        func_0x00b29a70(uVar7);
      }
      goto LAB_00b314af;
    }
    cVar3 = func_0x00b2bc50();
    iVar11 = iVar6;
    if (cVar3 == '\0') {
      if (*piStack_30 == 6) goto LAB_00b30de5;
      if (param_2 != 0) {
        if (param_2 != 1) {
          if (param_2 == 2) {
            func_0x0046a880(&DAT_0112e28c,1);
            piStack_30 = (int *)func_0x00b2a090(*(int *)(pcStack_38 + 0xbc));
            iVar11 = iVar6;
            if (piStack_30 != (int *)0x0) {
              pcStack_3c = (code *)piStack_30[2];
              iVar12 = func_0x00b2bd80(&pcStack_3c);
              iVar11 = iVar6;
              if (iVar12 != 0) {
                pcStack_3c = (code *)**(int **)piStack_30[4];
                cVar3 = func_0x00adac80();
                if (((cVar3 != '\0') || (cVar3 = func_0x00b2de10(), cVar3 != '\0')) ||
                   (cVar3 = func_0x00b2dde0(), iVar11 = iVar6, cVar3 != '\0')) {
                  func_0x0046a880(&DAT_0113c6d8,1);
                  uVar7 = func_0x00b82c20(apppcStack_2c,pcStack_3c + 4);
                  uStack_8 = 2;
                  func_0x00b29a70(uVar7);
                  iVar11 = iVar6;
                }
              }
            }
          }
          goto LAB_00b314af;
        }
        goto LAB_00b30e18;
      }
    }
    else if (param_2 != 0) {
      if (param_2 == 1) {
        pcVar18 = "_";
        break;
      }
      if (param_2 != 2) goto LAB_00b314af;
    }
LAB_00b30dce:
    param_2 = 0;
    pcVar18 = "";
    break;
  case (int *)0x2b:
    pcStack_3c = *(code **)(param_3 + 0xbc);
    pcVar17 = *(code **)(*(int *)pcStack_3c + 0x7c);
    _guard_check_icall();
    piVar9 = (int *)(*pcVar17)();
    if (*piVar9 == 6) {
LAB_00b30de5:
      if (param_2 == 0) goto LAB_00b30dce;
      if (param_2 == 1) {
        param_2 = 4;
        pcVar18 = " + (";
      }
      else {
        iVar11 = iVar6;
        if (param_2 != 2) goto LAB_00b314af;
        param_2 = 0x1f;
        pcVar18 = ") * ATOMIC_COUNTER_ARRAY_STRIDE";
      }
    }
    else {
      if (param_2 == 0) goto LAB_00b30dce;
      if (param_2 != 1) {
        iVar11 = iVar6;
        if (param_2 == 2) {
          func_0x0046a880(&DAT_0112e28c,1);
          iVar12 = func_0x00b2a090(*(int *)(pcStack_38 + 0xbc));
          iVar11 = iVar6;
          if (iVar12 != 0) {
            pcStack_3c = *(code **)(iVar12 + 8);
            iVar10 = func_0x00b2bd80(&pcStack_3c);
            iVar11 = iVar6;
            if (iVar10 != 0) {
              pcStack_3c = *(code **)**(undefined4 **)(iVar12 + 0x10);
              cVar3 = func_0x00adac80();
              if (((cVar3 != '\0') || (cVar3 = func_0x00b2de10(), cVar3 != '\0')) ||
                 (cVar3 = func_0x00b2dde0(), iVar11 = iVar6, cVar3 != '\0')) {
                func_0x0046a880(&DAT_0113c6d8,1);
                uVar7 = func_0x00b82c20(apppcStack_2c,pcStack_3c + 4);
                uStack_8 = 3;
                func_0x00b29a70(uVar7);
                iVar11 = iVar6;
              }
            }
          }
        }
        goto LAB_00b314af;
      }
LAB_00b30e18:
      param_2 = 1;
      pcVar18 = "[";
    }
    break;
  case (int *)0x2c:
    pcStack_3c = *(code **)(param_3 + 0xbc);
    pcVar17 = *(code **)(*(int *)pcStack_3c + 0x7c);
    _guard_check_icall();
    iVar11 = (*pcVar17)();
    piStack_30 = *(int **)(iVar11 + 0x90);
    pcStack_3c = *(code **)(pcStack_38 + 0xc0);
    pcVar17 = *(code **)(*(int *)pcStack_3c + 0x10);
    _guard_check_icall();
    (*pcVar17)();
    piVar9 = (int *)piStack_30[4];
    iVar11 = func_0x00aea2f0(0);
    pcStack_3c = *(code **)(*piVar9 + iVar11 * 4);
    uVar14 = **(int **)pcStack_3c - 8;
    cVar3 = uVar14 < 0x2b;
    if (param_2 == 0) {
      if (uVar14 < 0x2b) {
        param_2 = 5;
        pcVar18 = "angle";
        break;
      }
LAB_00b31050:
      cVar3 = func_0x00b2bc50();
    }
    else if (0x2a < uVar14) goto LAB_00b31050;
    iVar11 = iVar6;
    if (param_2 == 1) {
      pcVar17 = pcStack_3c + 4;
      if (cVar3 == '\0') {
        func_0x0046a880(&DAT_0113c6d8,1);
        uVar7 = func_0x00b82d00(apppcStack_2c,pcVar17,piStack_30);
        uStack_8 = 4;
        func_0x00b29a70(uVar7);
        iVar11 = iVar6;
      }
      else {
        func_0x0046a880(&DAT_00fb8b8c,1);
        func_0x00b660c0(pcVar17);
        iVar11 = iVar6;
      }
    }
    goto LAB_00b314af;
  case (int *)0x2d:
    iVar11 = func_0x00ae9a40();
    if (((iVar11 == 0x5d) && (cVar3 = func_0x00b2a1b0(*(int *)(param_3 + 0xbc)), cVar3 != '\0')) &&
       (cVar3 = func_0x00b2de30(param_3), cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    iVar11 = iVar6;
    if (param_2 != 0) {
      if (param_2 != 1) goto LAB_00b314af;
      pcStack_3c = *(code **)(param_3 + 0xbc);
      pcVar17 = *(code **)(*(int *)pcStack_3c + 0x7c);
      _guard_check_icall();
      iVar11 = (*pcVar17)();
      piStack_30 = *(int **)(iVar11 + 0x8c);
      pcStack_3c = *(code **)(pcStack_38 + 0xc0);
      pcVar17 = *(code **)(*(int *)pcStack_3c + 0x10);
      _guard_check_icall();
      (*pcVar17)();
      piVar9 = (int *)piStack_30[4];
      iVar11 = func_0x00aea2f0(0);
      iVar11 = *(int *)(*piVar9 + iVar11 * 4);
      if (bVar2) {
LAB_00b3119c:
        puVar13 = &DAT_00fb8b8c;
      }
      else {
        pcStack_3c = (code *)piStack_30[2];
        iVar12 = func_0x00b2bd80(&pcStack_3c);
        puVar13 = &DAT_0113c6d8;
        if (iVar12 != 0) goto LAB_00b3119c;
      }
      func_0x0046a880(puVar13,1);
      uVar7 = func_0x00b82c20(apppcStack_2c,iVar11 + 4);
      uStack_8 = 5;
      func_0x00b29a70(uVar7);
      iVar11 = iVar6;
      goto LAB_00b314af;
    }
    if (!bVar2) goto LAB_00b314af;
    param_2 = 3;
    pcVar18 = "map";
    *(undefined1 *)(iStack_34 + 0x1e5) = 1;
    break;
  case (int *)0x2e:
    cVar3 = func_0x00aea7e0();
    piStack_30 = *(int **)(param_3 + 0xc0);
    pcVar17 = *(code **)(*piStack_30 + 0x18);
    if (cVar3 == '\0') {
      _guard_check_icall();
      piStack_30 = (int *)(*pcVar17)();
      if (((piStack_30 != (int *)0x0) && (*(short *)(pcStack_38 + 0xb8) == 0x2e)) &&
         ((ushort)((short)piStack_30[0x2e] - 0xfdU) < 8)) {
        pcVar17 = *(code **)(piStack_30[0x2f] + 8);
        _guard_check_icall();
        puVar5 = (undefined4 *)(*pcVar17)();
        piStack_30 = *(int **)*puVar5;
        pcVar17 = *(code **)(*piStack_30 + 0xc);
        _guard_check_icall();
        uVar7 = (*pcVar17)();
        cVar3 = func_0x00b26780(uVar7);
        if (cVar3 == '\0') {
          piStack_30 = *(int **)(pcStack_38 + 0xc0);
          pcVar17 = *(code **)(*piStack_30 + 0x18);
          _guard_check_icall();
          iVar6 = (*pcVar17)();
          uVar7 = func_0x00b2a020(*(undefined2 *)(iVar6 + 0xb8));
          func_0x00ad79e0(uVar7);
          pcVar17 = *(code **)(*(int *)(iVar6 + 0xbc) + 8);
          _guard_check_icall();
          puVar5 = (undefined4 *)(*pcVar17)();
          piVar1 = (int *)puVar5[1];
          for (piVar9 = (int *)*puVar5; piVar9 != piVar1; piVar9 = piVar9 + 1) {
            piStack_30 = (int *)*piVar9;
            pcStack_3c = *(code **)(*piStack_30 + 4);
            _guard_check_icall(iStack_34);
            (*pcStack_3c)();
            func_0x0046a880(&DAT_0112e444,2);
          }
          pcVar17 = *(code **)(**(int **)(pcStack_38 + 0xbc) + 4);
          _guard_check_icall(iStack_34);
          (*pcVar17)();
          goto LAB_00b306c4;
        }
      }
      pcVar17 = pcStack_38;
      cVar3 = func_0x00b26780(*(int *)(pcStack_38 + 0xbc));
      if (cVar3 != '\0') {
        func_0x00b80bd0(*(int *)(pcVar17 + 0xbc));
        func_0x0046a880(&DAT_0112e444,2);
        cVar3 = func_0x00b26780(*(int *)(pcVar17 + 0xc0));
        pcStack_3c = *(code **)(pcVar17 + 0xc0);
        if (cVar3 == '\0') {
          pcVar17 = *(code **)(*(int *)pcStack_3c + 4);
          _guard_check_icall(iStack_34);
          (*pcVar17)();
          func_0x0046a880(&DAT_0112e458,1);
        }
        else {
          func_0x00b80b80(pcStack_3c);
          func_0x0046a880(&DAT_0112e458,1);
        }
        goto LAB_00b314af;
      }
      cVar3 = func_0x00b26780(*(int *)(pcVar17 + 0xc0));
      if (cVar3 != '\0') {
        pcStack_3c = *(code **)(pcVar17 + 0xbc);
        pcVar17 = *(code **)(*(int *)pcStack_3c + 4);
        _guard_check_icall(iStack_34);
        (*pcVar17)();
        func_0x0046a880(&DAT_00fa32d8,3);
        func_0x00b80b80(*(int *)(pcStack_38 + 0xc0));
        goto LAB_00b314af;
      }
    }
    else {
      _guard_check_icall();
      piStack_30 = (int *)(*pcVar17)();
      pcVar17 = pcStack_38;
      if ((piStack_30 != (int *)0x0) &&
         (cVar3 = func_0x00aea8d0(), pcVar17 = pcStack_38, cVar3 != '\0')) {
        pcVar17 = *(code **)(*(int *)pcStack_38 + 0x7c);
        _guard_check_icall();
        uVar7 = (*pcVar17)();
        func_0x00b2a780(apppcStack_2c,uVar7);
        uStack_8 = 0;
        ppppcVar16 = apppcStack_2c;
        if (0xf < uStack_18) {
          ppppcVar16 = (char ****)apppcStack_2c[0];
        }
        ppppcVar15 = ppppcVar16;
        do {
          cVar3 = *(char *)ppppcVar15;
          ppppcVar15 = (char ****)((int)ppppcVar15 + 1);
        } while (cVar3 != '\0');
        func_0x0046a880(ppppcVar16,(int)ppppcVar15 - (int)((int)ppppcVar16 + 1));
        func_0x0046a880(&DAT_011434e0,1);
        pcVar17 = *(code **)(**(int **)(pcStack_38 + 0xbc) + 4);
        _guard_check_icall(iStack_34);
        (*pcVar17)();
        pcVar17 = *(code **)(piStack_30[0x2f] + 8);
        _guard_check_icall();
        puVar5 = (undefined4 *)(*pcVar17)();
        piVar1 = (int *)puVar5[1];
        for (piVar9 = (int *)*puVar5; piVar9 != piVar1; piVar9 = piVar9 + 1) {
          func_0x0046a880(&DAT_0112e444,2);
          piStack_30 = (int *)*piVar9;
          pcStack_38 = *(code **)(*piStack_30 + 4);
          _guard_check_icall(iStack_34);
          (*pcStack_38)();
        }
LAB_00b306c4:
        func_0x0046a880(&DAT_0112e458,1);
        goto LAB_00b314af;
      }
    }
    pcVar17 = *(code **)(*(int *)pcVar17 + 0x7c);
    _guard_check_icall(iVar6);
    uVar7 = (*pcVar17)();
    func_0x00b2e2b0(param_2,uVar7);
    goto LAB_00b314af;
  case (int *)0x2f:
    if (param_2 == 0) {
      pcStack_3c = *(code **)(param_3 + 0xbc);
      pcVar17 = *(code **)(*(int *)pcStack_3c + 0x48);
      _guard_check_icall();
      piStack_30 = (int *)(*pcVar17)();
      pcVar17 = *(code **)(pcStack_38 + 0xc0);
      pcStack_38 = pcVar17;
      cVar3 = func_0x00b34a30(iVar6,piStack_30,pcVar17);
      if (cVar3 == '\0') {
        pcVar17 = *(code **)(*(int *)pcVar17 + 0x6c);
        _guard_check_icall();
        cVar3 = (*pcVar17)();
        piVar9 = piStack_30;
        if (cVar3 != '\0') {
          FUN_00ade9c0(iStack_34);
          pcVar17 = *(code **)(*piVar9 + 0x7c);
          _guard_check_icall();
          uVar7 = (*pcVar17)();
          uVar7 = func_0x00b25e60(auStack_40,uVar7);
          func_0x00b660c0(uVar7);
          func_0x0046a880(&DAT_0101fb04,4);
          pcVar17 = *(code **)(*(int *)pcStack_38 + 0x7c);
          _guard_check_icall();
          (*pcVar17)();
          pcStack_3c = (code *)func_0x00adaa80();
          pcVar17 = *(code **)(*(int *)pcStack_38 + 0x74);
          _guard_check_icall();
          uVar7 = (*pcVar17)();
          func_0x00b33a10(iVar6,uVar7,pcStack_3c);
          func_0x0046a880(&DAT_00ffbf58,1);
        }
      }
    }
    else if (param_2 == 1) {
      func_0x0046a880(&DAT_00fa32d8,3,uVar4);
      cVar3 = func_0x00b26780(*(int *)(param_3 + 0xc0));
      iVar11 = iVar6;
      if (cVar3 != '\0') {
        func_0x00b80b80(*(int *)(param_3 + 0xc0));
        iVar11 = iVar6;
      }
    }
    goto LAB_00b314af;
  case (int *)0x30:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " += ";
    break;
  case (int *)0x31:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " -= ";
    break;
  case (int *)0x32:
  case (int *)0x34:
  case (int *)0x35:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " *= ";
    break;
  case (int *)0x33:
    if (param_2 == 0) {
      param_2 = 1;
      pcVar18 = "(";
    }
    else if (param_2 == 1) {
      func_0x0046a880(&DAT_0101f4b0,7,uVar4);
      pcStack_3c = *(code **)(param_3 + 0xbc);
      pcVar17 = *(code **)(*(int *)pcStack_3c + 4);
      _guard_check_icall(iStack_34);
      (*pcVar17)();
      param_2 = 0xc;
      pcVar18 = ", transpose(";
    }
    else {
      param_2 = 3;
      pcVar18 = ")))";
    }
    break;
  case (int *)0x36:
    if (param_2 == 0) {
      param_2 = 1;
      pcVar18 = "(";
    }
    else if (param_2 == 1) {
      func_0x0046a880(" = transpose(mul(transpose(",0x1b,uVar4);
      pcStack_3c = *(code **)(param_3 + 0xbc);
      pcVar17 = *(code **)(*(int *)pcStack_3c + 4);
      _guard_check_icall(iStack_34);
      (*pcVar17)();
      param_2 = 0xd;
      pcVar18 = "), transpose(";
    }
    else {
      param_2 = 4;
      pcVar18 = "))))";
    }
    break;
  case (int *)0x37:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " /= ";
    break;
  case (int *)0x38:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " %= ";
    break;
  case (int *)0x39:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 5;
    pcVar18 = " <<= ";
    break;
  case (int *)0x3a:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 5;
    pcVar18 = " >>= ";
    break;
  case (int *)0x3b:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " &= ";
    break;
  case (int *)0x3c:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " ^= ";
    break;
  case (int *)0x3d:
    if (param_2 == 0) goto LAB_00b30588;
    if (param_2 != 1) goto LAB_00b3149a;
    param_2 = 4;
    pcVar18 = " |= ";
    break;
  default:
    goto LAB_00b314af;
  }
  func_0x0046a880(pcVar18,param_2,uVar4);
  iVar11 = iVar6;
LAB_00b314af:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(iVar11);
  return;
}



uint __thiscall FUN_00b31580(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 unaff_EBP;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uStack_10;
  
  uVar9 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) + -1;
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (uVar9 >> 2 & *(int *)(param_1 + 0xec) - 1U) * 4) +
           (uVar9 & 3) * 4);
  if (*(char *)(param_1 + 0x75) == '\0') {
LAB_00b315f5:
    uStack_10 = (int *)((uint)uStack_10 & 0xffffff);
  }
  else {
    uVar9 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar9 < 2) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar9 * 4);
    }
    pcVar2 = *(code **)(*piVar10 + 0x14);
    _guard_check_icall();
    iVar6 = (*pcVar2)();
    uStack_10 = (int *)CONCAT13(1,(undefined3)uStack_10);
    if (iVar6 == 0) goto LAB_00b315f5;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    func_0x00b2e760(uVar1,*(undefined4 *)(param_3 + 8));
    func_0x0046a880(&DAT_00ffb7f4,2);
    if (uStack_10._3_1_ != '\0') {
      if (*(int *)(param_1 + 0x58) == 0x91b9) {
        uVar12 = 0x17;
        pcVar11 = "initGLBuiltins(input);\n";
      }
      else {
        uVar12 = 0x14;
        pcVar11 = "@@ MAIN PROLOGUE @@\n";
      }
      func_0x0046a880(pcVar11,uVar12);
    }
  }
  pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  puVar7 = (undefined4 *)(*pcVar2)();
  piVar3 = (int *)puVar7[1];
  for (piVar10 = (int *)*puVar7; piVar10 != piVar3; piVar10 = piVar10 + 1) {
    piVar4 = (int *)*piVar10;
    func_0x00b2e760(uVar1,piVar4[2]);
    pcVar2 = *(code **)(*piVar4 + 4);
    _guard_check_icall(param_1);
    (*pcVar2)();
    pcVar2 = *(code **)(*piVar4 + 0x44);
    _guard_check_icall();
    iVar6 = (*pcVar2)();
    if (iVar6 == 0) {
      pcVar2 = *(code **)(*piVar4 + 0x3c);
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*piVar4 + 0x1c);
        _guard_check_icall();
        iVar6 = (*pcVar2)();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piVar4 + 0x4c);
          _guard_check_icall();
          iVar6 = (*pcVar2)();
          if (iVar6 == 0) {
            pcVar2 = *(code **)(*piVar4 + 0x40);
            _guard_check_icall();
            iVar6 = (*pcVar2)();
            if (iVar6 == 0) {
              pcVar2 = *(code **)(*piVar4 + 0x14);
              _guard_check_icall();
              iVar6 = (*pcVar2)();
              if (iVar6 == 0) {
                pcVar2 = *(code **)(*piVar4 + 0x28);
                _guard_check_icall();
                iVar6 = (*pcVar2)();
                if (iVar6 != 0) {
                  pcVar2 = *(code **)(*piVar4 + 0x28);
                  _guard_check_icall();
                  uVar12 = (*pcVar2)();
                  cVar5 = func_0x00b2a110(uVar12);
                  if (cVar5 == '\0') goto LAB_00b31780;
                }
                pcVar2 = *(code **)(*piVar4 + 0x24);
                _guard_check_icall();
                iVar6 = (*pcVar2)();
                if (iVar6 == 0) {
                  func_0x0046a880(&DAT_00ffb794,2);
                }
              }
            }
          }
        }
      }
    }
LAB_00b31780:
  }
  if (*(char *)(param_1 + 0x74) == '\0') goto LAB_00b318a5;
  func_0x00b2e760(uVar1,*(undefined4 *)(param_3 + 0x10));
  if (((char)((uint)unaff_EBP >> 0x18) != '\0') &&
     ((*(int *)(param_1 + 0x58) == 0x8b31 || (*(int *)(param_1 + 0x58) == 0x8b30)))) {
    pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
    _guard_check_icall();
    piVar10 = (int *)(*pcVar2)();
    if (*piVar10 != piVar10[1]) {
      pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      pcVar2 = *(code **)(**(int **)(*(int *)(iVar6 + 4) + -4) + 0x50);
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      if (iVar6 != 0) {
        pcVar2 = *(code **)(*uStack_10 + 8);
        _guard_check_icall();
        iVar6 = (*pcVar2)();
        pcVar2 = *(code **)(**(int **)(*(int *)(iVar6 + 4) + -4) + 0x50);
        _guard_check_icall();
        iVar6 = (*pcVar2)();
        if (*(short *)(iVar6 + 0x14) == 4) goto LAB_00b31897;
      }
    }
    func_0x0046a880("return ",7);
    pcVar11 = "generateOutput()";
    if (*(int *)(param_1 + 0x58) == 0x8b31) {
      pcVar11 = "generateOutput(input)";
    }
    pcVar8 = pcVar11;
    do {
      cVar5 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar5 != '\0');
    func_0x0046a880(pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
    func_0x0046a880(&DAT_00ffb794,2);
  }
LAB_00b31897:
  param_3 = func_0x0046a880(&DAT_00ffb85c,2);
LAB_00b318a5:
  return param_3 & 0xffffff00;
}



bool __thiscall FUN_00b318c0(int param_1,undefined4 param_2,int param_3)

{
  if (*(short *)(param_3 + 0x14) == 3) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return *(char *)(param_1 + 0x58) == '\0';
}



undefined4 __thiscall FUN_00b318e0(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int unaff_retaddr;
  
  if (param_2 == 0) {
    switch(*(undefined2 *)(param_3 + 0x14)) {
    case 3:
      func_0x0046a880("discard",7);
      return 1;
    case 4:
      if (*(int *)(param_3 + 0x18) == 0) {
        if ((*(char *)(param_1 + 0x75) != '\0') && (cVar1 = func_0x00b2eb90(), cVar1 != '\0')) {
          func_0x0046a880("return ",7);
          pcVar2 = "generateOutput()";
          if (*(int *)(param_1 + 0x58) == 0x8b31) {
            pcVar2 = "generateOutput(input)";
          }
          func_0x00ad79e0(pcVar2);
          return 1;
        }
        func_0x0046a880("return",6);
      }
      else {
        func_0x0046a880("return ",7);
        cVar1 = func_0x00b26780(*(undefined4 *)(unaff_retaddr + 0x18));
        if (cVar1 != '\0') {
          func_0x00b80b80(*(undefined4 *)(unaff_retaddr + 0x18));
          return 0;
        }
      }
      break;
    case 5:
      if (1 < *(int *)(param_1 + 0x18c)) {
        *(undefined1 *)(param_1 + 0x152) = 1;
      }
      if (*(int *)(param_1 + 400) == 0) {
        func_0x0046a880("break",5);
        return 1;
      }
      func_0x0046a880(&DAT_0101fa48,6);
      FUN_00ade9c0(param_1);
      func_0x0046a880(" = true; break;}\n",0x11);
      return 1;
    case 6:
      func_0x0046a880("continue",8);
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_00b31a70(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x14) == 0) {
    func_0x0046a880("default:\n",9);
    return 0;
  }
  if (param_1 == 0) {
    func_0x0046a880("case (",6);
    return 1;
  }
  if (param_1 == 1) {
    func_0x0046a880(&DAT_0112e1b4,0);
    return 1;
  }
  if (param_1 == 2) {
    func_0x0046a880(&DAT_0101fa08,3);
  }
  return 1;
}



void __thiscall FUN_00b31b00(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) + -1;
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (uVar5 >> 2 & *(int *)(param_1 + 0xec) - 1U) * 4) +
           (uVar5 & 3) * 4);
  pcVar2 = *(code **)(*param_2 + 0x74);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  pcVar2 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  uVar4 = (*pcVar2)();
  func_0x00b33840(uVar1,uVar4,uVar3);
  return;
}



void __thiscall FUN_00b31b80(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char ****ppppcVar8;
  uint uVar9;
  char ****ppppcVar10;
  int *unaff_FS_OFFSET;
  char *pcVar11;
  undefined4 uVar12;
  undefined1 auStack_58 [8];
  int *piStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 auStack_44 [24];
  char ***pppcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f64135;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_50 = param_3;
  iStack_48 = param_1;
  if (param_2 != 0) goto LAB_00b31e71;
  pcVar1 = *(code **)(param_3[5] + 8);
  _guard_check_icall(uStack_14);
  puVar4 = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)*puVar4 + 0xc);
  _guard_check_icall();
  piVar5 = (int *)(*pcVar1)();
  cVar3 = func_0x00b2a110(piStack_50);
  if (cVar3 == '\0') {
    pcVar1 = *(code **)(*piVar5 + 0x7c);
    _guard_check_icall();
    iVar6 = (*pcVar1)();
    cVar3 = func_0x00b26b30(*(undefined4 *)(iVar6 + 8));
    if (cVar3 != '\0') {
      pcVar1 = *(code **)(*piVar5 + 0x48);
      _guard_check_icall();
      iVar6 = (*pcVar1)();
      iVar6 = *(int *)(iVar6 + 0x18);
      if ((*(byte *)(iVar6 + 0xf) & 0xf) != 3) {
        puVar4 = (undefined4 *)func_0x00aebb30();
        piStack_50 = (int *)*puVar4;
        piVar5 = (int *)func_0x00b29b60(&piStack_50);
        *piVar5 = iVar6;
      }
    }
    goto LAB_00b31e71;
  }
  uVar9 = *(int *)(iStack_48 + 0xf4) + *(int *)(iStack_48 + 0xf0) + -1;
  uStack_4c = *(undefined4 *)
               (*(int *)(*(int *)(iStack_48 + 0xe8) +
                        (*(int *)(iStack_48 + 0xec) - 1U & uVar9 >> 2) * 4) + (uVar9 & 3) * 4);
  pcVar1 = *(code **)(*piVar5 + 0x7c);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if (*(int *)(iVar6 + 0x90) != 0) {
    func_0x00b8d210(*(int *)(iVar6 + 0x90));
  }
  pcVar1 = *(code **)(*piVar5 + 0x48);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if (iVar6 != 0) {
    pcVar1 = *(code **)(*piVar5 + 0x48);
    _guard_check_icall();
    iVar6 = (*pcVar1)();
    if ((*(byte *)(*(int *)(iVar6 + 0x18) + 0xf) & 0xf) == 3) goto LAB_00b31e71;
  }
  pcVar1 = *(code **)(*piVar5 + 0x7c);
  _guard_check_icall();
  iVar6 = (*pcVar1)();
  if (*(int *)(iVar6 + 8) == 0x3a) {
    uVar12 = 0xc;
    pcVar11 = "groupshared ";
LAB_00b31cbd:
    func_0x0046a880(pcVar11,uVar12);
  }
  else if (*(char *)(iStack_48 + 0x74) == '\0') {
    uVar12 = 7;
    pcVar11 = "static ";
    goto LAB_00b31cbd;
  }
  pcVar1 = *(code **)(*piVar5 + 0x7c);
  _guard_check_icall();
  uVar12 = (*pcVar1)();
  func_0x00b849f0(auStack_44,uVar12);
  uStack_8 = 0;
  puVar4 = (undefined4 *)func_0x00ad90a0(&DAT_0113c2f0,1);
  pppcStack_2c = (char ***)*puVar4;
  uStack_1c = *(undefined8 *)(puVar4 + 4);
  uStack_28 = puVar4[1];
  uStack_24 = puVar4[2];
  uStack_20 = puVar4[3];
  puVar4[4] = 0;
  uVar2 = uStack_1c;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  uStack_1c._4_4_ = (uint)((ulonglong)uStack_1c >> 0x20);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  ppppcVar10 = &pppcStack_2c;
  if (0xf < uStack_1c._4_4_) {
    ppppcVar10 = (char ****)pppcStack_2c;
  }
  ppppcVar8 = ppppcVar10;
  do {
    cVar3 = *(char *)ppppcVar8;
    ppppcVar8 = (char ****)((int)ppppcVar8 + 1);
  } while (cVar3 != '\0');
  uStack_1c = uVar2;
  func_0x0046a880(ppppcVar10,(int)ppppcVar8 - (int)((int)ppppcVar10 + 1));
  uStack_8 = 0xffffffff;
  pcVar1 = *(code **)(*piVar5 + 0x48);
  _guard_check_icall();
  piVar7 = (int *)(*pcVar1)();
  piStack_50 = piVar7;
  if (piVar7 == (int *)0x0) {
    pcVar1 = *(code **)(*piVar5 + 4);
    _guard_check_icall(iStack_48);
    (*pcVar1)();
  }
  else {
    FUN_00ade9c0(iStack_48);
    pcVar1 = *(code **)(*piVar7 + 0x7c);
    _guard_check_icall();
    uVar12 = (*pcVar1)();
    uVar12 = func_0x00b25e60(auStack_58,uVar12);
    func_0x00b660c0(uVar12);
    pcVar1 = *(code **)(*piVar5 + 0x7c);
    _guard_check_icall();
    iVar6 = (*pcVar1)();
    if (*(int *)(iVar6 + 8) != 0x3a) {
      pcVar1 = *(code **)(*piStack_50 + 0x7c);
      _guard_check_icall();
      uVar12 = (*pcVar1)();
      uVar12 = func_0x00b34c80(auStack_44,uVar12);
      uStack_8 = 2;
      uVar12 = func_0x00b28230(&pppcStack_2c,&DAT_00fa32d8,uVar12);
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      func_0x00b29a70(uVar12);
    }
  }
LAB_00b31e71:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b31e90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6417d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar11 = *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) + -1;
  uVar7 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (*(int *)(param_1 + 0xec) - 1U & uVar11 >> 2) * 4) +
           (uVar11 & 3) * 4);
  iVar6 = func_0x00aec9e0(*(int *)(*(int *)(param_3 + 0x14) + 0x18) + 8,uStack_14);
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x178) + iVar6 * 0x24;
  iVar1 = *(int *)(*(int *)(param_3 + 0x14) + 0x18);
  cVar5 = func_0x00aee990();
  if (cVar5 == '\0') {
    pcVar2 = *(code **)(**(int **)(param_3 + 0x14) + 0x7c);
    _guard_check_icall();
    uVar8 = (*pcVar2)();
    pcVar9 = (char *)func_0x00b849f0(auStack_2c,uVar8);
    uStack_8 = 0;
    if (0xf < *(uint *)(pcVar9 + 0x14)) {
      pcVar9 = *(char **)pcVar9;
    }
    pcVar10 = pcVar9;
    do {
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    func_0x0046a880(pcVar9,(int)pcVar10 - (int)(pcVar9 + 1));
    func_0x0046a880(&DAT_0113c2f0,1);
    uStack_8 = 0xffffffff;
    pcVar9 = (char *)func_0x00b82d50(auStack_2c,iVar1);
    uStack_8 = 1;
    if (0xf < *(uint *)(pcVar9 + 0x14)) {
      pcVar9 = *(char **)pcVar9;
    }
    pcVar10 = pcVar9;
    do {
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    func_0x0046a880(pcVar9,(int)pcVar10 - (int)(pcVar9 + 1));
    pcVar9 = (char *)func_0x00b830a0(auStack_44,iVar1);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    if (0xf < *(uint *)(pcVar9 + 0x14)) {
      pcVar9 = *(char **)pcVar9;
    }
    pcVar10 = pcVar9;
    do {
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    func_0x0046a880(pcVar9,(int)pcVar10 - (int)(pcVar9 + 1));
    pcVar9 = "Lod0(";
    if (*(char *)(param_1 + 0x188) == '\0') {
      pcVar9 = "(";
    }
    pcVar10 = pcVar9;
    do {
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    func_0x0046a880(pcVar9,(int)pcVar10 - (int)(pcVar9 + 1));
    uVar12 = 0;
    uStack_8 = 0xffffffff;
    uVar11 = *(uint *)(iVar1 + 0x24);
    if (uVar11 != 0) {
      do {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + uVar12 * 4);
        iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + 0x90);
        if (iVar4 != 0) {
          func_0x00b8d210(iVar4);
        }
        func_0x00b33e60(iVar3,uVar7);
        if (uVar12 < uVar11 - 1) {
          func_0x0046a880(&DAT_0112e444,2);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
    func_0x0046a880(&DAT_011a2310,2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0x8b30) {
      func_0x0046a880("@@ PIXEL OUTPUT @@\n\n",0x14);
      if (*(char *)(param_1 + 0x1e4) != '\0') {
        func_0x0046a880("[earlydepthstencil]\n",0x14);
      }
      func_0x0046a880("PS_OUTPUT main(@@ PIXEL MAIN PARAMETERS @@)",0x2b);
    }
    else if (iVar1 == 0x8b31) {
      func_0x0046a880("@@ VERTEX ATTRIBUTES @@\n\n",0x19);
      func_0x0046a880("@@ VERTEX OUTPUT @@\n\n",0x15);
      func_0x0046a880("VS_OUTPUT main(VS_INPUT input)",0x1e);
    }
    else if (iVar1 == 0x91b9) {
      func_0x0046a880("[numthreads(",0xc);
      uVar7 = func_0x009c3cc0(0);
      func_0x00af6e40(uVar7);
      func_0x0046a880(&DAT_0112e444,2);
      uVar7 = func_0x009c3cc0(1);
      func_0x00af6e40(uVar7);
      func_0x0046a880(&DAT_0112e444,2);
      uVar7 = func_0x009c3cc0(2);
      func_0x00af6e40(uVar7);
      func_0x0046a880(&DAT_0101f86c,3);
      func_0x0046a880("void main(CS_INPUT input)",0x19);
    }
  }
  *(undefined1 *)(param_1 + 0x74) = 1;
  cVar5 = func_0x00aee990();
  if (cVar5 != '\0') {
    *(undefined1 *)(param_1 + 0x75) = 1;
  }
  FUN_00ade830(param_1);
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  if (((*(char *)(*(int *)(param_1 + 0x178) + 0x20 + iVar6 * 0x24) != '\0') &&
      (*(char *)(param_1 + 0x188) == '\0')) && (*(int *)(param_1 + 0x58) == 0x8b30)) {
    *(undefined1 *)(param_1 + 0x188) = 1;
    FUN_00ade8e0(param_1);
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b32260(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char ****ppppcVar9;
  uint uVar10;
  char ****ppppcVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [24];
  undefined1 auStack_44 [24];
  char ***apppcStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = -1;
  puStack_c = &DAT_00f641cd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar10 = *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) + -1;
  uVar2 = *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0xe8) + (*(int *)(param_1 + 0xec) - 1U & uVar10 >> 2) * 4) +
           (uVar10 & 3) * 4);
  iVar5 = func_0x00aec9e0(param_2[6] + 8,uStack_14);
  if (iVar5 != -1) {
    iVar3 = param_2[6];
    func_0x00b82d50(apppcStack_2c,iVar3);
    iStack_8 = 0;
    pcVar4 = *(code **)(*param_2 + 0x7c);
    _guard_check_icall();
    uVar6 = (*pcVar4)();
    pcVar7 = (char *)func_0x00b849f0(auStack_44,uVar6);
    iStack_8._0_1_ = 1;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar7 = *(char **)pcVar7;
    }
    pcVar8 = pcVar7;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    func_0x0046a880(pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
    func_0x0046a880(&DAT_0113c2f0,1);
    ppppcVar11 = apppcStack_2c;
    if (0xf < uStack_18) {
      ppppcVar11 = (char ****)apppcStack_2c[0];
    }
    ppppcVar9 = ppppcVar11;
    do {
      cVar1 = *(char *)ppppcVar9;
      ppppcVar9 = (char ****)((int)ppppcVar9 + 1);
    } while (cVar1 != '\0');
    func_0x0046a880(ppppcVar11,(int)ppppcVar9 - (int)((int)ppppcVar11 + 1));
    pcVar7 = (char *)func_0x00b830a0(auStack_5c,iVar3);
    iStack_8._0_1_ = 2;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar7 = *(char **)pcVar7;
    }
    pcVar8 = pcVar7;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    func_0x0046a880(pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
    pcVar7 = "Lod0(";
    if (*(char *)(param_1 + 0x188) == '\0') {
      pcVar7 = "(";
    }
    pcVar8 = pcVar7;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    func_0x0046a880(pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
    uVar12 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    uVar10 = *(uint *)(iVar3 + 0x24);
    if (uVar10 != 0) {
      do {
        func_0x00b33e60(*(undefined4 *)(*(int *)(iVar3 + 0x14) + uVar12 * 4),uVar2);
        if (uVar12 < uVar10 - 1) {
          func_0x0046a880(&DAT_0112e444,2);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
    }
    func_0x0046a880(&DAT_0101f8a4,3);
    if (((*(char *)(*(int *)(param_1 + 0x178) + 0x20 + iVar5 * 0x24) != '\0') &&
        (*(char *)(param_1 + 0x188) == '\0')) && (*(int *)(param_1 + 0x58) == 0x8b30)) {
      *(undefined1 *)(param_1 + 0x188) = 1;
      FUN_00ade900(param_1);
      *(undefined1 *)(param_1 + 0x188) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



uint __thiscall FUN_00b32490(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 unaff_EBP;
  char cStack_41;
  
  if (*(int *)(param_1 + 0x58) == 0x8b30) {
    cVar3 = func_0x00b7e710(param_3);
    if (cVar3 != '\0') {
      func_0x0046a880("FLATTEN ",8);
    }
  }
  func_0x0046a880(&DAT_0101f9d8,4);
  pcVar1 = *(code **)(**(int **)(param_3 + 0x14) + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  cVar3 = '\x01';
  func_0x0046a880(&DAT_011a2310,2);
  func_0x00b2e760(unaff_EBP,*(undefined4 *)(param_3 + 8));
  if (*(int *)(param_3 + 0x18) == 0) {
    func_0x0046a880(&DAT_0101f9e0,4);
  }
  else {
    FUN_00ade830(param_1);
    func_0x00b2eb00(*(undefined4 *)(param_3 + 0x18));
  }
  uVar4 = func_0x00b2e760(unaff_EBP,*(undefined4 *)(param_3 + 8));
  if (*(int *)(param_3 + 0x1c) == 0) {
    if (cVar3 == '\0') goto LAB_00b325d7;
  }
  else {
    func_0x0046a880("else\n",5);
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 8);
    func_0x00b2e760(unaff_EBP);
    FUN_00ade830(param_1);
    uVar4 = func_0x00b2e760(unaff_EBP,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 8));
    cStack_41 = (char)((uint)uVar2 >> 0x18);
    if (cStack_41 == '\0') {
      uVar4 = func_0x00b2eb00(*(undefined4 *)(param_3 + 0x1c));
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x151) = 1;
LAB_00b325d7:
  return uVar4 & 0xffffff00;
}



uint __thiscall FUN_00b325f0(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
