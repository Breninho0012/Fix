            ppppcStack_2c = (char ****)0x0;
            iStack_28 = 0;
            iStack_24 = 0;
            iStack_20 = 0;
            uStack_1c = 0;
            pcVar14 = pcStack_88;
            do {
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar1 != '\0');
            func_0x0046bc40(pcStack_88,(int)pcVar14 - (int)(pcStack_88 + 1));
            iStack_8._0_1_ = 0xc;
            if ((int)uStack_1c == 0) {
              iStack_8._0_1_ = 1;
              if (0xf < uStack_1c._4_4_) {
                func_0x0046b1f0(&ppppcStack_2c,ppppcStack_2c,uStack_1c._4_4_);
              }
            }
            else {
              pppppcVar11 = &ppppcStack_2c;
              if (0xf < uStack_1c._4_4_) {
                pppppcVar11 = (char *****)ppppcStack_2c;
              }
              if (*(char *)pppppcVar11 != '/') {
                auStack_140[0x10] = 0;
                auStack_140[0x11] = 0;
                auStack_140[0xc] = 0;
                auStack_140[0xd] = 0;
                auStack_140[0xe] = 0;
                auStack_140[0xf] = 0;
                func_0x0046bc40(&DAT_0113c2ec,1);
                iStack_8._0_1_ = 0xe;
                pppppcVar11 = &ppppcStack_2c;
                if (0xf < uStack_1c._4_4_) {
                  pppppcVar11 = (char *****)ppppcStack_2c;
                }
                piVar10 = (int *)func_0x0046a880(pppppcVar11,(int)uStack_1c);
                uVar13 = uStack_a0;
                pppppcVar11 = (char *****)*piVar10;
                iVar7 = piVar10[1];
                iVar3 = piVar10[2];
                iVar4 = piVar10[3];
                uStack_c8 = *(undefined8 *)(piVar10 + 4);
                uStack_a0 = uStack_a0 | 2;
                piVar10[4] = 0;
                piVar10[5] = 0xf;
                *(undefined1 *)piVar10 = 0;
                ppppcStack_c0 = (char ****)pppppcVar11;
                iStack_bc = iVar7;
                iStack_b8 = iVar3;
                iStack_b4 = iVar4;
                if (0xf < uStack_1c._4_4_) {
                  uVar15 = uStack_1c._4_4_ + 1;
                  pppppcVar16 = (char *****)ppppcStack_2c;
                  uStack_b0 = uStack_c8;
                  if (0xfff < uVar15) {
                    pppppcVar16 = (char *****)ppppcStack_2c[-1];
                    uVar15 = uStack_1c._4_4_ + 0x24;
                    uVar6 = (undefined1)iStack_8;
                    if ((char *)0x1f < (char *)((int)ppppcStack_2c + (-4 - (int)pppppcVar16)))
                    goto LAB_0060320d;
                  }
                  func_0x008ab812(pppppcVar16,uVar15);
                }
                uStack_a0 = uVar13 & 0xfffffffd;
                ppppcStack_2c = (char ****)pppppcVar11;
                iStack_28 = iVar7;
                iStack_24 = iVar3;
                iStack_20 = iVar4;
                uStack_1c = uStack_c8;
                uStack_b0 = 0xf00000000;
                ppppcStack_c0 = (char ****)((uint)ppppcStack_c0 & 0xffffff00);
                iStack_8._0_1_ = 0xc;
                if (0xf < auStack_140[0x11]) {
                  func_0x0046b1f0(auStack_140 + 0xc,auStack_140[0xc],auStack_140[0x11]);
                }
                auStack_140[0x10] = 0;
                auStack_140[0x11] = 0xf;
                auStack_140[0xc] = auStack_140[0xc] & 0xffffff00;
              }
              pppppcVar11 = &ppppcStack_2c;
              if (0xf < uStack_1c._4_4_) {
                pppppcVar11 = (char *****)ppppcStack_2c;
              }
              if ((*(char *)((int)pppppcVar11 + (int)uStack_1c + -1) != '/') &&
                 (iStack_78 != 0 || iStack_74 != 0)) {
                auStack_140[4] = 0;
                auStack_140[5] = 0;
                auStack_140[0] = 0;
                auStack_140[1] = 0;
                auStack_140[2] = 0;
                auStack_140[3] = 0;
                func_0x0046bc40(&DAT_0113c2ec,1);
                iStack_8._0_1_ = 0xf;
                auStack_140[10] = 0;
                auStack_140[6] = 0;
                auStack_140[7] = 0;
                auStack_140[8] = 0;
                auStack_140[9] = 0;
                auStack_140[0xb] = 0;
                func_0x0046bc40(&DAT_01141648,1);
                iStack_8._0_1_ = 0x10;
                func_0x0083cf70(auStack_140);
                iStack_8._0_1_ = 0xf;
                if (0xf < auStack_140[0xb]) {
                  func_0x0046b1f0(auStack_140 + 6,auStack_140[6],auStack_140[0xb]);
                }
                auStack_140[10] = 0;
                auStack_140[0xb] = 0xf;
                auStack_140[6] = auStack_140[6] & 0xffffff00;
                iStack_8._0_1_ = 0xc;
                if (0xf < auStack_140[5]) {
                  func_0x0046b1f0(auStack_140,auStack_140[0],auStack_140[5]);
                }
                auStack_140[4] = 0;
                auStack_140[5] = 0xf;
                auStack_140[0] = auStack_140[0] & 0xffffff00;
                unaff_ESI = (int *)func_0x00e5e250(piStack_9c,piVar17,iStack_a4,0);
                if (unaff_ESI == (int *)0x0) goto LAB_006039e4;
                func_0x00469c80(iStack_78,0);
                iStack_8._0_1_ = 0x13;
                pppppuVar12 = appppuStack_50;
                if (0xf < uStack_3c) {
                  pppppuVar12 = (undefined4 *****)appppuStack_50[0];
                }
                func_0x00e5dd40(unaff_ESI,pppppuVar12,uStack_40,0);
                func_0x00e5d8c0(unaff_ESI);
                func_0x0056b530(&ppppcStack_2c,appppuStack_50);
                func_0x00469bd0();
                iStack_8._0_1_ = 0xc;
                if (0xf < uStack_3c) {
                  func_0x0046b1f0(appppuStack_50,appppuStack_50[0],uStack_3c);
                }
                uStack_40 = 0;
                uStack_3c = 0xf;
                appppuStack_50[0] = (undefined4 ****)((uint)appppuStack_50[0] & 0xffffff00);
              }
              iStack_8._0_1_ = 1;
              uVar6 = (undefined1)iStack_8;
              iStack_8._0_1_ = 1;
              if (0xf < uStack_1c._4_4_) {
                uVar13 = uStack_1c._4_4_ + 1;
                pppppcVar11 = (char *****)ppppcStack_2c;
                if (0xfff < uVar13) {
                  pppppcVar11 = (char *****)ppppcStack_2c[-1];
                  uVar13 = uStack_1c._4_4_ + 0x24;
                  if ((char *)0x1f < (char *)((int)ppppcStack_2c + (-4 - (int)pppppcVar11)))
                  goto LAB_0060320d;
                }
                func_0x008ab812(pppppcVar11,uVar13);
              }
            }
            uStack_1c = 0xf00000000;
            ppppcStack_2c = (char ****)((uint)ppppcStack_2c & 0xffffff00);
            unaff_ESI = piStack_9c;
          }
          lVar19 = CONCAT44(piStack_a8,piStack_98);
          bVar18 = (int *)0xfffffffe < piVar17;
          piVar17 = (int *)((int)piVar17 + 1);
          iStack_a4 = iStack_a4 + (uint)bVar18;
          param_1 = piStack_94;
        } while ((iStack_a4 <= (int)piStack_a8) &&
                ((lVar5 = CONCAT44(piStack_a8,piStack_98), iStack_a4 < (int)piStack_a8 ||
                 (lVar5 = lVar19, piVar17 < piStack_98))));
      }
      piStack_a8 = (int *)((ulonglong)lVar19 >> 0x20);
      piStack_98 = (int *)lVar19;
      iVar7 = func_0x00e5a480(unaff_ESI);
      piVar17 = param_1;
      if (-1 < iVar7) {
        func_0x00e5db20(auStack_38);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (0xf < param_6._4_4_) {
          func_0x0046b1f0(&param_2,param_2,param_6._4_4_);
        }
        param_6 = 0xf00000000;
        param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
        *unaff_FS_OFFSET = iStack_10;
        FUN_008ab370();
        return;
      }
      goto LAB_0060399b;
    }
  }
  piStack_94 = (int *)func_0x00e5e030(auStack_38);
  func_0x00469d30("unpackArchive: can\'t open zip from source: %s");
  iStack_8._0_1_ = 6;
  func_0x00485670(&piStack_94);
  iStack_8._0_1_ = 7;
  func_0x0047d860();
  piVar17 = param_1;
LAB_0060399b:
  piStack_98 = (int *)func_0x00e5e240(unaff_ESI);
  func_0x00469d30("can\'t close zip archive: %s");
  iStack_8._0_1_ = 0x14;
  func_0x00485670(&piStack_98);
  iStack_8._0_1_ = 0x15;
  func_0x0047d860();
LAB_006039e4:
  piStack_98 = (int *)func_0x00e5e240(piStack_9c);
  func_0x00469d30("can\'t open file from zip archive: %s - %s");
  iStack_8._0_1_ = 0x11;
  func_0x004852c0(&ppppcStack_2c,&piStack_98);
  iStack_8._0_1_ = 0x12;
  func_0x0047d860();
LAB_00603a36:
  piStack_98 = (int *)func_0x00e5e240(unaff_ESI);
  piStack_a8 = piVar17;
  func_0x00469d30("unpackArchive: error stat-ing file at index %i: %s");
  iStack_8._0_1_ = 8;
  func_0x004a5c10(&piStack_a8,&piStack_98);
  iStack_8 = CONCAT31(iStack_8._1_3_,9);
  func_0x0047d860();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_006062f0(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint auStack_48 [13];
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed5b2f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_48[0xc] = 0;
  iStack_8 = 0;
  func_0x0083c9e0(uVar2);
  auStack_48[10] = 0;
  auStack_48[0xb] = 0;
  auStack_48[6] = 0;
  auStack_48[7] = 0;
  auStack_48[8] = 0;
  auStack_48[9] = 0;
  func_0x0046bc40(&DAT_0112e1b4,0);
  iStack_8._0_1_ = 1;
  auStack_48[4] = 0;
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  auStack_48[2] = 0;
  auStack_48[3] = 0;
  auStack_48[5] = 0;
  func_0x0046bc40(&DAT_0113c2ec,1);
  iStack_8._0_1_ = 2;
  func_0x0083cf70(auStack_48 + 6);
  iStack_8._0_1_ = 1;
  if (0xf < auStack_48[5]) {
    func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
  }
  auStack_48[4] = 0;
  auStack_48[5] = 0xf;
  auStack_48[0] = auStack_48[0] & 0xffffff00;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < auStack_48[0xb]) {
    func_0x0046b1f0(auStack_48 + 6,auStack_48[6],auStack_48[0xb]);
  }
  iVar4 = in_stack_00000014;
  puVar3 = &param_2;
  if (0xf < in_stack_00000018) {
    puVar3 = param_2;
  }
  auStack_48[10] = 0;
  auStack_48[0xb] = 0xf;
  auStack_48[6] = auStack_48[6] & 0xffffff00;
  cVar1 = func_0x0046cf20(puVar3,in_stack_00000014,"default",7);
  if (cVar1 != '\0') {
    func_0x0046a660(&DAT_0112e1b4,0);
    iVar4 = in_stack_00000014;
  }
  if (iVar4 != 0) {
    auStack_48[10] = 0;
    auStack_48[0xb] = 0;
    auStack_48[6] = 0;
    auStack_48[7] = 0;
    auStack_48[8] = 0;
    auStack_48[9] = 0;
    func_0x0046bc40("/layouts/",9);
    iStack_8 = CONCAT31(iStack_8._1_3_,3);
    auStack_48[0xc] = 1;
    puVar3 = (undefined4 *)func_0x00471920(auStack_48,auStack_48 + 6,&param_2);
    iStack_8 = 4;
    auStack_48[0xc] = 3;
    if (0xf < (uint)puVar3[5]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar4 = func_0x00e42900(puVar3);
    cStack_11 = '\x01';
    if (iVar4 == 0) goto LAB_00606491;
  }
  cStack_11 = '\0';
LAB_00606491:
  iStack_8 = 3;
  if ((auStack_48[0xc] & 2) != 0) {
    auStack_48[0xc] = auStack_48[0xc] & 0xfffffffd;
    if (0xf < auStack_48[5]) {
      uVar6 = auStack_48[5] + 1;
      uVar2 = auStack_48[0];
      if (0xfff < uVar6) {
        uVar2 = *(uint *)(auStack_48[0] - 4);
        uVar6 = auStack_48[5] + 0x24;
        if (0x1f < (auStack_48[0] - uVar2) - 4) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(uVar2,uVar6);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
  }
  iStack_8 = 0;
  if ((auStack_48[0xc] & 1) != 0) {
    auStack_48[0xc] = auStack_48[0xc] & 0xfffffffe;
    if (0xf < auStack_48[0xb]) {
      func_0x0046b1f0(auStack_48 + 6,auStack_48[6],auStack_48[0xb]);
    }
    auStack_48[10] = 0;
    auStack_48[0xb] = 0xf;
    auStack_48[6] = auStack_48[6] & 0xffffff00;
  }
  if (cStack_11 == '\0') {
    if ((undefined4 **)(param_1 + 0x40) != &param_2) {
      puVar3 = &param_2;
      if (0xf < in_stack_00000018) {
        puVar3 = param_2;
      }
      func_0x0046a660(puVar3,in_stack_00000014);
    }
  }
  else {
    auStack_48[10] = 0;
    auStack_48[0xb] = 0;
    auStack_48[6] = 0;
    auStack_48[7] = 0;
    auStack_48[8] = 0;
    auStack_48[9] = 0;
    func_0x0046bc40("Layour %s doesn\'t exist, using default",0x26);
    iStack_8._0_1_ = 5;
    uVar5 = func_0x00484eb0(&param_2);
    iStack_8._0_1_ = 6;
    FUN_005ee340(3,uVar5);
    iStack_8._0_1_ = 5;
    if (0xf < auStack_48[5]) {
      func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < auStack_48[0xb]) {
      func_0x0046b1f0(auStack_48 + 6,auStack_48[6],auStack_48[0xb]);
    }
    auStack_48[10] = 0;
    auStack_48[0xb] = 0xf;
    auStack_48[6] = auStack_48[6] & 0xffffff00;
  }
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_006076af(void)

{
  func_0x0046a610(4,1);
  return &DAT_006076c8;
}



uint FUN_00609750(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x811c9dc5;
  uVar2 = 0;
  if (param_2 != param_1) {
    do {
      pbVar1 = (byte *)(param_1 + uVar2);
      uVar2 = uVar2 + 1;
      uVar3 = (*pbVar1 ^ uVar3) * 0x1000193;
    } while (uVar2 < (uint)(param_2 - param_1));
  }
  return uVar3;
}



undefined4 * __thiscall FUN_00609790(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  void *_Dst;
  uint _Size;
  uint uVar1;
  void *_Src;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst_00;
  undefined4 *puVar5;
  uint _Size_00;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed665e;
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
  uVar8 = param_4 - param_3;
  do {
    if (uVar8 == 0) break;
    _Size = param_2[4];
    if (_Size < uVar8) {
      uVar1 = param_2[5];
      _Size_00 = uVar8 - _Size;
      if (uVar1 - _Size < _Size_00) {
        if (0x7fffffff - _Size < _Size_00) {
          func_0x00463570(uVar3);
          pcVar2 = (code *)swi(3);
          puVar5 = (undefined4 *)(*pcVar2)();
          return puVar5;
        }
        uVar6 = uVar8 | 0xf;
        if (uVar6 < 0x80000000) {
          if (0x7fffffff - (uVar1 >> 1) < uVar1) {
            uVar6 = 0x7fffffff;
          }
          else {
            uVar4 = (uVar1 >> 1) + uVar1;
            if (uVar6 < uVar4) {
              uVar6 = uVar4;
            }
          }
        }
        else {
          uVar6 = 0x7fffffff;
        }
        _Dst_00 = (void *)func_0x0046c950(uVar6 + 1);
        param_2[4] = uVar8;
        param_2[5] = uVar6;
        _Dst = (void *)((int)_Dst_00 + _Size);
        if (uVar1 < 0x10) {
          memcpy(_Dst_00,param_2,_Size);
          memset(_Dst,0,_Size_00);
          *(undefined1 *)((int)_Dst + _Size_00) = 0;
        }
        else {
          _Src = (void *)*param_2;
          memcpy(_Dst_00,_Src,_Size);
          memset(_Dst,0,_Size_00);
          *(undefined1 *)((int)_Dst + _Size_00) = 0;
          func_0x0046b1f0(param_2,_Src,uVar1);
        }
        *param_2 = _Dst_00;
      }
      else {
        param_2[4] = uVar8;
        puVar5 = param_2;
        if (0xf < uVar1) {
          puVar5 = (undefined4 *)*param_2;
        }
        memset((void *)((int)puVar5 + _Size),0,_Size_00);
        *(undefined1 *)((int)((int)puVar5 + _Size) + _Size_00) = 0;
      }
    }
    else {
      param_2[4] = uVar8;
      puVar5 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar5 = (undefined4 *)*param_2;
      }
      *(undefined1 *)((int)puVar5 + uVar8) = 0;
    }
    puVar7 = param_2;
    puVar5 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar7 = (undefined4 *)*param_2;
      puVar5 = (undefined4 *)*param_2;
    }
    uVar8 = func_0x00e747ad(puVar7,param_2[4] + (int)puVar5,param_3,param_4,param_1 + 8);
  } while ((uint)param_2[4] < uVar8);
  func_0x004698c0(uVar8,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



uint __thiscall
FUN_006099a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = func_0x00e74878(param_2,param_3,param_4,param_5,param_1 + 8);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (uint)(iVar1 != 0);
}



undefined4 * __thiscall FUN_00609df0(undefined4 *param_1,byte param_2)

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
  *param_1 = std::collate<char>::vftable;
  uStack_8 = 0;
  free((void *)param_1[3]);
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00609e80(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,100);
  }
  return param_1;
}



void FUN_0060b230(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed6b68;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00607760(uVar1);
  uStack_8 = 0xffffffff;
  func_0x005f80d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0060b290(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed34eb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00e73824(*(undefined4 *)(param_1 + 0x48),uVar1);
  puVar2 = (undefined4 *)(param_1 + 0x30);
  uStack_8 = 0xffffffff;
  if (7 < *(uint *)(param_1 + 0x44)) {
    func_0x005895e0(puVar2,*puVar2,*(uint *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 7;
  *(undefined2 *)puVar2 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __fastcall FUN_0060b2a0(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}



undefined4 * __thiscall FUN_0060b300(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0060b330(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0060c5a0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed6d13;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::_Node_class<>::vftable;
  uStack_8 = 0;
  iVar2 = param_1[5];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    uStack_8 = uStack_8 & 0xffffff00;
    free(*(void **)(iVar2 + 0xc));
    func_0x008ab812(iVar2,0x14);
    iVar2 = iVar1;
  }
  func_0x008ab812(param_1[6],0x20,uVar3);
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    free(*(void **)(iVar2 + 8));
    func_0x008ab812(iVar2,0xc);
  }
  iVar2 = param_1[8];
  if (iVar2 != 0) {
    free(*(void **)(iVar2 + 8));
    func_0x008ab812(iVar2,0xc);
  }
  iVar2 = param_1[10];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    uStack_8 = uStack_8 & 0xffffff00;
    free(*(void **)(iVar2 + 0xc));
    func_0x008ab812(iVar2,0x14);
    iVar2 = iVar1;
  }
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00610880(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed7148;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  free((void *)param_1[7]);
  uStack_8 = 0xffffffff;
  *param_1 = std::_Node_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00611990(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x70;
  func_0x005fc190();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0xb8);
  }
  return iVar1;
}



undefined4 __thiscall FUN_00611a40(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed737d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x005e3e80(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00611aa0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  if (((*(char *)(param_1 + 0x50) == '\0') && (*(int **)(param_1 + 0x4c) != (int *)0x0)) &&
     ((*(int *)(param_1 + 100) == 0 || (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 100))))) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 8);
    _guard_check_icall();
    (*pcVar1)();
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined1 *)(param_1 + 0x51) = 1;
    return;
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != (int *)(param_1 + 0x28));
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}



uint __fastcall FUN_00611b10(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  uint in_EAX;
  
  if (((*(int *)(param_1 + 0x4c) != 0) && (*(char *)(param_1 + 0x50) == '\0')) &&
     ((in_EAX = *(uint *)(param_1 + 100), in_EAX == 0 || (*(int *)(param_1 + 0x68) < (int)in_EAX))))
  {
    uVar3 = *(uint *)(param_1 + 0x60);
    puVar1 = (uint *)(param_1 + 0x58);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  piVar4 = *(int **)(param_1 + 0x4c);
  if (piVar4 != (int *)0x0) {
    pcVar5 = *(code **)(*piVar4 + 0x10);
    _guard_check_icall(piVar4 != (int *)(param_1 + 0x28));
    in_EAX = (*pcVar5)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return in_EAX & 0xffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00611b70(HWND param_1,UINT param_2,WPARAM param_3,LONG *param_4)

{
  HDC hdc;
  HDC hdc_00;
  LONG *pLStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  int iStack_60;
  tagPAINTSTRUCT tStack_50;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&pLStack_6c;
  pLStack_6c = param_4;
  GetWindowLongA(param_1,-0x15);
  switch(param_2) {
  case 1:
    SetWindowLongA(param_1,-0x15,*param_4);
    break;
  case 2:
    DeleteObject(_DAT_0145ca94);
    PostQuitMessage(0);
    break;
  default:
    break;
  case 0xf:
    hdc = BeginPaint(param_1,&tStack_50);
    hdc_00 = CreateCompatibleDC(hdc);
    SelectObject(hdc_00,_DAT_0145ca94);
    GetObjectA(_DAT_0145ca94,0x18,auStack_68);
    GetSystemMetrics(0);
    GetSystemMetrics(1);
    BitBlt(hdc,0,0,iStack_64,iStack_60,hdc_00,0,0,0xcc0020);
    DeleteDC(hdc_00);
    ReleaseDC(param_1,hdc);
    ValidateRect(param_1,(RECT *)0x0);
    EndPaint(param_1,&tStack_50);
    param_4 = pLStack_6c;
    break;
  case 0x10:
    DestroyWindow(param_1);
  }
  DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  FUN_008ab370();
  return;
}



undefined1 __fastcall FUN_00611ce0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



undefined4 * __thiscall FUN_00612bd0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed75c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = AnimatedTexture::vftable;
  uStack_8 = 1;
  iVar1 = param_1[0x1d];
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,param_1[0x1f] - iVar1 >> 2,uVar2);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (param_1[0x1a] != 0) {
    func_0x00485920(param_1[0x1a]);
    func_0x0046e710(param_1[0x1a],(int)(param_1[0x1c] - param_1[0x1a]) >> 3);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0062a0f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_00612cb0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  for (puVar3 = *(undefined4 **)(param_1 + 0x68); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    pcVar2 = *(code **)(*(int *)*puVar3 + 0x18);
    _guard_check_icall();
    (*pcVar2)();
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return 1;
}



void __thiscall FUN_00612d00(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  puVar3 = *(undefined4 **)(param_1 + 0x68);
  if (puVar3 == puVar1) {
    *(undefined1 *)(param_1 + 0x4d) = (undefined1)param_2;
    return;
  }
  do {
    pcVar2 = *(code **)(*(int *)*puVar3 + 0x10);
    _guard_check_icall(param_2);
    (*pcVar2)();
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar1);
  *(undefined1 *)(param_1 + 0x4d) = (undefined1)param_2;
  return;
}



void __thiscall FUN_00612d60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  puVar3 = *(undefined4 **)(param_1 + 0x68);
  if (puVar3 == puVar1) {
    *(undefined1 *)(param_1 + 0x4f) = (undefined1)param_2;
    return;
  }
  do {
    pcVar2 = *(code **)(*(int *)*puVar3 + 0x14);
    _guard_check_icall(param_2);
    (*pcVar2)();
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar1);
  *(undefined1 *)(param_1 + 0x4f) = (undefined1)param_2;
  return;
}



void __fastcall FUN_00612dc0(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uStack_c;
  int iStack_8;
  
  iStack_8 = (int)((ulonglong)DAT_0145db28 >> 0x20);
  uStack_c = (uint)DAT_0145db28;
  piVar1 = (int *)(param_1 + 0x68);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x80) * 4);
  iVar4 = (iStack_8 - *(int *)(param_1 + 0x8c)) - (uint)(uStack_c < *(uint *)(param_1 + 0x88));
  iVar5 = (int)uVar2 >> 0x1f;
  if ((iVar5 <= iVar4) && ((iVar5 < iVar4 || (uVar2 <= uStack_c - *(uint *)(param_1 + 0x88))))) {
    *(uint *)(param_1 + 0x88) = uStack_c;
    *(int *)(param_1 + 0x8c) = iStack_8;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(uint *)(param_1 + 0x80) =
         (*(int *)(param_1 + 0x80) + 1U) % (uint)(*(int *)(param_1 + 0x6c) - *piVar1 >> 3);
  }
  pcVar3 = *(code **)(**(int **)(*piVar1 + *(int *)(param_1 + 0x80) * 8) + 8);
  _guard_check_icall();
  (*pcVar3)();
  piVar1 = (int *)(*piVar1 + *(int *)(param_1 + 0x80) * 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*piVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x14);
  return;
}



void __thiscall FUN_006167e0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [160];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed78b4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar2;
  memset(auStack_c4,0,0xb0);
  func_0x004687a0(1,uVar2);
  uStack_8 = 1;
  iVar4 = 2;
  iVar5 = param_1 + 0x18;
  do {
    iVar1 = iVar5 + 0x38;
    for (; iVar5 != iVar1; iVar5 = iVar5 + 8) {
      uVar3 = func_0x005b0d50(*(undefined4 *)(iVar5 + 4),&DAT_0113c2f0);
      func_0x0046b6e0(uVar3);
    }
    func_0x0046b6e0(auStack_b4,&DAT_011434e4);
    iVar4 = iVar4 + -1;
    iVar5 = iVar1;
  } while (iVar4 != 0);
  func_0x0046b6e0(auStack_b4,&DAT_011434e0);
  uVar3 = func_0x005b0d50(*(undefined4 *)(param_1 + 0x88),&DAT_01141f68);
  func_0x0046b6e0(uVar3);
  uVar3 = func_0x00482d80(DAT_012bc060,&DAT_0112e458);
  func_0x0046b6e0(uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0046a470(param_2);
  uStack_8 = 0;
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __fastcall FUN_00616a80(int *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = func_0x008ab47d(0x10);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *param_1 = iVar1;
  return param_1;
}



void __fastcall FUN_00619830(int param_1)

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
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed7e5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_18 = param_1 + 0xc;
  iStack_14 = *(int *)(param_1 + 0x18);
  if (iStack_14 != 0) {
    uStack_5c = *(undefined4 *)(iStack_14 + 4);
    pppuStack_3c = &ppuStack_60;
    ppuStack_60 = std::_Func_impl_no_alloc<>::vftable;
    iStack_8._1_3_ = 0;
    iStack_8._0_1_ = 2;
    auStack_38[4] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[5] = 0;
    func_0x0046bc40("HardwareBuffer::~HardwareBuffer",0x1f,uVar3);
    iStack_8 = CONCAT31(iStack_8._1_3_,3);
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
    iStack_8._0_1_ = 2;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (pppuStack_3c != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_3c)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_60 >> 8),pppuStack_3c != &ppuStack_60));
      (*pcVar1)();
      pppuStack_3c = (undefined ***)0x0;
    }
    func_0x008ab812(iStack_14,8);
  }
  iStack_8 = 0xffffffff;
  if (*(int *)(iStack_18 + 8) != 0) {
    func_0x008ab37e(*(int *)(iStack_18 + 8));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_006199b0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



int __thiscall FUN_00619da0(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eae018;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 8);
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
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00619e40(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed7fd3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    func_0x0046ab40(iVar1,(*(int *)(param_1 + 0x38) - iVar1 >> 2) * -0x33333333,uVar4);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
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
    func_0x008ab812(param_1,0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00619f10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar1 = DAT_0145ceb8;
  *(undefined4 *)(DAT_0145ceb8 + 0x788) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x78c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x790) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x794) = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(iVar1 + 0x780);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x7fc);
  }
  *(int *)(iVar1 + 0x7f8) = iVar2;
  func_0x00623300(param_1 + 4);
  func_0x00623610(param_1 + 0x1c,4,extraout_ECX,0);
  return;
}



void __fastcall FUN_00619f80(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_1c [3];
  char cStack_19;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_1c;
  if (*(char *)(param_1[1] + 0x52) != '\0') {
    pcVar2 = *(code **)(*(int *)param_1[1] + 8);
    _guard_check_icall();
    (*pcVar2)();
    cStack_19 = '\0';
    func_0x006161a0(&iStack_14,*(int *)(param_1[1] + 0x14) + 100,0,param_1[1] + 0x20,&cStack_19);
    if (-1 < iStack_14) {
      if (cStack_19 != '\0') {
        func_0x00619c00();
        pcVar2 = *(code **)(*param_1 + 4);
        _guard_check_icall(&iStack_14);
        (*pcVar2)();
      }
      uVar7 = *(uint *)param_1[8] >> 1;
      if ((int)(uVar7 + DAT_0145dff8) < 0x10000) {
        iVar3 = *(int *)(param_1[10] + 8);
        memcpy((void *)(DAT_0145dfd0 + DAT_0145dff8 * 8),(void *)((uint *)param_1[8])[2],uVar7 * 8);
        iVar4 = DAT_0145dfdc;
        iVar6 = 0;
        iStack_18 = (DAT_0145dff8 + uVar7) * 2;
        for (iVar5 = DAT_0145dff8 * 2; iVar5 < iStack_18; iVar5 = iVar5 + 2) {
          *(float *)(iVar4 + iVar5 * 4) = (float)iStack_14 + *(float *)(iVar3 + iVar6 * 4);
          iVar1 = iVar6 * 4;
          iVar6 = iVar6 + 2;
          *(float *)(iVar4 + 4 + iVar5 * 4) = (float)iStack_10 + *(float *)(iVar3 + 4 + iVar1);
        }
        func_0x006199e0(param_1 + 3,uVar7);
        DAT_0145dff8 = DAT_0145dff8 + uVar7;
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_0061a0d0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar1 = DAT_0145ceb8;
  *(undefined4 *)(DAT_0145ceb8 + 0x788) = DAT_012bc26c;
  *(undefined4 *)(iVar1 + 0x78c) = DAT_012bc270;
  *(undefined4 *)(iVar1 + 0x790) = DAT_012bc274;
  *(undefined4 *)(iVar1 + 0x794) = DAT_012bc278;
  iVar1 = *(int *)(param_1 + 4);
  uStack_28 = 0;
  iStack_18 = *param_2;
  iStack_14 = param_2[1];
  iStack_20 = *(int *)(iVar1 + 0x20);
  iStack_1c = *(int *)(iVar1 + 0x24);
  iStack_10 = iStack_18 + -1 + iStack_20;
  iStack_c = iStack_14 + -1 + iStack_1c;
  iStack_20 = iStack_20 + -1;
  iStack_1c = iStack_1c + -1;
  uStack_24 = 0;
  func_0x00623960(&iStack_18,(int *)(param_1 + 4),&uStack_28);
  return;
}



void __fastcall FUN_0061a190(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = *(int *)(DAT_0145ceb8 + 0x780);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_0145ceb8 + 0x7fc);
  }
  *(int *)(DAT_0145ceb8 + 0x7f8) = iVar1;
  func_0x00623300(param_1 + 4);
  func_0x00623610(param_1 + 0x1c,4,extraout_ECX,param_1 + 0x30);
  return;
}



void __fastcall FUN_0061a1d0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
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
  if (*(int *)(param_1 + 4) != 0) {
    uStack_1c = 0;
    func_0x00626120(&uStack_1c,param_1 + 0x30,uStack_14);
    uStack_8 = 0;
    if ((int)uStack_1c != 0) {
      *(int *)(DAT_0145ceb8 + 0x780) = (int)uStack_1c;
      func_0x00625260();
      iVar3 = DAT_0145ceb8;
      *(undefined4 *)(DAT_0145ceb8 + 0x788) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar3 + 0x78c) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(iVar3 + 0x790) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(iVar3 + 0x794) = *(undefined4 *)(param_1 + 0x18);
      iVar5 = *(int *)(iVar3 + 0x780);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar3 + 0x7fc);
      }
      *(int *)(iVar3 + 0x7f8) = iVar5;
      func_0x00623300(param_1 + 4);
      func_0x00623610(param_1 + 0x1c,4,extraout_ECX,0);
      *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
    }
    uStack_8 = 0xffffffff;
    piVar4 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar5 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar2 = *(code **)(*piVar4 + 4);
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



void __thiscall FUN_0061a310(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
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
  puStack_c = &DAT_00eb27ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 4) != 0) {
    uStack_1c = 0;
    func_0x00626120(&uStack_1c,param_1 + 0x30,uStack_14);
    uStack_8 = 0;
    if ((int)uStack_1c != 0) {
      *(int *)(DAT_0145ceb8 + 0x780) = (int)uStack_1c;
      func_0x00625260();
      iVar2 = DAT_0145ceb8;
      *(undefined4 *)(DAT_0145ceb8 + 0x788) = DAT_012bc26c;
      *(undefined4 *)(iVar2 + 0x78c) = DAT_012bc270;
      *(undefined4 *)(iVar2 + 0x790) = DAT_012bc274;
      *(undefined4 *)(iVar2 + 0x794) = DAT_012bc278;
      iVar2 = *(int *)(param_1 + 4);
      iStack_2c = *param_2;
      iStack_28 = param_2[1];
      iStack_24 = *(int *)(iVar2 + 0x20) + iStack_2c + -1;
      iStack_20 = *(int *)(iVar2 + 0x24) + iStack_28 + -1;
      func_0x00615ad0(&iStack_2c,(int *)(param_1 + 4));
      *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
    }
    uStack_8 = 0xffffffff;
    piVar4 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar2 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*uStack_1c._4_4_;
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
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0061a470(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0145ceb8;
  *(undefined4 *)(DAT_0145ceb8 + 0x788) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x78c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x790) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x794) = *(undefined4 *)(param_1 + 0x18);
  func_0x00623960(param_1 + 0x1c,param_1 + 4,param_1 + 0x2c);
  return;
}



void __fastcall FUN_0061a4b0(int *param_1)

{
  code *pcVar1;
  undefined1 auStack_2c [7];
  char cStack_25;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_2c;
  if ((((param_1[9] - param_1[7]) + 1 <= (param_1[0xd] - param_1[0xb]) + 1) &&
      ((param_1[10] - param_1[8]) + 1 <= (param_1[0xe] - param_1[0xc]) + 1)) &&
     (*(char *)(param_1[1] + 0x52) != '\0')) {
    pcVar1 = *(code **)(*(int *)param_1[1] + 8);
    _guard_check_icall();
    (*pcVar1)();
    cStack_25 = '\0';
    func_0x006161a0(&iStack_14,*(int *)(param_1[1] + 0x14) + 100,0,param_1[1] + 0x20,&cStack_25);
    if (-1 < iStack_14) {
      if (cStack_25 != '\0') {
        func_0x00619c00();
        pcVar1 = *(code **)(*param_1 + 4);
        _guard_check_icall(&iStack_14);
        (*pcVar1)();
      }
      if (DAT_0145dff8 + 6 < 0x10000) {
        iStack_24 = param_1[0xb] + iStack_14;
        iStack_20 = param_1[0xc] + iStack_10;
        iStack_1c = param_1[0xd] + iStack_14;
        iStack_18 = param_1[0xe] + iStack_10;
        func_0x00619c90(param_1 + 7,&iStack_24,param_1 + 3);
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_0061a5e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  float fVar4;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed8001;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (0xffff < DAT_0145dff8 + 6) {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if (*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463b38) {
    func_0x008ab40d(&DAT_01463b38,uVar3);
    if (DAT_01463b38 == -1) {
      DAT_01463b28 = -10;
      DAT_01463b2c = -10;
      DAT_01463b30 = -10;
      DAT_01463b34 = -10;
      uStack_8 = 0xffffffff;
      func_0x008ab3bc(&DAT_01463b38);
    }
  }
  iVar2 = DAT_0145dff8;
  iVar1 = DAT_0145dfd0;
  fVar4 = (float)*(int *)(param_1 + 0x1c);
  *(float *)(DAT_0145dfd0 + 0x18 + DAT_0145dff8 * 8) = fVar4;
  *(float *)(iVar1 + 0x10 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + iVar2 * 8) = fVar4;
  fVar4 = (float)*(int *)(param_1 + 0x20);
  *(float *)(iVar1 + 0x24 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0xc + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 4 + iVar2 * 8) = fVar4;
  fVar4 = (float)(*(int *)(param_1 + 0x24) + 1);
  *(float *)(iVar1 + 0x28 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0x20 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 8 + iVar2 * 8) = fVar4;
  fVar4 = (float)(*(int *)(param_1 + 0x28) + 1);
  *(float *)(iVar1 + 0x2c + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0x1c + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0x14 + iVar2 * 8) = fVar4;
  iVar2 = DAT_0145dff8;
  iVar1 = DAT_0145dfdc;
  fVar4 = (float)DAT_01463b28;
  *(float *)(DAT_0145dfdc + 0x18 + DAT_0145dff8 * 8) = fVar4;
  *(float *)(iVar1 + 0x10 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + iVar2 * 8) = fVar4;
  fVar4 = (float)DAT_01463b2c;
  *(float *)(iVar1 + 0x24 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0xc + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 4 + iVar2 * 8) = fVar4;
  fVar4 = (float)(DAT_01463b30 + 1);
  *(float *)(iVar1 + 0x28 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0x20 + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 8 + iVar2 * 8) = fVar4;
  fVar4 = (float)(DAT_01463b34 + 1);
  *(float *)(iVar1 + 0x2c + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0x1c + iVar2 * 8) = fVar4;
  *(float *)(iVar1 + 0x14 + iVar2 * 8) = fVar4;
  func_0x006199e0(param_1 + 0xc,6);
  DAT_0145dff8 = DAT_0145dff8 + 6;
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __fastcall FUN_0061a7b0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = **(uint **)(param_1 + 0x20) >> 1;
  if (0xffff < (int)(uVar2 + DAT_0145dff8)) {
    return 0;
  }
  memcpy((void *)(DAT_0145dfd0 + DAT_0145dff8 * 8),(void *)(*(uint **)(param_1 + 0x20))[2],uVar2 * 8
        );
  iVar1 = (DAT_0145dff8 + uVar2) * 2;
  if (DAT_0145dff8 * 2 < iVar1) {
    puVar3 = (undefined4 *)(DAT_0145dfdc + DAT_0145dff8 * 8);
    for (iVar1 = iVar1 + DAT_0145dff8 * -2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0xc1200000;
      puVar3 = puVar3 + 1;
    }
  }
  func_0x006199e0(param_1 + 0xc,uVar2);
  DAT_0145dff8 = DAT_0145dff8 + uVar2;
  return 1;
}



void __fastcall FUN_0061a830(int param_1)

{
  func_0x006293b0(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                  param_1 + 0xc,*(undefined1 *)(param_1 + 0x30));
  return;
}



void __fastcall FUN_0061a860(int param_1)

{
  func_0x00629630(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                  param_1 + 0x30,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0061a880(int param_1)

{
  void *_Dst;
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  size_t sVar7;
  void *pvVar8;
  int *unaff_FS_OFFSET;
  undefined1 uStack_31;
  void *pvStack_30;
  void *pvStack_2c;
  undefined4 *puStack_28;
  void *pvStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  void *pvStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed8039;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = DAT_0145ceb8;
  *(undefined4 *)(DAT_0145ceb8 + 0x788) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar5 + 0x78c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar5 + 0x790) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar5 + 0x794) = *(undefined4 *)(param_1 + 0x18);
  if ((*(int *)(*(int *)unaff_FS_OFFSET[0xb] + 0x14) < DAT_01463b48) &&
     (func_0x008ab40d(&DAT_01463b48,uStack_14), DAT_01463b48 == -1)) {
    uStack_8 = 0;
    DAT_01463b44 = (void *)0x0;
    pvStack_30 = (void *)0x0;
    _DAT_01463b3c = 0;
    func_0x0061bb70(0x400,&pvStack_30,&uStack_31);
    func_0x008ab7fd(FUN_00f72fc0);
    uStack_8 = 0xffffffff;
    func_0x008ab3bc(&DAT_01463b48);
  }
  pvVar8 = (void *)((int)DAT_01463b40 - DAT_01463b3c >> 2);
  pvVar6 = (void *)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3);
  pvStack_2c = DAT_01463b40;
  if (pvVar8 < pvVar6) {
    pvVar3 = (void *)((int)DAT_01463b44 - DAT_01463b3c >> 2);
    if (pvVar3 < pvVar6) {
      if ((void *)0x3fffffff < pvVar6) {
        func_0x0046e700();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((void *)(0x3fffffff - ((uint)pvVar3 >> 1)) < pvVar3) {
        pvVar3 = (void *)0x3fffffff;
      }
      else {
        pvVar3 = (void *)(((uint)pvVar3 >> 1) + (int)pvVar3);
        if (pvVar3 < pvVar6) {
          pvVar3 = pvVar6;
        }
      }
      pvStack_30 = pvVar3;
      pvStack_2c = pvVar3;
      pvStack_2c = (void *)func_0x0057d790(&DAT_01463b3c,&pvStack_2c);
      puStack_28 = &DAT_01463b3c;
      _Dst = (void *)((int)pvStack_2c + (int)pvVar8 * 4);
      uStack_8 = 1;
      sVar7 = ((int)pvVar6 - (int)pvVar8) * 4;
      pvStack_24 = pvStack_2c;
      pvStack_20 = pvVar3;
      pvStack_1c = _Dst;
      pvStack_18 = _Dst;
      memset(_Dst,0,sVar7);
      pvVar8 = pvStack_2c;
      pvStack_18 = (void *)(sVar7 + (int)_Dst);
      func_0x008ab0e6(pvStack_2c,DAT_01463b3c,(int)DAT_01463b40 - DAT_01463b3c);
      pvStack_24 = (void *)0x0;
      if (DAT_01463b3c != 0) {
        func_0x0046ac90(DAT_01463b3c,(int)DAT_01463b44 - DAT_01463b3c >> 2);
      }
      _DAT_01463b3c = CONCAT44((void *)((int)pvVar8 + (int)pvVar6 * 4),pvVar8);
      DAT_01463b44 = (void *)((int)pvVar8 + (int)pvStack_30 * 4);
      uStack_8 = 0xffffffff;
    }
    else {
      sVar7 = ((int)pvVar6 - (int)pvVar8) * 4;
      memset(DAT_01463b40,0,sVar7);
      _DAT_01463b3c = CONCAT44((void *)((int)pvStack_2c + sVar7),DAT_01463b3c);
    }
  }
  piVar1 = *(int **)(param_1 + 0x20);
  iVar5 = 0;
  for (piVar4 = *(int **)(param_1 + 0x1c); piVar4 != piVar1; piVar4 = piVar4 + 2) {
    *(float *)(DAT_01463b3c + iVar5 * 4) = (float)*piVar4;
    *(float *)(DAT_01463b3c + 4 + iVar5 * 4) = (float)piVar4[1];
    iVar5 = iVar5 + 2;
  }
  func_0x00623d10(&DAT_01463b3c,iVar5 / 2,*(undefined4 *)(param_1 + 0x28));
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0061ab20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(DAT_0145ceb8 + 0x7e4);
  uVar2 = *(undefined4 *)(DAT_0145ceb8 + 0x7e8);
  uVar3 = *(undefined4 *)(DAT_0145ceb8 + 0x7ec);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_0145ceb8 + 0x7e0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  func_0x006232a0(param_1 + 0xc);
  return;
}



void __fastcall FUN_0061ab60(int param_1)

{
  func_0x006232a0(param_1 + 0x1c);
  return;
}



void __fastcall FUN_0061ab80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar4 = DAT_0145ceb8;
  puVar3 = *(undefined4 **)(DAT_0145ceb8 + 0x18);
  if (puVar3 == *(undefined4 **)(DAT_0145ceb8 + 0x1c)) {
    func_0x00623f10(puVar3,(undefined4 *)(DAT_0145ceb8 + 0x20));
    iVar4 = DAT_0145ceb8;
  }
  else {
    uVar6 = *(undefined4 *)(DAT_0145ceb8 + 0x24);
    uVar1 = *(undefined4 *)(DAT_0145ceb8 + 0x28);
    uVar2 = *(undefined4 *)(DAT_0145ceb8 + 0x2c);
    *puVar3 = *(undefined4 *)(DAT_0145ceb8 + 0x20);
    puVar3[1] = uVar6;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    uVar6 = *(undefined4 *)(iVar4 + 0x34);
    uVar1 = *(undefined4 *)(iVar4 + 0x38);
    uVar2 = *(undefined4 *)(iVar4 + 0x3c);
    puVar3[4] = *(undefined4 *)(iVar4 + 0x30);
    puVar3[5] = uVar6;
    puVar3[6] = uVar1;
    puVar3[7] = uVar2;
    puVar3[8] = *(undefined4 *)(iVar4 + 0x40);
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 0x24;
  }
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar6 = 0;
  fStack_8 = (float)*(int *)(param_1 + 0x10);
  fStack_c = (float)*(int *)(param_1 + 0xc);
  func_0x00623460();
  func_0x00eaab80();
  uStack_18 = 0;
  uStack_24 = uVar5 ^ 0x80000000;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_1c = 0;
  uStack_10 = 0x3f800000;
  uStack_30 = uVar6;
  uStack_2c = uVar5;
  uStack_20 = uVar6;
  puVar3 = (undefined4 *)func_0x00623e50(&uStack_30);
  uVar6 = puVar3[1];
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  *(undefined4 *)(iVar4 + 0x20) = *puVar3;
  *(undefined4 *)(iVar4 + 0x24) = uVar6;
  *(undefined4 *)(iVar4 + 0x28) = uVar1;
  *(undefined4 *)(iVar4 + 0x2c) = uVar2;
  uVar6 = puVar3[5];
  uVar1 = puVar3[6];
  uVar2 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x30) = puVar3[4];
  *(undefined4 *)(iVar4 + 0x34) = uVar6;
  *(undefined4 *)(iVar4 + 0x38) = uVar1;
  *(undefined4 *)(iVar4 + 0x3c) = uVar2;
  *(undefined4 *)(iVar4 + 0x40) = puVar3[8];
  func_0x00623460();
  return;
}



void FUN_0061ac90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_0145ceb8;
  iVar1 = *(int *)(DAT_0145ceb8 + 0x18);
  uVar2 = *(undefined4 *)(iVar1 + -0x20);
  uVar3 = *(undefined4 *)(iVar1 + -0x1c);
  uVar4 = *(undefined4 *)(iVar1 + -0x18);
  *(undefined4 *)(DAT_0145ceb8 + 0x20) = *(undefined4 *)(iVar1 + -0x24);
  *(undefined4 *)(iVar5 + 0x24) = uVar2;
  *(undefined4 *)(iVar5 + 0x28) = uVar3;
  *(undefined4 *)(iVar5 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + -0x10);
  uVar3 = *(undefined4 *)(iVar1 + -0xc);
  uVar4 = *(undefined4 *)(iVar1 + -8);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar1 + -0x14);
  *(undefined4 *)(iVar5 + 0x34) = uVar2;
  *(undefined4 *)(iVar5 + 0x38) = uVar3;
  *(undefined4 *)(iVar5 + 0x3c) = uVar4;
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar1 + -4);
  *(int *)(iVar5 + 0x18) = iVar1 + -0x24;
  return;
}



void __thiscall FUN_0061acc0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0145ceb8;
  *(undefined4 *)(DAT_0145ceb8 + 0x780) = *(undefined4 *)(DAT_0145ceb8 + 0x80c);
  *(undefined4 *)(iVar1 + 0x788) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x78c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x790) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x794) = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) <= uVar2) {
    *(undefined4 *)(iVar1 + 0x780) = 0;
    return;
  }
  do {
    iVar1 = func_0x00eaab5a(*(undefined4 *)(*param_2 + uVar2 * 4),0,
                            &DrawQueueItem::RTTI_Type_Descriptor,
                            &DrawQueueItemTexturedRect::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      func_0x00623960(iVar1 + 0x1c,iVar1 + 4,iVar1 + 0x2c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < *(uint *)(param_1 + 8));
  *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
  return;
}



undefined4 __thiscall FUN_0061c4a0(int param_1,undefined4 param_2)

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
  func_0x00469da0(param_1 + 8,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int __fastcall FUN_0061c500(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_1 != param_1[1]) {
    func_0x00485920(*param_1,uVar4);
    param_1[1] = *param_1;
  }
  uVar5 = func_0x0061cf40();
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_14 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_14;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_14 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_14 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __thiscall FUN_0061c5b0(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  uint uStack_cc;
  int aiStack_bc [9];
  int *piStack_98;
  code *pcStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [20];
  undefined4 *puStack_74;
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  uint uStack_54;
  char cStack_4d;
  undefined1 *puStack_4c;
  undefined8 uStack_48;
  uint auStack_40 [6];
  undefined8 uStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed8492;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_cc = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_cc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = 0;
  iStack_8 = 0;
  uStack_18 = uStack_cc;
  iVar6 = func_0x00bbb310();
  if (DAT_0145d818 == iVar6) {
    iStack_8._0_1_ = 0xc;
    func_0x00469d30("otfont");
    iStack_8._0_1_ = 0xd;
    uVar7 = FUN_005fe700(auStack_88,&param_2,auStack_70);
    iStack_8._0_1_ = 0xe;
    func_0x00469bd0(uVar7);
    iStack_8._0_1_ = 0xd;
    FUN_00469ba0();
    iStack_8._0_1_ = 0xc;
    FUN_00469ba0();
    uStack_48 = 0;
    func_0x0080da60();
    iStack_8._0_1_ = 0xf;
    uStack_20 = 0;
    func_0x00469d30(&DAT_01143628);
    iStack_8._0_1_ = 0x10;
    func_0x0080f6e0(&uStack_20,auStack_70);
    iStack_8._0_1_ = 0x12;
    FUN_00469ba0();
    func_0x00469d30(&DAT_0113c348);
    iStack_8._0_1_ = 0x13;
    func_0x005f4390(auStack_40,auStack_70);
    iStack_8._0_1_ = 0x15;
    FUN_00469ba0();
    cVar5 = FUN_0061cb30(auStack_40);
    if (cVar5 != '\0') {
      iStack_8._0_1_ = 0x12;
      FUN_00469ba0();
      iStack_8._0_1_ = 0xf;
      FUN_00468340();
      iStack_8 = CONCAT31(iStack_8._1_3_,0xc);
      FUN_00468340();
      iStack_8 = 0xffffffff;
      FUN_00469ba0();
      goto LAB_0061ca63;
    }
    puVar10 = (undefined1 *)*param_1;
    while( true ) {
      puStack_58 = (undefined1 *)param_1[1];
      puStack_4c = puVar10;
      if (puVar10 == puStack_58) break;
      uVar7 = FUN_0061c4a0(auStack_88);
      iStack_8._0_1_ = 0x16;
      cStack_4d = func_0x0046b8e0(uVar7,auStack_40);
      iStack_8._0_1_ = 0x15;
      FUN_00469ba0();
      if (cStack_4d != '\0') {
        func_0x0061cec0(&puStack_58,puVar10);
        break;
      }
      puVar10 = puVar10 + 8;
    }
    uStack_28 = 0;
    func_0x0061d060();
    iStack_8 = CONCAT31(iStack_8._1_3_,0x17);
    func_0x00616d30(&uStack_20);
    puVar3 = (undefined4 *)param_1[1];
    if (puVar3 == (undefined4 *)param_1[2]) {
      func_0x00488840(puVar3,&uStack_28);
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      if (uStack_28._4_4_ != 0) {
        LOCK();
        *(int *)(uStack_28._4_4_ + 4) = *(int *)(uStack_28._4_4_ + 4) + 1;
        UNLOCK();
      }
      *puVar3 = (undefined4)uStack_28;
      puVar3[1] = uStack_28._4_4_;
      param_1[1] = param_1[1] + 8;
    }
    if (param_1[3] == 0) {
LAB_0061c9c9:
      cStack_4d = '\x01';
    }
    else {
      cStack_4d = '\0';
      func_0x00469d30("default");
      iStack_8 = CONCAT31(iStack_8._1_3_,0x18);
      uStack_54 = uStack_54 | 1;
      cVar5 = func_0x005f2ca0(auStack_70,&cStack_4d);
      cStack_4d = '\0';
      if (cVar5 != '\0') goto LAB_0061c9c9;
    }
    iStack_8 = 0x17;
    if ((uStack_54 & 1) != 0) {
      uStack_54 = uStack_54 & 0xfffffffe;
      FUN_00469ba0();
    }
    if (cStack_4d != '\0') {
      func_0x004683d0(&uStack_28);
    }
    iStack_8._0_1_ = 0x15;
    FUN_00468340();
    iStack_8._0_1_ = 0x12;
    FUN_00469ba0();
    iStack_8._0_1_ = 0xf;
    FUN_00468340();
    iStack_8 = CONCAT31(iStack_8._1_3_,0xc);
    FUN_00468340();
    iStack_8 = 0xffffffff;
    if (0xf < in_stack_00000018) {
      func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
    }
  }
  else {
    iStack_8._0_1_ = 1;
    uStack_20 = CONCAT44(&pcStack_90,(undefined4)uStack_20);
    pcStack_90 = FUN_0061c5b0;
    puStack_58 = auStack_8c;
    uStack_28 = CONCAT44(puStack_58,(undefined4)uStack_28);
    func_0x00469da0(&param_2);
    uStack_54 = 2;
    piStack_98 = (int *)0x0;
    iStack_8._0_1_ = 8;
    puStack_74 = param_1;
    piStack_98 = (int *)func_0x0061d2f0(&pcStack_90);
    iStack_8._0_1_ = 9;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[4] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("FontManager::importFont",0x17);
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    FUN_005e5070(&uStack_48,auStack_40,aiStack_bc,0);
    piVar4 = uStack_48._4_4_;
    if (uStack_48._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_48._4_4_[1] + -1;
      uStack_48._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*uStack_48._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar6 = *piVar1 + -1;
        *piVar1 = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piVar4 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    iStack_8._0_1_ = 9;
    if (0xf < auStack_40[5]) {
      func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
    }
    auStack_40[4] = 0;
    auStack_40[5] = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    iStack_8._0_1_ = 1;
    if (piStack_98 != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_98 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)aiStack_bc >> 8),piStack_98 != aiStack_bc));
      (*pcVar2)();
      piStack_98 = (int *)0x0;
    }
    uStack_54 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    func_0x005ecec0();
    iStack_8 = 0xffffffff;
    if (0xf < in_stack_00000018) {
      uVar8 = in_stack_00000018 + 1;
      uVar9 = param_2;
      if (0xfff < uVar8) {
        uVar8 = in_stack_00000018 + 0x24;
        uVar9 = *(uint *)(param_2 - 4);
        if (0x1f < (param_2 - uVar9) - 4) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(uVar9,uVar8);
    }
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = param_2 & 0xffffff00;
LAB_0061ca63:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 Catch_0061ca81(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x90) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  func_0x0046bc40("Unable to load font from file \'%s\': %s",0x26);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uVar2 = func_0x004852c0(unaff_EBP + 8,unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(unaff_EBP + -0x3c,*(undefined4 *)(unaff_EBP + -0x3c),
                    *(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x3c) = 0;
  return 0x61ca2b;
}



undefined4 __thiscall FUN_0061cb30(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 ****ppppuVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  undefined4 ***apppuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed84de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  piStack_1c = (int *)param_1[1];
  param_1 = (int *)*param_1;
  if (param_1 != piStack_1c) {
    do {
      uStack_8 = 0;
      func_0x00469da0(*param_1 + 8,uVar1);
      uStack_18 = 1;
      puVar3 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar3 = (undefined4 *)*param_2;
      }
      ppppuVar2 = apppuStack_34;
      if (0xf < uStack_20) {
        ppppuVar2 = (undefined4 ****)apppuStack_34[0];
      }
      cStack_11 = func_0x0046cf20(ppppuVar2,uStack_24,puVar3,param_2[4]);
      uStack_18 = 0;
      uStack_8 = 0xffffffff;
      if (0xf < uStack_20) {
        func_0x0046b1f0(apppuStack_34,apppuStack_34[0],uStack_20);
      }
      uStack_24 = 0;
      uStack_20 = 0xf;
      apppuStack_34[0] = (undefined4 ***)((uint)apppuStack_34[0] & 0xffffff00);
      if (cStack_11 != '\0') {
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      param_1 = param_1 + 2;
    } while (param_1 != piStack_1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void __fastcall FUN_0061d130(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed866b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar6);
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
  uStack_8 = uStack_8 & 0xffffff00;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 2;
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0061d210(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1850);
  }
  return param_1;
}



TypeDescriptor * FUN_0061d240(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0061d250(int param_1)

{
  func_0x0061d2f0(param_1 + 4);
  return;
}



undefined4 * __thiscall FUN_0061d270(int param_1,undefined4 *param_2)

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



undefined4 __thiscall FUN_0061d5f0(undefined4 param_1,byte param_2)

{
  func_0x0061d620();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



void __thiscall FUN_0061e2b0(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int **ppiVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint auStack_128 [9];
  int *piStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined1 **ppuStack_e8;
  int *piStack_e4;
  uint uStack_e0;
  undefined4 **ppuStack_dc;
  char *pcStack_d8;
  undefined4 *puStack_d4;
  uint uStack_d0;
  int aiStack_c4 [9];
  int *piStack_a0;
  undefined1 auStack_9c [4];
  int *piStack_98;
  int *piStack_94;
  uint *puStack_90;
  code *pcStack_8c;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  uint *puStack_64;
  uint *puStack_60;
  int *piStack_5c;
  int *piStack_58;
  uint *puStack_54;
  undefined1 *puStack_50;
  undefined1 **ppuStack_4c;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  code **ppcStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed8955;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_d0 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  iStack_8 = 0;
  puStack_d4 = (undefined4 *)0x61e2f5;
  piStack_20 = (int *)param_1;
  uStack_14 = uStack_d0;
  iVar5 = func_0x00bbb310();
  if (DAT_0145d748 == iVar5) {
    if (in_stack_00000014 == 0) {
      puStack_d4 = (undefined4 *)0x12;
      pcStack_d8 = "screenshot_map.png";
      ppuStack_dc = (undefined4 **)0x61e51d;
      func_0x0046a660();
    }
    puStack_d4 = *(undefined4 **)(param_1 + 0x24);
    pcStack_d8 = (char *)0x8d40;
    ppuStack_dc = (undefined4 **)0x61e52a;
    func_0x0087ee60();
    *(undefined4 *)(param_1 + 0x28) = DAT_0145ceb4;
    DAT_0145ceb4 = *(undefined4 *)(param_1 + 0x24);
    puStack_54 = (uint *)0x0;
    puVar3 = *(undefined1 **)(*(int *)(param_1 + 0xc) + 0x20);
    ppiVar4 = *(int ***)(*(int *)(param_1 + 0xc) + 0x24);
    uStack_1c = 0;
    ppcStack_24 = (code **)((int)ppiVar4 * (int)puVar3 * 4);
    ppuStack_dc = &puStack_54;
    uStack_e0 = 0x61e56c;
    func_0x005eda10();
    iStack_8._0_1_ = 0x13;
    ppuStack_dc = (undefined4 **)*(undefined4 *)uStack_1c;
    uStack_e0 = 0x1401;
    piStack_e4 = (int *)0x1908;
    uStack_f0 = 0;
    uStack_f4 = 0;
    uStack_f8 = 0x61e58d;
    puStack_ec = puVar3;
    ppuStack_e8 = (undefined1 **)ppiVar4;
    func_0x0087f0f0();
    uStack_f8 = *(undefined4 *)((int)piStack_20 + 0x28);
    uStack_fc = 0x8d40;
    puStack_100 = (undefined4 *)0x61e59d;
    func_0x0087ee60();
    DAT_0145ceb4 = *(undefined4 *)((int)piStack_20 + 0x28);
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    iStack_48 = (int)(undefined4 *)uStack_1c;
    iStack_44 = (int)uStack_1c._4_4_;
    iStack_8._0_1_ = 0x14;
    puStack_100 = &param_2;
    piStack_104 = (int *)0x61e5e3;
    puStack_50 = puVar3;
    ppuStack_4c = (undefined1 **)ppiVar4;
    func_0x00469da0();
    puStack_64 = auStack_128;
    puStack_60 = auStack_128;
    piStack_104 = (int *)0x0;
    iStack_8._0_1_ = 0x17;
    piStack_104 = (int *)func_0x008ab47d(0x2c);
    piVar1 = piStack_40;
    piStack_58 = piStack_104 + 1;
    piStack_104[2] = (int)ppuStack_4c;
    piStack_104[3] = iStack_48;
    *piStack_104 = (int)std::_Func_impl_no_alloc<>::vftable;
    *piStack_58 = (int)puStack_50;
    piStack_104[4] = iStack_44;
    iStack_48 = 0;
    iStack_44 = 0;
    piStack_104[5] = 0;
    piStack_104[6] = 0;
    piStack_104[7] = 0;
    piStack_104[8] = 0;
    piStack_104[9] = 0;
    piStack_104[10] = 0;
    piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
    piStack_104[5] = (int)piVar1;
    piStack_104[6] = iStack_3c;
    piStack_104[7] = iStack_38;
    piStack_104[8] = iStack_34;
    *(ulonglong *)(piStack_104 + 9) = CONCAT44(uStack_2c,uStack_30);
    uStack_30 = 0;
    uStack_2c = 0xf;
    ppcStack_24 = (code **)0x0;
    iStack_8._0_1_ = 0x16;
    piStack_5c = piStack_104;
    func_0x00570590();
    uStack_30 = 0;
    uStack_2c = 0xf;
    piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    piStack_20 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar5 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        uStack_e0 = 0x61e6dc;
        _guard_check_icall();
        uStack_e0 = 0x61e6e1;
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_20 + 2;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar2 = *(code **)(*piStack_20 + 4);
          uStack_e0 = 0x61e6f9;
          _guard_check_icall();
          uStack_e0 = 0x61e6fe;
          (*pcVar2)();
        }
      }
    }
  }
  else {
    iStack_8._0_1_ = 1;
    ppcStack_24 = &pcStack_8c;
    puStack_90 = &uStack_84;
    pcStack_8c = FUN_0061e2b0;
    puStack_d4 = &param_2;
    iStack_88 = 0;
    pcStack_d8 = (char *)0x61e33a;
    puStack_54 = puStack_90;
    func_0x00469da0();
    uStack_28 = 1;
    piStack_a0 = (int *)0x0;
    iStack_8._0_1_ = 8;
    pcStack_d8 = (char *)0x30;
    ppuStack_dc = (undefined4 **)0x61e361;
    iStack_6c = param_1;
    piStack_a0 = (int *)func_0x008ab47d();
    piStack_5c = piStack_a0 + 2;
    *piStack_a0 = (int)std::_Func_impl_no_alloc<>::vftable;
    *piStack_5c = (int)pcStack_8c;
    piStack_a0[3] = iStack_88;
    puStack_64 = (uint *)(piStack_a0 + 4);
    *puStack_64 = 0;
    piStack_a0[5] = 0;
    piStack_a0[6] = 0;
    piStack_a0[7] = 0;
    piStack_a0[8] = 0;
    piStack_a0[9] = 0;
    *puStack_64 = uStack_84;
    piStack_a0[5] = iStack_80;
    piStack_a0[6] = iStack_7c;
    piStack_a0[7] = iStack_78;
    *(ulonglong *)(piStack_a0 + 8) = CONCAT44(uStack_70,uStack_74);
    uStack_74 = 0;
    uStack_70 = 0xf;
    uStack_84 = uStack_84 & 0xffffff00;
    piStack_a0[10] = iStack_6c;
    piStack_20 = (int *)0x0;
    iStack_8._0_1_ = 0x10;
    pcStack_d8 = (char *)0x19;
    ppuStack_dc = (undefined4 **)0x11437c8;
    uStack_30 = 0;
    piStack_40 = (int *)0x0;
    iStack_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    uStack_2c = 0;
    uStack_e0 = 0x61e41a;
    piStack_94 = piStack_a0;
    puStack_60 = puStack_64;
    piStack_58 = piStack_5c;
    func_0x0046bc40();
    iStack_8 = CONCAT31(iStack_8._1_3_,0x11);
    uStack_e0 = 0;
    piStack_e4 = aiStack_c4;
    ppuStack_e8 = (undefined1 **)&piStack_40;
    puStack_ec = auStack_9c;
    uStack_f0 = 0x61e43c;
    FUN_005e5070();
    piStack_20 = piStack_98;
    if (piStack_98 != (int *)0x0) {
      LOCK();
      iVar5 = piStack_98[1] + -1;
      piStack_98[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piStack_98;
        uStack_e0 = 0x61e461;
        _guard_check_icall();
        uStack_e0 = 0x61e466;
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_20 + 2;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar2 = *(code **)(*piStack_20 + 4);
          uStack_e0 = 0x61e47e;
          _guard_check_icall();
          uStack_e0 = 0x61e483;
          (*pcVar2)();
        }
      }
    }
    iStack_8._0_1_ = 0x10;
    if (0xf < uStack_2c) {
      uStack_e0 = uStack_2c;
      piStack_e4 = piStack_40;
      ppuStack_e8 = (undefined1 **)&piStack_40;
      puStack_ec = (undefined1 *)0x61e49c;
      func_0x0046b1f0();
    }
    uStack_30 = 0;
    uStack_2c = 0xf;
    piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
    iStack_8._0_1_ = 1;
    if (piStack_a0 != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_a0 + 0x10);
      uStack_e0 = CONCAT31((int3)((uint)aiStack_c4 >> 8),piStack_a0 != aiStack_c4);
      piStack_e4 = (int *)0x61e4d8;
      _guard_check_icall();
      piStack_e4 = (int *)0x61e4dc;
      (*pcVar2)();
      piStack_a0 = (int *)0x0;
    }
    uStack_28 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    uStack_e0 = 0x61e503;
    func_0x0061e900();
  }
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    uStack_e0 = in_stack_00000018;
    piStack_e4 = param_2;
    ppuStack_e8 = (undefined1 **)&param_2;
    puStack_ec = (undefined1 *)0x61e71a;
    func_0x0046b1f0();
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (int *)((uint)param_2 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  puStack_d4 = (undefined4 *)0x61e746;
  FUN_008ab370();
  return;
}



undefined4 Catch_0061e85f(void)

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
  func_0x0046bc40("Can\'t do map screenshot: ",0x19);
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
  return 0x61e83c;
}



TypeDescriptor * FUN_0061ea50(void)

{
  return &`public:_void___thiscall_FrameBuffer::doScreenshot(class_std::basic_string<>)'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0061ea60(int param_1)

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
  puStack_c = &DAT_00ed899d;
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



undefined4 * __fastcall FUN_0061ea70(int param_1)

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



void __thiscall FUN_0061eb30(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed8a80;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0061e900(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0061eb90(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0061eba0(int param_1)

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
  pcVar1 = *(code **)(param_1 + 8);
  func_0x00469da0(param_1 + 0x10);
  uStack_8 = 0xffffffff;
  _guard_check_icall();
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __fastcall FUN_0061ec10(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed8ae3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  uStack_8 = 0;
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  puVar3[3] = *(undefined4 *)(param_1 + 0xc);
  puVar3[2] = uVar1;
  func_0x00469da0(param_1 + 0x10);
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



undefined4 * __thiscall FUN_0061f010(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  return param_1;
}



void __fastcall FUN_0061f040(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed8d58;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x005cfb40(uVar2);
  uVar1 = param_1[8];
  param_1[8] = 0;
  func_0x008ab812(uVar1,8);
  uStack_8 = 0xffffffff;
  if (0xf < (uint)param_1[5]) {
    func_0x0046b1f0(param_1,*param_1,param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * __fastcall FUN_0061fb50(int param_1)

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
  
  puStack_c = &DAT_00ed8f63;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0xa0);
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



TypeDescriptor * FUN_006209e0(void)

{
  return &`public:___thiscall_HardwareBuffer::~HardwareBuffer(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_006209f0(int param_1)

{
  func_0x0087ef60(1,param_1 + 4);
  return;
}



void __thiscall FUN_00620a00(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



undefined * Catch_00620be6(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x44) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar2)();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x0046bc40("unable to load image \'%s\': %s",0x1d);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar3 = func_0x004852c0(iVar1 + 8,unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005ee340(3,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(unaff_EBP + -0x38,*(undefined4 *)(unaff_EBP + -0x38),
                    *(uint *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return &DAT_00620c8f;
}



undefined4 * __fastcall FUN_00623040(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed97c3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  func_0x00623df0(uVar1);
  func_0x00623df0();
  func_0x00623df0();
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_006243f0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed991b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    func_0x00485920(*(int *)(param_1 + 0x15c),uVar1);
    func_0x0046e710(*(int *)(param_1 + 0x15c),
                    *(int *)(param_1 + 0x164) - *(int *)(param_1 + 0x15c) >> 3);
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x00627040();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x16c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_006244b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_TransformMatrix");
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_ProjectionMatrix");
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_TextureMatrix");
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Color");
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Depth");
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Time");
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Tex0");
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Tex1");
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Tex2");
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Tex3");
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Atlas");
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Fonts");
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Resolution");
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Offset");
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_Center");
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x0087f0b0(*(undefined4 *)(param_1 + 0x2c),"u_WalkOffset");
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  func_0x0087f1e0(*(undefined4 *)(param_1 + 0x44),1,0,param_1 + 0xcc);
  func_0x0087f1e0(*(undefined4 *)(param_1 + 0x3c),1,0,param_1 + 0xf0);
  func_0x0087f1e0(*(undefined4 *)(param_1 + 0x40),1,0,param_1 + 0x114);
  if (*(char *)(param_1 + 0x168) == '\0') {
    func_0x0087f1a0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0xb8),
                    *(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0),
                    *(undefined4 *)(param_1 + 0xc4));
  }
  func_0x0087f140(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x158));
  func_0x0087f140(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 200));
  func_0x0087f160(*(undefined4 *)(param_1 + 0x58),0);
  func_0x0087f160(*(undefined4 *)(param_1 + 0x5c),1);
  func_0x0087f160(*(undefined4 *)(param_1 + 0x60),2);
  func_0x0087f160(*(undefined4 *)(param_1 + 100),3);
  func_0x0087f160(*(undefined4 *)(param_1 + 0x68),6);
  func_0x0087f160(*(undefined4 *)(param_1 + 0x6c),7);
  func_0x0087f170(*(undefined4 *)(param_1 + 0x70),(float)*(int *)(param_1 + 0x138),
                  (float)*(int *)(param_1 + 0x13c));
  func_0x0087f170(*(undefined4 *)(param_1 + 0x74),(float)*(int *)(param_1 + 0x140),
                  (float)*(int *)(param_1 + 0x144));
  func_0x0087f170(*(undefined4 *)(param_1 + 0x78),(float)*(int *)(param_1 + 0x150),
                  (float)*(int *)(param_1 + 0x154));
  func_0x0087f170(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x148),
                  *(undefined4 *)(param_1 + 0x14c));
  return;
}



undefined1 __fastcall FUN_00624720(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined4 uVar7;
  undefined4 ****ppppuVar8;
  int *unaff_FS_OFFSET;
  uint auStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 ***apppuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed9987;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iStack_48 = DAT_0145db30;
  param_1[0x2d] = DAT_0145db30;
  func_0x0087ee40(param_1[0xb],0,"a_Vertex",uVar3);
  func_0x0087ee40(param_1[0xb],1,"a_TexCoord");
  func_0x0087ee40(param_1[0xb],2,"a_Depth");
  func_0x0087ee40(param_1[0xb],3,"a_Color");
  func_0x0087ee40(param_1[0xb],4,"a_DepthTexCoord");
  cVar2 = FUN_00627820();
  if (cVar2 == '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if (DAT_0145cebc != param_1[0xb]) {
    if ((char)param_1[10] == '\0') {
      pcVar1 = *(code **)(*param_1 + 4);
      _guard_check_icall();
      (*pcVar1)();
    }
    func_0x0087f200(param_1[0xb]);
    DAT_0145cebc = param_1[0xb];
  }
  pcVar1 = *(code **)(*param_1 + 8);
  _guard_check_icall();
  (*pcVar1)();
  if (DAT_0145cebc != 0) {
    DAT_0145cebc = 0;
    func_0x0087f200(0);
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x0046bc40("C:\\Git\\otcv8_source\\src\\framework\\graphics\\paintershaderprogram.cpp",0x43);
  iStack_8 = 1;
  func_0x00469da0(param_1 + 4);
  uStack_14 = 1;
  uStack_1c = 0;
  pppuStack_2c = (undefined4 ****)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("%s (%s)",7);
  iStack_8._0_1_ = 3;
  ppppuVar6 = &pppuStack_2c;
  if (0xf < uStack_18) {
    ppppuVar6 = (undefined4 ****)pppuStack_2c;
  }
  iVar4 = func_0x006252e0(ppppuVar6,auStack_78,auStack_78);
  iVar5 = iVar4 + 1;
  if (SCARRY4(iVar4,1)) {
    iVar5 = -1;
  }
  func_0x00469c80(iVar5,0);
  uStack_14 = 3;
  ppppuVar6 = &pppuStack_2c;
  if (0xf < uStack_18) {
    ppppuVar6 = (undefined4 ****)pppuStack_2c;
  }
  ppppuVar8 = apppuStack_44;
  if (0xf < uStack_30) {
    ppppuVar8 = (undefined4 ****)apppuStack_44[0];
  }
  uVar7 = func_0x006252e0(ppppuVar6,ppppuVar8,auStack_78);
  func_0x004698c0(uVar7,0);
  func_0x00620660(apppuStack_44,&uStack_60,0x65);
  uStack_14 = 1;
  iStack_8._0_1_ = 2;
  if (0xf < uStack_30) {
    func_0x0046b1f0(apppuStack_44,apppuStack_44[0],uStack_30);
  }
  uStack_34 = 0;
  uStack_30 = 0xf;
  apppuStack_44[0] = (undefined4 ***)((uint)apppuStack_44[0] & 0xffffff00);
  iStack_8._0_1_ = 1;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&pppuStack_2c,pppuStack_2c,uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
  uStack_14 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_64) {
    func_0x0046b1f0(auStack_78,auStack_78[0],uStack_64);
  }
  uStack_68 = 0;
  uStack_64 = 0xf;
  auStack_78[0] = auStack_78[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(&uStack_60,uStack_60,uStack_4c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void __thiscall FUN_00625010(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  uint auStack_3c [7];
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed99e6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  auStack_3c[6] = param_1;
  if (3 < (uint)(*(int *)(param_1 + 0x160) - *(int *)(param_1 + 0x15c) >> 3)) {
    iStack_8 = 0;
    func_0x00469da0(param_1 + 0x10,uStack_14);
    uStack_20 = 1;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("cannot add more multi textures to shader, the max is 3 - %s",0x3b);
    iStack_8._0_1_ = 1;
    uVar6 = func_0x00484eb0(auStack_54);
    iStack_8._0_1_ = 2;
    FUN_005ee340(3,uVar6);
    iStack_8._0_1_ = 1;
    if (0xf < uStack_58) {
      func_0x0046b1f0(auStack_6c,auStack_6c[0],uStack_58);
    }
    uStack_5c = 0;
    uStack_58 = 0xf;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    uStack_20 = 0;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_40) {
      func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
    }
    uStack_44 = 0;
    uStack_40 = 0xf;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
  }
  uStack_1c = 0;
  func_0x0062b230(&uStack_1c,param_2);
  iStack_8 = 3;
  if ((int *)uStack_1c != (int *)0x0) {
    pcVar2 = *(code **)(*(int *)uStack_1c + 0x10);
    _guard_check_icall(1);
    (*pcVar2)();
    pcVar2 = *(code **)(*(int *)uStack_1c + 0x14);
    _guard_check_icall(1);
    (*pcVar2)();
    puVar3 = *(undefined4 **)(auStack_3c[6] + 0x160);
    if (puVar3 == *(undefined4 **)(auStack_3c[6] + 0x164)) {
      func_0x00488a10(puVar3,&uStack_1c);
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
        UNLOCK();
      }
      *puVar3 = (int *)uStack_1c;
      puVar3[1] = uStack_1c._4_4_;
      *(int *)(auStack_3c[6] + 0x160) = *(int *)(auStack_3c[6] + 0x160) + 8;
    }
  }
  iStack_8 = 0xffffffff;
  piVar5 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
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
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006257c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int aiStack_cc [9];
  int *piStack_a8;
  undefined1 auStack_a4 [24];
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  undefined1 auStack_54 [4];
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [7];
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ed9cf8;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  piStack_48 = (int *)param_1;
  iStack_8 = 1;
  puVar5 = &param_2;
  if (0xf < param_6._4_4_) {
    puVar5 = param_2;
  }
  if ((int)param_6 == 0) {
LAB_0062582d:
    auStack_28[4] = 0;
    auStack_28[5] = 0;
    auStack_28[0] = 0;
    auStack_28[1] = 0;
    auStack_28[2] = 0;
    auStack_28[3] = 0;
    func_0x0046bc40(&DAT_011451fc,4);
    iStack_8._0_1_ = 2;
    puVar5 = (undefined4 *)FUN_005fe700(auStack_40,&param_2,auStack_28);
    iStack_8._0_1_ = 3;
    if (&param_2 != (undefined4 **)puVar5) {
      if (0xf < param_6._4_4_) {
        uVar7 = param_6._4_4_ + 1;
        puVar8 = param_2;
        if (0xfff < uVar7) {
          puVar8 = (undefined4 *)param_2[-1];
          uVar7 = param_6._4_4_ + 0x24;
          if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(puVar8,uVar7);
      }
      param_2 = (undefined4 *)*puVar5;
      param_3 = puVar5[1];
      param_4 = puVar5[2];
      param_5 = puVar5[3];
      param_6 = *(undefined8 *)(puVar5 + 4);
      puVar5[4] = 0;
      puVar5[5] = 0xf;
      *(undefined1 *)puVar5 = 0;
    }
    iStack_8._0_1_ = 2;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
    }
    uStack_30 = 0;
    uStack_2c = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    iStack_8._0_1_ = 1;
    if (0xf < auStack_28[5]) {
      func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
    }
    auStack_28[4] = 0;
    auStack_28[5] = 0xf;
    auStack_28[0] = auStack_28[0] & 0xffffff00;
    puVar5 = (undefined4 *)func_0x00611cf0(auStack_40,&param_2);
    iStack_8._0_1_ = 4;
    if (&param_2 != (undefined4 **)puVar5) {
      if (0xf < param_6._4_4_) {
        uVar7 = param_6._4_4_ + 1;
        puVar8 = param_2;
        if (0xfff < uVar7) {
          puVar8 = (undefined4 *)param_2[-1];
          uVar7 = param_6._4_4_ + 0x24;
          if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(puVar8,uVar7);
      }
      param_2 = (undefined4 *)*puVar5;
      param_3 = puVar5[1];
      param_4 = puVar5[2];
      param_5 = puVar5[3];
      param_6 = *(undefined8 *)(puVar5 + 4);
      puVar5[4] = 0;
      puVar5[5] = 0xf;
      *(undefined1 *)puVar5 = 0;
    }
    iStack_8 = CONCAT31(iStack_8._1_3_,1);
    if (0xf < uStack_2c) {
      func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
    }
    uStack_30 = 0;
    uStack_2c = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
  }
  else {
    iVar1 = (int)param_6 + (int)puVar5;
    iVar4 = func_0x00e727d0(puVar5,iVar1,&DAT_0113d23c,1,uVar3);
    if ((iVar4 == iVar1) || (iVar4 - (int)puVar5 == -1)) goto LAB_0062582d;
  }
  puVar5 = &param_7;
  if (0xf < param_11._4_4_) {
    puVar5 = param_7;
  }
  if ((int)param_11 != 0) {
    iVar1 = (int)param_11 + (int)puVar5;
    iVar4 = func_0x00e727d0(puVar5,iVar1,&DAT_0113d23c,1,uVar3);
    if ((iVar4 != iVar1) && (iVar4 - (int)puVar5 != -1)) goto LAB_00625be6;
  }
  auStack_28[4] = 0;
  auStack_28[5] = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  func_0x0046bc40(&DAT_011451fc,4);
  iStack_8._0_1_ = 5;
  puVar5 = (undefined4 *)FUN_005fe700(auStack_40,&param_7,auStack_28);
  iStack_8._0_1_ = 6;
  if (&param_7 != (undefined4 **)puVar5) {
    if (0xf < param_11._4_4_) {
      uVar3 = param_11._4_4_ + 1;
      puVar8 = param_7;
      if (0xfff < uVar3) {
        puVar8 = (undefined4 *)param_7[-1];
        uVar3 = param_11._4_4_ + 0x24;
        if (0x1f < (uint)((int)param_7 + (-4 - (int)puVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(puVar8,uVar3);
    }
    param_7 = (undefined4 *)*puVar5;
    param_8 = puVar5[1];
    param_9 = puVar5[2];
    param_10 = puVar5[3];
    param_11 = *(undefined8 *)(puVar5 + 4);
    puVar5[4] = 0;
    puVar5[5] = 0xf;
    *(undefined1 *)puVar5 = 0;
  }
  iStack_8._0_1_ = 5;
  if (0xf < uStack_2c) {
    func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
  }
  uStack_30 = 0;
  uStack_2c = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  iStack_8._0_1_ = 1;
  if (0xf < auStack_28[5]) {
    func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
  }
  auStack_28[4] = 0;
  auStack_28[5] = 0xf;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  puVar5 = (undefined4 *)func_0x00611cf0(auStack_40,&param_7);
  iStack_8._0_1_ = 7;
  if (&param_7 != (undefined4 **)puVar5) {
    if (0xf < param_11._4_4_) {
      uVar3 = param_11._4_4_ + 1;
      puVar8 = param_7;
      if (0xfff < uVar3) {
        puVar8 = (undefined4 *)param_7[-1];
        uVar3 = param_11._4_4_ + 0x24;
        if (0x1f < (uint)((int)param_7 + (-4 - (int)puVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(puVar8,uVar3);
    }
    param_7 = (undefined4 *)*puVar5;
    param_8 = puVar5[1];
    param_9 = puVar5[2];
    param_10 = puVar5[3];
    param_11 = *(undefined8 *)(puVar5 + 4);
    puVar5[4] = 0;
    puVar5[5] = 0xf;
    *(undefined1 *)puVar5 = 0;
  }
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  if (0xf < uStack_2c) {
    func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
  }
  uStack_30 = 0;
  uStack_2c = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
LAB_00625be6:
  func_0x00469da0(piStack_48);
  iStack_8._0_1_ = 8;
  func_0x00469da0(&param_2);
  iStack_8._0_1_ = 9;
  func_0x00469da0(&param_7);
  uStack_5c = param_12;
  iStack_58 = (int)piStack_44;
  piStack_a8 = (int *)0x0;
  iStack_8._0_1_ = 0xc;
  piVar6 = (int *)func_0x008ab47d(0x54);
  iStack_8._0_1_ = 0xd;
  piStack_4c = piVar6 + 1;
  *piVar6 = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_48 = piVar6;
  piStack_44 = piVar6;
  func_0x00469da0(auStack_a4);
  piVar6[7] = 0;
  piVar6[8] = 0;
  piVar6[9] = 0;
  piVar6[10] = 0;
  piVar6[0xb] = 0;
  piVar6[0xc] = 0;
  piVar6[7] = uStack_8c;
  piVar6[8] = iStack_88;
  piVar6[9] = iStack_84;
  piVar6[10] = iStack_80;
  *(ulonglong *)(piVar6 + 0xb) = CONCAT44(uStack_78,uStack_7c);
  uStack_7c = 0;
  uStack_78 = 0xf;
  uStack_8c = uStack_8c & 0xffffff00;
  piVar6[0xd] = 0;
  piVar6[0xe] = 0;
  piVar6[0xf] = 0;
  piVar6[0x10] = 0;
  piVar6[0x11] = 0;
  piVar6[0x12] = 0;
  piVar6[0xd] = uStack_74;
  piVar6[0xe] = iStack_70;
  piVar6[0xf] = iStack_6c;
  piVar6[0x10] = iStack_68;
  *(ulonglong *)(piVar6 + 0x11) = CONCAT44(uStack_60,uStack_64);
  uStack_64 = 0;
  uStack_60 = 0xf;
  uStack_74 = uStack_74 & 0xffffff00;
  *(undefined1 *)(piVar6 + 0x13) = uStack_5c;
  piVar6[0x14] = iStack_58;
  piStack_44 = (int *)0x0;
  iStack_8._0_1_ = 0x12;
  auStack_28[4] = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[5] = 0;
  piStack_a8 = piVar6;
  func_0x0046bc40("createShader",0xc);
  iStack_8 = CONCAT31(iStack_8._1_3_,0x13);
  FUN_005e5070(auStack_54,auStack_28,aiStack_cc,0);
  if (piStack_50 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_50[1] + -1;
    piStack_50[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar2 = *(code **)*piStack_50;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar1 = piStack_50[2] + -1;
      piStack_50[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)(*piStack_50 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8._0_1_ = 0x12;
  if (0xf < auStack_28[5]) {
    func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
  }
  auStack_28[4] = 0;
  auStack_28[5] = 0xf;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  iStack_8._0_1_ = 0xb;
  if (piStack_a8 != (int *)0x0) {
    pcVar2 = *(code **)(*piStack_a8 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_cc >> 8),piStack_a8 != aiStack_cc));
    (*pcVar2)();
    piStack_a8 = (int *)0x0;
  }
  iStack_8._0_1_ = 1;
  func_0x00625e80();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < param_6._4_4_) {
    func_0x0046b1f0(&param_2,param_2,param_6._4_4_);
  }
  param_6 = 0xf00000000;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  iStack_8 = 0xffffffff;
  if (0xf < param_11._4_4_) {
    func_0x0046b1f0(&param_7,param_7,param_11._4_4_);
  }
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void FUN_00625f50(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  int iStack_68;
  int aiStack_64 [9];
  int *piStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  uint auStack_2c [6];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed9dc9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00469da0(param_1,uVar3);
  uStack_8 = 0;
  func_0x00469da0(param_2);
  piStack_40 = (int *)0x0;
  uStack_8._0_1_ = 3;
  uStack_8._1_3_ = 0;
  piVar4 = (int *)func_0x008ab47d(0x38);
  uStack_8._0_1_ = 4;
  piStack_34 = piVar4 + 1;
  *piVar4 = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_30 = piVar4;
  piStack_14 = piVar4;
  func_0x00469da0(auStack_98);
  uStack_8._0_1_ = 5;
  func_0x00469da0(auStack_80);
  piVar4[0xd] = iStack_68;
  piStack_14 = (int *)0x0;
  uStack_8._0_1_ = 8;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_2c[5] = 0;
  piStack_40 = piVar4;
  func_0x0046bc40("addTexture",10);
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  FUN_005e5070(auStack_3c,auStack_2c,aiStack_64,0);
  if (piStack_38 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_38[1] + -1;
    piStack_38[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_38;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piStack_38[2] + -1;
      piStack_38[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piStack_38 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8._0_1_ = 8;
  if (0xf < auStack_2c[5]) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (piStack_40 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_40 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_64 >> 8),piStack_40 != aiStack_64));
    (*pcVar1)();
    piStack_40 = (int *)0x0;
  }
  uStack_8 = 0xffffffff;
  func_0x004ea6a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00626ad0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed9f40;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x004ea6a0(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00626b30(void)

{
  return &`public:_void___thiscall_ShaderManager::addTexture(class_std::basic_string<>_const&,class_std::basic_string<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00626b40(int param_1)

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
  func_0x00626120(&uStack_1c,param_1 + 4,uStack_14);
  uStack_8 = 0;
  if ((int)uStack_1c != 0) {
    FUN_00625010(param_1 + 0x1c);
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



undefined4 * __fastcall FUN_00626c00(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed9f8b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x38,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00469da0(param_1 + 0x1c);
  puVar2[0xd] = *(undefined4 *)(param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



void __thiscall FUN_00626ca0(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed9fc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00625e80(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x54);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00626d00(void)

{
  return &`public:_void___thiscall_ShaderManager::createShader(class_std::basic_string<>_const&,class_std::basic_string<>,class_std::basic_string<>,bool)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



// WARNING: Removing unreachable block (ram,0x00626d90)
// WARNING: Removing unreachable block (ram,0x00626d70)
// WARNING: Removing unreachable block (ram,0x00626d97)
// WARNING: Removing unreachable block (ram,0x00626dbc)
// WARNING: Removing unreachable block (ram,0x00626dc5)
// WARNING: Removing unreachable block (ram,0x00626dde)
// WARNING: Removing unreachable block (ram,0x00626dfd)
// WARNING: Removing unreachable block (ram,0x00626e06)
// WARNING: Removing unreachable block (ram,0x00626e1e)

void __fastcall FUN_00626d10(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec0455;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00627120(param_1 + 0x1c,param_1 + 0x34,*(undefined1 *)(param_1 + 0x4c),uVar1);
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00626e50(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eda016;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(0x54,uVar1);
  uStack_8 = 0;
  *puVar2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4);
  uStack_8._0_1_ = 1;
  func_0x00469da0(param_1 + 0x1c);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00469da0(param_1 + 0x34);
  *(undefined1 *)(puVar2 + 0x13) = *(undefined1 *)(param_1 + 0x4c);
  puVar2[0x14] = *(undefined4 *)(param_1 + 0x50);
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 __thiscall FUN_00626f50(int param_1,undefined4 param_2)

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
  func_0x00469da0(param_1 + 0x38,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_00626fb0(int param_1,undefined4 param_2)

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
  func_0x00469da0(param_1 + 0x50,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_00627010(undefined4 param_1,byte param_2)

{
  func_0x00627040();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb4);
  }
  return param_1;
}



void __fastcall FUN_00627820(undefined4 ****param_1)

{
  code *pcVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 ****ppppuVar7;
  int *unaff_FS_OFFSET;
  uint auStack_f8 [4];
  undefined4 uStack_e8;
  uint uStack_e4;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint auStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_b0 [4];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint auStack_98 [4];
  undefined4 uStack_88;
  uint uStack_84;
  uint auStack_80 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 ***pppuStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 ***pppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 *puStack_38;
  undefined8 *puStack_34;
  undefined4 ***pppuStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eda2b9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_2c = 0;
  pppuStack_30 = param_1;
  if (*(char *)(param_1 + 10) == '\0') {
    func_0x0087f0e0(param_1[0xb],uStack_14);
    uStack_28 = 0;
    func_0x0087f070(param_1[0xb],0x8b82,&uStack_28);
    *(bool *)(param_1 + 10) = uStack_28 != 0;
    if (uStack_28 != 0) goto LAB_00627daa;
    uStack_24 = uStack_28;
    func_0x0087f070(param_1[0xb],0x8b84,&uStack_24);
    uVar6 = uStack_24;
    uStack_20 = 0;
    iStack_18 = 0;
    if (uStack_24 != 0) {
      if (0x7fffffff < uStack_24) {
        func_0x0046e700();
LAB_00627dca:
        func_0x00463420();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uStack_24 < 0x1000) {
        _Dst = (void *)func_0x008ab47d(uStack_24);
      }
      else {
        if (uStack_24 + 0x23 <= uStack_24) goto LAB_00627dca;
        iVar2 = func_0x008ab47d(uStack_24 + 0x23);
        if (iVar2 == 0) goto LAB_00627d7f;
        _Dst = (void *)(iVar2 + 0x23U & 0xffffffe0);
        *(int *)((int)_Dst - 4) = iVar2;
      }
      uStack_20 = CONCAT44(_Dst,_Dst);
      iStack_18 = (int)_Dst + uVar6;
      puStack_34 = &uStack_20;
      uStack_8 = 0;
      memset(_Dst,0,uVar6);
      uStack_20 = CONCAT44((int)_Dst + uVar6,(int)uStack_20);
      puStack_34 = (undefined8 *)0x0;
      param_1 = (undefined4 ****)pppuStack_30;
    }
    uStack_8 = 1;
    ppppuVar7 = param_1 + 0xb;
    func_0x0087f060(*ppppuVar7,uStack_24,&uStack_24,(int)uStack_20);
    uStack_8._0_1_ = 2;
    func_0x00469da0(&DAT_012bc048);
    uStack_2c = 1;
    uStack_8._0_1_ = 3;
    func_0x00469da0(&DAT_012bc030);
    uStack_2c = 3;
    uStack_8._0_1_ = 4;
    func_0x00469da0(&DAT_012bc018);
    uStack_2c = 7;
    puStack_38 = (undefined4 *)func_0x00627e10(auStack_f8);
    uStack_8._0_1_ = 5;
    if (0xf < (uint)puStack_38[5]) {
      puStack_38 = (undefined4 *)*puStack_38;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    pppuStack_68 = (undefined4 ****)0x0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    if ((int)uStack_20 == uStack_20._4_4_) {
      uStack_58 = 0;
      uStack_54 = 0xf;
      pppuStack_68 = (undefined4 ****)0x0;
    }
    else {
      func_0x0046bc40((int)uStack_20,uStack_20._4_4_ - (int)uStack_20);
    }
    pppuStack_30 = &pppuStack_68;
    if (0xf < uStack_54) {
      pppuStack_30 = pppuStack_68;
    }
    puStack_34 = (undefined8 *)(uStack_20._4_4_ - (int)uStack_20);
    uStack_8._0_1_ = 7;
    func_0x00469da0(param_1 + 4);
    uStack_2c = 0xf;
    uStack_40 = 0;
    pppuStack_50 = (undefined4 ****)0x0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    func_0x0046bc40("Program %i, %s linking error (%i): %s - %s - %s %s\nExtensions: %s",0x41);
    uStack_8._0_1_ = 9;
    ppppuVar4 = &pppuStack_50;
    if (0xf < uStack_3c) {
      ppppuVar4 = (undefined4 ****)pppuStack_50;
    }
    iVar2 = func_0x00628670(ppppuVar4,ppppuVar7,auStack_98,&puStack_34,&pppuStack_30,&puStack_38,
                            auStack_b0,auStack_c8,auStack_e0);
    iVar3 = iVar2 + 1;
    if (SCARRY4(iVar2,1)) {
      iVar3 = -1;
    }
    func_0x00469c80(iVar3,0);
    uStack_2c = 0x1f;
    ppppuVar4 = &pppuStack_50;
    if (0xf < uStack_3c) {
      ppppuVar4 = (undefined4 ****)pppuStack_50;
    }
    uVar5 = func_0x00628670(ppppuVar4,ppppuVar7,auStack_98,&puStack_34,&pppuStack_30,&puStack_38,
                            auStack_b0,auStack_c8,auStack_e0);
    func_0x004698c0(uVar5,0);
    FUN_005ee340(3,auStack_80);
    uStack_2c = 0xf;
    uStack_8._0_1_ = 8;
    if (0xf < uStack_6c) {
      func_0x0046b1f0(auStack_80,auStack_80[0],uStack_6c);
    }
    uStack_70 = 0;
    uStack_6c = 0xf;
    auStack_80[0] = auStack_80[0] & 0xffffff00;
    uStack_8._0_1_ = 7;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&pppuStack_50,pppuStack_50,uStack_3c);
    }
    uStack_40 = 0;
    uStack_3c = 0xf;
    pppuStack_50 = (undefined4 ***)((uint)pppuStack_50 & 0xffffff00);
    uStack_2c = 7;
    uStack_8._0_1_ = 6;
    if (0xf < uStack_84) {
      func_0x0046b1f0(auStack_98,auStack_98[0],uStack_84);
    }
    uStack_88 = 0;
    uStack_84 = 0xf;
    auStack_98[0] = auStack_98[0] & 0xffffff00;
    uStack_8._0_1_ = 5;
    if (0xf < uStack_54) {
      uVar6 = uStack_54 + 1;
      ppppuVar7 = (undefined4 ****)pppuStack_68;
      if (0xfff < uVar6) {
        ppppuVar7 = (undefined4 ****)pppuStack_68[-1];
        uVar6 = uStack_54 + 0x24;
        if (0x1f < (uint)((int)pppuStack_68 + (-4 - (int)ppppuVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(ppppuVar7,uVar6);
    }
    uStack_58 = 0;
    uStack_54 = 0xf;
    pppuStack_68 = (undefined4 ***)((uint)pppuStack_68 & 0xffffff00);
    uStack_8._0_1_ = 4;
    if (0xf < uStack_e4) {
      func_0x0046b1f0(auStack_f8,auStack_f8[0],uStack_e4);
    }
    uStack_e8 = 0;
    uStack_e4 = 0xf;
    auStack_f8[0] = auStack_f8[0] & 0xffffff00;
    uStack_2c = 3;
    uStack_8._0_1_ = 3;
    if (0xf < uStack_9c) {
      func_0x0046b1f0(auStack_b0,auStack_b0[0],uStack_9c);
    }
    uStack_a0 = 0;
    uStack_9c = 0xf;
    auStack_b0[0] = auStack_b0[0] & 0xffffff00;
    uStack_2c = 1;
    uStack_8._0_1_ = 2;
    if (0xf < uStack_b4) {
      func_0x0046b1f0(auStack_c8,auStack_c8[0],uStack_b4);
    }
    uStack_b8 = 0;
    uStack_b4 = 0xf;
    auStack_c8[0] = auStack_c8[0] & 0xffffff00;
    uStack_2c = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < uStack_cc) {
      func_0x0046b1f0(auStack_e0,auStack_e0[0],uStack_cc);
    }
    uStack_d0 = 0;
    uStack_cc = 0xf;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if ((int)uStack_20 != 0) {
      uVar6 = iStack_18 - (int)uStack_20;
      iVar2 = (int)uStack_20;
      if (0xfff < uVar6) {
        iVar2 = *(int *)((int)uStack_20 + -4);
        uVar6 = uVar6 + 0x23;
        if (0x1f < ((int)uStack_20 - iVar2) - 4U) {
LAB_00627d7f:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(iVar2,uVar6);
      uStack_20 = 0;
      iStack_18 = 0;
    }
  }
LAB_00627daa:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __fastcall FUN_006284c0(int param_1)

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
  
  puStack_c = &DAT_00eda3e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  if (DAT_012bc068 != '\0') {
    piVar6 = (int *)func_0x0087ef90(*(undefined4 *)(param_1 + 0x14),uVar5);
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



undefined4 * __thiscall FUN_00628540(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00628570(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x178);
  }
  return param_1;
}



void __fastcall FUN_00628aa0(int *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eda73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00629a80(param_1,*(undefined4 *)(*param_1 + 4),uVar1);
  func_0x008ab812(*param_1,0x20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * __fastcall FUN_006299b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eda98d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = func_0x008ab47d(0x20,uVar1);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  *param_1 = iVar2;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



uint __fastcall FUN_00629bc0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eda87e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  func_0x00618eb0(uVar8);
  iStack_8._0_1_ = 1;
  piVar5 = *(int **)(param_1 + 0x40);
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
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  uVar8 = *(uint *)(param_1 + 0x2c);
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if (0xf < uVar8) {
    uVar8 = func_0x0046b1f0(puVar1,*puVar1,uVar8);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar2 = (uint *)(piVar5 + 1);
    uVar4 = *puVar2;
    uVar8 = *puVar2;
    *puVar2 = uVar4 - 1;
    UNLOCK();
    if (uVar4 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar8 = (*pcVar6)();
      LOCK();
      piVar3 = piVar5 + 2;
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar8 = (*pcVar6)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



undefined4 * __thiscall FUN_00629bd0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x60);
  }
  return param_1;
}



undefined4 __thiscall FUN_00629eb0(undefined4 param_1,byte param_2)

{
  func_0x0062a0f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



void __thiscall FUN_0062a320(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_5c;
  int iStack_58;
  undefined ***pppuStack_38;
  uint auStack_34 [6];
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edac2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(int *)(param_1 + 0x14) = DAT_012bbf30;
  DAT_012bbf30 = DAT_012bbf30 + 1;
  if (*(int *)(param_1 + 0x10) != 0) {
    pppuStack_38 = &ppuStack_5c;
    ppuStack_5c = std::_Func_impl_no_alloc<>::vftable;
    uStack_8 = 1;
    auStack_34[4] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    auStack_34[5] = 0;
    iStack_58 = *(int *)(param_1 + 0x10);
    func_0x0046bc40("Texture::replace",0x10,uVar3);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    FUN_005e5070(auStack_1c,auStack_34,&ppuStack_5c,0);
    piStack_14 = piStack_18;
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
    if (0xf < auStack_34[5]) {
      func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
    }
    auStack_34[4] = 0;
    auStack_34[5] = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (pppuStack_38 != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_38)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_5c >> 8),pppuStack_38 != &ppuStack_5c));
      (*pcVar1)();
      pppuStack_38 = (undefined ***)0x0;
    }
  }
  if (*param_2 == 0) {
    auStack_34[4] = 0;
    auStack_34[5] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    func_0x0046bc40("Texture can\'t be replaced with null image!",0x2a,uVar3);
    uStack_8 = 4;
    FUN_005ee340(4,auStack_34);
    uStack_8 = 0xffffffff;
    if (0xf < auStack_34[5]) {
      func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
    }
    auStack_34[4] = 0;
    auStack_34[5] = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x004683d0(param_2);
  func_0x0062a900(*(int *)(param_1 + 0x54) + 0x14);
  *(undefined1 *)(param_1 + 0x51) = 1;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0062a520(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  uint auStack_4c [13];
  int *piStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edac7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x10) == 0) {
    func_0x0087f030(1,(undefined4 *)(param_1 + 0x10),uVar5);
    func_0x0087ee70(0xde1,*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x54) == 0) {
      func_0x0087f120(0xde1,0,0x1908,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24)
                      ,0,0x1908,0x1401,0);
    }
    else {
      func_0x0062a900(*(int *)(param_1 + 0x54) + 0x14);
      piStack_18 = (int *)0x0;
      do {
        piVar3 = piStack_18;
        iVar1 = *(int *)(param_1 + 0x54);
        piStack_18 = (int *)((int)piStack_18 + 1);
        func_0x0062ab80(piVar3,iVar1 + 0x14,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x1c)
                        ,*(undefined4 *)(iVar1 + 0x1c));
        if (*(char *)(param_1 + 0x50) == '\0') break;
        cVar4 = func_0x00621470();
      } while (cVar4 != '\0');
    }
    auStack_4c[0xc] = 0;
    piStack_18 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(auStack_4c + 0xc);
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = piStack_18[1] + -1;
      piStack_18[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar1 = piStack_18[2] + -1;
        piStack_18[2] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x51) = 1;
    auStack_4c[4] = 0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    auStack_4c[3] = 0;
    auStack_4c[5] = 0;
    func_0x0046bc40("C:\\Git\\otcv8_source\\src\\framework\\graphics\\texture.cpp",0x36);
    uStack_8 = 1;
    auStack_4c[10] = 0;
    auStack_4c[6] = 0;
    auStack_4c[7] = 0;
    auStack_4c[8] = 0;
    auStack_4c[9] = 0;
    auStack_4c[0xb] = 0;
    func_0x0046bc40("Texture::update",0xf);
    uStack_8._0_1_ = 2;
    func_0x00620660(auStack_4c + 6,auStack_4c,0x78);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < auStack_4c[0xb]) {
      func_0x0046b1f0(auStack_4c + 6,auStack_4c[6],auStack_4c[0xb]);
    }
    auStack_4c[10] = 0;
    auStack_4c[0xb] = 0xf;
    auStack_4c[6] = auStack_4c[6] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (0xf < auStack_4c[5]) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
    }
    auStack_4c[4] = 0;
    auStack_4c[5] = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    func_0x0087ee70(0xde1,*(undefined4 *)(param_1 + 0x10));
    uVar7 = 0x812f;
    if (*(char *)(param_1 + 0x4f) != '\0') {
      uVar7 = 0x2901;
    }
    func_0x0087f130(0xde1,0x2802,uVar7);
    func_0x0087f130(0xde1,0x2803,uVar7);
    cStack_11 = *(char *)(param_1 + 0x4d);
    if (cStack_11 == '\0') {
      uVar7 = 0x2600;
      uVar6 = 0x2700;
    }
    else {
      uVar7 = 0x2601;
      uVar6 = 0x2703;
    }
    if (*(char *)(param_1 + 0x4c) != '\0') {
      uVar7 = uVar6;
    }
    func_0x0087f130(0xde1,0x2801,uVar7);
    func_0x0087f130(0xde1,0x2800,(cStack_11 != '\0') + 0x2600);
    func_0x0062aab0();
    *(undefined1 *)(param_1 + 0x51) = 0;
    auStack_4c[10] = 0;
    auStack_4c[6] = 0;
    auStack_4c[7] = 0;
    auStack_4c[8] = 0;
    auStack_4c[9] = 0;
    auStack_4c[0xb] = 0;
    func_0x0046bc40("C:\\Git\\otcv8_source\\src\\framework\\graphics\\texture.cpp",0x36);
    uStack_8 = 3;
    auStack_4c[4] = 0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    auStack_4c[3] = 0;
    auStack_4c[5] = 0;
    func_0x0046bc40("Texture::update",0xf);
    uStack_8._0_1_ = 4;
    func_0x00620660(auStack_4c,auStack_4c + 6,0x81);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    if (0xf < auStack_4c[5]) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
    }
    auStack_4c[4] = 0;
    auStack_4c[5] = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (0xf < auStack_4c[0xb]) {
      func_0x0046b1f0(auStack_4c + 6,auStack_4c[6],auStack_4c[0xb]);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined1 __fastcall FUN_0062a890(int param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return 1;
}



void __thiscall FUN_0062a8a0(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4d)) {
    *(char *)(param_1 + 0x4d) = param_2;
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



void __thiscall FUN_0062a8c0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4f) != param_2) {
    *(char *)(param_1 + 0x4f) = param_2;
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



void __thiscall FUN_0062a8e0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e) != param_2) {
    *(char *)(param_1 + 0x4e) = param_2;
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



TypeDescriptor * FUN_0062ad50(void)

{
  return &`public:_virtual_void___thiscall_Texture::replace(class_std::shared_ptr<>_const&)'::__l5::
          <lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0062ad60(int param_1)

{
  func_0x0087efa0(1,param_1 + 4);
  return;
}



void __thiscall FUN_0062ad70(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_0062ad90(void)

{
  return &`public:_virtual___thiscall_Texture::~Texture(void)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __thiscall FUN_0062ada0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __fastcall FUN_0062af10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = *(int *)(param_1 + 0x20);
  if (iStack_8 != *(int *)(param_1 + 0x24)) {
    puStack_c = (undefined *)0x62af23;
    func_0x00485920();
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  }
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead9d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_14 = param_1;
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x00626370(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)*puVar1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      func_0x00626a20(uVar3);
      func_0x008ab812(puVar1,0x28);
      puVar1 = puVar2;
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_14 = *(int *)(param_1 + 4);
    func_0x0046c050(&iStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0062af40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  void *_Dst;
  size_t _Size;
  code *****pppppcVar5;
  int *unaff_FS_OFFSET;
  __time64_t _Var6;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ****ppppcStack_80;
  undefined4 *puStack_7c;
  code ****ppppcStack_78;
  code ****ppppcStack_74;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  code *pcStack_40;
  int *piStack_3c;
  code ****ppppcStack_38;
  code ****appppcStack_34 [4];
  uint uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edae25;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    uStack_4c = 0;
    ppppcStack_74 = (code ****)&DAT_01143a0c;
    uStack_48 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    ppppcStack_78 = (code ****)0x62afa4;
    func_0x0046bc40();
    uStack_8 = 0;
    ppppcStack_78 = (code ****)&uStack_5c;
    puStack_7c = puVar2 + 2;
    ppppcStack_80 = (code ****)appppcStack_34;
    pppcStack_84 = (code ***)0x62afc1;
    FUN_005fe700();
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    if (0xf < uStack_48) {
      ppppcStack_78 = (code ****)uStack_48;
      puStack_7c = (undefined4 *)uStack_5c;
      ppppcStack_80 = (code ****)&uStack_5c;
      pppcStack_84 = (code ***)0x62afda;
      func_0x0046b1f0();
    }
    pcStack_40 = (code *)&pppcStack_8c;
    uStack_4c = 0;
    uStack_48 = 0xf;
    uStack_5c = uStack_5c & 0xffffff00;
    uStack_1c = 0;
    pppcStack_8c = (code ***)0x0;
    pppcStack_88 = (code ***)0x0;
    pppcStack_84 = (code ***)0x0;
    ppppcStack_80 = (code ****)0x0;
    puStack_7c = (undefined4 *)0x0;
    ppppcStack_78 = (code ****)0x0;
    ppppcStack_38 = (code ****)appppcStack_34;
    if (0xf < uStack_20) {
      ppppcStack_38 = appppcStack_34[0];
    }
    uStack_44 = uStack_24;
    if (0x7fffffff < uStack_24) break;
    if (uStack_24 < 0x10) {
      puStack_7c = (undefined4 *)uStack_24;
      ppppcStack_78 = (code ****)&DAT_0000000f;
      pppcStack_8c = *ppppcStack_38;
      pppcStack_88 = (code ***)((code *****)ppppcStack_38)[1];
      pppcStack_84 = (code ***)((code *****)ppppcStack_38)[2];
      ppppcStack_80 = ((code *****)ppppcStack_38)[3];
      pcStack_40 = (code *)&pppcStack_8c;
    }
    else {
      piStack_3c = (int *)(uStack_24 | 0xf);
      if (piStack_3c < (int *)0x80000000) {
        if (piStack_3c < (int *)0x16) {
          piStack_3c = (int *)0x16;
        }
      }
      else {
        piStack_3c = (int *)0x7fffffff;
      }
      pcStack_40 = (code *)&pppcStack_8c;
      _Dst = (void *)func_0x0046c950((int)piStack_3c + 1);
      pcVar3 = pcStack_40;
      *(uint *)(pcStack_40 + 0x10) = uStack_44;
      *(int **)(pcVar3 + 0x14) = piStack_3c;
      _Size = uStack_44 + 1;
      *(void **)pcVar3 = _Dst;
      memcpy(_Dst,ppppcStack_38,_Size);
    }
    uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
    uStack_8._0_1_ = 2;
    func_0x00620af0();
    uStack_8._0_1_ = 4;
    if ((int)uStack_1c == 0) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      piStack_3c = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar4 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          ppppcStack_38 = *(code *****)*uStack_1c._4_4_;
          _guard_check_icall();
          (*(code *)ppppcStack_38)();
          LOCK();
          iVar4 = piStack_3c[2] + -1;
          piStack_3c[2] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            ppppcStack_38 = *(code *****)(*piStack_3c + 4);
            _guard_check_icall();
            (*(code *)ppppcStack_38)();
          }
        }
      }
      uStack_8 = 0xffffffff;
      if (0xf < uStack_20) {
        ppppcStack_74 = appppcStack_34[0];
        ppppcStack_78 = (code ****)appppcStack_34;
        puStack_7c = (undefined4 *)0x62b11e;
        func_0x0046b1f0();
      }
    }
    else {
      ppppcStack_38 = (code ****)puVar2[8];
      pcStack_40 = *(code **)((int)*ppppcStack_38 + 4);
      ppppcStack_74 = (code ****)0x62b140;
      _guard_check_icall();
      ppppcStack_74 = (code ****)0x62b146;
      (*pcStack_40)();
      ppppcStack_38 = (code ****)puVar2[8];
      ppppcStack_74 = (code ****)0x62b154;
      _Var6 = _time64((__time64_t *)0x0);
      *(__time64_t *)(ppppcStack_38 + 6) = _Var6;
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      piStack_3c = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar4 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          ppppcStack_38 = *(code *****)*uStack_1c._4_4_;
          _guard_check_icall();
          (*(code *)ppppcStack_38)();
          LOCK();
          iVar4 = piStack_3c[2] + -1;
          piStack_3c[2] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            ppppcStack_38 = *(code *****)(*piStack_3c + 4);
            _guard_check_icall();
            (*(code *)ppppcStack_38)();
          }
        }
      }
      uStack_8 = 0xffffffff;
      if (0xf < uStack_20) {
        pppppcVar5 = (code *****)appppcStack_34[0];
        if ((0xfff < uStack_20 + 1) &&
           (pppppcVar5 = (code *****)appppcStack_34[0][-1],
           (undefined *)0x1f < (undefined *)((int)appppcStack_34[0] + (-4 - (int)pppppcVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        ppppcStack_78 = (code ****)0x62b1e4;
        ppppcStack_74 = (code ****)pppppcVar5;
        func_0x008ab812();
      }
    }
    puVar2 = (undefined4 *)*puVar2;
    uStack_24 = 0;
    uStack_20 = 0xf;
    appppcStack_34[0] = (code ****)((uint)appppcStack_34[0] & 0xffffff00);
  }
  func_0x00463570();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



undefined * Catch_0062b46d(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x144) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x140) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  *(undefined4 *)(unaff_EBP + -0x138) = 0;
  *(undefined4 *)(unaff_EBP + -0x134) = 0;
  *(undefined4 *)(unaff_EBP + -0x130) = 0;
  *(undefined4 *)(unaff_EBP + -300) = 0;
  func_0x0046bc40("Unable to load texture \'%s\': %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0x114),unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00469ba0();
  *(undefined4 *)(unaff_EBP + -0x11c) = 0;
  *(undefined4 *)(unaff_EBP + -0x118) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  func_0x0046ffa0(unaff_EBP + -0x11c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int *)(unaff_EBP + -0x118) != 0) {
    func_0x00463fb0();
  }
  return &DAT_0062b545;
}



undefined4 * __thiscall FUN_0062c3b0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0062c910(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::logic_error::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



char * FUN_0062c990(int param_1,char *param_2,int param_3)

{
  char *_Source;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_3 == 0) {
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  if (param_3 == 1) {
    *param_2 = '\0';
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  _Source = strerror(param_1);
  if (_Source == (char *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return "Unknown error";
  }
  strncpy(param_2,_Source,param_3 - 1);
  param_2[param_3 + -1] = '\0';
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * FUN_0062ca50(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb217;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  pcVar3 = strerror(param_2);
  pcVar4 = "Unknown error";
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1),uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0062ccc0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb298;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00e75356(param_1 + 3,uVar1);
  uStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0062cd40(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb298;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00e75356(param_1 + 3,uVar1);
  uStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



char * FUN_0062cdb0(void)

{
  return "multiple exceptions";
}



char * FUN_0062cee0(void)

{
  return "bad executor";
}



undefined4 * __thiscall FUN_0062d340(undefined4 *param_1,byte param_2)

{
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



// Library Function - Single Match
//  protected: virtual void * __thiscall MemMapBase::`scalar deleting destructor'(unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 * __thiscall ___GMemMapBase__MAEPAXI_Z(undefined4 *param_1,byte param_2)

{
  *param_1 = boost::asio::detail::win_thread::func_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 FUN_0062d830(int *param_1)

{
  code *pcVar1;
  HANDLE hEvent;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edb46d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  SetEvent((HANDLE)param_1[1]);
  pcVar1 = *(code **)(*param_1 + 4);
  _guard_check_icall(uVar2);
  (*pcVar1)();
  hEvent = (HANDLE)param_1[2];
  pcVar1 = *(code **)*param_1;
  _guard_check_icall(1);
  (*pcVar1)();
  SetEvent(hEvent);
  SleepEx(0xffffffff,1);
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_0062d910(undefined4 *param_1,byte param_2)

{
  *param_1 = boost::asio::detail::timer_queue_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0062dc30(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edb597;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::asio::detail::win_iocp_io_context::vftable;
  iStack_8 = 6;
  if (param_1[0x18] != 0) {
    func_0x0062e210(uVar2);
    func_0x004665b0();
    iVar1 = param_1[0x18];
    if (iVar1 != 0) {
      CloseHandle(*(HANDLE *)(iVar1 + 4));
      func_0x008ab812(iVar1,0xc);
    }
    param_1[0x18] = 0;
  }
  iStack_8._0_1_ = 5;
  iVar1 = param_1[0x18];
  if (iVar1 != 0) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
    func_0x008ab812(iVar1,0xc);
  }
  iStack_8._0_1_ = 4;
  func_0x004694a0();
  iStack_8._0_1_ = 3;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  iStack_8._0_1_ = 2;
  if ((HANDLE)param_1[0xc] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xc]);
  }
  iStack_8._0_1_ = 1;
  iVar1 = param_1[0xb];
  if (iVar1 != 0) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
    func_0x008ab812(iVar1,0xc);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if ((HANDLE)param_1[5] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[5]);
  }
  iStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,100);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0062dda0(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  LPOVERLAPPED p_Stack_28;
  ulong uStack_24;
  DWORD DStack_20;
  LARGE_INTEGER LStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edb5fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  LOCK();
  *(undefined4 *)(param_1 + 0x24) = 1;
  UNLOCK();
  uStack_14 = uVar3;
  if (*(int *)(param_1 + 0x2c) != 0) {
    LStack_1c.QuadPart = 4.94065645841247e-324;
    SetWaitableTimer(*(HANDLE *)(param_1 + 0x30),&LStack_1c,1,(PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x0062e210(uVar3);
    func_0x004665b0();
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 != 0) {
      CloseHandle(*(HANDLE *)(iVar1 + 4));
      func_0x008ab812(iVar1,0xc);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  piVar6 = (int *)(param_1 + 0x18);
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6;
  UNLOCK();
  while (0 < iVar1) {
    LStack_1c.QuadPart = 0.0;
    uStack_8 = 0;
    for (piVar6 = *(int **)(param_1 + 0x50); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      pcVar2 = *(code **)(*piVar6 + 0x14);
      _guard_check_icall(&LStack_1c);
      (*pcVar2)();
    }
    piVar6 = (int *)(param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 0x54);
    uVar5 = LStack_1c.s.LowPart;
    if (uVar4 != 0) {
      if (LStack_1c.s.HighPart == 0) {
        LStack_1c.s.HighPart = 0;
        LStack_1c.s.LowPart = uVar4;
      }
      else {
        *(undefined4 *)(LStack_1c.s.HighPart + 0x14) = uVar4;
        uVar4 = LStack_1c.s.LowPart;
      }
      LStack_1c.s.HighPart = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar5 = uVar4;
    }
    if (uVar5 == 0) {
      DStack_20 = 0;
      uStack_24 = 0;
      p_Stack_28 = (LPOVERLAPPED)0x0;
      GetQueuedCompletionStatus
                (*(HANDLE *)(param_1 + 0x14),&DStack_20,&uStack_24,&p_Stack_28,
                 *(DWORD *)(param_1 + 0x28));
      if (p_Stack_28 != (LPOVERLAPPED)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        pcVar2 = (code *)p_Stack_28[1].InternalHigh;
        uStack_40 = 0;
        uStack_38 = 0;
        _guard_check_icall(0,p_Stack_28,&uStack_40,0);
        (*pcVar2)();
      }
    }
    else {
      do {
        if (uVar5 != 0) {
          p_Stack_28 = (LPOVERLAPPED)0x0;
          if (*(int *)(uVar5 + 0x14) == 0) {
            LStack_1c.s.HighPart = 0;
          }
          LStack_1c.s.LowPart = *(int *)(uVar5 + 0x14);
          *(undefined4 *)(uVar5 + 0x14) = 0;
        }
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        pcVar2 = *(code **)(uVar5 + 0x18);
        uStack_2c = 0;
        uStack_34 = 0;
        _guard_check_icall(0,uVar5,&uStack_34,0);
        (*pcVar2)();
        uVar5 = LStack_1c.s.LowPart;
      } while (LStack_1c.s.LowPart != 0);
    }
    uStack_8 = 0xffffffff;
    uVar4 = LStack_1c.s.LowPart;
    while (uVar4 != 0) {
      DStack_20 = 0;
      if (*(int *)(uVar4 + 0x14) == 0) {
        LStack_1c.s.HighPart = 0;
      }
      LStack_1c.s.LowPart = *(int *)(uVar4 + 0x14);
      *(undefined4 *)(uVar4 + 0x14) = 0;
      pcVar2 = *(code **)(uVar4 + 0x18);
      uStack_4c = 0;
      uStack_44 = 0;
      _guard_check_icall(0,uVar4,&uStack_4c,0);
      (*pcVar2)();
      uVar4 = LStack_1c.s.LowPart;
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x004665b0();
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 != 0) {
      CloseHandle(*(HANDLE *)(iVar1 + 4));
      func_0x008ab812(iVar1,0xc);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



char * FUN_0062fa50(void)

{
  return "beast.http";
}



char * FUN_0062fab0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "end of stream";
  case 2:
    return "partial message";
  case 3:
    return "need more";
  case 4:
    return "unexpected body";
  case 5:
    return "need buffer";
  case 6:
    return "end of chunk";
  case 7:
    return "buffer overflow";
  case 8:
    return "header limit exceeded";
  case 9:
    return "body limit exceeded";
  case 10:
    return "bad alloc";
  case 0xb:
    return "bad line ending";
  case 0xc:
    return "bad method";
  case 0xd:
    return "bad target";
  case 0xe:
    return "bad version";
  case 0xf:
    return "bad status";
  case 0x10:
    return "bad reason";
  case 0x11:
    return "bad field";
  case 0x12:
    return "bad value";
  case 0x13:
    return "bad Content-Length";
  case 0x14:
    return "bad Transfer-Encoding";
  case 0x15:
    return "bad chunk";
  case 0x16:
    return "bad chunk extension";
  case 0x17:
    return "bad obs-fold";
  case 0x18:
    return "multiple Content-Length";
  case 0x19:
    return "stale parser";
  case 0x1a:
    return "unexpected eof in body";
  default:
    return "beast.http error";
  }
}



undefined4 * __thiscall FUN_0062fc30(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabc2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar2 = *(code **)(*param_1 + 0x10);
  _guard_check_icall(param_3,0,0,uVar3);
  pcVar4 = (char *)(*pcVar2)();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



uint __thiscall FUN_0062fcd0(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_3;
  if (uVar1 == param_2) {
    uVar1 = param_3[1];
    uVar2 = 0x12bc2a0;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    if (uVar2 == param_1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}



uint __thiscall FUN_0062fd00(undefined **param_1,int *param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = param_2[2];
  if (iVar1 == 1) {
    ppuVar2 = (undefined **)(((uint)param_2[1] % 0x1ffff7) * 1000 + *param_2);
  }
  else {
    ppuVar2 = (undefined **)*param_2;
  }
  if (ppuVar2 == param_3) {
    if (iVar1 == 0) {
      ppuVar2 = &PTR_vftable_012bbee0;
    }
    else {
      ppuVar2 = &PTR_vftable_012bbeb8;
      if (iVar1 != 1) {
        ppuVar2 = (undefined **)param_2[1];
      }
    }
    if (ppuVar2 == param_1) {
      return CONCAT31((int3)((uint)ppuVar2 >> 8),1);
    }
  }
  return (uint)ppuVar2 & 0xffffff00;
}



int __thiscall FUN_00630bf0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint auStack_84 [4];
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 auStack_60 [5];
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [12];
  uint uStack_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  uint uStack_20;
  uint *puStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc190;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 5;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 4) = iVar1 + 1;
  func_0x00469da0(param_2,uVar2);
  uStack_8 = 1;
  iStack_48 = iVar3;
  iStack_44 = iVar1;
  iStack_40 = param_1;
  iVar3 = func_0x0062ee00(auStack_2c);
  uStack_30 = *(uint *)(iVar3 + 4);
  uStack_20 = uStack_30 | 1;
  uStack_8 = 5;
  uStack_14 = 2;
  func_0x0063ae80(auStack_3c,auStack_24);
  uStack_8._0_1_ = 8;
  puStack_18 = auStack_84;
  func_0x00469da0(auStack_60);
  iStack_6c = iStack_48;
  iStack_68 = iStack_44;
  iStack_64 = iStack_40;
  uStack_8._0_1_ = 8;
  uStack_14 = 10;
  func_0x0063af50(auStack_84);
  uStack_14 = 2;
  puStack_1c = auStack_84;
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  if (0xf < uStack_70) {
    func_0x0046b1f0(auStack_84,auStack_84[0],uStack_70);
  }
  uStack_74 = 0;
  uStack_70 = 0xf;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar1;
}



int __thiscall
FUN_006313b0(int param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_ec [12];
  uint uStack_e0;
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [48];
  int iStack_a4;
  undefined1 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 auStack_94 [24];
  undefined1 auStack_7c [24];
  int iStack_64;
  undefined1 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [4];
  uint uStack_50;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc3a1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iVar4 = 5;
  if (param_4 != 0) {
    iVar4 = param_4;
  }
  puStack_18 = (undefined1 *)param_1;
  if (*(int *)(param_3 + 0x10) == 0) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    func_0x0046bc40("Invalid post request for %s, empty data, use get instead",0x38);
    iStack_8 = 0;
    uVar3 = func_0x00484eb0(param_2);
    iStack_8._0_1_ = 1;
    FUN_005ee340(3,uVar3);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_3c = 0;
    uStack_38 = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_20) {
      func_0x0046b1f0(&uStack_34,uStack_34,uStack_20);
    }
    *unaff_FS_OFFSET = iStack_10;
    return -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  iStack_1c = iVar1;
  func_0x00469da0(param_2,uVar2);
  iStack_8 = 2;
  func_0x00469da0(param_3);
  uStack_60 = param_5;
  iStack_58 = (int)puStack_18;
  iStack_8 = 4;
  iStack_64 = iVar4;
  iStack_5c = iVar1;
  iVar4 = func_0x0062ee00(auStack_dc);
  uStack_e0 = *(uint *)(iVar4 + 4);
  uStack_50 = uStack_e0 | 1;
  iStack_8 = 8;
  uStack_14 = 2;
  func_0x0063ae80(auStack_ec,auStack_54);
  iStack_8._0_1_ = 0xb;
  puStack_18 = auStack_d4;
  func_0x00469da0(auStack_94);
  iStack_8._0_1_ = 0xc;
  func_0x00469da0(auStack_7c);
  iStack_a4 = iStack_64;
  uStack_a0 = uStack_60;
  iStack_9c = iStack_5c;
  iStack_98 = iStack_58;
  iStack_8._0_1_ = 0xb;
  uStack_14 = 10;
  func_0x0063b150(auStack_d4);
  uStack_14 = 2;
  iStack_8 = CONCAT31(iStack_8._1_3_,10);
  func_0x004ea6a0();
  uStack_14 = 0;
  iStack_8 = 0xffffffff;
  func_0x004ea6a0();
  *unaff_FS_OFFSET = iStack_10;
  return iStack_1c;
}



int __thiscall FUN_00631c60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_00000020;
  undefined1 auStack_ac [60];
  undefined1 auStack_70 [48];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [12];
  uint uStack_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  uint uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edc4c1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iStack_8 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 5;
  if (in_stack_00000020 != 0) {
    iVar3 = in_stack_00000020;
  }
  *(int *)(param_1 + 4) = iVar1 + 1;
  func_0x00469da0(param_2,uVar2);
  iStack_8._0_1_ = 1;
  func_0x00469da0(&param_3);
  iStack_8 = CONCAT31(iStack_8._1_3_,3);
  iStack_40 = iVar3;
  iStack_3c = iVar1;
  iStack_38 = param_1;
  iVar3 = func_0x0062ee00(auStack_24);
  uStack_28 = *(uint *)(iVar3 + 4);
  uStack_18 = uStack_28 | 1;
  iStack_8 = 7;
  uStack_14 = 2;
  func_0x0063ae80(auStack_34,auStack_1c);
  iStack_8._0_1_ = 10;
  func_0x0063c450(auStack_70);
  iStack_8._0_1_ = 10;
  uStack_14 = 10;
  func_0x0063b360(auStack_ac);
  uStack_14 = 2;
  iStack_8._0_1_ = 9;
  func_0x004ea6a0();
  uStack_14 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x004ea6a0();
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_0000001c) {
    func_0x0046b1f0(&param_3,param_3,in_stack_0000001c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar1;
}



int __thiscall FUN_00632830(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint auStack_84 [4];
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 auStack_60 [5];
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [12];
  uint uStack_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  uint uStack_20;
  uint *puStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc190;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 5;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 4) = iVar1 + 1;
  func_0x00469da0(param_2,uVar2);
  uStack_8 = 1;
  iStack_48 = iVar3;
  iStack_44 = iVar1;
  iStack_40 = param_1;
  iVar3 = func_0x0062ee00(auStack_2c);
  uStack_30 = *(uint *)(iVar3 + 4);
  uStack_20 = uStack_30 | 1;
  uStack_8 = 5;
  uStack_14 = 2;
  func_0x0063ae80(auStack_3c,auStack_24);
  uStack_8._0_1_ = 8;
  puStack_18 = auStack_84;
  func_0x00469da0(auStack_60);
  iStack_6c = iStack_48;
  iStack_68 = iStack_44;
  iStack_64 = iStack_40;
  uStack_8._0_1_ = 8;
  uStack_14 = 10;
  func_0x0063b530(auStack_84);
  uStack_14 = 2;
  puStack_1c = auStack_84;
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  if (0xf < uStack_70) {
    func_0x0046b1f0(auStack_84,auStack_84[0],uStack_70);
  }
  uStack_74 = 0;
  uStack_70 = 0xf;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  uStack_14 = 0;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar1;
}



undefined4 FUN_00633250(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 auStack_78 [4];
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 auStack_38 [12];
  uint uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edc973;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iStack_8 = 0;
  uStack_58 = param_1;
  func_0x00469da0(&param_2,uVar1);
  iStack_8 = CONCAT31((int3)((uint)iStack_8 >> 8),2);
  iVar2 = func_0x0062ee00(auStack_28);
  uStack_2c = *(uint *)(iVar2 + 4);
  uStack_1c = uStack_2c | 1;
  iStack_8 = 6;
  uStack_14 = 2;
  func_0x0063ae80(auStack_38,auStack_20);
  iStack_8._0_1_ = 9;
  func_0x0063c3c0(&uStack_58);
  iStack_8._0_1_ = 9;
  uStack_14 = 10;
  func_0x0063b730(auStack_78);
  uStack_14 = 2;
  puStack_18 = auStack_78;
  iStack_8._0_1_ = 8;
  if (0xf < uStack_60) {
    func_0x0046b1f0(auStack_74,auStack_74[0],uStack_60);
  }
  uStack_64 = 0;
  uStack_60 = 0xf;
  auStack_74[0] = auStack_74[0] & 0xffffff00;
  uStack_14 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_40) {
    func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
  }
  uStack_44 = 0;
  uStack_40 = 0xf;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_0000001c) {
    func_0x0046b1f0(&param_2,param_2,in_stack_0000001c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined1 FUN_006333e0(undefined4 param_1)

{
  FUN_00633400(param_1);
  return 1;
}



undefined4 FUN_00633400(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_3c [12];
  uint uStack_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  uint uStack_20;
  undefined4 auStack_1c [2];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc9ef;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  iVar2 = func_0x0062ee00(auStack_2c,uVar1);
  uStack_30 = *(uint *)(iVar2 + 4);
  uStack_20 = uStack_30 | 1;
  uStack_8 = 3;
  uStack_14 = 2;
  func_0x0063ae80(auStack_3c,auStack_24);
  uStack_8 = CONCAT31(uStack_8._1_3_,5);
  auStack_1c[0] = param_1;
  func_0x0063b8e0(auStack_1c);
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void FUN_006337e0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



void __thiscall
FUN_00633800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_20;
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    uStack_18 = param_4;
    uStack_14 = param_5;
    uStack_20 = param_2;
    uStack_1c = param_3;
    pcVar1 = *(code **)(**(int **)(param_1 + 0xec) + 8);
    _guard_check_icall(&uStack_20,&uStack_18);
    (*pcVar1)();
    FUN_008ab370();
    return;
  }
  uStack_20 = param_4;
  uStack_1c = param_5;
  func_0x006360b0(&uStack_20,param_6);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_006338a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    uStack_10 = param_4;
    uStack_c = param_5;
    uStack_18 = param_2;
    uStack_14 = param_3;
    pcVar1 = *(code **)(**(int **)(param_1 + 0xc4) + 8);
    _guard_check_icall(&uStack_18,&uStack_10,param_6);
    (*pcVar1)();
  }
  FUN_008ab370();
  return;
}



void FUN_00633910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  func_0x006360b0(&uStack_10,param_3);
  return;
}



void __thiscall FUN_00633940(int param_1,undefined4 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  return;
}



void FUN_00633960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x006353c0(param_1,&stack0x00000010,param_2,param_3);
  return;
}



void __thiscall
FUN_00633990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined8 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x9d) != '\0') {
    puVar1 = (undefined8 *)func_0x0062fd60();
    uVar2 = *(uint *)(puVar1 + 1);
    if ((uVar2 != 0) && (uVar2 != 1)) {
      uVar2 = uVar2 & 1 | 0x1146678;
    }
    *param_6 = *puVar1;
    *(uint *)(param_6 + 1) = uVar2;
    return;
  }
  *(undefined1 *)(param_1 + 0x9d) = 1;
  func_0x00635590(param_2);
  *(undefined4 *)(param_1 + 0x70) = param_5;
  func_0x00638680(param_1 + 0x68,param_3,param_4);
  return;
}



void FUN_00633a20(void)

{
  return;
}



void __thiscall FUN_00633a30(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    if (param_2 != 0) {
      LOCK();
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c) = 0;
      UNLOCK();
    }
  }
  else if (param_2 == 0) {
    func_0x0062e210();
    func_0x004665b0();
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 != 0) {
      CloseHandle(*(HANDLE *)(iVar1 + 4));
      func_0x008ab812(iVar1,0xc);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  return;
}



void __fastcall FUN_00633a90(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x30) + 0x18);
    iVar3 = *piVar1 + -1;
    *piVar1 = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      func_0x0062e210();
    }
    func_0x0062e210();
    if (*(int *)(param_1 + 0x34) != 0) {
      func_0x004665b0();
      iVar3 = *(int *)(param_1 + 0x34);
      if (iVar3 != 0) {
        CloseHandle(*(HANDLE *)(iVar3 + 4));
        func_0x008ab812(iVar3,0xc);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      pcVar2 = *(code **)**(undefined4 **)(param_1 + 0x30);
      _guard_check_icall(1);
      (*pcVar2)();
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



void __fastcall FUN_00633b40(int param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edb76d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uStack_8 = 0;
  for (iVar1 = *(int *)(param_1 + 0x40); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    func_0x0062f760(iVar1,uVar2);
  }
  uStack_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00633f40(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  while (piVar1 != (int *)0x0) {
    *(int *)(param_1 + 8) = piVar1[3];
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_2[1] == 0) {
        *param_2 = iVar2;
      }
      else {
        *(int *)(param_2[1] + 0x14) = iVar2;
      }
      param_2[1] = piVar1[1];
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1 = *(int **)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
  }
  return;
}



void __thiscall FUN_00633fb0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uStack_18;
  int iStack_14;
  int iStack_c;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    func_0x0046ede0(&uStack_18);
    puVar4 = *(uint **)(param_1 + 0xc);
    if (puVar4 != *(uint **)(param_1 + 0x10)) {
      iStack_c = iStack_14;
      do {
        if (iStack_c < (int)puVar4[1]) {
          return;
        }
        if ((iStack_c <= (int)puVar4[1]) && (uStack_18 < *puVar4)) {
          return;
        }
        piVar1 = (int *)puVar4[2];
        iVar2 = *piVar1;
        while (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0x14);
          *piVar1 = iVar3;
          if (iVar3 == 0) {
            piVar1[1] = 0;
          }
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined8 *)(iVar2 + 0x20) = 0;
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          if (param_2[1] == 0) {
            *param_2 = iVar2;
          }
          else {
            *(int *)(param_2[1] + 0x14) = iVar2;
          }
          param_2[1] = iVar2;
          iVar2 = *piVar1;
        }
        func_0x006347b0(piVar1);
        puVar4 = *(uint **)(param_1 + 0xc);
      } while (puVar4 != *(uint **)(param_1 + 0x10));
    }
  }
  return;
}



uint __thiscall FUN_00634080(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_18 [20];
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return param_2;
  }
  func_0x0046ede0(auStack_18);
  piVar1 = (int *)func_0x00634980(auStack_18);
  iVar2 = piVar1[1];
  if ((iVar2 < 1) && ((iVar2 < 0 || (*piVar1 == 0)))) {
    return 0;
  }
  lVar3 = func_0x00e87ec0(*piVar1,iVar2,1000,0);
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 == 0) {
    return 1;
  }
  if ((iVar2 < (int)param_2 >> 0x1f) ||
     ((iVar2 <= (int)param_2 >> 0x1f && ((uint)lVar3 <= param_2)))) {
    param_2 = (uint)lVar3;
  }
  return param_2;
}



uint __thiscall FUN_00634120(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_18 [20];
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return param_2;
  }
  func_0x0046ede0(auStack_18);
  piVar1 = (int *)func_0x00634980(auStack_18);
  iVar2 = piVar1[1];
  if ((iVar2 < 1) && ((iVar2 < 0 || (*piVar1 == 0)))) {
    return 0;
  }
  lVar3 = func_0x00e87ec0(*piVar1,iVar2,1000000,0);
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 == 0) {
    return 1;
  }
  if ((iVar2 < (int)param_2 >> 0x1f) ||
     ((iVar2 <= (int)param_2 >> 0x1f && ((uint)lVar3 <= param_2)))) {
    param_2 = (uint)lVar3;
  }
  return param_2;
}



bool __fastcall FUN_006341c0(int param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



undefined4 * __thiscall FUN_006343b0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcbe3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::asio::detail::deadline_timer_service<>::vftable;
  uStack_8 = 1;
  func_0x0062ecf0(param_1 + 5,uVar2);
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    func_0x00584760(iVar1,param_1[10] - iVar1 >> 4);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  param_1[5] = boost::asio::detail::timer_queue_base::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00634590(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edccbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00636720(undefined4 *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edd406;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[4] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[5] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[5] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[5] = 0;
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



void __thiscall FUN_006367d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd45b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = std::bad_alloc::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00636880(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edd498;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  uStack_8 = 0;
  *param_1 = boost::asio::multiple_exceptions::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  func_0x00e7522e(param_1 + 3,param_2 + 0xc);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00636910(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd45b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = boost::asio::execution::bad_executor::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_006369c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = boost::asio::execution::bad_executor::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00636a40(undefined4 *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edd4fe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[4] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[5] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[5] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[5] = 0;
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



void __thiscall FUN_00636af0(undefined4 *param_1,int param_2)

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
  *puVar1 = std::logic_error::vftable;
  *puVar1 = boost::asio::invalid_service_owner::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00636bb0(undefined4 *param_1,int param_2)

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
  *param_1 = std::logic_error::vftable;
  *param_1 = boost::asio::invalid_service_owner::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00636c30(undefined4 *param_1,int param_2)

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
  *puVar1 = std::logic_error::vftable;
  *puVar1 = boost::asio::service_already_exists::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00636cf0(undefined4 *param_1,int param_2)

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
  *param_1 = std::logic_error::vftable;
  *param_1 = boost::asio::service_already_exists::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00636d70(undefined4 *param_1,int param_2)

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
  *param_1 = std::logic_error::vftable;
  *param_1 = std::out_of_range::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00636df0(undefined4 *param_1,int param_2)

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
  *puVar1 = std::logic_error::vftable;
  *puVar1 = std::invalid_argument::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00636eb0(undefined4 *param_1,int param_2)

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
  *param_1 = std::logic_error::vftable;
  *param_1 = std::invalid_argument::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00636f30(undefined4 *param_1,int param_2)

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
  *puVar1 = std::logic_error::vftable;
  *puVar1 = std::length_error::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00636ff0(undefined4 *param_1,int param_2)

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
  *param_1 = std::logic_error::vftable;
  *param_1 = std::length_error::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00637070(undefined4 param_1,byte param_2)

{
  func_0x00630430();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xf0);
  }
  return param_1;
}



int __thiscall FUN_006370a0(int param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd580;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x008ab37e(*(int *)(param_1 + 0x28),uVar1);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_006371a0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edd406;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[4] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[5] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[5] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[5] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  iStack_8 = 0xffffffff;
  *param_1 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00637260(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edd4fe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[4] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[5] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[5] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[5] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  iStack_8 = 0xffffffff;
  *param_1 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_006373a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edd991;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._0_1_ = 0xb;
  iStack_8._1_3_ = 0;
  func_0x006336f0(uVar6);
  iStack_8._0_1_ = 10;
  if (*(int *)(param_1 + 300) != 0) {
    func_0x00638060(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 300));
  }
  iStack_8._0_1_ = 9;
  piVar3 = *(int **)(param_1 + 0x128);
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
  iStack_8._0_1_ = 8;
  piVar3 = *(int **)(param_1 + 0x120);
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
  iStack_8._0_1_ = 7;
  piVar3 = *(int **)(param_1 + 0x118);
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
  iStack_8._0_1_ = 6;
  puVar2 = (undefined4 *)(param_1 + 0xf8);
  if (0xf < *(uint *)(param_1 + 0x10c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x10c));
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8._0_1_ = 5;
  func_0x00634700();
  iStack_8._0_1_ = 4;
  piVar3 = *(int **)(param_1 + 0xa4);
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
  iStack_8._0_1_ = 3;
  piVar3 = *(int **)(param_1 + 0x9c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar3 >> 8),piVar3 != (int *)(param_1 + 0x78)));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  iStack_8._0_1_ = 2;
  func_0x006345f0();
  iStack_8._0_1_ = 1;
  puVar2 = (undefined4 *)(param_1 + 0x34);
  if (0xf < *(uint *)(param_1 + 0x48)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  if (0xf < *(uint *)(param_1 + 0x30)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_006373b0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eddabd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0xc;
  func_0x00630430(uVar6);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  puVar1 = (undefined4 *)(param_1 + 0x1c8);
  iStack_8._0_1_ = 0xe;
  if (0xf < *(uint *)(param_1 + 0x1dc)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x1dc));
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 0xb;
  func_0x006352d0();
  iStack_8._0_1_ = 10;
  if (*(int *)(param_1 + 0x180) != 0) {
    func_0x00638060(*(int *)(param_1 + 400) - *(int *)(param_1 + 0x180));
  }
  iStack_8._0_1_ = 9;
  piVar3 = *(int **)(param_1 + 0x17c);
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
  iStack_8._0_1_ = 8;
  piVar3 = *(int **)(param_1 + 0x174);
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
  iStack_8._0_1_ = 7;
  puVar1 = (undefined4 *)(param_1 + 0x158);
  if (0xf < *(uint *)(param_1 + 0x16c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x16c));
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 6;
  func_0x00634700();
  iStack_8._0_1_ = 5;
  piVar3 = *(int **)(param_1 + 0x104);
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
  iStack_8._0_1_ = 4;
  piVar3 = *(int **)(param_1 + 0xfc);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)*piVar3 >> 8),piVar3 != (int *)(param_1 + 0xd8)));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  iStack_8._0_1_ = 3;
  func_0x006345f0();
  iStack_8._0_1_ = 2;
  func_0x00634c70();
  iStack_8._0_1_ = 1;
  puVar1 = (undefined4 *)(param_1 + 0x34);
  if (0xf < *(uint *)(param_1 + 0x48)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if (0xf < *(uint *)(param_1 + 0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 2;
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      (*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_006373c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edd649;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  iStack_8 = 3;
  piVar3 = *(int **)(param_1 + 0x7c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[2] + -1;
    piVar3[2] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall(uVar6);
      (*pcVar4)();
    }
  }
  iStack_8._0_1_ = 2;
  puVar2 = (undefined4 *)(param_1 + 0x60);
  if (0xf < *(uint *)(param_1 + 0x74)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x74));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8._0_1_ = 1;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 != 0) {
    func_0x0046aa00(iVar5,*(int *)(param_1 + 0x5c) - iVar5);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  if (0xf < *(uint *)(param_1 + 0x50)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xf;
  *(undefined1 *)puVar2 = 0;
  iStack_8 = 0xffffffff;
  if (0xf < *(uint *)(param_1 + 0x20)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_006374e0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_00636f30(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288948);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00637510(undefined4 param_1)

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
  uVar2 = FUN_00636f30(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_006376b0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_00636df0(param_1);
  func_0x00e87d2e(auStack_30,&DAT_012889c8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_006376e0(undefined4 param_1)

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
  uVar2 = FUN_00636df0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_00637880(int param_1)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  
  piVar2 = (int *)(*(int *)(param_1 + 0xc) + 0x24);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  while (iVar1 == 0) {
    DVar3 = WaitForSingleObject(*(HANDLE *)(*(int *)(param_1 + 0xc) + 0x30),0xffffffff);
    if (DVar3 == 0) {
      LOCK();
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x34) = 1;
      UNLOCK();
      PostQueuedCompletionStatus(*(HANDLE *)(*(int *)(param_1 + 0xc) + 0x14),0,1,(LPOVERLAPPED)0x0);
    }
    piVar2 = (int *)(*(int *)(param_1 + 0xc) + 0x24);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
  }
  return;
}



void FUN_006378e0(void)

{
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_10 = 0;
  func_0x0062e050(&uStack_10);
  return;
}



void __fastcall FUN_00637910(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_00636c30(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288a30);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00637940(undefined4 param_1)

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
  uVar2 = FUN_00636c30(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_00637ac0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_00636af0(param_1);
  func_0x00e87d2e(auStack_30,&DAT_012889f4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00637af0(undefined4 param_1)

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
  uVar2 = FUN_00636af0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_00637c70(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_00636910(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288a04);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00637ca0(undefined4 param_1)

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
  uVar2 = FUN_00636910(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_00637e20(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_006367d0(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288848);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_00637e50(undefined4 param_1)

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
  uVar2 = FUN_006367d0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



undefined4 * __thiscall FUN_00638130(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x158);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00638160(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2d0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00638190(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



undefined4 * __thiscall FUN_006381c0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd7ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::detail::win_thread::func_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * __fastcall Catch_0063951e(undefined4 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  func_0x00635550(7,param_1);
  uVar2 = *(uint *)(unaff_EBP + -0x40);
  if ((uVar2 != 0) && (uVar2 != 1)) {
    uVar2 = uVar2 & 1 | 0x1146688;
  }
  puVar1 = *(undefined8 **)(unaff_EBP + -0x38);
  *puVar1 = *(undefined8 *)(unaff_EBP + -0x48);
  *(uint *)(puVar1 + 1) = uVar2;
  return &DAT_00639553;
}



void FUN_00639590(void)

{
  code *pcVar1;
  
  func_0x0063a900();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_006395a0(void)

{
  code *pcVar1;
  
  func_0x0063a910();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00639b30(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eddaf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006331a0(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00639b90(void)

{
  return &`public:___thiscall_`public:___thiscall_`public:_int___thiscall_Http::ws(class_std::basic_string<>_const&,int)'::`2'::<lambda_1>::operator()(void)const_'::`2'::<lambda_1>::operator()(enum_WebsocketCallbackType,class_std::basic_string<>)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00639ba0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  uint auStack_40 [13];
  undefined *puStack_c;
  uint uStack_8;
  
  piVar3 = (int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc855;
  auStack_40[0xc] = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_40 + 0xc);
  auStack_40[4] = *(uint *)(param_1 + 0xc);
  if (auStack_40[4] == 0) {
    iVar1 = *piVar3;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[5] = auStack_40[4];
    func_0x0046bc40("onWsOpen",8,uVar2);
    uStack_8 = 0;
    auStack_40[10] = 0;
    auStack_40[6] = 0;
    auStack_40[7] = 0;
    auStack_40[8] = 0;
    auStack_40[9] = 0;
    auStack_40[0xb] = 0;
    func_0x0046bc40("g_http",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uVar2 = func_0x0049c640(auStack_40 + 6,auStack_40,iVar1 + 0x18,param_1 + 0x10);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
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
    *unaff_FS_OFFSET = auStack_40[0xc];
    return;
  }
  if (auStack_40[4] == 1) {
    iVar1 = *piVar3;
    auStack_40[10] = 0;
    auStack_40[0xb] = 0;
    auStack_40[6] = 0;
    auStack_40[7] = 0;
    auStack_40[8] = 0;
    auStack_40[9] = 0;
    func_0x0046bc40("onWsMessage",0xb,uVar2);
    uStack_8 = 2;
    auStack_40[4] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("g_http",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    uVar2 = func_0x0049c640(auStack_40,auStack_40 + 6,iVar1 + 0x18,param_1 + 0x10);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
  }
  else if (auStack_40[4] == 3) {
    iVar1 = *piVar3;
    auStack_40[10] = 0;
    auStack_40[0xb] = 0;
    auStack_40[6] = 0;
    auStack_40[7] = 0;
    auStack_40[8] = 0;
    auStack_40[9] = 0;
    func_0x0046bc40("onWsClose",9,uVar2);
    uStack_8 = 4;
    auStack_40[4] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("g_http",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    uVar2 = func_0x0049c640(auStack_40,auStack_40 + 6,iVar1 + 0x18,param_1 + 0x10);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,4);
  }
  else {
    if (auStack_40[4] != 2) goto LAB_0063318c;
    iVar1 = *piVar3;
    auStack_40[10] = 0;
    auStack_40[0xb] = 0;
    auStack_40[6] = 0;
    auStack_40[7] = 0;
    auStack_40[8] = 0;
    auStack_40[9] = 0;
    func_0x0046bc40("onWsError",9,uVar2);
    uStack_8 = 6;
    auStack_40[4] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("g_http",6);
    uStack_8._0_1_ = 7;
    func_0x00499e70(auStack_40,auStack_40 + 6,iVar1 + 0x18,param_1 + 0x10);
    uStack_8 = CONCAT31(uStack_8._1_3_,6);
  }
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
LAB_0063318c:
  *unaff_FS_OFFSET = auStack_40[0xc];
  return;
}



undefined4 * __fastcall FUN_00639bb0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eddb3b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x28,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 8);
  uStack_8 = 1;
  puVar3[3] = *(undefined4 *)(param_1 + 0xc);
  func_0x00469da0(param_1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



void __thiscall FUN_00639c60(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eddb70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00632750(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00639cc0(void)

{
  return &`public:___thiscall_`public:___thiscall_`public:_int___thiscall_Http::download(class_std::basic_string<>_const&,class_std::basic_string<>,int)'::`2'::<lambda_1>::operator()(void)const_'::`2'::<lambda_1>::operator()(class_std::shared_ptr<>)const_'
          ::__l2::<lambda_2>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00639cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [7];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar7 = (int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc69d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_14 = piVar7;
  if (*(int *)(*piVar7 + 100) == 0) {
    piVar1 = (int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x1c) != 0) {
      piVar6 = piVar1;
      if (0xf < *(uint *)(param_1 + 0x20)) {
        piVar6 = (int *)*piVar1;
      }
      if (*(char *)piVar6 == '/') {
        uVar5 = func_0x00482f60(&uStack_48,1,0xffffffff);
        uStack_8 = 0;
        func_0x00633cf0(uVar5,piVar7);
        func_0x004683d0();
        uStack_8 = 0xffffffff;
        if (0xf < uStack_34) {
          func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
        }
        goto LAB_00632641;
      }
    }
    func_0x00633bc0(piVar1,piVar7,uVar4);
    func_0x004683d0();
  }
LAB_00632641:
  auStack_30[6] = *piVar7;
  iVar2 = auStack_30[6] + 0x54;
  uStack_38 = 0;
  iVar3 = auStack_30[6] + 0x18;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("onDownload",10);
  uStack_8 = 1;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("g_http",6);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uVar4 = func_0x00639140(auStack_30,&uStack_48,iVar3,auStack_30[6],iVar2,piStack_14 + 2,
                          piStack_14 + 8);
  if (0 < (int)uVar4) {
    func_0x00d66d90(DAT_0145e9f0,~uVar4);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (0xf < auStack_30[5]) {
    func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
  }
  auStack_30[4] = 0;
  auStack_30[5] = 0xf;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_34) {
    func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __fastcall FUN_00639ce0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eddbc6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x40,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 8);
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  func_0x00469da0(param_1 + 0xc);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00469da0(param_1 + 0x24);
  puVar3[0xf] = *(undefined4 *)(param_1 + 0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



int __thiscall FUN_00639db0(int param_1,char param_2)

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
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead568;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = param_1 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
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
  if (param_2 != '\0') {
    iVar6 = func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



TypeDescriptor * FUN_00639e60(void)

{
  return &`public:___thiscall_`public:___thiscall_`public:_int___thiscall_Http::download(class_std::basic_string<>_const&,class_std::basic_string<>,int)'::`2'::<lambda_1>::operator()(void)const_'::`2'::<lambda_1>::operator()(class_std::shared_ptr<>)const_'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00639e70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint auStack_30 [7];
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec66e5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_30[6] = *(int *)(param_1 + 4);
  iVar1 = auStack_30[6] + 0x24;
  uStack_38 = 0;
  iVar2 = auStack_30[6] + 0x18;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  iStack_14 = param_1;
  func_0x0046bc40("onDownloadProgress",0x12,uVar3);
  uStack_8 = 0;
  auStack_30[4] = 0;
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  auStack_30[5] = 0;
  func_0x0046bc40("g_http",6);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar3 = func_0x00638e40(auStack_30,&uStack_48,iVar2,auStack_30[6],iVar1,iStack_14 + 0xc);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_30[5]) {
    func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
  }
  auStack_30[4] = 0;
  auStack_30[5] = 0xf;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_34) {
    func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00639fa0(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_0063a030(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0063a0c0(void)

{
  return &`public:___thiscall_`public:___thiscall_`public:_int___thiscall_Http::post(class_std::basic_string<>_const&,class_std::basic_string<>_const&,int,bool)'::`2'::<lambda_1>::operator()(void)const_'::`2'::<lambda_1>::operator()(class_std::shared_ptr<>)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0063a0d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_5c [19];
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc29d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_5c[0x12] = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0xc) == '\0') {
    auStack_5c[10] = 0;
    iVar1 = auStack_5c[0x12] + 0x24;
    auStack_5c[0xb] = 0;
    iVar3 = auStack_5c[0x12] + 0x18;
    auStack_5c[6] = 0;
    auStack_5c[7] = 0;
    auStack_5c[8] = 0;
    auStack_5c[9] = 0;
    func_0x0046bc40("onPostProgress",0xe);
    uStack_8 = 0;
    auStack_5c[0x10] = 0;
    auStack_5c[0xc] = 0;
    auStack_5c[0xd] = 0;
    auStack_5c[0xe] = 0;
    auStack_5c[0xf] = 0;
    auStack_5c[0x11] = 0;
    func_0x0046bc40("g_http",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uVar2 = func_0x00638880(auStack_5c + 0xc,auStack_5c + 6,iVar3,auStack_5c[0x12],iVar1);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < auStack_5c[0x11]) {
      func_0x0046b1f0(auStack_5c + 0xc,auStack_5c[0xc],auStack_5c[0x11]);
    }
    auStack_5c[0x10] = 0;
    auStack_5c[0x11] = 0xf;
    auStack_5c[0xc] = auStack_5c[0xc] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (0xf < auStack_5c[0xb]) {
      func_0x0046b1f0(auStack_5c + 6,auStack_5c[6],auStack_5c[0xb]);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = *(int *)(auStack_5c[0x12] + 0x48);
  auStack_5c[0x10] = 0;
  auStack_5c[0x11] = 0;
  auStack_5c[0xc] = 0;
  auStack_5c[0xd] = 0;
  auStack_5c[0xe] = 0;
  auStack_5c[0xf] = 0;
  if (iVar1 == *(int *)(auStack_5c[0x12] + 0x4c)) {
    auStack_5c[0x10] = 0;
    auStack_5c[0x11] = 0xf;
    auStack_5c[0xc] = 0;
  }
  else {
    iVar3 = *(int *)(auStack_5c[0x12] + 0x4c) - iVar1;
    func_0x005e73c0(iVar1,iVar3,iVar3,uVar2);
  }
  uStack_8 = 2;
  auStack_5c[0x12] = *(int *)(param_1 + 4);
  iVar1 = auStack_5c[0x12] + 0x54;
  auStack_5c[4] = 0;
  iVar3 = auStack_5c[0x12] + 0x18;
  auStack_5c[5] = 0;
  auStack_5c[0] = 0;
  auStack_5c[1] = 0;
  auStack_5c[2] = 0;
  auStack_5c[3] = 0;
  func_0x0046bc40("onPost",6);
  uStack_8._0_1_ = 3;
  auStack_5c[10] = 0;
  auStack_5c[6] = 0;
  auStack_5c[7] = 0;
  auStack_5c[8] = 0;
  auStack_5c[9] = 0;
  auStack_5c[0xb] = 0;
  func_0x0046bc40("g_http",6);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  uVar2 = func_0x00638b70(auStack_5c + 6,auStack_5c,iVar3,auStack_5c[0x12],iVar1,auStack_5c + 0xc);
  if (0 < (int)uVar2) {
    func_0x00d66d90(DAT_0145e9f0,~uVar2);
  }
  uStack_8._0_1_ = 3;
  if (0xf < auStack_5c[0xb]) {
    func_0x0046b1f0(auStack_5c + 6,auStack_5c[6],auStack_5c[0xb]);
  }
  auStack_5c[10] = 0;
  auStack_5c[0xb] = 0xf;
  auStack_5c[6] = auStack_5c[6] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < auStack_5c[5]) {
    func_0x0046b1f0(auStack_5c,auStack_5c[0],auStack_5c[5]);
  }
  auStack_5c[4] = 0;
  auStack_5c[5] = 0xf;
  auStack_5c[0] = auStack_5c[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < auStack_5c[0x11]) {
    uVar4 = auStack_5c[0x11] + 1;
    uVar2 = auStack_5c[0xc];
    if (0xfff < uVar4) {
      uVar2 = *(int *)(auStack_5c[0xc] + -4);
      uVar4 = auStack_5c[0x11] + 0x24;
      if (0x1f < (auStack_5c[0xc] - uVar2) - 4) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(uVar2,uVar4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0063a0e0(int param_1,undefined4 *param_2)

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
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_0063a170(int param_1,undefined4 *param_2)

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
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0063a200(void)

{
  return &`public:___thiscall_`public:___thiscall_`public:_int___thiscall_Http::get(class_std::basic_string<>_const&,int)'::`2'::<lambda_1>::operator()(void)const_'::`2'::<lambda_1>::operator()(class_std::shared_ptr<>)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0063a210(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_5c [19];
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edc29d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_5c[0x12] = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0xc) == '\0') {
    auStack_5c[10] = 0;
    iVar1 = auStack_5c[0x12] + 0x24;
    auStack_5c[0xb] = 0;
    iVar3 = auStack_5c[0x12] + 0x18;
    auStack_5c[6] = 0;
    auStack_5c[7] = 0;
    auStack_5c[8] = 0;
    auStack_5c[9] = 0;
    func_0x0046bc40("onGetProgress",0xd);
    uStack_8 = 0;
    auStack_5c[0x10] = 0;
    auStack_5c[0xc] = 0;
    auStack_5c[0xd] = 0;
    auStack_5c[0xe] = 0;
    auStack_5c[0xf] = 0;
    auStack_5c[0x11] = 0;
    func_0x0046bc40("g_http",6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uVar2 = func_0x00638880(auStack_5c + 0xc,auStack_5c + 6,iVar3,auStack_5c[0x12],iVar1);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < auStack_5c[0x11]) {
      func_0x0046b1f0(auStack_5c + 0xc,auStack_5c[0xc],auStack_5c[0x11]);
    }
    auStack_5c[0x10] = 0;
    auStack_5c[0x11] = 0xf;
    auStack_5c[0xc] = auStack_5c[0xc] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (0xf < auStack_5c[0xb]) {
      func_0x0046b1f0(auStack_5c + 6,auStack_5c[6],auStack_5c[0xb]);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = *(int *)(auStack_5c[0x12] + 0x48);
  auStack_5c[0x10] = 0;
  auStack_5c[0x11] = 0;
  auStack_5c[0xc] = 0;
  auStack_5c[0xd] = 0;
  auStack_5c[0xe] = 0;
  auStack_5c[0xf] = 0;
  if (iVar1 == *(int *)(auStack_5c[0x12] + 0x4c)) {
    auStack_5c[0x10] = 0;
    auStack_5c[0x11] = 0xf;
    auStack_5c[0xc] = 0;
  }
  else {
    iVar3 = *(int *)(auStack_5c[0x12] + 0x4c) - iVar1;
    func_0x005e73c0(iVar1,iVar3,iVar3,uVar2);
  }
  uStack_8 = 2;
  auStack_5c[0x12] = *(int *)(param_1 + 4);
  iVar1 = auStack_5c[0x12] + 0x54;
  auStack_5c[4] = 0;
  iVar3 = auStack_5c[0x12] + 0x18;
  auStack_5c[5] = 0;
  auStack_5c[0] = 0;
  auStack_5c[1] = 0;
  auStack_5c[2] = 0;
  auStack_5c[3] = 0;
  func_0x0046bc40("onGet",5);
  uStack_8._0_1_ = 3;
  auStack_5c[10] = 0;
  auStack_5c[6] = 0;
  auStack_5c[7] = 0;
  auStack_5c[8] = 0;
  auStack_5c[9] = 0;
  auStack_5c[0xb] = 0;
  func_0x0046bc40("g_http",6);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  uVar2 = func_0x00638b70(auStack_5c + 6,auStack_5c,iVar3,auStack_5c[0x12],iVar1,auStack_5c + 0xc);
  if (0 < (int)uVar2) {
    func_0x00d66d90(DAT_0145e9f0,~uVar2);
  }
  uStack_8._0_1_ = 3;
  if (0xf < auStack_5c[0xb]) {
    func_0x0046b1f0(auStack_5c + 6,auStack_5c[6],auStack_5c[0xb]);
  }
  auStack_5c[10] = 0;
  auStack_5c[0xb] = 0xf;
  auStack_5c[6] = auStack_5c[6] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < auStack_5c[5]) {
    func_0x0046b1f0(auStack_5c,auStack_5c[0],auStack_5c[5]);
  }
  auStack_5c[4] = 0;
  auStack_5c[5] = 0xf;
  auStack_5c[0] = auStack_5c[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < auStack_5c[0x11]) {
    uVar4 = auStack_5c[0x11] + 1;
    uVar2 = auStack_5c[0xc];
    if (0xfff < uVar4) {
      uVar2 = *(int *)(auStack_5c[0xc] + -4);
      uVar4 = auStack_5c[0x11] + 0x24;
      if (0x1f < (auStack_5c[0xc] - uVar2) - 4) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(uVar2,uVar4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0063a220(int param_1,undefined4 *param_2)

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
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_0063a2b0(int param_1,undefined4 *param_2)

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
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0063a640(undefined4 param_1)

{
  uint uVar1;
  void *_Dst;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eddc44;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (void *)func_0x008ab47d(100,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,100);
  func_0x0062d9f0(param_1,extraout_ECX,1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0063a880(undefined4 param_1)

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



int __thiscall FUN_0063a960(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = __std_type_info_compare(param_2 + 4,0x12f93d4,uVar1);
  iVar3 = 0;
  if (iVar2 == 0) {
    iVar3 = param_1 + 0xc;
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar3;
}



undefined1 * Catch_0063b01e(void)

{
  func_0x0062e2c0();
  return &LAB_0063b00a;
}



undefined * Catch_0063b1fe(void)

{
  func_0x0062e2c0();
  return &DAT_0063b215;
}



undefined * Catch_0063b40b(void)

{
  func_0x0062e2c0();
  return &DAT_0063b422;
}



undefined1 * Catch_0063b5fe(void)

{
  func_0x0062e2c0();
  return &LAB_0063b5ea;
}



undefined1 * Catch_0063b7ce(void)

{
  func_0x0062e2c0();
  return &LAB_0063b7ba;
}



undefined * Catch_0063b95f(void)

{
  func_0x0062e2c0();
  return &DAT_0063b976;
}



void FUN_0063bae0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  void *_Dst_00;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede23f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x38,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x38);
  *_Dst = boost::asio::execution_context::service::vftable;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = param_1;
  _Dst[4] = 0;
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  *_Dst = boost::asio::detail::execution_context_service_base<>::vftable;
  uStack_8._0_1_ = 2;
  uVar2 = func_0x00638840();
  _Dst[5] = uVar2;
  func_0x0062d090();
  uStack_8._0_1_ = 3;
  _Dst_00 = (void *)func_0x008ab47d(100);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  memset(_Dst_00,0,100);
  uVar2 = func_0x0062d9f0(param_1,extraout_ECX,0);
  _Dst[0xc] = uVar2;
  _Dst[0xd] = 0;
  LOCK();
  *(int *)(_Dst[0xc] + 0x18) = *(int *)(_Dst[0xc] + 0x18) + 1;
  UNLOCK();
  *_Dst = boost::asio::detail::resolver_service<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0063bc10(undefined4 param_1)

{
  uint uVar1;
  void *_Dst;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede274;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (void *)func_0x008ab47d(0x30,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x30);
  func_0x0063c2e0(param_1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0063bcd0(void)

{
  return &`public:___thiscall_`public:_int___thiscall_Http::ws(class_std::basic_string<>_const&,int)'::`2'::<lambda_1>::operator()(void)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0063bce0(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede2ad;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *param_1;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  uStack_8 = 0xffffffff;
  func_0x00632c10(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0063bd80(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_0063be10(int param_1,undefined4 *param_2)

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
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void __thiscall FUN_0063bea0(int param_1,char param_2)

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
    func_0x008ab812(param_1,0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0063bf30(void)

{
  return &`public:___thiscall_`public:_int___thiscall_Http::download(class_std::basic_string<>_const&,class_std::basic_string<>,int)'::`2'::<lambda_1>::operator()(void)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0063bf40(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb184d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_8 = 0xffffffff;
  func_0x00631f80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0063bfc0(int param_1)

{
  func_0x0063ca30(param_1 + 4);
  return;
}



undefined4 * __thiscall FUN_0063bfe0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede328;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  func_0x00469da0(param_1 + 4,uVar1);
  param_2[7] = *(undefined4 *)(param_1 + 0x1c);
  param_2[8] = *(undefined4 *)(param_1 + 0x20);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



TypeDescriptor * FUN_0063c060(void)

{
  return &`public:___thiscall_`public:_int___thiscall_Http::post(class_std::basic_string<>_const&,class_std::basic_string<>_const&,int,bool)'::`2'::<lambda_1>::operator()(void)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0063c070(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb184d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_8 = 0xffffffff;
  func_0x006317a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0063c0f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_0063c110(void)

{
  return &`public:___thiscall_`public:_int___thiscall_Http::get(class_std::basic_string<>_const&,int)'::`2'::<lambda_1>::operator()(void)const_'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0063c120(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb184d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_8 = 0xffffffff;
  func_0x00630ef0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0063c1a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



undefined4 * __thiscall FUN_0063c500(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede4a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0062f7f0(uVar1);
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0063c9a0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edcc18;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    func_0x00584760(iVar1,param_1[5] - iVar1 >> 4,uVar2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::detail::timer_queue_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * FUN_0063caf0(undefined4 param_1)
