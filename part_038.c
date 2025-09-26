  return;
}



void __thiscall
FUN_00a597b0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            int param_6,undefined4 *param_7,int param_8)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_retaddr;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_28;
  int iStack_24;
  uint uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&puStack_7c;
  iStack_6c = param_2;
  puStack_7c = param_4;
  iStack_70 = param_6;
  puStack_74 = param_7;
  uStack_78 = param_1;
  if ((*(int *)(param_2 + 0x14f4) != 0) && (*(int *)(*(int *)(param_2 + 0x14f4) + 0x158) != 0)) {
    func_0x009862d0(param_2);
  }
  uStack_68 = CONCAT44(*(int *)(param_2 + 0x14f4),(int)uStack_68);
  if ((*(int *)(param_2 + 0x14f4) == 0) || (cVar2 = func_0x00983a10(), cVar2 == '\0')) {
    uStack_68 = uStack_68 & 0xffffffff00000000;
    if (0 < param_8) {
      iVar5 = iStack_70 - (int)param_7;
      param_4 = (undefined4 *)((int)param_4 - (int)param_7);
      puStack_7c = param_4;
      iStack_70 = iVar5;
      do {
        cVar2 = func_0x008d6750(param_3,*(undefined4 *)((int)param_7 + (int)param_4),*param_7);
        if (cVar2 == '\0') {
          uVar1 = *param_7;
          iVar5 = *(int *)((int)param_7 + iVar5);
          iVar6 = *(int *)((int)param_7 + (int)puStack_7c);
          cVar2 = func_0x00b4f5b0(param_2);
          if (cVar2 == '\0') {
            iVar3 = func_0x00a3efa0(param_2,unaff_retaddr,0,iVar6,param_3,iVar5,uVar1,0,0,0);
            if (iVar3 == 1) goto LAB_00a59ed0;
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_2 + 0x1514);
            uStack_68 = 0;
            uStack_60 = 0;
            if ((((*(int *)(iVar3 + 100) == 0) || (*(int *)(iVar3 + 0x14c) != param_3)) ||
                (*(int *)(iVar3 + 0x150) != iVar6)) || (*(int *)(iVar3 + 0x154) != iVar5)) {
              iVar3 = func_0x008e4e20(param_2,param_3,iVar6,iVar5,&uStack_68);
              if (iVar3 == 1) {
LAB_00a59ed0:
                FUN_008ab370();
                return;
              }
            }
            else {
              uStack_68 = *(ulonglong *)(iVar3 + 0x158);
              uStack_60 = *(undefined4 *)(iVar3 + 0x160);
            }
            iVar3 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_68,0,&iStack_6c);
            if ((iVar3 == 1) ||
               (iVar4 = func_0x00a3efa0(param_2,unaff_retaddr,iStack_6c,iVar6,param_3,iVar5,uVar1,0,
                                        0,0), iVar3 = iStack_6c, iVar4 == 1)) goto LAB_00a59ed0;
          }
          iVar5 = func_0x009e4200(param_2,unaff_retaddr,iVar3,iVar6,param_3,iVar5,uVar1,0,0,1);
          param_7 = puStack_7c;
          if (iVar5 == 1) goto LAB_00a59ed0;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*(undefined4 *)((int)puStack_7c + (int)unaff_EBP),*puStack_7c);
          }
          uStack_34 = *(uint *)(param_2 + 0x2010);
          uStack_30 = *(uint *)(param_2 + 0x2014);
          func_0x008c2250(&uStack_34,0);
          func_0x008c2250(&iStack_3c,2);
          if (iStack_28 != iStack_50) {
            do {
              iVar5 = func_0x008eb2c0(iStack_3c * 0x20 + iStack_24);
              if (*(int *)(iVar5 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            } while (iStack_28 != iStack_50);
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar6 = iStack_38;
          param_4 = unaff_EBP;
          uVar7 = uStack_c;
          param_2 = iStack_6c;
          uVar8 = uStack_4c;
          iVar5 = iStack_70;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(iStack_6c + 0x1748) + 4 + (uVar8 * 0x20 + uStack_30) * 0x1c) !=
                  0) {
                func_0x00953460(1);
                iVar6 = iStack_38;
                uVar7 = uStack_c;
                uVar8 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                iStack_50 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar8 = uVar8 + 1, uStack_4c = uVar8, uVar8 < 3))) {
                uStack_34 = *(uint *)(iVar6 + uVar8 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              param_4 = puStack_7c;
              param_2 = iStack_6c;
              iVar5 = iStack_70;
              param_7 = puStack_74;
            } while (uStack_34 != uVar7);
          }
        }
        param_7 = param_7 + 1;
        iVar6 = (int)uStack_68 + 1;
        uStack_68 = CONCAT44(uStack_68._4_4_,iVar6);
        puStack_74 = param_7;
      } while (iVar6 < param_8);
    }
  }
  else {
    iStack_54 = 0;
    if (0 < param_8) {
      iStack_70 = iStack_70 - (int)param_7;
      puStack_7c = (undefined4 *)((int)puStack_7c - (int)param_7);
      do {
        iVar5 = iStack_54;
        cVar2 = func_0x008d6750(param_3,*(undefined4 *)((int)puStack_7c + (int)param_7),*param_7);
        if (cVar2 == '\0') {
          func_0x00986d90(iVar5);
          uVar1 = *param_7;
          iVar5 = *(int *)((int)puStack_74 + (int)param_7);
          iVar6 = *(int *)(unaff_EBX + (int)param_7);
          cVar2 = func_0x00b4f5b0(param_2);
          if (cVar2 == '\0') {
            iVar3 = func_0x00a3efa0(param_2,unaff_retaddr,0,iVar6,param_3,iVar5,uVar1,0,0,0);
            if (iVar3 == 1) goto LAB_00a59ed0;
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_2 + 0x1514);
            uStack_68 = 0;
            uStack_60 = 0;
            if ((((*(int *)(iVar3 + 100) == 0) || (*(int *)(iVar3 + 0x14c) != param_3)) ||
                (*(int *)(iVar3 + 0x150) != iVar6)) || (*(int *)(iVar3 + 0x154) != iVar5)) {
              iVar3 = func_0x008e4e20(param_2,param_3,iVar6,iVar5,&uStack_68);
              if (iVar3 == 1) goto LAB_00a59ed0;
            }
            else {
              uStack_68 = *(ulonglong *)(iVar3 + 0x158);
              uStack_60 = *(undefined4 *)(iVar3 + 0x160);
            }
            iVar3 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_68,0,&iStack_70);
            if ((iVar3 == 1) ||
               (iVar4 = func_0x00a3efa0(param_2,unaff_retaddr,iStack_70,iVar6,param_3,iVar5,uVar1,0,
                                        0,0), iVar3 = iStack_70, iVar4 == 1)) goto LAB_00a59ed0;
          }
          iVar5 = func_0x009e4200(param_2,unaff_retaddr,iVar3,iVar6,param_3,iVar5,uVar1,0,0,1);
          param_7 = puStack_7c;
          if (iVar5 == 1) goto LAB_00a59ed0;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*(undefined4 *)((int)unaff_EBP + (int)puStack_7c),*puStack_7c);
          }
          uStack_34 = *(uint *)(param_2 + 0x2010);
          uStack_30 = *(uint *)(param_2 + 0x2014);
          func_0x008c2250(&uStack_34,0);
          func_0x008c2250(&iStack_3c,2);
          if (iStack_28 != iStack_50) {
            do {
              iVar5 = func_0x008eb2c0(iStack_3c * 0x20 + iStack_24);
              if (*(int *)(iVar5 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            } while (iStack_28 != iStack_50);
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar6 = iStack_38;
          iVar5 = iStack_54;
          uVar7 = uStack_c;
          param_2 = iStack_6c;
          uVar8 = uStack_4c;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(iStack_6c + 0x1748) + 4 + (uVar8 * 0x20 + uStack_30) * 0x1c) !=
                  0) {
                func_0x00953460(1);
                iVar6 = iStack_38;
                uVar7 = uStack_c;
                uVar8 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                iStack_50 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar8 = uVar8 + 1, uStack_4c = uVar8, uVar8 < 3))) {
                uStack_34 = *(uint *)(iVar6 + uVar8 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              iVar5 = iStack_54;
              param_2 = iStack_6c;
              param_7 = puStack_74;
            } while (uStack_34 != uVar7);
          }
        }
        iStack_54 = iVar5 + 1;
        param_7 = param_7 + 1;
        puStack_74 = param_7;
      } while (iStack_54 < param_8);
    }
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a59ef0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7,undefined4 *param_8,uint *param_9,int param_10)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  uint *puStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined *puStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_5c = 0xffffffff;
  puStack_60 = &DAT_00f5089d;
  iStack_64 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&uStack_58;
  *unaff_FS_OFFSET = (int)&iStack_64;
  iStack_68 = param_4;
  iStack_84 = param_6;
  puStack_70 = param_7;
  puStack_78 = param_8;
  puStack_7c = param_9;
  uStack_74 = param_1;
  if ((*(int *)(param_2 + 0x14f4) != 0) && (*(int *)(*(int *)(param_2 + 0x14f4) + 0x158) != 0)) {
    func_0x009862d0(param_2,uStack_8);
  }
  iVar7 = *(int *)(param_2 + 0x14f4);
  if ((iVar7 == 0) || (cVar5 = func_0x00983a10(), cVar5 == '\0')) {
    bVar3 = false;
    if (iVar7 != 0) goto LAB_00a59f83;
LAB_00a59f98:
    bVar2 = false;
    uStack_58 = uStack_58 & 0xffffff00;
    if (iVar7 != 0) goto LAB_00a59fa8;
  }
  else {
    bVar3 = true;
LAB_00a59f83:
    cVar5 = func_0x00983a00();
    if (cVar5 == '\0') goto LAB_00a59f98;
    bVar2 = true;
    uStack_58 = CONCAT31(uStack_58._1_3_,1);
LAB_00a59fa8:
    cVar5 = func_0x009839f0();
    if (cVar5 != '\0') {
      cVar5 = '\x01';
      goto LAB_00a59fb7;
    }
  }
  cVar5 = '\0';
LAB_00a59fb7:
  iStack_80 = CONCAT31(iStack_80._1_3_,cVar5);
  func_0x0095c5d0(iVar7,uStack_58,iStack_80);
  uStack_5c = 0;
  if (bVar3) {
    if (bVar2) {
      if (cVar5 == '\0') {
        iStack_80 = 0;
        if (0 < param_10) {
          puStack_70 = (undefined4 *)((int)puStack_70 - (int)param_8);
          puStack_7c = (uint *)((int)puStack_7c - (int)param_8);
          iStack_84 = iStack_84 - (int)param_8;
          iStack_68 = iStack_68 - (int)param_8;
          do {
            iVar7 = iStack_80;
            cVar5 = func_0x008d6750(param_3,*(undefined4 *)((int)param_8 + iStack_68),
                                    *(undefined4 *)((int)param_8 + (int)puStack_70));
            if (cVar5 == '\0') {
              func_0x00986d90(iVar7);
              func_0x00986d20(*param_8);
              uStack_58 = *(uint *)((int)param_8 + (int)puStack_7c);
              uStack_54 = *param_8;
              uStack_6c = *(undefined4 *)((int)param_8 + (int)puStack_70);
              iVar7 = *(int *)((int)param_8 + iStack_84);
              iVar1 = *(int *)((int)puStack_78 + iStack_68);
              cVar5 = func_0x00b4f5b0(param_2);
              if (cVar5 == '\0') {
                iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                        uStack_58,0);
                if (iVar6 == 1) break;
                uVar10 = 0;
              }
              else {
                iVar6 = *(int *)(param_2 + 0x1514);
                uStack_94 = 0;
                uStack_8c = 0;
                if ((((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                    (*(int *)(iVar6 + 0x150) != iVar1)) || (*(int *)(iVar6 + 0x154) != iVar7)) {
                  iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                  if (iVar6 == 1) break;
                }
                else {
                  uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                  uStack_8c = *(undefined4 *)(iVar6 + 0x160);
                }
                iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                        &uStack_88);
                if ((iVar6 == 1) ||
                   (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                            uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
                break;
              }
              iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54
                                      ,uStack_58,1);
              if (iVar7 == 1) break;
              if (*(char *)(param_2 + 0x200c) != '\0') {
                func_0x008e37f0(param_2,*(undefined4 *)((int)puStack_78 + iStack_68),
                                *(undefined4 *)((int)puStack_78 + (int)puStack_70));
              }
              uStack_10 = *(undefined4 *)(param_2 + 0x2010);
              uStack_c = *(undefined4 *)(param_2 + 0x2014);
              func_0x008c2250(&uStack_10,0);
              func_0x008c2250(&uStack_10,2);
              if (uStack_38 != uStack_18) {
                do {
                  iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                  if (*(int *)(iVar7 + 4) != 0) {
                    func_0x00968810();
                  }
                  func_0x008c2d60();
                } while (uStack_38 != uStack_18);
              }
              func_0x008c22f0(param_2 + 0x2018,0);
              func_0x008c22f0(param_2 + 0x2018,3);
              iVar7 = iStack_80;
              uVar9 = uStack_30;
              param_8 = puStack_78;
              if (uStack_18 != uStack_38) {
                do {
                  if (*(int *)(*(int *)(param_2 + 0x1748) + 4 + (uVar9 * 0x20 + uStack_14) * 0x1c)
                      != 0) {
                    func_0x00953460(1);
                    uVar9 = uStack_30;
                  }
                  uStack_18 = uStack_18 & ~(1 << (uStack_14 & 0x1f));
                  if (uStack_18 == 0) {
                    uStack_14 = 0;
                  }
                  else {
                    uStack_58 = 0;
                    uStack_14 = 0;
                    if (uStack_18 != 0) {
                      for (; (uStack_18 >> uStack_14 & 1) == 0; uStack_14 = uStack_14 + 1) {
                      }
                    }
                  }
                  while ((uStack_18 == 0 && (uVar9 = uVar9 + 1, uStack_30 = uVar9, uVar9 < 3))) {
                    uStack_18 = *(uint *)(iStack_1c + uVar9 * 4);
                    uStack_14 = 0;
                    if (uStack_18 != 0) {
                      uStack_58 = 0;
                      uStack_14 = 0;
                      if (uStack_18 != 0) {
                        for (; (uStack_18 >> uStack_14 & 1) == 0; uStack_14 = uStack_14 + 1) {
                        }
                      }
                    }
                  }
                  iVar7 = iStack_80;
                  param_8 = puStack_78;
                } while (uStack_18 != uStack_38);
              }
            }
            iStack_80 = iVar7 + 1;
            param_8 = param_8 + 1;
            puStack_78 = param_8;
          } while (iStack_80 < param_10);
        }
      }
      else {
        iStack_80 = 0;
        if (0 < param_10) {
          puStack_70 = (undefined4 *)((int)puStack_70 - (int)param_8);
          puStack_7c = (uint *)((int)puStack_7c - (int)param_8);
          iStack_84 = iStack_84 - (int)param_8;
          iStack_68 = iStack_68 - (int)param_8;
          do {
            iVar7 = iStack_80;
            cVar5 = func_0x008d6750(param_3,*(undefined4 *)(iStack_68 + (int)param_8),
                                    *(undefined4 *)((int)puStack_70 + (int)param_8));
            if (cVar5 == '\0') {
              func_0x00986d90(iVar7);
              func_0x00986d20(*param_8);
              puVar4 = puStack_7c;
              func_0x00986cd0(*(undefined4 *)((int)puStack_7c + (int)param_8));
              uStack_6c = *(undefined4 *)((int)puVar4 + (int)param_8);
              uStack_54 = *param_8;
              uStack_58 = *(uint *)((int)puStack_70 + (int)param_8);
              iVar7 = *(int *)(iStack_84 + (int)param_8);
              iVar1 = *(int *)(iStack_68 + (int)puStack_78);
              cVar5 = func_0x00b4f5b0(param_2);
              if (cVar5 == '\0') {
                iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_58,uStack_54,
                                        uStack_6c,0);
                if (iVar6 == 1) break;
                uVar10 = 0;
              }
              else {
                iVar6 = *(int *)(param_2 + 0x1514);
                uStack_94 = 0;
                uStack_8c = 0;
                if ((((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                    (*(int *)(iVar6 + 0x150) != iVar1)) || (*(int *)(iVar6 + 0x154) != iVar7)) {
                  iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                  if (iVar6 == 1) break;
                }
                else {
                  uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                  uStack_8c = *(undefined4 *)(iVar6 + 0x160);
                }
                iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                        &uStack_88);
                if ((iVar6 == 1) ||
                   (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_58,
                                            uStack_54,uStack_6c,0), uVar10 = uStack_88, iVar6 == 1))
                break;
              }
              iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_58,uStack_54
                                      ,uStack_6c,1);
              if (iVar7 == 1) break;
              if (*(char *)(param_2 + 0x200c) != '\0') {
                func_0x008e37f0(param_2,*(undefined4 *)(iStack_68 + (int)puStack_78),
                                *(undefined4 *)((int)puStack_70 + (int)puStack_78));
              }
              uStack_10 = *(undefined4 *)(param_2 + 0x2010);
              uStack_c = *(undefined4 *)(param_2 + 0x2014);
              func_0x008c2250(&uStack_10,0);
              func_0x008c2250(&uStack_10,2);
              if (uStack_38 != uStack_18) {
                do {
                  iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                  if (*(int *)(iVar7 + 4) != 0) {
                    func_0x00968810();
                  }
                  func_0x008c2d60();
                } while (uStack_38 != uStack_18);
              }
              func_0x008c22f0(param_2 + 0x2018,0);
              func_0x008c22f0(param_2 + 0x2018,3);
              iVar7 = iStack_80;
              param_8 = puStack_78;
              if (uStack_18 != uStack_38) {
                do {
                  if (*(int *)(*(int *)(param_2 + 0x1748) + 4 +
                              (uStack_30 * 0x20 + uStack_14) * 0x1c) != 0) {
                    func_0x00953460(1);
                  }
                  func_0x008c2db0();
                  iVar7 = iStack_80;
                  param_8 = puStack_78;
                } while (uStack_18 != uStack_38);
              }
            }
            iStack_80 = iVar7 + 1;
            param_8 = param_8 + 1;
            puStack_78 = param_8;
          } while (iStack_80 < param_10);
        }
      }
    }
    else if (cVar5 == '\0') {
      iStack_80 = 0;
      if (0 < param_10) {
        puStack_7c = (uint *)((int)puStack_7c - (int)param_8);
        iStack_84 = iStack_84 - (int)param_8;
        param_8 = (undefined4 *)((int)param_8 - (int)puStack_70);
        iStack_68 = iStack_68 - (int)puStack_70;
        puStack_78 = param_8;
        do {
          iVar7 = iStack_80;
          cVar5 = func_0x008d6750(param_3,*(undefined4 *)(iStack_68 + (int)puStack_70),*puStack_70);
          if (cVar5 == '\0') {
            func_0x00986d90(iVar7);
            param_8 = (undefined4 *)((int)param_8 + (int)puStack_70);
            uStack_58 = *(uint *)((int)param_8 + (int)puStack_7c);
            uStack_54 = *param_8;
            uStack_6c = *puStack_70;
            iVar7 = *(int *)(iStack_84 + (int)param_8);
            iVar1 = *(int *)(iStack_68 + (int)puStack_70);
            cVar5 = func_0x00b4f5b0(param_2);
            if (cVar5 == '\0') {
              iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                      uStack_58,0);
              if (iVar6 == 1) break;
              uVar10 = 0;
            }
            else {
              iVar6 = *(int *)(param_2 + 0x1514);
              uStack_94 = 0;
              uStack_8c = 0;
              if ((((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                  (*(int *)(iVar6 + 0x150) != iVar1)) || (*(int *)(iVar6 + 0x154) != iVar7)) {
                iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                if (iVar6 == 1) break;
              }
              else {
                uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                uStack_8c = *(undefined4 *)(iVar6 + 0x160);
              }
              iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                      &uStack_88);
              if ((iVar6 == 1) ||
                 (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                          uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
              break;
            }
            iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                    uStack_58,1);
            if (iVar7 == 1) break;
            if (*(char *)(param_2 + 0x200c) != '\0') {
              func_0x008e37f0(param_2,*(undefined4 *)(iStack_68 + (int)puStack_70),*puStack_70);
            }
            uStack_10 = *(undefined4 *)(param_2 + 0x2010);
            uStack_c = *(undefined4 *)(param_2 + 0x2014);
            func_0x008c2250(&uStack_10,0);
            func_0x008c2250(&uStack_10,2);
            if (uStack_38 != uStack_18) {
              do {
                iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                if (*(int *)(iVar7 + 4) != 0) {
                  func_0x00968810();
                }
                func_0x008c2d60();
              } while (uStack_38 != uStack_18);
            }
            func_0x008c22f0(param_2 + 0x2018,0);
            func_0x008c22f0(param_2 + 0x2018,3);
            iVar7 = iStack_80;
            param_8 = puStack_78;
            if (uStack_18 != uStack_38) {
              do {
                if (*(int *)(*(int *)(param_2 + 0x1748) + 4 + (uStack_30 * 0x20 + uStack_14) * 0x1c)
                    != 0) {
                  func_0x00953460(1);
                }
                func_0x008c2db0();
                iVar7 = iStack_80;
                param_8 = puStack_78;
              } while (uStack_18 != uStack_38);
            }
          }
          iStack_80 = iVar7 + 1;
          puStack_70 = puStack_70 + 1;
        } while (iStack_80 < param_10);
      }
    }
    else {
      iStack_80 = 0;
      if (0 < param_10) {
        param_8 = (undefined4 *)((int)param_8 - (int)puStack_7c);
        puStack_70 = (undefined4 *)((int)puStack_70 - (int)puStack_7c);
        iStack_84 = iStack_84 - (int)puStack_7c;
        iStack_68 = iStack_68 - (int)puStack_7c;
        puStack_78 = param_8;
        do {
          iVar7 = iStack_80;
          cVar5 = func_0x008d6750(param_3,*(undefined4 *)(iStack_68 + (int)puStack_7c),
                                  *(undefined4 *)((int)puStack_70 + (int)puStack_7c));
          if (cVar5 == '\0') {
            func_0x00986d90(iVar7);
            puVar4 = puStack_7c;
            func_0x00986cd0(*puStack_7c);
            uStack_58 = *puVar4;
            uStack_54 = *(undefined4 *)((int)param_8 + (int)puVar4);
            uStack_6c = *(undefined4 *)((int)puStack_70 + (int)puVar4);
            iVar7 = *(int *)(iStack_84 + (int)puVar4);
            iVar1 = *(int *)(iStack_68 + (int)puVar4);
            cVar5 = func_0x00b4f5b0(param_2);
            if (cVar5 == '\0') {
              iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                      uStack_58,0);
              if (iVar6 == 1) break;
              uVar10 = 0;
            }
            else {
              iVar6 = *(int *)(param_2 + 0x1514);
              uStack_94 = 0;
              uStack_8c = 0;
              if (((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                 ((*(int *)(iVar6 + 0x150) != iVar1 || (*(int *)(iVar6 + 0x154) != iVar7)))) {
                iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                if (iVar6 == 1) break;
              }
              else {
                uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                uStack_8c = *(undefined4 *)(iVar6 + 0x160);
              }
              iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                      &uStack_88);
              if ((iVar6 == 1) ||
                 (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                          uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
              break;
            }
            iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                    uStack_58,1);
            if (iVar7 == 1) break;
            if (*(char *)(param_2 + 0x200c) != '\0') {
              func_0x008e37f0(param_2,*(undefined4 *)(iStack_68 + (int)puStack_7c),
                              *(undefined4 *)((int)puStack_70 + (int)puStack_7c));
            }
            uStack_10 = *(undefined4 *)(param_2 + 0x2010);
            uStack_c = *(undefined4 *)(param_2 + 0x2014);
            func_0x008c2250(&uStack_10,0);
            func_0x008c2250(&uStack_10,2);
            if (uStack_38 != uStack_18) {
              do {
                iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                if (*(int *)(iVar7 + 4) != 0) {
                  func_0x00968810();
                }
                func_0x008c2d60();
              } while (uStack_38 != uStack_18);
            }
            func_0x008c22f0(param_2 + 0x2018,0);
            func_0x008c22f0(param_2 + 0x2018,3);
            iVar7 = iStack_80;
            uVar9 = uStack_30;
            param_8 = puStack_78;
            if (uStack_18 != uStack_38) {
              do {
                if (*(int *)(*(int *)(param_2 + 0x1748) + 4 + (uVar9 * 0x20 + uStack_14) * 0x1c) !=
                    0) {
                  func_0x00953460(1);
                  uVar9 = uStack_30;
                }
                uStack_18 = uStack_18 & ~(1 << (uStack_14 & 0x1f));
                if (uStack_18 == 0) {
                  uStack_14 = 0;
                }
                else {
                  uStack_58 = 0;
                  uStack_14 = 0;
                  if (uStack_18 != 0) {
                    for (; (uStack_18 >> uStack_14 & 1) == 0; uStack_14 = uStack_14 + 1) {
                    }
                  }
                }
                while ((uStack_18 == 0 && (uVar9 = uVar9 + 1, uStack_30 = uVar9, uVar9 < 3))) {
                  uStack_18 = *(uint *)(iStack_1c + uVar9 * 4);
                  uStack_14 = 0;
                  if (uStack_18 != 0) {
                    uStack_58 = 0;
                    uStack_14 = 0;
                    if (uStack_18 != 0) {
                      for (; (uStack_18 >> uStack_14 & 1) == 0; uStack_14 = uStack_14 + 1) {
                      }
                    }
                  }
                }
                iVar7 = iStack_80;
                param_8 = puStack_78;
              } while (uStack_18 != uStack_38);
            }
          }
          iStack_80 = iVar7 + 1;
          puStack_7c = puStack_7c + 1;
        } while (iStack_80 < param_10);
      }
    }
  }
  else {
    iStack_80 = 0;
    if (bVar2) {
      if (cVar5 == '\0') {
        if (0 < param_10) {
          puVar8 = (undefined4 *)((int)puStack_70 - (int)param_8);
          puStack_7c = (uint *)((int)puStack_7c - (int)param_8);
          iStack_84 = iStack_84 - (int)param_8;
          iStack_68 = iStack_68 - (int)param_8;
          puStack_70 = puVar8;
          do {
            cVar5 = func_0x008d6750(param_3,*(undefined4 *)(iStack_68 + (int)param_8),
                                    *(undefined4 *)((int)puVar8 + (int)param_8));
            if (cVar5 == '\0') {
              func_0x00986d20(*param_8);
              uStack_58 = *(uint *)((int)puStack_7c + (int)param_8);
              uStack_54 = *param_8;
              uStack_6c = *(undefined4 *)((int)puVar8 + (int)param_8);
              iVar7 = *(int *)(iStack_84 + (int)param_8);
              iVar1 = *(int *)(iStack_68 + (int)puStack_78);
              cVar5 = func_0x00b4f5b0(param_2);
              if (cVar5 == '\0') {
                iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                        uStack_58,0);
                if (iVar6 == 1) break;
                uVar10 = 0;
              }
              else {
                iVar6 = *(int *)(param_2 + 0x1514);
                uStack_94 = 0;
                uStack_8c = 0;
                if ((((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                    (*(int *)(iVar6 + 0x150) != iVar1)) || (*(int *)(iVar6 + 0x154) != iVar7)) {
                  iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                  if (iVar6 == 1) break;
                }
                else {
                  uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                  uStack_8c = *(undefined4 *)(iVar6 + 0x160);
                }
                iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                        &uStack_88);
                if ((iVar6 == 1) ||
                   (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                            uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
                break;
              }
              iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54
                                      ,uStack_58,1);
              puVar8 = puStack_70;
              if (iVar7 == 1) break;
              if (*(char *)(param_2 + 0x200c) != '\0') {
                func_0x008e37f0(param_2,*(undefined4 *)(iStack_68 + (int)puStack_78),
                                *(undefined4 *)((int)puStack_70 + (int)puStack_78));
              }
              uStack_10 = *(undefined4 *)(param_2 + 0x2010);
              uStack_c = *(undefined4 *)(param_2 + 0x2014);
              func_0x008c2250(&uStack_10,0);
              func_0x008c2250(&uStack_10,2);
              if (uStack_38 != uStack_18) {
                do {
                  iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                  if (*(int *)(iVar7 + 4) != 0) {
                    func_0x00968810();
                  }
                  func_0x008c2d60();
                } while (uStack_38 != uStack_18);
              }
              func_0x008c22f0(param_2 + 0x2018,0);
              func_0x008c22f0(param_2 + 0x2018,3);
              param_8 = puStack_78;
              if (uStack_18 != uStack_38) {
                do {
                  if (*(int *)(*(int *)(param_2 + 0x1748) + 4 +
                              (uStack_30 * 0x20 + uStack_14) * 0x1c) != 0) {
                    func_0x00953460(1);
                  }
                  func_0x008c2db0();
                  param_8 = puStack_78;
                } while (uStack_18 != uStack_38);
              }
            }
            param_8 = param_8 + 1;
            iStack_80 = iStack_80 + 1;
            puStack_78 = param_8;
          } while (iStack_80 < param_10);
        }
      }
      else if (0 < param_10) {
        puVar8 = (undefined4 *)((int)puStack_70 - (int)param_8);
        puStack_7c = (uint *)((int)puStack_7c - (int)param_8);
        iStack_84 = iStack_84 - (int)param_8;
        iStack_68 = iStack_68 - (int)param_8;
        puStack_70 = puVar8;
        do {
          cVar5 = func_0x008d6750(param_3,*(undefined4 *)((int)param_8 + iStack_68),
                                  *(undefined4 *)((int)param_8 + (int)puVar8));
          if (cVar5 == '\0') {
            func_0x00986d20(*param_8);
            func_0x00986cd0(*(undefined4 *)((int)param_8 + (int)puStack_7c));
            uStack_58 = *(uint *)((int)param_8 + (int)puStack_7c);
            uStack_54 = *param_8;
            uStack_6c = *(undefined4 *)((int)param_8 + (int)puVar8);
            iVar7 = *(int *)((int)param_8 + iStack_84);
            iVar1 = *(int *)((int)puStack_78 + iStack_68);
            cVar5 = func_0x00b4f5b0(param_2);
            if (cVar5 == '\0') {
              iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                      uStack_58,0);
              if (iVar6 == 1) break;
              uVar10 = 0;
            }
            else {
              iVar6 = *(int *)(param_2 + 0x1514);
              uStack_94 = 0;
              uStack_8c = 0;
              if (((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                 ((*(int *)(iVar6 + 0x150) != iVar1 || (*(int *)(iVar6 + 0x154) != iVar7)))) {
                iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                if (iVar6 == 1) break;
              }
              else {
                uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                uStack_8c = *(undefined4 *)(iVar6 + 0x160);
              }
              iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                      &uStack_88);
              if ((iVar6 == 1) ||
                 (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                          uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
              break;
            }
            iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                    uStack_58,1);
            puVar8 = puStack_70;
            if (iVar7 == 1) break;
            if (*(char *)(param_2 + 0x200c) != '\0') {
              func_0x008e37f0(param_2,*(undefined4 *)((int)puStack_78 + iStack_68),
                              *(undefined4 *)((int)puStack_78 + (int)puStack_70));
            }
            uStack_10 = *(undefined4 *)(param_2 + 0x2010);
            uStack_c = *(undefined4 *)(param_2 + 0x2014);
            func_0x008c2250(&uStack_10,0);
            func_0x008c2250(&uStack_10,2);
            if (uStack_38 != uStack_18) {
              do {
                iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                if (*(int *)(iVar7 + 4) != 0) {
                  func_0x00968810();
                }
                func_0x008c2d60();
              } while (uStack_38 != uStack_18);
            }
            func_0x008c22f0(param_2 + 0x2018,0);
            func_0x008c22f0(param_2 + 0x2018,3);
            param_8 = puStack_78;
            if (uStack_18 != uStack_38) {
              do {
                if (*(int *)(*(int *)(param_2 + 0x1748) + 4 + (uStack_30 * 0x20 + uStack_14) * 0x1c)
                    != 0) {
                  func_0x00953460(1);
                }
                func_0x008c2db0();
                param_8 = puStack_78;
              } while (uStack_18 != uStack_38);
            }
          }
          param_8 = param_8 + 1;
          iStack_80 = iStack_80 + 1;
          puStack_78 = param_8;
        } while (iStack_80 < param_10);
      }
    }
    else if (cVar5 == '\0') {
      if (0 < param_10) {
        puStack_7c = (uint *)((int)puStack_7c - (int)param_8);
        iStack_84 = iStack_84 - (int)param_8;
        param_8 = (undefined4 *)((int)param_8 - (int)puStack_70);
        iStack_68 = iStack_68 - (int)puStack_70;
        puStack_78 = param_8;
        do {
          puVar8 = puStack_70;
          cVar5 = func_0x008d6750(param_3,*(undefined4 *)(iStack_68 + (int)puStack_70),*puStack_70);
          if (cVar5 == '\0') {
            param_8 = (undefined4 *)((int)param_8 + (int)puVar8);
            uStack_58 = *(uint *)((int)puStack_7c + (int)param_8);
            uStack_54 = *param_8;
            uStack_6c = *puVar8;
            iVar7 = *(int *)(iStack_84 + (int)param_8);
            iVar1 = *(int *)(iStack_68 + (int)puVar8);
            cVar5 = func_0x00b4f5b0(param_2);
            if (cVar5 == '\0') {
              iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                      uStack_58,0);
              if (iVar6 == 1) break;
              uVar10 = 0;
            }
            else {
              iVar6 = *(int *)(param_2 + 0x1514);
              uStack_94 = 0;
              uStack_8c = 0;
              if ((((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
                  (*(int *)(iVar6 + 0x150) != iVar1)) || (*(int *)(iVar6 + 0x154) != iVar7)) {
                iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
                if (iVar6 == 1) break;
              }
              else {
                uStack_94 = *(undefined8 *)(iVar6 + 0x158);
                uStack_8c = *(undefined4 *)(iVar6 + 0x160);
              }
              iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                      &uStack_88);
              if ((iVar6 == 1) ||
                 (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                          uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
              break;
            }
            iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                    uStack_58,1);
            puVar8 = puStack_70;
            if (iVar7 == 1) break;
            if (*(char *)(param_2 + 0x200c) != '\0') {
              func_0x008e37f0(param_2,*(undefined4 *)(iStack_68 + (int)puStack_70),*puStack_70);
            }
            uStack_10 = *(undefined4 *)(param_2 + 0x2010);
            uStack_c = *(undefined4 *)(param_2 + 0x2014);
            func_0x008c2250(&uStack_10,0);
            func_0x008c2250(&uStack_10,2);
            if (uStack_38 != uStack_18) {
              do {
                iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
                if (*(int *)(iVar7 + 4) != 0) {
                  func_0x00968810();
                }
                func_0x008c2d60();
              } while (uStack_38 != uStack_18);
            }
            func_0x008c22f0(param_2 + 0x2018,0);
            func_0x008c22f0(param_2 + 0x2018,3);
            param_8 = puStack_78;
            if (uStack_18 != uStack_38) {
              do {
                if (*(int *)(*(int *)(param_2 + 0x1748) + 4 + (uStack_30 * 0x20 + uStack_14) * 0x1c)
                    != 0) {
                  func_0x00953460(1);
                }
                func_0x008c2db0();
                param_8 = puStack_78;
              } while (uStack_18 != uStack_38);
            }
          }
          puStack_70 = puVar8 + 1;
          iStack_80 = iStack_80 + 1;
        } while (iStack_80 < param_10);
      }
    }
    else if (0 < param_10) {
      param_8 = (undefined4 *)((int)param_8 - (int)puStack_7c);
      puVar8 = (undefined4 *)((int)puStack_70 - (int)puStack_7c);
      iStack_84 = iStack_84 - (int)puStack_7c;
      iStack_68 = iStack_68 - (int)puStack_7c;
      puStack_78 = param_8;
      puStack_70 = puVar8;
      do {
        cVar5 = func_0x008d6750(param_3,*(undefined4 *)(iStack_68 + (int)puStack_7c),
                                *(undefined4 *)((int)puVar8 + (int)puStack_7c));
        if (cVar5 == '\0') {
          func_0x00986cd0(*puStack_7c);
          uStack_58 = *puStack_7c;
          uStack_54 = *(undefined4 *)((int)param_8 + (int)puStack_7c);
          uStack_6c = *(undefined4 *)((int)puVar8 + (int)puStack_7c);
          iVar7 = *(int *)(iStack_84 + (int)puStack_7c);
          iVar1 = *(int *)(iStack_68 + (int)puStack_7c);
          cVar5 = func_0x00b4f5b0(param_2);
          if (cVar5 == '\0') {
            iVar6 = func_0x00a3efa0(param_2,param_3,0,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                    uStack_58,0);
            if (iVar6 == 1) break;
            uVar10 = 0;
          }
          else {
            iVar6 = *(int *)(param_2 + 0x1514);
            uStack_94 = 0;
            uStack_8c = 0;
            if (((*(int *)(iVar6 + 100) == 0) || (*(int *)(iVar6 + 0x14c) != param_5)) ||
               ((*(int *)(iVar6 + 0x150) != iVar1 || (*(int *)(iVar6 + 0x154) != iVar7)))) {
              iVar6 = func_0x008e4e20(param_2,param_5,iVar1,iVar7,&uStack_94);
              if (iVar6 == 1) break;
            }
            else {
              uStack_94 = *(undefined8 *)(iVar6 + 0x158);
              uStack_8c = *(undefined4 *)(iVar6 + 0x160);
            }
            iVar6 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_94,uStack_54,
                                    &uStack_88);
            if ((iVar6 == 1) ||
               (iVar6 = func_0x00a3efa0(param_2,param_3,uStack_88,iVar1,param_5,iVar7,uStack_6c,
                                        uStack_54,uStack_58,0), uVar10 = uStack_88, iVar6 == 1))
            break;
          }
          iVar7 = func_0x009e4200(param_2,param_3,uVar10,iVar1,param_5,iVar7,uStack_6c,uStack_54,
                                  uStack_58,1);
          puVar8 = puStack_70;
          if (iVar7 == 1) break;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*(undefined4 *)(iStack_68 + (int)puStack_7c),
                            *(undefined4 *)((int)puStack_70 + (int)puStack_7c));
          }
          uStack_10 = *(undefined4 *)(param_2 + 0x2010);
          uStack_c = *(undefined4 *)(param_2 + 0x2014);
          func_0x008c2250(&uStack_10,0);
          func_0x008c2250(&uStack_10,2);
          if (uStack_38 != uStack_18) {
            do {
              iVar7 = func_0x008eb2c0(iStack_4c * 0x20 + iStack_34);
              if (*(int *)(iVar7 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            } while (uStack_38 != uStack_18);
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          param_8 = puStack_78;
          if (uStack_18 != uStack_38) {
            do {
              if (*(int *)(*(int *)(param_2 + 0x1748) + 4 + (uStack_30 * 0x20 + uStack_14) * 0x1c)
                  != 0) {
                func_0x00953460(1);
              }
              func_0x008c2db0();
              param_8 = puStack_78;
            } while (uStack_18 != uStack_38);
          }
        }
        iStack_80 = iStack_80 + 1;
        puStack_7c = puStack_7c + 1;
      } while (iStack_80 < param_10);
    }
  }
  func_0x0095c6a0();
  *unaff_FS_OFFSET = iStack_64;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a5b6d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3e590;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = (int *)(param_1 + 400);
  if ((int *)(param_1 + 0x30) != piVar2) {
    piVar6 = (int *)(param_1 + 0x88);
    do {
      if (piVar6 + -0x16 != piVar6) {
        piVar5 = piVar6 + -0x15;
        do {
          uStack_8 = 0xffffffff;
          if (*piVar5 != 0) {
            FUN_008e0840(param_2);
            piVar3 = (int *)*piVar5;
            *piVar5 = 0;
            uStack_8 = 0;
            if (piVar3 != (int *)0x0) {
              piVar1 = piVar3 + 1;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                pcVar4 = *(code **)*piVar3;
                _guard_check_icall(param_2);
                (*pcVar4)();
                pcVar4 = *(code **)(*piVar3 + 4);
                _guard_check_icall(1);
                (*pcVar4)();
              }
            }
          }
          piVar3 = piVar5 + 1;
          piVar5 = piVar5 + 2;
        } while (piVar3 != piVar6);
      }
      bVar7 = piVar6 != piVar2;
      piVar6 = piVar6 + 0x16;
    } while (bVar7);
  }
  uStack_8 = 0xffffffff;
  if (*piVar2 != 0) {
    FUN_00968860(param_2);
    *piVar2 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_00a5b6e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar3 + 0x1f90) == 0) {
    return 0;
  }
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4f84d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar9 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar10 = func_0x00a39f00(param_2,uVar9);
  if (iVar10 == 1) {
LAB_00a3b760:
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  uVar13 = *(undefined4 *)(param_2 + 0x1d14);
  piVar12 = (int *)**(int **)(iVar3 + 0x1984);
  cVar8 = *(char *)((int)piVar12 + 0xd);
  while (cVar8 == '\0') {
    iVar10 = func_0x00b4e5f0(uVar13);
    if (iVar10 == 1) goto LAB_00a3b760;
    piVar1 = (int *)piVar12[2];
    if (*(char *)((int)piVar1 + 0xd) == '\0') {
      cVar8 = *(char *)(*piVar1 + 0xd);
      piVar12 = piVar1;
      piVar1 = (int *)*piVar1;
      while (cVar8 == '\0') {
        cVar8 = *(char *)(*piVar1 + 0xd);
        piVar12 = piVar1;
        piVar1 = (int *)*piVar1;
      }
    }
    else {
      cVar8 = *(char *)(piVar12[1] + 0xd);
      piVar7 = (int *)piVar12[1];
      piVar1 = piVar12;
      while ((piVar12 = piVar7, cVar8 == '\0' && (piVar1 == (int *)piVar12[2]))) {
        cVar8 = *(char *)(piVar12[1] + 0xd);
        piVar7 = (int *)piVar12[1];
        piVar1 = piVar12;
      }
    }
    cVar8 = *(char *)((int)piVar12 + 0xd);
  }
  func_0x00a39d60();
  uStack_18 = uStack_18 & 0xffffff00;
  do {
    iVar10 = func_0x008ea190(uStack_18);
    if (iVar10 != 0) {
      uVar9 = FUN_00921200();
      iVar10 = func_0x00b4e830(uVar13);
      if (iVar10 == 1) goto LAB_00a3b760;
      bVar15 = false;
      puVar2 = *(undefined4 **)(iVar3 + 0x1984);
      puVar11 = (undefined4 *)puVar2[1];
      cVar8 = *(char *)((int)puVar11 + 0xd);
      puVar14 = puVar2;
      puVar6 = puVar11;
      while (puVar5 = puVar11, cVar8 == '\0') {
        bVar15 = uVar9 <= (uint)puVar5[4];
        if (bVar15) {
          puVar11 = (undefined4 *)*puVar5;
          puVar14 = puVar5;
        }
        else {
          puVar11 = (undefined4 *)puVar5[2];
        }
        cVar8 = *(char *)((int)puVar11 + 0xd);
        puVar6 = puVar5;
      }
      if ((*(char *)((int)puVar14 + 0xd) != '\0') || (uVar9 < (uint)puVar14[4])) {
        if (*(int *)(iVar3 + 0x1988) == 0xccccccc) {
          func_0x0048d790();
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return uVar13;
        }
        uStack_8 = 0;
        piVar12 = (int *)func_0x008ab47d(0x14);
        uStack_8 = 0xffffffff;
        piVar12[4] = uVar9;
        *piVar12 = (int)puVar2;
        piVar12[1] = (int)puVar2;
        piVar12[2] = (int)puVar2;
        *(undefined2 *)(piVar12 + 3) = 0;
        func_0x008b95c0(puVar6,bVar15,piVar12);
      }
    }
    cVar8 = (char)uStack_18 + '\x01';
    uStack_18 = CONCAT31(uStack_18._1_3_,cVar8);
    if (cVar8 == '\a') {
      *(undefined4 *)(iVar3 + 8000) = 0;
      *(undefined4 *)(iVar3 + 0x1f44) = 0;
      *(undefined4 *)(iVar3 + 0x1f48) = 0;
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  } while( true );
}



void __fastcall FUN_00a5b700(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0xb4);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00a5b720(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x1a4) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x198) +
                      (*(int *)(param_1 + 0x1a0) + -1 + *(int *)(param_1 + 0x1a4) &
                      *(int *)(param_1 + 0x19c) - 1U) * 4);
    if (0xf < (uint)piVar1[5]) {
      piVar1 = (int *)*piVar1;
    }
    func_0x00634c10();
    func_0x009e5b10();
    func_0x00a2b7f0(piVar1,0x469);
  }
  return 0;
}



void __thiscall FUN_00a5b780(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000010;
  
  pcVar1 = *(code **)(*param_1 + 0xb0);
  puVar2 = in_stack_00000010;
  if (0xf < (uint)in_stack_00000010[5]) {
    puVar2 = (undefined4 *)*in_stack_00000010;
  }
  _guard_check_icall(in_stack_00000010[4],puVar2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00a5b7b0(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3d85d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009e5b10(uVar4);
  func_0x00a2b720(0x4ce,param_3,param_3);
  pcVar6 = param_3;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  func_0x0046bc40(param_3,(int)pcVar6 - (int)(param_3 + 1));
  uStack_8 = 0;
  if (*(uint *)(param_1 + 0x19c) <= *(int *)(param_1 + 0x1a4) + 1U) {
    func_0x0069d830(1);
  }
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & *(int *)(param_1 + 0x19c) - 1U;
  uVar4 = *(int *)(param_1 + 0x1a4) + *(int *)(param_1 + 0x1a0);
  iVar1 = (*(int *)(param_1 + 0x19c) - 1U & uVar4) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x198)) == 0) {
    uVar5 = func_0x008ab47d(0x18);
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x198)) = uVar5;
  }
  puVar3 = *(undefined4 **)
            (*(int *)(param_1 + 0x198) + (*(int *)(param_1 + 0x19c) - 1U & uVar4) * 4);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00a5b8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00a3cde0(param_1,param_2,param_4);
  return 0;
}



undefined4 * __thiscall FUN_00a5c070(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::ExternalImageSiblingImpl11::vftable;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x28];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  func_0x00a2c410();
  func_0x008ac870();
  *param_1 = rx::FramebufferAttachmentObjectImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a5c0e0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FramebufferAttachmentObjectImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a5c110(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 *in_stack_00000014;
  undefined1 auStack_98 [20];
  undefined **ppuStack_84;
  undefined4 *puStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined *puStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 *puStack_30;
  undefined **ppuStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined **ppuStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  
  uStack_68 = 0xffffffff;
  puStack_6c = &DAT_00f50a97;
  iStack_70 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&iStack_64;
  *unaff_FS_OFFSET = (int)&iStack_70;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    ppuStack_2c = rx::Resource11Base<>::vftable;
    iVar6 = *(int *)(param_2 + 0x1d14);
    puStack_1c = (undefined4 *)func_0x008ab47d(8,uVar4);
    if (puStack_1c == (undefined4 *)0x0) {
      puStack_28 = (undefined4 *)0x0;
    }
    else {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
      puStack_28 = puStack_1c;
    }
    uStack_24 = 0;
    pcStack_20 = (char *)0x0;
    ppuStack_2c = rx::Resource11<>::vftable;
    uStack_68 = 0;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uStack_18 = *(undefined4 *)(iVar1 + 0x14);
      puVar8 = *(undefined4 **)(param_1 + 0x98);
      if (*(char *)(param_1 + 0x8e) == '\0') {
        if (puVar8 == (undefined4 *)0x0) {
          ppuStack_14 = (undefined **)0x4;
          puStack_10 = puVar8;
        }
        else {
          ppuStack_14 = (undefined **)0x6;
        }
      }
      else if (puVar8 == (undefined4 *)0x0) {
        ppuStack_14 = (undefined **)0x5;
        uStack_8 = 1;
        puStack_10 = puVar8;
        puStack_c = *(undefined4 **)(param_1 + 0x9c);
      }
      else {
        ppuStack_14 = (undefined **)0x7;
        puStack_c = (undefined4 *)0x1;
        puStack_10 = *(undefined4 **)(param_1 + 0x9c);
      }
      iVar5 = func_0x00a30fc0(-(uint)(iVar6 != 0) & iVar6 + 0x24U,*(undefined4 *)(param_1 + 0x30),
                              &uStack_18,*(undefined4 *)(*(int *)(param_1 + 100) + 4),&ppuStack_2c);
      if (iVar5 != 1) {
        pcStack_20 = "getAttachmentRenderTarget.RTV";
        func_0x00a2fa40(*puStack_28,"getAttachmentRenderTarget.RTV",uStack_24);
        goto LAB_00a5c25d;
      }
LAB_00a5c36e:
      FUN_009de130();
      uVar7 = 1;
      goto LAB_00a5c4cc;
    }
LAB_00a5c25d:
    FUN_009dd650();
    uStack_68._0_1_ = 1;
    if (*(char *)(param_1 + 0x8d) != '\0') {
      uStack_5c = *(undefined4 *)(iVar1 + 0xc);
      iVar5 = *(int *)(param_1 + 0x98);
      if (*(char *)(param_1 + 0x8e) == '\0') {
        if (iVar5 == 0) {
          uStack_58 = 4;
          uStack_50 = 1;
          iStack_54 = iVar5;
        }
        else {
          uStack_58 = 6;
        }
      }
      else {
        uStack_4c = *(undefined4 *)(param_1 + 0x9c);
        uStack_48 = 1;
        if (iVar5 == 0) {
          uStack_58 = 5;
          uStack_50 = 1;
          iStack_54 = iVar5;
        }
        else {
          uStack_58 = 7;
        }
      }
      iStack_64 = *(int *)(param_1 + 0x30);
      uStack_60 = *(undefined4 *)(*(int *)(param_1 + 100) + 4);
      ppuStack_14 = rx::Resource11Base<>::vftable;
      puStack_1c = (undefined4 *)(iStack_64 + 0x23c0);
      puStack_30 = (undefined4 *)func_0x008ab47d(8,uVar4);
      if (puStack_30 == (undefined4 *)0x0) {
        puStack_10 = (undefined4 *)0x0;
      }
      else {
        *puStack_30 = 0;
        puStack_30[1] = 0;
        puStack_10 = puStack_30;
      }
      puStack_c = (undefined4 *)0x0;
      uStack_8 = 0;
      ppuStack_14 = rx::Resource11<>::vftable;
      uStack_68._0_1_ = 2;
      iVar6 = func_0x00a31190(-(uint)(iVar6 != 0) & iVar6 + 0x24U,iStack_64,&uStack_5c,uStack_60,
                              &ppuStack_14);
      if (iVar6 == 1) {
        uStack_68 = CONCAT31(uStack_68._1_3_,1);
        func_0x009de210();
        func_0x009de2f0();
        goto LAB_00a5c36e;
      }
      puStack_30 = (undefined4 *)func_0x008ab47d(8);
      if (puStack_30 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puStack_30 = 0;
        puStack_30[1] = 0;
        puVar8 = puStack_30;
      }
      func_0x009dc230(puVar8);
      uVar3 = uStack_7c;
      puVar8 = puStack_80;
      uStack_78 = 0;
      uStack_74 = 0;
      uVar7 = puStack_80[1];
      puStack_80[1] = puStack_10[1];
      puStack_10[1] = uVar7;
      uVar7 = *puStack_80;
      ppuStack_84 = rx::SharedResource11<>::vftable;
      *puStack_80 = *puStack_10;
      *puStack_10 = uVar7;
      puStack_80 = puStack_40;
      uStack_7c = uStack_3c;
      puStack_40 = puVar8;
      uStack_3c = uVar3;
      func_0x009de2f0();
      uStack_68._0_1_ = 1;
      func_0x009de210();
      pcStack_34 = "getAttachmentRenderTarget.SRV";
      func_0x00a2fa40(*puStack_40,"getAttachmentRenderTarget.SRV",uStack_38);
    }
    func_0x009e8300(auStack_98);
    puVar8 = *(undefined4 **)(param_1 + 0x88);
    uStack_68._0_1_ = 3;
    puStack_30 = (undefined4 *)func_0x008ab47d(0x94);
    uStack_68 = CONCAT31(uStack_68._1_3_,4);
    if (puStack_30 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = func_0x00a60910(&ppuStack_2c,param_1 + 0x60,auStack_44,auStack_98,*puVar8,iVar1,
                              *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),1,
                              *(undefined4 *)(param_1 + 0x98));
    }
    puVar8 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = uVar7;
    if (puVar8 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar8;
      _guard_check_icall(1);
      (*pcVar2)();
    }
    func_0x009de2f0();
    func_0x009de2f0();
    FUN_009de130();
  }
  *in_stack_00000014 = *(undefined4 *)(param_1 + 0xa0);
  uVar7 = 0;
LAB_00a5c4cc:
  *unaff_FS_OFFSET = iStack_70;
  return uVar7;
}



undefined4 __fastcall FUN_00a5c4f0(int param_1)

{
  undefined4 unaff_retaddr;
  
  func_0x00940020(param_1 + 0x88);
  return unaff_retaddr;
}



void __thiscall FUN_00a5c510(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  *param_2 = *(undefined4 *)(param_1 + 0x90);
  param_2[1] = uVar1;
  param_2[2] = 1;
  return;
}



void __thiscall FUN_00a5c530(int param_1,int *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puStack_c0;
  undefined4 *puStack_bc;
  undefined *puStack_b8;
  int *piStack_b4;
  undefined1 *puStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 *puStack_90;
  int iStack_8c;
  uint uStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [4];
  int iStack_68;
  uint auStack_64 [24];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_78;
  piStack_74 = param_2;
  iStack_8c = param_1 + 0x9c;
  puStack_90 = &uStack_70;
  uStack_70 = 0;
  iStack_94 = param_1 + 0x88;
  iStack_98 = param_1 + 0x98;
  pcVar1 = *(code **)(**(int **)(param_1 + 0x30) + 0x4c);
  uStack_9c = param_1 + 0x94;
  iStack_a0 = param_1 + 0x90;
  iStack_a4 = param_1 + 0x38;
  uStack_a8 = *(undefined4 *)(param_1 + 0x34);
  puStack_b0 = auStack_6c;
  piStack_ac = (int *)0x0;
  piStack_b4 = (int *)0xa5c59d;
  _guard_check_icall();
  piStack_b4 = (int *)0xa5c5a1;
  (*pcVar1)();
  if (iStack_94 == 0x3000) {
    piStack_b4 = (int *)0xa5c5ca;
    func_0x008a4620();
    puStack_bc = *(undefined4 **)(param_1 + 0x34);
    iStack_a0 = 0;
    pcVar1 = *(code **)*puStack_bc;
    piStack_b4 = &iStack_a0;
    puStack_b8 = &DAT_00fbd348;
    puStack_c0 = (uint *)0xa5c5ec;
    _guard_check_icall();
    puStack_c0 = (uint *)0xa5c5ee;
    iVar4 = (*pcVar1)();
    puVar6 = (uint *)piStack_ac;
    if (iVar4 < 0) {
      if ((uint *)piStack_ac != (uint *)0x0) {
        puStack_c0 = (uint *)piStack_ac;
        pcVar1 = *(code **)(*piStack_ac + 8);
        _guard_check_icall();
        (*pcVar1)();
      }
      puVar6 = (uint *)0x0;
    }
    puStack_c0 = (uint *)(*(int *)(param_1 + 0x30) + 0x1f98);
    uVar5 = func_0x00a329e0(*(undefined4 *)(iStack_a4 + 4));
    *(undefined4 *)(param_1 + 0x74) = uVar5;
    *(uint **)(*(int *)(param_1 + 100) + 4) = puVar6;
    *(undefined4 *)(*(int *)(param_1 + 100) + 8) = 0;
    puStack_c0 = auStack_64;
    func_0x00a2fe20();
    piVar7 = &iStack_68;
    func_0x00a2fe70();
    memset(&iStack_98,0,0x2c);
    func_0x00a2fe20(&iStack_98);
    puStack_b8 = (undefined *)0x0;
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 100) + 4);
    pcVar1 = *(code **)*puVar2;
    _guard_check_icall(puVar2,&DAT_00fef350,&puStack_b8);
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) {
      if (piVar7 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar7 + 8);
        _guard_check_icall(piVar7);
        (*pcVar1)();
      }
      piVar7 = (int *)0x0;
    }
    puStack_c0 = (uint *)0x0;
    pcVar1 = *(code **)(*piVar7 + 0x24);
    _guard_check_icall(piVar7,&puStack_c0);
    (*pcVar1)();
    pcVar1 = *(code **)(*piVar7 + 8);
    _guard_check_icall(piVar7);
    (*pcVar1)();
    if (((auStack_64[0] & 0x20) == 0) || ((uStack_9c & 0x120) != 0x20)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x8c) = uVar3;
    if (((auStack_64[0] & 8) == 0) || ((uStack_9c & 0x10) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x8d) = uVar3;
    *(bool *)(param_1 + 0x8e) = 1 < uStack_78;
    *param_2 = 0x3000;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    param_2[1] = (int)puStack_90;
    *param_2 = iStack_94;
    param_2[2] = iStack_8c;
  }
  iStack_a4 = 0xa5c767;
  FUN_008ab370();
  return;
}



undefined1 __fastcall FUN_00a5c770(int param_1)

{
  return *(undefined1 *)(param_1 + 0x8c);
}



undefined1 __fastcall FUN_00a5c780(int param_1)

{
  return *(undefined1 *)(param_1 + 0x8d);
}



undefined4 * __thiscall FUN_00a5c810(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Framebuffer11::vftable;
  func_0x00b44940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



bool __thiscall
FUN_00a5c840(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            char param_6,char param_7,char param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int *unaff_EBX;
  int *unaff_EBP;
  int *piVar10;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 uStack_4c;
  int aiStack_48 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int *piStack_28;
  uint *puStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  uint *puStack_10;
  int *piStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  aiStack_48[0] = param_1;
  if (param_6 != '\0') {
    piVar4 = (int *)func_0x0098d9d0();
    uStack_3c = 0;
    piStack_28 = piVar4;
    iVar5 = func_0x00968fa0(param_2,piVar4[1],piVar4 + 2,0,&uStack_3c);
    if (iVar5 == 1) {
      return true;
    }
    iVar5 = *(int *)(param_1 + 4);
    piVar10 = (int *)(iVar5 + 0x28);
    iStack_2c = iVar5 + 0x1e8;
    if ((*piVar4 == 0x1702) && (iVar6 = func_0x00969240(), *(char *)(iVar6 + 0x6c) == '\x04')) {
      iStack_34 = func_0x00969500();
    }
    else {
      iStack_34 = 0;
    }
    puVar9 = (uint *)(iVar5 + 0x188);
    uStack_30 = 0;
    puStack_24 = puVar9;
    if (*puVar9 != 0) {
      do {
        if ((*piVar10 != 0) && (*(int *)(iStack_2c + uStack_30 * 4) != 0)) {
          uStack_40 = 0;
          uVar7 = func_0x00969210();
          iVar5 = func_0x00968fa0(param_2,piVar10[1],piVar10 + 2,uVar7);
          if (iVar5 == 1) {
            return true;
          }
          cVar3 = func_0x00a2fdd0(*(undefined4 *)(param_1 + 0x4c),piVar4);
          puStack_24 = (uint *)*piStack_c;
          iStack_20 = piStack_c[1];
          puStack_1c = (undefined4 *)piStack_c[2];
          iStack_18 = piStack_c[3];
          iVar5 = param_1;
          if (cVar3 != '\0') {
            iVar5 = piStack_c[1];
            pcVar1 = *(code **)(*unaff_EBX + 8);
            _guard_check_icall();
            iStack_20 = (*pcVar1)();
            iStack_20 = iStack_20 - iVar5;
            iStack_18 = -piStack_c[3];
            iVar5 = unaff_EDI;
          }
          cVar3 = func_0x00a2fdd0(*(undefined4 *)(param_1 + 0x4c),piVar10);
          iStack_34 = *piStack_8;
          uStack_30 = piStack_8[1];
          iStack_2c = piStack_8[2];
          piStack_28 = (int *)piStack_8[3];
          if ((*piVar10 == 0x1702) && (iVar6 = func_0x00969240(), *(char *)(iVar6 + 0x6c) == '\x04')
             ) {
            uStack_4c = func_0x00969500();
          }
          else {
            uStack_4c = 0;
          }
          iStack_34 = iStack_34 + *(int *)(*(int *)(iVar5 + 4) + 0x2f0);
          uStack_30 = uStack_30 + *(int *)(*(int *)(iVar5 + 4) + 0x2f4);
          param_1 = iVar5;
          if (cVar3 != '\0') {
            iVar5 = piStack_8[1];
            pcVar1 = *(code **)(*unaff_EBP + 8);
            _guard_check_icall();
            iVar6 = (*pcVar1)();
            uStack_30 = iVar6 - iVar5;
            piStack_28 = (int *)-piStack_8[3];
            param_1 = unaff_EDI;
          }
          iVar5 = func_0x009dfad0(puStack_10,&puStack_24,&iStack_34,aiStack_48[0],uStack_4c,
                                  unaff_EBX,unaff_EBP,param_4,uStack_4,unaff_retaddr,0,0);
          puVar9 = puStack_24;
          piVar4 = piStack_28;
          if (iVar5 == 1) {
            return true;
          }
        }
        uStack_30 = uStack_30 + 1;
        piVar10 = piVar10 + 0xb;
      } while (uStack_30 < *puVar9);
    }
  }
  if ((param_7 == '\0') && (param_8 == '\0')) {
LAB_00a5cbda:
    iVar5 = func_0x00a5d0e0(param_2);
    return iVar5 == 1;
  }
  iVar6 = func_0x0098d4a0();
  uStack_40 = 0;
  piVar4 = (int *)0x0;
  iVar5 = iVar6 + 8;
  iVar8 = func_0x00968fa0(param_2,*(undefined4 *)(iVar6 + 4),iVar5,0,&uStack_40);
  if (iVar8 != 1) {
    cVar3 = func_0x00a2fdd0(*(undefined4 *)(param_1 + 0x4c),iVar6);
    piVar10 = piStack_c;
    iStack_34 = *piStack_c;
    uStack_30 = piStack_c[1];
    iStack_2c = piStack_c[2];
    piStack_28 = (int *)piStack_c[3];
    if (cVar3 != '\0') {
      iVar6 = piStack_c[1];
      pcVar1 = *(code **)(*unaff_EBP + 8);
      _guard_check_icall();
      iVar8 = (*pcVar1)();
      uStack_30 = iVar8 - iVar6;
      piStack_28 = (int *)-piVar10[3];
      param_2 = puStack_10;
      param_1 = unaff_EDI;
    }
    iVar6 = func_0x0098d4c0();
    uVar7 = func_0x00969210();
    iVar8 = func_0x00968fa0(param_2,*(undefined4 *)(iVar6 + 4),iVar6 + 8,uVar7,&stack0xffffffb0);
    if (iVar8 != 1) {
      cVar3 = func_0x00a2fdd0(*(undefined4 *)(param_1 + 0x4c),iVar6);
      puVar2 = puStack_1c;
      uStack_38 = *puStack_1c;
      iStack_34 = puStack_1c[1];
      uStack_30 = puStack_1c[2];
      iStack_2c = puStack_1c[3];
      if (cVar3 != '\0') {
        iVar6 = puStack_1c[1];
        pcVar1 = *(code **)(*piVar4 + 8);
        _guard_check_icall();
        iStack_34 = (*pcVar1)();
        iStack_34 = iStack_34 - iVar6;
        iStack_2c = -puVar2[3];
        param_2 = puStack_24;
      }
      iVar5 = func_0x009dfad0(param_2,aiStack_48,&uStack_38,0,0,iVar5,piVar4,piStack_8,iStack_18,0,
                              puStack_10,piStack_c);
      if (iVar5 != 1) goto LAB_00a5cbda;
    }
  }
  return true;
}



bool __thiscall FUN_00a5cc10(int param_1,undefined4 param_2,undefined1 *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_6c;
  undefined1 auStack_64 [88];
  int iStack_c;
  int iStack_4;
  
  iVar3 = func_0x0098d700();
  if ((param_3[0x50] == '\x01') && (iVar3 != 0)) {
    cVar2 = func_0x00a2fdd0(*(undefined4 *)(param_1 + 0x4c),iVar3);
    if (cVar2 != '\0') {
      func_0x00b44840(param_3);
      pcVar1 = *(code **)(**(int **)(iVar3 + 0x18) + 4);
      _guard_check_icall(&stack0xffffff8c,iVar3 + 8);
      (*pcVar1)();
      iStack_c = (iStack_6c - iStack_4) - iStack_c;
      uVar4 = *(undefined4 *)(param_1 + 4);
      param_3 = auStack_64;
      goto LAB_00a5cc92;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 4);
LAB_00a5cc92:
  iVar3 = func_0x00a54880(param_2,param_3,uVar4);
  if (iVar3 != 1) {
    iVar3 = func_0x00a5d0e0(param_2);
    return iVar3 == 1;
  }
  return true;
}



void FUN_00a5cce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a5cea0(param_1,param_2,param_3,1);
  return;
}



void FUN_00a5cd30(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined1 auStack_4 [4];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1d14) + 0x2c);
  iVar2 = func_0x0098d900();
  pcVar1 = *(code **)(**(int **)(iVar2 + 0x18) + 8);
  _guard_check_icall(auStack_4,*(undefined4 *)(iVar2 + 4),iVar2 + 8);
  (*pcVar1)();
  func_0x00a329e0(*(undefined4 *)(unaff_EDI + 8),iVar3 + 0x1f98);
  iVar3 = func_0x00a33e30();
  func_0x00946ea0(*(undefined4 *)(iVar3 + 8));
  return;
}



undefined4 FUN_00a5cda0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = func_0x0098d760();
  cVar2 = func_0x009694d0();
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(**(int **)(iVar3 + 0x18) + 0xc);
    _guard_check_icall(iVar3 + 8);
    uVar4 = (*pcVar1)();
  }
  else {
    uVar4 = func_0x00969210();
  }
  func_0x0095cda0(uVar4,param_2,param_3);
  return 0;
}



void FUN_00a5ce00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a5cea0(param_1,param_2,param_3,0);
  return;
}



void FUN_00a5d1f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_18;
  
  iStack_3c = param_3;
  iStack_40 = 0xa5d206;
  uVar1 = func_0x0098da40();
  if (param_6 != 0) {
    iStack_40 = param_3;
    iStack_44 = param_3;
    uVar2 = func_0x0095cc40();
    iStack_40 = param_7;
    iStack_44 = param_6;
    func_0x0095c540(param_1,uVar2,param_4,*(undefined1 *)(param_5 + 0x18));
    func_0x00a53520(uStack_18,uVar1,&iStack_44);
    return;
  }
  iStack_40 = param_7;
  iStack_44 = param_5;
  func_0x009e8bf0(unaff_retaddr,uVar1,param_1,param_3,param_3,param_4);
  return;
}



undefined4 __thiscall
FUN_00a5d290(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_4;
  
  uVar7 = *param_4;
  iVar6 = *(int *)(param_1 + 4);
  do {
    if (uVar7 == 0) {
      iVar6 = FUN_00b45730(param_2,param_3,param_4,param_5);
      if (iVar6 == 1) {
        return 1;
      }
      func_0x00a3b4b0();
      if ((*(int *)(*(int *)(param_1 + 4) + 0x218) != 0) ||
         (*(int *)(*(int *)(param_1 + 4) + 0x21c) != 0)) {
        func_0x00a3b540(param_2);
      }
      return 0;
    }
    uVar1 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    uStack_4 = 0;
    switch(uVar1) {
    case 8:
    case 9:
      iVar4 = func_0x0098d4c0();
      uStack_4 = 0;
      if (iVar4 != 0) {
        uVar5 = func_0x00969210();
        iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,uVar5,&uStack_4);
        if (iVar4 == 1) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x7c) = uStack_4;
      break;
    default:
      if (uVar1 < 8) {
        if ((*(int *)(iVar6 + 0x20c) != 0) && (uVar3 = func_0x0098da20(), uVar3 == uVar1)) {
          iVar4 = func_0x0098d900();
          uStack_4 = 0;
          if (iVar4 != 0) {
            uVar5 = func_0x00969210();
            iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,uVar5,&uStack_4);
            if (iVar4 == 1) {
              return 1;
            }
          }
          *(undefined4 *)(param_1 + 0x50) = uStack_4;
        }
        iVar4 = func_0x0098d420(uVar1);
        uStack_4 = 0;
        if (iVar4 == 0) {
LAB_00a5d412:
          *(undefined4 *)(param_1 + 0x54 + uVar1 * 4) = uStack_4;
          bVar2 = false;
        }
        else {
          uVar5 = func_0x00969210();
          iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,uVar5,&uStack_4);
          if (iVar4 != 1) goto LAB_00a5d412;
          bVar2 = true;
        }
        if (bVar2) {
          return 1;
        }
      }
      break;
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      break;
    case 0x15:
      iVar4 = func_0x0098d900();
      uStack_4 = 0;
      if (iVar4 != 0) {
        uVar5 = func_0x00969210();
        iVar4 = func_0x00968fa0(param_2,*(undefined4 *)(iVar4 + 4),iVar4 + 8,uVar5,&uStack_4);
        if (iVar4 == 1) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x50) = uStack_4;
    }
    uVar7 = uVar7 & ~(1 << (uVar1 & 0x1f));
  } while( true );
}



undefined4 * __thiscall FUN_00a5d5d0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f50b30;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::Image11::vftable;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    pcVar1 = *(code **)(*(int *)param_1[0x14] + 0x5c);
    _guard_check_icall(param_1 + 0x15,param_1,uVar2);
    (*pcVar1)();
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
    param_1[0x14] = 0;
    uVar3 = func_0x009676c0();
    func_0x009676a0(uVar3);
  }
  func_0x00a5ef90();
  func_0x00a2c410();
  *param_1 = rx::ImageD3D::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a5d690(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ImageD3D::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



int * __thiscall FUN_00a5d9f0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a0 [40];
  int iStack_78;
  undefined *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined2 uStack_53;
  undefined1 uStack_51;
  code *pcStack_50;
  char cStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  code *pcStack_10;
  int *piStack_c;
  code *pcStack_8;
  
  uStack_70 = 0xffffffff;
  puStack_74 = &DAT_00f50be5;
  iStack_78 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&uStack_6c;
  *unaff_FS_OFFSET = (int)&iStack_78;
  uStack_18 = *(undefined4 *)(param_2 + 0x1d14);
  iStack_48 = param_1;
  pcStack_10 = (code *)func_0x0098d9d0(uVar3);
  pcVar8 = *(code **)(**(int **)(pcStack_10 + 0x18) + 8);
  pcStack_8 = pcStack_10 + 8;
  _guard_check_icall(&iStack_14,*(undefined4 *)(pcStack_10 + 4),pcStack_8);
  (*pcVar8)();
  iVar5 = *(int *)(iStack_14 + 8);
  iVar4 = func_0x00a329e0(iVar5,*(int *)(param_1 + 0x18) + 0x1f98);
  if ((*(int *)(iVar4 + 8) == *(int *)(param_1 + 0x1c)) && (iVar5 == *(int *)(param_1 + 0x10))) {
    piStack_c = (int *)0x0;
    iVar5 = func_0x00968fa0(param_2,*(undefined4 *)(pcStack_10 + 4),pcStack_8,0,&piStack_c);
    if (iVar5 != 1) {
      pcVar8 = *(code **)(*piStack_c + 0x1c);
      _guard_check_icall();
      uVar6 = (*pcVar8)();
      func_0x00a2c0d0(uVar6);
      uStack_70 = 0;
      pcVar8 = *(code **)(*piStack_c + 0x30);
      _guard_check_icall();
      uVar6 = (*pcVar8)();
      uStack_34 = 0;
      uStack_3c = *param_4;
      uStack_38 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      uStack_28 = 1;
      piVar7 = (int *)func_0x00a5df00(param_2,param_3,&uStack_3c,auStack_a0,uVar6);
      func_0x00a2c410();
      goto LAB_00a5dd2a;
    }
  }
  else {
    iVar5 = func_0x00a5ece0(param_2,2,&iStack_24);
    if (iVar5 != 1) {
      piVar7 = (int *)func_0x00a74c80(*(undefined4 *)(param_1 + 0x1c));
      iStack_14 = param_3[1] * iStack_20 + param_3[2] * iStack_1c + iStack_24 + *piVar7 * *param_3;
      pcStack_8 = (code *)func_0x00946ea0(*(undefined4 *)(param_1 + 0x10));
      func_0x00a329e0(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) + 0x1f98);
      pcVar8 = (code *)func_0x00a33e40();
      _guard_check_icall(&pcStack_50,*(undefined4 *)(pcStack_8 + 0x50));
      (*pcVar8)();
      pcVar8 = pcStack_8;
      if (cStack_4c == '\0') {
        uStack_53 = 0;
        uStack_51 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_6c = 4;
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        piStack_c = (int *)func_0x009e8bf0(param_2,pcStack_10,param_4,
                                           *(undefined4 *)(pcStack_8 + 0x4c),
                                           *(undefined4 *)(pcStack_8 + 0x50),iStack_20,&uStack_6c,
                                           iStack_14);
      }
      else {
        pcStack_8 = (code *)0x0;
        piStack_c = (int *)func_0x009e6030(uStack_18,
                                           *(int *)(pcVar8 + 0x2c) * param_4[2] * param_4[3],
                                           &pcStack_8);
        if (piStack_c == (int *)0x0) {
          iStack_44 = *(int *)(pcVar8 + 0x2c) * param_4[2];
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_40 = 4;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_28 = 0;
          piStack_c = (int *)func_0x009e8bf0(param_2,pcStack_10,param_4,
                                             *(undefined4 *)(pcVar8 + 0x4c),
                                             *(undefined4 *)(pcVar8 + 0x50),iStack_44,&uStack_40,
                                             *(undefined4 *)(pcStack_8 + 4));
          pcStack_10 = pcStack_50;
          uVar6 = *(undefined4 *)(pcStack_8 + 4);
          uVar1 = param_4[3];
          uVar2 = param_4[2];
          uVar9 = func_0x00a57970(&uStack_34);
          pcVar8 = pcStack_10;
          uStack_70 = 1;
          _guard_check_icall(uVar9,uVar2,uVar1,1,uVar6,iStack_44,0,iStack_14,iStack_20,iStack_1c);
          (*pcVar8)();
          uStack_70 = 0xffffffff;
          func_0x009ae580();
          param_1 = iStack_48;
        }
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 4);
      piVar7 = piStack_c;
      if (iVar5 != 0) {
        piVar7 = *(int **)(*(int *)(param_1 + 0x18) + 0x1fd0);
        pcVar8 = *(code **)(*piVar7 + 0x3c);
        _guard_check_icall(piVar7,iVar5,*(undefined4 *)(param_1 + 0x48));
        (*pcVar8)();
        piVar7 = piStack_c;
      }
      *(undefined1 *)(param_1 + 0x16) = 1;
      goto LAB_00a5dd2a;
    }
  }
  piVar7 = (int *)0x1;
LAB_00a5dd2a:
  *unaff_FS_OFFSET = iStack_78;
  return piVar7;
}



undefined4 __thiscall FUN_00a5dd40(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 *puVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_28 = 0;
  pcVar1 = *(code **)(*param_4 + 0x54);
  puVar4 = &uStack_28;
  _guard_check_icall(param_2,puVar4);
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    pcVar1 = *(code **)(*param_4 + 0x50);
    _guard_check_icall(param_2,unaff_retaddr,&stack0xffffffcc);
    iVar2 = (*pcVar1)();
    if (iVar2 != 1) {
      uStack_20 = *(undefined4 *)(param_1 + 4);
      uStack_1c = *(undefined4 *)(param_1 + 8);
      uStack_18 = *(undefined4 *)(param_1 + 0xc);
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uVar3 = func_0x00a5df00(param_2,&stack0xffffffc8,&uStack_2c,unaff_EDI,puVar4);
      return uVar3;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00a5de20(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  uint uVar3;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = *(uint *)(param_1 + 100);
  uVar3 = uStack_4;
  if (uStack_4 < 2) {
    pcVar1 = *(code **)(*param_3 + 100);
    _guard_check_icall(param_2,param_4,param_1);
    iVar2 = (*pcVar1)();
    uVar3 = uStack_4;
    if (iVar2 == 1) {
      return 1;
    }
  }
  uStack_4 = 0;
  uStack_8 = 0;
  iVar2 = func_0x00a5e4c0(param_2,&uStack_4,&uStack_8);
  if ((iVar2 != 1) &&
     (iVar2 = func_0x00a71b60(uStack_8,unaff_EBP,unaff_ESI,param_4,param_2), iVar2 != 1)) {
    if (uVar3 < 2) {
      pcVar1 = *(code **)(*param_3 + 0x58);
      _guard_check_icall(param_1,param_4);
      (*pcVar1)();
      func_0x00a5ef90();
      *(undefined1 *)(param_1 + 0x4d) = 1;
      *(int **)(param_1 + 0x50) = param_3;
      func_0x009676a0(param_4);
    }
    return 0;
  }
  return 1;
}



undefined1 __fastcall FUN_00a5e800(int param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x16) != '\0') && (*(int *)(*(int *)(param_1 + 0x24) + 4) == 0)) &&
     (*(char *)(param_1 + 0x4d) == '\0')) {
    iVar1 = func_0x00a329e0(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) + 0x1f98);
    if (*(int *)(iVar1 + 0x2c) == 0) {
      return 0;
    }
  }
  return *(undefined1 *)(param_1 + 0x16);
}



undefined4 __thiscall FUN_00a5e840(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [16];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  int iStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50c5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = *(undefined4 *)(param_2 + 0x1d14);
  iStack_30 = param_1;
  uStack_1c = func_0x00946ea0(*(undefined4 *)(param_1 + 0x10),uVar4);
  uStack_14 = 0;
  cVar3 = func_0x0094abf0(0x1401,param_3[3],1,0,&uStack_14);
  if (cVar3 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Image11.cpp"
                    ,"rx::Image11::loadCompressedData",0x142);
  }
  else {
    uStack_18 = 0;
    cVar3 = func_0x0094a8b0(param_3[4],0,uStack_14,&uStack_18);
    if (cVar3 == '\0') {
      func_0x0098f180(0x502,"Integer overflow.",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Image11.cpp"
                      ,"rx::Image11::loadCompressedData",0x145);
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
    piVar5 = (int *)func_0x00a74c80(*(undefined4 *)(param_1 + 0x1c));
    iStack_24 = *piVar5;
    uStack_20 = piVar5[1];
    uStack_1c = piVar5[2];
    func_0x00a329e0(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) + 0x1f98);
    pcVar6 = (code *)func_0x00a33e40();
    _guard_check_icall(auStack_38,0x1401);
    puVar7 = (undefined4 *)(*pcVar6)();
    pcStack_2c = (code *)*puVar7;
    iVar8 = func_0x00a5ece0(param_2,2,&iStack_44);
    uVar2 = uStack_14;
    uVar1 = uStack_18;
    if (iVar8 != 1) {
      iStack_24 = param_3[2] * iStack_3c +
                  (*param_3 / uStack_20) * iStack_24 + iStack_44 +
                  (param_3[1] / uStack_1c) * iStack_40;
      uStack_20 = param_3[4];
      uVar4 = param_3[5];
      uStack_1c = param_3[3];
      uVar9 = func_0x00a57970(auStack_54);
      pcVar6 = pcStack_2c;
      uStack_8 = 0;
      _guard_check_icall(uVar9,uStack_1c,uStack_20,uVar4,param_4,uVar2,uVar1,iStack_24,iStack_40,
                         iStack_3c);
      (*pcVar6)();
      uStack_8 = 0xffffffff;
      func_0x009ae580();
      iVar8 = *(int *)(*(int *)(iStack_30 + 0x24) + 4);
      if (iVar8 != 0) {
        piVar5 = *(int **)(*(int *)(iStack_30 + 0x18) + 0x1fd0);
        pcVar6 = *(code **)(*piVar5 + 0x3c);
        _guard_check_icall(piVar5,iVar8,*(undefined4 *)(iStack_30 + 0x48));
        (*pcVar6)();
      }
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a5ea80(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [16];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [8];
  code *pcStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50c8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = *(undefined4 *)(param_2 + 0x1d14);
  iStack_20 = param_1;
  func_0x00946ea0(*(undefined4 *)(param_1 + 0x10),uVar5);
  uStack_14 = 0;
  cVar4 = func_0x0094abf0(param_5,param_3[3],*param_4,param_4[1],&uStack_14);
  if (cVar4 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Image11.cpp"
                    ,"rx::Image11::loadData",0x11a);
  }
  else {
    uStack_18 = 0;
    cVar4 = func_0x0094a8b0(param_3[4],param_4[4],uStack_14,&uStack_18);
    if (cVar4 == '\0') {
      func_0x0098f180(0x502,"Integer overflow.",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Image11.cpp"
                      ,"rx::Image11::loadData",0x11d);
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
    iStack_1c = 0;
    cVar4 = func_0x0094ad20(param_5,uStack_14,uStack_18,param_4,param_7,&iStack_1c);
    iVar9 = iStack_20;
    if (cVar4 == '\0') {
      func_0x0098f180(0x502,"Integer overflow.",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Image11.cpp"
                      ,"rx::Image11::loadData",0x121);
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
    piVar6 = (int *)func_0x00a74c80(*(undefined4 *)(iStack_20 + 0x1c));
    iVar1 = *piVar6;
    func_0x00a329e0(*(undefined4 *)(iVar9 + 0x10),*(int *)(iVar9 + 0x18) + 0x1f98);
    pcVar7 = (code *)func_0x00a33e40();
    _guard_check_icall(auStack_40,param_5);
    puVar8 = (undefined4 *)(*pcVar7)();
    pcStack_38 = (code *)*puVar8;
    iVar9 = func_0x00a5ece0(param_2,2,&iStack_4c);
    if (iVar9 != 1) {
      iVar9 = param_3[5];
      iVar2 = param_3[4];
      iVar3 = param_3[3];
      iStack_28 = *param_3 * iVar1 + param_3[1] * iStack_48 + iStack_4c + param_3[2] * iStack_44;
      uStack_2c = uStack_18;
      uStack_30 = uStack_14;
      iStack_34 = iStack_1c + param_6;
      uVar10 = func_0x00a57970(auStack_5c);
      pcVar7 = pcStack_38;
      uStack_8 = 0;
      _guard_check_icall(uVar10,iVar3,iVar2,iVar9,iStack_34,uStack_30,uStack_2c,iStack_28,iStack_48,
                         iStack_44);
      (*pcVar7)();
      uStack_8 = 0xffffffff;
      func_0x009ae580();
      func_0x00a5f090();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a5eea0(int param_1,undefined1 param_2,int param_3,int *param_4,char param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((*(int *)(param_1 + 4) == *param_4) && (*(int *)(param_1 + 8) == param_4[1])) &&
      (*(int *)(param_1 + 0xc) == param_4[2])) &&
     ((*(int *)(param_1 + 0x10) == param_3 && (param_5 == '\0')))) {
    return 0;
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x5c);
    _guard_check_icall(param_1 + 0x54,param_1);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 0x4d) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar2 = func_0x009676c0();
    func_0x009676a0(uVar2);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(int *)(param_1 + 4) = *param_4;
  *(int *)(param_1 + 8) = param_4[1];
  *(int *)(param_1 + 0xc) = param_4[2];
  *(undefined1 *)(param_1 + 0x15) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  iVar3 = func_0x00a329e0(param_3,*(int *)(param_1 + 0x18) + 0x1f98);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar3 + 8);
  *(bool *)(param_1 + 0x14) = *(int *)(iVar3 + 0x14) != 0;
  func_0x00a5ef90();
  *(bool *)(param_1 + 0x16) = *(int *)(iVar3 + 0x2c) != 0;
  return 1;
}



undefined4 * __thiscall FUN_00a5f190(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::IndexBuffer::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a5f1c0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::IndexBufferInterface::vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[1];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00a5f2f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x18);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    uVar3 = func_0x00a5f400(param_2,param_3,param_4);
    return uVar3;
  }
  return 0;
}



undefined4 __thiscall FUN_00a5f330(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x18);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  if (uVar2 < param_3) {
    if (param_3 < uVar2 * 2) {
      param_3 = uVar2 * 2;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x18);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
      _guard_check_icall(param_2,param_3,param_4,*(undefined1 *)(param_1 + 0xc));
      iVar3 = (*pcVar1)();
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x1c);
      _guard_check_icall(param_2,param_3,param_4);
      iVar3 = (*pcVar1)();
    }
  }
  else {
    param_3 = *(uint *)(param_1 + 8) + param_3;
    if ((param_3 <= uVar2) && (*(uint *)(param_1 + 8) <= param_3)) {
      return 0;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x10);
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
  }
  if (iVar3 != 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  return 1;
}



undefined4 * __thiscall FUN_00a5f560(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::IndexBuffer11::vftable;
  FUN_00a31c20();
  func_0x00a5f180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a5f590(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_c [12];
  
  if (**(int **)(param_1 + 0x10) == 0) {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
    _guard_check_icall(0x8007000e,"Internal index buffer is not initialized.",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\IndexBuffer11.cpp"
                       ,"rx::IndexBuffer11::discard",0x7e);
    (*pcVar1)();
    return 1;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x1fd0);
  iVar3 = func_0x009e8470(param_2,**(int **)(param_1 + 0x10),0,4,0,auStack_c);
  if (iVar3 == 1) {
    return 1;
  }
  pcVar1 = *(code **)(*piVar2 + 0x3c);
  _guard_check_icall(piVar2,**(undefined4 **)(param_1 + 0x10),0);
  (*pcVar1)();
  return 0;
}



void __thiscall FUN_00a5f660(int param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  char *pcVar5;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50ce0;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (**(int **)(param_1 + 0x10) != 0) {
    puVar3 = (undefined4 *)func_0x008ab47d(8,aiStack_2c[6]);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    piVar1 = *(int **)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    if (piVar1 != (int *)0x0) {
      uStack_8 = 0;
      if (*piVar1 != 0) {
        if (piVar1[1] != 0) {
          func_0x00a32410(1,*piVar1);
        }
        pcVar2 = *(code **)(*(int *)*piVar1 + 8);
        _guard_check_icall((int *)*piVar1);
        (*pcVar2)();
      }
      uStack_8 = 0xffffffff;
      func_0x008ab812(piVar1,8);
    }
  }
  func_0x00a5f490();
  if (param_3 != 0) {
    aiStack_2c[0] = param_3;
    aiStack_2c[1] = 2;
    aiStack_2c[2] = 2;
    aiStack_2c[3] = 0x10000;
    aiStack_2c[4] = 0;
    aiStack_2c[5] = 0;
    iVar4 = func_0x00a306d0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,*(undefined4 *)(param_1 + 8),
                            aiStack_2c,0,param_1 + 0xc);
    if (iVar4 == 1) goto LAB_00a5f7b1;
    if (param_5 == '\0') {
      *(char **)(param_1 + 0x18) = "IndexBuffer11(static)";
      pcVar5 = "IndexBuffer11(static)";
    }
    else {
      *(char **)(param_1 + 0x18) = "IndexBuffer11(dynamic)";
      pcVar5 = "IndexBuffer11(dynamic)";
    }
    func_0x00a2fa40(**(undefined4 **)(param_1 + 0x10),pcVar5,*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x1c) = param_3;
  *(char *)(param_1 + 0x24) = param_5;
LAB_00a5f7b1:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a5f7e0(int param_1,int param_2,uint param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_c [4];
  int *piStack_8;
  
  if (**(int **)(param_1 + 0x10) == 0) {
    uVar5 = 0x4a;
    pcVar3 = "Internal index buffer is not initialized.";
  }
  else {
    if ((param_3 <= param_4 + param_3) && (param_4 + param_3 <= *(uint *)(param_1 + 0x1c))) {
      iVar4 = 5;
      iVar2 = func_0x009e8470(param_2,**(int **)(param_1 + 0x10),0,5,0,auStack_c);
      if (iVar2 == 1) {
        return 1;
      }
      *piStack_8 = iVar4 + param_3;
      return 0;
    }
    uVar5 = 0x4f;
    pcVar3 = "Index buffer map range is not inside the buffer.";
  }
  pcVar1 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x8007000e,pcVar3,
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\IndexBuffer11.cpp"
                     ,"rx::IndexBuffer11::mapBuffer",uVar5);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a5f890(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((param_3 <= (uint)param_1[7]) && (param_4 == param_1[8])) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 4);
  _guard_check_icall(param_2,param_3,param_4,(char)param_1[9]);
  uVar2 = (*pcVar1)();
  return uVar2;
}



undefined4 __thiscall FUN_00a5f8d0(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  
  if (**(int **)(param_1 + 0x10) == 0) {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
    _guard_check_icall(0x8007000e,"Internal index buffer is not initialized.",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\IndexBuffer11.cpp"
                       ,"rx::IndexBuffer11::unmapBuffer",0x5d);
    (*pcVar1)();
    return 1;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x1fd0);
  pcVar1 = *(code **)(*piVar2 + 0x3c);
  _guard_check_icall(piVar2,**(int **)(param_1 + 0x10),0);
  (*pcVar1)();
  return 0;
}



undefined4 * __thiscall FUN_00a60b10(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::RenderTarget11::vftable;
  func_0x00b51200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a60b40(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::RenderTarget11::vftable;
  func_0x00b51200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a60b70(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureRenderTarget11::vftable;
  func_0x009de2f0();
  func_0x009de2f0();
  func_0x009dddb0();
  FUN_009de130();
  func_0x00a2c410();
  *param_1 = rx::RenderTarget11::vftable;
  func_0x00b51200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x94);
  }
  return param_1;
}



void __thiscall FUN_00a60df0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x28);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00a60e20(int param_1,undefined4 param_2,int *param_3)

{
  *param_3 = param_1 + 0x80;
  return 0;
}



int __fastcall FUN_00a60e30(int param_1)

{
  return *(int *)(param_1 + 0xc) + 0x134;
}



int __fastcall FUN_00a60e40(int param_1)

{
  return param_1 + 0x5c;
}



undefined4 __fastcall FUN_00a60e50(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c);
}



undefined4 __fastcall FUN_00a60e60(int param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    return *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
}



int __fastcall FUN_00a60e80(int param_1)

{
  int iVar1;
  
  iVar1 = 0xbc;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x90) == '\0') {
    iVar1 = 0x6c;
  }
  return iVar1 + *(int *)(param_1 + 0xc);
}



undefined4 __fastcall FUN_00a60e90(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1e0);
}



undefined4 __thiscall FUN_00a60ea0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = func_0x00a62bb0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,param_3);
    if (iVar2 == 1) {
      return 1;
    }
  }
  else {
    uVar1 = func_0x00a62b50();
    *param_3 = uVar1;
  }
  return 0;
}



undefined4 __thiscall FUN_00a60ef0(int param_1,undefined4 param_2,int *param_3)

{
  *param_3 = param_1 + 0x6c;
  return 0;
}



int __fastcall FUN_00a60f00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = 0x94;
    if (*(char *)(iVar1 + 0x90) == '\0') {
      iVar2 = 0x44;
    }
    return iVar2 + iVar1;
  }
  return iVar1 + 0x10c;
}



undefined4 __fastcall FUN_00a60f20(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
}



undefined4 * __thiscall FUN_00a61130(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = rx::ShaderExecutableD3D::vftable;
  uVar6 = param_1[9];
  if (0xf < uVar6) {
    iVar1 = param_1[4];
    uVar5 = uVar6 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar6 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_00a611d8;
    }
    func_0x008ab812(iVar3,uVar5);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    uVar6 = param_1[3] - iVar1;
    iVar3 = iVar1;
    if (0xfff < uVar6) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar6 = uVar6 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_00a611d8:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined4 *)(*pcVar2)();
        return puVar4;
      }
    }
    func_0x008ab812(iVar3,uVar6);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a611e0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::UniformStorageD3D::vftable;
  func_0x00952cf0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a61a50(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ShaderExecutable11::vftable;
  func_0x009ddcd0();
  func_0x009dde90();
  func_0x009dde90();
  func_0x009de550();
  func_0x009ddf70();
  func_0x00a61080();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x78);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a61aa0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::UniformStorage11::vftable;
  FUN_00a31c20();
  func_0x00a61120();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a61be0(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::StreamProducerD3DTexture::vftable;
  piVar1 = (int *)param_1[2];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[2] = 0;
  }
  *param_1 = rx::StreamProducerImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a61c70(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::StreamProducerImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a61f80(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int aiStack_20 [3];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51019;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  func_0x00a61ca0(aiStack_20,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) + param_3,param_2
                  ,uVar2);
  uStack_8 = 0;
  if ((aiStack_20[0] != 0x3000) && (cVar1 = func_0x00952a70(3), cVar1 != '\0')) {
    iVar3 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\StreamProducerD3DTexture.cpp"
                            ,"rx::StreamProducerD3DTexture::getGLFrameDescription",0x98,3);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uStack_14 = 1;
    uVar4 = func_0x0046b6e0(iVar3 + 0x10,"Unhandled internal error: ",aiStack_20);
    func_0x00920000(uVar4);
    func_0x00952760();
  }
  func_0x008a4620();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00a62060(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1);
    (*pcVar2)();
  }
  *(int **)(param_1 + 8) = param_2;
  pcVar2 = *(code **)(*param_2 + 4);
  _guard_check_icall(param_2);
  (*pcVar2)();
  uVar3 = func_0x008acb20(0x3106,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = func_0x008acb20(0x33ab,0);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



undefined4 __thiscall FUN_00a620c0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [20];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f51058;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_14 = (int *)0x0;
  pcVar1 = *(code **)(*param_3 + 0xc);
  uStack_8 = 0;
  _guard_check_icall(param_3,&piStack_14,uVar3);
  (*pcVar1)();
  if (piStack_14 == *(int **)(*(int *)(param_1 + 4) + 0x1f90)) {
    uVar5 = func_0x008acb20(0x3106,0);
    func_0x00a61ca0(param_2,param_3,uVar5,auStack_28);
    uStack_8 = 4;
  }
  else {
    iVar4 = func_0x00925210();
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    func_0x0046b6e0(iVar4 + 8,"Texture not created on ANGLE D3D device");
    func_0x00926aa0(param_2);
    func_0x005d3940();
    uStack_8 = 3;
  }
  piVar2 = piStack_14;
  if (piStack_14 != (int *)0x0) {
    piStack_14 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(piVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00a62700(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::SwapChain11::vftable;
  func_0x00a639a0(uVar1);
  func_0x00a60b00();
  func_0x00a60b00();
  func_0x00a31de0();
  func_0x009ddf70();
  func_0x009de550();
  func_0x00a2c260();
  func_0x00a31e10();
  FUN_00a31c20();
  func_0x009de2f0();
  func_0x009dddb0();
  func_0x00a2c410();
  func_0x00a2c410();
  func_0x009de2f0();
  FUN_009de130();
  func_0x00a2c410();
  func_0x009de2f0();
  FUN_009de130();
  func_0x00a2c410();
  func_0x00b512c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1f0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __fastcall FUN_00a62b30(int param_1)

{
  return param_1 + 0x1b8;
}



int __fastcall FUN_00a62b40(int param_1)

{
  return param_1 + 0x1cc;
}



void __thiscall
FUN_00a62e40(int param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_1a0 [152];
  undefined4 uStack_108;
  undefined1 auStack_100 [156];
  undefined1 auStack_64 [4];
  longlong *plStack_60;
  undefined4 *puStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5120b;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  plStack_60 = param_3;
  puStack_50 = param_4;
  puStack_54 = param_5;
  piVar4 = *(int **)(param_1 + 0x38);
  puStack_5c = param_2;
  iStack_58 = param_1;
  if (piVar4 == (int *)0x0) {
    func_0x005d5720(1);
    uStack_8 = 0;
    func_0x0046b6e0(auStack_1a0,"Swap chain uninitialized");
    func_0x0046a470(aiStack_2c);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x0091ffd0(0x3001,0x3001,aiStack_2c);
    if (0xf < uStack_18) {
      uVar5 = uStack_18 + 1;
      iVar3 = aiStack_2c[0];
      if (0xfff < uVar5) {
        iVar3 = *(int *)(aiStack_2c[0] + -4);
        uVar5 = uStack_18 + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar3) - 4U) {
          func_0x008aaf66();
LAB_00a63148:
          func_0x008aaf66();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      func_0x008ab812(iVar3,uVar5);
    }
    func_0x005d3940();
    lVar9 = CONCAT44(puStack_50,iStack_58);
  }
  else {
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    iStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    pcVar2 = *(code **)(*piVar4 + 0x40);
    _guard_check_icall(piVar4,&uStack_4c,uStack_14);
    iVar3 = (*pcVar2)();
    if (iVar3 < 0) {
      uStack_108 = 0x3003;
      func_0x005d5720(1);
      uStack_8 = 2;
      func_0x0046b6e0(auStack_100,"Failed to get frame statistics, ");
      piVar4 = (int *)func_0x009529d0(auStack_64,iVar3);
      iVar3 = piVar4[1];
      if (*piVar4 != 0) {
        func_0x0046b6e0(auStack_100,*piVar4);
      }
      func_0x0091fdc0(auStack_100,iVar3,&DAT_00f9ad64,0x30);
      func_0x0046a470(aiStack_2c);
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      func_0x0091ffd0(0x3003,uStack_108,aiStack_2c);
      if (0xf < uStack_18) {
        uVar5 = uStack_18 + 1;
        iVar3 = aiStack_2c[0];
        if (0xfff < uVar5) {
          iVar3 = *(int *)(aiStack_2c[0] + -4);
          uVar5 = uStack_18 + 0x24;
          if (0x1f < (aiStack_2c[0] - iVar3) - 4U) goto LAB_00a63148;
        }
        func_0x008ab812(iVar3,uVar5);
      }
      func_0x005d3940();
      lVar9 = CONCAT44(puStack_50,iStack_58);
    }
    else {
      *puStack_50 = uStack_44;
      puStack_50[1] = 0;
      *puStack_54 = uStack_4c;
      puStack_54[1] = 0;
      puStack_54 = *(undefined4 **)(iStack_58 + 0x1e8);
      uVar1 = *(undefined4 *)(iStack_58 + 0x1ec);
      puStack_50 = (undefined4 *)uVar1;
      if ((iStack_38 < 0x864) && ((iStack_38 < 0x863 || (uStack_3c < 0x7bd05af7)))) {
        uVar6 = func_0x00e87d70(uStack_3c,iStack_38,1000000,0);
        lVar7 = func_0x00e87ec0(uVar6,puStack_54,uVar1);
        lVar9 = CONCAT44(puStack_50,iStack_58);
      }
      else {
        uVar8 = func_0x00e87ec0(uStack_3c,iStack_38,puStack_54,uVar1);
        uVar6 = func_0x00e87d70(puStack_54,puStack_50,uVar8);
        uVar6 = func_0x00e87d70(uStack_3c - (uint)uVar6,
                                (iStack_38 - (int)((ulonglong)uVar6 >> 0x20)) -
                                (uint)(uStack_3c < (uint)uVar6),1000000,0);
        lVar9 = func_0x00e87ec0(uVar6,puStack_54,puStack_50);
        lVar7 = (uVar8 & 0xffffffff) * 1000000;
        lVar7 = lVar9 + CONCAT44((int)(uVar8 >> 0x20) * 1000000 + (int)((ulonglong)lVar7 >> 0x20),
                                 (int)lVar7);
        param_2 = puStack_5c;
      }
      *plStack_60 = lVar7;
      *param_2 = 0x3000;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  puStack_50 = (undefined4 *)((ulonglong)lVar9 >> 0x20);
  iStack_58 = (int)lVar9;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a63f40(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  int *unaff_FS_OFFSET;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  code *pcStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51391;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_1c = (int *)0x0;
  piStack_14 = (int *)0x0;
  *(uint *)(param_1 + 0x28) = param_5;
  if (4 < param_5) {
    *unaff_FS_OFFSET = iStack_10;
    return 0x300c;
  }
  piVar1 = (int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = FUN_00a651f0(param_2,param_3,param_4);
    *unaff_FS_OFFSET = iStack_10;
    return uVar6;
  }
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de470) &&
     (func_0x008ab40d(&DAT_013de470,uVar5), DAT_013de470 == -1)) {
    uStack_8 = 0;
    uVar6 = func_0x0093d430("gpu.angle");
    DAT_013de46c = (char *)func_0x009b9170(uVar6);
    func_0x008ab3bc(&DAT_013de470);
  }
  pcVar3 = DAT_013de46c;
  puStack_30 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de46c != '\0') {
    uVar6 = func_0x0093d430();
    func_0x009b90e0(uVar6,0x42,pcVar3,"SwapChain11::reset",0,0,0,0,0,0,0);
    pcVar3 = DAT_013de46c;
    uStack_2c = func_0x0093d430();
    puStack_30 = &uStack_2c;
    pcStack_28 = pcVar3;
    pcStack_24 = "SwapChain11::reset";
  }
  piStack_34 = *(int **)(*(int *)(param_1 + 0x14) + 0x1f90);
  if (piStack_34 == (int *)0x0) {
    uVar6 = 0x3002;
  }
  else {
    piVar9 = *(int **)(param_1 + 0x3c);
    if (piVar9 != (int *)0x0) {
      pcVar11 = *(code **)(*piVar9 + 8);
      _guard_check_icall(piVar9);
      (*pcVar11)();
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    piVar9 = (int *)*piVar1;
    if (piVar9 != (int *)0x0) {
      pcVar11 = *(code **)(*piVar9 + 8);
      _guard_check_icall(piVar9);
      (*pcVar11)();
      *piVar1 = 0;
    }
    func_0x009e9600();
    func_0x00a4fbf0();
    if ((param_3 < 1) || (param_4 < 1)) {
      func_0x00a63d90();
      uVar6 = 0x3000;
    }
    else {
      piStack_1c = *(int **)(param_1 + 0x30);
      if (piStack_1c[1] != 0) {
        pcStack_18 = *(code **)(*piStack_1c + 0x10);
        if (*(char *)(param_1 + 0x90) == '\0') {
          iVar10 = *(int *)(param_1 + 0x1e0);
          if (iVar10 == 0) {
            iVar10 = 1;
          }
        }
        else {
          iVar10 = 1;
        }
        uVar6 = func_0x00a62de0();
        piVar9 = piStack_34;
        _guard_check_icall(piStack_34,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2184),uVar6,
                           param_3,param_4,iVar10,piVar1);
        pcStack_18 = (code *)(*pcStack_18)();
        if ((int)pcStack_18 < 0) {
          cVar4 = func_0x00952a70(3);
          pcVar11 = pcStack_18;
          if (cVar4 != '\0') {
            iVar10 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\SwapChain11.cpp"
                                     ,"rx::SwapChain11::reset",0x27c,3);
            uStack_8 = CONCAT31(uStack_8._1_3_,4);
            piStack_14 = (int *)0x1;
            piStack_1c = (int *)0x1;
            uVar6 = func_0x0046b6e0(iVar10 + 0x10,
                                    "Could not create additional swap chains or offscreen surfaces, "
                                   );
            pcVar11 = pcStack_18;
            uVar7 = func_0x009529d0(auStack_40,pcStack_18);
            func_0x009b9220(uVar6,uVar7);
            piVar9 = piStack_34;
          }
          uStack_8 = 1;
          if (((uint)piStack_14 & 1) != 0) {
            piStack_14 = (int *)((uint)piStack_14 & 0xfffffffe);
            func_0x00952760();
          }
          func_0x00a639a0();
          cVar4 = func_0x00a57d60(pcVar11);
          if (cVar4 == '\0') {
            uVar6 = 0x3003;
          }
          else {
            pcVar2 = *(code **)(*piVar9 + 0x9c);
            _guard_check_icall(piVar9);
            uVar6 = (*pcVar2)();
            cVar4 = func_0x00952a70(3);
            if (cVar4 != '\0') {
              iVar10 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\SwapChain11.cpp"
                                       ,"rx::SwapChain11::reset",0x283,3);
              piStack_1c = (int *)((uint)piStack_14 | 2);
              uStack_8 = CONCAT31(uStack_8._1_3_,5);
              piStack_14 = piStack_1c;
              uVar7 = func_0x0046b6e0(iVar10 + 0x10,"Device lost in SwapChain11::reset ");
              uVar8 = func_0x009529d0(auStack_40,pcVar11);
              uVar7 = func_0x009b9220(uVar7,uVar8,", reason: ");
              uVar7 = func_0x0046b6e0(uVar7);
              uVar6 = func_0x009529d0(auStack_38,uVar6);
              func_0x009b9220(uVar7,uVar6);
            }
            if (((uint)piStack_14 & 2) != 0) {
              func_0x00952760();
            }
            uVar6 = 0x300e;
          }
          goto LAB_00a64399;
        }
        if (*(char *)(*(int *)(param_1 + 0x14) + 0x1f9c) != '\0') {
          piStack_14 = (int *)0x0;
          pcVar11 = (code *)**(undefined4 **)*piVar1;
          _guard_check_icall((undefined4 *)*piVar1,&DAT_00ff2428,&piStack_14);
          iVar10 = (*pcVar11)();
          piVar9 = piStack_14;
          if (iVar10 < 0) {
            if (piStack_14 != (int *)0x0) {
              pcVar11 = *(code **)(*piStack_14 + 8);
              _guard_check_icall(piStack_14);
              (*pcVar11)();
            }
            piVar9 = (int *)0x0;
          }
          *(int **)(param_1 + 0x3c) = piVar9;
        }
        uStack_20 = 0;
        pcVar11 = *(code **)(*(int *)*piVar1 + 0x24);
        _guard_check_icall((int *)*piVar1,0,&DAT_00fbd348,&uStack_20);
        (*pcVar11)();
        uVar6 = func_0x00a329e0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x14) + 0x1f98);
        func_0x00a5bf30(uStack_20,uVar6);
        func_0x009e9c10("BackBufferTexture");
        uVar5 = -(uint)(param_2 != 0) & param_2 + 0x98U;
        func_0x00a4b270(uVar5,*(undefined4 *)(*(int *)(param_1 + 0x48) + 4),param_1 + 0x6c);
        func_0x009e9bf0("BackBufferRTV");
        func_0x00a621d0(uVar5,*(undefined4 *)(*(int *)(param_1 + 0x48) + 4),param_1 + 0x7c);
        func_0x009e9c30("BackBufferSRV");
      }
      *(undefined1 *)(param_1 + 0x34) = 1;
      uVar6 = func_0x00a64430(param_2,param_3,param_4);
    }
  }
LAB_00a64399:
  uStack_8 = 8;
  if ((puStack_30 != (undefined4 *)0x0) && (*(char *)puStack_30[1] != '\0')) {
    func_0x009b90e0(*puStack_30,0x45,(char *)puStack_30[1],puStack_30[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



void __thiscall FUN_00a651f0(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [4];
  int iStack_80;
  undefined1 auStack_7c [4];
  int iStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  undefined1 auStack_64 [4];
  int *piStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  undefined1 auStack_50 [40];
  undefined4 uStack_28;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5159d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_58 = param_1;
  uVar9 = 0;
  uStack_54 = 0;
  iStack_78 = param_2;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de468) &&
     (func_0x008ab40d(&DAT_013de468,uStack_14), DAT_013de468 == -1)) {
    uStack_8 = 0;
    uVar5 = func_0x0093d430("gpu.angle");
    DAT_013de464 = (char *)func_0x009b9170(uVar5);
    func_0x008ab3bc(&DAT_013de468);
  }
  pcVar3 = DAT_013de464;
  puStack_74 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de464 != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar3,"SwapChain11::resize",0,0,0,0,0,0,0);
    pcVar3 = DAT_013de464;
    uStack_70 = func_0x0093d430();
    puStack_74 = &uStack_70;
    pcStack_6c = pcVar3;
    pcStack_68 = "SwapChain11::resize";
  }
  piStack_60 = *(int **)(*(int *)(param_1 + 0x14) + 0x1f90);
  if ((((piStack_60 != (int *)0x0) && (0 < param_3)) && (0 < param_4)) &&
     ((*(int *)(param_1 + 0x18) != param_3 || (*(int *)(param_1 + 0x1c) != param_4)))) {
    func_0x009e9600();
    func_0x00a4fbf0();
    func_0x00a63e80();
    pcVar1 = *(code **)(**(int **)(param_1 + 0x38) + 0x30);
    _guard_check_icall(*(int **)(param_1 + 0x38),auStack_50);
    iStack_80 = (*pcVar1)();
    if (iStack_80 < 0) {
      cVar4 = func_0x00952a70(3);
      if (cVar4 != '\0') {
        iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\SwapChain11.cpp"
                                ,"rx::SwapChain11::resize",0x1fa,3);
        uStack_8 = CONCAT31(uStack_8._1_3_,5);
        uStack_54 = 1;
        uVar5 = func_0x0046b6e0(iVar6 + 0x10,"Error reading swap chain description, ");
        uVar7 = func_0x009529d0(auStack_64,iStack_80);
        func_0x009b9220(uVar5,uVar7);
      }
      uStack_8 = 1;
      if (cVar4 != '\0') {
        func_0x00952760();
      }
      func_0x00a639a0();
    }
    else {
      piVar2 = *(int **)(param_1 + 0x38);
      pcVar1 = *(code **)(*piVar2 + 0x34);
      uVar5 = func_0x00a62de0();
      _guard_check_icall(piVar2,uStack_28,param_3,param_4,uVar5,0);
      iVar8 = (*pcVar1)();
      iVar6 = iStack_58;
      if (iVar8 < 0) {
        cVar4 = func_0x00952a70(3);
        if (cVar4 != '\0') {
          iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\SwapChain11.cpp"
                                  ,"rx::SwapChain11::resize",0x204,3);
          uStack_8 = CONCAT31(uStack_8._1_3_,7);
          uVar9 = 2;
          uStack_54 = 2;
          uVar5 = func_0x0046b6e0(iVar6 + 0x10,"Error resizing swap chain buffers, ");
          uVar7 = func_0x009529d0(auStack_84,iVar8);
          func_0x009b9220(uVar5,uVar7);
        }
        uStack_8 = 1;
        if (uVar9 != 0) {
          uVar9 = 0;
          func_0x00952760();
        }
        func_0x00a639a0();
        cVar4 = func_0x00a57d60(iVar8);
        if (cVar4 != '\0') {
          pcVar1 = *(code **)(*piStack_60 + 0x9c);
          _guard_check_icall(piStack_60);
          piStack_60 = (int *)(*pcVar1)();
          cVar4 = func_0x00952a70(3);
          if (cVar4 != '\0') {
            iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\SwapChain11.cpp"
                                    ,"rx::SwapChain11::resize",0x20a,3);
            uStack_8 = CONCAT31(uStack_8._1_3_,8);
            uVar9 = uVar9 | 4;
            uStack_54 = uVar9;
            uVar5 = func_0x0046b6e0(iVar6 + 0x10,"Device lost in SwapChain11::resize ");
            uVar7 = func_0x009529d0(auStack_84,iVar8);
            uVar5 = func_0x009b9220(uVar5,uVar7,", reason: ");
            uVar5 = func_0x0046b6e0(uVar5);
            uVar7 = func_0x009529d0(auStack_7c,piStack_60);
            func_0x009b9220(uVar5,uVar7);
          }
          if ((uVar9 & 4) != 0) {
            func_0x00952760();
          }
        }
      }
      else {
        uStack_5c = 0;
        pcVar1 = *(code **)(**(int **)(iStack_58 + 0x38) + 0x24);
        _guard_check_icall(*(int **)(iStack_58 + 0x38),0,&DAT_00fbd348,&uStack_5c);
        iVar8 = (*pcVar1)();
        if (-1 < iVar8) {
          uVar5 = func_0x00a329e0(*(undefined4 *)(iVar6 + 4),*(int *)(iVar6 + 0x14) + 0x1f98);
          func_0x00a5bf30(uStack_5c,uVar5);
          func_0x009e9c10("BackBufferTexture");
          uVar9 = -(uint)(iStack_78 != 0) & iStack_78 + 0x98U;
          func_0x00a4b270(uVar9,*(undefined4 *)(*(int *)(iVar6 + 0x48) + 4),iVar6 + 0x6c);
          func_0x009e9bf0("BackBufferRTV");
          func_0x00a621d0(uVar9,*(undefined4 *)(*(int *)(iVar6 + 0x48) + 4),iVar6 + 0x7c);
          func_0x009e9c30("BackBufferSRV");
        }
        *(undefined1 *)(iVar6 + 0x34) = 1;
        func_0x00a64430(iStack_78,param_3,param_4);
      }
    }
  }
  uStack_8 = 0xb;
  if ((puStack_74 != (undefined4 *)0x0) && (*(char *)puStack_74[1] != '\0')) {
    func_0x009b90e0(*puStack_74,0x45,(char *)puStack_74[1],puStack_74[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall
FUN_00a65680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x90) == '\0') ||
      (iVar1 = func_0x00a62830(param_2,param_3,param_4,param_5,param_6), iVar1 == 0x3000)) &&
     (iVar1 = func_0x00a636c0(param_2,param_3,param_4,param_5,param_6), iVar1 == 0x3000)) {
    func_0x009e86d0();
    iVar1 = 0x3000;
  }
  return iVar1;
}



undefined4 __thiscall FUN_00a674f0(undefined4 param_1,byte param_2)

{
  func_0x00a66d80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a67510(undefined4 param_1,byte param_2)

{
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x574);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a67540(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureStorage11_2D::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x18e,0x10,0x10,thunk_FUN_009de130,uVar2);
  func_0x00a2c410();
  if ((undefined4 *)param_1[0x182] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x182];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  func_0x00a2c410();
  uStack_8 = 1;
  func_0x008ab4ad(param_1 + 0x167,4,0x10,FUN_0046c770);
  func_0x00a2c410();
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x778);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a67620(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureStorage11_2DArray::vftable;
  func_0x009ce9c0(uVar1);
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x173,0x10,0x10,thunk_FUN_009de130);
  func_0x00a2c410();
  func_0x00a2c410();
  func_0x00a65980(param_1 + 0x15d,*(undefined4 *)(param_1[0x15d] + 4));
  func_0x008ab812(param_1[0x15d],0x20);
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x6d4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a676f0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::TextureStorage11_2DMultisample::vftable;
  if ((undefined4 *)param_1[0x167] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x167];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  func_0x00a2c410();
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5a8);
  }
  return param_1;
}



undefined4 * __fastcall FUN_00a67750(undefined4 *param_1)

{
  int *piVar1;
  uint unaff_ESI;
  
  piVar1 = param_1 + 0x167;
  *param_1 = rx::TextureStorage11_2DMultisampleArray::vftable;
  func_0x00a65980(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x20);
  func_0x00a2c410();
  func_0x00a67190();
  if ((unaff_ESI & 1) != 0) {
    func_0x008ab812(param_1,0x5ac);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a677b0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f489a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureStorage11_3D::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x183,0x10,0x10,thunk_FUN_009de130,uVar1);
  func_0x00a2c410();
  func_0x00a2c410();
  uStack_8 = 1;
  func_0x008ab4ad(param_1 + 0x15f,4,0x10,FUN_0046c770);
  func_0x00a65880(param_1 + 0x15d,*(undefined4 *)(param_1[0x15d] + 4));
  func_0x008ab812(param_1[0x15d],0x1c);
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a67890(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureStorage11_Buffer::vftable;
  func_0x00a2c410();
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5a8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a678d0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f4f770;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::TextureStorage11_Cube::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x1e2,0x10,0x10,thunk_FUN_009de130,uVar1);
  func_0x00a2c410();
  uStack_8 = 1;
  func_0x008ab4ad(param_1 + 0x1d1,4,6,FUN_0046c770);
  func_0x00a2c410();
  uStack_8 = 2;
  func_0x008ab4ad(param_1 + 0x167,0x40,6,FUN_00a408c0);
  func_0x00a2c410();
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa08);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a679b0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureStorage11_EGLImage::vftable;
  func_0x008e2eb0();
  func_0x00a2c410();
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5b0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a67a00(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TextureStorage11_External::vftable;
  func_0x00a2c410();
  func_0x00a67190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5a8);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a67a40(undefined4 param_1,byte param_2)

{
  func_0x00a672e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  return param_1;
}



void __fastcall FUN_00a67a60(int param_1)

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
        func_0x00a32410(0xd,*piVar1,uVar3);
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



void __thiscall FUN_00a67ae0(int param_1,undefined4 param_2,int param_3)

{
  if (*(uint *)(param_3 + 4) < 0x10) {
    *(undefined4 *)(param_1 + 0x738 + *(uint *)(param_3 + 4) * 4) = param_2;
  }
  return;
}



void __thiscall FUN_00a67b00(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar3 = *(undefined4 *)(param_3 + 0xc);
  if (-1 < iVar1) {
    pcVar4 = *(code **)(*param_1 + 0x1c);
    _guard_check_icall();
    iVar5 = (*pcVar4)();
    if (iVar1 < iVar5) {
      iStack_c = iVar1;
      uStack_8 = uVar2;
      uStack_4 = uVar3;
      puVar6 = (undefined4 *)func_0x00a67410(&iStack_c);
      *puVar6 = unaff_retaddr;
    }
  }
  return;
}



void __thiscall FUN_00a67b70(int param_1,undefined4 param_2,int param_3)

{
  if (*(uint *)(param_3 + 4) < 0x10) {
    *(undefined4 *)(param_1 + 0x70c + *(uint *)(param_3 + 4) * 4) = param_2;
  }
  return;
}



void __thiscall FUN_00a67b90(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_3 + 4);
  uVar2 = FUN_004b5b20();
  if ((uVar1 < 0x10) && (uVar2 < 6)) {
    *(undefined4 *)(param_1 + 0x888 + (uVar2 * 0x10 + uVar1) * 4) = param_2;
  }
  return;
}



void __thiscall FUN_00a67bd0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5a4) = param_2;
  return;
}



undefined4 __thiscall FUN_00a67f30(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int unaff_EDI;
  int *piStack_4;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    pcVar1 = *(code **)(*param_1 + 0x54);
    _guard_check_icall(param_2,&stack0xfffffff4);
    iVar2 = (*pcVar1)();
    if (iVar2 != 1) {
      pcVar1 = *(code **)(*piStack_4 + 0x54);
      _guard_check_icall(param_2,&stack0xfffffff0);
      iVar2 = (*pcVar1)();
      if (iVar2 != 1) {
        pcVar1 = *(code **)(**(int **)(param_1[0x13] + 0x1fd0) + 0xbc);
        _guard_check_icall(*(int **)(param_1[0x13] + 0x1fd0),
                           *(undefined4 *)(*(int *)(unaff_EDI + 4) + 4),
                           *(undefined4 *)(*(int *)(param_2 + 4) + 4));
        (*pcVar1)();
        func_0x00a70ae0();
        return 0;
      }
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00a68000(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int *unaff_retaddr;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(param_1[0x13] + 0x1fd0);
  iVar3 = func_0x009dbe40();
  if (*(char *)(iVar3 + 0x48) == '\0') {
    uStack_8 = 0;
    pcVar2 = *(code **)(*param_1 + 0x54);
    _guard_check_icall(param_2,&uStack_8);
    iVar3 = (*pcVar2)();
    if (iVar3 == 1) {
      return 1;
    }
    uStack_c = 0;
    pcVar2 = *(code **)(*unaff_retaddr + 0x54);
    _guard_check_icall(param_2,&uStack_c);
    iVar3 = (*pcVar2)();
    if (iVar3 == 1) {
      return 1;
    }
    pcVar2 = *(code **)(*piVar1 + 0xbc);
    _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(unaff_EBP + 4) + 4),
                       *(undefined4 *)(*(int *)(unaff_ESI + 4) + 4));
    (*pcVar2)();
    func_0x00a70ae0();
    return 0;
  }
  if (*(int *)(param_1[0x15e] + 4) != 0) {
    pcVar2 = *(code **)(*param_3 + 0x34);
    _guard_check_icall(param_2,0);
    iVar3 = (*pcVar2)();
    if (iVar3 == 1) {
      return 1;
    }
    pcVar2 = *(code **)(*param_3 + 0x54);
    _guard_check_icall(uStack_4,&stack0xffffffec);
    iVar3 = (*pcVar2)();
    if (iVar3 == 1) {
      return 1;
    }
    pcVar2 = *(code **)(*piVar1 + 0xbc);
    _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(unaff_EDI + 4) + 4),
                       *(undefined4 *)(param_1[0x15e] + 4));
    (*pcVar2)();
  }
  if (*(int *)(param_1[0x179] + 4) == 0) {
    return 0;
  }
  pcVar2 = *(code **)(*param_3 + 0x34);
  _guard_check_icall(param_2,1);
  iVar3 = (*pcVar2)();
  if (iVar3 != 1) {
    pcVar2 = *(code **)(*param_3 + 0x54);
    _guard_check_icall(uStack_4,&stack0xffffffec);
    iVar3 = (*pcVar2)();
    if (iVar3 != 1) {
      pcVar2 = *(code **)(*piVar1 + 0xbc);
      _guard_check_icall(piVar1,*(undefined4 *)(*(int *)(unaff_EDI + 4) + 4),
                         *(undefined4 *)(param_1[0x179] + 4));
      (*pcVar2)();
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00a681d0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisample::copyToStorage",0xe90);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a68220(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisampleArray::copyToStorage",0xf6d);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a68270(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  int *unaff_retaddr;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_4;
  
  iVar2 = func_0x009dbe40();
  if (*(char *)(iVar2 + 0x48) == '\0') {
    uStack_4 = 0;
    pcVar1 = *(code **)(*param_1 + 0x54);
    _guard_check_icall(param_2,&uStack_4);
    iVar2 = (*pcVar1)();
    if (iVar2 == 1) {
      return 1;
    }
    pcVar1 = *(code **)(*unaff_retaddr + 0x54);
    _guard_check_icall(param_2,&stack0xfffffff0);
    iVar2 = (*pcVar1)();
    if (iVar2 == 1) {
      return 1;
    }
    piVar3 = *(int **)(param_1[0x13] + 0x1fd0);
    iVar2 = *piVar3;
    uVar5 = *(undefined4 *)(unaff_ESI[1] + 4);
    uVar4 = *(undefined4 *)(*(int *)(unaff_EDI + 4) + 4);
  }
  else {
    uStack_4 = *(undefined4 *)(param_1[0x13] + 0x1fd0);
    if (*(int *)(param_1[0x15e] + 4) != 0) {
      pcVar1 = *(code **)(*param_3 + 0x34);
      _guard_check_icall(param_2,0);
      iVar2 = (*pcVar1)();
      if (iVar2 == 1) {
        return 1;
      }
      pcVar1 = *(code **)(*param_3 + 0x54);
      _guard_check_icall(param_2,&stack0xfffffff0);
      iVar2 = (*pcVar1)();
      if (iVar2 == 1) {
        return 1;
      }
      pcVar1 = *(code **)(*unaff_ESI + 0xbc);
      _guard_check_icall(unaff_ESI,*(undefined4 *)(*(int *)(unaff_EDI + 4) + 4),
                         *(undefined4 *)(param_1[0x15e] + 4));
      (*pcVar1)();
    }
    if (*(int *)(param_1[0x1c8] + 4) == 0) goto LAB_00a68408;
    pcVar1 = *(code **)(*param_3 + 0x34);
    _guard_check_icall(param_2,1);
    iVar2 = (*pcVar1)();
    if (iVar2 == 1) {
      return 1;
    }
    pcVar1 = *(code **)(*param_3 + 0x54);
    _guard_check_icall(param_2,&stack0xfffffff0);
    iVar2 = (*pcVar1)();
    if (iVar2 == 1) {
      return 1;
    }
    uVar5 = *(undefined4 *)(param_1[0x1c8] + 4);
    iVar2 = *unaff_ESI;
    uVar4 = *(undefined4 *)(*(int *)(unaff_EDI + 4) + 4);
    piVar3 = unaff_ESI;
  }
  pcVar1 = *(code **)(iVar2 + 0xbc);
  _guard_check_icall(piVar3,uVar4,uVar5);
  (*pcVar1)();
LAB_00a68408:
  func_0x00a70ae0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __thiscall FUN_00a68430(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_EDI;
  int iStack_4;
  
  iVar3 = func_0x009f45e0();
  if (iVar3 != 1) {
    if (*(int *)(param_1 + 0x578) != unaff_EBP) {
      func_0x00a67be0();
      *(int *)(param_1 + 0x578) = unaff_EBP;
    }
    iVar3 = func_0x009f45e0(param_2,&stack0xfffffff0);
    if (iVar3 != 1) {
      pcVar1 = *(code **)(*unaff_EDI + 0x1c);
      _guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(_DAT_00000000 + 0x54);
      _guard_check_icall(param_2,&stack0xffffffec);
      iVar3 = (*pcVar1)();
      if (iVar3 != 1) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x4c) + 0x1fd0);
        pcVar1 = *(code **)(*piVar2 + 0xbc);
        _guard_check_icall(piVar2,*(undefined4 *)(iStack_4 + 4),
                           *(undefined4 *)(*(int *)(param_2 + 4) + 4));
        (*pcVar1)();
        func_0x00a70ae0();
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_00a68a10(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11ImmutableBase::createSRVForImage",0x747);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a68a60(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_4;
  iStack_4c = *(int *)(param_1 + 0x50) + param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 4;
  uStack_48 = 1;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_6 + 0x10) = "TexStorage2D.SRVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorage2D.SRVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a68c20(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_4;
  iStack_4c = *(int *)(param_1 + 0x50) + param_3;
  uStack_40 = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 5;
  uStack_48 = 1;
  uStack_44 = 0;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_6 + 0x10) = "TexStorage2DArray.SRVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorage2DArray.SRVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a68df0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_4;
  iStack_4c = *(int *)(param_1 + 0x50) + param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 8;
  uStack_48 = 1;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_6 + 0x10) = "TexStorage3D.SRVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorage3D.SRVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a68fb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined **ppuStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = func_0x00a709d0(param_2,uVar3);
  if (iVar4 != 1) {
    puVar5 = (uint *)func_0x00a74c80(param_4);
    uStack_58 = param_4;
    uStack_54 = 1;
    uStack_50 = *(uint *)(*(int *)(param_1 + 0x59c) + 8) / *puVar5;
    uStack_4c = func_0x00e87ec0(*(undefined4 *)(param_1 + 0x5a0),*(undefined4 *)(param_1 + 0x5a4),
                                *puVar5,0);
    iVar4 = *(int *)(param_2 + 0x1d14);
    uStack_18 = *(undefined4 *)(param_1 + 0x4c);
    ppuStack_2c = rx::Resource11Base<>::vftable;
    uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
    puStack_1c = (undefined4 *)func_0x008ab47d(8);
    if (puStack_1c == (undefined4 *)0x0) {
      puStack_28 = (undefined4 *)0x0;
    }
    else {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
      puStack_28 = puStack_1c;
    }
    uStack_24 = 0;
    uStack_20 = 0;
    ppuStack_2c = rx::Resource11<>::vftable;
    uStack_8 = 0;
    iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uStack_18,&uStack_58,uStack_14,
                            &ppuStack_2c);
    if (iVar4 != 1) {
      puStack_1c = (undefined4 *)func_0x008ab47d(8);
      if (puStack_1c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puStack_1c = 0;
        puStack_1c[1] = 0;
        puVar6 = puStack_1c;
      }
      func_0x009dc230(puVar6);
      uStack_34 = 0;
      uVar1 = puStack_3c[1];
      puStack_3c[1] = puStack_28[1];
      puStack_28[1] = uVar1;
      uVar1 = *puStack_3c;
      uStack_30 = 0;
      ppuStack_40 = rx::SharedResource11<>::vftable;
      *puStack_3c = *puStack_28;
      *puStack_28 = uVar1;
      uVar1 = *(undefined4 *)(param_6 + 4);
      uVar2 = *(undefined4 *)(param_6 + 8);
      *(undefined4 **)(param_6 + 4) = puStack_3c;
      *(undefined4 *)(param_6 + 8) = uStack_38;
      puStack_3c = (undefined4 *)uVar1;
      uStack_38 = uVar2;
      func_0x009de2f0();
      uStack_8 = 0xffffffff;
      func_0x009de210();
      *(char **)(param_6 + 0x10) = "TexBuffer.SRVForImage";
      *(int *)(param_6 + 0xc) = param_1 + 0x34;
      func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexBuffer.SRVForImage",param_1 + 0x34);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    uStack_8 = 0xffffffff;
    func_0x009de210();
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a691b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_4;
  iStack_4c = *(int *)(param_1 + 0x50) + param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 5;
  uStack_48 = 1;
  uStack_44 = 0;
  uStack_40 = 6;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  ppuStack_28 = rx::Resource11Base<>::vftable;
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_6 + 0x10) = "TexStorageCube.SRVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorageCube.SRVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_00a69380(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_External::createSRVForImage",0x706);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a693d0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_5;
  iStack_4c = *(int *)(param_1 + 0x50) + param_3;
  uStack_50 = 4;
  iStack_48 = param_4;
  iVar4 = func_0x009dbe40(uVar3);
  if (*(char *)(iVar4 + 0x48) != '\0') {
    if ((param_4 == 1) && (1 < *(uint *)(param_1 + 0x54))) {
      iVar4 = func_0x00a6b610(param_2,1);
      if (iVar4 == 1) goto LAB_00a694e4;
      param_6 = param_1 + 0x5e0;
    }
    else {
      param_6 = param_1 + 0x574;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 != 1) {
    puStack_18 = (undefined4 *)func_0x008ab47d(8);
    if (puStack_18 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puStack_18 = 0;
      puStack_18[1] = 0;
      puVar5 = puStack_18;
    }
    func_0x009dc230(puVar5);
    uStack_30 = 0;
    uVar1 = puStack_38[1];
    puStack_38[1] = puStack_24[1];
    puStack_24[1] = uVar1;
    uVar1 = *puStack_38;
    uStack_2c = 0;
    ppuStack_3c = rx::SharedResource11<>::vftable;
    *puStack_38 = *puStack_24;
    *puStack_24 = uVar1;
    uVar1 = *(undefined4 *)(param_7 + 4);
    uVar2 = *(undefined4 *)(param_7 + 8);
    *(undefined4 **)(param_7 + 4) = puStack_38;
    *(undefined4 *)(param_7 + 8) = uStack_34;
    puStack_38 = (undefined4 *)uVar1;
    uStack_34 = uVar2;
    func_0x009de2f0();
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *(char **)(param_7 + 0x10) = "TexStorage2D.SRV";
    *(int *)(param_7 + 0xc) = param_1 + 0x34;
    func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorage2D.SRV",param_1 + 0x34);
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  uStack_8 = 0xffffffff;
  func_0x009de210();
LAB_00a694e4:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a695d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_5;
  iStack_4c = *(int *)(param_1 + 0x50) + param_3;
  uStack_48 = param_4;
  uStack_40 = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 5;
  uStack_44 = 0;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 4);
  uVar2 = *(undefined4 *)(param_7 + 8);
  *(undefined4 **)(param_7 + 4) = puStack_38;
  *(undefined4 *)(param_7 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_7 + 0x10) = "TexStorage2DArray.SRV";
  *(int *)(param_7 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorage2DArray.SRV",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a697a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_5;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 6;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uVar2 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  iStack_14 = param_1;
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uVar2,&ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 4);
  uVar2 = *(undefined4 *)(param_7 + 8);
  *(undefined4 **)(param_7 + 4) = puStack_38;
  *(undefined4 *)(param_7 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_7 + 0x10) = "TexStorage2DMS.SRV";
  *(int *)(param_7 + 0xc) = iStack_14 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorage2DMS.SRV",iStack_14 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a69950(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_5;
  uStack_48 = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 7;
  uStack_4c = 0;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 4);
  uVar2 = *(undefined4 *)(param_7 + 8);
  *(undefined4 **)(param_7 + 4) = puStack_38;
  *(undefined4 *)(param_7 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_7 + 0x10) = "TexStorage2DMSArray.SRV";
  *(int *)(param_7 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorage2DMSArray.SRV",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a69b10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_5;
  uStack_4c = param_3;
  uStack_48 = param_4;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 8;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uVar2 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  iStack_14 = param_1;
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uVar2,&ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 4);
  uVar2 = *(undefined4 *)(param_7 + 8);
  *(undefined4 **)(param_7 + 4) = puStack_38;
  *(undefined4 *)(param_7 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_7 + 0x10) = "TexStorage3D.SRV";
  *(int *)(param_7 + 0xc) = iStack_14 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorage3D.SRV",iStack_14 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a69cd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined **ppuStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = func_0x00a709d0(param_2,uVar3);
  if (iVar4 != 1) {
    puVar5 = (uint *)func_0x00a74c80(param_5);
    uStack_58 = param_5;
    uStack_54 = 1;
    uStack_50 = *(uint *)(*(int *)(param_1 + 0x59c) + 8) / *puVar5;
    uStack_4c = func_0x00e87ec0(*(undefined4 *)(param_1 + 0x5a0),*(undefined4 *)(param_1 + 0x5a4),
                                *puVar5,0);
    iVar4 = *(int *)(param_2 + 0x1d14);
    uStack_18 = *(undefined4 *)(param_1 + 0x4c);
    ppuStack_2c = rx::Resource11Base<>::vftable;
    uStack_14 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
    puStack_1c = (undefined4 *)func_0x008ab47d(8);
    if (puStack_1c == (undefined4 *)0x0) {
      puStack_28 = (undefined4 *)0x0;
    }
    else {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
      puStack_28 = puStack_1c;
    }
    uStack_24 = 0;
    uStack_20 = 0;
    ppuStack_2c = rx::Resource11<>::vftable;
    uStack_8 = 0;
    iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uStack_18,&uStack_58,uStack_14,
                            &ppuStack_2c);
    if (iVar4 != 1) {
      puStack_1c = (undefined4 *)func_0x008ab47d(8);
      if (puStack_1c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puStack_1c = 0;
        puStack_1c[1] = 0;
        puVar6 = puStack_1c;
      }
      func_0x009dc230(puVar6);
      uStack_34 = 0;
      uVar1 = puStack_3c[1];
      puStack_3c[1] = puStack_28[1];
      puStack_28[1] = uVar1;
      uVar1 = *puStack_3c;
      uStack_30 = 0;
      ppuStack_40 = rx::SharedResource11<>::vftable;
      *puStack_3c = *puStack_28;
      *puStack_28 = uVar1;
      uVar1 = *(undefined4 *)(param_7 + 4);
      uVar2 = *(undefined4 *)(param_7 + 8);
      *(undefined4 **)(param_7 + 4) = puStack_3c;
      *(undefined4 *)(param_7 + 8) = uStack_38;
      puStack_3c = (undefined4 *)uVar1;
      uStack_38 = uVar2;
      func_0x009de2f0();
      uStack_8 = 0xffffffff;
      func_0x009de210();
      *(char **)(param_7 + 0x10) = "TexBuffer.SRV";
      *(int *)(param_7 + 0xc) = param_1 + 0x34;
      func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexBuffer.SRV",param_1 + 0x34);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    uStack_8 = 0xffffffff;
    func_0x009de210();
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a69ed0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined **ppuStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_58 = param_5;
  iVar4 = func_0x00a72520(param_5,uVar3);
  if ((iVar4 == 0x1404) || (iVar4 == 0x1405)) {
    uStack_54 = 5;
    uStack_48 = 0;
    uStack_44 = 6;
  }
  else {
    uStack_54 = 9;
  }
  iStack_50 = *(int *)(param_1 + 0x50) + param_3;
  iStack_4c = param_4;
  iVar4 = func_0x009dbe40();
  if (*(char *)(iVar4 + 0x48) != '\0') {
    if ((param_4 == 1) && (1 < *(uint *)(param_1 + 0x54))) {
      iVar4 = func_0x00a6b7b0(param_2,1);
      if (iVar4 == 1) goto LAB_00a6a018;
      param_6 = param_1 + 0x71c;
    }
    else {
      param_6 = param_1 + 0x574;
    }
  }
  iStack_14 = *(int *)(param_1 + 0x4c);
  uVar1 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  ppuStack_2c = rx::Resource11Base<>::vftable;
  iVar4 = *(int *)(param_2 + 0x1d14);
  iStack_18 = iStack_14 + 0x23c0;
  puStack_1c = (undefined4 *)func_0x008ab47d(8);
  if (puStack_1c == (undefined4 *)0x0) {
    puStack_28 = (undefined4 *)0x0;
  }
  else {
    *puStack_1c = 0;
    puStack_1c[1] = 0;
    puStack_28 = puStack_1c;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  ppuStack_2c = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,iStack_14,&uStack_58,uVar1,
                          &ppuStack_2c);
  if (iVar4 != 1) {
    puStack_1c = (undefined4 *)func_0x008ab47d(8);
    if (puStack_1c == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
      puVar5 = puStack_1c;
    }
    func_0x009dc230(puVar5);
    uStack_34 = 0;
    uVar1 = puStack_3c[1];
    puStack_3c[1] = puStack_28[1];
    puStack_28[1] = uVar1;
    uVar1 = *puStack_3c;
    uStack_30 = 0;
    ppuStack_40 = rx::SharedResource11<>::vftable;
    *puStack_3c = *puStack_28;
    *puStack_28 = uVar1;
    uVar1 = *(undefined4 *)(param_7 + 4);
    uVar2 = *(undefined4 *)(param_7 + 8);
    *(undefined4 **)(param_7 + 4) = puStack_3c;
    *(undefined4 *)(param_7 + 8) = uStack_38;
    puStack_3c = (undefined4 *)uVar1;
    uStack_38 = uVar2;
    func_0x009de2f0();
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *(char **)(param_7 + 0x10) = "TexStorageCube.SRV";
    *(int *)(param_7 + 0xc) = param_1 + 0x34;
    func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorageCube.SRV",param_1 + 0x34);
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  uStack_8 = 0xffffffff;
  func_0x009de210();
LAB_00a6a018:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a6a100(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [20];
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51bbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar4 = func_0x00a2c4c0(param_1 + 0x57c,uVar5);
  if (cVar4 == '\0') {
    piStack_14 = (int *)0x0;
    iVar6 = func_0x009f45e0(param_2,&piStack_14);
    if (iVar6 != 1) {
      pcVar3 = *(code **)(*piStack_14 + 0x28);
      _guard_check_icall(param_2,&puStack_18);
      iVar6 = (*pcVar3)();
      if (iVar6 != 1) {
        iVar6 = func_0x009e8300(auStack_50);
        uVar1 = *(undefined4 *)(param_7 + 4);
        *(undefined4 *)(param_7 + 4) = *(undefined4 *)(iVar6 + 4);
        *(undefined4 *)(iVar6 + 4) = uVar1;
        uVar1 = *(undefined4 *)(param_7 + 8);
        *(undefined4 *)(param_7 + 8) = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)(iVar6 + 8) = uVar1;
        func_0x009de2f0();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
    }
  }
  else {
    uStack_68 = param_5;
    iStack_60 = *(int *)(param_1 + 0x50) + param_3;
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    uStack_5c = param_4;
    uStack_64 = 4;
    ppuStack_28 = rx::Resource11Base<>::vftable;
    piStack_14 = *(int **)(*(int *)(param_6 + 4) + 4);
    iVar6 = *(int *)(param_2 + 0x1d14);
    puStack_18 = (undefined4 *)func_0x008ab47d(8);
    if (puStack_18 == (undefined4 *)0x0) {
      puStack_24 = (undefined4 *)0x0;
    }
    else {
      *puStack_18 = 0;
      puStack_18[1] = 0;
      puStack_24 = puStack_18;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    ppuStack_28 = rx::Resource11<>::vftable;
    uStack_8 = 0;
    iVar6 = func_0x00a31190(-(uint)(iVar6 != 0) & iVar6 + 0x24U,uVar1,&uStack_68,piStack_14,
                            &ppuStack_28);
    if (iVar6 != 1) {
      puStack_18 = (undefined4 *)func_0x008ab47d(8);
      if (puStack_18 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puStack_18 = 0;
        puStack_18[1] = 0;
        puVar7 = puStack_18;
      }
      func_0x009dc230(puVar7);
      uStack_30 = 0;
      uVar1 = puStack_38[1];
      puStack_38[1] = puStack_24[1];
      puStack_24[1] = uVar1;
      uVar1 = *puStack_38;
      uStack_2c = 0;
      ppuStack_3c = rx::SharedResource11<>::vftable;
      *puStack_38 = *puStack_24;
      *puStack_24 = uVar1;
      uVar1 = *(undefined4 *)(param_7 + 4);
      uVar2 = *(undefined4 *)(param_7 + 8);
      *(undefined4 **)(param_7 + 4) = puStack_38;
      *(undefined4 *)(param_7 + 8) = uStack_34;
      puStack_38 = (undefined4 *)uVar1;
      uStack_34 = uVar2;
      func_0x009de2f0();
      uStack_8 = 0xffffffff;
      func_0x009de210();
      *(char **)(param_7 + 0x10) = "TexStorageEGLImage.SRV";
      *(int *)(param_7 + 0xc) = param_1 + 0x34;
      func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorageEGLImage.SRV",param_1 + 0x34);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    uStack_8 = 0xffffffff;
    func_0x009de210();
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a6a360(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51b5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = param_5;
  uStack_44 = *(undefined4 *)(param_1 + 0x59c);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_50 = 5;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_40 = 1;
  uStack_14 = *(undefined4 *)(*(int *)(param_6 + 4) + 4);
  ppuStack_28 = rx::Resource11Base<>::vftable;
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a31190(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_54,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x009de210();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x009dc230(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 4);
  uVar2 = *(undefined4 *)(param_7 + 8);
  *(undefined4 **)(param_7 + 4) = puStack_38;
  *(undefined4 *)(param_7 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x009de2f0();
  uStack_8 = 0xffffffff;
  func_0x009de210();
  *(char **)(param_7 + 0x10) = "TexStorage2D.SRV";
  *(int *)(param_7 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_7 + 4),"TexStorage2D.SRV",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_00a6a530(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11ImmutableBase::createUAVForImage",0x751);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a6a580(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_50 = param_4;
  iStack_48 = *(int *)(param_1 + 0x50) + param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_4c = 4;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a315f0(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_50,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x00a31cc0();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x00a656f0(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x00a66d80();
  uStack_8 = 0xffffffff;
  func_0x00a31cc0();
  *(char **)(param_6 + 0x10) = "TexStorage2D.UAVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorage2D.UAVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a6a740(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_50 = param_4;
  iStack_48 = *(int *)(param_1 + 0x50) + param_3;
  uStack_40 = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_4c = 5;
  uStack_44 = 0;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a315f0(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_50,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x00a31cc0();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x00a656f0(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x00a66d80();
  uStack_8 = 0xffffffff;
  func_0x00a31cc0();
  *(char **)(param_6 + 0x10) = "TexStorage2DArray.UAVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorage2DArray.UAVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a6a900(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_50 = param_4;
  iStack_48 = *(int *)(param_1 + 0x50) + param_3;
  uStack_40 = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_4c = 8;
  uStack_44 = 0;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a315f0(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_50,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x00a31cc0();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x00a656f0(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x00a66d80();
  uStack_8 = 0xffffffff;
  func_0x00a31cc0();
  *(char **)(param_6 + 0x10) = "TexStorage3D.UAVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorage3D.UAVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a6aac0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined **ppuStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51c1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = func_0x00a709d0(param_2,uVar3);
  if (iVar4 != 1) {
    puVar5 = (uint *)func_0x00a74c80(param_4);
    uStack_54 = param_4;
    uStack_50 = 1;
    uStack_4c = *(uint *)(*(int *)(param_1 + 0x59c) + 8) / *puVar5;
    uStack_48 = func_0x00e87ec0(*(undefined4 *)(param_1 + 0x5a0),*(undefined4 *)(param_1 + 0x5a4),
                                *puVar5,0);
    iVar4 = *(int *)(param_2 + 0x1d14);
    uStack_18 = *(undefined4 *)(param_1 + 0x4c);
    uStack_44 = 0;
    ppuStack_2c = rx::Resource11Base<>::vftable;
    uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
    puStack_1c = (undefined4 *)func_0x008ab47d(8);
    if (puStack_1c == (undefined4 *)0x0) {
      puStack_28 = (undefined4 *)0x0;
    }
    else {
      *puStack_1c = 0;
      puStack_1c[1] = 0;
      puStack_28 = puStack_1c;
    }
    uStack_24 = 0;
    uStack_20 = 0;
    ppuStack_2c = rx::Resource11<>::vftable;
    uStack_8 = 0;
    iVar4 = func_0x00a315f0(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uStack_18,&uStack_54,uStack_14,
                            &ppuStack_2c);
    if (iVar4 != 1) {
      puStack_1c = (undefined4 *)func_0x008ab47d(8);
      if (puStack_1c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puStack_1c = 0;
        puStack_1c[1] = 0;
        puVar6 = puStack_1c;
      }
      func_0x00a656f0(puVar6);
      uStack_34 = 0;
      uVar1 = puStack_3c[1];
      puStack_3c[1] = puStack_28[1];
      puStack_28[1] = uVar1;
      uVar1 = *puStack_3c;
      uStack_30 = 0;
      ppuStack_40 = rx::SharedResource11<>::vftable;
      *puStack_3c = *puStack_28;
      *puStack_28 = uVar1;
      uVar1 = *(undefined4 *)(param_6 + 4);
      uVar2 = *(undefined4 *)(param_6 + 8);
      *(undefined4 **)(param_6 + 4) = puStack_3c;
      *(undefined4 *)(param_6 + 8) = uStack_38;
      puStack_3c = (undefined4 *)uVar1;
      uStack_38 = uVar2;
      func_0x00a66d80();
      uStack_8 = 0xffffffff;
      func_0x00a31cc0();
      *(char **)(param_6 + 0x10) = "TexBuffer.UAVForImage";
      *(int *)(param_6 + 0xc) = param_1 + 0x34;
      func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexBuffer.UAVForImage",param_1 + 0x34);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    uStack_8 = 0xffffffff;
    func_0x00a31cc0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a6acc0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51bed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_50 = param_4;
  iStack_48 = *(int *)(param_1 + 0x50) + param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_4c = 5;
  uStack_44 = 0;
  uStack_40 = 6;
  ppuStack_28 = rx::Resource11Base<>::vftable;
  uStack_14 = *(undefined4 *)(*(int *)(param_5 + 4) + 4);
  iVar4 = *(int *)(param_2 + 0x1d14);
  puStack_18 = (undefined4 *)func_0x008ab47d(8,uVar3);
  if (puStack_18 == (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puStack_24 = puStack_18;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_28 = rx::Resource11<>::vftable;
  uStack_8 = 0;
  iVar4 = func_0x00a315f0(-(uint)(iVar4 != 0) & iVar4 + 0x24U,uVar1,&uStack_50,uStack_14,
                          &ppuStack_28);
  if (iVar4 == 1) {
    uStack_8 = 0xffffffff;
    func_0x00a31cc0();
    *unaff_FS_OFFSET = iStack_10;
    return 1;
  }
  puStack_18 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puStack_18 = 0;
    puStack_18[1] = 0;
    puVar5 = puStack_18;
  }
  func_0x00a656f0(puVar5);
  uStack_30 = 0;
  uVar1 = puStack_38[1];
  puStack_38[1] = puStack_24[1];
  puStack_24[1] = uVar1;
  uVar1 = *puStack_38;
  uStack_2c = 0;
  ppuStack_3c = rx::SharedResource11<>::vftable;
  *puStack_38 = *puStack_24;
  *puStack_24 = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 **)(param_6 + 4) = puStack_38;
  *(undefined4 *)(param_6 + 8) = uStack_34;
  puStack_38 = (undefined4 *)uVar1;
  uStack_34 = uVar2;
  func_0x00a66d80();
  uStack_8 = 0xffffffff;
  func_0x00a31cc0();
  *(char **)(param_6 + 0x10) = "TexStorageCube.UAVForImage";
  *(int *)(param_6 + 0xc) = param_1 + 0x34;
  func_0x00a2fa40(**(undefined4 **)(param_6 + 4),"TexStorageCube.UAVForImage",param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_00a6ae90(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_External::createUAVForImage",0x710);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a6aee0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x738 + *(int *)(param_2 + 4) * 4) = 0;
  return;
}



void __thiscall FUN_00a6af00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int aiStack_c [3];
  
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 8);
  iStack_18 = iVar2;
  iStack_14 = iVar4;
  iStack_10 = iVar3;
  func_0x00a65b10(aiStack_c,&iStack_18);
  if (*(char *)(aiStack_c[0] + 0xd) == '\0') {
    iVar1 = *(int *)(aiStack_c[0] + 0x10);
    bVar7 = SBORROW4(iVar2,iVar1);
    bVar6 = iVar2 - iVar1 < 0;
    if (iVar2 == iVar1) {
      iVar2 = *(int *)(aiStack_c[0] + 0x14);
      bVar7 = SBORROW4(iVar4,iVar2);
      bVar6 = iVar4 - iVar2 < 0;
      if (iVar4 == iVar2) {
        bVar7 = SBORROW4(iVar3,*(int *)(aiStack_c[0] + 0x18));
        bVar6 = iVar3 - *(int *)(aiStack_c[0] + 0x18) < 0;
      }
    }
    if ((bVar7 == bVar6) && (aiStack_c[0] != *(int *)(param_1 + 0x6cc))) {
      func_0x00a67410(&stack0xffffffe0);
    }
  }
  puVar5 = (undefined4 *)func_0x00a67410(&stack0xffffffe0);
  *puVar5 = 0;
  return;
}



void __thiscall FUN_00a6af90(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x70c + *(int *)(param_2 + 4) * 4) = 0;
  return;
}



void __thiscall FUN_00a6afb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = FUN_004b5b20();
  *(undefined4 *)(param_1 + 0x888 + (iVar2 * 0x10 + iVar1) * 4) = 0;
  return;
}



void __fastcall FUN_00a6afe0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5a4) = 0;
  return;
}



undefined4 FUN_00a6aff0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11::ensureDropStencilTexture",0x35d);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a6b040(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_54 [36];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_54;
  if (*(int *)(*(int *)(param_1 + 0x16c) + 4) != 0) {
    *param_3 = 1;
    FUN_008ab370();
    return;
  }
  uStack_2c = *(undefined4 *)(param_1 + 0x60);
  uStack_28 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x5c);
  iStack_64 = *(int *)(param_1 + 0x4c) + 0x1f98;
  uStack_24 = 1;
  uStack_68 = 0x8cac;
  uStack_10 = 0x48;
  uStack_c = 0;
  uStack_20 = 0x27;
  uStack_8 = 0;
  uStack_1c = 1;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar1 = func_0x00a329e0();
  iStack_64 = param_1 + 0x168;
  uStack_68 = 0;
  iVar2 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                          *(int *)(param_2 + 0x1d14) + 0x24U,&uStack_30,uVar1);
  if (iVar2 != 1) {
    *(char **)(param_1 + 0x178) = "TexStorage2D.DropStencil";
    *(int *)(param_1 + 0x174) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x16c) + 4),"TexStorage2D.DropStencil",
                    param_1 + 0x34);
    uVar1 = func_0x00967770(&uStack_68,0,*(undefined4 *)(param_1 + 0x54));
    iVar2 = func_0x00a70890(param_2,uVar1);
    if (iVar2 != 1) {
      *param_3 = 0;
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6b1a0(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *_Dst;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_8c [36];
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined4 *puStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  puStack_c = &DAT_00f51c4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_58 = param_2;
  puStack_5c = param_3;
  iStack_4c = param_1;
  if (*(int *)(*(int *)(param_1 + 0x16c) + 4) != 0) {
    *param_3 = 1;
    goto LAB_00a6b3d4;
  }
  uStack_34 = *(undefined4 *)(param_1 + 100);
  uStack_3c = *(undefined4 *)(param_1 + 0x60);
  uStack_38 = *(undefined4 *)(param_1 + 0x54);
  uStack_40 = *(undefined4 *)(param_1 + 0x5c);
  uStack_20 = 0x48;
  uStack_1c = 0;
  uStack_30 = 0x27;
  uStack_18 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  uStack_24 = 0;
  uVar3 = func_0x00a329e0(0x8cac,*(int *)(param_1 + 0x4c) + 0x1f98,uStack_14);
  iVar4 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                          *(int *)(param_2 + 0x1d14) + 0x24U,&uStack_40,uVar3,0,param_1 + 0x168);
  if (iVar4 == 1) goto LAB_00a6b3d4;
  *(char **)(param_1 + 0x178) = "TexStorage2DArray.DropStencil";
  *(int *)(param_1 + 0x174) = param_1 + 0x34;
  func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x16c) + 4),"TexStorage2DArray.DropStencil",
                  param_1 + 0x34);
  uVar6 = *(uint *)(param_1 + 0x54);
  _Dst = (int *)0x0;
  iStack_50 = *(int *)(param_1 + 100);
  piStack_68 = (int *)0x0;
  piStack_64 = (int *)0x0;
  piStack_60 = (int *)0x0;
  iStack_48 = iStack_50;
  uStack_44 = uVar6;
  if (uVar6 != 0) {
    if (0x3fffffff < uVar6) {
      func_0x0046e700();
LAB_00a6b3f7:
      func_0x00463420();
      goto LAB_00a6b3fc;
    }
    uVar1 = uVar6 * 4;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        _Dst = (int *)func_0x008ab47d(uVar1);
      }
      else {
        if (uVar1 + 0x23 <= uVar1) goto LAB_00a6b3f7;
        iVar4 = func_0x008ab47d(uVar1 + 0x23);
        if (iVar4 == 0) goto LAB_00a6b3fc;
        _Dst = (int *)(iVar4 + 0x23U & 0xffffffe0);
        _Dst[-1] = iVar4;
      }
    }
    param_1 = iStack_4c;
    uStack_54 = 0;
    piVar5 = _Dst + uVar6;
    uVar6 = uStack_44;
    piVar7 = _Dst;
    piStack_68 = _Dst;
    piStack_60 = piVar5;
    if (iStack_50 == 0) {
      memset(_Dst,0,uStack_44 * 4);
      piStack_64 = piVar5;
    }
    else {
      for (; piStack_64 = piVar5, uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar7 = iStack_48;
        piVar7 = piVar7 + 1;
      }
    }
  }
  piVar7 = piStack_64;
  uStack_8 = 0;
  uVar3 = func_0x009677d0(auStack_8c,0,*(undefined4 *)(param_1 + 0x54),_Dst);
  iVar4 = func_0x00a70890(iStack_58,uVar3);
  if (iVar4 != 1) {
    *puStack_5c = 0;
  }
  if (_Dst != (int *)0x0) {
    uVar6 = (int)piVar7 - (int)_Dst & 0xfffffffc;
    piVar7 = _Dst;
    if (0xfff < uVar6) {
      piVar7 = (int *)_Dst[-1];
      uVar6 = uVar6 + 0x23;
      if (0x1f < (uint)((int)_Dst + (-4 - (int)piVar7))) {
LAB_00a6b3fc:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(piVar7,uVar6);
  }
LAB_00a6b3d4:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00a6b410(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisample::ensureDropStencilTexture",0xf35);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a6b460(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisampleArray::ensureDropStencilTexture",0x1045);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a6b4b0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_54 [36];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_54;
  if (*(int *)(*(int *)(param_1 + 0x16c) + 4) != 0) {
    *param_3 = 1;
    FUN_008ab370();
    return;
  }
  uStack_2c = *(undefined4 *)(param_1 + 0x60);
  uStack_28 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x5c);
  iStack_64 = *(int *)(param_1 + 0x4c) + 0x1f98;
  uStack_24 = 6;
  uStack_68 = 0x8cac;
  uStack_10 = 0x48;
  uStack_c = 0;
  uStack_20 = 0x27;
  uStack_8 = 4;
  uStack_1c = 1;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar1 = func_0x00a329e0();
  iStack_64 = param_1 + 0x168;
  uStack_68 = 0;
  iVar2 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                          *(int *)(param_2 + 0x1d14) + 0x24U,&uStack_30,uVar1);
  if (iVar2 != 1) {
    *(char **)(param_1 + 0x178) = "TexStorageCube.DropStencil";
    *(int *)(param_1 + 0x174) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x16c) + 4),"TexStorageCube.DropStencil",
                    param_1 + 0x34);
    uVar1 = func_0x009679d0(&uStack_68,0,*(undefined4 *)(param_1 + 0x54));
    iVar2 = func_0x00a70890(param_2,uVar1);
    if (iVar2 != 1) {
      *param_3 = 0;
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00a6b980(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_4 < 1) {
    iVar2 = *(int *)(param_1 + 0x59c + *(int *)(param_3 + 4) * 4);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x60c) != '\0') {
        *param_5 = *(int *)(param_1 + 0x608);
        return 0;
      }
      *param_5 = 0;
      return 0;
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 400);
    if ((((piVar1 != (int *)0x0) && (*(int *)(param_3 + 4) == piVar1[2])) && (param_4 == *piVar1))
       && (piVar1[10] != 0)) {
      *param_5 = *(int *)(piVar1[10] + 0x59c);
      return 0;
    }
    iVar2 = 0;
  }
  *param_5 = iVar2;
  return 0;
}



undefined4 __thiscall FUN_00a6ba00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *unaff_retaddr;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int aiStack_c [3];
  
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = param_3[1];
  iStack_18 = iVar4;
  iStack_14 = iVar2;
  iStack_10 = iVar3;
  func_0x00a65b10(aiStack_c,&iStack_18);
  if (*(char *)(aiStack_c[0] + 0xd) == '\0') {
    iVar1 = *(int *)(aiStack_c[0] + 0x10);
    bVar8 = SBORROW4(iVar4,iVar1);
    bVar7 = iVar4 - iVar1 < 0;
    if (iVar4 == iVar1) {
      iVar1 = *(int *)(aiStack_c[0] + 0x14);
      bVar8 = SBORROW4(iVar2,iVar1);
      bVar7 = iVar2 - iVar1 < 0;
      if (iVar2 == iVar1) {
        bVar8 = SBORROW4(iVar3,*(int *)(aiStack_c[0] + 0x18));
        bVar7 = iVar3 - *(int *)(aiStack_c[0] + 0x18) < 0;
      }
    }
    if ((bVar8 == bVar7) && (aiStack_c[0] != *(int *)(param_1 + 0x574))) {
      func_0x00a65b10(&iStack_14,&stack0xffffffe0);
      if (*(char *)(iStack_14 + 0xd) == '\0') {
        iVar1 = *(int *)(iStack_14 + 0x10);
        bVar8 = SBORROW4(iVar4,iVar1);
        bVar7 = iVar4 - iVar1 < 0;
        if (iVar4 == iVar1) {
          iVar4 = *(int *)(iStack_14 + 0x14);
          bVar8 = SBORROW4(iVar2,iVar4);
          bVar7 = iVar2 - iVar4 < 0;
          if (iVar2 == iVar4) {
            bVar8 = SBORROW4(iVar3,*(int *)(iStack_14 + 0x18));
            bVar7 = iVar3 - *(int *)(iStack_14 + 0x18) < 0;
          }
        }
        if (bVar8 == bVar7) {
          *unaff_retaddr = *(undefined4 *)(iStack_14 + 0x1c);
          return 0;
        }
      }
      func_0x00e7021a("invalid map<K, T> key");
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return uVar6;
    }
  }
  *param_3 = 0;
  return 0;
}



undefined4 __thiscall FUN_00a6bac0(int param_1)

{
  undefined4 *in_stack_00000010;
  
  *in_stack_00000010 = *(undefined4 *)(param_1 + 0x59c);
  return 0;
}



undefined4 __thiscall FUN_00a6bae0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *unaff_retaddr;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int aiStack_c [3];
  
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = param_3[1];
  iStack_18 = iVar4;
  iStack_14 = iVar2;
  iStack_10 = iVar3;
  func_0x00a65b10(aiStack_c,&iStack_18);
  if (*(char *)(aiStack_c[0] + 0xd) == '\0') {
    iVar1 = *(int *)(aiStack_c[0] + 0x10);
    bVar8 = SBORROW4(iVar4,iVar1);
    bVar7 = iVar4 - iVar1 < 0;
    if (iVar4 == iVar1) {
      iVar1 = *(int *)(aiStack_c[0] + 0x14);
      bVar8 = SBORROW4(iVar2,iVar1);
      bVar7 = iVar2 - iVar1 < 0;
      if (iVar2 == iVar1) {
        bVar8 = SBORROW4(iVar3,*(int *)(aiStack_c[0] + 0x18));
        bVar7 = iVar3 - *(int *)(aiStack_c[0] + 0x18) < 0;
      }
    }
    if ((bVar8 == bVar7) && (aiStack_c[0] != *(int *)(param_1 + 0x59c))) {
      func_0x00a65b10(&iStack_14,&stack0xffffffe0);
      if (*(char *)(iStack_14 + 0xd) == '\0') {
        iVar1 = *(int *)(iStack_14 + 0x10);
        bVar8 = SBORROW4(iVar4,iVar1);
        bVar7 = iVar4 - iVar1 < 0;
        if (iVar4 == iVar1) {
          iVar4 = *(int *)(iStack_14 + 0x14);
          bVar8 = SBORROW4(iVar2,iVar4);
          bVar7 = iVar2 - iVar4 < 0;
          if (iVar2 == iVar4) {
            bVar8 = SBORROW4(iVar3,*(int *)(iStack_14 + 0x18));
            bVar7 = iVar3 - *(int *)(iStack_14 + 0x18) < 0;
          }
        }
        if (bVar8 == bVar7) {
          *unaff_retaddr = *(undefined4 *)(iStack_14 + 0x1c);
          return 0;
        }
      }
      func_0x00e7021a("invalid map<K, T> key");
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return uVar6;
    }
  }
  *param_3 = 0;
  return 0;
}



undefined4 __thiscall
FUN_00a6bba0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *unaff_retaddr;
  int iStack_14;
  int iStack_10;
  int aiStack_c [3];
  
  iVar1 = param_3[1];
  cVar4 = func_0x00967c60();
  if (cVar4 == '\0') {
    *param_5 = *(undefined4 *)(param_1 + 0x57c + iVar1 * 4);
    return 0;
  }
  iVar2 = param_3[2];
  iStack_14 = iVar1;
  iStack_10 = iVar2;
  func_0x00a65a30(aiStack_c,&iStack_14);
  if ((((*(char *)(aiStack_c[0] + 0xd) == '\0') && (*(int *)(aiStack_c[0] + 0x10) <= iVar1)) &&
      ((*(int *)(aiStack_c[0] + 0x10) < iVar1 || (*(int *)(aiStack_c[0] + 0x14) <= iVar2)))) &&
     (aiStack_c[0] != *(int *)(param_1 + 0x574))) {
    func_0x00a65a30(&iStack_14,&stack0xffffffe4);
    if (((*(char *)(iStack_14 + 0xd) == '\0') && (*(int *)(iStack_14 + 0x10) <= iVar1)) &&
       ((*(int *)(iStack_14 + 0x10) < iVar1 || (*(int *)(iStack_14 + 0x14) <= iVar2)))) {
      *unaff_retaddr = *(undefined4 *)(iStack_14 + 0x18);
      return 0;
    }
    func_0x00e7021a("invalid map<K, T> key");
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  *param_3 = 0;
  return 0;
}



undefined4 FUN_00a6bc70(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_Buffer::findRenderTarget",0x1089);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a6bcc0(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004b5b20();
  if (param_4 < 1) {
    iVar3 = *(int *)(param_1 + 0x59c + (iVar2 * 0x10 + *(int *)(param_3 + 4)) * 4);
    if ((iVar3 == 0) && (*(char *)(param_1 + 0x75c) != '\0')) {
      iVar3 = *(int *)(param_1 + 0x744 + iVar2 * 4);
    }
    *param_5 = iVar3;
    return 0;
  }
  piVar1 = *(int **)(param_1 + 400);
  if ((((piVar1 != (int *)0x0) && (*(int *)(param_3 + 4) == piVar1[2])) && (param_4 == *piVar1)) &&
     (piVar1[10] != 0)) {
    *param_5 = *(int *)(piVar1[10] + 0x59c);
    return 0;
  }
  *param_5 = 0;
  return 0;
}



undefined4 FUN_00a6bd40(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_EGLImage::findRenderTarget",0x79e);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a6bd90(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_External::findRenderTarget",0x6d6);
  (*pcVar1)();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 __thiscall FUN_00a6bde0(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *unaff_retaddr;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  piStack_70 = param_2;
  pcVar1 = *(code **)(*param_1 + 0x40);
  uStack_74 = 0xa6bdff;
  _guard_check_icall();
  uStack_74 = 0xa6be03;
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    uStack_74 = *(undefined4 *)(param_3 + 4);
    puStack_78 = (undefined1 *)0xa6be1a;
    func_0x00a70c60();
    pcVar1 = *(code **)(*param_1 + 0x24);
    puStack_78 = &stack0xffffff9c;
    uVar8 = 0;
    piVar7 = param_2;
    _guard_check_icall(param_2,unaff_retaddr,0);
    iVar2 = (*pcVar1)();
    if (iVar2 != 1) {
      piStack_70 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0x24);
      piVar6 = param_2;
      _guard_check_icall(param_2,param_3);
      iVar2 = (*pcVar1)();
      if (iVar2 != 1) {
        pcVar1 = *(code **)(*unaff_retaddr + 0x20);
        _guard_check_icall(piVar6,param_3);
        puStack_78 = (undefined1 *)(*pcVar1)();
        puVar5 = &uStack_74;
        pcVar1 = *(code **)(*piVar7 + 0x2c);
        _guard_check_icall(param_2,puVar5);
        iVar2 = (*pcVar1)();
        if (iVar2 != 1) {
          pcVar1 = *(code **)(_DAT_00000000 + 0xc);
          _guard_check_icall(param_2,puVar5);
          uVar3 = (*pcVar1)();
          pcVar1 = *(code **)(_DAT_00000000 + 8);
          _guard_check_icall();
          uVar4 = (*pcVar1)();
          pcVar1 = *(code **)(_DAT_00000000 + 4);
          _guard_check_icall();
          uStack_3c = (*pcVar1)();
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          pcVar1 = *(code **)(_DAT_00000000 + 0xc);
          uStack_38 = uVar4;
          uStack_34 = uVar3;
          _guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)(_DAT_00000000 + 8);
          _guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)(_DAT_00000000 + 4);
          _guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)((int)piStack_70 + 0xc);
          _guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)((int)piStack_70 + 8);
          _guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)((int)piStack_70 + 4);
          _guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)((int)piStack_70 + 0xc);
          _guard_check_icall();
          uVar3 = (*pcVar1)();
          pcVar1 = *(code **)((int)piStack_70 + 8);
          _guard_check_icall();
          uVar4 = (*pcVar1)();
          pcVar1 = *(code **)((int)piStack_70 + 4);
          _guard_check_icall();
          puStack_78 = (undefined1 *)(*pcVar1)();
          pcVar1 = *(code **)(_DAT_00000000 + 0x10);
          uStack_74 = uVar4;
          piStack_70 = (int *)uVar3;
          _guard_check_icall();
          uVar3 = (*pcVar1)();
          iVar2 = func_0x00946ea0(uVar3);
          uVar8 = func_0x00a4d1d0(uStack_2c,uVar8,&uStack_48,&stack0xffffff94,
                                  *(undefined4 *)(iVar2 + 0x4c),unaff_retaddr,&stack0xffffffa0,
                                  &puStack_78,0,*(undefined4 *)(iVar2 + 0x4c),
                                  *(undefined4 *)(iVar2 + 0x50),0x2601,0,0,0);
          return uVar8;
        }
      }
    }
  }
  return 1;
}



int __fastcall FUN_00a6c9d0(int param_1)

{
  return *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50);
}



void __thiscall FUN_00a6c9e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x54);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00a6ca10(int param_1,undefined4 param_2)

{
  int iVar1;
  int *unaff_retaddr;
  
  iVar1 = func_0x00a6b610(param_2,*(undefined4 *)(param_1 + 0x54));
  if (iVar1 == 1) {
    return 1;
  }
  *unaff_retaddr = param_1 + 0x574;
  return 0;
}



undefined4 FUN_00a6ca40(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_Buffer::getMippedResource",0x1080);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a6ca90(int param_1,undefined4 param_2)

{
  int iVar1;
  int *unaff_retaddr;
  
  iVar1 = func_0x00a6b7b0(param_2,*(undefined4 *)(param_1 + 0x54));
  if (iVar1 == 1) {
    return 1;
  }
  *unaff_retaddr = param_1 + 0x574;
  return 0;
}



undefined4 FUN_00a6cac0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_EGLImage::getMippedResource",0x793);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a6cb10(int param_1,undefined4 param_2,int *param_3)

{
  *param_3 = param_1 + 0x574;
  return 0;
}



undefined4 __thiscall FUN_00a6ce40(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_64;
  undefined *puStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int aiStack_48 [5];
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [16];
  uint uStack_1c;
  int *piStack_18;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_5c = 0xffffffff;
  puStack_60 = &DAT_00f51e35;
  iStack_64 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)auStack_58;
  *unaff_FS_OFFSET = (int)&iStack_64;
  uStack_8 = 0;
  uStack_1c = 0;
  iVar7 = *(int *)(param_3 + 4);
  piStack_18 = param_1;
  if (0 < param_4) {
    uVar5 = func_0x00a6cb30(param_2,param_3,param_4,param_5);
    goto LAB_00a6cffd;
  }
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall(param_2,uVar4);
  iVar6 = (*pcVar1)();
  if (iVar6 != 1) {
    if (param_1[iVar7 + 0x167] != 0) {
      *param_5 = param_1[iVar7 + 0x167];
      uVar5 = 0;
      goto LAB_00a6cffd;
    }
    iVar6 = func_0x009dbe40();
    if (*(char *)(iVar6 + 0x48) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x34);
      _guard_check_icall(param_2,1);
      iVar6 = (*pcVar1)();
      if (iVar6 == 1) goto LAB_00a6cff8;
    }
    iStack_c = 0;
    pcVar1 = *(code **)(*param_1 + 0x54);
    _guard_check_icall(param_2,&iStack_c);
    iVar6 = (*pcVar1)();
    if (iVar6 != 1) {
      uStack_8 = 0;
      iVar6 = func_0x00a6f6a0(param_2,iVar7,0,&uStack_8);
      if (iVar6 != 1) {
        piStack_10 = (int *)0x0;
        iVar6 = func_0x00a6f6a0(param_2,iVar7,1,&piStack_10);
        if (iVar6 != 1) {
          iVar6 = *(int *)(param_2 + 0x1d14);
          bVar10 = (byte)iVar7;
          if ((char)param_1[0x183] == '\0') {
            aiStack_48[0] = *(int *)(param_1[0x16] + 0x14);
            if (aiStack_48[0] == 0) {
              uStack_7c = *(undefined4 *)(param_1[0x16] + 0x18);
              iStack_70 = param_1[0x14] + iVar7;
              uStack_78 = 3;
              uStack_74 = 0;
              func_0x009dd4e0();
              uStack_5c = 8;
              iVar6 = func_0x00a309b0(-(uint)(iVar6 != 0) & iVar6 + 0x24U,param_1[0x13],&uStack_7c,
                                      *(undefined4 *)(*(int *)(iStack_c + 4) + 4),auStack_58);
              piVar3 = piStack_18;
              if (iVar6 == 1) {
                func_0x009dddb0();
                uVar5 = 1;
              }
              else {
                func_0x00a71ae0("TexStorage2D.DSV",piStack_18 + 0xd);
                iStack_14 = func_0x008ab47d(0x94);
                uStack_5c = CONCAT31(uStack_5c._1_3_,9);
                if (iStack_14 == 0) {
                  uVar5 = 0;
                }
                else {
                  iVar6 = piVar3[0x18] >> (bVar10 & 0x1f);
                  iVar11 = piVar3[0x17] >> (bVar10 & 0x1f);
                  if (iVar6 < 1) {
                    iVar6 = 1;
                  }
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                  uVar5 = func_0x00a606e0(auStack_58,iStack_c,uStack_8,*(undefined4 *)piVar3[0x16],
                                          (undefined4 *)piVar3[0x16],iVar11,iVar6,1,0);
                }
                func_0x00a71540(uVar5);
                *param_5 = piVar3[iVar7 + 0x167];
                func_0x009dddb0();
                uVar5 = 0;
              }
            }
            else {
              aiStack_48[2] = param_1[0x14] + iVar7;
              aiStack_48[1] = 4;
              FUN_009dd580();
              uStack_5c = 6;
              iVar6 = func_0x00a30fc0(-(uint)(iVar6 != 0) & iVar6 + 0x24U,param_1[0x13],aiStack_48,
                                      *(undefined4 *)(*(int *)(iStack_c + 4) + 4),auStack_2c);
              piVar3 = piStack_18;
              if (iVar6 == 1) {
                uVar5 = 1;
                FUN_009de130();
              }
              else {
                func_0x00a71ae0("TexStorage2D.RTV",piStack_18 + 0xd);
                iStack_14 = func_0x008ab47d(0x94);
                uStack_5c = CONCAT31(uStack_5c._1_3_,7);
                if (iStack_14 == 0) {
                  uVar5 = 0;
                }
                else {
                  iVar6 = piVar3[0x18] >> (bVar10 & 0x1f);
                  iVar11 = piVar3[0x17] >> (bVar10 & 0x1f);
                  if (iVar6 < 1) {
                    iVar6 = 1;
                  }
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                  uVar5 = func_0x00a60910(auStack_2c,iStack_c,uStack_8,piStack_10,
                                          *(undefined4 *)piVar3[0x16],(undefined4 *)piVar3[0x16],
                                          iVar11,iVar6,1,0);
                }
                func_0x00a71540(uVar5);
                *param_5 = piVar3[iVar7 + 0x167];
                FUN_009de130();
                uVar5 = 0;
              }
            }
            goto LAB_00a6cffd;
          }
          piStack_10 = param_1 + 0x182;
          if (param_1[0x182] == 0) {
            aiStack_48[0] = *(int *)(param_1[0x16] + 0x14);
            aiStack_48[2] = param_1[0x14] + iVar7;
            aiStack_48[1] = 4;
            FUN_009dd580();
            uStack_5c = 0;
            iVar7 = func_0x00a30fc0(-(uint)(iVar6 != 0) & iVar6 + 0x24U,param_1[0x13],aiStack_48,
                                    *(undefined4 *)(param_1[0x179] + 4),auStack_2c);
            piVar3 = piStack_18;
            if (iVar7 == 1) {
              FUN_009de130();
              goto LAB_00a6cff8;
            }
            func_0x00a71ae0("TexStorage2D.Level0RTV",piStack_18 + 0xd);
            iStack_14 = func_0x008ab47d(0x94);
            uStack_5c._0_1_ = 1;
            if (iStack_14 == 0) {
              uVar5 = 0;
            }
            else {
              iStack_30 = piVar3[0x18] >> (bVar10 & 0x1f);
              if (iStack_30 < 1) {
                iStack_30 = 1;
              }
              puVar2 = (undefined4 *)piVar3[0x16];
              iStack_34 = piVar3[0x17] >> (bVar10 & 0x1f);
              uVar5 = *puVar2;
              if (iStack_34 < 1) {
                iStack_34 = 1;
              }
              uVar8 = FUN_009dd650();
              uStack_5c = CONCAT31(uStack_5c._1_3_,2);
              uStack_8 = 1;
              uVar9 = FUN_009dd650();
              uStack_5c._0_1_ = 3;
              uStack_5c._1_3_ = 0;
              uStack_1c = 3;
              uStack_8 = 3;
              uVar5 = func_0x00a60910(auStack_2c,piStack_18 + 0x178,uVar9,uVar8,uVar5,puVar2,
                                      iStack_34,iStack_30,1,0);
            }
            func_0x00a71540(uVar5);
            uVar4 = uStack_1c;
            if ((uStack_1c & 2) != 0) {
              uVar4 = uStack_1c & 0xfffffffd;
              func_0x009de2f0();
            }
            if ((uVar4 & 1) != 0) {
              func_0x009de2f0();
            }
            FUN_009de130();
          }
          *param_5 = *piStack_10;
          uVar5 = 0;
          goto LAB_00a6cffd;
        }
      }
    }
  }
LAB_00a6cff8:
  uVar5 = 1;
LAB_00a6cffd:
  *unaff_FS_OFFSET = iStack_64;
  return uVar5;
}



undefined4 __thiscall
FUN_00a6d310(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  undefined4 uStack_7c;
  int aiStack_78 [3];
  int iStack_6c;
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [4];
  undefined4 *puStack_4c;
  int *piStack_44;
  char *pcStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51ea9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_28 = *(int *)(param_3 + 8);
  iVar4 = *(int *)(param_3 + 4);
  iStack_24 = *(int *)(param_3 + 0xc);
  iStack_2c = iVar4;
  iStack_20 = iStack_24;
  iStack_1c = iStack_28;
  iStack_18 = iVar4;
  func_0x00a65b10(auStack_38,&iStack_2c,uVar3);
  if (*(char *)(iStack_30 + 0xd) == '\0') {
    iVar7 = *(int *)(iStack_30 + 0x10);
    bVar9 = SBORROW4(iVar4,iVar7);
    bVar8 = iVar4 - iVar7 < 0;
    if (iVar4 == iVar7) {
      iVar4 = *(int *)(iStack_30 + 0x14);
      bVar9 = SBORROW4(iStack_1c,iVar4);
      bVar8 = iStack_1c - iVar4 < 0;
      if (iStack_1c == iVar4) {
        bVar9 = SBORROW4(iStack_20,*(int *)(iStack_30 + 0x18));
        bVar8 = iStack_20 - *(int *)(iStack_30 + 0x18) < 0;
      }
    }
    if (bVar9 != bVar8) goto LAB_00a6d390;
  }
  else {
LAB_00a6d390:
    iStack_30 = param_1[0x15d];
  }
  if (iStack_30 != param_1[0x15d]) goto LAB_00a6d6d7;
  iStack_14 = 0;
  pcVar1 = *(code **)(*param_1 + 0x54);
  _guard_check_icall(param_2,&iStack_14);
  iVar4 = (*pcVar1)();
  if (iVar4 == 1) goto LAB_00a6d61a;
  FUN_009dd650();
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  iVar4 = func_0x00a68530(param_2,iStack_14,param_3,*(undefined4 *)(param_1[0x16] + 0xc),auStack_50)
  ;
  if (iVar4 != 1) {
    FUN_009dd650();
    uStack_8._0_1_ = 1;
    iVar4 = *(int *)(param_1[0x16] + 0x1c);
    if (iVar4 == *(int *)(param_1[0x16] + 0xc)) {
      iVar4 = func_0x009e8300(aiStack_78);
      uVar5 = *(undefined4 *)(iVar4 + 4);
      uVar2 = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 4) = uStack_60;
      *(undefined4 *)(iVar4 + 8) = uStack_5c;
      uStack_60 = uVar5;
      uStack_5c = uVar2;
      func_0x009de2f0();
LAB_00a6d45b:
      piStack_44 = param_1 + 0xd;
      pcStack_40 = "TexStorage2DArray.RenderTargetSRV";
      func_0x00a2fa40(*puStack_4c,"TexStorage2DArray.RenderTargetSRV",piStack_44);
      aiStack_78[0] = *(int *)(param_1[0x16] + 0x14);
      if (aiStack_78[0] == 0) {
        uStack_7c = *(undefined4 *)(param_1[0x16] + 0x18);
        aiStack_78[2] = param_1[0x14] + iStack_18;
        iStack_6c = iStack_1c;
        aiStack_78[0] = 4;
        iStack_68 = iStack_20;
        aiStack_78[1] = 0;
        func_0x009dd4e0();
        uStack_8._0_1_ = 4;
        iVar4 = func_0x00a309b0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                                *(int *)(param_2 + 0x1d14) + 0x24U,param_1[0x13],&uStack_7c,
                                *(undefined4 *)(*(int *)(iStack_14 + 4) + 4),auStack_3c);
        if (iVar4 != 1) {
          func_0x00a71ae0("TexStorage2DArray.RenderTargetDSV",param_1 + 0xd);
          iStack_1c = func_0x00a67410(&iStack_2c);
          iStack_20 = func_0x008ab47d(0x94);
          uStack_8 = CONCAT31(uStack_8._1_3_,5);
          if (iStack_20 == 0) {
            uVar5 = 0;
          }
          else {
            iVar4 = param_1[0x18] >> ((byte)iStack_18 & 0x1f);
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iVar7 = param_1[0x17] >> ((byte)iStack_18 & 0x1f);
            if (iVar7 < 1) {
              iVar7 = 1;
            }
            uVar5 = func_0x00a606e0(auStack_3c,iStack_14,auStack_50,*(undefined4 *)param_1[0x16],
                                    (undefined4 *)param_1[0x16],iVar7,iVar4,1,0);
          }
          func_0x00a71540(uVar5);
          func_0x009dddb0();
          goto LAB_00a6d6c0;
        }
        func_0x009dddb0();
      }
      else {
        aiStack_78[2] = param_1[0x14] + iStack_18;
        iStack_6c = iStack_1c;
        aiStack_78[1] = 5;
        iStack_68 = iStack_20;
        FUN_009dd580();
        uStack_8._0_1_ = 2;
        iVar4 = func_0x00a30fc0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                                *(int *)(param_2 + 0x1d14) + 0x24U,param_1[0x13],aiStack_78,
                                *(undefined4 *)(*(int *)(iStack_14 + 4) + 4),auStack_3c);
        if (iVar4 != 1) {
          func_0x00a71ae0("TexStorage2DArray.RenderTargetRTV",param_1 + 0xd);
          iStack_1c = func_0x00a67410(&iStack_2c);
          iStack_20 = func_0x008ab47d(0x94);
          uStack_8 = CONCAT31(uStack_8._1_3_,3);
          if (iStack_20 == 0) {
            uVar5 = 0;
          }
          else {
            iVar4 = param_1[0x18] >> ((byte)iStack_18 & 0x1f);
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iVar7 = param_1[0x17] >> ((byte)iStack_18 & 0x1f);
            if (iVar7 < 1) {
              iVar7 = 1;
            }
            uVar5 = func_0x00a60910(auStack_3c,iStack_14,auStack_50,auStack_64,
                                    *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],iVar7,
                                    iVar4,1,0);
          }
          func_0x00a71540(uVar5);
          FUN_009de130();
LAB_00a6d6c0:
          func_0x009de2f0();
          uStack_8 = 0xffffffff;
          func_0x009de2f0();
LAB_00a6d6d7:
          puVar6 = (undefined4 *)func_0x00a67410(&iStack_2c);
          *param_5 = *puVar6;
          *unaff_FS_OFFSET = iStack_10;
          return 0;
        }
        FUN_009de130();
      }
    }
    else {
      iVar4 = func_0x00a68530(param_2,iStack_14,param_3,iVar4,auStack_64);
      if (iVar4 != 1) goto LAB_00a6d45b;
    }
    func_0x009de2f0();
  }
  func_0x009de2f0();
LAB_00a6d61a:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall
FUN_00a6d700(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int aiStack_58 [5];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51f09;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = *(undefined4 *)(param_3 + 4);
  if (*(int *)(param_1 + 0x59c) != 0) {
    *param_5 = *(int *)(param_1 + 0x59c);
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  iStack_14 = 0;
  iVar2 = FUN_00a6ebf0(param_2,&iStack_14);
  if (iVar2 != 1) {
    uStack_1c = 0;
    iVar2 = func_0x00a6f6a0(param_2,uStack_18,0,&uStack_1c,uVar1);
    if (iVar2 != 1) {
      uStack_20 = 0;
      iVar2 = func_0x00a6f6a0(param_2,uStack_18,1,&uStack_20);
      if (iVar2 != 1) {
        iStack_24 = *(int *)(param_2 + 0x1d14);
        aiStack_58[0] = *(int *)(*(int *)(param_1 + 0x58) + 0x14);
        iVar2 = iStack_24 + 0x24;
        if (aiStack_58[0] == 0) {
          uStack_70 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18);
          uStack_6c = 5;
          uStack_68 = 0;
          func_0x009dd4e0();
          uStack_8 = 2;
          if (iStack_24 == 0) {
            iVar2 = 0;
          }
          iVar2 = func_0x00a309b0(iVar2,*(undefined4 *)(param_1 + 0x4c),&uStack_70,
                                  *(undefined4 *)(*(int *)(iStack_14 + 4) + 4),auStack_44);
          if (iVar2 == 1) {
            func_0x009dddb0();
            *unaff_FS_OFFSET = iStack_10;
            return 1;
          }
          iStack_24 = func_0x008ab47d(0x94);
          uStack_8 = CONCAT31(uStack_8._1_3_,3);
          if (iStack_24 == 0) {
            uVar3 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x60) >> ((byte)uStack_18 & 0x1f);
            iVar4 = *(int *)(param_1 + 0x5c) >> ((byte)uStack_18 & 0x1f);
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            uVar3 = func_0x00a606e0(auStack_44,iStack_14,uStack_1c,**(undefined4 **)(param_1 + 0x58)
                                    ,*(undefined4 **)(param_1 + 0x58),iVar4,iVar2,1,
                                    *(undefined4 *)(param_1 + 0x5a0));
          }
          func_0x00a71540(uVar3);
          *param_5 = *(int *)(param_1 + 0x59c);
          func_0x009dddb0();
          *unaff_FS_OFFSET = iStack_10;
          return 0;
        }
        aiStack_58[1] = 6;
        FUN_009dd580();
        uStack_8 = 0;
        if (iStack_24 == 0) {
          iVar2 = 0;
        }
        iVar2 = func_0x00a30fc0(iVar2,*(undefined4 *)(param_1 + 0x4c),aiStack_58,
                                *(undefined4 *)(*(int *)(iStack_14 + 4) + 4),auStack_34);
        if (iVar2 == 1) {
          FUN_009de130();
          *unaff_FS_OFFSET = iStack_10;
          return 1;
        }
        iStack_24 = func_0x008ab47d(0x94);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if (iStack_24 == 0) {
          uVar3 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x60) >> ((byte)uStack_18 & 0x1f);
          iVar4 = *(int *)(param_1 + 0x5c) >> ((byte)uStack_18 & 0x1f);
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          uVar3 = func_0x00a60910(auStack_34,iStack_14,uStack_1c,uStack_20,
                                  **(undefined4 **)(param_1 + 0x58),*(undefined4 **)(param_1 + 0x58)
                                  ,iVar4,iVar2,1,*(undefined4 *)(param_1 + 0x5a0));
        }
        func_0x00a71540(uVar3);
        *param_5 = *(int *)(param_1 + 0x59c);
        FUN_009de130();
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void __thiscall
FUN_00a6d9f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_88 [4];
  undefined4 *puStack_84;
  int iStack_7c;
  char *pcStack_78;
  int iStack_74;
  undefined *puStack_70;
  undefined1 uStack_6c;
  undefined3 uStack_6b;
  undefined4 *puStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int aiStack_1c [3];
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_6c = 0xff;
  uStack_6b = 0xffffff;
  puStack_70 = &DAT_00f51f79;
  iStack_74 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&puStack_68;
  *unaff_FS_OFFSET = (int)&iStack_74;
  iStack_40 = param_2;
  iStack_3c = param_3;
  puStack_68 = param_5;
  uStack_60 = *(uint *)(param_3 + 8);
  iVar3 = *(int *)(param_3 + 4);
  iStack_5c = *(int *)(param_3 + 0xc);
  iStack_64 = iVar3;
  iStack_58 = iVar3;
  uStack_44 = uStack_60;
  iStack_38 = iStack_5c;
  func_0x00a65b10(auStack_50,&iStack_64,uStack_8);
  if (*(char *)(iStack_48 + 0xd) == '\0') {
    iVar6 = *(int *)(iStack_48 + 0x10);
    bVar8 = SBORROW4(iVar3,iVar6);
    bVar7 = iVar3 - iVar6 < 0;
    if (iVar3 == iVar6) {
      uVar1 = *(uint *)(iStack_48 + 0x14);
      bVar8 = SBORROW4(uStack_44,uVar1);
      bVar7 = (int)(uStack_44 - uVar1) < 0;
      if (uStack_44 == uVar1) {
        bVar8 = SBORROW4(iStack_38,*(int *)(iStack_48 + 0x18));
        bVar7 = iStack_38 - *(int *)(iStack_48 + 0x18) < 0;
      }
    }
    if (bVar8 != bVar7) goto LAB_00a6da87;
  }
  else {
LAB_00a6da87:
    iStack_48 = *(int *)(param_1 + 0x59c);
  }
  if (iStack_48 == *(int *)(param_1 + 0x59c)) {
    if (((*(int *)(*(int *)(param_1 + 0x578) + 4) == 0) && (*(int *)(param_1 + 0x5c) != 0)) &&
       (*(int *)(param_1 + 0x60) != 0)) {
      uStack_28 = *(undefined4 *)(param_1 + 100);
      uStack_2c = 1;
      uStack_24 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 8);
      aiStack_1c[2] = *(uint *)(param_1 + 0x194) & 0xffffff7f;
      aiStack_1c[1] = 0;
      uStack_c = *(undefined4 *)(param_1 + 0x198);
      iStack_10 = 0;
      iStack_34 = *(int *)(param_1 + 0x5c);
      iStack_30 = *(int *)(param_1 + 0x60);
      func_0x009dbfe0();
      func_0x00957a20(**(undefined4 **)(param_1 + 0x58));
      iVar3 = func_0x00957ae0(*(undefined4 *)(param_1 + 0x5a4));
      iStack_20 = iVar3;
      if (iVar3 == 0) {
        iStack_20 = 1;
      }
      aiStack_1c[0] = func_0x009e5fd0(iVar3);
      iVar3 = func_0x009df8f0(-(uint)(*(int *)(iStack_40 + 0x1d14) != 0) &
                              *(int *)(iStack_40 + 0x1d14) + 0x24U,&iStack_34,
                              *(undefined4 *)(param_1 + 0x58),0,param_1 + 0x574);
      if (iVar3 == 1) goto LAB_00a6de9c;
      *(char **)(param_1 + 0x584) = "TexStorage2DMSArray.Texture";
      *(int *)(param_1 + 0x580) = param_1 + 0x34;
      func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),"TexStorage2DMSArray.Texture",
                      param_1 + 0x34);
    }
    FUN_009dd650();
    uStack_6c = 0;
    uStack_6b = 0;
    iVar3 = func_0x00a686d0(iStack_40,param_1 + 0x574,iStack_3c,
                            *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc),auStack_88);
    if (iVar3 != 1) {
      FUN_009dd650();
      uStack_6c = 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 0x1c);
      if (iVar3 == *(int *)(*(int *)(param_1 + 0x58) + 0xc)) {
        iVar3 = func_0x009e8300(aiStack_1c);
        uVar4 = *(undefined4 *)(iVar3 + 4);
        uVar2 = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 4) = uStack_98;
        *(undefined4 *)(iVar3 + 8) = uStack_94;
        uStack_98 = uVar4;
        uStack_94 = uVar2;
        func_0x009de2f0();
LAB_00a6dc2d:
        iStack_7c = param_1 + 0x34;
        pcStack_78 = "TexStorage2DMSArray.RenderTargetSRV";
        func_0x00a2fa40(*puStack_84,"TexStorage2DMSArray.RenderTargetSRV",iStack_7c);
        aiStack_1c[0] = *(int *)(*(int *)(param_1 + 0x58) + 0x14);
        if (aiStack_1c[0] == 0) {
          iStack_20 = *(int *)(*(int *)(param_1 + 0x58) + 0x18);
          aiStack_1c[2] = uStack_44;
          aiStack_1c[0] = 6;
          iStack_10 = iStack_38;
          aiStack_1c[1] = 0;
          func_0x009dd4e0();
          uStack_6c = 4;
          iVar3 = func_0x00a309b0(-(uint)(*(int *)(iStack_40 + 0x1d14) != 0) &
                                  *(int *)(iStack_40 + 0x1d14) + 0x24U,
                                  *(undefined4 *)(param_1 + 0x4c),&iStack_20,
                                  *(undefined4 *)(*(int *)(param_1 + 0x578) + 4),auStack_54);
          if (iVar3 != 1) {
            func_0x00a71ae0("TexStorage2DMSArray.RenderTargetDSV",param_1 + 0x34);
            iStack_38 = func_0x00a67410(&iStack_64);
            iStack_3c = func_0x008ab47d(0x94);
            _uStack_6c = CONCAT31(uStack_6b,5);
            if (iStack_3c == 0) {
              uVar4 = 0;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x60) >> ((byte)iStack_58 & 0x1f);
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar6 = *(int *)(param_1 + 0x5c) >> ((byte)iStack_58 & 0x1f);
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              uVar4 = func_0x00a606e0(auStack_54,param_1 + 0x574,auStack_88,
                                      **(undefined4 **)(param_1 + 0x58),
                                      *(undefined4 **)(param_1 + 0x58),iVar6,iVar3,1,
                                      *(undefined4 *)(param_1 + 0x5a4));
            }
            func_0x00a71540(uVar4);
            func_0x009dddb0();
            goto LAB_00a6de71;
          }
          func_0x009dddb0();
        }
        else {
          aiStack_1c[2] = uStack_44;
          aiStack_1c[1] = 7;
          iStack_10 = iStack_38;
          FUN_009dd580();
          uStack_6c = 2;
          iVar3 = func_0x00a30fc0(-(uint)(*(int *)(iStack_40 + 0x1d14) != 0) &
                                  *(int *)(iStack_40 + 0x1d14) + 0x24U,
                                  *(undefined4 *)(param_1 + 0x4c),aiStack_1c,
                                  *(undefined4 *)(*(int *)(param_1 + 0x578) + 4),auStack_54);
          if (iVar3 != 1) {
            func_0x00a71ae0("TexStorage2DMSArray.RenderTargetRTV",param_1 + 0x34);
            iStack_38 = func_0x00a67410(&iStack_64);
            iStack_3c = func_0x008ab47d(0x94);
            _uStack_6c = CONCAT31(uStack_6b,3);
            if (iStack_3c == 0) {
              uVar4 = 0;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x60) >> ((byte)iStack_58 & 0x1f);
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar6 = *(int *)(param_1 + 0x5c) >> ((byte)iStack_58 & 0x1f);
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              uVar4 = func_0x00a60910(auStack_54,param_1 + 0x574,auStack_88,auStack_9c,
                                      **(undefined4 **)(param_1 + 0x58),
                                      *(undefined4 **)(param_1 + 0x58),iVar6,iVar3,1,
                                      *(undefined4 *)(param_1 + 0x5a4));
            }
            func_0x00a71540(uVar4);
            FUN_009de130();
LAB_00a6de71:
            func_0x009de2f0();
            uStack_6c = 0xff;
            uStack_6b = 0xffffff;
            func_0x009de2f0();
            goto LAB_00a6de88;
          }
          FUN_009de130();
        }
      }
      else {
        iVar3 = func_0x00a686d0(iStack_40,param_1 + 0x574,iStack_3c,iVar3,auStack_9c);
        if (iVar3 != 1) goto LAB_00a6dc2d;
      }
      func_0x009de2f0();
    }
    func_0x009de2f0();
  }
  else {
LAB_00a6de88:
    puVar5 = (undefined4 *)func_0x00a67410(&iStack_64);
    *puStack_68 = *puVar5;
  }
LAB_00a6de9c:
  *unaff_FS_OFFSET = iStack_74;
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00a6dec0(int *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f51fd9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar8 = *(int *)(param_3 + 4);
  iStack_24 = *(int *)(param_2 + 0x1d14);
  iStack_20 = iVar8;
  cVar2 = func_0x00967c60(uVar3);
  bVar7 = (byte)iVar8;
  if (cVar2 == '\0') {
    if (param_1[iVar8 + 0x15f] == 0) {
      iStack_14 = 0;
      pcVar1 = *(code **)(*param_1 + 0x54);
      _guard_check_icall(param_2,&iStack_14);
      iVar4 = (*pcVar1)();
      if (iVar4 == 1) goto LAB_00a6dff2;
      uStack_1c = 0;
      iVar4 = func_0x00a6f6a0(param_2,iVar8,0,&uStack_1c);
      if (iVar4 == 1) goto LAB_00a6dff2;
      piStack_18 = (int *)0x0;
      iVar4 = func_0x00a6f6a0(param_2,iVar8,1,&piStack_18);
      if (iVar4 == 1) goto LAB_00a6dff2;
      uStack_54 = *(undefined4 *)(param_1[0x16] + 0x14);
      iStack_4c = param_1[0x14] + iVar8;
      uStack_50 = 8;
      iStack_48 = 0;
      uStack_44 = 0xffffffff;
      FUN_009dd580();
      uStack_8 = 0;
      iVar4 = func_0x00a30fc0(-(uint)(iStack_24 != 0) & iStack_24 + 0x24U,param_1[0x13],&uStack_54,
                              *(undefined4 *)(*(int *)(iStack_14 + 4) + 4),auStack_40);
      if (iVar4 == 1) {
LAB_00a6dfed:
        FUN_009de130();
LAB_00a6dff2:
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      func_0x00a71ae0("TexStorage3D.RTV",param_1 + 0xd);
      iStack_24 = func_0x008ab47d(0x94);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (iStack_24 == 0) {
        uVar5 = 0;
      }
      else {
        iVar8 = param_1[0x19] >> (bVar7 & 0x1f);
        iVar4 = param_1[0x18] >> (bVar7 & 0x1f);
        iVar9 = param_1[0x17] >> (bVar7 & 0x1f);
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        if (iVar9 < 1) {
          iVar9 = 1;
        }
        uVar5 = func_0x00a60910(auStack_40,iStack_14,uStack_1c,piStack_18,
                                *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],iVar9,iVar4
                                ,iVar8,0);
        iVar8 = iStack_20;
      }
      func_0x00a71540(uVar5);
      FUN_009de130();
    }
    iVar8 = param_1[iVar8 + 0x15f];
  }
  else {
    iStack_2c = *(int *)(param_3 + 8);
    piVar6 = param_1 + 0x15d;
    iStack_30 = iVar8;
    iStack_20 = iStack_2c;
    piStack_18 = piVar6;
    func_0x00a65a30(auStack_3c,&iStack_30);
    if (((*(char *)(iStack_34 + 0xd) != '\0') || (iVar8 < *(int *)(iStack_34 + 0x10))) ||
       ((iVar8 <= *(int *)(iStack_34 + 0x10) && (iStack_20 < *(int *)(iStack_34 + 0x14))))) {
      iStack_34 = *piVar6;
    }
    if (iStack_34 == *piVar6) {
      iStack_14 = 0;
      pcVar1 = *(code **)(*param_1 + 0x54);
      _guard_check_icall(param_2,&iStack_14);
      iVar4 = (*pcVar1)();
      if (iVar4 == 1) goto LAB_00a6dff2;
      uStack_1c = 0;
      uStack_54 = *(undefined4 *)(param_1[0x16] + 0x14);
      iStack_4c = param_1[0x14] + iVar8;
      uStack_50 = 8;
      iStack_48 = iStack_20;
      uStack_44 = 1;
      iVar4 = func_0x00a6f6a0(param_2,iVar8,0,&uStack_1c);
      if (iVar4 == 1) goto LAB_00a6dff2;
      iStack_20 = 0;
      iVar8 = func_0x00a6f6a0(param_2,iVar8,1,&iStack_20);
      if (iVar8 == 1) goto LAB_00a6dff2;
      FUN_009dd580();
      uStack_8 = 2;
      iVar8 = func_0x00a30fc0(-(uint)(iStack_24 != 0) & iStack_24 + 0x24U,param_1[0x13],&uStack_54,
                              *(undefined4 *)(*(int *)(iStack_14 + 4) + 4),auStack_40);
      if (iVar8 == 1) goto LAB_00a6dfed;
      func_0x00a71ae0("TexStorage3D.LayerRTV",param_1 + 0xd);
      uStack_28 = func_0x00a67340(&iStack_30);
      iStack_24 = func_0x008ab47d(0x94);
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      if (iStack_24 == 0) {
        uVar5 = 0;
      }
      else {
        iVar8 = param_1[0x18] >> (bVar7 & 0x1f);
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        iVar4 = param_1[0x17] >> (bVar7 & 0x1f);
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        uVar5 = func_0x00a60910(auStack_40,iStack_14,uStack_1c,iStack_20,
                                *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],iVar4,iVar8
                                ,1,0);
      }
      func_0x00a71540(uVar5);
      uStack_8 = 0xffffffff;
      FUN_009de130();
    }
    piVar6 = (int *)func_0x00a67340(&iStack_30);
    iVar8 = *piVar6;
  }
  *param_5 = iVar8;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_00a6e280(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_Buffer::getRenderTarget",0x1092);
  (*pcVar1)();
  return 1;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_00a6e2d0(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_94 [20];
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_6c;
  undefined *puStack_68;
  undefined4 uStack_64;
  int aiStack_60 [4];
  int iStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  int iStack_44;
  int aiStack_40 [3];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [16];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_64 = 0xffffffff;
  puStack_68 = &DAT_00f52095;
  iStack_6c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)aiStack_60;
  *unaff_FS_OFFSET = (int)&iStack_6c;
  uStack_14 = 0;
  iStack_8 = 0;
  piStack_48 = param_1;
  iStack_10 = FUN_004b5b20(uVar3);
  iStack_8 = *(int *)(param_3 + 4);
  if (0 < param_4) {
    uVar4 = func_0x00a6cb30(param_2,param_3,param_4,param_5);
    goto LAB_00a6e463;
  }
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall(param_2);
  iVar5 = (*pcVar1)();
  if (iVar5 != 1) {
    iVar5 = *(int *)(param_2 + 0x1d14);
    piStack_18 = param_1 + iStack_10 * 0x10 + iStack_8 + 0x167;
    if (param_1[iStack_10 * 0x10 + iStack_8 + 0x167] != 0) {
LAB_00a6e80f:
      *param_5 = param_1[iStack_10 * 0x10 + iStack_8 + 0x167];
      uVar4 = 0;
      goto LAB_00a6e463;
    }
    iVar6 = func_0x009dbe40();
    if (*(char *)(iVar6 + 0x48) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x34);
      _guard_check_icall(param_2,1);
      iVar6 = (*pcVar1)();
      if (iVar6 == 1) goto LAB_00a6e45e;
    }
    iStack_c = 0;
    pcVar1 = *(code **)(*param_1 + 0x54);
    _guard_check_icall(param_2,&iStack_c);
    iVar6 = (*pcVar1)();
    if (iVar6 == 1) goto LAB_00a6e45e;
    if ((char)param_1[0x1d7] != '\0') {
      iVar6 = iStack_10;
      if (param_1[iStack_10 + 0x1d1] == 0) {
        aiStack_40[0] = *(int *)(param_1[0x16] + 0x14);
        aiStack_40[2] = param_1[0x14] + iStack_8;
        aiStack_40[1] = 5;
        iStack_34 = iStack_10;
        uStack_30 = 1;
        FUN_009dd580();
        uStack_64 = 0;
        iVar5 = func_0x00a30fc0(-(uint)(iVar5 != 0) & iVar5 + 0x24U,param_1[0x13],aiStack_40,
                                *(undefined4 *)(param_1[0x1c8] + 4),auStack_28);
        iVar6 = iStack_10;
        if (iVar5 == 1) {
          FUN_009de130();
          goto LAB_00a6e45e;
        }
        iStack_2c = func_0x008ab47d(0x94);
        uStack_64._0_1_ = 1;
        if (iStack_2c == 0) {
          uVar4 = 0;
        }
        else {
          piStack_18 = (int *)(param_1[0x18] >> ((byte)iStack_8 & 0x1f));
          if ((int)piStack_18 < 1) {
            piStack_18 = (int *)0x1;
          }
          puVar2 = (undefined4 *)param_1[0x16];
          iStack_44 = param_1[0x17] >> ((byte)iStack_8 & 0x1f);
          uVar4 = *puVar2;
          if (iStack_44 < 1) {
            iStack_44 = 1;
          }
          uVar7 = FUN_009dd650();
          uStack_64 = CONCAT31(uStack_64._1_3_,2);
          iStack_8 = 1;
          uVar8 = FUN_009dd650();
          param_1 = piStack_48;
          uStack_64._0_1_ = 3;
          uStack_64._1_3_ = 0;
          uStack_14 = 3;
          iStack_8 = 3;
          uVar4 = func_0x00a60910(auStack_28,piStack_48 + 0x1c7,uVar8,uVar7,uVar4,puVar2,iStack_44,
                                  piStack_18,1,0);
          iVar6 = iStack_10;
        }
        func_0x00a71540(uVar4);
        if ((uStack_14 & 2) != 0) {
          uStack_14 = uStack_14 & 0xfffffffd;
          func_0x009de2f0();
        }
        if ((uStack_14 & 1) != 0) {
          func_0x009de2f0();
        }
        FUN_009de130();
      }
      *param_5 = param_1[iVar6 + 0x1d1];
      uVar4 = 0;
      goto LAB_00a6e463;
    }
    FUN_009dd650();
    uStack_64._0_1_ = 6;
    uStack_64._1_3_ = 0;
    iVar6 = func_0x00a68860(param_2,iStack_c,param_3,*(undefined4 *)(param_1[0x16] + 0xc),auStack_94
                           );
    if (iVar6 != 1) {
      FUN_009dd650();
      uStack_64._0_1_ = 7;
      iVar6 = *(int *)(param_1[0x16] + 0x1c);
      if (iVar6 == *(int *)(param_1[0x16] + 0xc)) {
        iVar6 = func_0x009e8300(aiStack_60 + 1);
        uVar4 = *(undefined4 *)(iVar6 + 4);
        uVar7 = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)(iVar6 + 4) = uStack_7c;
        *(undefined4 *)(iVar6 + 8) = uStack_78;
        uStack_7c = uVar4;
        uStack_78 = uVar7;
        func_0x009de2f0();
LAB_00a6e5f4:
        func_0x00a71b30("TexStorageCube.RenderTargetSRV",param_1 + 0xd);
        iVar6 = *(int *)(param_1[0x16] + 0x14);
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1[0x16] + 0x18);
          if (iVar6 != 0) {
            aiStack_60[3] = param_1[0x14] + iStack_8;
            aiStack_60[1] = 4;
            aiStack_60[2] = 0;
            iStack_50 = iStack_10;
            uStack_4c = 1;
            aiStack_60[0] = iVar6;
            func_0x009dd4e0();
            uStack_64._0_1_ = 10;
            iVar5 = func_0x00a309b0(-(uint)(iVar5 != 0) & iVar5 + 0x24U,param_1[0x13],aiStack_60,
                                    *(undefined4 *)(*(int *)(iStack_c + 4) + 4),auStack_28);
            if (iVar5 == 1) {
              func_0x009dddb0();
              goto LAB_00a6e773;
            }
            func_0x00a71ae0("TexStorageCube.RenderTargetDSV",param_1 + 0xd);
            iStack_2c = func_0x008ab47d(0x94);
            uStack_64._0_1_ = 0xb;
            if (iStack_2c == 0) {
              uVar4 = 0;
            }
            else {
              iVar5 = param_1[0x18] >> ((byte)iStack_8 & 0x1f);
              iVar6 = param_1[0x17] >> ((byte)iStack_8 & 0x1f);
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              uVar4 = func_0x00a606e0(auStack_28,iStack_c,auStack_94,*(undefined4 *)param_1[0x16],
                                      (undefined4 *)param_1[0x16],iVar6,iVar5,1,0);
            }
            func_0x00a71540(uVar4);
            func_0x009dddb0();
          }
        }
        else {
          aiStack_40[2] = param_1[0x14] + iStack_8;
          aiStack_40[1] = 5;
          iStack_34 = iStack_10;
          uStack_30 = 1;
          aiStack_40[0] = iVar6;
          FUN_009dd580();
          uStack_64._0_1_ = 8;
          iVar5 = func_0x00a30fc0(-(uint)(iVar5 != 0) & iVar5 + 0x24U,param_1[0x13],aiStack_40,
                                  *(undefined4 *)(*(int *)(iStack_c + 4) + 4),auStack_28);
          if (iVar5 == 1) {
            FUN_009de130();
            goto LAB_00a6e773;
          }
          func_0x00a71ae0("TexStorageCube.RenderTargetRTV",param_1 + 0xd);
          iStack_2c = func_0x008ab47d(0x94);
          uStack_64._0_1_ = 9;
          if (iStack_2c == 0) {
            uVar4 = 0;
          }
          else {
            iVar5 = param_1[0x18] >> ((byte)iStack_8 & 0x1f);
            iVar6 = param_1[0x17] >> ((byte)iStack_8 & 0x1f);
            if (iVar5 < 1) {
              iVar5 = 1;
            }
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            uVar4 = func_0x00a60910(auStack_28,iStack_c,auStack_94,auStack_80,
                                    *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],iVar6,
                                    iVar5,1,0);
          }
          func_0x00a71540(uVar4);
          FUN_009de130();
        }
        func_0x009de2f0();
        func_0x009de2f0();
        goto LAB_00a6e80f;
      }
      iVar6 = func_0x00a68860(param_2,iStack_c,param_3,iVar6,auStack_80);
      if (iVar6 != 1) goto LAB_00a6e5f4;
LAB_00a6e773:
      func_0x009de2f0();
    }
    func_0x009de2f0();
  }
LAB_00a6e45e:
  uVar4 = 1;
LAB_00a6e463:
  *unaff_FS_OFFSET = iStack_6c;
  return uVar4;
}



undefined4 __thiscall FUN_00a6e830(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar1 = func_0x009f45e0(param_2);
  if (iVar1 != 1) {
    if ((undefined4 *)*(undefined1 **)(param_1 + 0x578) != &uStack_4) {
      func_0x00a67be0();
      *(undefined4 **)(param_1 + 0x578) = &uStack_4;
    }
    uVar2 = func_0x009f45e0(uStack_4,param_3);
    return uVar2;
  }
  return 1;
}



undefined4 FUN_00a6e8a0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_External::getRenderTarget",0x6e0);
  (*pcVar1)();
  return 1;
}



undefined4 __fastcall FUN_00a6e8f0(int param_1)

{
  if (*(undefined4 **)(param_1 + 400) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 400);
  }
  return 0;
}



void __thiscall FUN_00a6e900(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_38;
  iStack_34 = param_2;
  if (((char)param_1[0x183] == '\0') || ((uint)param_1[0x15] < 2)) {
    iVar4 = func_0x00a6b610(param_2,param_1[0x15]);
    if (iVar4 == 1) goto LAB_00a6ea7c;
    param_1 = param_1 + 0x15d;
    goto LAB_00a6ea9c;
  }
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall(param_2);
  iVar4 = (*pcVar1)();
  if (iVar4 == 1) goto LAB_00a6ea7c;
  iVar4 = func_0x009dbe40();
  if (*(char *)(iVar4 + 0x48) == '\0') {
    bVar2 = false;
LAB_00a6e978:
    piVar5 = param_1 + 0x15d;
  }
  else {
    bVar2 = 1 < (uint)param_1[0x15];
    if ((uint)param_1[0x15] < 2) goto LAB_00a6e978;
    piVar5 = param_1 + 0x178;
  }
  if (((*(int *)(piVar5[1] + 4) == 0) && (param_1[0x17] != 0)) && (param_1[0x18] != 0)) {
    uStack_2c = 1;
    uStack_28 = 1;
    pcVar1 = *(code **)(*param_1 + 0x10);
    iStack_34 = param_1[0x17];
    iStack_30 = param_1[0x18];
    _guard_check_icall(param_2);
    cVar3 = (*pcVar1)();
    iVar4 = param_1[0x16];
    if (cVar3 == '\0') {
      uStack_24 = *(undefined4 *)(iVar4 + 8);
    }
    else {
      uStack_24 = *(undefined4 *)(iVar4 + 0x24);
    }
    iStack_14 = param_1[0x65];
    iStack_c = param_1[0x66];
    uStack_20 = 1;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_10 = 0;
    iVar4 = func_0x009df8f0(-(uint)(*(int *)(iStack_38 + 0x1d14) != 0) &
                            *(int *)(iStack_38 + 0x1d14) + 0x24U,&iStack_34,iVar4,0,piVar5);
    if (iVar4 == 1) {
LAB_00a6ea7c:
      FUN_008ab370();
      return;
    }
    if (bVar2) {
      func_0x00a71b00("TexStorage2D.Level0Texture",param_1 + 0xd);
      param_1 = param_1 + 0x178;
      goto LAB_00a6ea9c;
    }
    func_0x00a71b00("TexStorage2D.Texture",param_1 + 0xd);
  }
  param_1 = param_1 + 0x178;
LAB_00a6ea9c:
  *param_3 = (int)param_1;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6eac0(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_30;
  if ((((*(int *)(param_1[0x160] + 4) == 0) && (param_1[0x17] != 0)) && (param_1[0x18] != 0)) &&
     (param_1[0x19] != 0)) {
    iStack_28 = param_1[0x15];
    pcVar1 = *(code **)(*param_1 + 0x10);
    iStack_30 = param_1[0x17];
    iStack_2c = param_1[0x18];
    iStack_24 = param_1[0x19];
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    iVar3 = param_1[0x16];
    if (cVar2 == '\0') {
      uStack_20 = *(undefined4 *)(iVar3 + 8);
    }
    else {
      uStack_20 = *(undefined4 *)(iVar3 + 0x24);
    }
    iStack_10 = param_1[0x65];
    iStack_8 = param_1[0x66];
    uStack_1c = 1;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_c = 0;
    iVar3 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&iStack_30,iVar3,0,param_1 + 0x15f);
    if (iVar3 == 1) {
      FUN_008ab370();
      return;
    }
    func_0x00a71b00("TexStorage2DArray.Texture",param_1 + 0xd);
  }
  *param_3 = (int)(param_1 + 0x15f);
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6ebf0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_30;
  if (((*(int *)(*(int *)(param_1 + 0x578) + 4) == 0) && (*(int *)(param_1 + 0x5c) != 0)) &&
     (*(int *)(param_1 + 0x60) != 0)) {
    uStack_28 = 1;
    iStack_24 = 1;
    uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 8);
    uStack_10 = *(uint *)(param_1 + 0x194) & 0xffffff7f;
    uStack_14 = 0;
    uStack_8 = *(undefined4 *)(param_1 + 0x198);
    uStack_c = 0;
    iStack_30 = *(int *)(param_1 + 0x5c);
    iStack_2c = *(int *)(param_1 + 0x60);
    func_0x009dbfe0();
    func_0x00957a20(**(undefined4 **)(param_1 + 0x58));
    iVar1 = func_0x00957ae0(*(undefined4 *)(param_1 + 0x5a0));
    iStack_24 = iVar1;
    if (iVar1 == 0) {
      iStack_24 = 1;
    }
    iStack_24 = func_0x009e5fd0(iVar1);
    iVar1 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffc4,
                            *(undefined4 *)(param_1 + 0x58),0,param_1 + 0x574);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x584) = "TexStorage2DMS.Texture";
    *(int *)(param_1 + 0x580) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),"TexStorage2DMS.Texture",
                    param_1 + 0x34);
  }
  *param_3 = param_1 + 0x574;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6ed50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_30;
  if (((*(int *)(*(int *)(param_1 + 0x578) + 4) == 0) && (*(int *)(param_1 + 0x5c) != 0)) &&
     (*(int *)(param_1 + 0x60) != 0)) {
    iStack_24 = *(undefined4 *)(param_1 + 100);
    uStack_28 = 1;
    uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 8);
    uStack_10 = *(uint *)(param_1 + 0x194) & 0xffffff7f;
    uStack_14 = 0;
    uStack_8 = *(undefined4 *)(param_1 + 0x198);
    uStack_c = 0;
    iStack_30 = *(int *)(param_1 + 0x5c);
    iStack_2c = *(int *)(param_1 + 0x60);
    func_0x009dbfe0();
    func_0x00957a20(**(undefined4 **)(param_1 + 0x58));
    iVar1 = func_0x00957ae0(*(undefined4 *)(param_1 + 0x5a4));
    iStack_24 = iVar1;
    if (iVar1 == 0) {
      iStack_24 = 1;
    }
    iStack_24 = func_0x009e5fd0(iVar1);
    iVar1 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&stack0xffffffc4,
                            *(undefined4 *)(param_1 + 0x58),0,param_1 + 0x574);
    if (iVar1 == 1) {
      FUN_008ab370();
      return;
    }
    *(char **)(param_1 + 0x584) = "TexStorage2DMSArray.Texture";
    *(int *)(param_1 + 0x580) = param_1 + 0x34;
    func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x578) + 4),"TexStorage2DMSArray.Texture",
                    param_1 + 0x34);
  }
  *param_3 = param_1 + 0x574;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6eeb0(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_28;
  if ((((*(int *)(param_1[0x170] + 4) == 0) && (param_1[0x17] != 0)) && (param_1[0x18] != 0)) &&
     (param_1[0x19] != 0)) {
    iStack_1c = param_1[0x15];
    pcVar1 = *(code **)(*param_1 + 0x10);
    iStack_28 = param_1[0x17];
    iStack_24 = param_1[0x18];
    iStack_20 = param_1[0x19];
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    iVar3 = param_1[0x16];
    if (cVar2 == '\0') {
      uStack_18 = *(undefined4 *)(iVar3 + 8);
    }
    else {
      uStack_18 = *(undefined4 *)(iVar3 + 0x24);
    }
    iStack_10 = param_1[0x65];
    iStack_8 = param_1[0x66];
    uStack_14 = 0;
    uStack_c = 0;
    iVar3 = func_0x009df9e0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,&iStack_28,iVar3,0,param_1 + 0x16f);
    if (iVar3 == 1) {
      FUN_008ab370();
      return;
    }
    func_0x00a71b00("TexStorage3D.Texture",param_1 + 0xd);
  }
  *param_3 = (int)(param_1 + 0x16f);
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6efd0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puStack_2c;
  undefined4 auStack_20 [7];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_20;
  if (*(int *)(*(int *)(param_1 + 0x578) + 4) == 0) {
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    iVar3 = func_0x00a51c90(param_2,0xb);
    if (iVar3 == 1) {
      FUN_008ab370();
      return;
    }
    *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 **)(*(int *)(param_1 + 0x578) + 4) = puStack_2c;
    *(undefined4 *)(*(int *)(param_1 + 0x578) + 8) = 0;
    func_0x00a2fe20(&stack0xffffffd8);
    func_0x00a2fe40(&puStack_2c);
    piVar1 = *(int **)(*(int *)(param_1 + 0x578) + 4);
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(piVar1);
    (*pcVar2)();
  }
  *param_3 = param_1 + 0x574;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a6f0c0(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  int *piVar5;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_34;
  iStack_34 = param_3;
  if (((char)param_1[0x1d7] == '\0') || ((uint)param_1[0x15] < 2)) {
    iVar4 = func_0x00a6b7b0(param_2,param_1[0x15]);
    if (iVar4 == 1) goto LAB_00a6f214;
    param_1 = param_1 + 0x15d;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x40);
    iVar4 = param_2;
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
LAB_00a6f214:
      FUN_008ab370();
      return;
    }
    iVar3 = func_0x009dbe40();
    if ((*(char *)(iVar3 + 0x48) == '\0') || (piVar5 = param_1 + 0x1c7, (uint)param_1[0x15] < 2)) {
      piVar5 = param_1 + 0x15d;
    }
    if (((*(int *)(piVar5[1] + 4) == 0) && (param_1[0x17] != 0)) && (param_1[0x18] != 0)) {
      uStack_2c = 1;
      uStack_28 = 6;
      pcVar1 = *(code **)(*param_1 + 0x10);
      iStack_34 = param_1[0x17];
      iStack_30 = param_1[0x18];
      _guard_check_icall(iVar4);
      cVar2 = (*pcVar1)();
      iVar4 = param_1[0x16];
      if (cVar2 == '\0') {
        uStack_24 = *(undefined4 *)(iVar4 + 8);
      }
      else {
        uStack_24 = *(undefined4 *)(iVar4 + 0x24);
      }
      iStack_14 = param_1[0x65];
      uStack_c = param_1[0x66] | 4;
      uStack_20 = 1;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_10 = 0;
      iVar4 = func_0x009df8f0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                              *(int *)(param_2 + 0x1d14) + 0x24U,&iStack_34,iVar4,0,piVar5);
      if (iVar4 == 1) goto LAB_00a6f214;
      func_0x00a71b00("TexStorageCube.Texture",param_1 + 0xd);
    }
    param_1 = param_1 + 0x1c7;
  }
  *unaff_EBX = param_1;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a6f260(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar2 = func_0x009f45e0(param_2,&uStack_4);
  if (iVar2 != 1) {
    if (*(int *)(param_1 + 0x578) != unaff_EDI) {
      func_0x00a67be0();
      *(int *)(param_1 + 0x578) = unaff_EDI;
    }
    iVar2 = func_0x009f45e0(uStack_4,&stack0xfffffff4);
    if (iVar2 != 1) {
      pcVar1 = *(code **)(*param_2 + 0x1c);
      _guard_check_icall();
      uVar3 = (*pcVar1)();
      *unaff_ESI = uVar3;
      return 0;
    }
  }
  return 1;
}



bool __thiscall
FUN_00a6f370(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  byte bVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [16];
  int iStack_38;
  uint uStack_34;
  char cStack_30;
  undefined1 uStack_2f;
  undefined1 auStack_2c [8];
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  int *piStack_18;
  char cStack_12;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f520c0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0x40);
  piStack_18 = param_1;
  _guard_check_icall(param_2,uVar4);
  iVar5 = (*pcVar1)();
  iStack_24 = 1;
  if (iVar5 == 1) goto LAB_00a6f606;
  iStack_1c = func_0x008df6e0();
  cStack_11 = func_0x00a2fdb0(param_3);
  cVar3 = func_0x0093e380(*param_4);
  if (cVar3 == '\0') {
    uVar4 = 1;
  }
  else {
    iVar5 = func_0x008df710();
    uVar4 = iVar5 + (1 - iStack_1c);
  }
  uVar6 = (param_1[0x15] - param_1[0x14]) - iStack_1c;
  if (uVar6 < uVar4) {
    uVar4 = uVar6;
  }
  uStack_20 = uVar4;
  iVar5 = func_0x009dbe40();
  if (*(char *)(iVar5 + 0x48) != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x34);
    _guard_check_icall(param_2,uStack_20 == 1);
    iVar5 = (*pcVar1)();
    uVar4 = uStack_20;
    if (iVar5 == 1) goto LAB_00a6f606;
  }
  if (cStack_11 != '\0') {
    func_0x00a2ef90(auStack_48,param_3);
  }
  iVar5 = func_0x009dbe40();
  cStack_12 = *(char *)(iVar5 + 0xf0);
  iVar5 = func_0x00a33e30();
  iStack_38 = iStack_1c;
  uStack_20 = *(uint *)(iVar5 + 0x38);
  bVar9 = (char)iStack_1c + -1 + (char)uVar4;
  iVar5 = param_1[0x17] >> (bVar9 & 0x1f);
  if (iVar5 < 1) {
    iVar5 = iStack_24;
  }
  if (iVar5 < 3) {
LAB_00a6f4b5:
    bVar2 = true;
  }
  else {
    iVar5 = param_1[0x18] >> (bVar9 & 0x1f);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    if (iVar5 < 3) goto LAB_00a6f4b5;
    bVar2 = false;
  }
  uStack_34 = uVar4;
  if (((cStack_12 == '\0') || (uStack_20 == 0)) || (!bVar2)) {
    cStack_30 = cStack_11;
    uStack_2f = 0;
  }
  else {
    cStack_30 = cStack_11;
    uStack_2f = 1;
    pcVar1 = *(code **)(*param_1 + 0x74);
    iStack_24 = 0;
    _guard_check_icall(param_2,&iStack_24);
    iVar5 = (*pcVar1)();
    if (iVar5 == 1) {
LAB_00a6f606:
      *unaff_FS_OFFSET = iStack_10;
      return true;
    }
    func_0x00a6b910(&uStack_20,&iStack_38);
    if ((iStack_24 == 0) && (uStack_20 != param_1[0x67])) {
      puVar7 = (uint *)func_0x00a65790(auStack_2c,&iStack_38);
      uStack_20 = *puVar7;
      uVar4 = puVar7[1];
      puVar7 = (uint *)piStack_18[0x67];
      uVar6 = uStack_20;
      if ((uStack_20 == *puVar7) && (*(char *)(uVar4 + 0xd) != '\0')) {
        func_0x00a659e0(piStack_18 + 0x67,puVar7[1]);
        puVar7[1] = (uint)puVar7;
        *puVar7 = (uint)puVar7;
        puVar7[2] = (uint)puVar7;
        piStack_18[0x68] = 0;
      }
      else {
        while (uStack_20 = uVar6, uVar6 != uVar4) {
          func_0x00499be0();
          uVar8 = func_0x008c33a0(uVar6);
          func_0x009de2f0();
          func_0x008ab812(uVar8,0x30);
          uVar6 = uStack_20;
        }
      }
    }
  }
  iVar5 = func_0x00a6c4b0(param_2,&iStack_38,param_5);
  *unaff_FS_OFFSET = iStack_10;
  return iVar5 == 1;
}



undefined4 __thiscall FUN_00a6f630(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar1 = func_0x009f45e0(param_2);
  if (iVar1 != 1) {
    if ((undefined4 *)*(undefined1 **)(param_1 + 0x578) != &uStack_4) {
      func_0x00a67be0();
      *(undefined4 **)(param_1 + 0x578) = &uStack_4;
    }
    uVar2 = FUN_00a6f370(uStack_4,unaff_retaddr,param_2,param_3);
    return uVar2;
  }
  return 1;
}



undefined4 __thiscall FUN_00a6f970(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_3 + 4);
  cVar3 = func_0x00967c60();
  if (cVar3 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_3 + 8);
  }
  *param_4 = *(int *)(param_1 + 0x54) * iVar4 + iVar1 + iVar2;
  return 0;
}



undefined4 __thiscall FUN_00a6f9b0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b5b20();
  iVar2 = func_0x009dbe40();
  if (((*(char *)(iVar2 + 0x48) != '\0') && (*(char *)(param_1 + 0x75c) != '\0')) &&
     (*(int *)(param_3 + 4) == 0)) {
    *param_4 = iVar1;
    return 0;
  }
  *param_4 = *(int *)(param_1 + 0x54) * iVar1 + *(int *)(param_1 + 0x50) + *(int *)(param_3 + 4);
  return 0;
}



undefined4 FUN_00a6fa10(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  piVar3 = param_1;
  iVar2 = func_0x009f45e0(param_1,&uStack_4);
  if (iVar2 != 1) {
    pcVar1 = *(code **)(*piVar3 + 0x30);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    *param_1 = iVar2;
    return 0;
  }
  return 1;
}



undefined4 __thiscall FUN_00a6fa60(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int aiStack_18 [4];
  int iStack_8;
  int iStack_4;
  
  if (*(int *)param_1[param_3 * 4 + 399] != 0) {
LAB_00a6fb23:
    *param_4 = param_1 + param_3 * 4 + 0x18e;
    return 0;
  }
  aiStack_18[0] = 0;
  pcVar1 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall(param_2,aiStack_18);
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    func_0x00a33e50(param_1[0x13] + 0x1f98);
    aiStack_18[0] = param_1[0x14] + iStack_4;
    iVar2 = func_0x00a30fc0(-(uint)(*(int *)(iStack_8 + 0x1d14) != 0) &
                            *(int *)(iStack_8 + 0x1d14) + 0x24U,param_1[0x13],&stack0xffffffe0,
                            *(undefined4 *)(param_1[0x185] + 4),param_1 + param_3 * 4 + 0x18e);
    if (iVar2 != 1) goto LAB_00a6fb23;
  }
  return 1;
}



undefined4 __thiscall FUN_00a6fb40(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int aiStack_18 [6];
  
  if (*(int *)param_1[(param_3 + 0x5d) * 4] != 0) {
LAB_00a6fc0f:
    *param_4 = param_1 + param_3 * 4 + 0x173;
    return 0;
  }
  aiStack_18[0] = 0;
  pcVar1 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall(param_2,aiStack_18);
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    func_0x00a33e50(param_1[0x13] + 0x1f98);
    aiStack_18[0] = param_1[0x14] + param_3;
    aiStack_18[2] = param_1[0x19];
    aiStack_18[1] = 0;
    iVar2 = func_0x00a30fc0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,param_1[0x13],&stack0xffffffe0,
                            *(undefined4 *)(param_1[0x16a] + 4),param_1 + param_3 * 4 + 0x173);
    if (iVar2 != 1) goto LAB_00a6fc0f;
  }
  return 1;
}



undefined4 FUN_00a6fc30(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisample::getSwizzleRenderTarget",0xf2e);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a6fc80(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_2DMultisampleArray::getSwizzleRenderTarget",0x103d);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a6fcd0(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int aiStack_18 [6];
  
  if (*(int *)param_1[(param_3 + 0x61) * 4] != 0) {
LAB_00a6fdd2:
    *param_4 = param_1 + param_3 * 4 + 0x183;
    return 0;
  }
  aiStack_18[0] = 0;
  pcVar1 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall(param_2,aiStack_18);
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    func_0x00a33e50(param_1[0x13] + 0x1f98);
    aiStack_18[0] = param_1[0x14] + param_3;
    aiStack_18[1] = 0;
    aiStack_18[2] = 0xffffffff;
    iVar2 = func_0x00a30fc0(-(uint)(*(int *)(param_2 + 0x1d14) != 0) &
                            *(int *)(param_2 + 0x1d14) + 0x24U,param_1[0x13],&stack0xffffffe0,
                            *(undefined4 *)(param_1[0x17a] + 4),param_1 + param_3 * 4 + 0x183);
    if (iVar2 != 1) {
      param_1[param_3 * 4 + 0x186] = (int)"TexStorage3D.SwizzleRTV";
      param_1[param_3 * 4 + 0x185] = (int)(param_1 + 0xd);
      func_0x00a2fa40(*(undefined4 *)param_1[param_3 * 4 + 0x184],"TexStorage3D.SwizzleRTV",
                      param_1 + 0xd);
      goto LAB_00a6fdd2;
    }
  }
  return 1;
}



undefined4 FUN_00a6fdf0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\TextureStorage11.cpp"
                     ,"rx::TextureStorage11_Buffer::getSwizzleRenderTarget",0x10a2);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a6fe40(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int aiStack_18 [4];
  int iStack_8;
  int iStack_4;
  
  if (*(int *)param_1[param_3 * 4 + 0x1e3] != 0) {
LAB_00a6ff13:
    *param_4 = param_1 + param_3 * 4 + 0x1e2;
    return 0;
  }
  aiStack_18[0] = 0;
  pcVar1 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall(param_2,aiStack_18);
  iVar2 = (*pcVar1)();
  if (iVar2 != 1) {
    func_0x00a33e50(param_1[0x13] + 0x1f98);
    aiStack_18[0] = param_1[0x14] + iStack_4;
    aiStack_18[1] = 0;
    aiStack_18[2] = 6;
    iVar2 = func_0x00a30fc0(-(uint)(*(int *)(iStack_8 + 0x1d14) != 0) &
                            *(int *)(iStack_8 + 0x1d14) + 0x24U,param_1[0x13],&stack0xffffffe0,
                            *(undefined4 *)(param_1[0x1d9] + 4),param_1 + param_3 * 4 + 0x1e2);
    if (iVar2 != 1) goto LAB_00a6ff13;
  }
  return 1;
}



void __thiscall FUN_00a6ff30(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_4c;
  uStack_4c = param_2;
  piStack_48 = param_4;
  iVar2 = param_3 * 0x10;
  if (**(int **)(*(int *)(param_1 + 0x5a4) + 4 + iVar2) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x580) + 4) == 0) {
      iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
      uStack_34 = *(undefined4 *)(param_1 + 0x5c);
      uStack_30 = *(undefined4 *)(param_1 + 0x60);
      uStack_2c = *(undefined4 *)(param_1 + 0x54);
      uStack_28 = 1;
      uStack_24 = *(undefined4 *)(iVar1 + 8);
      uStack_20 = 1;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0x28;
      uStack_10 = 0;
      uStack_c = 0;
      iVar1 = func_0x009df8f0(-(uint)(*(int *)(unaff_EBX + 0x1d14) != 0) &
                              *(int *)(unaff_EBX + 0x1d14) + 0x24U,&uStack_34,iVar1,0,
                              param_1 + 0x57c);
      if (iVar1 == 1) goto LAB_00a700ad;
      *(char **)(param_1 + 0x58c) = "TexStorageEGLImage.SwizzleTexture";
      *(int *)(param_1 + 0x588) = param_1 + 0x34;
      func_0x00a2fa40(*(undefined4 *)(*(int *)(param_1 + 0x580) + 4),
                      "TexStorageEGLImage.SwizzleTexture",param_1 + 0x34);
    }
    iVar1 = func_0x00a33e50(*(int *)(param_1 + 0x4c) + 0x1f98);
    piStack_48 = *(int **)(iVar1 + 0x14);
    iStack_40 = *(int *)(param_1 + 0x50) + param_3;
    uStack_44 = 4;
    iVar1 = func_0x00a30fc0(-(uint)(*(int *)(unaff_EBX + 0x1d14) != 0) &
                            *(int *)(unaff_EBX + 0x1d14) + 0x24U,*(undefined4 *)(param_1 + 0x4c),
                            &piStack_48,*(undefined4 *)(*(int *)(param_1 + 0x580) + 4),
                            *(int *)(param_1 + 0x5a4) + iVar2);
    if (iVar1 == 1) {
LAB_00a700ad:
      FUN_008ab370();
      return;
    }
  }
  *piStack_48 = *(int *)(param_1 + 0x5a4) + iVar2;
  FUN_008ab370();
  return;
