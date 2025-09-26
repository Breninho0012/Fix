    iVar6 = func_0x00db9750(param_1,param_2,iVar6);
    if (iVar6 != 0) {
      return;
    }
  }
  iVar6 = *piVar1;
  for (uVar2 = *(uint *)(iVar6 + uVar9 * 0x10); (uVar2 & 0xf0000000) == 0x80000000;
      uVar2 = *(uint *)(iVar6 + (uVar2 & 0xffff) * 0x10)) {
  }
  uVar8 = uVar2 & 0xffff;
  if ((uVar2 & 0xf0000000) != 0x20000000) {
    uVar8 = uVar9;
  }
  puVar7 = (undefined4 *)func_0x00d7f220(piVar1,uVar8,iVar10);
  if (puVar7 == (undefined4 *)0x0) {
    if (iVar10 == 0x13) {
      func_0x00db8880(param_1,param_2,uVar9);
      return;
    }
  }
  else if (puVar7[1] == -9) {
    uVar9 = func_0x00da70c0(param_1,*puVar7,8);
    *(uint *)(*(int *)(param_1 + 100) + -4) = uVar9 | 0x10000;
    param_2[1] = 0xffffffff;
    return;
  }
  func_0x00d71770(param_1,0xb);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __fastcall FUN_00db75e0(int param_1,int *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined2 *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uStack_48;
  uint uStack_44;
  undefined2 *puStack_40;
  undefined2 *puStack_3c;
  int iStack_38;
  int aiStack_c [2];
  
  iStack_38 = 8;
  uStack_44 = **(uint **)(param_1 + 100);
  iVar12 = func_0x00db8700(param_1,uStack_44,*param_2);
  piVar5 = *(int **)(param_1 + -0xbc);
  iVar13 = *piVar5;
  puVar21 = (uint *)((uint)*(ushort *)(iVar12 + 6) * 0x10 + iVar13);
  uVar18 = *puVar21;
  while ((uVar18 & 0xf0000000) == 0x80000000) {
    puVar21 = (uint *)((uVar18 & 0xffff) * 0x10 + iVar13);
    uVar18 = *puVar21;
  }
  if ((uVar18 & 0xf0000000) == 0x20000000) {
    if ((uVar18 & 0xf0800000) == 0x20800000) {
      do {
        puVar21 = (uint *)((uVar18 & 0xffff) * 0x10 + iVar13);
        uVar18 = *puVar21;
      } while ((uVar18 & 0xf0000000) == 0x80000000);
    }
    *(undefined4 *)(param_1 + 0x7a) = 0x45050015;
    *(short *)(param_1 + 0x78) = (short)uStack_44;
    iStack_38 = 0;
    uStack_44 = func_0x00daf2b0();
    iVar13 = *(int *)(param_1 + 0x10);
    uVar18 = uStack_44 & 0xffff;
    if ((((*(uint *)(param_1 + 0x68) & 0x10000) != 0) &&
        (uVar4 = *(ushort *)(iVar13 + 2 + uVar18 * 8), uVar4 < 0x8000)) &&
       ((cVar3 = *(char *)(iVar13 + 5 + uVar18 * 8), cVar3 == ')' ||
        ((cVar3 == '5' || (cVar3 == '6')))))) {
      iVar6 = *(int *)(iVar13 + (uint)uVar4 * 8);
      uStack_44 = (uint)*(ushort *)(iVar13 + uVar18 * 8);
      iStack_38 = -iVar6;
      if (cVar3 != '6') {
        iStack_38 = iVar6;
      }
    }
  }
  do {
    uStack_48 = *(uint *)(*(int *)(param_1 + 100) + 4);
    uVar11 = (undefined2)uStack_44;
    puVar22 = puVar21;
    if ((uStack_48 >> 0x18 & 0x1f) - 0xe < 6) {
      uStack_48 = func_0x00db10c0();
      if ((*puVar21 & 0xe0000000) != 0x20000000) goto LAB_00db7bd9;
LAB_00db78e3:
      puStack_3c = (undefined2 *)(param_1 + 0x78);
      puStack_40 = (undefined2 *)(param_1 + 0x7c);
      puVar20 = (undefined2 *)(param_1 + 0x7a);
      if ((*puVar21 & 0x4000000) != 0) {
        uVar8 = func_0x00da6cb0();
        *puVar20 = uVar8;
        *puStack_40 = 0x2113;
        *puStack_3c = (short)uStack_48;
        uStack_48 = func_0x00daf2b0();
      }
      uVar18 = (uint)(ushort)*puVar21;
      iVar12 = func_0x00d7f690(piVar5,uVar18);
      iVar13 = *(int *)(param_1 + 0x10);
      if ((((*(uint *)(param_1 + 0x68) & 0x10000) != 0) &&
          (uVar4 = *(ushort *)(iVar13 + 2 + (uStack_48 & 0xffff) * 8), uVar4 < 0x8000)) &&
         ((cVar3 = *(char *)(iVar13 + 5 + (uStack_48 & 0xffff) * 8), cVar3 == ')' ||
          ((cVar3 == '5' || (cVar3 == '6')))))) {
        iVar12 = *(int *)(iVar13 + (uint)uVar4 * 8) * iVar12;
        uStack_48._0_2_ = *(undefined2 *)(*(int *)(param_1 + 0x10) + (uStack_48 & 0xffff) * 8);
        iVar13 = -iVar12;
        if (cVar3 != '6') {
          iVar13 = iVar12;
        }
        iStack_38 = iStack_38 + iVar13;
      }
      uVar8 = func_0x00da6cb0();
      *puVar20 = uVar8;
      *puStack_40 = 0x2b13;
      *puStack_3c = (undefined2)uStack_48;
      uStack_48 = func_0x00daf2b0();
      *puStack_40 = 0x2905;
      *puVar20 = uVar11;
      *puStack_3c = (short)uStack_48;
      uStack_44 = func_0x00daf2b0();
LAB_00db7bcd:
      puStack_3c = (undefined2 *)(param_1 + 0x78);
      puStack_40 = (undefined2 *)(param_1 + 0x7c);
      puVar22 = puVar21;
      if (uVar18 != 0) {
        if (iStack_38 != 0) {
          uVar11 = func_0x00da6cb0();
          *(undefined2 *)(param_1 + 0x7a) = uVar11;
          *puStack_40 = 0x2905;
          *puStack_3c = (short)uStack_44;
          uStack_44 = func_0x00daf2b0();
        }
        iVar13 = *piVar5;
        puVar21 = (uint *)(uVar18 * 0x10 + iVar13);
        uVar17 = *puVar21;
        if ((uVar17 & 0xf0800000) == 0x20800000) {
          *puStack_40 = 0x4605;
          *puStack_3c = (short)uStack_44;
          *(undefined2 *)(param_1 + 0x7a) = 0;
          uStack_44 = func_0x00daf2b0();
          uVar18 = (uint)(ushort)*puVar21;
          iVar13 = *piVar5;
          puVar21 = (uint *)(uVar18 * 0x10 + iVar13);
          uVar17 = *puVar21;
        }
        if ((uVar17 & 0xf0000000) == 0x80000000) {
          uVar17 = *puVar21;
          do {
            puVar21 = (uint *)((uVar17 & 0xffff) * 0x10 + iVar13);
            uVar17 = *puVar21;
          } while ((uVar17 & 0xf0000000) == 0x80000000);
        }
        if (param_2[2] == 0) {
          puVar14 = *(undefined4 **)(param_1 + 100);
          uVar15 = func_0x00dbb570(param_1,puVar21,uVar18,uStack_44);
          *puVar14 = uVar15;
          return;
        }
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0x75) = 1;
        func_0x00dbab30(param_1,puVar21,uStack_44,*(undefined4 *)(*(int *)(param_1 + 100) + 8),
                        *param_2 + 0x10);
        return;
      }
    }
    else {
      uVar8 = (undefined2)uStack_48;
      if ((uStack_48 & 0x1f000000) == 0xa000000) {
        puVar19 = (uint *)((uint)*(ushort *)(*(int *)(*param_2 + 8) + 6) * 0x10 + *piVar5);
        uVar18 = *puVar19;
        while ((uVar18 & 0xf0000000) == 0x80000000) {
          puVar19 = (uint *)((uVar18 & 0xffff) * 0x10 + *piVar5);
          uVar18 = *puVar19;
        }
        iVar13 = func_0x00dba300(piVar5,puVar19);
        if (((*puVar21 & 0xe0000000) != 0x20000000) || (7 < iVar13 - 0xfU)) goto LAB_00db7bd9;
        puVar1 = (ushort *)(param_1 + 0x7c);
        puVar20 = (undefined2 *)(param_1 + 0x78);
        puVar2 = (ushort *)(param_1 + 0x7a);
        uVar4 = (ushort)iVar13;
        if (puVar19[1] == 8) {
          uVar16 = 0x17;
LAB_00db781c:
          *puVar2 = uVar16;
          uVar16 = uVar4 | 0x4500;
        }
        else {
          if (puVar19[1] == 4) {
            uVar16 = 0x16;
            goto LAB_00db781c;
          }
          uVar16 = func_0x00da6cb0();
          *puVar1 = 0x2905;
          *puVar20 = uVar8;
          *puVar2 = uVar16;
          uVar8 = func_0x00daf2b0();
          *puVar2 = 0;
          uVar16 = uVar4 | 0x4600;
        }
        *puVar1 = uVar16;
        *puVar20 = uVar8;
        uStack_48 = func_0x00daf2b0();
        if (4 < puVar19[1]) {
          *puVar1 = 0x5b13;
          *puVar20 = (short)uStack_48;
          *puVar2 = uVar4 | 0x260;
          uStack_48 = func_0x00daf2b0();
          *(undefined1 *)(param_1 + 0x134) = 1;
        }
        goto LAB_00db78e3;
      }
      if ((uStack_48 & 0x1f000000) == 0x4000000) {
        iVar13 = *(int *)(*param_2 + 8);
        if ((iVar12 != 0) && (*(short *)(iVar12 + 6) == 0x16)) {
          iVar12 = *(int *)(iVar12 + 8);
          *(undefined4 *)(param_1 + 0x7a) = 0x45130016;
          *(undefined2 *)(param_1 + 0x78) = uVar11;
          uVar9 = func_0x00daf2b0();
          uVar10 = func_0x00da6cb0();
          *(undefined2 *)(param_1 + 0x7a) = uVar10;
          *(undefined2 *)(param_1 + 0x7c) = 0x893;
          *(undefined2 *)(param_1 + 0x78) = uVar9;
          func_0x00daf2b0();
          puVar21 = (uint *)(iVar12 * 0x10 + *piVar5);
          uVar18 = *puVar21;
          while ((uVar18 & 0xf0000000) == 0x80000000) {
            puVar21 = (uint *)((uVar18 & 0xffff) * 0x10 + *piVar5);
            uVar18 = *puVar21;
          }
        }
        puVar22 = puVar21;
        if ((*puVar21 & 0xf0000000) != 0x10000000) {
          if (((*puVar21 & 0xf4000000) == 0x34000000) && (*(int *)(iVar13 + 0x10) == 2)) {
            if (*(char *)(iVar13 + 0x14) == 'r') {
              if (*(char *)(iVar13 + 0x15) == 'e') {
LAB_00db7b7a:
                uVar11 = func_0x00da70c0(param_1,iVar13,4);
                *(undefined2 *)(param_1 + 0x7c) = 0x884;
                *(undefined2 *)(param_1 + 0x78) = uVar8;
                *(undefined2 *)(param_1 + 0x7a) = uVar11;
                func_0x00daf2b0();
                if (*(char *)(iVar13 + 0x14) == 'i') {
                  iStack_38 = iStack_38 + (puVar21[1] >> 1);
                }
                uVar18 = (uint)(ushort)*puVar21;
                goto LAB_00db7bcd;
              }
            }
            else if ((*(char *)(iVar13 + 0x14) == 'i') && (*(char *)(iVar13 + 0x15) == 'm'))
            goto LAB_00db7b7a;
          }
          goto LAB_00db7bd9;
        }
        puVar19 = (uint *)func_0x00d7ed20(piVar5,puVar21,iVar13,aiStack_c,0);
        if (puVar19 == (uint *)0x0) goto LAB_00db7bd9;
        iStack_38 = iStack_38 + aiStack_c[0];
        uVar9 = func_0x00da70c0(param_1,iVar13,4);
        *(undefined2 *)(param_1 + 0x7c) = 0x884;
        *(undefined2 *)(param_1 + 0x78) = uVar8;
        *(undefined2 *)(param_1 + 0x7a) = uVar9;
        func_0x00daf2b0();
        uVar18 = *puVar19;
        if (uVar18 >> 0x1c == 0xb) {
          uVar17 = puVar19[1];
          if ((0x7fffffff < uVar17) &&
             ((*(uint *)(*piVar5 + (uVar18 & 0xffff) * 0x10) & 0x800000) != 0)) {
            uVar15 = func_0x00da71e0(param_1,(double)(int)uVar17 +
                                             (double)(&DAT_011a2c10)[-((int)uVar17 >> 0x1f)]);
            **(undefined4 **)(param_1 + 100) = uVar15;
            return;
          }
          uVar15 = func_0x00da6cb0();
          **(undefined4 **)(param_1 + 100) = uVar15;
          return;
        }
        if (uVar18 >> 0x1c == 10) {
          if (iStack_38 != 0) {
            uVar8 = func_0x00da6cb0();
            *(undefined2 *)(param_1 + 0x7a) = uVar8;
            *(undefined2 *)(param_1 + 0x7c) = 0x2905;
            *(undefined2 *)(param_1 + 0x78) = uVar11;
            uStack_44 = func_0x00daf2b0();
          }
          func_0x00dbb2a0(param_1,param_2,uStack_44,*puVar19);
          return;
        }
        uVar18 = uVar18 & 0xffff;
        goto LAB_00db7bcd;
      }
    }
LAB_00db7bd9:
    uVar18 = *puVar22;
    if ((uVar18 & 0xf0000000) != 0x20000000) {
LAB_00db7c23:
      puVar14 = (undefined4 *)func_0x00d7f220(piVar5,(int)puVar22 - *piVar5 >> 4,param_2[2] != 0);
      if (puVar14 != (undefined4 *)0x0) {
        if (puVar14[1] == -9) {
          uVar18 = func_0x00da70c0(param_1,*puVar14,8);
          *(uint *)(*(int *)(param_1 + 100) + -4) = uVar18 | 0x10000;
          param_2[1] = -1;
          return;
        }
        if (((param_2[2] == 0) && (puVar14[1] == -0xc)) &&
           ((*(uint *)(*(int *)(param_1 + 100) + 4) & 0x1f000000) == 0x4000000)) {
          uVar15 = func_0x00d6f1b0(*(undefined4 *)(param_1 + 0x54),*puVar14,*param_2 + 8);
          puVar14 = *(undefined4 **)(param_1 + 100);
          uVar15 = func_0x00d93990(param_1,uVar15);
          *puVar14 = uVar15;
          if (**(int **)(param_1 + 100) != 0) {
            uVar8 = func_0x00da70c0(param_1,*(undefined4 *)(*param_2 + 8),4);
            uVar11 = *(undefined2 *)(*(int *)(param_1 + 100) + 4);
            *(undefined2 *)(param_1 + 0x7a) = uVar8;
            *(undefined2 *)(param_1 + 0x7c) = 0x884;
            *(undefined2 *)(param_1 + 0x78) = uVar11;
            func_0x00daf2b0();
            return;
          }
        }
      }
      func_0x00d71770(param_1,0xb);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    do {
      puVar21 = (uint *)((uVar18 & 0xffff) * 0x10 + *piVar5);
      uVar18 = *puVar21;
    } while (uVar18 >> 0x1c == 8);
    if ((uVar18 >> 0x1c != 1) ||
       (iVar12 = 0, puVar22 = puVar21, (uStack_48 & 0x1f000000) != 0x4000000)) goto LAB_00db7c23;
  } while( true );
}



void __fastcall FUN_00db7ef0(int param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puStack_1c;
  uint uStack_18;
  int *piStack_14;
  double dStack_10;
  
  piStack_14 = *(int **)(param_1 + -0xbc);
  if (((**(uint **)(param_1 + 100) & 0x1f000000) == 0xc000000) &&
     (((*(uint **)(param_1 + 100))[1] & 0x1f000000) == 0x4000000)) {
    iVar7 = *(int *)*param_2;
    if (*(char *)(iVar7 + 6) == '\x02') {
      uStack_18 = ((int *)*param_2)[2];
      dStack_10._0_4_ = (int *)iVar7;
      iVar7 = func_0x00d7ee00(piStack_14,&puStack_1c,uStack_18,0x1840);
      dStack_10._0_4_ =
           (int *)func_0x00d6f270(*(undefined4 *)((int)dStack_10._0_4_ + 0x1c),uStack_18);
      param_2[1] = param_2[2];
      if (((iVar7 == 0) || (dStack_10._0_4_ == (int *)0x0)) || (dStack_10._0_4_[1] == -1)) {
        func_0x00d71770(param_1,0x15);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = func_0x00da70c0(param_1,uStack_18,4);
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 100) + 4);
      *(undefined2 *)(param_1 + 0x7a) = uVar6;
      *(undefined2 *)(param_1 + 0x7c) = 0x884;
      *(undefined2 *)(param_1 + 0x78) = uVar1;
      func_0x00daf2b0();
      uVar2 = *puStack_1c;
      if (uVar2 >> 0x1c == 0xb) {
        uVar3 = puStack_1c[1];
        if ((0x7fffffff < uVar3) &&
           ((*(uint *)(*piStack_14 + (uVar2 & 0xffff) * 0x10) & 0x800000) != 0)) {
          dStack_10 = (double)(int)uVar3 + (double)(&DAT_011a2c10)[-((int)uVar3 >> 0x1f)];
          uVar8 = func_0x00da71e0(param_1,dStack_10);
          **(undefined4 **)(param_1 + 100) = uVar8;
          return;
        }
        uVar8 = func_0x00da6cb0();
        **(undefined4 **)(param_1 + 100) = uVar8;
        return;
      }
      if (uVar2 >> 0x1c != 0xc) {
        puVar4 = *(undefined4 **)(param_1 + 100);
        uVar8 = func_0x00da70c0(param_1,*dStack_10._0_4_,10);
        *puVar4 = uVar8;
        return;
      }
      uVar8 = *(undefined4 *)(*dStack_10._0_4_ + 8);
      uStack_18 = uVar2 & 0xffff;
      dStack_10 = (double)CONCAT44(dStack_10._4_4_,uVar8);
      puStack_1c = (uint *)(uStack_18 * 0x10 + *piStack_14);
      uVar2 = *puStack_1c;
      while ((uVar2 & 0xf0000000) == 0x80000000) {
        puStack_1c = (uint *)((uVar2 & 0xffff) * 0x10 + *piStack_14);
        uVar2 = *puStack_1c;
      }
      uVar8 = func_0x00da72c0(param_1,0x19,uVar8);
      if (param_2[2] == 0) {
        *(undefined1 *)(param_1 + 0x75) = 1;
        func_0x00dbab30(param_1,puStack_1c,uVar8,*(undefined4 *)(*(int *)(param_1 + 100) + 8),
                        *param_2 + 0x10);
        return;
      }
      puVar4 = *(undefined4 **)(param_1 + 100);
      uVar8 = func_0x00dbb570(param_1,puStack_1c,uStack_18,uVar8);
      *puVar4 = uVar8;
    }
  }
  return;
}



void __fastcall FUN_00db8110(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined2 uVar3;
  
  if ((**(uint **)(param_1 + 100) & 0x1f000000) == 0x4000000) {
    uVar3 = func_0x00da70c0(param_1,*(undefined4 *)*param_2,4);
    uVar1 = **(undefined2 **)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    *(undefined2 *)(param_1 + 0x7c) = 0x884;
    *(undefined2 *)(param_1 + 0x78) = uVar1;
    func_0x00daf2b0();
    *(undefined4 *)(param_1 + 0x130) = 4;
    **(undefined4 **)(param_1 + 100) = 0x2007ffd;
    return;
  }
  func_0x00d71770(param_1,0xb);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __fastcall FUN_00db8180(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = *(int **)(param_1 + 100);
  uVar2 = piVar1[1];
  if (((*piVar1 != 0) && (uVar2 != 0)) &&
     ((iVar3 = piVar1[2], iVar3 != 0 || ((uVar2 & 0x1f000000) == 0x4000000)))) {
    piVar4 = *(int **)(param_1 + -0xbc);
    uVar7 = func_0x00dbab30(param_1,*piVar4 + 0x110,0,*piVar1,*param_2);
    uVar8 = func_0x00dbab30(param_1,*piVar4 + 0x120,0,uVar2,*param_2 + 8);
    if (iVar3 == 0) {
      uVar5 = *(undefined2 *)(*(int *)(param_1 + 100) + 4);
      *(undefined4 *)(param_1 + 0x7a) = 0x45130000;
      *(undefined2 *)(param_1 + 0x78) = uVar5;
      uVar5 = func_0x00daf2b0();
      uVar6 = func_0x00da6cb0();
      *(undefined2 *)(param_1 + 0x7a) = uVar6;
      *(undefined2 *)(param_1 + 0x7c) = 0x2913;
      *(undefined2 *)(param_1 + 0x78) = uVar5;
      uVar9 = func_0x00daf2b0();
    }
    else {
      uVar9 = func_0x00dbab30(param_1,*piVar4 + 0x90,0,iVar3,*param_2 + 0x10);
    }
    param_2[1] = 0;
    func_0x00db9f30(param_1,uVar7,uVar8,uVar9,0);
  }
  return;
}



void __fastcall FUN_00db8290(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 100);
  if (*piVar1 == 0) {
    iVar3 = func_0x00da6e30(param_1,0x6a);
    *piVar1 = iVar3;
    return;
  }
  func_0x00d71770(param_1,0x17);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __fastcall FUN_00db82c0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte extraout_var;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_4 [4];
  
  piVar1 = *(int **)(param_1 + 100);
  piVar2 = *(int **)(param_1 + -0xbc);
  iVar3 = *piVar1;
  iVar4 = piVar1[2];
  if ((iVar3 != 0) && (iVar5 = piVar1[1], iVar5 != 0)) {
    iVar11 = 1;
    if (((int *)*param_2)[1] == -0xb) {
      iVar11 = *piVar2;
      puVar6 = (uint *)((uint)*(ushort *)(*(int *)*param_2 + 6) * 0x10 + iVar11);
      uVar10 = *puVar6;
      while ((uVar10 & 0xf0000000) == 0x80000000) {
        puVar6 = (uint *)((uVar10 & 0xffff) * 0x10 + iVar11);
        uVar10 = *puVar6;
      }
      if ((uVar10 & 0xf0000000) == 0x20000000) {
        do {
          puVar6 = (uint *)((uVar10 & 0xffff) * 0x10 + iVar11);
          uVar10 = *puVar6;
        } while ((uVar10 & 0xf0000000) == 0x80000000);
      }
      func_0x00d7ee90(piVar2,(int)puVar6 - iVar11 >> 4,auStack_4);
      iVar11 = 1 << (extraout_var & 0xf);
    }
    uVar7 = func_0x00dbab30(param_1,*piVar2 + 0x110,0,iVar3,*param_2);
    uVar8 = func_0x00dbab30(param_1,*piVar2 + 0x90,0,iVar5,*param_2 + 8);
    if (iVar4 == 0) {
      uVar9 = func_0x00da6cb0();
    }
    else {
      uVar9 = func_0x00dbab30(param_1,*piVar2 + 0x90,0,iVar4,*param_2 + 0x10);
    }
    param_2[1] = 0;
    func_0x00dbb050(param_1,uVar7,uVar8,uVar9,iVar11);
  }
  return;
}



void __fastcall FUN_00db8430(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  
  func_0x00db8700(param_1,**(undefined4 **)(param_1 + 100),*param_2);
  iVar1 = (*(undefined4 **)(param_1 + 100))[1];
  if (iVar1 != 0) {
    func_0x00dbb230(param_1,**(undefined4 **)(param_1 + 100),iVar1,*param_2 + 8);
    return;
  }
  func_0x00d71770(param_1,0xb);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __fastcall FUN_00db8470(int param_1,int *param_2)

{
  uint uVar1;
  
  func_0x00db8770(param_1,**(undefined4 **)(param_1 + 100),*param_2);
  uVar1 = (*(undefined4 **)(param_1 + 100))[1];
  if ((uVar1 & 0x1f000000) == 0xa000000) {
    func_0x00db8770(param_1,uVar1,*param_2 + 8);
    *(undefined4 *)(param_1 + 0x130) = 4;
    **(undefined4 **)(param_1 + 100) = 0x2007ffd;
    return;
  }
  **(undefined4 **)(param_1 + 100) = 0x1007ffe;
  return;
}



void __fastcall FUN_00db84d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00db8770(param_1,**(undefined4 **)(param_1 + 100),*param_2);
  func_0x00db8880(param_1,param_2,uVar1);
  return;
}



void __fastcall FUN_00db8500(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  piVar1 = *(int **)(param_1 + -0xbc);
  iVar2 = **(int **)(param_1 + 100);
  if (iVar2 != 0) {
    uVar3 = (*(int **)(param_1 + 100))[1];
    if ((uVar3 & 0x1f000000) == 0) {
      uVar6 = func_0x00dbab30(param_1,*piVar1 + 0x130,0,iVar2,*param_2);
      uVar5 = func_0x00da6e30(param_1,0x67,uVar6);
    }
    else {
      uVar5 = func_0x00dbab30(param_1,*piVar1 + 0x90,0,uVar3,*param_2 + 8);
      uVar6 = func_0x00dbab30(param_1,*piVar1 + 0x120,0,iVar2,*param_2);
    }
    *(short *)(param_1 + 0x78) = (short)uVar6;
    puVar4 = *(undefined4 **)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x7c) = 0x5004;
    *(undefined2 *)(param_1 + 0x7a) = uVar5;
    uVar6 = func_0x00daf2b0();
    *puVar4 = uVar6;
  }
  return;
}



void __fastcall FUN_00db85b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  if ((**(uint **)(param_1 + 100) & 0x1f000000) == 0xa000000) {
    func_0x00db8770(param_1,**(uint **)(param_1 + 100),*param_2);
    uVar3 = func_0x00da6cb0();
    uVar4 = func_0x00da6cb0();
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    puVar1 = *(undefined4 **)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x7c) = 0x548a;
    uVar5 = func_0x00daf2b0();
    *puVar1 = uVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x954) = 0xfffffff7;
  func_0x00d717b0(param_1,0xf);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __fastcall FUN_00db8630(int param_1,int *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  uVar4 = func_0x00db8770(param_1,**(undefined4 **)(param_1 + 100),*param_2);
  if (param_2[2] == 0xc1) {
    puVar5 = (uint *)func_0x00d7f340(*(undefined4 *)(param_1 + -0xbc),uVar4);
    if ((*puVar5 & 0xd0100000) == 0x10100000) {
LAB_00db86ed:
      func_0x00d71770(param_1,0xb);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2[2] == 0xc3) {
    if ((*(uint *)(*(int *)(param_1 + 100) + 4) & 0x1f000000) != 0x4000000) goto LAB_00db86ed;
    uVar3 = func_0x00da70c0(param_1,*(undefined4 *)(*param_2 + 8),4);
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 100) + 4);
    *(undefined2 *)(param_1 + 0x7a) = uVar3;
    *(undefined2 *)(param_1 + 0x7c) = 0x884;
    *(undefined2 *)(param_1 + 0x78) = uVar1;
    func_0x00daf2b0();
    param_2[1] = 3;
  }
  *(undefined4 *)(param_1 + 0x130) = 5;
  *(undefined4 *)(*(int *)(param_1 + 100) + 8) = 0x7fff;
  *(undefined4 *)(*(int *)(param_1 + 100) + 4) = 0x7fff;
  **(undefined4 **)(param_1 + 100) = 0x7fff;
  return;
}



void FUN_00dbc190(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_6c;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f69fa5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_18 = uStack_6c;
  func_0x00dc77d0(&piStack_4c);
  uStack_8._0_1_ = 1;
  if (piStack_4c == (int *)0x0) {
    if (DAT_012ba4e8 < 1) goto LAB_00dbc262;
    func_0x00ddf410(1,DAT_013e0188,"[EAXGetBufferMode] %s\n","No current context.");
  }
  else {
    if (DAT_012ba660 == '\0') {
      pcVar5 = "EAX not enabled.";
      uVar4 = 0xa004;
    }
    else {
      if (param_2 == 0) {
        iVar3 = piStack_4c[0x48];
        func_0x005797f0(iVar3 + 0x1a4b0);
        uStack_8._0_1_ = 2;
        iVar3 = func_0x00dbca40(iVar3,param_1);
        if (iVar3 == 0) {
          func_0x00dbfd90(piStack_4c,0xa001,"[EAXGetBufferMode] Invalid buffer ID %u",param_1);
          func_0x00e730b2(uStack_50);
          func_0x00dbbf30();
        }
        else {
          cVar1 = *(char *)(iVar3 + 100);
          if (((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) {
            uVar4 = func_0x00464a50(auStack_30,cVar1);
            uStack_8._0_1_ = 3;
            uVar4 = func_0x005f2a30(auStack_48,"Invalid EaxStorage: ",uVar4);
            uStack_8 = CONCAT31(uStack_8._1_3_,4);
            func_0x00463580(uVar4);
            func_0x00e87d2e(auStack_5c,&DAT_0127ffdc);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          func_0x00e730b2(uStack_50);
          func_0x00dbbf30();
        }
        goto LAB_00dbc262;
      }
      pcVar5 = "Non-null reserved parameter";
      uVar4 = 0xa003;
    }
    func_0x00dbfd90(piStack_4c,uVar4,"[EAXGetBufferMode] %s",pcVar5);
  }
  if (piStack_4c != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_4c;
    *piStack_4c = *piStack_4c + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_4c != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_4c);
    }
  }
LAB_00dbc262:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void Catch_All_00dbc312(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  func_0x008aaff0();
  uVar2 = func_0x00464a50(unaff_EBP + -0x2c,extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = func_0x005f2a30(unaff_EBP + -0x44,"Invalid EaxStorage: ",uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  func_0x00463580(uVar2);
  func_0x00e87d2e(unaff_EBP + -0x58,&DAT_0127ffdc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dbc360(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uStack_34;
  undefined4 uStack_20;
  int *piStack_1c;
  char cStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f69fe5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_1c);
  uStack_8._0_1_ = 1;
  if (piStack_1c == (int *)0x0) {
    if (DAT_012ba4e8 < 1) goto LAB_00dbc4be;
    func_0x00ddf410(1,DAT_013e0188,"[EAXSetBufferMode] %s\n","No current context.");
  }
  else {
    if (DAT_012ba660 != '\0') {
      if (param_3 == (char *)0x202203) {
        cStack_15 = '\0';
      }
      else if (param_3 == (char *)0x202204) {
        cStack_15 = '\x02';
      }
      else {
        if (param_3 != (char *)0x202205) {
          pcVar8 = "[EAXSetBufferMode] Unsupported X-RAM mode 0x%x";
          uVar6 = 0xa002;
          goto LAB_00dbc40b;
        }
        cStack_15 = '\x01';
      }
      if (param_1 == (char *)0x0) {
        func_0x00dbbf30();
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      if ((int)param_1 < 0) {
        pcVar8 = "[EAXSetBufferMode] Buffer count %d out of range";
LAB_00dbc4a8:
        func_0x00dbfd90(piStack_1c,0xa003,pcVar8,param_1);
      }
      else {
        if (param_2 == 0) {
          param_1 = "Null AL buffers";
          pcVar8 = "[EAXSetBufferMode] %s";
          goto LAB_00dbc4a8;
        }
        iVar1 = piStack_1c[0x48];
        func_0x005797f0(iVar1 + 0x1a4b0);
        uVar5 = 0;
        uStack_8._0_1_ = 2;
        for (iVar4 = 0; iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
          iVar3 = *(int *)(param_2 + iVar4 * 4);
          if (iVar3 != 0) {
            iVar2 = func_0x00dbca40(iVar1,iVar3);
            if (iVar2 == 0) {
              if (0 < DAT_012ba4e8) {
                func_0x00ddf410(1,DAT_013e0188,"[EAXSetBufferMode] Invalid buffer ID %u.\n",iVar3);
              }
              func_0x00e730b2(uStack_20);
              goto LAB_00dbc4b6;
            }
            if ((cStack_15 == '\x02') && (*(char *)(iVar2 + 0x65) == '\0')) {
              uVar7 = *(uint *)(iVar2 + 0x38);
              if (~uVar7 < uVar5) {
                pcVar8 = "[EAXSetBufferMode] Size overflow (%u + %zu)\n";
                uVar9 = uVar5;
                goto LAB_00dbc560;
              }
              uVar5 = uVar5 + uVar7;
            }
          }
        }
        uVar9 = *(uint *)(iVar1 + 0x1a564);
        if (uVar5 <= uVar9) {
          iVar4 = 0;
          if (0 < (int)param_1) {
            do {
              iVar3 = *(int *)(param_2 + iVar4 * 4);
              if (iVar3 != 0) {
                iVar3 = func_0x00dbca40(iVar1,iVar3);
                if (cStack_15 == '\x02') {
                  if (*(char *)(iVar3 + 0x65) == '\0') {
                    if (*(uint *)(iVar3 + 0x38) <= *(uint *)(iVar1 + 0x1a564)) {
                      *(uint *)(iVar1 + 0x1a564) =
                           *(uint *)(iVar1 + 0x1a564) - *(uint *)(iVar3 + 0x38);
                      *(undefined1 *)(iVar3 + 0x65) = 1;
                    }
                  }
                }
                else {
                  if (*(char *)(iVar3 + 0x65) != '\0') {
                    *(int *)(iVar1 + 0x1a564) = *(int *)(iVar1 + 0x1a564) + *(int *)(iVar3 + 0x38);
                  }
                  *(undefined1 *)(iVar3 + 0x65) = 0;
                }
                *(char *)(iVar3 + 100) = cStack_15;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)param_1);
          }
          func_0x00e730b2(uStack_20);
          if (piStack_1c != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_1c;
            *piStack_1c = *piStack_1c + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_1c != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_1c);
            }
          }
          *unaff_FS_OFFSET = iStack_10;
          return 1;
        }
        pcVar8 = "[EAXSetBufferMode] Out of X-RAM memory (need: %zu, avail: %u)";
        uVar7 = uVar5;
LAB_00dbc560:
        func_0x00dbfd90(piStack_1c,0xa005,pcVar8,uVar7,uVar9);
        func_0x00e730b2(uStack_20);
      }
LAB_00dbc4b6:
      func_0x00dbbf30();
      goto LAB_00dbc4be;
    }
    param_3 = "EAX not enabled.";
    pcVar8 = "[EAXSetBufferMode] %s";
    uVar6 = 0xa004;
LAB_00dbc40b:
    func_0x00dbfd90(piStack_1c,uVar6,pcVar8,param_3);
  }
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_1c;
    *piStack_1c = *piStack_1c + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_1c != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_1c);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
LAB_00dbc4be:
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void Catch_All_00dbc650(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbd0f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a025;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbd1d6:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        pcVar5 = "Invalid buffer ID %u";
        uVar4 = 0xa001;
      }
      else {
        pcVar5 = "Invalid buffer 3-float property 0x%04x";
        uVar4 = 0xa002;
        param_1 = param_2;
      }
      func_0x00dbfd90(piStack_18,uVar4,pcVar5,param_1);
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbd1d6;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbd1e8(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbd200(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a065;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbd2e6:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        pcVar5 = "Invalid buffer ID %u";
        uVar4 = 0xa001;
      }
      else {
        pcVar5 = "Invalid buffer 3-integer property 0x%04x";
        uVar4 = 0xa002;
        param_1 = param_2;
      }
      func_0x00dbfd90(piStack_18,uVar4,pcVar5,param_1);
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbd2e6;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbd2f8(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbd310(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  uint uStack_38;
  char cStack_28;
  undefined4 uStack_27;
  undefined1 uStack_23;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a0a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbd474:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar2 = piStack_18[0x48];
  iVar1 = iVar2 + 0x1a4b0;
  iStack_20 = iVar1;
  iVar4 = func_0x00e7307f(iVar1);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar2 + 0x1a4dc);
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iStack_1c = func_0x00dbca40(iVar2,param_1);
      if (iStack_1c == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if (param_3 < 1) {
        func_0x00dbfd90(piStack_18,0xa003,"Invalid sample rate %d",param_3);
      }
      else if (param_4 == 0) {
        func_0x00dbfd90(piStack_18,0xa003,"NULL callback");
      }
      else {
        func_0x00dbc140(&cStack_28,param_2);
        if (cStack_28 == '\0') {
          func_0x00dbfd90(piStack_18,0xa002,"Invalid format 0x%04x",param_2);
        }
        else {
          func_0x00dbcaa0(piStack_18,iStack_1c,param_3,uStack_27,CONCAT13(uStack_23,uStack_27._1_3_)
                          ,param_4,param_5);
        }
      }
      func_0x00e730b2(iVar1);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbd474;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar2 + 0x1a4dc) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void Catch_All_00dbd486(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbd4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00dbd660(param_1,param_2,param_3,param_4,param_5,0);
  return;
}



void FUN_00dbd4c0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_38;
  char cStack_28;
  undefined4 uStack_27;
  undefined1 uStack_23;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a0e5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    iVar2 = piStack_18[0x48];
    iVar1 = iVar2 + 0x1a4b0;
    iStack_20 = iVar1;
    iVar4 = func_0x00e7307f(iVar1);
    if (iVar4 != 0) {
      iVar4 = func_0x00e7304a(5);
LAB_00dbd64b:
      *(int *)(iVar2 + 0x1a4dc) = iVar4 + -1;
      func_0x00e7304a(6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = *(int *)(iVar2 + 0x1a4dc);
    if (iVar4 == 0x7fffffff) goto LAB_00dbd64b;
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    iStack_1c = func_0x00dbca40(iVar2,param_1);
    if (iStack_1c == 0) {
      pcVar6 = "Invalid buffer ID %u";
      uVar5 = 0xa001;
    }
    else {
      if (-1 < param_4) {
        if (param_5 < 1) {
          pcVar6 = "Invalid sample rate %d";
          uVar5 = 0xa003;
        }
        else {
          func_0x00dbc140(&cStack_28,param_2);
          if (cStack_28 != '\0') {
            func_0x00dbcca0(piStack_18,iStack_1c,param_5,uStack_27,
                            CONCAT13(uStack_23,uStack_27._1_3_),param_3,param_4);
            goto LAB_00dbd601;
          }
          pcVar6 = "Invalid format 0x%04x";
          uVar5 = 0xa002;
          param_5 = param_2;
        }
        func_0x00dbfd90(piStack_18,uVar5,pcVar6,param_5);
LAB_00dbd601:
        func_0x00e730b2(iVar1);
        func_0x00dbbf30();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      pcVar6 = "Negative storage size %d";
      uVar5 = 0xa003;
      param_1 = param_4;
    }
    func_0x00dbfd90(piStack_18,uVar5,pcVar6,param_1);
    func_0x00e730b2(iVar1);
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbd63f(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbd660(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                 ,uint param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  char *pcVar6;
  uint uStack_38;
  char cStack_28;
  undefined4 uStack_27;
  undefined1 uStack_23;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a125;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbd7e9;
  iVar2 = piStack_18[0x48];
  iVar1 = iVar2 + 0x1a4b0;
  iStack_20 = iVar1;
  iVar4 = func_0x00e7307f(iVar1);
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00dbd807:
    *(int *)(iVar2 + 0x1a4dc) = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)(iVar2 + 0x1a4dc);
  if (iVar4 == 0x7fffffff) goto LAB_00dbd807;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iStack_1c = func_0x00dbca40(iVar2,param_1);
  if (iStack_1c == 0) {
    func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
  }
  else {
    if ((int)param_4 < 0) {
      pcVar6 = "Negative storage size %d";
      uVar5 = param_4;
    }
    else if ((int)param_5 < 1) {
      pcVar6 = "Invalid sample rate %d";
      uVar5 = param_5;
    }
    else {
      uVar5 = param_6 & 0xfffffff0;
      if (uVar5 == 0) {
        if (((byte)param_6 & 7) == 4) {
          func_0x00dbfd90(piStack_18,0xa003,
                          "Declaring persistently mapped storage without read or write access");
        }
        else {
          func_0x00dbc140(&cStack_28,param_2);
          if (cStack_28 == '\0') {
            func_0x00dbfd90(piStack_18,0xa002,"Invalid format 0x%04x",param_2);
          }
          else {
            func_0x00dbc680(piStack_18,iStack_1c,param_5,param_4,uStack_27,
                            CONCAT13(uStack_23,uStack_27._1_3_),param_3,param_6);
          }
        }
        goto LAB_00dbd7b9;
      }
      pcVar6 = "Invalid storage flags 0x%x";
    }
    func_0x00dbfd90(piStack_18,0xa003,pcVar6,uVar5);
  }
LAB_00dbd7b9:
  func_0x00e730b2(iVar1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dbd7e9:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbd7fb(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbd820(int param_1,int param_2,void *param_3,uint param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  char *pcVar9;
  uint uStack_3c;
  char cStack_2c;
  char cStack_2b;
  undefined4 uStack_2a;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a165;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    iVar5 = piStack_18[0x48];
    iVar1 = iVar5 + 0x1a4b0;
    iStack_24 = iVar1;
    iVar4 = func_0x00e7307f(iVar1);
    if (iVar4 != 0) {
      iVar4 = func_0x00e7304a(5);
LAB_00dbdb0a:
      *(int *)(iVar5 + 0x1a4dc) = iVar4 + -1;
      func_0x00e7304a(6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = *(int *)(iVar5 + 0x1a4dc);
    if (iVar4 == 0x7fffffff) goto LAB_00dbdb0a;
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    iVar5 = func_0x00dbca40(iVar5,param_1);
    if (iVar5 == 0) {
      pcVar9 = "Invalid buffer ID %u";
      uVar8 = 0xa001;
    }
    else {
      func_0x00dbc140(&cStack_2c,param_2);
      if (cStack_2c != '\0') {
        iStack_20 = *(int *)(iVar5 + 0x3c);
        iVar4 = func_0x00dbcf80(uStack_2a,iStack_20);
        iStack_1c = iVar4;
        if (iVar4 == 0) {
          func_0x00dbfd90(piStack_18,0xa003,"Invalid unpack alignment %u",iStack_20);
          goto LAB_00dbdadb;
        }
        cVar2 = *(char *)(iVar5 + 0x14);
        if ((cStack_2b == cVar2) && ((char)uStack_2a == *(char *)(iVar5 + 0x15))) {
          if (iVar4 != *(int *)(iVar5 + 0x1c)) {
            func_0x00dbfd90(piStack_18,0xa003,
                            "Unpacking data with alignment %u does not match original alignment %u",
                            iVar4,*(int *)(iVar5 + 0x1c));
            goto LAB_00dbdadb;
          }
          if (((cVar2 != '\a') && (cVar2 != '\b')) ||
             (*(int *)(iVar5 + 0x44) == *(int *)(iVar5 + 0x24))) {
            if (*(int *)(iVar5 + 0x48) == 0) {
              iStack_20 = func_0x00ddbba0(cVar2,*(undefined4 *)(iVar5 + 0x24));
              cVar2 = *(char *)(iVar5 + 0x15);
              if (cVar2 == '\x06') {
                uVar7 = ((iVar4 - 1U >> 1) + 4) * iStack_20;
              }
              else if (cVar2 == '\a') {
                uVar7 = ((iVar4 - 2U >> 1) + 7) * iStack_20;
              }
              else {
                iVar6 = func_0x00ddbb50(cVar2);
                uVar7 = iVar6 * iStack_20 * iVar4;
              }
              if ((((int)param_4 < 0) || ((int)param_5 < 0)) ||
                 ((*(uint *)(iVar5 + 0x38) < param_4 ||
                  (*(uint *)(iVar5 + 0x38) - param_4 < param_5)))) {
                pcVar9 = "Invalid data sub-range %d+%d on buffer %u";
              }
              else {
                param_1 = iStack_1c;
                if (param_4 % uVar7 == 0) {
                  if (param_5 % uVar7 == 0) {
                    memcpy((void *)(*(int *)(iVar5 + 8) + param_4),param_3,param_5);
                    func_0x00e730b2(iVar1);
                    func_0x00dbbf30();
                    *unaff_FS_OFFSET = iStack_10;
                    return;
                  }
                  pcVar9 = 
                  "Sub-range length %d is not a multiple of frame size %d (%d unpack alignment)";
                  param_4 = param_5;
                  param_5 = uVar7;
                }
                else {
                  pcVar9 = 
                  "Sub-range offset %d is not a multiple of frame size %d (%d unpack alignment)";
                  param_5 = uVar7;
                }
              }
              func_0x00dbfd90(piStack_18,0xa003,pcVar9,param_4,param_5,param_1);
            }
            else {
              func_0x00dbfd90(piStack_18,0xa004,"Unpacking data into mapped buffer %u",param_1);
            }
            goto LAB_00dbdadb;
          }
          pcVar9 = "Unpacking data with mismatched ambisonic order";
          uVar8 = 0xa003;
        }
        else {
          pcVar9 = "Unpacking data with mismatched format";
          uVar8 = 0xa002;
        }
        func_0x00dbfd90(piStack_18,uVar8,pcVar9);
LAB_00dbdadb:
        func_0x00e730b2(iVar1);
        func_0x00dbbf30();
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      pcVar9 = "Invalid format 0x%04x";
      uVar8 = 0xa002;
      param_1 = param_2;
    }
    func_0x00dbfd90(piStack_18,uVar8,pcVar9,param_1);
    func_0x00e730b2(iVar1);
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbdafe(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbdb20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a1a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbdc06:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        pcVar5 = "Invalid buffer ID %u";
        uVar4 = 0xa001;
      }
      else {
        pcVar5 = "Invalid buffer float property 0x%04x";
        uVar4 = 0xa002;
        param_1 = param_2;
      }
      func_0x00dbfd90(piStack_18,uVar4,pcVar5,param_1);
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbdc06;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbdc18(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbdc30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a1e5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbdd33;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dbdd51:
    *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a4dc);
  if (iVar3 == 0x7fffffff) goto LAB_00dbdd51;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar3 = func_0x00dbca40(iVar1,param_1);
  if (iVar3 == 0) {
    pcVar5 = "Invalid buffer ID %u";
    uVar4 = 0xa001;
LAB_00dbdcf8:
    func_0x00dbfd90(piStack_18,uVar4,pcVar5,param_1);
  }
  else {
    if (param_3 != 0) {
      pcVar5 = "Invalid buffer float-vector property 0x%04x";
      uVar4 = 0xa002;
      param_1 = param_2;
      goto LAB_00dbdcf8;
    }
    func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
  }
  func_0x00e730b2(iVar1 + 0x1a4b0);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dbdd33:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbdd45(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbdd60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  char *pcVar4;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a225;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbdf81;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dbdf9f:
    *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a4dc);
  if (iVar3 == 0x7fffffff) goto LAB_00dbdf9f;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar3 = func_0x00dbca40(iVar1,param_1);
  if (iVar3 == 0) {
    func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
  }
  else if (param_2 < 0x199e) {
    if (param_2 == 0x199d) {
      if (0xd < param_3 - 1U) {
        pcVar4 = "Invalid unpack ambisonic order %d";
        goto LAB_00dbdf3c;
      }
      *(int *)(iVar3 + 0x44) = param_3;
    }
    else if (param_2 == 0x1997) {
      if (*(int *)(iVar3 + 0x5c) == 0) {
        if (param_3 == 0) {
          *(undefined1 *)(iVar3 + 0x20) = 0;
        }
        else {
          if (param_3 != 1) {
            pcVar4 = "Invalid unpack ambisonic layout %04x";
            goto LAB_00dbdf3c;
          }
          *(undefined1 *)(iVar3 + 0x20) = 1;
        }
      }
      else {
        func_0x00dbfd90(piStack_18,0xa004,"Modifying in-use buffer %u\'s ambisonic layout",param_1);
      }
    }
    else {
      if (param_2 != 0x1998) goto LAB_00dbdf03;
      if (*(int *)(iVar3 + 0x5c) == 0) {
        if (param_3 == 0) {
          *(undefined1 *)(iVar3 + 0x21) = 0;
        }
        else if (param_3 == 1) {
          *(undefined1 *)(iVar3 + 0x21) = 1;
        }
        else {
          if (param_3 != 2) {
            pcVar4 = "Invalid unpack ambisonic scaling %04x";
            goto LAB_00dbdf3c;
          }
          *(undefined1 *)(iVar3 + 0x21) = 2;
        }
      }
      else {
        func_0x00dbfd90(piStack_18,0xa004,"Modifying in-use buffer %u\'s ambisonic scaling",param_1)
        ;
      }
    }
  }
  else if (param_2 == 0x200c) {
    if (param_3 < 0) {
      pcVar4 = "Invalid unpack block alignment %d";
LAB_00dbdf3c:
      func_0x00dbfd90(piStack_18,0xa003,pcVar4,param_3);
    }
    else {
      *(int *)(iVar3 + 0x3c) = param_3;
    }
  }
  else if (param_2 == 0x200d) {
    if (param_3 < 0) {
      pcVar4 = "Invalid pack block alignment %d";
      goto LAB_00dbdf3c;
    }
    *(int *)(iVar3 + 0x40) = param_3;
  }
  else {
LAB_00dbdf03:
    func_0x00dbfd90(piStack_18,0xa002,"Invalid buffer integer property 0x%04x",param_2);
  }
  func_0x00e730b2(iVar1 + 0x1a4b0);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dbdf81:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbdf93(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbdfb0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = param_3;
  puStack_c = &DAT_00f6a265;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_3 != (int *)0x0) {
    if (param_2 < 0x199e) {
      if ((param_2 == 0x199d) || ((param_2 == 0x1997 || (param_2 == 0x1998)))) {
LAB_00dbe04e:
        FUN_00dbdd60(param_1,param_2,*param_3);
        goto LAB_00dbe05c;
      }
    }
    else if ((param_2 == 0x200c) || (param_2 == 0x200d)) goto LAB_00dbe04e;
  }
  func_0x00dc77d0(&param_3);
  uStack_8._0_1_ = 1;
  if (param_3 != (int *)0x0) {
    iVar1 = param_3[0x48];
    iVar5 = func_0x00e7307f(iVar1 + 0x1a4b0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar1 + 0x1a4dc);
      if (iVar5 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        iVar5 = func_0x00dbca40(iVar1,param_1);
        if (iVar5 == 0) {
          func_0x00dbfd90(param_3,0xa001,"Invalid buffer ID %u",param_1);
        }
        else if (piVar4 == (int *)0x0) {
          func_0x00dbfd90(param_3,0xa003,"NULL pointer");
        }
        else if (param_2 == 0x2015) {
          if (*(int *)(iVar5 + 0x5c) == 0) {
            iVar2 = *piVar4;
            if (((iVar2 < 0) || (piVar4[1] <= iVar2)) || (*(uint *)(iVar5 + 0x18) < (uint)piVar4[1])
               ) {
              func_0x00dbfd90(param_3,0xa003,"Invalid loop point range %d -> %d on buffer %u",iVar2,
                              piVar4[1],param_1);
            }
            else {
              *(int *)(iVar5 + 0x54) = iVar2;
              *(int *)(iVar5 + 0x58) = piVar4[1];
            }
          }
          else {
            func_0x00dbfd90(param_3,0xa004,"Modifying in-use buffer %u\'s loop points",param_1);
          }
        }
        else {
          func_0x00dbfd90(param_3,0xa002,"Invalid buffer integer-vector property 0x%04x",param_2);
        }
        func_0x00e730b2(iVar1 + 0x1a4b0);
        piVar4 = param_3;
        if (param_3 != (int *)0x0) {
          LOCK();
          iVar1 = *param_3;
          *param_3 = *param_3 + -1;
          UNLOCK();
          if ((iVar1 == 1) && (param_3 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piVar4);
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
        }
        goto LAB_00dbe05c;
      }
    }
    else {
      iVar5 = func_0x00e7304a(5);
    }
    *(int *)(iVar1 + 0x1a4dc) = iVar5 + -1;
    func_0x00e7304a(6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_00dbe05c:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbe198(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbe1b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  char *pcVar12;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a2a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbe309;
  if (param_1 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Deleting %d buffers",param_1);
LAB_00dbe21f:
    if (piStack_18 == (int *)0x0) goto LAB_00dbe309;
    LOCK();
    iVar2 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar2 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00dbe309;
    func_0x00ddc830();
  }
  else {
    if (param_1 < 1) goto LAB_00dbe21f;
    iVar2 = piStack_18[0x48];
    iVar4 = func_0x00e7307f(iVar2 + 0x1a4b0);
    if (iVar4 != 0) {
      iVar4 = func_0x00e7304a(5);
LAB_00dbe3e7:
      *(int *)(iVar2 + 0x1a4dc) = iVar4 + -1;
      func_0x00e7304a(6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = *(int *)(iVar2 + 0x1a4dc);
    if (iVar4 == 0x7fffffff) goto LAB_00dbe3e7;
    uStack_8._0_1_ = 2;
    piVar1 = param_2 + param_1;
    for (piVar9 = param_2; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      iVar4 = *piVar9;
      if (iVar4 != 0) {
        iVar5 = func_0x00dbca40(iVar2,iVar4);
        if (iVar5 == 0) {
          pcVar12 = "Invalid buffer ID %u";
          uVar11 = 0xa001;
        }
        else {
          if (*(int *)(iVar5 + 0x5c) == 0) goto LAB_00dbe31b;
          pcVar12 = "Deleting in-use buffer %u";
          uVar11 = 0xa004;
        }
        func_0x00dbfd90(piStack_18,uVar11,pcVar12,iVar4);
        goto LAB_00dbe2d9;
      }
LAB_00dbe31b:
    }
    if (param_2 != piVar1) {
      do {
        if ((*param_2 != 0) && (iVar4 = func_0x00dbca40(iVar2,*param_2), iVar4 != 0)) {
          if (*(char *)(iVar4 + 0x65) != '\0') {
            *(int *)(iVar2 + 0x1a564) = *(int *)(iVar2 + 0x1a564) + *(int *)(iVar4 + 0x38);
          }
          uVar10 = *(int *)(iVar4 + 0x60) - 1;
          *(undefined1 *)(iVar4 + 0x65) = 0;
          if (*(int *)(iVar4 + 0x2c) != 0) {
            func_0x00ddbb20(*(int *)(iVar4 + 0x2c));
            *(undefined4 *)(iVar4 + 0x2c) = 0;
            *(undefined4 *)(iVar4 + 0x30) = 0;
            *(undefined4 *)(iVar4 + 0x34) = 0;
          }
          uVar6 = 1 << (uVar10 & 0x1f);
          puVar8 = (uint *)(*(int *)(iVar2 + 0x1a4e0) + (uVar10 >> 6) * 0x10);
          uVar7 = 0;
          if (0x1f < (uVar10 & 0x3f)) {
            uVar7 = uVar6;
          }
          uVar6 = uVar6 ^ uVar7;
          if (0x3f < (uVar10 & 0x3f)) {
            uVar7 = uVar6;
          }
          *puVar8 = *puVar8 | uVar6;
          puVar8[1] = puVar8[1] | uVar7;
        }
        param_2 = param_2 + 1;
      } while (param_2 != piVar1);
    }
LAB_00dbe2d9:
    func_0x00e730b2(iVar2 + 0x1a4b0);
    if (piStack_18 == (int *)0x0) goto LAB_00dbe309;
    LOCK();
    iVar2 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar2 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00dbe309;
    func_0x00ddc830();
  }
  func_0x00ddbb20(piStack_18);
LAB_00dbe309:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbe3db(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbe400(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a2e5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbe536:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if ((*(byte *)(iVar3 + 0x48) & 2) == 0) {
        func_0x00dbfd90(piStack_18,0xa004,"Flushing buffer %u while not mapped for writing",param_1)
        ;
      }
      else if ((((param_2 < *(int *)(iVar3 + 0x4c)) || (param_3 < 1)) ||
               (iVar3 = *(int *)(iVar3 + 0x50) + *(int *)(iVar3 + 0x4c), iVar3 <= param_2)) ||
              (iVar3 - param_2 < param_3)) {
        func_0x00dbfd90(piStack_18,0xa003,"Flushing invalid range %d+%d on buffer %u",param_2,
                        param_3,param_1);
      }
      else {
        LOCK();
        UNLOCK();
      }
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbe536;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbe548(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbe560(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint extraout_EDX;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint uStack_5c;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint *puStack_24;
  int iStack_20;
  uint *puStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a32d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_5c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_5c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbe7d6;
  if ((int)param_1 < 0) {
    func_0x00dbfd90(piStack_18,0xa003,"Generating %d buffers",param_1);
LAB_00dbe5cf:
    if (piStack_18 == (int *)0x0) goto LAB_00dbe7d6;
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00dbe7d6;
    func_0x00ddc830();
  }
  else {
    if ((int)param_1 < 1) goto LAB_00dbe5cf;
    iVar7 = piStack_18[0x48];
    iVar1 = iVar7 + 0x1a4b0;
    iStack_34 = iVar1;
    iStack_20 = iVar7;
    iVar3 = func_0x00e7307f(iVar1);
    if (iVar3 != 0) {
      iVar3 = func_0x00e7304a(5);
LAB_00dbe9b3:
      *(int *)(iVar7 + 0x1a4dc) = iVar3 + -1;
      func_0x00e7304a(6);
LAB_00dbe9be:
      func_0x0046e700();
LAB_00dbe9c3:
      func_0x0046e700();
LAB_00dbe9c8:
      func_0x0062c530();
      func_0x00e87d2e(auStack_4c,&DAT_0125c4dc);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = *(int *)(iVar7 + 0x1a4dc);
    if (iVar3 == 0x7fffffff) goto LAB_00dbe9b3;
    puStack_30 = *(uint **)(iVar7 + 0x1a4e4);
    puStack_24 = *(uint **)(iVar7 + 0x1a4e0);
    uStack_8._0_1_ = 2;
    puStack_1c = (uint *)0x0;
    if (puStack_24 != puStack_30) {
      do {
        uVar10 = *puStack_24;
        uVar4 = uVar10 >> 1 & 0x55555555;
        uStack_28 = uVar10 - uVar4;
        uStack_2c = (puStack_24[1] - (puStack_24[1] >> 1 & 0x55555555)) - (uint)(uVar10 < uVar4);
        uVar10 = uStack_28 >> 2 & 0x33333333;
        uVar4 = uVar10 + (uStack_28 & 0x33333333);
        uVar11 = (uStack_2c >> 2 & 0x33333333) + (uStack_2c & 0x33333333) +
                 (uint)CARRY4(uVar10,uStack_28 & 0x33333333);
        uVar10 = uVar4 >> 4 | uVar11 * 0x10000000;
        func_0x00e87d70(uVar10 + uVar4 & 0xf0f0f0f,
                        (uVar11 >> 4) + uVar11 + (uint)CARRY4(uVar10,uVar4) & 0xf0f0f0f,
                        &DAT_01010101,&DAT_01010101);
        puStack_24 = puStack_24 + 4;
        puStack_1c = (uint *)((int)puStack_1c + (extraout_EDX >> 0x18));
      } while (puStack_24 != puStack_30);
    }
    for (; puStack_1c < param_1; puStack_1c = puStack_1c + 0x10) {
      puVar8 = *(undefined4 **)(iVar7 + 0x1a4e4);
      if (0x1ffffff < (uint)((int)puVar8 - *(int *)(iVar7 + 0x1a4e0) >> 4)) {
LAB_00dbe77f:
        puVar6 = &DAT_0112e1b4;
        if (param_1 != (uint *)0x1) {
          puVar6 = &DAT_01141e74;
        }
        func_0x00dbfd90(piStack_18,0xa005,"Failed to allocate %d buffer%s",param_1,puVar6);
        goto LAB_00dbe7a6;
      }
      if (puVar8 == *(undefined4 **)(iVar7 + 0x1a4e8)) {
        func_0x00dbbc40(puVar8);
      }
      else {
        puVar8[3] = 0;
        *puVar8 = 0xffffffff;
        puVar8[1] = 0xffffffff;
        puVar8[2] = 0;
        *(int *)(iVar7 + 0x1a4e4) = *(int *)(iVar7 + 0x1a4e4) + 0x10;
      }
      iVar3 = *(int *)(iStack_20 + 0x1a4e4);
      *(undefined4 *)(iVar3 + -0x10) = 0xffffffff;
      *(undefined4 *)(iVar3 + -0xc) = 0xffffffff;
      iVar5 = func_0x00ddbae0(4,0x1a00);
      *(int *)(iVar3 + -8) = iVar5;
      if (iVar5 == 0) {
        func_0x00dbbdf0((int *)(iVar7 + 0x1a4e0),*(int *)(iVar7 + 0x1a4e4) + -0x10);
        *(int *)(iVar7 + 0x1a4e4) = *(int *)(iVar7 + 0x1a4e4) + -0x10;
        goto LAB_00dbe77f;
      }
    }
    if (param_1 != (uint *)0x1) {
      puStack_40 = (undefined4 *)0x0;
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      uStack_8._0_1_ = 3;
      if (param_1 < (uint *)0x40000000) {
        puVar8 = (undefined4 *)func_0x00ddbb30(4,(int)param_1 * 4);
        if (puVar8 == (undefined4 *)0x0) goto LAB_00dbe9c8;
        func_0x008ab0e6(puVar8,puStack_40,(int)puStack_3c - (int)puStack_40);
        if (puStack_40 != (undefined4 *)0x0) {
          func_0x00ddbb20(puStack_40);
        }
        puStack_38 = puVar8 + (int)param_1;
        puStack_40 = puVar8;
        puStack_3c = puVar8;
        do {
          uStack_28 = func_0x00dbc060(iStack_20);
          puVar8 = puStack_3c;
          if (puStack_3c == puStack_38) {
            uStack_2c = (int)puStack_3c - (int)puStack_40 >> 2;
            if (uStack_2c == 0x3fffffff) goto LAB_00dbe9c3;
            puStack_1c = (uint *)(uStack_2c + 1);
            uVar10 = (int)puStack_38 - (int)puStack_40 >> 2;
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              puStack_30 = (uint *)0x3fffffff;
            }
            else {
              puStack_30 = (uint *)((uVar10 >> 1) + uVar10);
              if (puStack_30 < puStack_1c) {
                puStack_30 = puStack_1c;
              }
            }
            puStack_24 = puStack_30;
            puVar9 = (undefined4 *)func_0x00dbbb00(&puStack_40,&puStack_30);
            puStack_30 = puVar9 + uStack_2c;
            *puStack_30 = *(uint *)(uStack_28 + 0x60);
            if (puVar8 == puStack_3c) {
              func_0x008ab0e6(puVar9,puStack_40,(int)puStack_3c - (int)puStack_40);
            }
            else {
              func_0x008ab0e6(puVar9,puStack_40,(int)puVar8 - (int)puStack_40);
              func_0x008ab0e6(puStack_30 + 1,puVar8,(int)puStack_3c - (int)puVar8);
            }
            if (puStack_40 != (undefined4 *)0x0) {
              func_0x00ddbb20(puStack_40);
            }
            puStack_3c = puVar9 + (int)puStack_1c;
            puStack_38 = puVar9 + (int)puStack_24;
            puStack_40 = puVar9;
          }
          else {
            *puStack_3c = *(undefined4 *)(uStack_28 + 0x60);
            puStack_3c = puStack_3c + 1;
          }
          puVar8 = puStack_40;
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
        func_0x008ab0e6(param_2,puStack_40,(int)puStack_3c - (int)puStack_40);
        if (puVar8 != (undefined4 *)0x0) {
          func_0x00ddbb20(puVar8);
        }
        goto LAB_00dbe7a6;
      }
      goto LAB_00dbe9be;
    }
    iVar7 = func_0x00dbc060(iStack_20);
    *param_2 = *(undefined4 *)(iVar7 + 0x60);
LAB_00dbe7a6:
    func_0x00e730b2(iVar1);
    if (piStack_18 == (int *)0x0) goto LAB_00dbe7d6;
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 != 1) || (piStack_18 == (int *)0x0)) goto LAB_00dbe7d6;
    func_0x00ddc830();
  }
  func_0x00ddbb20(piStack_18);
LAB_00dbe7d6:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbe9a7(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  func_0x0046e700();
  func_0x0046e700();
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x48,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbe9e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a365;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbeafa:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
        func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(piStack_18,0xa002,"Invalid buffer 3-pointer property 0x%04x",param_2);
      }
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbeafa;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbeb0c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbeb30(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a3a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbec4a:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
        func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(piStack_18,0xa002,"Invalid buffer 3-float property 0x%04x",param_2);
      }
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbec4a;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbec5c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbec80(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a3e5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbed9a:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
        func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(piStack_18,0xa002,"Invalid buffer 3-integer property 0x%04x",param_2);
      }
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbed9a;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbedac(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbedd0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a425;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbeefa;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dbef18:
    *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a4dc);
  if (iVar3 == 0x7fffffff) goto LAB_00dbef18;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  puVar4 = (undefined4 *)func_0x00dbca40(iVar1,param_1);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
  }
  else if (param_3 == (undefined4 *)0x0) {
    func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
  }
  else {
    if (param_2 == 0x19a0) {
      uVar5 = *puVar4;
    }
    else {
      if (param_2 != 0x19a1) {
        func_0x00dbfd90(piStack_18,0xa002,"Invalid buffer pointer property 0x%04x",param_2);
        goto LAB_00dbeeca;
      }
      uVar5 = puVar4[1];
    }
    *param_3 = uVar5;
  }
LAB_00dbeeca:
  func_0x00e730b2(iVar1 + 0x1a4b0);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dbeefa:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbef0c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbef30(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar6 = param_2;
  puStack_c = &DAT_00f6a465;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((param_2 == (int *)0x19a0) || (param_2 == (int *)0x19a1)) {
    FUN_00dbedd0(param_1,param_2,param_3);
    goto LAB_00dbf070;
  }
  func_0x00dc77d0(&param_2);
  uStack_8._0_1_ = 1;
  if (param_2 == (int *)0x0) goto LAB_00dbf070;
  iVar1 = param_2[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dbf089:
    *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
    func_0x00e7304a(6);
    func_0x008aaff0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a4dc);
  if (iVar3 == 0x7fffffff) goto LAB_00dbf089;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar3 = func_0x00dbca40(iVar1,param_1);
  if (iVar3 == 0) {
    pcVar5 = "Invalid buffer ID %u";
    uVar4 = 0xa001;
    piVar6 = param_1;
LAB_00dbf014:
    func_0x00dbfd90(param_2,uVar4,pcVar5,piVar6);
  }
  else {
    if (param_3 != 0) {
      pcVar5 = "Invalid buffer pointer-vector property 0x%04x";
      uVar4 = 0xa002;
      goto LAB_00dbf014;
    }
    func_0x00dbfd90(param_2,0xa003,"NULL pointer");
  }
  func_0x00e730b2(iVar1 + 0x1a4b0);
  piVar6 = param_2;
  if (param_2 != (int *)0x0) {
    LOCK();
    iVar1 = *param_2;
    *param_2 = *param_2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (param_2 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar6);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00dbf070:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbf094(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbf0a0(undefined4 param_1,undefined1 *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  float fVar5;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a4a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbf205:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar4 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar4 = func_0x00dbca40(iVar1,param_1);
      if (iVar4 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if (param_3 == (float *)0x0) {
        func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
      }
      else if (param_2 == &DAT_0000200b) {
        iVar2 = *(int *)(iVar4 + 0x10);
        if (iVar2 == 0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (float)((double)*(int *)(iVar4 + 0x18) +
                         (double)(&DAT_011a2c10)[-(*(int *)(iVar4 + 0x18) >> 0x1f)]) /
                  (float)((double)iVar2 + (double)(&DAT_011a2c10)[-(iVar2 >> 0x1f)]);
        }
        *param_3 = fVar5;
      }
      else {
        func_0x00dbfd90(piStack_18,0xa002,"Invalid buffer float property 0x%04x",param_2);
      }
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbf205;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void Catch_All_00dbf217(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbf230(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a4e5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == &DAT_0000200b) {
    FUN_00dbf0a0(param_1,&DAT_0000200b,param_3);
    goto LAB_00dbf36a;
  }
  puStack_14 = (undefined1 *)&uStack_30;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbf36a;
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dbf383:
    *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
    func_0x00e7304a(6);
    func_0x008aaff0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x1a4dc);
  if (iVar3 == 0x7fffffff) goto LAB_00dbf383;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar3 = func_0x00dbca40(iVar1,param_1);
  if (iVar3 == 0) {
    pcVar5 = "Invalid buffer ID %u";
    uVar4 = 0xa001;
LAB_00dbf30a:
    func_0x00dbfd90(piStack_18,uVar4,pcVar5,param_1);
  }
  else {
    if (param_3 != 0) {
      pcVar5 = "Invalid buffer float-vector property 0x%04x";
      uVar4 = 0xa002;
      param_1 = param_2;
      goto LAB_00dbf30a;
    }
    func_0x00dbfd90(piStack_18,0xa003,"NULL pointer");
  }
  func_0x00e730b2(iVar1 + 0x1a4b0);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00dbf36a:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbf38e(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbf3a0(int *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  char *extraout_ECX_01;
  int *unaff_FS_OFFSET;
  undefined8 in_MM3;
  undefined4 uVar8;
  char *pcVar9;
  uint uStack_84;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  char *pcStack_5c;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  int *piStack_4c;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a545;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_84 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_84;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_54 = param_1;
  piStack_58 = param_3;
  uStack_8 = 0;
  uStack_18 = uStack_84;
  func_0x00dc77d0(&piStack_4c);
  uStack_8._0_1_ = 1;
  if (piStack_4c == (int *)0x0) goto LAB_00dbf64c;
  iVar6 = piStack_4c[0x48];
  pcVar1 = (char *)(iVar6 + 0x1a4b0);
  pcStack_5c = pcVar1;
  iStack_50 = iVar6;
  iVar5 = func_0x00e7307f(pcVar1);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar6 + 0x1a4dc);
    if (iVar5 == 0x7fffffff) goto LAB_00dbf674;
    uStack_8._0_1_ = 2;
    param_1 = (int *)func_0x00dbca40(iStack_50,param_1);
    if (param_1 == (int *)0x0) {
      pcVar9 = "Invalid buffer ID %u";
      uVar8 = 0xa001;
      param_2 = piStack_54;
LAB_00dbf611:
      func_0x00dbfd90(piStack_4c,uVar8,pcVar9,param_2);
LAB_00dbf61c:
      func_0x00e730b2(pcVar1);
      if (piStack_4c != (int *)0x0) {
        LOCK();
        iVar6 = *piStack_4c;
        *piStack_4c = *piStack_4c + -1;
        UNLOCK();
        if ((iVar6 == 1) && (piStack_4c != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_4c);
        }
      }
LAB_00dbf64c:
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
    if (param_3 == (int *)0x0) {
      func_0x00dbfd90(piStack_4c,0xa003,"NULL pointer");
      goto LAB_00dbf61c;
    }
    if (0x2001 < (int)param_2) {
      switch((int)param_2 + -0x2002) {
      case 0:
        cVar4 = *(char *)((int)param_1 + 0x15);
        if ((cVar4 == '\x06') || (cVar4 == '\a')) {
          *param_3 = 4;
        }
        else {
          iVar6 = func_0x00ddbb50(CONCAT31((int3)((uint)((int)param_2 + -0x2002) >> 8),cVar4));
          *param_3 = iVar6 << 3;
        }
        break;
      case 1:
        iVar6 = func_0x00ddbba0((char)param_1[5],param_1[9]);
        *param_3 = iVar6;
        break;
      case 2:
        if (*param_1 == 0) {
          *param_3 = param_1[3] - param_1[2];
        }
        else {
          *param_3 = 0;
        }
        break;
      default:
LAB_00dbf606:
        pcVar9 = "Invalid buffer integer property 0x%04x";
        uVar8 = 0xa002;
        goto LAB_00dbf611;
      case 7:
        iVar6 = param_1[9];
        uVar2 = (undefined1)param_1[5];
        if (*(char *)((int)param_1 + 0x15) == '\x06') {
          iVar6 = func_0x00ddbba0(uVar2,iVar6);
          *param_3 = ((uint)param_1[6] / (uint)param_1[7]) * ((param_1[7] - 1U >> 1) + 4) * iVar6;
        }
        else if (*(char *)((int)param_1 + 0x15) == '\a') {
          iVar6 = func_0x00ddbba0(uVar2,iVar6);
          *param_3 = ((uint)param_1[6] / (uint)param_1[7]) * ((param_1[7] - 2U >> 1) + 7) * iVar6;
        }
        else {
          iVar6 = func_0x00ddbba0(uVar2,iVar6);
          iVar5 = func_0x00ddbb50(*(undefined1 *)((int)param_1 + 0x15));
          *piStack_58 = ((uint)param_1[6] / (uint)param_1[7]) * iVar5 * iVar6;
        }
        break;
      case 8:
        *param_3 = param_1[6];
        break;
      case 10:
        *param_3 = param_1[0xf];
        break;
      case 0xb:
        *param_3 = param_1[0x10];
      }
      goto LAB_00dbf61c;
    }
    if (param_2 == (int *)0x2001) {
      *param_3 = param_1[4];
      goto LAB_00dbf61c;
    }
    if (param_2 == (int *)0x1997) {
      uVar7 = (uint)*(byte *)(param_1 + 8);
      if (uVar7 == 0) {
LAB_00dbf4e6:
        *param_3 = 0;
      }
      else {
        if (uVar7 != 1) goto LAB_00dbf6bd;
LAB_00dbf4da:
        *param_3 = 1;
      }
      goto LAB_00dbf61c;
    }
    if (param_2 != (int *)0x1998) {
      if (param_2 != (int *)0x199d) goto LAB_00dbf606;
      *param_3 = param_1[0x11];
      goto LAB_00dbf61c;
    }
    uVar7 = (uint)*(byte *)((int)param_1 + 0x21);
    if (uVar7 == 0) goto LAB_00dbf4e6;
    if (uVar7 == 1) goto LAB_00dbf4da;
    if (uVar7 == 2) {
      *param_3 = 2;
      goto LAB_00dbf61c;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
LAB_00dbf674:
    *(int *)(iVar6 + 0x1a4dc) = iVar5 + -1;
    func_0x00e7304a(6);
    uVar7 = extraout_ECX;
  }
  uVar8 = func_0x00464a50(auStack_30,uVar7);
  uStack_8._0_1_ = 5;
  uVar8 = func_0x005f2a30(auStack_48,"Invalid AmbiScaling: ",uVar8);
  uStack_8._0_1_ = 6;
  func_0x00463580(uVar8);
  func_0x00e87d2e(auStack_68,&DAT_0127ffdc);
  uVar7 = extraout_ECX_00;
LAB_00dbf6bd:
  uVar8 = func_0x00464a50(auStack_48,uVar7);
  uStack_8._0_1_ = 3;
  uVar8 = func_0x005f2a30(auStack_30,"Invalid AmbiLayout: ",uVar8);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x00463580(uVar8);
  uVar8 = func_0x00e87d2e(auStack_74,&DAT_0127ffdc);
  pmaddwd(in_MM3,in_MM3);
  *extraout_ECX_01 = *extraout_ECX_01 + (char)((uint)param_1 >> 8);
  cVar4 = (char)uVar8;
  *pcVar1 = *pcVar1 + cVar4;
  *pcVar1 = *pcVar1 + cVar4;
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)((int)param_1 + -0xb) =
       *(char *)((int)param_1 + -0xb) + (char)((uint)extraout_ECX_01 >> 8);
  pcVar3 = (code *)swi(1);
  (*pcVar3)(uVar8);
  return;
}



void Catch_All_00dbf668(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *extraout_ECX_01;
  int unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  undefined8 in_MM3;
  
  func_0x008aaff0();
  iVar3 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar3 + -1;
  func_0x00e7304a(6);
  uVar4 = func_0x00464a50(unaff_EBP + -0x2c,extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar4 = func_0x005f2a30(unaff_EBP + -0x44,"Invalid AmbiScaling: ",uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  func_0x00463580(uVar4);
  func_0x00e87d2e(unaff_EBP + -100,&DAT_0127ffdc);
  uVar4 = func_0x00464a50(unaff_EBP + -0x44,extraout_ECX_00);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar4 = func_0x005f2a30(unaff_EBP + -0x2c,"Invalid AmbiLayout: ",uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  func_0x00463580(uVar4);
  uVar4 = func_0x00e87d2e(unaff_EBP + -0x70,&DAT_0127ffdc);
  pmaddwd(in_MM3,in_MM3);
  *extraout_ECX_01 = *extraout_ECX_01 + (char)((uint)unaff_EBX >> 8);
  cVar2 = (char)uVar4;
  *unaff_ESI = *unaff_ESI + cVar2;
  *unaff_ESI = *unaff_ESI + cVar2;
  *unaff_ESI = *unaff_ESI + cVar2;
  *(char *)(unaff_EBX + -0xb) = *(char *)(unaff_EBX + -0xb) + (char)((uint)extraout_ECX_01 >> 8);
  pcVar1 = (code *)swi(1);
  (*pcVar1)(uVar4);
  return;
}



void FUN_00dbf730(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int *extraout_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined8 uVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  int *piVar6;
  
  piVar6 = param_2;
  puStack_c = &DAT_00f6a585;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((int)param_2 < 0x2002) {
    if ((((param_2 == (int *)0x2001) || (param_2 == (int *)0x1997)) || (param_2 == (int *)0x1998))
       || (param_2 == (int *)0x199d)) {
LAB_00dbf7d7:
      FUN_00dbf3a0(param_1,param_2,param_3);
      goto LAB_00dbf7e6;
    }
  }
  else {
    switch(param_2) {
    case (int *)0x2002:
    case (int *)0x2003:
    case (int *)0x2004:
    case (int *)0x2008:
    case (int *)0x2009:
    case (int *)0x200a:
    case (int *)0x200c:
    case (int *)0x200d:
      goto LAB_00dbf7d7;
    }
  }
  func_0x00dc77d0(&param_2);
  uStack_8._0_1_ = 1;
  if (param_2 != (int *)0x0) {
    iVar2 = param_2[0x48];
    iVar5 = func_0x00e7307f(iVar2 + 0x1a4b0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar2 + 0x1a4dc);
      if (iVar5 != 0x7fffffff) {
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        iVar5 = func_0x00dbca40(iVar2,param_1);
        if (iVar5 == 0) {
          func_0x00dbfd90(param_2,0xa001,"Invalid buffer ID %u",param_1);
        }
        else if (param_3 == (undefined4 *)0x0) {
          func_0x00dbfd90(param_2,0xa003,"NULL pointer");
        }
        else if (piVar6 == (int *)0x2015) {
          *param_3 = *(undefined4 *)(iVar5 + 0x54);
          param_3[1] = *(undefined4 *)(iVar5 + 0x58);
        }
        else {
          func_0x00dbfd90(param_2,0xa002,"Invalid buffer integer-vector property 0x%04x",piVar6);
        }
        func_0x00e730b2(iVar2 + 0x1a4b0);
        piVar6 = param_2;
        if (param_2 != (int *)0x0) {
          LOCK();
          iVar2 = *param_2;
          *param_2 = *param_2 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (param_2 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piVar6);
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
        }
        goto LAB_00dbf7e6;
      }
    }
    else {
      iVar5 = func_0x00e7304a(5);
    }
    *(int *)(iVar2 + 0x1a4dc) = iVar5 + -1;
    uVar7 = func_0x00e7304a(6);
    cVar4 = *(char *)(unaff_EBX + ((uint)uVar7 & 0xff));
    piVar6 = (int *)CONCAT31((int3)((ulonglong)uVar7 >> 8),cVar4);
    pcVar1 = (char *)((int)((ulonglong)uVar7 >> 0x20) + 0xdbf7);
    *pcVar1 = *pcVar1 + cVar4;
    *(char *)piVar6 = (char)*piVar6 + cVar4;
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar6);
    *piVar6 = (int)(*piVar6 + (int)piVar6);
    *(char *)piVar6 = (char)*piVar6 + cVar4;
    *piVar6 = (int)(*piVar6 + (int)piVar6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_00dbf7e6:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dbf8cf(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBX;
  int unaff_ESI;
  undefined8 uVar6;
  int *piVar5;
  
  func_0x008aaff0();
  iVar4 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar4 + -1;
  uVar6 = func_0x00e7304a(6);
  cVar3 = *(char *)(unaff_EBX + ((uint)uVar6 & 0xff));
  piVar5 = (int *)CONCAT31((int3)((ulonglong)uVar6 >> 8),cVar3);
  pcVar1 = (char *)((int)((ulonglong)uVar6 >> 0x20) + 0xdbf7);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar5);
  *piVar5 = (int)(*piVar5 + (int)piVar5);
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *piVar5 = (int)(*piVar5 + (int)piVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 FUN_00dbf900(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a5bd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
LAB_00dbf9b9:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  iVar4 = piStack_18[0x48];
  iVar1 = iVar4 + 0x1a4b0;
  iVar3 = func_0x00e7307f(iVar1);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar4 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      if (param_1 != 0) {
        iVar4 = func_0x00dbca40(iVar4,param_1);
        if (iVar4 == 0) {
          func_0x00e730b2(iVar1);
          if (piStack_18 != (int *)0x0) {
            LOCK();
            iVar1 = *piStack_18;
            *piStack_18 = *piStack_18 + -1;
            UNLOCK();
            if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
              func_0x00ddc830();
              func_0x00ddbb20(piStack_18);
            }
          }
          goto LAB_00dbf9b9;
        }
      }
      func_0x00e730b2(iVar1);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 1;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar4 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}



void Catch_All_00dbfa11(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dbfa30(uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  char *pcVar6;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a5f5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dbfc24;
  iVar3 = piStack_18[0x48];
  iVar4 = iVar3 + 0x1a4b0;
  iVar2 = func_0x00e7307f(iVar4);
  if (iVar2 != 0) {
    iVar2 = func_0x00e7304a(5);
LAB_00dbfc44:
    *(int *)(iVar3 + 0x1a4dc) = iVar2 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar2 = *(int *)(iVar3 + 0x1a4dc);
  if (iVar2 == 0x7fffffff) goto LAB_00dbfc44;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar3 = func_0x00dbca40(iVar3,param_1);
  if (iVar3 == 0) {
    func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
    goto LAB_00dbfbf4;
  }
  if ((param_4 & 0xfffffff8) == 0) {
    if ((param_4 & 3) == 0) {
      pcVar6 = "Mapping buffer %u without read or write access";
      goto LAB_00dbfb74;
    }
    uVar5 = (*(uint *)(iVar3 + 0x28) ^ param_4) & param_4;
    if ((*(int *)(iVar3 + 0x5c) == 0) || ((param_4 & 4) != 0)) {
      if (*(int *)(iVar3 + 0x48) == 0) {
        if ((uVar5 & 1) == 0) {
          if ((uVar5 & 2) == 0) {
            if ((uVar5 & 4) == 0) {
              if ((-1 < (int)param_2) && (0 < (int)param_3)) {
                if ((param_2 < *(uint *)(iVar3 + 0x38)) &&
                   (param_3 <= *(uint *)(iVar3 + 0x38) - param_2)) {
                  iVar2 = *(int *)(iVar3 + 8);
                  *(uint *)(iVar3 + 0x48) = param_4;
                  *(uint *)(iVar3 + 0x4c) = param_2;
                  *(uint *)(iVar3 + 0x50) = param_3;
                  func_0x00e730b2(iVar4);
                  func_0x00dbbf30();
                  *unaff_FS_OFFSET = iStack_10;
                  return iVar2 + param_2;
                }
              }
              func_0x00dbfd90(piStack_18,0xa003,"Mapping invalid range %d+%d for buffer %u",param_2,
                              param_3,param_1);
              goto LAB_00dbfbf4;
            }
            pcVar6 = "Mapping buffer %u persistently without persistent access";
          }
          else {
            pcVar6 = "Mapping buffer %u for writing without write access";
          }
        }
        else {
          pcVar6 = "Mapping buffer %u for reading without read access";
        }
        goto LAB_00dbfb74;
      }
      func_0x00dbfd90(piStack_18,0xa004,"Mapping already-mapped buffer %u",param_1);
    }
    else {
      func_0x00dbfd90(piStack_18,0xa004,"Mapping in-use buffer %u without persistent mapping",
                      param_1);
    }
  }
  else {
    pcVar6 = "Invalid map flags 0x%x";
    param_1 = param_4 & 0xfffffff8;
LAB_00dbfb74:
    func_0x00dbfd90(piStack_18,0xa003,pcVar6,param_1);
  }
LAB_00dbfbf4:
  func_0x00e730b2(iVar4);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
LAB_00dbfc24:
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void Catch_All_00dbfc38(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dbfc50(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a635;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dbfd5b:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar1 = piStack_18[0x48];
  iVar3 = func_0x00e7307f(iVar1 + 0x1a4b0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x1a4dc);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      iVar3 = func_0x00dbca40(iVar1,param_1);
      if (iVar3 == 0) {
        func_0x00dbfd90(piStack_18,0xa001,"Invalid buffer ID %u",param_1);
      }
      else if (*(int *)(iVar3 + 0x48) == 0) {
        func_0x00dbfd90(piStack_18,0xa004,"Unmapping unmapped buffer %u",param_1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x50) = 0;
      }
      func_0x00e730b2(iVar1 + 0x1a4b0);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dbfd5b;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x1a4dc) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dbfd6d(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dbfff0(void)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a69d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_18[0x56];
    piStack_18[0x56] = 0;
    UNLOCK();
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar2 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return iVar1;
  }
  if (1 < DAT_012ba4e8) {
    func_0x00ddf410(2,DAT_013e0188,"Querying error state on null context (implicitly 0x%04x)\n",
                    0xa004);
  }
  piVar4 = piStack_18;
  if ((DAT_013e0184 != '\0') && (BVar3 = IsDebuggerPresent(), piVar4 = piStack_18, BVar3 != 0)) {
    DebugBreak();
    piVar4 = piStack_18;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar4 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar4);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0xa004;
}



void Catch_All_00dc00fb(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc03e0(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a70d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
LAB_00dc0480:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar4 = piStack_18 + 0x4a;
  iVar3 = func_0x00e7307f(piVar4);
  if (iVar3 == 0) {
    iVar3 = piVar2[0x55];
    if (iVar3 != 0x7fffffff) {
      *(undefined1 *)((int)piStack_18 + 0x125) = 1;
      func_0x00e730b2(piVar4);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dc0480;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  piVar2[0x55] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void Catch_All_00dc0492(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc04b0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a745;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if (param_1 == 0x200) {
      piVar4 = piStack_18 + 0x4a;
      iVar3 = func_0x00e7307f(piVar4);
      if (iVar3 != 0) {
        iVar3 = func_0x00e7304a(5);
LAB_00dc05c7:
        piVar2[0x55] = iVar3 + -1;
        func_0x00e7304a(6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = piVar2[0x55];
      if (iVar3 == 0x7fffffff) goto LAB_00dc05c7;
      uStack_8._0_1_ = 2;
      *(undefined1 *)((int)piStack_18 + 0x15d) = 0;
      if (*(char *)((int)piStack_18 + 0x125) == '\0') {
        func_0x00dc02a0(piStack_18);
      }
      else {
        *(undefined1 *)(piStack_18 + 0x49) = 1;
      }
      func_0x00e730b2(piVar4);
    }
    else if (param_1 == 0x19ab) {
      LOCK();
      *(undefined1 *)((int)piStack_18 + 0x19) = 0;
      UNLOCK();
    }
    else {
      func_0x00dbfd90(piStack_18,0xa003,"Invalid disable property 0x%04x",param_1);
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar3 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc05bb(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc05e0(int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  int *unaff_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_7c;
  int *piStack_78;
  int iStack_70;
  undefined *puStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  float fStack_5c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a785;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0();
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) goto LAB_00dc071d;
  if (param_1 < 0xd002) {
    if (param_1 == 0xd001) {
      uVar4 = 1;
    }
    else {
      if (param_1 != 0) goto LAB_00dc06e2;
      uVar4 = 0;
    }
    goto LAB_00dc0672;
  }
  switch(param_1) {
  case 0xd002:
    uVar4 = 2;
    break;
  case 0xd003:
    uVar4 = 3;
    break;
  case 0xd004:
    uVar4 = 4;
    break;
  case 0xd005:
    uVar4 = 5;
    break;
  case 0xd006:
    uVar4 = 6;
    break;
  default:
LAB_00dc06e2:
    func_0x00dbfd90();
    goto LAB_00dc06f6;
  }
LAB_00dc0672:
  iVar3 = func_0x00e7307f();
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a();
LAB_00dc073b:
    bVar5 = SBORROW4(iVar3,1);
    piStack_18[0x55] = iVar3 + -1;
    func_0x00e7304a();
    fStack_5c = 6.2312614e+26;
    if (bVar5) {
      puStack_6c = &DAT_00f6a7c5;
      iStack_70 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)&iStack_70;
      uStack_68 = 0;
      puStack_64 = &stack0xfffffffc;
      func_0x00dc77d0();
      uStack_68._0_1_ = 1;
      if (piStack_78 != (int *)0x0) {
        if ((fStack_5c < 0.0) || (sVar2 = func_0x00e87c3c(), 0 < sVar2)) {
          func_0x00dbfd90(piStack_78,0xa003,"Doppler factor %f out of range",(double)fStack_5c);
        }
        else {
          func_0x005797f0();
          uStack_68._0_1_ = 2;
          piStack_78[0x58] = (int)fStack_5c;
          if (*(char *)((int)piStack_78 + 0x125) == '\0') {
            func_0x00dc02a0(piStack_78);
            func_0x00e730b2(uStack_7c);
          }
          else {
            *(undefined1 *)(piStack_78 + 0x49) = 1;
            func_0x00e730b2(uStack_7c);
          }
        }
        if (piStack_78 != (int *)0x0) {
          LOCK();
          iVar3 = *piStack_78;
          *piStack_78 = *piStack_78 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (piStack_78 != (int *)0x0)) {
            func_0x00ddc830();
            func_0x00ddbb20(piStack_78);
          }
        }
      }
      *unaff_FS_OFFSET = iStack_70;
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = piStack_18[0x55];
  if (iVar3 == 0x7fffffff) goto LAB_00dc073b;
  uStack_8._0_1_ = 2;
  *(undefined1 *)(piStack_18 + 0x57) = uVar4;
  if (*(char *)((int)piStack_18 + 0x15d) == '\0') {
    if (*(char *)((int)piStack_18 + 0x125) != '\0') {
      *(undefined1 *)(piStack_18 + 0x49) = 1;
      goto LAB_00dc06d7;
    }
    func_0x00dc02a0();
    func_0x00e730b2();
  }
  else {
LAB_00dc06d7:
    func_0x00e730b2();
  }
LAB_00dc06f6:
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20();
    }
  }
LAB_00dc071d:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc072f(void)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_54;
  int *piStack_50;
  int iStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  
  func_0x008aaff0();
  iVar3 = func_0x00e7304a();
  bVar4 = SBORROW4(iVar3,1);
  *(int *)(unaff_ESI + 0x2c) = iVar3 + -1;
  func_0x00e7304a();
  if (bVar4) {
    puStack_44 = &DAT_00f6a7c5;
    iStack_48 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&iStack_48;
    uStack_40 = 0;
    func_0x00dc77d0();
    uStack_40._0_1_ = 1;
    if (piStack_50 != (int *)0x0) {
      sVar2 = func_0x00e87c3c();
      if (sVar2 < 1) {
        func_0x005797f0();
        uStack_40._0_1_ = 2;
        piStack_50[0x58] = 0x6c00dc06;
        if (*(char *)((int)piStack_50 + 0x125) == '\0') {
          func_0x00dc02a0(piStack_50);
          func_0x00e730b2(uStack_54);
        }
        else {
          *(undefined1 *)(piStack_50 + 0x49) = 1;
          func_0x00e730b2(uStack_54);
        }
      }
      else {
        func_0x00dbfd90(piStack_50,0xa003,"Doppler factor %f out of range",0x45801b80c0000000);
      }
      if (piStack_50 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_50;
        *piStack_50 = *piStack_50 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piStack_50 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_50);
        }
      }
    }
    *unaff_FS_OFFSET = iStack_48;
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc0760(float param_1)

{
  int iVar1;
  short sVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a7c5;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0();
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if ((param_1 < 0.0) || (sVar2 = func_0x00e87c3c(), 0 < sVar2)) {
      func_0x00dbfd90(piStack_18,0xa003,"Doppler factor %f out of range",(double)param_1);
    }
    else {
      func_0x005797f0();
      uStack_8._0_1_ = 2;
      piStack_18[0x58] = (int)param_1;
      if (*(char *)((int)piStack_18 + 0x125) == '\0') {
        func_0x00dc02a0(piStack_18);
        func_0x00e730b2(uStack_1c);
      }
      else {
        *(undefined1 *)(piStack_18 + 0x49) = 1;
        func_0x00e730b2(uStack_1c);
      }
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc0884(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc0890(float param_1)

{
  int iVar1;
  short sVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a805;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0();
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if ((param_1 < 0.0) || (sVar2 = func_0x00e87c3c(), 0 < sVar2)) {
      func_0x00dbfd90(piStack_18,0xa003,"Doppler velocity %f out of range",(double)param_1);
    }
    else {
      func_0x005797f0();
      uStack_8._0_1_ = 2;
      piStack_18[0x59] = (int)param_1;
      if (*(char *)((int)piStack_18 + 0x125) == '\0') {
        func_0x00dc02a0(piStack_18);
        func_0x00e730b2(uStack_1c);
      }
      else {
        *(undefined1 *)(piStack_18 + 0x49) = 1;
        func_0x00e730b2(uStack_1c);
      }
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc09b4(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc09c0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a845;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if (param_1 == 0x200) {
      piVar1 = piStack_18 + 0x4a;
      iVar4 = func_0x00e7307f(piVar1);
      if (iVar4 != 0) {
        iVar4 = func_0x00e7304a(5);
LAB_00dc0ae5:
        piVar3[0x55] = iVar4 + -1;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = piVar3[0x55];
      if (iVar4 == 0x7fffffff) goto LAB_00dc0ae5;
      uStack_8._0_1_ = 2;
      *(undefined1 *)((int)piStack_18 + 0x15d) = 1;
      if (*(char *)((int)piStack_18 + 0x125) == '\0') {
        func_0x00dc02a0(piStack_18);
      }
      else {
        *(undefined1 *)(piStack_18 + 0x49) = 1;
      }
      func_0x00e730b2(piVar1);
    }
    else if (param_1 == 0x19ab) {
      func_0x00dbfd90(piStack_18,0xa004,
                      "Re-enabling AL_STOP_SOURCES_ON_DISCONNECT_SOFT not yet supported");
    }
    else {
      func_0x00dbfd90(piStack_18,0xa003,"Invalid enable property 0x%04x",param_1);
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar4 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc0ad9(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



bool FUN_00dc0b00(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  float fVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a885;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return false;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00dc0cb2:
    piVar2[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = piVar2[0x55];
  if (iVar4 == 0x7fffffff) goto LAB_00dc0cb2;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  bVar6 = false;
  if (param_1 < 0xc001) {
    if (param_1 == 0xc000) {
      fVar7 = (float)piStack_18[0x58];
      goto LAB_00dc0bdd;
    }
    if (param_1 != 0x1210) {
      if (param_1 == 0x1211) {
        bVar6 = DAT_012ba664 != '\0';
        goto LAB_00dc0c62;
      }
      if (param_1 != 0x200e) goto LAB_00dc0c35;
      fVar7 = 1000.0 / (float)piStack_18[7];
      goto LAB_00dc0bdd;
    }
  }
  else {
    if (0xc003 < param_1) {
      if (param_1 == 0xd000) {
        if ((char)piStack_18[0x57] == '\x02') {
          bVar6 = true;
        }
        goto LAB_00dc0c62;
      }
LAB_00dc0c35:
      func_0x00dbfd90(piStack_18,0xa003,"Invalid boolean property 0x%04x",param_1);
      goto LAB_00dc0c62;
    }
    if (param_1 == 0xc003) {
      fVar7 = (float)piStack_18[0x5a];
    }
    else {
      if (param_1 != 0xc001) {
        if (param_1 == 0xc002) {
          bVar6 = *(char *)((int)piStack_18 + 0x125) != '\0';
          goto LAB_00dc0c62;
        }
        goto LAB_00dc0c35;
      }
      fVar7 = (float)piStack_18[0x59];
    }
LAB_00dc0bdd:
    if (fVar7 == 0.0) goto LAB_00dc0c62;
  }
  bVar6 = true;
LAB_00dc0c62:
  func_0x00e730b2(piVar5);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return bVar6;
}



void Catch_All_00dc0ca6(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc0cc0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int *unaff_FS_OFFSET;
  bool bVar4;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = param_2;
  puStack_c = &DAT_00f6a8bd;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == (int *)0x0) {
LAB_00dc0d19:
    func_0x00dc77d0(&param_2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (param_2 != (int *)0x0) {
      if (piVar2 == (int *)0x0) {
        func_0x00dbfd90(param_2,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(param_2,0xa003,"Invalid boolean-vector property 0x%04x",param_1);
      }
      piVar2 = param_2;
      if (param_2 != (int *)0x0) {
        LOCK();
        iVar1 = *param_2;
        *param_2 = *param_2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (param_2 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piVar2);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
    }
  }
  else {
    if (param_1 < 0xc001) {
      if (((param_1 != 0xc000) && (param_1 != 0x1210)) && (param_1 != 0x1211)) {
        bVar4 = param_1 == 0x200e;
LAB_00dc0d17:
        if (!bVar4) goto LAB_00dc0d19;
      }
    }
    else if (param_1 < 0xc004) {
      if ((param_1 != 0xc003) && (param_1 != 0xc001)) {
        bVar4 = param_1 == 0xc002;
        goto LAB_00dc0d17;
      }
    }
    else if (param_1 != 0xd000) goto LAB_00dc0d19;
    uVar3 = FUN_00dc0b00(param_1);
    *(undefined1 *)piVar2 = uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc0dd3(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



float10 FUN_00dc0de0(int param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a8f5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return (float10)0;
  }
  piVar6 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar6);
  if (iVar4 != 0) {
    iVar4 = func_0x00e7304a(5);
LAB_00dc0fc2:
    piVar3[0x55] = iVar4 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    fVar7 = (float10)(*pcVar2)();
    return fVar7;
  }
  iVar4 = piVar3[0x55];
  if (iVar4 == 0x7fffffff) goto LAB_00dc0fc2;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  fVar1 = 0.0;
  if (param_1 < 0xc001) {
    if (param_1 == 0xc000) {
      fVar1 = (float)piStack_18[0x58];
      goto LAB_00dc0f71;
    }
    if (param_1 == 0x1210) {
      fVar1 = 7.0;
      goto LAB_00dc0f71;
    }
    if (param_1 == 0x1211) {
      uVar5 = (uint)DAT_012ba664;
      goto LAB_00dc0f64;
    }
    if (param_1 == 0x200e) {
      fVar1 = 1000.0 / (float)piStack_18[7];
      goto LAB_00dc0f71;
    }
  }
  else if (param_1 < 0xc004) {
    if (param_1 == 0xc003) {
      fVar1 = (float)piStack_18[0x5a];
      goto LAB_00dc0f71;
    }
    if (param_1 == 0xc001) {
      fVar1 = (float)piStack_18[0x59];
      goto LAB_00dc0f71;
    }
    if (param_1 == 0xc002) {
      if (*(char *)((int)piStack_18 + 0x125) != '\0') {
        fVar1 = 1.0;
      }
      goto LAB_00dc0f71;
    }
  }
  else if (param_1 == 0xd000) {
    uVar5 = func_0x00dc01c0((char)piStack_18[0x57]);
LAB_00dc0f64:
    fVar1 = (float)(int)uVar5;
    goto LAB_00dc0f71;
  }
  func_0x00dbfd90(piStack_18,0xa003,"Invalid double property 0x%04x",param_1);
LAB_00dc0f71:
  func_0x00e730b2(piVar6);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (float10)fVar1;
}



void Catch_All_00dc0fb6(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc0fd0(int param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  float10 fVar4;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pdVar2 = param_2;
  puStack_c = &DAT_00f6a92d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == (double *)0x0) {
LAB_00dc1029:
    func_0x00dc77d0(&param_2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (param_2 != (double *)0x0) {
      if (pdVar2 == (double *)0x0) {
        func_0x00dbfd90(param_2,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(param_2,0xa003,"Invalid double-vector property 0x%04x",param_1);
      }
      pdVar2 = param_2;
      if (param_2 != (double *)0x0) {
        LOCK();
        iVar1 = *(int *)param_2;
        *(int *)param_2 = *(int *)param_2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (param_2 != (double *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(pdVar2);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
    }
  }
  else {
    if (param_1 < 0xc001) {
      if (((param_1 != 0xc000) && (param_1 != 0x1210)) && (param_1 != 0x1211)) {
        bVar3 = param_1 == 0x200e;
LAB_00dc1027:
        if (!bVar3) goto LAB_00dc1029;
      }
    }
    else if (param_1 < 0xc004) {
      if ((param_1 != 0xc003) && (param_1 != 0xc001)) {
        bVar3 = param_1 == 0xc002;
        goto LAB_00dc1027;
      }
    }
    else if (param_1 != 0xd000) goto LAB_00dc1029;
    fVar4 = (float10)FUN_00dc0de0(param_1);
    *pdVar2 = (double)fVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc10e3(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



float10 FUN_00dc10f0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  uint uStack_30;
  float fStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a965;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return (float10)0;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar3 = func_0x00e7307f(piVar5);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dc12b6:
    piVar2[0x55] = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    fVar6 = (float10)(*pcVar1)();
    return fVar6;
  }
  iVar3 = piVar2[0x55];
  if (iVar3 == 0x7fffffff) goto LAB_00dc12b6;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  fStack_1c = 0.0;
  if (param_1 < 0xc001) {
    if (param_1 == 0xc000) {
      fStack_1c = (float)piStack_18[0x58];
      goto LAB_00dc1265;
    }
    if (param_1 == 0x1210) {
      fStack_1c = 7.0;
      goto LAB_00dc1265;
    }
    if (param_1 == 0x1211) {
      uVar4 = (uint)DAT_012ba664;
      goto LAB_00dc1259;
    }
    if (param_1 == 0x200e) {
      fStack_1c = 1000.0 / (float)piStack_18[7];
      goto LAB_00dc1265;
    }
  }
  else if (param_1 < 0xc004) {
    if (param_1 == 0xc003) {
      fStack_1c = (float)piStack_18[0x5a];
      goto LAB_00dc1265;
    }
    if (param_1 == 0xc001) {
      fStack_1c = (float)piStack_18[0x59];
      goto LAB_00dc1265;
    }
    if (param_1 == 0xc002) {
      if (*(char *)((int)piStack_18 + 0x125) != '\0') {
        fStack_1c = 1.0;
      }
      goto LAB_00dc1265;
    }
  }
  else if (param_1 == 0xd000) {
    uVar4 = func_0x00dc01c0((char)piStack_18[0x57]);
LAB_00dc1259:
    fStack_1c = (float)(int)uVar4;
    goto LAB_00dc1265;
  }
  func_0x00dbfd90(piStack_18,0xa003,"Invalid float property 0x%04x",param_1);
LAB_00dc1265:
  func_0x00e730b2(piVar5);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (float10)fStack_1c;
}



void Catch_All_00dc12aa(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc12d0(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  float10 fVar4;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  pfVar2 = param_2;
  puStack_c = &DAT_00f6a99d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == (float *)0x0) {
LAB_00dc1329:
    func_0x00dc77d0(&param_2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (param_2 != (float *)0x0) {
      if (pfVar2 == (float *)0x0) {
        func_0x00dbfd90(param_2,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(param_2,0xa003,"Invalid float-vector property 0x%04x",param_1);
      }
      pfVar2 = param_2;
      if (param_2 != (float *)0x0) {
        LOCK();
        fVar1 = *param_2;
        *param_2 = (float)((int)*param_2 + -1);
        UNLOCK();
        if ((fVar1 == 1.4013e-45) && (param_2 != (float *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(pfVar2);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
    }
  }
  else {
    if (param_1 < 0xc001) {
      if (((param_1 != 0xc000) && (param_1 != 0x1210)) && (param_1 != 0x1211)) {
        bVar3 = param_1 == 0x200e;
LAB_00dc1327:
        if (!bVar3) goto LAB_00dc1329;
      }
    }
    else if (param_1 < 0xc004) {
      if ((param_1 != 0xc003) && (param_1 != 0xc001)) {
        bVar3 = param_1 == 0xc002;
        goto LAB_00dc1327;
      }
    }
    else if (param_1 != 0xd000) goto LAB_00dc1329;
    fVar4 = (float10)FUN_00dc10f0(param_1);
    *pfVar2 = (float)fVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc13e3(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint FUN_00dc13f0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6a9d5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar3 = func_0x00e7307f(piVar5);
  if (iVar3 != 0) {
    iVar3 = func_0x00e7304a(5);
LAB_00dc1616:
    piVar2[0x55] = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar3 = piVar2[0x55];
  if (iVar3 == 0x7fffffff) goto LAB_00dc1616;
  uVar4 = 0;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (param_1 < 0xc001) {
    if (param_1 == 0xc000) {
      uVar4 = (uint)(float)piStack_18[0x58];
      goto LAB_00dc15c6;
    }
    if (param_1 == 0x1210) {
      uVar4 = 7;
      goto LAB_00dc15c6;
    }
    if (param_1 == 0x1211) {
      uVar4 = (uint)DAT_012ba664;
      goto LAB_00dc15c6;
    }
    if (param_1 == 0x200e) {
      uVar4 = (uint)(1000.0 / (float)piStack_18[7]);
      goto LAB_00dc15c6;
    }
  }
  else {
    if (0xd000 < param_1) {
      if (param_1 == 0x202201) {
        if (DAT_012ba660 != '\0') {
          uVar4 = 0x4000000;
          goto LAB_00dc15c6;
        }
      }
      else {
        if (param_1 != 0x202202) goto LAB_00dc1557;
        if (DAT_012ba660 != '\0') {
          iVar3 = piStack_18[0x48];
          func_0x005797f0(iVar3 + 0x1a4b0);
          uVar4 = *(uint *)(iVar3 + 0x1a564);
          func_0x00e730b2(uStack_1c);
          goto LAB_00dc15c6;
        }
      }
      func_0x00dbfd90(piStack_18,0xa003,"[alGetInteger] EAX not enabled.");
      goto LAB_00dc15c6;
    }
    if (param_1 == 0xd000) {
      uVar4 = func_0x00dc01c0((char)piStack_18[0x57]);
      goto LAB_00dc15c6;
    }
    if (param_1 == 0xc001) {
      uVar4 = (uint)(float)piStack_18[0x59];
      goto LAB_00dc15c6;
    }
    if (param_1 == 0xc002) {
      uVar4 = (uint)(*(char *)((int)piStack_18 + 0x125) != '\0');
      goto LAB_00dc15c6;
    }
    if (param_1 == 0xc003) {
      uVar4 = (uint)(float)piStack_18[0x5a];
      goto LAB_00dc15c6;
    }
  }
LAB_00dc1557:
  func_0x00dbfd90(piStack_18,0xa003,"Invalid integer property 0x%04x",param_1);
LAB_00dc15c6:
  func_0x00e730b2(piVar5);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar4;
}



void Catch_All_00dc160a(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc1630(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = param_2;
  puStack_c = &DAT_00f6aa0d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == (int *)0x0) {
LAB_00dc1689:
    func_0x00dc77d0(&param_2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (param_2 != (int *)0x0) {
      if (piVar1 == (int *)0x0) {
        func_0x00dbfd90(param_2,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(param_2,0xa003,"Invalid integer-vector property 0x%04x",param_1);
      }
      piVar1 = param_2;
      if (param_2 != (int *)0x0) {
        LOCK();
        iVar2 = *param_2;
        *param_2 = *param_2 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (param_2 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piVar1);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
    }
  }
  else {
    if (param_1 < 0xc001) {
      if (((param_1 != 0xc000) && (param_1 != 0x1210)) && (param_1 != 0x1211)) {
        bVar3 = param_1 == 0x200e;
LAB_00dc1687:
        if (!bVar3) goto LAB_00dc1689;
      }
    }
    else if (param_1 < 0xc004) {
      if ((param_1 != 0xc003) && (param_1 != 0xc001)) {
        bVar3 = param_1 == 0xc002;
        goto LAB_00dc1687;
      }
    }
    else if (param_1 != 0xd000) goto LAB_00dc1689;
    iVar2 = FUN_00dc13f0(param_1);
    *piVar1 = iVar2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc1743(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dc1750(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6aa45;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  if (iVar4 == 0) {
    iVar4 = piVar3[0x55];
    if (iVar4 != 0x7fffffff) {
      iVar4 = 0;
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      if (param_1 == 0x19a2) {
        iVar4 = piStack_18[0x68];
      }
      else if (param_1 == 0x19a3) {
        iVar4 = piStack_18[0x69];
      }
      else {
        func_0x00dbfd90(piStack_18,0xa003,"Invalid pointer property 0x%04x",param_1);
      }
      func_0x00e730b2(piVar5);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return iVar4;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar3[0x55] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}



void Catch_All_00dc185c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc1880(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = param_2;
  puStack_c = &DAT_00f6aa7d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((param_2 == (int *)0x0) || ((param_1 != 0x19a2 && (param_1 != 0x19a3)))) {
    func_0x00dc77d0(&param_2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (param_2 != (int *)0x0) {
      if (piVar1 == (int *)0x0) {
        func_0x00dbfd90(param_2,0xa003,"NULL pointer");
      }
      else {
        func_0x00dbfd90(param_2,0xa003,"Invalid pointer-vector property 0x%04x",param_1);
      }
      piVar1 = param_2;
      if (param_2 != (int *)0x0) {
        LOCK();
        iVar2 = *param_2;
        *param_2 = *param_2 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (param_2 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piVar1);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
    }
  }
  else {
    iVar2 = FUN_00dc1750(param_1);
    *piVar1 = iVar2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc1962(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



char * FUN_00dc1970(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6aaad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return (char *)0x0;
  }
  pcVar2 = (char *)0x0;
  if (param_1 < 0xa002) {
    if (param_1 == 0xa001) {
      pcVar2 = "Invalid Name";
      goto LAB_00dc1a6f;
    }
    if (param_1 == 0) {
      pcVar2 = "No Error";
      goto LAB_00dc1a6f;
    }
  }
  else {
    if (param_1 < 0xb002) {
      if (param_1 == 0xb001) {
        pcVar2 = "OpenAL Community";
        goto LAB_00dc1a6f;
      }
      switch(param_1) {
      case 0xa002:
        pcVar2 = "Invalid Enum";
        break;
      case 0xa003:
        pcVar2 = "Invalid Value";
        break;
      case 0xa004:
        pcVar2 = "Invalid Operation";
        break;
      case 0xa005:
        pcVar2 = "Out of Memory";
        break;
      default:
        goto LAB_00dc1a42;
      }
      goto LAB_00dc1a6f;
    }
    if (param_1 == 0xb002) {
      pcVar2 = "1.1 ALSOFT 1.23.1";
      goto LAB_00dc1a6f;
    }
    if (param_1 == 0xb003) {
      pcVar2 = "OpenAL Soft";
      goto LAB_00dc1a6f;
    }
    if (param_1 == 0xb004) {
      pcVar2 = (char *)piStack_18[0x99];
      goto LAB_00dc1a6f;
    }
  }
LAB_00dc1a42:
  func_0x00dbfd90(piStack_18,0xa003,"Invalid string property 0x%04x",param_1);
LAB_00dc1a6f:
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return pcVar2;
}



void Catch_All_00dc1aa7(void)

{
  byte bVar1;
  code *pcVar2;
  uint *extraout_EDX;
  byte bVar3;
  uint unaff_EBX;
  
  func_0x008aaff0();
  bVar3 = (byte)(unaff_EBX | *extraout_EDX);
  bVar1 = bVar3 + (byte)*extraout_EDX;
  *extraout_EDX =
       (*extraout_EDX - CONCAT31((int3)((unaff_EBX | *extraout_EDX) >> 8),bVar1)) -
       (uint)CARRY1(bVar3,(byte)*extraout_EDX);
  *(byte *)extraout_EDX = (byte)*extraout_EDX & bVar1;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// WARNING: Instruction at (ram,0x00dc1c2a) overlaps instruction at (ram,0x00dc1c29)
// 
// WARNING: Removing unreachable block (ram,0x00dc1cd4)
// WARNING: Removing unreachable block (ram,0x00dc1cdf)
// WARNING: Removing unreachable block (ram,0x00dc1ce8)

char * FUN_00dc1ac0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  char *extraout_ECX;
  undefined2 extraout_DX;
  int iVar6;
  char *pcVar7;
  int *unaff_FS_OFFSET;
  byte bVar8;
  bool bVar9;
  uint auStack_60 [2];
  int *piStack_58;
  char *pcStack_54;
  undefined4 uStack_48;
  int *piStack_44;
  int *piStack_40;
  char *pcStack_3c;
  int **ppiStack_38;
  uint uStack_34;
  char acStack_24 [8];
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6aadd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  ppiStack_38 = &piStack_18;
  uStack_8 = 0;
  pcStack_3c = (char *)0xdc1afe;
  func_0x00dc77d0();
  piVar3 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return (char *)0x0;
  }
  pcVar7 = (char *)0x0;
  if (param_1 == 0x1213) {
    if (param_2 < 7) {
      bVar8 = (param_2 & 0xff) < 6;
      switch(param_2 & 0xff) {
      case 0:
        pcVar7 = "Nearest";
        break;
      case 1:
        pcVar7 = "Linear";
        break;
      case 2:
        pcVar7 = "Cubic";
        break;
      case 3:
        pcVar7 = "11th order Sinc (fast)";
        break;
      case 4:
        pcVar7 = "11th order Sinc";
        break;
      case 5:
        pcVar7 = "23rd order Sinc (fast)";
        break;
      case 6:
        pcVar7 = "23rd order Sinc";
        break;
      default:
        ppiStack_38 = (int **)0x10d088c;
        pcStack_3c = (char *)0xdc1bea;
        func_0x0063e9c0();
        pcStack_3c = "";
        piStack_40 = (int *)acStack_24;
        piStack_44 = (int *)0xdc1bf8;
        func_0x00e87d2e();
        iVar6 = (param_2 - (int)&pcStack_3c) - (uint)bVar8;
        bVar9 = CARRY1(bRam0000001b,(byte)iVar6);
        bRam0000001b = bRam0000001b + (byte)iVar6;
        pcVar7 = (char *)CONCAT22((short)((uint)iVar6 >> 0x10),
                                  ((short)iVar6 - (short)&pcStack_3c) - (ushort)bVar9);
        bVar8 = (byte)((uint)extraout_ECX >> 8);
        cVar1 = param_5._3_1_ + bVar8;
        if (cVar1 == '\0') {
          piStack_40 = (int *)&DAT_00f6ab15;
          piVar4 = (int *)*unaff_FS_OFFSET;
          pcStack_54 = pcVar7;
          piStack_44 = piVar4;
        }
        else {
          piVar4 = piStack_40;
          if ((POPCOUNT(cVar1) & 1U) == 0) {
            *pcVar7 = (*pcVar7 + '$') - CARRY1(param_5._3_1_,bVar8);
            pcVar2 = (code *)swi(3);
            pcVar7 = (char *)(*pcVar2)();
            return pcVar7;
          }
        }
        *extraout_ECX = *extraout_ECX + (char)((uint)piVar4 >> 8);
        *(char *)piVar4 = *(char *)piVar4 + (char)piVar4;
        *(char *)((int)piVar4 + -0x7d) = *(char *)((int)piVar4 + -0x7d) + (char)extraout_DX;
        in(extraout_DX);
        piStack_58 = piVar3;
        auStack_60[1] = 0;
        auStack_60[0] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
        puStack_14 = (undefined1 *)auStack_60;
        *unaff_FS_OFFSET = (int)&iStack_10;
        uStack_8 = 0;
        uVar5 = func_0x00dc77d0(&piStack_18);
        piVar3 = piStack_18;
        uStack_8._0_1_ = 1;
        if (piStack_18 == (int *)0x0) {
          *unaff_FS_OFFSET = iStack_10;
          return (char *)(uVar5 & 0xffffff00);
        }
        piVar4 = piStack_18 + 0x4a;
        piStack_1c = piVar4;
        iVar6 = func_0x00e7307f(piVar4);
        if (iVar6 == 0) {
          iVar6 = piVar3[0x55];
          if (iVar6 != 0x7fffffff) {
            uStack_8 = CONCAT31(uStack_8._1_3_,2);
            func_0x00dbfd90(piStack_18,0xa003,"Invalid is enabled property 0x%04x",0x1213);
            uVar5 = func_0x00e730b2(piVar4);
            if (piStack_18 != (int *)0x0) {
              LOCK();
              iVar6 = *piStack_18;
              *piStack_18 = *piStack_18 + -1;
              UNLOCK();
              uVar5 = iVar6 - 1;
              if ((uVar5 == 0) && (piStack_18 != (int *)0x0)) {
                func_0x00ddc830();
                uVar5 = func_0x00ddbb20(piStack_18);
              }
            }
            *unaff_FS_OFFSET = iStack_10;
            return (char *)(uVar5 & 0xffffff00);
          }
        }
        else {
          iVar6 = func_0x00e7304a(5);
        }
        piVar3[0x55] = iVar6 + -1;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        pcVar7 = (char *)(*pcVar2)();
        return pcVar7;
      }
    }
    else {
      ppiStack_38 = (int **)param_2;
      pcStack_3c = "Resampler name index %d out of range";
      piStack_40 = (int *)0xa003;
      piStack_44 = piStack_18;
      uStack_48 = 0xdc1b9a;
      func_0x00dbfd90();
    }
  }
  else {
    ppiStack_38 = (int **)0x10d0bd0;
    pcStack_3c = (char *)0xa003;
    piStack_40 = piStack_18;
    piStack_44 = (int *)0xdc1b3b;
    func_0x00dbfd90();
  }
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (piStack_18 != (int *)0x0)) {
      ppiStack_38 = (int **)0xdc1bbb;
      func_0x00ddc830();
      pcStack_3c = (char *)0xdc1bc1;
      func_0x00ddbb20();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return pcVar7;
}



// WARNING: Instruction at (ram,0x00dc1c2a) overlaps instruction at (ram,0x00dc1c29)
// 

undefined1 Catch_All_00dc1bd8(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  byte bVar9;
  char *extraout_ECX;
  undefined2 extraout_DX;
  int unaff_EBX;
  int iVar10;
  char *pcVar11;
  uint unaff_EBP;
  int iVar12;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  byte in_CF;
  bool bVar13;
  uint uStack_2c;
  undefined *puStack_8;
  char *pcStack_4;
  
  pcStack_4 = (char *)0xdc1bdd;
  func_0x008aaff0();
  pcStack_4 = "Unexpected resampler index";
  puStack_8 = (undefined *)0xdc1bea;
  func_0x0063e9c0();
  puStack_8 = &DAT_0127ffdc;
  pcVar7 = (char *)(unaff_EBP - 0x20);
  func_0x00e87d2e();
  iVar10 = (unaff_EBX - (int)&puStack_8) - (uint)in_CF;
  pbVar1 = (byte *)(unaff_EDI + 0x1b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)iVar10;
  pcVar11 = (char *)CONCAT22((short)((uint)iVar10 >> 0x10),
                             ((short)iVar10 - (short)&puStack_8) -
                             (ushort)CARRY1(bVar2,(byte)iVar10));
  pbVar1 = (byte *)(unaff_EBP + 0x1b);
  bVar2 = *pbVar1;
  bVar9 = (byte)((uint)extraout_ECX >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  if (*pbVar1 == 0) {
    pcVar7 = (char *)*unaff_FS_OFFSET;
  }
  else if ((POPCOUNT(*pbVar1) & 1U) == 0) {
    *pcVar11 = (*pcVar11 + '$') - CARRY1(bVar2,bVar9);
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return uVar6;
  }
  *extraout_ECX = *extraout_ECX + (char)((uint)pcVar7 >> 8);
  *pcVar7 = *pcVar7 + (char)pcVar7;
  pcVar7[-0x7d] = pcVar7[-0x7d] + (char)extraout_DX;
  in(extraout_DX);
  uStack_2c = DAT_0128fd40 ^ unaff_EBP;
  *unaff_FS_OFFSET = unaff_EBP - 0xc;
  *(uint **)(unaff_EBP - 0x10) = &uStack_2c;
  *(undefined4 *)(unaff_EBP - 4) = 0;
  func_0x00dc77d0(unaff_EBP - 0x14);
  iVar10 = *(int *)(unaff_EBP - 0x14);
  *(undefined1 *)(unaff_EBP - 4) = 1;
  if (iVar10 == 0) {
    *unaff_FS_OFFSET = *(int *)(unaff_EBP - 0xc);
    return false;
  }
  iVar12 = iVar10 + 0x128;
  *(int *)(unaff_EBP - 0x18) = iVar12;
  iVar8 = func_0x00e7307f(iVar12);
  if (iVar8 != 0) {
    iVar8 = func_0x00e7304a(5);
LAB_00dc1d3b:
    *(int *)(iVar10 + 0x154) = iVar8 + -1;
    func_0x00e7304a(6);
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return uVar6;
  }
  iVar8 = *(int *)(iVar10 + 0x154);
  if (iVar8 == 0x7fffffff) goto LAB_00dc1d3b;
  iVar10 = *(int *)(unaff_EBP + 8);
  bVar13 = false;
  *(undefined1 *)(unaff_EBP - 4) = 2;
  if (iVar10 == 0x200) {
    cVar3 = *(char *)(*(int *)(unaff_EBP - 0x14) + 0x15d);
  }
  else {
    if (iVar10 != 0x19ab) {
      func_0x00dbfd90(*(undefined4 *)(unaff_EBP - 0x14),0xa003,"Invalid is enabled property 0x%04x",
                      iVar10);
      goto LAB_00dc1ceb;
    }
    cVar3 = *(char *)(*(int *)(unaff_EBP - 0x14) + 0x19);
  }
  bVar13 = cVar3 != '\0';
LAB_00dc1ceb:
  func_0x00e730b2(iVar12);
  piVar4 = *(int **)(unaff_EBP - 0x14);
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar10 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if ((iVar10 == 1) && (piVar4 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar4);
    }
  }
  *unaff_FS_OFFSET = *(int *)(unaff_EBP - 0xc);
  return bVar13;
}



bool FUN_00dc1c20(int param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ab15;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
    *unaff_FS_OFFSET = iStack_10;
    return false;
  }
  piVar6 = piStack_18 + 0x4a;
  iVar5 = func_0x00e7307f(piVar6);
  if (iVar5 != 0) {
    iVar5 = func_0x00e7304a(5);
LAB_00dc1d3b:
    piVar3[0x55] = iVar5 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = piVar3[0x55];
  if (iVar5 == 0x7fffffff) goto LAB_00dc1d3b;
  bVar7 = false;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (param_1 == 0x200) {
    cVar1 = *(char *)((int)piStack_18 + 0x15d);
  }
  else {
    if (param_1 != 0x19ab) {
      func_0x00dbfd90(piStack_18,0xa003,"Invalid is enabled property 0x%04x",param_1);
      goto LAB_00dc1ceb;
    }
    cVar1 = *(char *)((int)piStack_18 + 0x19);
  }
  bVar7 = cVar1 != '\0';
LAB_00dc1ceb:
  func_0x00e730b2(piVar6);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar5 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00ddc830();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return bVar7;
}



void Catch_All_00dc1d2f(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc1d50(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ab55;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0(&piStack_18);
  piVar3 = piStack_18;
  uStack_8._0_1_ = 1;
  if (piStack_18 == (int *)0x0) {
LAB_00dc1e06:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piVar5 = piStack_18 + 0x4a;
  iVar4 = func_0x00e7307f(piVar5);
  if (iVar4 == 0) {
    iVar4 = piVar3[0x55];
    if (iVar4 != 0x7fffffff) {
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      cVar1 = *(char *)((int)piStack_18 + 0x125);
      *(undefined1 *)((int)piStack_18 + 0x125) = 0;
      if (cVar1 != '\0') {
        func_0x00ddd150();
      }
      func_0x00e730b2(piVar5);
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar4 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00ddc830();
          func_0x00ddbb20(piStack_18);
        }
      }
      goto LAB_00dc1e06;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  piVar3[0x55] = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void Catch_All_00dc1e18(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc1e30(float param_1)

{
  int iVar1;
  short sVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ab95;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc77d0();
  uStack_8._0_1_ = 1;
  if (piStack_18 != (int *)0x0) {
    if ((param_1 <= 0.0) || (sVar2 = func_0x00e87c3c(), 0 < sVar2)) {
      func_0x00dbfd90(piStack_18,0xa003,"Speed of sound %f out of range",(double)param_1);
    }
    else {
      func_0x005797f0();
      uStack_8._0_1_ = 2;
      piStack_18[0x5a] = (int)param_1;
      if (*(char *)((int)piStack_18 + 0x125) == '\0') {
        func_0x00dc02a0(piStack_18);
        func_0x00e730b2(uStack_1c);
      }
      else {
        *(undefined1 *)(piStack_18 + 0x49) = 1;
        func_0x00e730b2(uStack_1c);
      }
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc1f54(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint FUN_00dc1f60(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  BOOL BVar9;
  int *unaff_FS_OFFSET;
  double dVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uStack_58;
  undefined4 uStack_34;
  char cStack_30;
  char acStack_2c [4];
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_00f6afe8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_58;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_7 = 0;
  iVar5 = func_0x00e7307f(&DAT_012ba570);
  if (iVar5 == 0) {
    if (DAT_012ba59c != 0x7fffffff) {
      uStack_8 = 1;
      func_0x00dcb020(&piStack_18,param_1);
      uStack_8 = 2;
      uVar3 = uStack_8;
      uStack_8 = 2;
      if (((piStack_18 == (int *)0x0) || (*(char *)((int)piStack_18 + 0x11) == '\x01')) ||
         ((char)piStack_18[4] == '\0')) {
        uStack_8 = uVar3;
        func_0x00e730b2(&DAT_012ba570);
        piVar8 = piStack_18;
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410();
        }
        if ((DAT_013e01b0 != '\0') && (BVar9 = IsDebuggerPresent(), BVar9 != 0)) {
          DebugBreak();
        }
        if (piVar8 == (int *)0x0) {
          piVar8 = &DAT_013e01ac;
        }
        else {
          piVar8 = piVar8 + 0x692b;
        }
        LOCK();
        *piVar8 = 0xa001;
        UNLOCK();
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar5 = *piStack_18;
          *piStack_18 = *piStack_18 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (piStack_18 != (int *)0x0)) {
            func_0x00e05820();
            func_0x00ddbb20(piStack_18);
            *unaff_FS_OFFSET = iStack_10;
            return 0;
          }
        }
LAB_00dc2065:
        *unaff_FS_OFFSET = iStack_10;
        return 0;
      }
      func_0x005e0c90(piStack_18 + 0x6910);
      uStack_8 = 3;
      func_0x00e730b2(&DAT_012ba570);
      LOCK();
      piStack_18[0x692b] = 0;
      UNLOCK();
      iVar5 = FUN_00dc87d0(piStack_18,param_2);
      if (iVar5 != 0) {
        func_0x00dcb0d0();
        if (cStack_30 != '\0') {
          func_0x00e730b2(uStack_34);
        }
        func_0x00dc6cd0();
        goto LAB_00dc2065;
      }
      iStack_20 = func_0x00ddbb30();
      if (iStack_20 != 0) {
        uStack_8 = 4;
        if (piStack_18 != (int *)0x0) {
          LOCK();
          *piStack_18 = *piStack_18 + 1;
          UNLOCK();
        }
        piVar6 = (int *)func_0x00ddc200(piStack_18);
        _uStack_8 = CONCAT31(uStack_7,5);
        piStack_24 = piVar6;
        func_0x00ddf060();
        piVar8 = piStack_18 + 0xc;
        if (0xf < (uint)piStack_18[0x11]) {
          piVar8 = (int *)*piVar8;
        }
        func_0x00dfc4b0(acStack_2c,piVar8,0,"volume-adjust");
        if (acStack_2c[0] != '\0') {
          sVar4 = func_0x00e87c3c();
          if (sVar4 < 1) {
            piStack_1c = (int *)0xc1c00000;
            if (-24.0 <= (float)piStack_28) {
              piStack_1c = piStack_28;
            }
            if (24.0 <= (float)piStack_1c) {
              piStack_1c = (int *)0x41c00000;
            }
            if (((float)piStack_1c != (float)piStack_28) && (1 < DAT_012ba4e8)) {
              func_0x00ddf410(2,DAT_013e0188,"volume-adjust clamped: %f, range: +/-%f\n",
                              (double)(float)piStack_28,0x4038000000000000);
            }
            dVar10 = 10.0;
            func_0x00e879bf();
            piStack_28 = (int *)(float)dVar10;
            piVar6[7] = (int)piStack_28;
            if (DAT_012ba4e8 < 3) goto LAB_00dc21e2;
            uVar12 = CONCAT44("volume-adjust gain: %f\n",DAT_013e0188);
            uVar11 = 3;
          }
          else {
            if (DAT_012ba4e8 < 1) goto LAB_00dc21e2;
            uVar12 = CONCAT44("volume-adjust must be finite: %f\n",DAT_013e0188);
            uVar11 = 1;
          }
          func_0x00ddf410(uVar11,uVar12,(double)(float)piStack_28);
        }
LAB_00dc21e2:
        piStack_1c = *(int **)(param_1 + 0x1a434);
        iVar5 = *piStack_1c + 1;
        uVar7 = iVar5 * 4 + 4;
        if (uVar7 < 8) {
          uVar7 = 8;
        }
        piVar8 = (int *)func_0x00ddbae0(4,uVar7);
        *piVar8 = iVar5;
        func_0x00dc6b00(piVar8 + 1,iVar5);
        iVar5 = *piStack_1c;
        func_0x008ab0e6();
        piVar8[iVar5 + 1] = -(uint)(piVar6 != (int *)0x0) & (uint)(piVar6 + 4);
        LOCK();
        piStack_18[0x690d] = (int)piVar8;
        UNLOCK();
        if (piStack_1c != &DAT_013e0cb0) {
          do {
          } while ((piStack_18[0x690c] & 1U) != 0);
          func_0x00ddbb20();
        }
        func_0x005e0c50();
        func_0x005797f0();
        uStack_8 = 6;
        uVar7 = DAT_013e0190 - DAT_013e018c >> 2;
        iVar5 = DAT_013e018c;
        while (uVar2 = uVar7, 0 < (int)uVar2) {
          uVar7 = uVar2 >> 1;
          if (*(int **)(iVar5 + uVar7 * 4) < piVar6) {
            iVar5 = iVar5 + uVar7 * 4 + 4;
            uVar7 = uVar2 + (-1 - uVar7);
          }
        }
        piStack_1c = piVar6;
        func_0x00dc6930(&piStack_28,iVar5,&piStack_1c);
        _uStack_8 = CONCAT31(uStack_7,5);
        func_0x00e730b2(iStack_20);
        if (piVar6[0x98] != 0) {
          iVar5 = func_0x00dec200(DAT_013e01c8,&DAT_013e01cc,piVar6);
          if (iVar5 == 0) {
            func_0x00dec4e0(piVar6);
          }
          else if (0 < DAT_012ba4e8) {
            func_0x00ddf410(1,DAT_013e0188,"Failed to initialize the default effect\n");
          }
        }
        if (2 < DAT_012ba4e8) {
          func_0x00ddf410(3,DAT_013e0188,"Created context %p\n",piVar6);
        }
        if (cStack_30 != '\0') {
          func_0x00e730b2(uStack_34);
        }
        func_0x00dc6cd0();
        *unaff_FS_OFFSET = iStack_10;
        return (uint)piVar6;
      }
      goto LAB_00dc244b;
    }
  }
  else {
    func_0x00e7304a(5);
  }
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
LAB_00dc244b:
  func_0x0062c530();
  puVar13 = &DAT_0125c4dc;
  func_0x00e87d2e();
  pcVar1 = (code *)swi(3);
  uVar7 = (*pcVar1)(puVar13);
  return uVar7;
}



void Catch_All_00dc242e(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x44,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc2470(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint *puVar4;
  int *piVar5;
  BOOL BVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int iStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b33d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar7 = 0;
  iStack_18 = 0;
  uStack_8 = 1;
  puVar4 = &uStack_28;
  if (param_1 != (int *)0x0) {
    piVar5 = (int *)func_0x00dcaf70(&param_1,param_1);
    piVar2 = param_1;
    if (piVar5 != &iStack_18) {
      iVar7 = *piVar5;
      *piVar5 = 0;
      iStack_18 = iVar7;
    }
    if (param_1 != (int *)0x0) {
      LOCK();
      iVar1 = *param_1;
      *param_1 = *param_1 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (param_1 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piVar2);
      }
    }
    puVar4 = (uint *)puStack_14;
    if (iVar7 == 0) {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa002);
      }
      if ((DAT_013e01b0 != '\0') && (BVar6 = IsDebuggerPresent(), BVar6 != 0)) {
        DebugBreak();
      }
      LOCK();
      DAT_013e01ac = 0xa002;
      UNLOCK();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  do {
    puStack_14 = (undefined1 *)puVar4;
    piVar2 = DAT_013e01c4;
    cVar3 = DAT_013e01c0;
    LOCK();
    DAT_013e01c0 = '\x01';
    UNLOCK();
    puVar4 = (uint *)puStack_14;
  } while (cVar3 != '\0');
  LOCK();
  UNLOCK();
  if (DAT_013e01c4 != (int *)0x0) {
    LOCK();
    iVar1 = *DAT_013e01c4;
    *DAT_013e01c4 = *DAT_013e01c4 + -1;
    DAT_013e01c4 = (int *)iVar7;
    UNLOCK();
    iVar7 = (int)DAT_013e01c4;
    if (iVar1 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
      iVar7 = (int)DAT_013e01c4;
    }
  }
  DAT_013e01c4 = (int *)iVar7;
  DAT_013e01c0 = 0;
  iVar7 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)(iVar7 + 0x18) == '\0') {
    func_0x008abb44();
  }
  piVar2 = *(int **)(iVar7 + 0xbc);
  if (piVar2 != (int *)0x0) {
    if ((*(char *)(iVar7 + 0x18) == '\0') && (func_0x008abb44(), *(char *)(iVar7 + 0x18) == '\0')) {
      func_0x008abb44();
    }
    *(undefined4 *)(iVar7 + 0xbc) = 0;
    LOCK();
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void Catch_All_00dc2618(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc2620(undefined4 param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b3c5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (DAT_012ba56c != '\0') {
    func_0x00dcaf70(&piStack_18,param_1);
    piVar3 = piStack_18;
    uStack_8._0_1_ = 1;
    if (piStack_18 == (int *)0x0) {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa002);
      }
      if (DAT_013e01b0 != '\0') {
        BVar4 = IsDebuggerPresent();
        if (BVar4 != 0) {
          DebugBreak();
        }
      }
      LOCK();
      DAT_013e01ac = 0xa002;
      UNLOCK();
    }
    else {
      piVar6 = piStack_18 + 0x4a;
      iVar5 = func_0x00e7307f(piVar6);
      if (iVar5 != 0) {
        iVar5 = func_0x00e7304a(5);
LAB_00dc274f:
        piVar3[0x55] = iVar5 + -1;
        func_0x00e7304a(6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = piVar3[0x55];
      if (iVar5 == 0x7fffffff) goto LAB_00dc274f;
      uStack_8._0_1_ = 2;
      cVar1 = *(char *)((int)piStack_18 + 0x125);
      *(undefined1 *)((int)piStack_18 + 0x125) = 0;
      if (cVar1 != '\0') {
        func_0x00ddd150();
      }
      func_0x00e730b2(piVar6);
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar5 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc2743(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc2760(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b4dd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (DAT_012ba56c != '\0') {
    func_0x00dcaf70(&piStack_18,param_1);
    piVar2 = piStack_18;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (piStack_18 == (int *)0x0) {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa002);
      }
      if (DAT_013e01b0 != '\0') {
        BVar3 = IsDebuggerPresent();
        if (BVar3 != 0) {
          DebugBreak();
        }
      }
      LOCK();
      DAT_013e01ac = 0xa002;
      UNLOCK();
    }
    else {
      piVar5 = piStack_18 + 0x4a;
      iVar4 = func_0x00e7307f(piVar5);
      if (iVar4 != 0) {
        iVar4 = func_0x00e7304a(5);
LAB_00dc2879:
        piVar2[0x55] = iVar4 + -1;
        func_0x00e7304a(6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = piVar2[0x55];
      if (iVar4 == 0x7fffffff) goto LAB_00dc2879;
      *(undefined1 *)((int)piStack_18 + 0x125) = 1;
      func_0x00e730b2(piVar5);
    }
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar4 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc286d(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc2890(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  BOOL BVar10;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_00f6b02d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_7 = 0;
  iVar7 = func_0x00e7307f(&DAT_012ba570);
  piVar4 = DAT_013e0190;
  if (iVar7 == 0) {
    if (DAT_012ba59c == 0x7fffffff) goto LAB_00dc2a5b;
    uStack_8 = 1;
    func_0x00dc6ab0(&piStack_18,DAT_013e018c,DAT_013e0190,&param_1);
    piVar5 = piStack_18;
    if ((piStack_18 == piVar4) || (piVar2 = (int *)*piStack_18, piVar2 != param_1)) {
      func_0x00e730b2(&DAT_012ba570);
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa002);
      }
      if (DAT_013e01b0 != '\0') {
        BVar10 = IsDebuggerPresent();
        if (BVar10 != 0) {
          DebugBreak();
        }
      }
      uVar9 = DAT_013e01ac;
      LOCK();
      DAT_013e01ac = 0xa002;
      UNLOCK();
      *unaff_FS_OFFSET = iStack_10;
      return uVar9;
    }
    piVar1 = piStack_18 + 1;
    uStack_8 = 2;
    piStack_18 = piVar2;
    func_0x008ab0e6(piVar5,piVar1,(int)piVar4 - (int)piVar1);
    DAT_013e0190 = DAT_013e0190 + -1;
    iVar7 = piVar2[0x48];
    unaff_EDI = iVar7 + 0x1a440;
    iVar8 = func_0x00e7307f(unaff_EDI);
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar7 + 0x1a46c);
      if (iVar8 != 0x7fffffff) {
        _uStack_8 = CONCAT31(uStack_7,3);
        cVar6 = func_0x00ddd1d0();
        if ((cVar6 == '\0') && ((*(uint *)(iVar7 + 0x48) >> 4 & 1) != 0)) {
          (**(code **)(**(int **)(iVar7 + 0x1a470) + 0xc))();
          *(uint *)(iVar7 + 0x48) = *(uint *)(iVar7 + 0x48) & 0xffffffef;
        }
        func_0x00e730b2(unaff_EDI);
        LOCK();
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          func_0x00ddc830();
          func_0x00ddbb20(piVar2);
        }
        uVar9 = func_0x00e730b2(&DAT_012ba570);
        *unaff_FS_OFFSET = iStack_10;
        return uVar9;
      }
      goto LAB_00dc2a73;
    }
  }
  else {
    func_0x00e7304a(5);
LAB_00dc2a5b:
    DAT_012ba59c = 0x7ffffffe;
    func_0x00e7304a(6);
  }
  iVar8 = func_0x00e7304a(5);
LAB_00dc2a73:
  *(int *)(unaff_EDI + 0x2c) = iVar8 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  uVar9 = (*pcVar3)();
  return uVar9;
}



void Catch_All_00dc2a4f(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EDI;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_EDI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dc2a80(void)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  iVar1 = *(int *)(iVar1 + 0xbc);
  if (iVar1 == 0) {
    iVar1 = DAT_013e01c4;
  }
  return iVar1;
}



int FUN_00dc2ab0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b0dd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcaf70(&piStack_18,param_1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_18 == (int *)0x0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa002);
    }
    if (DAT_013e01b0 != '\0') {
      BVar3 = IsDebuggerPresent();
      if (BVar3 != 0) {
        DebugBreak();
      }
    }
    LOCK();
    DAT_013e01ac = 0xa002;
    UNLOCK();
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_18;
      *piStack_18 = *piStack_18 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piStack_18);
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  iVar2 = piStack_18[0x48];
  LOCK();
  iVar1 = *piStack_18;
  *piStack_18 = *piStack_18 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
    func_0x00ddc830();
    func_0x00ddbb20(piStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar2;
}



void Catch_All_00dc2bbe(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dc2bd0(char *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  uint uStack_44;
  undefined1 auStack_34 [12];
  undefined *puStack_28;
  int *piStack_24;
  undefined4 *puStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_00f6b390;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_7 = 0;
  func_0x00dc8130();
  if (DAT_013e01a4 == (int *)0x0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa004);
    }
    if (DAT_013e01b0 != '\0') {
      BVar3 = IsDebuggerPresent();
      if (BVar3 != 0) {
        DebugBreak();
      }
    }
    LOCK();
    DAT_013e01ac = 0xa004;
    UNLOCK();
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  if (param_1 == (char *)0x0) {
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410(3,DAT_013e0188,"Opening default playback device\n");
    }
  }
  else {
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410(3,DAT_013e0188,"Opening playback device \"%s\"\n",param_1);
    }
    if (*param_1 != '\0') {
      iVar4 = func_0x00e0aef0(param_1,"OpenAL Soft");
      if (iVar4 != 0) {
        iVar4 = func_0x00e0aef0(param_1,"DirectSound3D");
        if (iVar4 != 0) {
          iVar4 = func_0x00e0aef0(param_1,"DirectSound");
          if (iVar4 != 0) {
            iVar4 = func_0x00e0aef0(param_1,"MMSYSTEM");
            if ((iVar4 != 0) && ((*param_1 != '\'' || (param_1[1] != '(')))) {
              iVar4 = func_0x00e0aef0(param_1,"openal-soft");
              if (iVar4 != 0) goto LAB_00dc2d24;
            }
          }
        }
      }
    }
    param_1 = (char *)0x0;
  }
LAB_00dc2d24:
  piStack_18 = (int *)((uint)(DAT_012ba660 != '\0') * 2 + 2);
  iVar4 = func_0x00ddbb30(0x10,0x1a570);
  if (iVar4 == 0) goto LAB_00dc2fbd;
  uStack_8 = 1;
  piStack_24 = (int *)iVar4;
  piVar5 = (int *)func_0x00e055d0(0);
  *(undefined2 *)(piVar5 + 8) = 0x601;
  piVar5[5] = 48000;
  piVar5[6] = 0x3c0;
  piVar5[7] = 0xb40;
  piVar5[0x691f] = 0x100;
  piVar5[0x691e] = 1;
  uStack_8 = 3;
  piVar5[0x691d] = piVar5[0x691f] + -1;
  piVar5[0x6920] = 0x40;
  piVar5[0x13] = (int)piStack_18;
  piStack_24 = piVar5;
  puVar6 = (undefined4 *)
           (**(code **)(*DAT_013e01a4 + 0xc))
                     (&piStack_18,-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + 4),0);
  puVar1 = (undefined4 *)*puVar6;
  *puVar6 = 0;
  uStack_8 = 4;
  puStack_1c = puVar1;
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 0x1c))(1);
  }
  puStack_28 = &DAT_012ba570;
  iVar4 = func_0x00e7307f(&DAT_012ba570);
  if (iVar4 == 0) {
    if (DAT_012ba59c == 0x7fffffff) goto LAB_00dc2f94;
    _uStack_8 = CONCAT31(uStack_7,5);
    (**(code **)*puVar1)(param_1);
    piVar7 = (int *)piVar5[0x691c];
    piVar5[0x691c] = (int)puVar1;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x1c))(1);
    }
    func_0x00e730b2(&DAT_012ba570);
    uStack_8 = 2;
    uStack_7 = 0;
    puStack_28 = &DAT_012ba570;
    iVar4 = func_0x00e7307f(&DAT_012ba570);
    if (iVar4 != 0) goto LAB_00dc2fa5;
    if (DAT_012ba59c != 0x7fffffff) {
      uStack_8 = 7;
      piStack_18 = piVar5;
      func_0x00dc6ab0(&puStack_1c,DAT_013e0198,DAT_013e019c,&piStack_18);
      piStack_18 = piVar5;
      func_0x00dc6930(&puStack_1c,puStack_1c,&piStack_18);
      _uStack_8 = CONCAT31(uStack_7,2);
      func_0x00e730b2(&DAT_012ba570);
      if (2 < DAT_012ba4e8) {
        piVar7 = piVar5 + 0xc;
        if (0xf < (uint)piVar5[0x11]) {
          piVar7 = (int *)*piVar7;
        }
        func_0x00ddf410(3,DAT_013e0188,"Created device %p, \"%s\"\n",piVar5,piVar7);
      }
      *unaff_FS_OFFSET = iStack_10;
      return (int)piVar5;
    }
  }
  else {
    func_0x00e7304a(5);
LAB_00dc2f94:
    DAT_012ba59c = 0x7ffffffe;
    func_0x00e7304a(6);
LAB_00dc2fa5:
    func_0x00e7304a(5);
  }
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
LAB_00dc2fbd:
  func_0x0062c530();
  func_0x00e87d2e(auStack_34,&DAT_0125c4dc);
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}



undefined * Catch_00dc2f05(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (1 < DAT_012ba4e8) {
    piVar2 = (int *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00ddf410(2,DAT_013e0188,"Failed to open playback device: %s\n",piVar2);
  }
  func_0x00dcb0d0(0,(*(int *)(iVar1 + 0x24) == 2) + 0xa004);
  return &DAT_00dc2f51;
}



void Catch_All_00dc2f88(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x30,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc2fe0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  uint uStack_58;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  undefined *puStack_34;
  undefined1 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  int *piStack_1c;
  char cStack_15;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6af8d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_58;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puStack_34 = &DAT_012ba570;
  uStack_30 = 0;
  iVar3 = func_0x00e7307f(&DAT_012ba570);
  piVar8 = DAT_013e019c;
  if (iVar3 == 0) {
    if (DAT_012ba59c != 0x7fffffff) {
      uStack_30 = 1;
      uStack_8._0_1_ = 1;
      func_0x00dc6ab0(&piStack_20,DAT_013e0198,DAT_013e019c,&param_1);
      if ((piStack_20 == piVar8) || (piVar10 = (int *)*piStack_20, piVar10 != param_1)) {
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa001);
        }
        if ((DAT_013e01b0 != '\0') && (BVar4 = IsDebuggerPresent(), BVar4 != 0)) {
          DebugBreak();
        }
        LOCK();
        DAT_013e01ac = 0xa001;
        UNLOCK();
      }
      else {
        if (*(char *)((int)piVar10 + 0x11) != '\x01') {
          uStack_8._0_1_ = 2;
          piStack_2c = piVar10;
          func_0x008ab0e6(piStack_20,piStack_20 + 1,(int)piVar8 - (int)(piStack_20 + 1));
          DAT_013e019c = DAT_013e019c + -1;
          func_0x005e0c90(piVar10 + 0x6910);
          puStack_48 = (undefined4 *)0x0;
          puStack_44 = (undefined4 *)0x0;
          puStack_40 = (undefined4 *)0x0;
          piStack_20 = (int *)piVar10[0x690d];
          uStack_8._0_1_ = 4;
          piStack_28 = piStack_20 + *piStack_20 + 1;
          piVar8 = piStack_1c;
          while (piStack_1c = piVar8, piStack_20 = piStack_20 + 1, piStack_20 != piStack_28) {
            piVar8 = (int *)*piStack_20;
            uVar7 = (int)DAT_013e0190 - (int)DAT_013e018c >> 2;
            puVar6 = DAT_013e018c;
            while (uVar2 = uVar7, 0 < (int)uVar2) {
              uVar7 = uVar2 >> 1;
              puStack_24 = puVar6 + uVar7;
              if ((int *)(-(uint)(puVar6[uVar7] != 0) & puVar6[uVar7] + 0x10) < piVar8) {
                puVar6 = puStack_24 + 1;
                uVar7 = uVar2 + (-1 - uVar7);
              }
            }
            if ((puVar6 != DAT_013e0190) &&
               (piStack_1c = (int *)*puVar6,
               (int *)(-(uint)(piStack_1c != (int *)0x0) & (uint)(piStack_1c + 4)) == piVar8)) {
              uStack_8._0_1_ = 5;
              if (puStack_44 == puStack_40) {
                func_0x00dc66b0(puStack_44,&piStack_1c);
                piVar8 = piStack_1c;
              }
              else {
                *puStack_44 = piStack_1c;
                puStack_44 = puStack_44 + 1;
                piVar8 = (int *)0x0;
              }
              uStack_8._0_1_ = 4;
              if (piVar8 != (int *)0x0) {
                LOCK();
                iVar3 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  func_0x00ddc830();
                  func_0x00ddbb20(piVar8);
                }
              }
              func_0x008ab0e6(puVar6,puVar6 + 1,(int)DAT_013e0190 - (int)(puVar6 + 1));
              DAT_013e0190 = DAT_013e0190 + -1;
              piVar8 = piStack_1c;
            }
          }
          func_0x00e730b2(&DAT_012ba570);
          puVar6 = puStack_44;
          cStack_15 = '\0';
          uStack_30 = 0;
          for (puVar9 = puStack_48; puVar9 != puVar6; puVar9 = puVar9 + 1) {
            if (1 < DAT_012ba4e8) {
              func_0x00ddf410(2,DAT_013e0188,"Releasing orphaned context %p\n",*puVar9);
            }
            func_0x00ddd1d0();
          }
          if (puStack_48 != puStack_44) {
            func_0x00dc6550(puStack_48,puStack_44,&puStack_48);
            puStack_44 = puStack_48;
          }
          if (((uint)piVar10[0x12] >> 4 & 1) != 0) {
            (**(code **)(*(int *)piVar10[0x691c] + 0xc))();
          }
          piVar10[0x12] = piVar10[0x12] & 0xffffffef;
          if (puStack_48 != (undefined4 *)0x0) {
            func_0x00dc6550(puStack_48,puStack_44,&puStack_48);
            func_0x00ddbb20(puStack_48);
            puStack_48 = (undefined4 *)0x0;
            puStack_44 = (undefined4 *)0x0;
            puStack_40 = (undefined4 *)0x0;
          }
          if (cStack_38 != '\0') {
            func_0x00e730b2(uStack_3c);
          }
          if (piVar10 != (int *)0x0) {
            LOCK();
            iVar3 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              func_0x00e05820();
              func_0x00ddbb20(piVar10);
            }
          }
          if (cStack_15 != '\0') {
            func_0x00e730b2(&DAT_012ba570);
          }
          *unaff_FS_OFFSET = iStack_10;
          return 1;
        }
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piVar10,
                          0xa001);
        }
        if ((DAT_013e01b0 != '\0') && (BVar4 = IsDebuggerPresent(), BVar4 != 0)) {
          DebugBreak();
        }
        if (piVar10 == (int *)0x0) {
          piVar10 = &DAT_013e01ac;
        }
        else {
          piVar10 = piVar10 + 0x692b;
        }
        LOCK();
        *piVar10 = 0xa001;
        UNLOCK();
      }
      func_0x00e730b2(&DAT_012ba570);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  else {
    func_0x00e7304a(5);
  }
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  func_0x00585aa0(1);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void Catch_All_00dc33ae(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  func_0x00585aa0(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dc33e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f6b130;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  iVar1 = DAT_013e01ac;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_18[0x692b];
    piStack_18[0x692b] = 0;
    UNLOCK();
    LOCK();
    iVar2 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
    *unaff_FS_OFFSET = iStack_10;
    return iVar1;
  }
  LOCK();
  DAT_013e01ac = 0;
  UNLOCK();
  *unaff_FS_OFFSET = iStack_10;
  return iVar1;
}



void Catch_All_00dc347d(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc3490(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b28d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar5 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (param_2 == (char *)0x0) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa004
                     );
    }
    if ((DAT_013e01b0 != '\0') && (BVar3 = IsDebuggerPresent(), BVar3 != 0)) {
      DebugBreak();
    }
    if (piVar5 == (int *)0x0) {
      piVar5 = &DAT_013e01ac;
    }
    else {
      piVar5 = piVar5 + 0x692b;
    }
    LOCK();
    *piVar5 = 0xa004;
    UNLOCK();
  }
  else {
    pcVar7 = param_2;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    pcVar6 = 
    "ALC_ENUMERATE_ALL_EXT ALC_ENUMERATION_EXT ALC_EXT_CAPTURE ALC_EXT_DEDICATED ALC_EXT_disconnect ALC_EXT_EFX ALC_EXT_thread_local_context ALC_SOFT_device_clock ALC_SOFT_HRTF ALC_SOFT_loopback ALC_SOFT_loopback_bformat ALC_SOFT_output_limiter ALC_SOFT_output_mode ALC_SOFT_pause_device ALC_SOFT_reopen_device"
    ;
    if (piStack_18 == (int *)0x0) {
      pcVar6 = 
      "ALC_ENUMERATE_ALL_EXT ALC_ENUMERATION_EXT ALC_EXT_CAPTURE ALC_EXT_EFX ALC_EXT_thread_local_context ALC_SOFT_loopback ALC_SOFT_loopback_bformat ALC_SOFT_reopen_device"
      ;
    }
    while ((pcVar6 != (char *)0x0 && (*pcVar6 != '\0'))) {
      iVar4 = func_0x00e0af50(pcVar6,param_2,(int)pcVar7 - (int)(param_2 + 1));
      if ((iVar4 == 0) &&
         ((pcVar6[(int)pcVar7 - (int)(param_2 + 1)] == '\0' ||
          (iVar4 = func_0x008ab082((int)pcVar6[(int)pcVar7 - (int)(param_2 + 1)]), iVar4 != 0)))) {
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar4 = *piStack_18;
          *piStack_18 = *piStack_18 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
            func_0x00e05820();
            func_0x00ddbb20(piStack_18);
          }
        }
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      pcVar6 = (char *)func_0x008ab0c6(pcVar6,0x20);
      if (pcVar6 == (char *)0x0) break;
      do {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        iVar4 = func_0x008ab082((int)*pcVar1);
      } while (iVar4 != 0);
    }
  }
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar4 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void Catch_All_00dc3625(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * FUN_00dc3630(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  BOOL BVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b1dd;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == (byte *)0x0) {
    func_0x00dcb020(&param_2,param_1);
    pbVar7 = param_2;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",param_2,0xa004);
    }
    if (DAT_013e01b0 != '\0') {
      BVar4 = IsDebuggerPresent();
      if (BVar4 != 0) {
        DebugBreak();
      }
    }
    pbVar6 = param_2;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = (byte *)&DAT_013e01ac;
    }
    else {
      pbVar7 = pbVar7 + 0x1a4ac;
    }
    LOCK();
    pbVar7[0] = 4;
    pbVar7[1] = 0xa0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    UNLOCK();
    if (param_2 != (byte *)0x0) {
      LOCK();
      iVar1 = *(int *)param_2;
      *(int *)param_2 = *(int *)param_2 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (param_2 != (byte *)0x0)) {
        func_0x00e05820();
        func_0x00ddbb20(pbVar6);
      }
    }
  }
  else {
    if (DAT_012ba660 != '\0') {
      for (ppuVar8 = &PTR_DAT_010d1200; ppuVar8 != &PTR_s_ALC_INVALID_010d1220;
          ppuVar8 = ppuVar8 + 2) {
        pbVar7 = *ppuVar8;
        pbVar6 = param_2;
        do {
          bVar2 = *pbVar7;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_00dc3750:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_00dc3755;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00dc3750;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        uVar5 = 0;
LAB_00dc3755:
        if (uVar5 == 0) goto LAB_00dc375e;
      }
    }
    for (ppuVar8 = &PTR_s_alcCreateContext_010d0ca0; ppuVar8 != &PTR_DAT_010d1200;
        ppuVar8 = ppuVar8 + 2) {
      pbVar7 = *ppuVar8;
      pbVar6 = param_2;
      do {
        bVar2 = *pbVar7;
        bVar9 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00dc37b0:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_00dc37b5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar9 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00dc37b0;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_00dc37b5:
      if (uVar5 == 0) {
LAB_00dc375e:
        puVar3 = ppuVar8[1];
        *unaff_FS_OFFSET = iStack_10;
        return puVar3;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined *)0x0;
}



void Catch_All_00dc37be(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * FUN_00dc37d0(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  BOOL BVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b10d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 == (byte *)0x0) {
    func_0x00dcb020(&param_2,param_1);
    pbVar7 = param_2;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",param_2,0xa004);
    }
    if (DAT_013e01b0 != '\0') {
      BVar4 = IsDebuggerPresent();
      if (BVar4 != 0) {
        DebugBreak();
      }
    }
    pbVar6 = param_2;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = (byte *)&DAT_013e01ac;
    }
    else {
      pbVar7 = pbVar7 + 0x1a4ac;
    }
    LOCK();
    pbVar7[0] = 4;
    pbVar7[1] = 0xa0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    UNLOCK();
    if (param_2 != (byte *)0x0) {
      LOCK();
      iVar1 = *(int *)param_2;
      *(int *)param_2 = *(int *)param_2 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (param_2 != (byte *)0x0)) {
        func_0x00e05820();
        func_0x00ddbb20(pbVar6);
      }
    }
  }
  else {
    if (DAT_012ba660 != '\0') {
      for (ppuVar8 = &PTR_s_AL_EAX_RAM_SIZE_010d1e08; ppuVar8 != (undefined **)"No Error";
          ppuVar8 = ppuVar8 + 2) {
        pbVar7 = *ppuVar8;
        pbVar6 = param_2;
        do {
          bVar2 = *pbVar7;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_00dc38f0:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_00dc38f5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00dc38f0;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        uVar5 = 0;
LAB_00dc38f5:
        if (uVar5 == 0) goto LAB_00dc38fe;
      }
    }
    for (ppuVar8 = &PTR_s_ALC_INVALID_010d1220; ppuVar8 != &PTR_s_AL_EAX_RAM_SIZE_010d1e08;
        ppuVar8 = ppuVar8 + 2) {
      pbVar7 = *ppuVar8;
      pbVar6 = param_2;
      do {
        bVar2 = *pbVar7;
        bVar9 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00dc3950:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_00dc3955;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar9 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00dc3950;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_00dc3955:
      if (uVar5 == 0) {
LAB_00dc38fe:
        puVar3 = ppuVar8[1];
        *unaff_FS_OFFSET = iStack_10;
        return puVar3;
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined *)0x0;
}



void Catch_All_00dc395e(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



char * FUN_00dc3970(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b225;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (param_2 < 0x1013) {
    if (param_2 == 0x1012) {
      puStack_14 = (undefined1 *)&uStack_28;
      if (DAT_012ba51c == 0) {
        puStack_14 = (undefined1 *)&uStack_28;
        func_0x00dc81c0();
      }
      pcVar5 = (char *)&DAT_012ba50c;
      if (0xf < DAT_012ba520) {
        pcVar5 = DAT_012ba50c;
      }
      func_0x00499bb0(pcVar5);
      pcVar5 = (char *)&DAT_012ba53c;
      if (0xf < DAT_012ba550) {
        pcVar5 = DAT_012ba53c;
      }
      *unaff_FS_OFFSET = iStack_10;
      return pcVar5;
    }
    if (param_2 < 0x1005) {
      if (param_2 == 0x1004) {
LAB_00dc3b59:
        *unaff_FS_OFFSET = iStack_10;
        return "OpenAL Soft";
      }
      if (param_2 == 0) {
        *unaff_FS_OFFSET = iStack_10;
        return "No Error";
      }
      if (param_2 == 0x310) {
        puStack_14 = (undefined1 *)&uStack_28;
        func_0x00dcb020(&param_2,param_1);
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        if (param_2 == 0) {
          func_0x00dc8370();
          pcVar5 = (char *)&DAT_012ba524;
          if (0xf < DAT_012ba538) {
            pcVar5 = DAT_012ba524;
          }
          func_0x00dc6cd0();
          *unaff_FS_OFFSET = iStack_10;
          return pcVar5;
        }
        if (*(char *)(param_2 + 0x11) == '\x01') {
          func_0x005797f0(param_2 + 0x1a440);
          pcVar5 = (char *)(param_2 + 0x30);
          if (0xf < *(uint *)(param_2 + 0x44)) {
            pcVar5 = *(char **)pcVar5;
          }
          func_0x00e730b2(piStack_18);
          func_0x00dc6cd0();
          *unaff_FS_OFFSET = iStack_10;
          return pcVar5;
        }
        func_0x00dcb0d0(param_2,0xa003);
        func_0x00dc6cd0();
        *unaff_FS_OFFSET = iStack_10;
        return (char *)0x0;
      }
      if (param_2 == 0x311) {
        puStack_14 = (undefined1 *)&uStack_28;
        if (DAT_012ba534 == 0) {
          puStack_14 = (undefined1 *)&uStack_28;
          func_0x00dc8370();
        }
        pcVar5 = (char *)&DAT_012ba524;
        if (0xf < DAT_012ba538) {
          pcVar5 = DAT_012ba524;
        }
        func_0x00499bb0(pcVar5);
        pcVar5 = (char *)&DAT_012ba554;
        if (0xf < DAT_012ba568) {
          pcVar5 = DAT_012ba554;
        }
        *unaff_FS_OFFSET = iStack_10;
        return pcVar5;
      }
    }
    else {
      if (param_2 == 0x1005) goto LAB_00dc3b59;
      if (param_2 == 0x1006) {
        puStack_14 = (undefined1 *)&uStack_28;
        piVar2 = (int *)func_0x00dcb020(&param_2,param_1);
        iVar1 = *piVar2;
        func_0x00dc6cd0();
        pcVar5 = 
        "ALC_ENUMERATE_ALL_EXT ALC_ENUMERATION_EXT ALC_EXT_CAPTURE ALC_EXT_EFX ALC_EXT_thread_local_context ALC_SOFT_loopback ALC_SOFT_loopback_bformat ALC_SOFT_reopen_device"
        ;
        if (iVar1 != 0) {
          pcVar5 = 
          "ALC_ENUMERATE_ALL_EXT ALC_ENUMERATION_EXT ALC_EXT_CAPTURE ALC_EXT_DEDICATED ALC_EXT_disconnect ALC_EXT_EFX ALC_EXT_thread_local_context ALC_SOFT_device_clock ALC_SOFT_HRTF ALC_SOFT_loopback ALC_SOFT_loopback_bformat ALC_SOFT_output_limiter ALC_SOFT_output_mode ALC_SOFT_pause_device ALC_SOFT_reopen_device"
          ;
        }
        *unaff_FS_OFFSET = iStack_10;
        return pcVar5;
      }
    }
  }
  else if (param_2 < 0xa002) {
    if (param_2 == 0xa001) {
      *unaff_FS_OFFSET = iStack_10;
      return "Invalid Device";
    }
    if (param_2 == 0x1013) {
      func_0x00dcb020(&param_2,param_1);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      if (param_2 == 0) {
        func_0x00dc81c0();
        pcVar5 = (char *)&DAT_012ba50c;
        if (0xf < DAT_012ba520) {
          pcVar5 = DAT_012ba50c;
        }
        func_0x00dc6cd0();
        *unaff_FS_OFFSET = iStack_10;
        return pcVar5;
      }
      if (*(char *)(param_2 + 0x11) != '\x01') {
        if (*(char *)(param_2 + 0x11) != '\x02') {
          func_0x005797f0(param_2 + 0x1a440);
          pcVar5 = (char *)(param_2 + 0x30);
          if (0xf < *(uint *)(param_2 + 0x44)) {
            pcVar5 = *(char **)pcVar5;
          }
          func_0x00e730b2(piStack_18);
          func_0x00dc6cd0();
          *unaff_FS_OFFSET = iStack_10;
          return pcVar5;
        }
        func_0x00dc6cd0();
        *unaff_FS_OFFSET = iStack_10;
        return "OpenAL Soft";
      }
      func_0x00dcb0d0(param_2,0xa003);
      func_0x00dc6cd0();
      *unaff_FS_OFFSET = iStack_10;
      return (char *)0x0;
    }
    if (param_2 == 0x1995) {
      puStack_14 = (undefined1 *)&uStack_28;
      func_0x00dcb020(&param_2,param_1);
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      if (param_2 == 0) {
        func_0x00dcb0d0(0,0xa001);
        func_0x00dc6cd0();
        *unaff_FS_OFFSET = iStack_10;
        return (char *)0x0;
      }
      func_0x005797f0(param_2 + 0x1a440);
      if (*(int *)(param_2 + 0x1a408) == 0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)(param_2 + 0x1a484);
        if (0xf < *(uint *)(param_2 + 0x1a498)) {
          pcVar5 = *(char **)pcVar5;
          func_0x00e730b2(piStack_18);
          func_0x00dc6cd0();
          *unaff_FS_OFFSET = iStack_10;
          return pcVar5;
        }
      }
      func_0x00e730b2(piStack_18);
      func_0x00dc6cd0();
      *unaff_FS_OFFSET = iStack_10;
      return pcVar5;
    }
  }
  else {
    switch(param_2) {
    case 0xa002:
      *unaff_FS_OFFSET = iStack_10;
      return "Invalid Context";
    case 0xa003:
      *unaff_FS_OFFSET = iStack_10;
      return "Invalid Enum";
    case 0xa004:
      *unaff_FS_OFFSET = iStack_10;
      return "Invalid Value";
    case 0xa005:
      *unaff_FS_OFFSET = iStack_10;
      return "Out of Memory";
    }
  }
  puStack_14 = (undefined1 *)&uStack_28;
  piVar2 = (int *)func_0x00dcb020(&piStack_18,param_1);
  iVar1 = *piVar2;
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  if (1 < DAT_012ba4e8) {
    func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",iVar1,0xa003);
  }
  if ((DAT_013e01b0 != '\0') && (BVar3 = IsDebuggerPresent(), BVar3 != 0)) {
    DebugBreak();
  }
  if (iVar1 == 0) {
    puVar4 = &DAT_013e01ac;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 0x1a4ac);
  }
  LOCK();
  *puVar4 = 0xa003;
  UNLOCK();
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return (char *)0x0;
}



void Catch_All_00dc3ece(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc3ef0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b1ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar2 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if ((param_3 < 1) || (param_4 == 0)) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa004
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar3 = IsDebuggerPresent();
      if (BVar3 != 0) {
        DebugBreak();
      }
    }
    if (piVar2 == (int *)0x0) {
      LOCK();
      DAT_013e01ac = 0xa004;
      UNLOCK();
    }
    else {
      LOCK();
      piVar2[0x692b] = 0xa004;
      UNLOCK();
    }
  }
  else {
    func_0x00dc7840(piStack_18,param_2,param_4,param_4 + param_3 * 4);
  }
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc3ff8(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int * FUN_00dc4000(char *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  BOOL BVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  uint uStack_44;
  undefined1 auStack_34 [12];
  int *piStack_28;
  undefined4 *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ae80;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc8130();
  if ((DAT_013e01a8 == (int *)0x0) || (param_4 < 1)) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa004);
    }
    if (DAT_013e01b0 != '\0') {
      BVar5 = IsDebuggerPresent();
      if (BVar5 != 0) {
        DebugBreak();
      }
    }
    LOCK();
    DAT_013e01ac = 0xa004;
    UNLOCK();
    goto LAB_00dc4091;
  }
  if (param_1 == (char *)0x0) {
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410(3,DAT_013e0188,"Opening default capture device\n");
    }
  }
  else {
    if (2 < DAT_012ba4e8) {
      func_0x00ddf410(3,DAT_013e0188,"Opening capture device \"%s\"\n",param_1);
    }
    if (*param_1 != '\0') {
      iVar6 = func_0x00e0aef0(param_1,"OpenAL Soft");
      if (iVar6 != 0) {
        iVar6 = func_0x00e0aef0(param_1,"openal-soft");
        if (iVar6 != 0) goto LAB_00dc411b;
      }
    }
    param_1 = (char *)0x0;
  }
LAB_00dc411b:
  piStack_28 = (int *)func_0x00ddbb30(0x10,0x1a570);
  if (piStack_28 == (int *)0x0) {
    func_0x0062c530();
    func_0x00e87d2e(auStack_34,&DAT_0125c4dc);
    pcVar4 = (code *)swi(3);
    piVar7 = (int *)(*pcVar4)();
    return piVar7;
  }
  uStack_8._0_1_ = 1;
  piVar7 = (int *)func_0x00e055d0(1);
  piVar9 = &DAT_010d55f8;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  do {
    piStack_28 = piVar7;
    if (*piVar9 == param_3) {
      iVar6 = piVar9[1];
      uVar1 = *(undefined1 *)((int)piVar9 + 5);
      piVar7[5] = param_2;
      *(char *)(piVar7 + 8) = (char)iVar6;
      *(undefined1 *)((int)piVar7 + 0x21) = uVar1;
      piVar7[0x12] = piVar7[0x12] | 1;
      uVar2 = piVar7[0x12];
      uStack_8._0_1_ = 3;
      piVar7[0x12] = uVar2 | 6;
      piVar7[6] = param_4;
      piVar7[7] = param_4;
      if (2 < DAT_012ba4e8) {
        iVar6 = piVar7[8];
        uVar8 = func_0x00dfeae0(CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)((int)piVar7 + 0x21)),
                                piVar7[5],piVar7[6],param_4);
        uVar8 = func_0x00dfea60((char)iVar6,uVar8);
        func_0x00ddf410(3,DAT_013e0188,"Capture format: %s, %s, %uhz, %u / %u buffer\n",uVar8);
      }
      piVar9 = (int *)(**(code **)(*DAT_013e01a8 + 0xc))
                                (&piStack_18,-(uint)(piVar7 != (int *)0x0) & (uint)(piVar7 + 4),1);
      puVar3 = (undefined4 *)*piVar9;
      *piVar9 = 0;
      uStack_8._0_1_ = 4;
      puStack_20 = puVar3;
      if (piStack_18 != (int *)0x0) {
        (**(code **)(*piStack_18 + 0x1c))(1);
      }
      func_0x005797f0(&DAT_012ba570);
      uStack_8 = CONCAT31(uStack_8._1_3_,5);
      (**(code **)*puVar3)(param_1);
      piVar9 = (int *)piVar7[0x691c];
      piVar7[0x691c] = (int)puVar3;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x1c))(1);
      }
      func_0x00e730b2(piStack_1c);
      uStack_8 = 2;
      func_0x005797f0(&DAT_012ba570);
      uStack_8._0_1_ = 7;
      piStack_1c = piVar7;
      func_0x00dc6ab0(&piStack_18,DAT_013e0198,DAT_013e019c,&piStack_1c);
      piStack_1c = piVar7;
      func_0x00dc6930(&piStack_18,piStack_18,&piStack_1c);
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      func_0x00e730b2(puStack_20);
      if (2 < DAT_012ba4e8) {
        piVar9 = piVar7 + 0xc;
        if (0xf < (uint)piVar7[0x11]) {
          piVar9 = (int *)*piVar9;
        }
        func_0x00ddf410(3,DAT_013e0188,"Created capture device %p, \"%s\"\n",piVar7,piVar9);
      }
      *unaff_FS_OFFSET = iStack_10;
      return piVar7;
    }
    piVar9 = piVar9 + 2;
  } while (piVar9 != (int *)"Unsupported format type: 0x%04x\n");
  if (1 < DAT_012ba4e8) {
    func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa003);
  }
  if (DAT_013e01b0 != '\0') {
    BVar5 = IsDebuggerPresent();
    if (BVar5 != 0) {
      DebugBreak();
    }
  }
  LOCK();
  DAT_013e01ac = 0xa003;
  UNLOCK();
  if (piVar7 != (int *)0x0) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x00e05820();
      func_0x00ddbb20(piVar7);
      *unaff_FS_OFFSET = iStack_10;
      return (int *)0x0;
    }
  }
LAB_00dc4091:
  *unaff_FS_OFFSET = iStack_10;
  return (int *)0x0;
}



undefined * Catch_00dc4337(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (1 < DAT_012ba4e8) {
    piVar2 = (int *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00ddf410(2,DAT_013e0188,"Failed to open capture device: %s\n",piVar2);
  }
  func_0x00dcb0d0(0,(*(int *)(iVar1 + 0x24) == 2) + 0xa004);
  return &DAT_00dc4383;
}



void Catch_All_00dc43ba(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  func_0x008aaff0();
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x30,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc43e0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 uVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6ae2d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar5 = func_0x00e7307f(&DAT_012ba570);
  piVar3 = DAT_013e019c;
  if (iVar5 == 0) {
    if (DAT_012ba59c != 0x7fffffff) {
      uStack_8._0_1_ = 1;
      func_0x00dc6ab0(&piStack_18,DAT_013e0198,DAT_013e019c,&param_1);
      piVar4 = piStack_18;
      if ((piStack_18 == piVar3) || (piVar8 = (int *)*piStack_18, piVar8 != param_1)) {
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa001);
        }
        if (DAT_013e01b0 != '\0') {
          BVar6 = IsDebuggerPresent();
          if (BVar6 != 0) {
            DebugBreak();
          }
        }
        LOCK();
        DAT_013e01ac = 0xa001;
        UNLOCK();
      }
      else {
        if (*(char *)((int)piVar8 + 0x11) == '\x01') {
          piVar1 = piStack_18 + 1;
          uStack_8._0_1_ = 2;
          piStack_18 = piVar8;
          func_0x008ab0e6(piVar4,piVar1,(int)piVar3 - (int)piVar1);
          DAT_013e019c = DAT_013e019c + -1;
          func_0x00e730b2(&DAT_012ba570);
          func_0x005797f0(piVar8 + 0x6910);
          uStack_8 = CONCAT31(uStack_8._1_3_,3);
          if (((uint)piVar8[0x12] >> 4 & 1) != 0) {
            (**(code **)(*(int *)piVar8[0x691c] + 0xc))();
          }
          piVar8[0x12] = piVar8[0x12] & 0xffffffef;
          func_0x00e730b2(uStack_1c);
          if (piVar8 != (int *)0x0) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              func_0x00e05820();
              func_0x00ddbb20(piVar8);
            }
          }
          *unaff_FS_OFFSET = iStack_10;
          return 1;
        }
        if (1 < DAT_012ba4e8) {
          func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piVar8,0xa001
                         );
        }
        if (DAT_013e01b0 != '\0') {
          BVar6 = IsDebuggerPresent();
          if (BVar6 != 0) {
            DebugBreak();
          }
        }
        if (piVar8 == (int *)0x0) {
          piVar8 = &DAT_013e01ac;
        }
        else {
          piVar8 = piVar8 + 0x692b;
        }
        LOCK();
        *piVar8 = 0xa001;
        UNLOCK();
      }
      func_0x00e730b2(&DAT_012ba570);
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  else {
    func_0x00e7304a(5);
  }
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}



void Catch_All_00dc45e0(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc4600(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6aef5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar5 = piStack_18;
  uStack_8._0_1_ = 1;
  if ((piStack_18 != (int *)0x0) && (*(char *)((int)piStack_18 + 0x11) == '\x01')) {
    piVar4 = piStack_18 + 0x6910;
    iVar2 = func_0x00e7307f(piVar4);
    piVar6 = piStack_18;
    if (iVar2 == 0) {
      iVar2 = piVar5[0x691b];
      if (iVar2 != 0x7fffffff) {
        uStack_8._0_1_ = 2;
        if ((char)piStack_18[4] == '\0') {
          if (1 < DAT_012ba4e8) {
            func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,
                            0xa001);
          }
          if (DAT_013e01b0 != '\0') {
            BVar3 = IsDebuggerPresent();
            if (BVar3 != 0) {
              DebugBreak();
            }
          }
          if (piVar6 == (int *)0x0) {
            piVar6 = &DAT_013e01ac;
          }
          else {
            piVar6 = piVar6 + 0x692b;
          }
          LOCK();
          *piVar6 = 0xa001;
          UNLOCK();
          func_0x00e730b2(piVar4);
        }
        else if (((uint)piStack_18[0x12] >> 4 & 1) == 0) {
          uStack_8._0_1_ = 3;
          (**(code **)(*(int *)piStack_18[0x691c] + 8))();
          piStack_18[0x12] = piStack_18[0x12] | 0x10;
          func_0x00e730b2(piVar4);
        }
        else {
          func_0x00e730b2(piVar4);
        }
        goto LAB_00dc47f5;
      }
    }
    else {
      iVar2 = func_0x00e7304a(5);
    }
    piVar5[0x691b] = iVar2 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < DAT_012ba4e8) {
    func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa001);
  }
  if (DAT_013e01b0 != '\0') {
    BVar3 = IsDebuggerPresent();
    if (BVar3 != 0) {
      DebugBreak();
    }
  }
  if (piVar5 == (int *)0x0) {
    piVar5 = &DAT_013e01ac;
  }
  else {
    piVar5 = piVar5 + 0x692b;
  }
  LOCK();
  *piVar5 = 0xa001;
  UNLOCK();
LAB_00dc47f5:
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00dc472f(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (0 < DAT_012ba4e8) {
    piVar2 = (int *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00ddf410(1,DAT_013e0188,&DAT_0102b618,piVar2);
  }
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00e04820(*(int *)(unaff_EBP + -0x14) + 0x10,&DAT_0112e274,piVar2);
  func_0x00dcb0d0(*(undefined4 *)(unaff_EBP + -0x14),0xa001);
  return &DAT_00dc4792;
}



void Catch_All_00dc482e(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc4850(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6af35;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if ((piStack_18 != (int *)0x0) && (*(char *)((int)piStack_18 + 0x11) == '\x01')) {
    piVar5 = piStack_18 + 0x6910;
    iVar3 = func_0x00e7307f(piVar5);
    if (iVar3 == 0) {
      iVar3 = piVar2[0x691b];
      if (iVar3 != 0x7fffffff) {
        uStack_8._0_1_ = 2;
        if (((uint)piStack_18[0x12] >> 4 & 1) != 0) {
          (**(code **)(*(int *)piStack_18[0x691c] + 0xc))();
        }
        piStack_18[0x12] = piStack_18[0x12] & 0xffffffef;
        func_0x00e730b2(piVar5);
        goto LAB_00dc4955;
      }
    }
    else {
      iVar3 = func_0x00e7304a(5);
    }
    piVar2[0x691b] = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < DAT_012ba4e8) {
    func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa001);
  }
  if (DAT_013e01b0 != '\0') {
    BVar4 = IsDebuggerPresent();
    if (BVar4 != 0) {
      DebugBreak();
    }
  }
  if (piVar2 == (int *)0x0) {
    LOCK();
    DAT_013e01ac = 0xa001;
    UNLOCK();
  }
  else {
    LOCK();
    piVar2[0x692b] = 0xa001;
    UNLOCK();
  }
LAB_00dc4955:
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc498e(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc49b0(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6aeb5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar4 = piStack_18;
  uStack_8._0_1_ = 1;
  if ((piStack_18 == (int *)0x0) || (*(char *)((int)piStack_18 + 0x11) != '\x01')) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa001
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        DebugBreak();
      }
    }
    if (piVar4 == (int *)0x0) {
      piVar4 = &DAT_013e01ac;
    }
    else {
      piVar4 = piVar4 + 0x692b;
    }
    iVar3 = 0xa001;
  }
  else {
    if ((-1 < (int)param_3) && (((int)param_3 < 1 || (param_2 != 0)))) {
      if (0 < (int)param_3) {
        func_0x005797f0(piStack_18 + 0x6910);
        uStack_8._0_1_ = 2;
        piVar4 = (int *)piStack_18[0x691c];
        uVar1 = (**(code **)(*piVar4 + 0x14))();
        if (uVar1 < param_3) {
          func_0x00dcb0d0(piStack_18,0xa004);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(param_2,param_3);
        }
        func_0x00e730b2(uStack_1c);
      }
      func_0x00dc6cd0();
      goto LAB_00dc4a69;
    }
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa004
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        DebugBreak();
      }
    }
    if (piVar4 == (int *)0x0) {
      piVar4 = &DAT_013e01ac;
      iVar3 = 0xa004;
    }
    else {
      piVar4 = piVar4 + 0x692b;
      iVar3 = 0xa004;
    }
  }
  LOCK();
  *piVar4 = iVar3;
  UNLOCK();
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00dc4a69:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc4b7a(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc4b80(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  BOOL BVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int iStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b4ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = 0;
  iStack_18 = 0;
  uStack_8 = 1;
  puVar3 = &uStack_28;
  if (param_1 != (int *)0x0) {
    piVar4 = (int *)func_0x00dcaf70(&param_1,param_1);
    piVar2 = param_1;
    if (piVar4 != &iStack_18) {
      iVar6 = *piVar4;
      *piVar4 = 0;
      iStack_18 = iVar6;
    }
    if (param_1 != (int *)0x0) {
      LOCK();
      iVar1 = *param_1;
      *param_1 = *param_1 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (param_1 != (int *)0x0)) {
        func_0x00ddc830();
        func_0x00ddbb20(piVar2);
      }
    }
    puVar3 = (uint *)puStack_14;
    if (iVar6 == 0) {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa002);
      }
      if ((DAT_013e01b0 != '\0') && (BVar5 = IsDebuggerPresent(), BVar5 != 0)) {
        DebugBreak();
      }
      LOCK();
      DAT_013e01ac = 0xa002;
      UNLOCK();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  puStack_14 = (undefined1 *)puVar3;
  param_1 = *(int **)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  if (*(char *)((int)param_1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  piVar2 = *(int **)((int)param_1 + 0xbc);
  if ((*(char *)((int)param_1 + 0x18) == '\0') &&
     (func_0x008abb44(), *(char *)((int)param_1 + 0x18) == '\0')) {
    func_0x008abb44();
  }
  *(int *)((int)param_1 + 0xbc) = iVar6;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x00ddc830();
      func_0x00ddbb20(piVar2);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void Catch_All_00dc4cf5(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc4d00(void)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    func_0x008abb44();
  }
  return *(undefined4 *)(iVar1 + 0xbc);
}



int FUN_00dc4d30(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  uint uStack_44;
  undefined1 auStack_34 [12];
  undefined *puStack_28;
  int *piStack_24;
  undefined4 *puStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b308;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dc8130();
  if (param_1 != (byte *)0x0) {
    pcVar10 = "OpenAL Soft";
    do {
      bVar1 = *param_1;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_00dc4d97:
        uVar4 = -(uint)bVar11 | 1;
        goto LAB_00dc4d9c;
      }
      if (bVar1 == 0) break;
      bVar1 = param_1[1];
      bVar11 = bVar1 < ((byte *)pcVar10)[1];
      if (bVar1 != ((byte *)pcVar10)[1]) goto LAB_00dc4d97;
      param_1 = param_1 + 2;
      pcVar10 = (char *)((byte *)pcVar10 + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00dc4d9c:
    if (uVar4 != 0) {
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",0,0xa004);
      }
      if (DAT_013e01b0 != '\0') {
        BVar5 = IsDebuggerPresent();
        if (BVar5 != 0) {
          DebugBreak();
        }
      }
      LOCK();
      DAT_013e01ac = 0xa004;
      UNLOCK();
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
  }
  bVar11 = DAT_012ba660 != '\0';
  iVar6 = func_0x00ddbb30(0x10,0x1a570);
  if (iVar6 != 0) {
    uStack_8._0_1_ = 1;
    piStack_24 = (int *)iVar6;
    piVar7 = (int *)func_0x00e055d0(2);
    piVar7[0x691f] = 0x100;
    piVar7[0x6920] = 0x40;
    piVar7[0x13] = (uint)bVar11 * 2 + 2;
    piVar7[7] = 0;
    piVar7[6] = 0;
    piVar7[5] = 48000;
    *(undefined2 *)(piVar7 + 8) = 0x601;
    piVar7[0x691e] = 1;
    uStack_8._0_1_ = 3;
    piVar7[0x691d] = piVar7[0x691f] + -1;
    piStack_24 = piVar7;
    piVar8 = (int *)func_0x00e0cc00();
    puVar9 = (undefined4 *)
             (**(code **)(*piVar8 + 0xc))
                       (&piStack_18,-(uint)(piVar7 != (int *)0x0) & (uint)(piVar7 + 4),0);
    puVar2 = (undefined4 *)*puVar9;
    *puVar9 = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,4);
    puStack_1c = puVar2;
    if (piStack_18 != (int *)0x0) {
      (**(code **)(*piStack_18 + 0x1c))(1);
    }
    (**(code **)*puVar2)("Loopback");
    piVar8 = (int *)piVar7[0x691c];
    piVar7[0x691c] = (int)puVar2;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x1c))(1);
    }
    uStack_8 = 2;
    puStack_28 = &DAT_012ba570;
    iVar6 = func_0x00e7307f(&DAT_012ba570);
    if (iVar6 == 0) {
      if (DAT_012ba59c != 0x7fffffff) {
        uStack_8._0_1_ = 6;
        piStack_18 = piVar7;
        func_0x00dc6ab0(&puStack_1c,DAT_013e0198,DAT_013e019c,&piStack_18);
        piStack_18 = piVar7;
        func_0x00dc6930(&puStack_1c,puStack_1c,&piStack_18);
        uStack_8 = CONCAT31(uStack_8._1_3_,2);
        func_0x00e730b2(&DAT_012ba570);
        if (2 < DAT_012ba4e8) {
          func_0x00ddf410(3,DAT_013e0188,"Created loopback device %p\n",piVar7);
        }
        *unaff_FS_OFFSET = iStack_10;
        return (int)piVar7;
      }
    }
    else {
      func_0x00e7304a(5);
    }
    DAT_012ba59c = 0x7ffffffe;
    func_0x00e7304a(6);
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_34,&DAT_0125c4dc);
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}



undefined * Catch_00dc4f98(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (1 < DAT_012ba4e8) {
    piVar2 = (int *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00ddf410(2,DAT_013e0188,"Failed to open loopback device: %s\n",piVar2);
  }
  func_0x00dcb0d0(0,(*(int *)(iVar1 + 0x24) == 2) + 0xa004);
  return &DAT_00dc4fe4;
}



void Catch_All_00dc501b(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  func_0x008aaff0();
  func_0x00e7304a(5);
  DAT_012ba59c = 0x7ffffffe;
  func_0x00e7304a(6);
  func_0x0062c530();
  func_0x00e87d2e(unaff_EBP + -0x30,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc5050(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  BOOL BVar2;
  char *pcVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_1c;
  undefined1 auStack_16 [2];
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b2bd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_1c,param_1);
  piVar4 = piStack_1c;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if ((piStack_1c == (int *)0x0) || (*(char *)((int)piStack_1c + 0x11) != '\x02')) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_1c,0xa001
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        DebugBreak();
      }
    }
    if (piVar4 == (int *)0x0) {
      LOCK();
      DAT_013e01ac = 0xa001;
      UNLOCK();
    }
    else {
      LOCK();
      piVar4[0x692b] = 0xa001;
      UNLOCK();
    }
  }
  else if (param_2 < 1) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_1c,0xa004
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        DebugBreak();
      }
    }
    if (piVar4 == (int *)0x0) {
      piVar4 = &DAT_013e01ac;
    }
    else {
      piVar4 = piVar4 + 0x692b;
    }
    LOCK();
    *piVar4 = 0xa004;
    UNLOCK();
  }
  else {
    pcVar3 = (char *)func_0x00dc73d0(auStack_16,param_4);
    if (*pcVar3 != '\0') {
      pcVar3 = (char *)func_0x00dc7320(auStack_16,param_3);
      if ((*pcVar3 != '\0') && (param_2 - 8000U < 0x2cec1)) {
        func_0x00dc6cd0();
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
    }
  }
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_1c;
    *piStack_1c = *piStack_1c + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piStack_1c != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_1c);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void Catch_All_00dc51fb(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00dc5210(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f6b3f0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x11) != '\x02')) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",param_1,0xa001);
    }
    if (DAT_013e01b0 != '\0') {
      BVar3 = IsDebuggerPresent();
      if (BVar3 != 0) {
        DebugBreak();
      }
    }
    puVar4 = (undefined4 *)(param_1 + 0x1a4ac);
    uVar2 = 0xa001;
    if (param_1 == 0) {
      puVar4 = &DAT_013e01ac;
    }
  }
  else {
    if ((-1 < param_3) && ((param_3 < 1 || (param_2 != 0)))) {
      uVar2 = func_0x00dfe9f0(*(undefined1 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      uVar2 = func_0x00e04c70(param_2,param_3,uVar2);
      *unaff_FS_OFFSET = iStack_10;
      return uVar2;
    }
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",param_1,0xa004);
    }
    if (DAT_013e01b0 != '\0') {
      BVar3 = IsDebuggerPresent();
      if (BVar3 != 0) {
        DebugBreak();
      }
    }
    puVar4 = (undefined4 *)(param_1 + 0x1a4ac);
    uVar2 = 0xa004;
  }
  LOCK();
  uVar1 = *puVar4;
  *puVar4 = uVar2;
  UNLOCK();
  *unaff_FS_OFFSET = iStack_10;
  return uVar1;
}



void Catch_All_00dc5341(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc5350(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b065;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_2c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar2 = piStack_18;
  uStack_8._0_1_ = 1;
  if ((piStack_18 != (int *)0x0) && (*(char *)((int)piStack_18 + 0x11) == '\0')) {
    piVar5 = piStack_18 + 0x6910;
    iVar3 = func_0x00e7307f(piVar5);
    if (iVar3 == 0) {
      iVar3 = piVar2[0x691b];
      if (iVar3 != 0x7fffffff) {
        uStack_8._0_1_ = 2;
        if (((uint)piStack_18[0x12] >> 4 & 1) != 0) {
          (**(code **)(*(int *)piStack_18[0x691c] + 0xc))();
        }
        piStack_18[0x12] = piStack_18[0x12] & 0xffffffef;
        piStack_18[0x12] = piStack_18[0x12] | 8;
        func_0x00e730b2(piVar5);
        goto LAB_00dc545c;
      }
    }
    else {
      iVar3 = func_0x00e7304a(5);
    }
    piVar2[0x691b] = iVar3 + -1;
    func_0x00e7304a(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < DAT_012ba4e8) {
    func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa001);
  }
  if (DAT_013e01b0 != '\0') {
    BVar4 = IsDebuggerPresent();
    if (BVar4 != 0) {
      DebugBreak();
    }
  }
  if (piVar2 == (int *)0x0) {
    LOCK();
    DAT_013e01ac = 0xa001;
    UNLOCK();
  }
  else {
    LOCK();
    piVar2[0x692b] = 0xa001;
    UNLOCK();
  }
LAB_00dc545c:
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Catch_All_00dc5495(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00dc54b0(int param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  BOOL BVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b0a5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar7 = piStack_18;
  uStack_8._0_1_ = 1;
  if ((piStack_18 == (int *)0x0) || (*(char *)((int)piStack_18 + 0x11) != '\0')) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa001
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar5 = IsDebuggerPresent();
      if (BVar5 != 0) {
        DebugBreak();
      }
    }
    if (piVar7 == (int *)0x0) {
      piVar7 = &DAT_013e01ac;
    }
    else {
      piVar7 = piVar7 + 0x692b;
    }
    LOCK();
    *piVar7 = 0xa001;
    UNLOCK();
  }
  else {
    piVar6 = piStack_18 + 0x6910;
    iVar3 = func_0x00e7307f(piVar6);
    if (iVar3 != 0) {
      iVar3 = func_0x00e7304a(5);
LAB_00dc56ff:
      piVar7[0x691b] = iVar3 + -1;
      func_0x00e7304a(6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = piVar7[0x691b];
    if (iVar3 == 0x7fffffff) goto LAB_00dc56ff;
    uStack_8._0_1_ = 2;
    if (((uint)piStack_18[0x12] >> 3 & 1) == 0) {
      func_0x00e730b2(piVar6);
    }
    else {
      piStack_18[0x12] = piStack_18[0x12] & 0xfffffff7;
      if (*(int *)piStack_18[0x690d] == 0) {
        func_0x00e730b2(piVar6);
        func_0x00dc6cd0();
        goto LAB_00dc5653;
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,3);
      (**(code **)(*(int *)piStack_18[0x691c] + 8))();
      uStack_8._0_1_ = 2;
      uStack_8._1_3_ = 0;
      piStack_18[0x12] = piStack_18[0x12] | 0x10;
      if (2 < DAT_012ba4e8) {
        uVar1 = *(undefined1 *)(param_1 + 0x20);
        uVar4 = func_0x00dfeae0(*(undefined1 *)(param_1 + 0x21),*(undefined4 *)(param_1 + 0x14),
                                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
        uVar4 = func_0x00dfea60(uVar1,uVar4);
        func_0x00ddf410(3,DAT_013e0188,"Post-resume: %s, %s, %uhz, %u / %u buffer\n",uVar4);
      }
      func_0x00e730b2(piVar6);
    }
  }
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
LAB_00dc5653:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_00dc55dc(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (0 < DAT_012ba4e8) {
    piVar2 = (int *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    func_0x00ddf410(1,DAT_013e0188,&DAT_0102b618,piVar2);
  }
  piVar2 = (int *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    piVar2 = (int *)*piVar2;
  }
  func_0x00e04820(*(int *)(unaff_EBP + -0x14) + 0x10,&DAT_0112e274,piVar2);
  func_0x00dcb0d0(*(undefined4 *)(unaff_EBP + -0x14),0xa001);
  return &DAT_00dc563f;
}



void Catch_All_00dc56f3(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  func_0x008aaff0();
  iVar2 = func_0x00e7304a(5);
  *(int *)(unaff_ESI + 0x2c) = iVar2 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int FUN_00dc5710(undefined4 param_1,int param_2,uint param_3)

{
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f6b25d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_28 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_28;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00dcb020(&piStack_18,param_1);
  piVar3 = piStack_18;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if ((piStack_18 == (int *)0x0) || (*(char *)((int)piStack_18 + 0x11) == '\x01')) {
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa001
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar1 = IsDebuggerPresent();
      if (BVar1 != 0) {
        DebugBreak();
      }
    }
    iVar2 = 0xa001;
    if (piVar3 != (int *)0x0) {
      piVar3 = piVar3 + 0x692b;
      goto LAB_00dc58ca;
    }
  }
  else {
    if (param_2 == 0x1995) {
      if (-1 < (int)param_3) {
        iVar2 = piStack_18[0x6927];
        if (param_3 < (uint)((piStack_18[0x6928] - iVar2) / 0x18)) {
          piVar3 = (int *)(iVar2 + param_3 * 0x18);
          if (0xf < *(uint *)(iVar2 + 0x14 + param_3 * 0x18)) {
            piVar3 = (int *)*piVar3;
          }
          func_0x00dc6cd0();
          *unaff_FS_OFFSET = iStack_10;
          return (int)piVar3;
        }
      }
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,
                        0xa004);
      }
      if (DAT_013e01b0 != '\0') {
        BVar1 = IsDebuggerPresent();
        if (BVar1 != 0) {
          DebugBreak();
        }
      }
      if (piVar3 == (int *)0x0) {
        piVar3 = &DAT_013e01ac;
        iVar2 = 0xa004;
      }
      else {
        piVar3 = piVar3 + 0x692b;
        iVar2 = 0xa004;
      }
      goto LAB_00dc58ca;
    }
    if (1 < DAT_012ba4e8) {
      func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,0xa003
                     );
    }
    if (DAT_013e01b0 != '\0') {
      BVar1 = IsDebuggerPresent();
      if (BVar1 != 0) {
        DebugBreak();
      }
    }
    iVar2 = 0xa003;
    if (piVar3 != (int *)0x0) {
      piVar3 = piVar3 + 0x692b;
      goto LAB_00dc58ca;
    }
  }
  piVar3 = &DAT_013e01ac;
LAB_00dc58ca:
  LOCK();
  *piVar3 = iVar2;
  UNLOCK();
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar2 = *piStack_18;
    *piStack_18 = *piStack_18 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piStack_18 != (int *)0x0)) {
      func_0x00e05820();
      func_0x00ddbb20(piStack_18);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void Catch_All_00dc5907(void)

{
  code *pcVar1;
  
  func_0x008aaff0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined1 FUN_00dc5910(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  BOOL BVar4;
  int *unaff_ESI;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_00f6b47d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_7 = 0;
  iVar3 = func_0x00e7307f(&DAT_012ba570);
  if (iVar3 == 0) {
    if (DAT_012ba59c == 0x7fffffff) goto LAB_00dc5b03;
    uStack_8 = 1;
    func_0x00dcb020(&piStack_18,param_1);
    piVar5 = piStack_18;
    uStack_8 = 2;
    uVar2 = uStack_8;
    uStack_8 = 2;
    if ((piStack_18 == (int *)0x0) || (*(char *)((int)piStack_18 + 0x11) == '\x01')) {
      uStack_8 = uVar2;
      func_0x00e730b2(&DAT_012ba570);
      piVar5 = piStack_18;
      if (1 < DAT_012ba4e8) {
        func_0x00ddf410(2,DAT_013e0188,"Error generated on device %p, code 0x%04x\n",piStack_18,
                        0xa001);
      }
      if (DAT_013e01b0 != '\0') {
        BVar4 = IsDebuggerPresent();
        if (BVar4 != 0) {
          DebugBreak();
        }
      }
      if (piVar5 == (int *)0x0) {
        piVar5 = &DAT_013e01ac;
      }
      else {
        piVar5 = piVar5 + 0x692b;
      }
      LOCK();
      *piVar5 = 0xa001;
      UNLOCK();
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar3 = *piStack_18;
        *piStack_18 = *piStack_18 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
          func_0x00e05820();
          func_0x00ddbb20(piStack_18);
        }
      }
      *unaff_FS_OFFSET = iStack_10;
      return 0;
    }
    unaff_ESI = piStack_18 + 0x6910;
    iVar3 = func_0x00e7307f(unaff_ESI);
    if (iVar3 == 0) {
      iVar3 = piVar5[0x691b];
      if (iVar3 != 0x7fffffff) {
        _uStack_8 = CONCAT31(uStack_7,3);
        func_0x00e730b2(&DAT_012ba570);
        if (((uint)piStack_18[0x12] >> 4 & 1) != 0) {
          (**(code **)(*(int *)piStack_18[0x691c] + 0xc))();
        }
        piStack_18[0x12] = piStack_18[0x12] & 0xffffffef;
        uVar2 = func_0x00dc8520(piStack_18,param_2);
        func_0x00e730b2(unaff_ESI);
        if (piStack_18 != (int *)0x0) {
          LOCK();
          iVar3 = *piStack_18;
          *piStack_18 = *piStack_18 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (piStack_18 != (int *)0x0)) {
            func_0x00e05820();
            func_0x00ddbb20(piStack_18);
          }
        }
        *unaff_FS_OFFSET = iStack_10;
        return uVar2;
      }
      goto LAB_00dc5b1b;
    }
  }
  else {
    func_0x00e7304a(5);
LAB_00dc5b03:
    DAT_012ba59c = 0x7ffffffe;
    func_0x00e7304a(6);
  }
  iVar3 = func_0x00e7304a(5);
LAB_00dc5b1b:
  unaff_ESI[0xb] = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



void Catch_All_00dc5af7(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
