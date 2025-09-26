      }
      iVar3 = iVar3 + 1;
      iVar1 = func_0x00bd1830(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



undefined4 FUN_00c23100(int param_1,int *param_2)

{
  if (param_1 == 1) {
    *(undefined4 *)(*param_2 + 8) = 0;
  }
  else if (param_1 == 3) {
    FUN_00bdc650(*(undefined4 *)(*param_2 + 8));
    return 1;
  }
  return 1;
}



undefined4 FUN_00c23140(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    func_0x00c23620(param_3,*param_2,param_4);
  }
  if (0 < param_2[1]) {
    func_0x00bbc8e0(param_3,"%*sOnly User Certificates\n",param_4,&DAT_0112e1b4);
  }
  if (0 < param_2[2]) {
    func_0x00bbc8e0(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_0112e1b4);
  }
  if (0 < param_2[4]) {
    func_0x00bbc8e0(param_3,"%*sIndirect CRL\n",param_4,&DAT_0112e1b4);
  }
  if (param_2[3] != 0) {
    func_0x00c236c0(param_3,"Only Some Reasons",param_2[3],param_4);
  }
  if (0 < param_2[5]) {
    func_0x00bbc8e0(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_0112e1b4);
  }
  if ((((*param_2 == 0) && (param_2[1] < 1)) && (param_2[2] < 1)) &&
     (((param_2[4] < 1 && (param_2[3] == 0)) && (param_2[5] < 1)))) {
    func_0x00bbc8e0(param_3,"%*s<EMPTY>\n",param_4,&DAT_0112e1b4);
  }
  return 1;
}



int FUN_00c23220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  
  func_0x00e87f70();
  iVar3 = func_0x00c08650(&DAT_01063a20);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_crld.c",0x17e,"v2i_idp");
    func_0x00bc5160(0x22,0x8000d,0);
LAB_00c23459:
    func_0x00c08cb0(iVar3,&DAT_01063a20);
    return 0;
  }
  iVar10 = 0;
  iVar4 = func_0x00bd1830(param_4);
  if (0 < iVar4) {
    do {
      iVar4 = func_0x00bd1a80(param_4,iVar10);
      uVar2 = *(undefined4 *)(iVar4 + 8);
      pbVar11 = *(byte **)(iVar4 + 4);
      iVar5 = func_0x00c23760(iVar3,param_3,iVar4);
      if (iVar5 < 1) {
        if (iVar5 < 0) goto LAB_00c23459;
        pcVar8 = "onlyuser";
        pbVar6 = pbVar11;
        do {
          bVar1 = *pbVar6;
          bVar12 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_00c232e0:
            uVar7 = -(uint)bVar12 | 1;
            goto LAB_00c232e5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar12 = bVar1 < ((byte *)pcVar8)[1];
          if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c232e0;
          pbVar6 = pbVar6 + 2;
          pcVar8 = (char *)((byte *)pcVar8 + 2);
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_00c232e5:
        if (uVar7 == 0) {
          iVar4 = func_0x00be2830(iVar4,iVar3 + 4);
        }
        else {
          pbVar9 = &DAT_01063bf4;
          pbVar6 = pbVar11;
          do {
            bVar1 = *pbVar6;
            bVar12 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00c23320:
              uVar7 = -(uint)bVar12 | 1;
              goto LAB_00c23325;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar12 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00c23320;
            pbVar6 = pbVar6 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_00c23325:
          if (uVar7 == 0) {
            iVar4 = func_0x00be2830(iVar4,iVar3 + 8);
          }
          else {
            pbVar9 = &DAT_01063cc4;
            pbVar6 = pbVar11;
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_00c23360:
                uVar7 = -(uint)bVar12 | 1;
                goto LAB_00c23365;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_00c23360;
              pbVar6 = pbVar6 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_00c23365:
            if (uVar7 == 0) {
              iVar4 = func_0x00be2830(iVar4,iVar3 + 0x14);
            }
            else {
              pcVar8 = "indirectCRL";
              pbVar6 = pbVar11;
              do {
                bVar1 = *pbVar6;
                bVar12 = bVar1 < (byte)*pcVar8;
                if (bVar1 != *pcVar8) {
LAB_00c233a0:
                  uVar7 = -(uint)bVar12 | 1;
                  goto LAB_00c233a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar12 = bVar1 < ((byte *)pcVar8)[1];
                if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c233a0;
                pbVar6 = pbVar6 + 2;
                pcVar8 = (char *)((byte *)pcVar8 + 2);
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_00c233a5:
              if (uVar7 == 0) {
                iVar4 = func_0x00be2830(iVar4,iVar3 + 0x10);
              }
              else {
                pcVar8 = "onlysomereasons";
                do {
                  bVar1 = *pbVar11;
                  bVar12 = bVar1 < (byte)*pcVar8;
                  if (bVar1 != *pcVar8) {
LAB_00c233e0:
                    uVar7 = -(uint)bVar12 | 1;
                    goto LAB_00c233e5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar11[1];
                  bVar12 = bVar1 < ((byte *)pcVar8)[1];
                  if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c233e0;
                  pbVar11 = pbVar11 + 2;
                  pcVar8 = (char *)((byte *)pcVar8 + 2);
                } while (bVar1 != 0);
                uVar7 = 0;
LAB_00c233e5:
                if (uVar7 != 0) {
                  FUN_00bc4f50();
                  func_0x00bc5050("crypto\\x509\\v3_crld.c",0x19a,"v2i_idp");
                  func_0x00bc5160(0x22,0x6a,0);
                  func_0x00ba6530(4,"name=",*(undefined4 *)(iVar4 + 4),", value=",
                                  *(undefined4 *)(iVar4 + 8));
                  goto LAB_00c23459;
                }
                iVar4 = func_0x00c23960(iVar3 + 0xc,uVar2);
              }
            }
          }
        }
        if (iVar4 == 0) goto LAB_00c23459;
      }
      iVar10 = iVar10 + 1;
      iVar4 = func_0x00bd1830(param_4);
    } while (iVar10 < iVar4);
  }
  return iVar3;
}



void FUN_00c23490(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_0106395c);
  return;
}



bool FUN_00c247d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = func_0x00bab6e0(param_1,param_2,param_3);
    return iVar1 == param_3;
  }
  return true;
}



size_t FUN_00c24bc0(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  size_t sVar10;
  
  func_0x00e87f70();
  piVar1 = *(int **)(param_2 + 0x28);
  if ((*(uint *)(param_2 + 0x1c) & 0x200) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_mem.c",0xdd,"mem_write");
    func_0x00bc5160(0x20,0x7e,0);
    return 0xffffffff;
  }
  func_0x00baa700(param_2,0xf);
  if (param_4 == 0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_mem.c",0xe4,"mem_write");
    func_0x00bc5160(0x20,0xc0102,0);
    return 0xffffffff;
  }
  iVar2 = *(int *)piVar1[1];
  if ((*(int *)(param_2 + 0x14) != 0) && (piVar3 = *(int **)(param_2 + 0x28), piVar3 != (int *)0x0))
  {
    iVar9 = ((undefined4 *)piVar3[1])[1];
    if (iVar9 != *(int *)(*piVar3 + 4)) {
      func_0x008ab0e6(*(int *)(*piVar3 + 4),iVar9,*(undefined4 *)piVar3[1]);
      *(undefined4 *)*piVar3 = *(undefined4 *)piVar3[1];
      *(undefined4 *)(piVar3[1] + 4) = *(undefined4 *)(*piVar3 + 4);
    }
  }
  iVar9 = func_0x00c1e9c0(*piVar1,iVar2 + param_4);
  sVar10 = 0xffffffff;
  if (iVar9 != 0) {
    memcpy((void *)(*(int *)(*piVar1 + 4) + iVar2),param_3,param_4);
    puVar4 = (undefined4 *)*piVar1;
    puVar5 = (undefined4 *)piVar1[1];
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    uVar8 = puVar4[3];
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;
    puVar5[3] = uVar8;
    sVar10 = param_4;
  }
  return sVar10;
}



size_t FUN_00c24d00(int param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  uint *puVar2;
  uint _Size;
  
  puVar2 = (uint *)(*(undefined4 **)(param_1 + 0x28))[1];
  if ((*(uint *)(param_1 + 0x1c) & 0x200) != 0) {
    puVar2 = (uint *)**(undefined4 **)(param_1 + 0x28);
  }
  func_0x00baa700(param_1,0xf);
  if (((int)param_3 < 0) || (_Size = *puVar2, param_3 <= *puVar2)) {
    _Size = param_3;
  }
  if ((param_2 == (void *)0x0) || ((int)_Size < 1)) {
    if (*puVar2 == 0) {
      sVar1 = *(size_t *)(param_1 + 0x24);
      if (sVar1 != 0) {
        func_0x00bab680(param_1,9);
      }
      return sVar1;
    }
  }
  else {
    memcpy(param_2,(void *)puVar2[1],_Size);
    *puVar2 = *puVar2 - _Size;
    puVar2[2] = puVar2[2] - _Size;
    puVar2[1] = puVar2[1] + _Size;
  }
  return _Size;
}



size_t FUN_00c24d80(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  size_t _Size;
  undefined4 uVar11;
  
  func_0x00e87f70();
  pcVar10 = param_3;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar10 - (int)(param_3 + 1);
  piVar2 = *(int **)(param_2 + 0x28);
  if ((*(uint *)(param_2 + 0x1c) & 0x200) == 0) {
    func_0x00baa700(param_2,0xf);
    if (_Size == 0) {
      return 0;
    }
    if (param_3 != (char *)0x0) {
      iVar3 = *(int *)piVar2[1];
      if ((*(int *)(param_2 + 0x14) != 0) &&
         (piVar4 = *(int **)(param_2 + 0x28), piVar4 != (int *)0x0)) {
        iVar9 = ((undefined4 *)piVar4[1])[1];
        if (iVar9 != *(int *)(*piVar4 + 4)) {
          func_0x008ab0e6(*(int *)(*piVar4 + 4),iVar9,*(undefined4 *)piVar4[1]);
          *(undefined4 *)*piVar4 = *(undefined4 *)piVar4[1];
          *(undefined4 *)(piVar4[1] + 4) = *(undefined4 *)(*piVar4 + 4);
        }
      }
      iVar9 = func_0x00c1e9c0(*piVar2,iVar3 + _Size);
      if (iVar9 == 0) {
        return 0xffffffff;
      }
      memcpy((void *)(*(int *)(*piVar2 + 4) + iVar3),param_3,_Size);
      puVar5 = (undefined4 *)*piVar2;
      puVar6 = (undefined4 *)piVar2[1];
      uVar11 = puVar5[1];
      uVar7 = puVar5[2];
      uVar8 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar11;
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      return _Size;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_mem.c",0xe4,"mem_write");
    uVar11 = 0xc0102;
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_mem.c",0xdd,"mem_write");
    uVar11 = 0x7e;
  }
  func_0x00bc5160(0x20,uVar11,0);
  return 0xffffffff;
}



size_t FUN_00c24eb0(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  size_t _Size;
  
  piVar4 = (int *)(*(undefined4 **)(param_1 + 0x28))[1];
  if ((*(uint *)(param_1 + 0x1c) & 0x200) != 0) {
    piVar4 = (int *)**(undefined4 **)(param_1 + 0x28);
  }
  func_0x00baa700(param_1,0xf);
  iVar2 = param_3 + -1;
  if (*piVar4 <= param_3 + -1) {
    iVar2 = *piVar4;
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    return 0;
  }
  iVar1 = 0;
  do {
    iVar5 = iVar1;
    if (*(char *)(iVar5 + piVar4[1]) == '\n') break;
    iVar1 = iVar5 + 1;
  } while (iVar5 + 1 < iVar2);
  uVar6 = iVar5 + 1;
  puVar3 = (uint *)(*(undefined4 **)(param_1 + 0x28))[1];
  if ((*(uint *)(param_1 + 0x1c) & 0x200) != 0) {
    puVar3 = (uint *)**(undefined4 **)(param_1 + 0x28);
  }
  func_0x00baa700(param_1,0xf);
  if (((int)uVar6 < 0) || (_Size = *puVar3, uVar6 <= *puVar3)) {
    _Size = uVar6;
  }
  if ((param_2 != (undefined1 *)0x0) && (0 < (int)_Size)) {
    memcpy(param_2,(void *)puVar3[1],_Size);
    *puVar3 = *puVar3 - _Size;
    puVar3[2] = puVar3[2] - _Size;
    puVar3[1] = puVar3[1] + _Size;
    param_2[_Size] = 0;
    return _Size;
  }
  if (*puVar3 == 0) {
    _Size = *(size_t *)(param_1 + 0x24);
    if (_Size == 0) {
      return 0;
    }
    func_0x00bab680(param_1,9);
  }
  if (0 < (int)_Size) {
    param_2[_Size] = 0;
  }
  return _Size;
}



uint FUN_00c24f80(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  uint in_stack_00000028;
  uint *in_stack_0000002c;
  
  func_0x00e87f70();
  uVar15 = 1;
  puVar1 = *(uint **)(in_stack_00000020 + 0x28);
  uVar10 = *(uint *)(in_stack_00000020 + 0x1c) & 0x200;
  puVar2 = (uint *)*puVar1;
  puVar12 = (uint *)puVar1[1];
  if (uVar10 == 0) {
    puVar12 = puVar2;
  }
  puVar14 = puVar2;
  if (uVar10 == 0) {
    puVar14 = (uint *)puVar1[1];
  }
  uVar11 = puVar12[1];
  uVar3 = puVar14[1];
  uVar4 = *puVar14;
  uVar13 = 0;
  if (uVar3 != uVar11) {
    uVar13 = uVar3 - uVar11;
  }
  switch(in_stack_00000024) {
  case 1:
    if ((void *)puVar2[1] != (void *)0x0) {
      if (uVar10 != 0) {
        puVar1 = (uint *)puVar1[1];
        uVar15 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        return 1;
      }
      if ((*(uint *)(in_stack_00000020 + 0x1c) & 0x400) == 0) {
        memset((void *)puVar2[1],0,puVar2[2]);
        *puVar2 = 0;
      }
      puVar5 = (undefined4 *)*puVar1;
      puVar6 = (undefined4 *)puVar1[1];
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar7;
      puVar6[2] = uVar8;
      puVar6[3] = uVar9;
      return 1;
    }
    break;
  case 2:
    return (uint)(uVar4 == 0);
  case 3:
    uVar15 = uVar4;
    if (in_stack_0000002c != (uint *)0x0) {
      *in_stack_0000002c = uVar3;
      return uVar4;
    }
    break;
  default:
    uVar15 = 0;
    break;
  case 8:
    return *(uint *)(in_stack_00000020 + 0x18);
  case 9:
    *(uint *)(in_stack_00000020 + 0x18) = in_stack_00000028;
    return 1;
  case 10:
    return uVar4;
  case 0xb:
  case 0xc:
    break;
  case 0x72:
    func_0x00c25380(in_stack_00000020);
    *(uint *)(in_stack_00000020 + 0x18) = in_stack_00000028;
    puVar2 = (uint *)puVar1[1];
    *puVar1 = (uint)in_stack_0000002c;
    uVar15 = in_stack_0000002c[1];
    uVar10 = in_stack_0000002c[2];
    uVar11 = in_stack_0000002c[3];
    *puVar2 = *in_stack_0000002c;
    puVar2[1] = uVar15;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    return 1;
  case 0x73:
    if (in_stack_0000002c != (uint *)0x0) {
      if (uVar10 == 0) {
        func_0x00c253c0(in_stack_00000020);
      }
      *in_stack_0000002c = *puVar1;
      return 1;
    }
    break;
  case 0x80:
    if ((-1 < (int)in_stack_00000028) && ((int)in_stack_00000028 <= (int)(uVar13 + uVar4))) {
      if (in_stack_00000028 != 0) {
        uVar11 = uVar11 + in_stack_00000028;
      }
      puVar14[1] = uVar11;
      *puVar14 = *puVar12 - in_stack_00000028;
      puVar14[2] = puVar12[2] - in_stack_00000028;
      return in_stack_00000028;
    }
    return 0xffffffff;
  case 0x82:
    *(uint *)(in_stack_00000020 + 0x24) = in_stack_00000028;
    return 1;
  case 0x85:
    return uVar13;
  }
  return uVar15;
}



void FUN_00c25240(undefined4 param_1)

{
  func_0x00c25410(param_1,0);
  return;
}



void FUN_00c25250(undefined4 param_1)

{
  func_0x00c25410(param_1,1);
  return;
}



int FUN_00c25260(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return param_1;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x14) != 0)) && (piVar1 != (int *)0x0)
     ) {
    iVar2 = *piVar1;
    if ((*(uint *)(param_1 + 0x1c) & 0x200) != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    func_0x00c1e8a0(iVar2);
  }
  FUN_00bbc580(piVar1[1],"crypto\\bio\\bss_mem.c",0x98);
  FUN_00bbc580(piVar1,"crypto\\bio\\bss_mem.c",0x99);
  return 1;
}



void FUN_00c26850(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c01e40(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x00bd18c0(param_2,param_1);
    if (iVar1 == 0) {
      FUN_00c01d30(param_1);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00c26b90)
// WARNING: Removing unreachable block (ram,0x00c26ba2)
// WARNING: Removing unreachable block (ram,0x00c26ce0)
// WARNING: Removing unreachable block (ram,0x00c26ce8)

uint FUN_00c26a20(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 int *param_7,undefined8 param_8,int param_9,uint param_10,undefined4 param_11,
                 int param_12,int *param_13)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  piVar2 = param_13;
  iVar3 = param_12;
  param_1 = 0;
  param_4 = 0;
  param_2 = 0;
  param_13[4] = param_13[4] | 1;
  param_9 = param_13[3] + 1;
  piVar1 = (int *)*param_13;
  param_8 = 0;
  param_10 = 0;
  param_7 = piVar1;
  if (param_12 == 0) {
    if ((piVar1 == (int *)0x0) || (piVar1[3] == 0)) {
      param_12 = param_13[1];
      param_13[2] = 0;
    }
    else {
      iVar3 = func_0x00bd1830(piVar1[3]);
      param_12 = piVar2[1];
      piVar2[2] = iVar3;
    }
LAB_00c26baa:
    iVar3 = param_12;
    if (piVar2[2] != 0) {
      param_5 = func_0x00baa730(param_12,0x85,0,0);
      if (-1 < param_5) {
        piVar4 = (int *)func_0x00c01660(iVar3);
        param_13 = piVar4;
        if (piVar4 == (int *)0x0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\encode_decode\\decoder_lib.c",0x359,"decoder_process");
          func_0x00bc5160(0x3c,0x80020,0);
        }
        else {
          iVar3 = piVar2[2];
joined_r0x00c26c43:
          do {
            piVar4 = param_13;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            piVar4 = (int *)func_0x00bd1a80(piVar1[3],iVar3);
            if (piVar4 == (int *)0x0) {
              iVar5 = 0;
              iVar6 = 0;
              param_3 = 0;
              param_6 = 0;
            }
            else {
              param_3 = *piVar4;
              iVar6 = piVar4[3];
              param_6 = piVar4[1];
              iVar5 = piVar4[2];
            }
            if (param_1 == 0) {
              if ((*piVar1 != 0) && (iVar5 = func_0x00bbbfe0(*piVar1,iVar5), iVar5 != 0))
              goto joined_r0x00c26c43;
            }
            else {
              iVar5 = func_0x00c021c0(param_1,iVar5,piVar4 + 4);
              if (iVar5 == 0) goto joined_r0x00c26c43;
            }
            if ((param_2 != 0) && (iVar5 = func_0x00c01e00(param_3,param_2), iVar5 == 0))
            goto joined_r0x00c26c43;
            if ((((piVar2[4] & 4U) == 0) && (piVar1[1] != 0)) && (iVar6 != 0)) {
              piVar2[4] = piVar2[4] | 4;
              iVar6 = func_0x00bbbfe0(iVar6,piVar1[1]);
              if (iVar6 != 0) goto joined_r0x00c26c43;
            }
            iVar6 = param_12;
            func_0x00baa730(param_12,0x80,param_5,0);
            iVar6 = func_0x00baa730(iVar6,0x85,0,0);
            piVar4 = param_13;
            if (iVar6 != param_5) break;
            FUN_00bcaeb0();
            param_8 = CONCAT44(iVar3,(undefined4)param_8);
            param_10 = piVar2[4] & 4U | param_10 & 0xfffffffb;
            param_4 = (**(code **)(param_3 + 0x34))
                                (param_6,param_13,param_7[2],FUN_00c26a20,&param_7,FUN_00c476c0,
                                 param_7 + 7);
            piVar2[4] = piVar2[4] & 0xfffffffdU | param_10 & 2;
            if ((param_4 == 0) || ((param_10 & 2) != 0)) {
              FUN_00bcacf0();
              piVar4 = param_13;
              break;
            }
            func_0x00bcad80();
            piVar4 = param_13;
          } while ((param_10 & 1) == 0);
        }
        goto LAB_00c26ae5;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\encode_decode\\decoder_lib.c",0x354,"decoder_process");
      func_0x00bc5160(0x3c,0x80020,0);
    }
  }
  else {
    piVar4 = (int *)func_0x00bd1a80(piVar1[3],param_13[2]);
    if (piVar4 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *piVar4;
    }
    piVar2[4] = piVar2[4] & 0xfffffffd;
    if ((code *)piVar1[4] == (code *)0x0) {
LAB_00c26b03:
      iVar6 = func_0x00bc09d0(iVar3,&DAT_0113c58c);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 5)) {
        param_12 = func_0x00c252d0(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
        param_8 = CONCAT44(param_8._4_4_,param_12);
        if (((param_12 != 0) &&
            ((iVar6 = func_0x00bc09d0(iVar3,"data-type"), iVar6 == 0 ||
             (iVar6 = func_0x00bc08d0(iVar6,&param_2), iVar6 != 0)))) &&
           ((iVar3 = func_0x00bc09d0(iVar3,"data-structure"), iVar3 == 0 ||
            (iVar3 = func_0x00bc08d0(iVar3,&stack0x00000000), iVar3 != 0)))) goto LAB_00c26baa;
      }
    }
    else {
      iVar6 = (*(code *)piVar1[4])(piVar4,iVar3,piVar1[6]);
      param_4 = (uint)(0 < iVar6);
      if (iVar6 < 1) goto LAB_00c26b03;
      piVar2[4] = piVar2[4] | 2;
    }
  }
  piVar4 = (int *)0x0;
LAB_00c26ae5:
  FUN_00c015a0(piVar4);
  func_0x00baa8e0((undefined4)param_8);
  return param_4;
}



int * FUN_00c26e50(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_00bbc830(0x18,"crypto\\encode_decode\\decoder_lib.c",0x122);
  if (piVar3 != (int *)0x0) {
    iVar4 = param_1[1];
    iVar1 = param_1[2];
    iVar2 = param_1[3];
    *piVar3 = *param_1;
    piVar3[1] = iVar4;
    piVar3[2] = iVar1;
    piVar3[3] = iVar2;
    *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_1 + 4);
    iVar4 = FUN_00c01e40(*piVar3);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\encode_decode\\decoder_lib.c",0x127,"ossl_decoder_instance_dup");
      func_0x00bc5160(0x3c,0xc0103,0);
    }
    else {
      uVar5 = func_0x00c01dc0(*piVar3);
      uVar5 = thunk_FUN_00bc77d0(uVar5);
      iVar4 = (**(code **)(*piVar3 + 0x18))(uVar5);
      piVar3[1] = iVar4;
      if (iVar4 != 0) {
        return piVar3;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\encode_decode\\decoder_lib.c",0x12f,"ossl_decoder_instance_dup");
      func_0x00bc5160(0x3c,0xc0103,0);
      FUN_00c01d30(*piVar3);
    }
    FUN_00bbc580(piVar3,"crypto\\encode_decode\\decoder_lib.c",0x137);
  }
  return (int *)0x0;
}



void FUN_00c26f30(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 0x1c))(param_1[1]);
    }
    param_1[1] = 0;
    FUN_00c01d30(*param_1);
    *param_1 = 0;
    FUN_00bbc580(param_1,"crypto\\encode_decode\\decoder_lib.c",0x118);
  }
  return;
}



undefined * FUN_00c27140(void)

{
  return &DAT_010644b4;
}



void FUN_00c27550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00bab6e0(param_3,param_1,param_2);
  return;
}



void FUN_00c28080(void)

{
  int iVar1;
  
  iVar1 = DAT_013df168;
  if (DAT_013df168 != 0) {
    DAT_013df168 = 0;
    func_0x00bd1860(iVar1,FUN_00c281e0);
  }
  return;
}



void FUN_00c281e0(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_00bbc580(param_1,"crypto\\asn1\\a_strnid.c",0xdf);
  }
  return;
}



int FUN_00c28490(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = func_0x00bd1830(param_2);
  iVar1 = param_3;
  if (iVar2 < 1) {
    iVar2 = param_3;
    if (param_3 == 0) {
      iVar1 = FUN_00bbc830(0x14,"crypto\\stack\\stack.c",0xe4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        return iVar1;
      }
      return 0;
    }
  }
  else {
    do {
      uVar3 = func_0x00bd1a80(param_2,iVar5);
      iVar2 = func_0x00c28fe0(param_1,uVar3,iVar1);
      if (iVar2 == 0) {
        if (param_3 == 0) {
          func_0x00bd1860(iVar1,FUN_00be27e0);
        }
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = func_0x00bd1830(param_2);
      iVar1 = iVar2;
    } while (iVar5 < iVar4);
  }
  return iVar2;
}



int FUN_00c28510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  
  func_0x00e87f70();
  iVar2 = func_0x00bd1830(param_4);
  iVar3 = func_0x00bd17c0(0,iVar2);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_san.c",0x185,"v2i_subject_alt");
    func_0x00bc5160(0x22,0x8000f,0);
    FUN_00bd1630(0);
    return 0;
  }
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = func_0x00bd1a80(param_4,iVar9);
      iVar5 = func_0x00be3d90(*(undefined4 *)(iVar4 + 4),"email");
      if ((iVar5 == 0) && (pbVar6 = *(byte **)(iVar4 + 8), pbVar6 != (byte *)0x0)) {
        pbVar8 = &DAT_01198378;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00c285d0:
            uVar7 = -(uint)bVar10 | 1;
            goto LAB_00c285d5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00c285d0;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_00c285d5:
        if (uVar7 != 0) goto LAB_00c285dc;
        uVar11 = 0;
LAB_00c2862b:
        iVar4 = func_0x00c28e90(param_3,iVar3,uVar11);
        if (iVar4 == 0) {
LAB_00c28639:
          func_0x00bd1860(iVar3,FUN_00be0540);
          return 0;
        }
      }
      else {
LAB_00c285dc:
        iVar5 = func_0x00be3d90(*(undefined4 *)(iVar4 + 4),"email");
        if ((iVar5 == 0) && (pbVar6 = *(byte **)(iVar4 + 8), pbVar6 != (byte *)0x0)) {
          pbVar8 = &DAT_0113d994;
          do {
            bVar1 = *pbVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00c28620:
              uVar7 = -(uint)bVar10 | 1;
              goto LAB_00c28625;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00c28620;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_00c28625:
          if (uVar7 == 0) {
            uVar11 = 1;
            goto LAB_00c2862b;
          }
        }
        iVar4 = func_0x00c293a0(param_2,param_3,iVar4);
        if (iVar4 == 0) goto LAB_00c28639;
        func_0x00bd18c0(iVar3,iVar4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  return iVar3;
}



int FUN_00c28690(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  
  func_0x00e87f70();
  iVar2 = func_0x00bd1830(param_5);
  iVar3 = func_0x00bd17c0(0,iVar2);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_san.c",0x136,"v2i_issuer_alt");
    func_0x00bc5160(0x22,0x8000f,0);
    FUN_00bd1630(0);
    return 0;
  }
  iVar13 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = func_0x00bd1a80(param_5,iVar13);
      iVar5 = func_0x00be3d90(*(undefined4 *)(iVar4 + 4),"issuer");
      if ((iVar5 == 0) && (pbVar10 = *(byte **)(iVar4 + 8), pbVar10 != (byte *)0x0)) {
        pbVar6 = &DAT_01198378;
        do {
          bVar1 = *pbVar10;
          bVar12 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00c28761:
            uVar7 = -(uint)bVar12 | 1;
            goto LAB_00c28766;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar12 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00c28761;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_00c28766:
        if (uVar7 != 0) goto LAB_00c2880b;
        if (param_4 == (byte *)0x0) {
LAB_00c28864:
          uVar9 = 0x7f;
          uVar11 = 0x15b;
LAB_00c2886e:
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_san.c",uVar11,"copy_issuer");
          func_0x00bc5160(0x22,uVar9,0);
          goto LAB_00c28890;
        }
        if ((*param_4 & 1) == 0) {
          if (*(int *)(param_4 + 4) == 0) goto LAB_00c28864;
          iVar4 = func_0x00be01f0(*(int *)(param_4 + 4),0x55,0xffffffff);
          if (iVar4 < 0) goto LAB_00c2882f;
          iVar4 = func_0x00be01d0(*(undefined4 *)(param_4 + 4),iVar4);
          if ((iVar4 == 0) || (iVar4 = func_0x00c28200(iVar4), iVar4 == 0)) {
            uVar9 = 0x7e;
            uVar11 = 0x163;
          }
          else {
            iVar5 = func_0x00bd1830(iVar4);
            iVar8 = func_0x00bd18e0(iVar3,iVar5);
            if (iVar8 != 0) {
              iVar8 = 0;
              if (0 < iVar5) {
                do {
                  uVar9 = func_0x00bd1a80(iVar4,iVar8);
                  func_0x00bd18c0(iVar3,uVar9);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar5);
              }
              FUN_00bd1630(iVar4);
              goto LAB_00c2882f;
            }
            uVar9 = 0x8000f;
            uVar11 = 0x169;
          }
          goto LAB_00c2886e;
        }
      }
      else {
LAB_00c2880b:
        iVar4 = func_0x00c293a0(param_3,param_4,iVar4);
        if (iVar4 == 0) {
LAB_00c28890:
          func_0x00bd1860(iVar3,FUN_00be0540);
          return 0;
        }
        func_0x00bd18c0(iVar3,iVar4);
      }
LAB_00c2882f:
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar2);
  }
  return iVar3;
}



undefined * FUN_00c29cd0(void)

{
  return &DAT_01065a0c;
}



undefined * FUN_00c29d00(void)

{
  return &DAT_01065a50;
}



undefined * FUN_00c29d20(void)

{
  return &DAT_01065b34;
}



undefined4 FUN_00c29d30(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  func_0x00be26e0(&DAT_01065b70,*param_2,&param_3);
  func_0x00be2720("pathlen",param_2[1],&param_3);
  return param_3;
}



int FUN_00c29d70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  
  iVar2 = func_0x00c08650(&DAT_01065b34);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_bcons.c",0x40,"v2i_BASIC_CONSTRAINTS");
    func_0x00bc5160(0x22,0x8000d,0);
    return 0;
  }
  iVar9 = 0;
  iVar3 = func_0x00bd1830(param_3);
  if (0 < iVar3) {
    do {
      iVar3 = func_0x00bd1a80(param_3,iVar9);
      pbVar7 = &DAT_01065b70;
      pbVar8 = *(byte **)(iVar3 + 4);
      pbVar6 = pbVar8;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00c29e00:
          uVar4 = -(uint)bVar10 | 1;
          goto LAB_00c29e05;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00c29e00;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00c29e05:
      if (uVar4 == 0) {
        iVar3 = func_0x00be2830(iVar3,iVar2);
      }
      else {
        pcVar5 = "pathlen";
        do {
          bVar1 = *pbVar8;
          bVar10 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_00c29e37:
            uVar4 = -(uint)bVar10 | 1;
            goto LAB_00c29e3c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar10 = bVar1 < ((byte *)pcVar5)[1];
          if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00c29e37;
          pbVar8 = pbVar8 + 2;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_00c29e3c:
        if (uVar4 != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_bcons.c",0x4c,"v2i_BASIC_CONSTRAINTS");
          func_0x00bc5160(0x22,0x6a,0);
          func_0x00ba6530(4,"name=",*(undefined4 *)(iVar3 + 4),", value=",*(undefined4 *)(iVar3 + 8)
                         );
          goto LAB_00c29ea9;
        }
        iVar3 = func_0x00be2b20(iVar3,iVar2 + 4);
      }
      if (iVar3 == 0) {
LAB_00c29ea9:
        func_0x00c08cb0(iVar2,&DAT_01065b34);
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar3 = func_0x00bd1830(param_3);
    } while (iVar9 < iVar3);
  }
  return iVar2;
}



undefined * FUN_00c29ee0(void)

{
  return &DAT_01065c3c;
}



undefined * FUN_00c29ef0(void)

{
  return &DAT_01065c6c;
}



void FUN_00c29f00(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  uint in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  int in_stack_00000070;
  
  func_0x00e87f70();
  iVar5 = in_stack_00000070;
  uVar4 = in_stack_0000006c;
  uVar3 = in_stack_00000068;
  in_stack_00000060 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar12 = 0;
  iVar6 = func_0x00bd1830(in_stack_0000006c);
  iVar9 = iVar5;
  iVar8 = iVar5;
  if (0 < iVar6) {
    do {
      puVar7 = (undefined4 *)func_0x00bd1a80(uVar4,iVar12);
      iVar8 = func_0x00c28fe0(uVar3,puVar7[1],iVar9);
      if (iVar8 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_info.c",0x4d,"i2v_AUTHORITY_INFO_ACCESS");
        func_0x00bc5160(0x22,0x8000d,0);
        iVar8 = iVar9;
LAB_00c2a05d:
        if ((iVar5 == 0) && (iVar8 != 0)) {
          func_0x00bd1860(iVar8,FUN_00be27e0);
        }
        FUN_008ab370();
        return;
      }
      iVar9 = func_0x00bd1a80(iVar8,iVar12);
      func_0x00bfbbb0(&stack0x00000010,0x50,*puVar7);
      pcVar10 = &stack0x00000010;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      pcVar11 = *(char **)(iVar9 + 4);
      pcVar1 = pcVar11 + 1;
      do {
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      iVar6 = FUN_00bbc4f0(pcVar10 + (int)(pcVar11 + ((4 - (int)pcVar1) - (int)&stack0x00000011)),
                           "crypto\\x509\\v3_info.c",0x54);
      if (iVar6 == 0) goto LAB_00c2a05d;
      func_0x00bbc9d0(iVar6,pcVar10 + (int)(pcVar11 + ((4 - (int)pcVar1) - (int)&stack0x00000011)),
                      "%s - %s",&stack0x00000010,*(undefined4 *)(iVar9 + 4));
      FUN_00bbc580(*(undefined4 *)(iVar9 + 4),"crypto\\x509\\v3_info.c",0x58);
      *(int *)(iVar9 + 4) = iVar6;
      iVar12 = iVar12 + 1;
      iVar6 = func_0x00bd1830(uVar4);
      iVar9 = iVar8;
    } while (iVar12 < iVar6);
  }
  if ((iVar5 == 0) && (iVar8 == 0)) {
    func_0x00bd1790();
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



int FUN_00c2a0a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  func_0x00e87f70();
  uVar7 = param_8;
  iVar1 = func_0x00bd1830(param_8);
  iVar2 = func_0x00bd17c0(0,iVar1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_info.c",0x73,"v2i_AUTHORITY_INFO_ACCESS");
    func_0x00bc5160(0x22,0x8000f,0);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = func_0x00bd1a80(uVar7,iVar8);
      piVar4 = (int *)func_0x00c08650(&DAT_01065c3c);
      if (piVar4 == (int *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_info.c",0x79,"v2i_AUTHORITY_INFO_ACCESS");
        func_0x00bc5160(0x22,0x8000d,0);
LAB_00c2a21d:
        func_0x00bd1860(iVar2,FUN_00c2a290);
        return 0;
      }
      func_0x00bd18c0(iVar2,piVar4);
      iVar5 = func_0x008ab0c6(*(undefined4 *)(iVar3 + 4),0x3b);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_info.c",0x7f,"v2i_AUTHORITY_INFO_ACCESS");
        func_0x00bc5160(0x22,0x8f,0);
        goto LAB_00c2a21d;
      }
      param_3 = iVar5 + 1;
      param_4 = *(undefined4 *)(iVar3 + 8);
      iVar6 = func_0x00c296b0(piVar4[1],param_6,param_7,&param_2,0);
      if ((iVar6 == 0) ||
         (iVar3 = func_0x00bbbcd0(*(int *)(iVar3 + 4),iVar5 - *(int *)(iVar3 + 4),
                                  "crypto\\x509\\v3_info.c",0x86), iVar3 == 0)) goto LAB_00c2a21d;
      iVar5 = func_0x00bc2c50(iVar3,0);
      *piVar4 = iVar5;
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_info.c",0x8a,"v2i_AUTHORITY_INFO_ACCESS");
        func_0x00bc5160(0x22,0x77,"value=%s",iVar3);
        FUN_00bbc580(iVar3,"crypto\\x509\\v3_info.c",0x8c);
        goto LAB_00c2a21d;
      }
      FUN_00bbc580(iVar3,"crypto\\x509\\v3_info.c",0x8f);
      iVar8 = iVar8 + 1;
      uVar7 = param_8;
    } while (iVar8 < iVar1);
  }
  return iVar2;
}



void FUN_00c2a290(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01065c3c);
  return;
}



void FUN_00c2b2a0(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iStack00000004;
  uint uStack00000018;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_000000c0;
  undefined4 in_stack_000000c8;
  int in_stack_000000cc;
  undefined4 in_stack_000000d0;
  int *in_stack_000000d4;
  undefined4 in_stack_000000d8;
  int in_stack_000000dc;
  
  func_0x00e87f70();
  iVar14 = in_stack_000000dc;
  uVar13 = in_stack_000000d8;
  piVar12 = in_stack_000000d4;
  uVar11 = in_stack_000000d0;
  iVar16 = in_stack_000000cc;
  uVar10 = in_stack_000000c8;
  in_stack_000000c0 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar24 = 0;
  in_stack_0000003c = 0;
  iVar15 = func_0x00bba4d0(in_stack_000000d4);
  if (iVar15 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bn\\bn_exp.c",0x148,"BN_mod_exp_mont");
    func_0x00bc5160(3,0x66,0);
    goto LAB_00c2b86a;
  }
  if ((piVar12[1] < 0x200000) &&
     (((iVar15 = func_0x00bba460(uVar11,4), iVar15 != 0 ||
       (iVar15 = func_0x00bba460(iVar16,4), iVar15 != 0)) ||
      (iVar15 = func_0x00bba460(piVar12,4), iVar15 != 0)))) {
    func_0x00c2b890(uVar10,iVar16,uVar11,piVar12,uVar13,iVar14);
    goto LAB_00c2b86a;
  }
  iStack00000004 = func_0x00bba610(uVar11);
  if (iStack00000004 == 0) {
    iVar16 = func_0x00bb9f20(piVar12,1);
    if (iVar16 == 0) {
      func_0x00bba8c0(uVar10,1);
    }
    else {
      func_0x00bbaaf0(uVar10);
    }
    goto LAB_00c2b86a;
  }
  func_0x00bb59e0(uVar13);
  uVar17 = func_0x00bb57f0(uVar13);
  piVar18 = (int *)func_0x00bb57f0(uVar13);
  in_stack_00000040 = func_0x00bb57f0(uVar13);
  if (in_stack_00000040 == 0) goto LAB_00c2b84d;
  iVar24 = iVar14;
  if ((iVar14 == 0) &&
     ((iVar24 = func_0x00bf9900(), iVar24 == 0 ||
      (iVar15 = func_0x00bf9960(iVar24,piVar12,uVar13), iVar15 == 0)))) {
LAB_00c2b854:
    func_0x00bf98b0(iVar24);
  }
  else {
    if ((((*(int *)(iVar16 + 0xc) != 0) || (iVar15 = func_0x00bba970(iVar16,piVar12), -1 < iVar15))
        && (iVar15 = func_0x00be9410(in_stack_00000040,iVar16,piVar12,uVar13),
           iVar16 = in_stack_00000040, iVar15 == 0)) ||
       (iVar16 = func_0x00bfa260(in_stack_00000040,iVar16,iVar24,uVar13), iVar16 == 0))
    goto LAB_00c2b84d;
    if (iStack00000004 < 0x2a0) {
      if (0xef < iStack00000004) {
        uStack00000018 = 5;
        goto LAB_00c2b4e2;
      }
      if (0x4f < iStack00000004) {
        uStack00000018 = 4;
        goto LAB_00c2b4e2;
      }
      uStack00000018 = (uint)(0x17 < iStack00000004) * 2 + 1;
      if (0x17 < iStack00000004) goto LAB_00c2b4e2;
    }
    else {
      uStack00000018 = 6;
LAB_00c2b4e2:
      iVar16 = func_0x00bfa150(uVar17,in_stack_00000040,in_stack_00000040,iVar24,uVar13);
      if (iVar16 == 0) goto LAB_00c2b84d;
      iVar15 = 1;
      iVar16 = 1 << ((char)uStack00000018 - 1U & 0x1f);
      if (1 < iVar16) {
        do {
          iVar19 = func_0x00bb57f0(uVar13);
          (&stack0x00000040)[iVar15] = iVar19;
          if ((iVar19 == 0) ||
             (iVar19 = func_0x00bfa150(iVar19,(&stack0x0000003c)[iVar15],uVar17,iVar24,uVar13),
             iVar19 == 0)) goto LAB_00c2b84d;
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar16);
      }
    }
    iVar16 = piVar12[1];
    iStack00000004 = iStack00000004 + -1;
    bVar9 = true;
    if (*(int *)(*piVar12 + -4 + iVar16 * 4) < 0) {
      iVar15 = func_0x00bbb1e0(piVar18,iVar16);
      if (iVar15 != 0) {
        iVar15 = 1;
        *(int *)*piVar18 = -*(int *)*piVar12;
        if (1 < iVar16) {
          if (1 < iVar16 - 1U) {
            iVar19 = *piVar18;
            iVar22 = *piVar12;
            piVar1 = (int *)(iVar19 + 4);
            piVar23 = (int *)(iVar19 + iVar16 * 4 + -4);
            if (((((int *)(iVar22 + iVar16 * 4 + -4) < piVar1) || (piVar23 < (int *)(iVar22 + 4U)))
                && ((piVar18 < piVar1 || (piVar23 < piVar18)))) &&
               ((piVar12 < piVar1 || (piVar23 < piVar12)))) {
              if (iVar16 - 1U < 0x10) {
LAB_00c2b694:
                iVar19 = *piVar12;
                iVar22 = *piVar18;
                uVar20 = iVar16 - 1U & 0x80000001;
                if ((int)uVar20 < 0) {
                  uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
                }
                do {
                  uVar5 = *(undefined8 *)(iVar19 + iVar15 * 4);
                  *(ulonglong *)(iVar22 + iVar15 * 4) =
                       CONCAT44(~(uint)((ulonglong)uVar5 >> 0x20),~(uint)uVar5);
                  iVar15 = iVar15 + 2;
                } while (iVar15 < (int)(iVar16 - uVar20));
              }
              else {
                uVar20 = iVar16 - 1U & 0x8000000f;
                if ((int)uVar20 < 0) {
                  uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                }
                iVar21 = 0x24;
                do {
                  puVar3 = (uint *)(iVar22 + -0x20 + iVar21);
                  uVar6 = puVar3[1];
                  uVar7 = puVar3[2];
                  uVar8 = puVar3[3];
                  iVar15 = iVar15 + 0x10;
                  iVar2 = iVar21 + 0x40;
                  puVar4 = (uint *)(iVar19 + -0x60 + iVar2);
                  *puVar4 = ~*puVar3;
                  puVar4[1] = ~uVar6;
                  puVar4[2] = ~uVar7;
                  puVar4[3] = ~uVar8;
                  puVar3 = (uint *)(iVar22 + -0x50 + iVar2);
                  uVar6 = puVar3[1];
                  uVar7 = puVar3[2];
                  uVar8 = puVar3[3];
                  puVar4 = (uint *)(iVar19 + -0x50 + iVar2);
                  *puVar4 = ~*puVar3;
                  puVar4[1] = ~uVar6;
                  puVar4[2] = ~uVar7;
                  puVar4[3] = ~uVar8;
                  puVar3 = (uint *)(iVar21 + iVar22);
                  uVar6 = puVar3[1];
                  uVar7 = puVar3[2];
                  uVar8 = puVar3[3];
                  puVar4 = (uint *)(iVar21 + iVar19);
                  *puVar4 = ~*puVar3;
                  puVar4[1] = ~uVar6;
                  puVar4[2] = ~uVar7;
                  puVar4[3] = ~uVar8;
                  puVar3 = (uint *)(iVar22 + -0x30 + iVar2);
                  uVar6 = puVar3[1];
                  uVar7 = puVar3[2];
                  uVar8 = puVar3[3];
                  puVar4 = (uint *)(iVar19 + -0x30 + iVar2);
                  *puVar4 = ~*puVar3;
                  puVar4[1] = ~uVar6;
                  puVar4[2] = ~uVar7;
                  puVar4[3] = ~uVar8;
                  iVar21 = iVar2;
                } while (iVar15 < (int)(iVar16 - uVar20));
                if (1 < ((char)iVar16 - 1U & 0xf)) goto LAB_00c2b694;
              }
              if (iVar16 <= iVar15) goto LAB_00c2b70e;
            }
          }
          do {
            *(uint *)(*piVar18 + iVar15 * 4) = ~*(uint *)(*piVar12 + iVar15 * 4);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar16);
        }
LAB_00c2b70e:
        piVar18[1] = iVar16;
        goto LAB_00c2b730;
      }
    }
    else {
      uVar17 = func_0x00bbaaa0(iVar24,uVar13);
      iVar16 = func_0x00bfa260(piVar18,uVar17);
      if (iVar16 == 0) goto LAB_00c2b84d;
LAB_00c2b730:
      do {
        while (iVar16 = func_0x00bba490(uVar11,iStack00000004), iVar16 == 0) {
          if ((!bVar9) &&
             (iVar16 = func_0x00bfa150(piVar18,piVar18,piVar18,iVar24,uVar13), iVar16 == 0))
          goto LAB_00c2b84d;
          if (iStack00000004 == 0) goto LAB_00c2b824;
          iStack00000004 = iStack00000004 + -1;
        }
        uVar20 = 1;
        iVar15 = 0;
        iVar19 = 1;
        iVar16 = iStack00000004;
        if (1 < uStack00000018) {
          do {
            iVar16 = iVar16 + -1;
            if (iVar16 < 0) break;
            iVar22 = func_0x00bba490(uVar11,iVar16);
            if (iVar22 != 0) {
              uVar20 = uVar20 << ((char)iVar19 - (char)iVar15 & 0x1fU) | 1;
              iVar15 = iVar19;
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < (int)uStack00000018);
        }
        if ((!bVar9) && (iVar16 = 0, iVar15 != -1 && -1 < iVar15 + 1)) {
          do {
            iVar19 = func_0x00bfa150(piVar18,piVar18,piVar18,iVar24,uVar13);
            if (iVar19 == 0) goto LAB_00c2b84d;
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar15 + 1);
        }
        iVar16 = func_0x00bfa150(piVar18,piVar18,(&stack0x00000040)[(int)uVar20 >> 1],iVar24,uVar13)
        ;
        if (iVar16 == 0) goto LAB_00c2b84d;
        bVar9 = false;
        iStack00000004 = iStack00000004 + (-1 - iVar15);
      } while (-1 < iStack00000004);
LAB_00c2b824:
      iVar16 = func_0x00bf9d00(uVar10,piVar18,iVar24,uVar13);
      in_stack_0000003c = (uint)(iVar16 != 0);
    }
LAB_00c2b84d:
    if (iVar14 == 0) goto LAB_00c2b854;
  }
  func_0x00bb56f0(uVar13);
LAB_00c2b86a:
  FUN_008ab370();
  return;
}



bool FUN_00c2f2c0(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bba5e0();
  *param_1 = iVar1;
  return iVar1 != 0;
}



bool FUN_00c2f2e0(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bba770();
  *param_1 = iVar1;
  return iVar1 != 0;
}



void FUN_00c2f300(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x14) & 1) != 0) {
      FUN_00bba080();
      *param_1 = 0;
      return;
    }
    FUN_00bba400(*param_1);
    *param_1 = 0;
  }
  return;
}



int FUN_00c2f340(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return -1;
  }
  uVar1 = func_0x00bba610(iVar2);
  if (param_2 != (undefined1 *)0x0) {
    if ((uVar1 & 7) == 0) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    func_0x00bb9f70(iVar2,param_2);
  }
  iVar2 = func_0x00bba610(iVar2);
  return ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + (uint)((uVar1 & 7) == 0);
}



undefined4
FUN_00c2f3a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = func_0x00bba5e0();
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bb9f50(param_2,param_3,iVar1);
  if (iVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x14) & 1) != 0) {
        FUN_00bba080();
        *param_1 = 0;
        return 0;
      }
      FUN_00bba400(*param_1);
      *param_1 = 0;
    }
    return 0;
  }
  return 1;
}



undefined4
FUN_00c2f410(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = func_0x00bba770();
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bb9f50(param_2,param_3,iVar1);
  if (iVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x14) & 1) != 0) {
        FUN_00bba080();
        *param_1 = 0;
        return 0;
      }
      FUN_00bba400(*param_1);
      *param_1 = 0;
    }
    return 0;
  }
  func_0x00bba880(*param_1,4);
  return 1;
}



bool FUN_00c2f490(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00c752c0(param_1,*param_2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bab050(param_1,&DAT_0113d23c);
    return 0 < iVar1;
  }
  return false;
}



undefined * FUN_00c2f4d0(void)

{
  return &DAT_01066010;
}



undefined * FUN_00c2f4e0(void)

{
  return &DAT_0106602c;
}



bool FUN_00c2f4f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bbc830(8,"crypto\\asn1\\x_int64.c",0x1f);
  *param_1 = iVar1;
  return iVar1 != 0;
}



void FUN_00c2f520(undefined4 *param_1)

{
  FUN_00bbc580(*param_1,"crypto\\asn1\\x_int64.c",0x26);
  *param_1 = 0;
  return;
}



void FUN_00c2f540(undefined4 *param_1)

{
  param_1 = (undefined4 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



undefined4 FUN_00c2f560(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)*param_1;
  iVar1 = ((int *)*param_1)[1];
  if (((*(uint *)(param_4 + 0x14) & 1) != 0) && (iVar2 == 0 && iVar1 == 0)) {
    return 0xffffffff;
  }
  if ((((*(uint *)(param_4 + 0x14) & 2) != 0) && (iVar1 < 1)) && (iVar1 < 0)) {
    bVar4 = iVar2 != 0;
    iVar2 = -iVar2;
    uVar3 = 1;
    iVar1 = -(iVar1 + (uint)bVar4);
  }
  uVar3 = func_0x00bd2b10(param_2,iVar2,iVar1,uVar3);
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00c2f6b8)
// WARNING: Removing unreachable block (ram,0x00c2f63d)

undefined4
FUN_00c2f5c0(undefined8 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  func_0x00e87f70();
  piVar1 = param_3;
  param_1 = 0;
  puVar2 = (undefined4 *)*param_3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00bbc830(8,"crypto\\asn1\\x_int64.c",0x1f);
    *piVar1 = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (param_5 == 0) {
LAB_00c2f6d3:
  }
  else {
    iVar3 = func_0x00bd2a30(&param_1,&stack0x00000000,&param_4,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*(byte *)(param_8 + 0x14) & 2) == 0) goto LAB_00c2f6d3;
    if (0x7ffffffe < param_1._4_4_) {
      if (0x7fffffff < param_1._4_4_) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\asn1\\x_int64.c",100,"uint64_c2i");
        func_0x00bc5160(0xd,0xdf,0);
        return 0;
      }
      goto LAB_00c2f6db;
    }
  }
LAB_00c2f6db:
  puVar2[1] = param_1._4_4_;
  *puVar2 = (undefined4)param_1;
  return 1;
}



void FUN_00c2f6f0(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = ((undefined4 *)*param_2)[1];
  uVar2 = *(undefined4 *)*param_2;
  if ((*(byte *)(param_3 + 0x14) & 2) != 0) {
    func_0x00bbc8e0(param_1,&DAT_0106619c,uVar2,uVar1);
    return;
  }
  func_0x00bbc8e0(param_1,&DAT_010661a4,uVar2,uVar1);
  return;
}



bool FUN_00c2f730(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bbc830(4,"crypto\\asn1\\x_int64.c",0x7c);
  *param_1 = iVar1;
  return iVar1 != 0;
}



void FUN_00c2f760(undefined4 *param_1)

{
  FUN_00bbc580(*param_1,"crypto\\asn1\\x_int64.c",0x83);
  *param_1 = 0;
  return;
}



void FUN_00c2f790(undefined4 *param_1)

{
  *(undefined4 *)*param_1 = 0;
  return;
}



undefined4 FUN_00c2f7a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)*param_1;
  if (((*(uint *)(param_4 + 0x14) & 1) != 0) && (iVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x14) & 2) != 0) && (iVar1 < 0)) {
    iVar1 = -iVar1;
    uVar2 = 1;
  }
  uVar2 = func_0x00bd2b10(param_2,iVar1,0,uVar2);
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00c2f859)
// WARNING: Removing unreachable block (ram,0x00c2f8a2)
// WARNING: Removing unreachable block (ram,0x00c2f8aa)
// WARNING: Removing unreachable block (ram,0x00c2f8b5)
// WARNING: Removing unreachable block (ram,0x00c2f8c2)

undefined4
FUN_00c2f7e0(undefined8 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  func_0x00e87f70();
  piVar1 = param_3;
  param_1 = 0;
  puVar2 = (uint *)*param_3;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_00bbc830(8,"crypto\\asn1\\x_int64.c",0x1f);
    *piVar1 = (int)puVar2;
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
  }
  if (param_5 == 0) {
  }
  else {
    iVar3 = func_0x00bd2a30(&param_1,&stack0x00000000,&param_4,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*(byte *)(param_8 + 0x14) & 2) == 0) {
      if (param_1._4_4_ != 0) goto LAB_00c2f906;
      bVar4 = (uint)param_1 != 0xffffffff;
      bVar5 = (uint)param_1 == 0xffffffff;
    }
    else {
      if (param_1._4_4_ != 0) goto LAB_00c2f906;
      bVar4 = (uint)param_1 < 0x7fffffff;
      bVar5 = (uint)param_1 == 0x7fffffff;
    }
    if (!bVar4 && !bVar5) {
LAB_00c2f906:
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\asn1\\x_int64.c",0xd0,"uint32_c2i");
      func_0x00bc5160(0xd,0xdf,0);
      return 0;
    }
  }
  *puVar2 = (uint)param_1;
  return 1;
}



void FUN_00c2f950(undefined4 param_1,undefined4 *param_2,int param_3)

{
  if ((*(byte *)(param_3 + 0x14) & 2) != 0) {
    func_0x00bbc8e0(param_1,&DAT_010661b8,*(undefined4 *)*param_2);
    return;
  }
  func_0x00bbc8e0(param_1,&DAT_010661bc,*(undefined4 *)*param_2);
  return;
}



undefined * FUN_00c2f990(void)

{
  return &DAT_01066058;
}



undefined * FUN_00c2f9a0(void)

{
  return &DAT_01066074;
}



undefined * FUN_00c2f9b0(void)

{
  return &DAT_010660c8;
}



undefined * FUN_00c2f9c0(void)

{
  return &DAT_01066100;
}



undefined * FUN_00c2f9d0(void)

{
  return &DAT_010660e4;
}



undefined * FUN_00c2f9e0(void)

{
  return &DAT_0106611c;
}



undefined4 FUN_00c2f9f0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0x3c,"crypto\\dh\\dh_pmeth.c",0x3a);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[3] = 0xffffffff;
  puVar1[1] = 2;
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  *(undefined4 **)(param_1 + 0x34) = puVar1 + 7;
  *(undefined4 *)(param_1 + 0x38) = 2;
  return 1;
}



void FUN_00c2fa40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x30),"crypto\\dh\\dh_pmeth.c",0x4d);
    FUN_00bfb4c0(*(undefined4 *)(iVar1 + 0x28));
    FUN_00bbc580(iVar1,"crypto\\dh\\dh_pmeth.c",0x4f);
  }
  return;
}



undefined4 FUN_00c2fa80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_00bbc830(0x3c,"crypto\\dh\\dh_pmeth.c",0x3a);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x800;
    puVar2[3] = 0xffffffff;
    puVar2[1] = 2;
    *(undefined1 *)(puVar2 + 9) = 1;
    *(undefined4 **)(param_1 + 0x50) = puVar2;
    puVar1 = *(undefined4 **)(param_1 + 0x50);
    *(undefined4 **)(param_1 + 0x34) = puVar2 + 7;
    *(undefined4 *)(param_1 + 0x38) = 2;
    puVar2 = *(undefined4 **)(param_2 + 0x50);
    *puVar1 = *puVar2;
    puVar1[3] = puVar2[3];
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[6] = puVar2[6];
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(puVar2 + 9);
    iVar3 = func_0x00bfc7a0(puVar2[10]);
    puVar1[10] = iVar3;
    if (iVar3 != 0) {
      puVar1[0xb] = puVar2[0xb];
      if (puVar2[0xc] != 0) {
        iVar3 = func_0x00bbbc30(puVar2[0xc],puVar2[0xd],"crypto\\dh\\dh_pmeth.c",0x6a);
        puVar1[0xc] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        puVar1[0xd] = puVar2[0xd];
      }
      puVar1[0xe] = puVar2[0xe];
      return 1;
    }
  }
  return 0;
}



uint FUN_00c2fb60(int param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x50);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if ((int)param_3 < 0x100) {
        return 0xfffffffe;
      }
      *puVar1 = param_3;
      return 1;
    }
    if (param_2 == 2) {
      return 1;
    }
    return 0xfffffffe;
  }
  switch(param_2) {
  case 0x1002:
    if (puVar1[2] == 0) {
      puVar1[1] = param_3;
      return 1;
    }
    break;
  case 0x1003:
    if (2 < param_3 - 1) {
      return 0xfffffffe;
    }
    goto LAB_00c2fbef;
  case 0x1004:
    if (puVar1[2] != 0) {
      puVar1[3] = param_3;
      return 1;
    }
    break;
  case 0x1005:
    if (param_3 < 3) {
      puVar1[2] = param_3;
      return 1;
    }
    break;
  case 0x1006:
    if (param_3 == 0xfffffffe) {
      return (int)(char)puVar1[9];
    }
    if ((param_3 == 1) || (param_3 == 2)) {
      *(char *)(puVar1 + 9) = (char)param_3;
      return 1;
    }
    break;
  case 0x1007:
    puVar1[0xb] = (uint)param_4;
    return 1;
  case 0x1008:
    *param_4 = puVar1[0xb];
    return 1;
  case 0x1009:
    if (0 < (int)param_3) {
      puVar1[0xe] = param_3;
      return 1;
    }
    break;
  case 0x100a:
    *param_4 = puVar1[0xe];
    return 1;
  case 0x100b:
    FUN_00bbc580(puVar1[0xc],"crypto\\dh\\dh_pmeth.c",0xc3);
    puVar1[0xc] = (uint)param_4;
    if (param_4 == (uint *)0x0) {
      param_3 = 0;
    }
    puVar1[0xd] = param_3;
    return 1;
  case 0x100c:
    *param_4 = puVar1[0xc];
    return puVar1[0xd];
  case 0x100d:
    FUN_00bfb4c0(puVar1[10]);
    puVar1[10] = (uint)param_4;
    return 1;
  case 0x100e:
    *param_4 = puVar1[10];
    return 1;
  case 0x100f:
    if ((int)param_3 < 1) {
      return 0xfffffffe;
    }
LAB_00c2fbef:
    if (puVar1[6] == 0) {
      puVar1[6] = param_3;
      return 1;
    }
    break;
  case 0x1010:
    puVar1[4] = param_3;
    return 1;
  }
  return 0xfffffffe;
}



undefined4 FUN_00c2fd20(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  pcVar5 = "dh_paramgen_prime_len";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00c2fd50:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_00c2fd55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00c2fd50;
    pbVar2 = pbVar2 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c2fd55:
  if (uVar3 == 0) {
    uVar4 = func_0x008aafde(param_3);
    uVar4 = func_0x00c754f0(param_1,uVar4);
    return uVar4;
  }
  pbVar6 = &DAT_01060744;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00c2fd98:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_00c2fd9d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00c2fd98;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c2fd9d:
  if (uVar3 == 0) {
    iVar7 = *(int *)(param_1 + 0x50);
    uVar3 = func_0x008aafde(param_3);
    if (uVar3 < 4) {
LAB_00c2fdba:
      *(uint *)(iVar7 + 0x18) = uVar3;
      return 1;
    }
  }
  else {
    pcVar5 = "dh_param";
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00c2fdf0:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_00c2fdf5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00c2fdf0;
      pbVar2 = pbVar2 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c2fdf5:
    if (uVar3 == 0) {
      iVar7 = *(int *)(param_1 + 0x50);
      uVar3 = func_0x00bc2b00(param_3);
      if (uVar3 != 0) goto LAB_00c2fdba;
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dh\\dh_pmeth.c",0xf5,"pkey_dh_ctrl_str");
      func_0x00bc5160(5,0x6e,0);
    }
    else {
      pcVar5 = "dh_paramgen_generator";
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00c2fe66:
          uVar3 = -(uint)bVar8 | 1;
          goto LAB_00c2fe6b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < ((byte *)pcVar5)[1];
        if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00c2fe66;
        pbVar2 = pbVar2 + 2;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c2fe6b:
      if (uVar3 == 0) {
        uVar4 = func_0x008aafde(param_3);
        uVar4 = func_0x00c75430(param_1,uVar4);
        return uVar4;
      }
      pcVar5 = "dh_paramgen_subprime_len";
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00c2feb0:
          uVar3 = -(uint)bVar8 | 1;
          goto LAB_00c2feb5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < ((byte *)pcVar5)[1];
        if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00c2feb0;
        pbVar2 = pbVar2 + 2;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c2feb5:
      if (uVar3 == 0) {
        uVar4 = func_0x008aafde(param_3);
        uVar4 = func_0x00c755b0(param_1,uVar4);
        return uVar4;
      }
      pcVar5 = "dh_paramgen_type";
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00c2ff00:
          uVar3 = -(uint)bVar8 | 1;
          goto LAB_00c2ff05;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < ((byte *)pcVar5)[1];
        if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00c2ff00;
        pbVar2 = pbVar2 + 2;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c2ff05:
      if (uVar3 == 0) {
        uVar4 = func_0x008aafde(param_3);
        uVar4 = func_0x00c75670(param_1,uVar4);
        return uVar4;
      }
      pbVar2 = &DAT_010607a0;
      do {
        bVar1 = *param_2;
        bVar8 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_00c2ff47:
          uVar3 = -(uint)bVar8 | 1;
          goto LAB_00c2ff4c;
        }
        if (bVar1 == 0) break;
        bVar1 = param_2[1];
        bVar8 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_00c2ff47;
        param_2 = param_2 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c2ff4c:
      if (uVar3 == 0) {
        uVar4 = func_0x008aafde(param_3);
        uVar4 = func_0x00c75380(param_1,uVar4);
        return uVar4;
      }
    }
  }
  return 0xfffffffe;
}



int FUN_00c2ff70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  piVar1 = *(int **)(param_2 + 0x50);
  iVar6 = 0;
  iVar4 = piVar1[6];
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x30) != 0) {
      iVar6 = func_0x00bb9ee0();
      if (iVar6 == 0) {
        return 0;
      }
      func_0x00bfd750(iVar6,param_2);
    }
    if (piVar1[2] < 1) {
      iVar4 = func_0x00c0f880();
      if (iVar4 != 0) {
        iVar5 = func_0x00c75690(iVar4,*piVar1,piVar1[1],iVar6);
        func_0x00bb9ec0(iVar6);
        if (iVar5 != 0) {
          func_0x00bd5660(param_3,0x1c);
          return iVar5;
        }
        FUN_00c0f7d0(iVar4);
        return 0;
      }
    }
    else {
      iVar4 = *piVar1;
      iVar5 = piVar1[3];
      if ((piVar1[2] < 3) && (iVar3 = func_0x00c0f880(), iVar3 != 0)) {
        if ((iVar5 == -1) && (iVar5 = 0xa0, 0x7ff < iVar4)) {
          iVar5 = 0x100;
        }
        if (piVar1[5] != 0) {
          uVar2 = FUN_00bc42b0(piVar1[5],0);
          func_0x00c4e7e0(iVar3 + 8,uVar2);
        }
        if (piVar1[2] == 1) {
          iVar4 = func_0x00c76960(0,iVar3 + 8,1,iVar4,iVar5,&stack0x00000000,iVar6);
        }
        else {
          if (piVar1[2] < 1) goto LAB_00c300ae;
          iVar4 = func_0x00c774b0(0,iVar3 + 8,1,iVar4,iVar5,&stack0x00000000,iVar6);
        }
        if (0 < iVar4) {
          func_0x00bb9ec0(iVar6);
          func_0x00bd5660(param_3,0x398,iVar3);
          return 1;
        }
LAB_00c300ae:
        FUN_00c0f7d0(iVar3);
        func_0x00bb9ec0(iVar6);
        return 0;
      }
    }
    func_0x00bb9ec0(iVar6);
  }
  else {
    iVar6 = func_0x00c19e60(iVar4);
    if (iVar6 != 0) {
      uVar2 = 0x1c;
      if (iVar4 < 4) {
        uVar2 = 0x398;
      }
      func_0x00bd5660(param_3,uVar2,iVar6);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00c30130(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(*(int *)(param_1 + 0x50) + 0x18) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_pmeth.c",0x17c,"pkey_dh_keygen");
    func_0x00bc5160(5,0x6b,0);
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x18);
  if (iVar1 == 0) {
    iVar1 = func_0x00c0f880();
  }
  else {
    iVar1 = func_0x00c19e60(iVar1);
  }
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bd5660(param_2,**(undefined4 **)(param_1 + 0x40),iVar1);
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = func_0x00bd5870(param_2,*(int *)(param_1 + 0x48)), iVar1 == 0)) {
    return 0;
  }
  uVar2 = func_0x00bd5db0(param_2);
  uVar2 = func_0x00c40fc0(uVar2);
  return uVar2;
}



int FUN_00c301d0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  func_0x00e87f70();
  iVar4 = *(int *)(param_2 + 0x50);
  if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x4c) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_pmeth.c",0x196,"pkey_dh_derive");
    func_0x00bc5160(5,0x6c,0);
    return 0;
  }
  uVar2 = func_0x00bd5db0(*(int *)(param_2 + 0x48));
  iVar3 = func_0x00bd5db0(*(undefined4 *)(param_2 + 0x4c));
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_pmeth.c",0x19c,"pkey_dh_derive");
    func_0x00bc5160(5,0x6c,0);
    return 0;
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  if (*(char *)(iVar4 + 0x24) != '\x01') {
    if (((*(char *)(iVar4 + 0x24) == '\x02') && (iVar3 = *(int *)(iVar4 + 0x38), iVar3 != 0)) &&
       (*(int *)(iVar4 + 0x28) != 0)) {
      if (param_3 == 0) goto LAB_00c30292;
      if (*param_4 == iVar3) {
        iVar7 = 0;
        iVar3 = func_0x00c0f9a0(uVar2);
        if ((0 < iVar3) && (iVar5 = FUN_00bbc4f0(iVar3,"crypto\\dh\\dh_pmeth.c",0x1be), iVar5 != 0))
        {
          iVar6 = func_0x00c40f50(iVar5,uVar1,uVar2);
          if ((0 < iVar6) &&
             (iVar6 = func_0x00c75990(param_3,*param_4,iVar5,iVar3,*(undefined4 *)(iVar4 + 0x28),
                                      *(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x34),
                                      *(undefined4 *)(iVar4 + 0x2c)), iVar6 != 0)) {
            *param_4 = *(int *)(iVar4 + 0x38);
            iVar7 = 1;
          }
          FUN_00bbc6c0(iVar5,iVar3,"crypto\\dh\\dh_pmeth.c",0x1c8);
          return iVar7;
        }
      }
    }
    return 0;
  }
  if (param_3 == 0) {
    iVar4 = func_0x00c0f9a0();
    *param_4 = iVar4;
    return 1;
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
    iVar3 = func_0x00c40eb0(param_3,uVar1,uVar2);
  }
  else {
    iVar3 = func_0x00c40f50();
  }
  if (iVar3 < 0) {
    return iVar3;
  }
LAB_00c30292:
  *param_4 = iVar3;
  return 1;
}



undefined * FUN_00c303a0(void)

{
  return &DAT_010661c0;
}



undefined * FUN_00c303b0(void)

{
  return &DAT_01066248;
}



undefined4 FUN_00c303c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc4f0(0x18,"crypto\\dsa\\dsa_pmeth.c",0x28);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[1] = 0xe0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  *(undefined4 **)(param_1 + 0x34) = puVar1 + 3;
  *(undefined4 *)(param_1 + 0x38) = 2;
  return 1;
}



undefined4 FUN_00c30410(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00bbc4f0(0x18,"crypto\\dsa\\dsa_pmeth.c",0x28);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x800;
    puVar2[1] = 0xe0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    *(undefined4 **)(param_1 + 0x50) = puVar2;
    *(undefined4 **)(param_1 + 0x34) = puVar2 + 3;
    *(undefined4 *)(param_1 + 0x38) = 2;
    puVar2 = *(undefined4 **)(param_1 + 0x50);
    puVar1 = *(undefined4 **)(param_2 + 0x50);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[5] = puVar1[5];
    return 1;
  }
  return 0;
}



void FUN_00c30480(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x50),"crypto\\dsa\\dsa_pmeth.c",0x4a);
  return;
}



int FUN_00c304a0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x50);
  uVar2 = func_0x00bd5e00(*(undefined4 *)(param_1 + 0x48));
  iVar1 = param_5;
  iVar3 = *(int *)(iVar3 + 0x14);
  if (iVar3 != 0) {
    iVar3 = func_0x00bc4320(iVar3);
    if ((iVar3 < 1) || (iVar1 != iVar3)) {
      return 0;
    }
  }
  iVar3 = func_0x00c42a60(0,param_4,iVar1,param_2,&param_1,uVar2);
  if (0 < iVar3) {
    *param_3 = param_1;
    iVar3 = 1;
  }
  return iVar3;
}



undefined4
FUN_00c30510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  uVar1 = func_0x00bd5e00(*(undefined4 *)(param_1 + 0x48));
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 != 0) {
    iVar2 = func_0x00bc4320(iVar2);
    if ((iVar2 < 1) || (param_5 != iVar2)) {
      return 0;
    }
  }
  uVar1 = func_0x00c42c50(0,param_4,param_5,param_2,param_3,uVar1);
  return uVar1;
}



undefined4 FUN_00c30570(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
    }
    else {
      switch(param_2) {
      case 1:
        iVar2 = FUN_00bbba70(param_4);
        if ((((iVar2 == 0x40) || (iVar2 = FUN_00bbba70(param_4), iVar2 == 0x74)) ||
            (((iVar2 = FUN_00bbba70(param_4), iVar2 == 0x42 ||
              (((iVar2 = FUN_00bbba70(param_4), iVar2 == 0x2a3 ||
                (iVar2 = FUN_00bbba70(param_4), iVar2 == 0x2a0)) ||
               (iVar2 = FUN_00bbba70(param_4), iVar2 == 0x2a1)))) ||
             ((iVar2 = FUN_00bbba70(param_4), iVar2 == 0x2a2 ||
              (iVar2 = FUN_00bbba70(param_4), iVar2 == 0x448)))))) ||
           ((iVar2 = FUN_00bbba70(param_4), iVar2 == 0x449 ||
            ((iVar2 = FUN_00bbba70(param_4), iVar2 == 0x44a ||
             (iVar2 = FUN_00bbba70(param_4), iVar2 == 1099)))))) {
          piVar1[5] = (int)param_4;
          return 1;
        }
        FUN_00bc4f50();
        uVar3 = 0xac;
code_r0x00c30728:
        func_0x00bc5050("crypto\\dsa\\dsa_pmeth.c",uVar3,"pkey_dsa_ctrl");
        func_0x00bc5160(10,0x6a,0);
        return 0;
      case 2:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dsa\\dsa_pmeth.c",0xbc,"pkey_dsa_ctrl");
        func_0x00bc5160(10,0x96,0);
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      case 0xd:
        *param_4 = piVar1[5];
        return 1;
      }
    }
  }
  else if (param_2 == 0x1002) {
    if ((((param_3 == 0xa0) || (param_3 == 0xe0)) || (param_3 == 0)) || (param_3 == 0x100)) {
      piVar1[1] = param_3;
      return 1;
    }
  }
  else if (param_2 == 0x1003) {
    iVar2 = FUN_00bbba70(param_4);
    if (((iVar2 == 0x40) || (iVar2 = FUN_00bbba70(param_4), iVar2 == 0x2a3)) ||
       (iVar2 = FUN_00bbba70(param_4), iVar2 == 0x2a0)) {
      piVar1[2] = (int)param_4;
      return 1;
    }
    FUN_00bc4f50();
    uVar3 = 0x9a;
    goto code_r0x00c30728;
  }
  return 0xfffffffe;
}



undefined4 FUN_00c307a0(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar6 = "dsa_paramgen_bits";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00c307d0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_00c307d5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < ((byte *)pcVar6)[1];
    if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c307d0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = (char *)((byte *)pcVar6 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c307d5:
  if (uVar3 == 0) {
    uVar4 = func_0x008aafde(param_3);
    uVar4 = func_0x00c774e0(param_1,uVar4);
    return uVar4;
  }
  pcVar6 = "dsa_paramgen_q_bits";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00c30818:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_00c3081d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < ((byte *)pcVar6)[1];
    if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c30818;
    pbVar2 = pbVar2 + 2;
    pcVar6 = (char *)((byte *)pcVar6 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c3081d:
  if (uVar3 == 0) {
    uVar4 = func_0x008aafde(param_3);
    uVar4 = func_0x00c775c0(param_1,uVar4);
    return uVar4;
  }
  pcVar6 = "dsa_paramgen_md";
  do {
    bVar1 = *param_2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00c30860:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_00c30865;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar7 = bVar1 < ((byte *)pcVar6)[1];
    if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c30860;
    param_2 = param_2 + 2;
    pcVar6 = (char *)((byte *)pcVar6 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c30865:
  if (uVar3 != 0) {
    return 0xfffffffe;
  }
  iVar5 = func_0x00bf0e00(param_3);
  if (iVar5 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_pmeth.c",0xd4,"pkey_dsa_ctrl_str");
    func_0x00bc5160(10,0x6a,0);
    return 0;
  }
  uVar4 = func_0x00c775a0(param_1,iVar5);
  return uVar4;
}



int FUN_00c308c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = param_1;
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_0x00bb9ee0();
    if (iVar2 == 0) {
      return 0;
    }
    func_0x00bfd750(iVar2,iVar3);
  }
  iVar3 = func_0x00c0fcc0();
  if (iVar3 == 0) {
    func_0x00bb9ec0(iVar2);
    return 0;
  }
  if (puVar1[5] != 0) {
    uVar4 = FUN_00bc42b0(puVar1[5],0);
    func_0x00c4e7e0(iVar3 + 8,uVar4);
  }
  iVar5 = func_0x00c774b0(0,iVar3 + 8,0,*puVar1,puVar1[1],&param_1,iVar2);
  func_0x00bb9ec0(iVar2);
  if (iVar5 < 1) {
    FUN_00c0fc00(iVar3);
    return iVar5;
  }
  func_0x00bd5660(param_2,0x74);
  return iVar5;
}



undefined4 FUN_00c30970(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_pmeth.c",0x102,"pkey_dsa_keygen");
    func_0x00bc5160(10,0x6b,0);
    return 0;
  }
  iVar1 = func_0x00c0fcc0();
  if (iVar1 != 0) {
    func_0x00bd5660(param_2,0x74,iVar1);
    iVar1 = func_0x00bd5870(param_2,*(undefined4 *)(param_1 + 0x48));
    if (iVar1 != 0) {
      uVar2 = func_0x00bd5e00(param_2);
      uVar2 = func_0x00c77680(uVar2);
      return uVar2;
    }
  }
  return 0;
}



undefined * FUN_00c309f0(void)

{
  return &DAT_01066318;
}



undefined4 FUN_00c30a00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bbc830(0x20,"crypto\\ec\\ec_pmeth.c",0x33);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(iVar1 + 0xc) = 0x1ff;
  *(int *)(param_1 + 0x50) = iVar1;
  return 1;
}



undefined4 FUN_00c30a30(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = FUN_00bbc830(0x20,"crypto\\ec\\ec_pmeth.c",0x33);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined2 *)(iVar3 + 0xc) = 0x1ff;
  *(int *)(param_1 + 0x50) = iVar3;
  piVar1 = *(int **)(param_1 + 0x50);
  piVar2 = *(int **)(param_2 + 0x50);
  if (*piVar2 != 0) {
    iVar3 = func_0x00c10520(*piVar2);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar1[1] = piVar2[1];
  if (piVar2[2] != 0) {
    iVar3 = func_0x00c12630(piVar2[2]);
    piVar1[2] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  *(undefined1 *)((int)piVar1 + 0xd) = *(undefined1 *)((int)piVar2 + 0xd);
  piVar1[4] = piVar2[4];
  piVar1[7] = piVar2[7];
  if (piVar2[5] == 0) {
    piVar1[5] = 0;
  }
  else {
    iVar3 = func_0x00bbbc30(piVar2[5],piVar2[6],"crypto\\ec\\ec_pmeth.c",0x53);
    piVar1[5] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar1[6] = piVar2[6];
  return 1;
}



void FUN_00c30ae0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    func_0x00c10570(*puVar1);
    FUN_00c12650(puVar1[2]);
    FUN_00bbc580(puVar1[5],"crypto\\ec\\ec_pmeth.c",0x62);
    FUN_00bbc580(puVar1,"crypto\\ec\\ec_pmeth.c",99);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



int FUN_00c30b30(uint param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x50);
  uVar2 = func_0x00c0d910(*(undefined4 *)(param_1 + 0x48));
  uVar3 = func_0x00c1fbd0(uVar2);
  puVar1 = param_3;
  if ((int)uVar3 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    *param_3 = uVar3;
    return 1;
  }
  if (*param_3 < uVar3) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x80,"pkey_ec_sign");
    func_0x00bc5160(0x10,100,0);
    return 0;
  }
  iVar5 = *(int *)(iVar5 + 4);
  if (iVar5 == 0) {
    uVar4 = 0x40;
  }
  else {
    uVar4 = FUN_00bbba70(iVar5);
  }
  iVar5 = func_0x00c55f00(uVar4,param_4,param_5,param_2,&param_1,uVar2);
  if (0 < iVar5) {
    *puVar1 = param_1;
    iVar5 = 1;
  }
  return iVar5;
}



void FUN_00c30bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x50);
  uVar2 = func_0x00c0d910(*(undefined4 *)(param_1 + 0x48));
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = FUN_00bbba70(iVar1);
  }
  func_0x00c55fe0(uVar3,param_4,param_5,param_2,param_3,uVar2);
  return;
}



undefined4 FUN_00c30c40(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = param_1;
  uVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x50);
  if (*(char *)(iVar4 + 0xd) == '\x01') {
    uVar5 = func_0x00c314f0(param_1,param_2,param_3);
    return uVar5;
  }
  if (param_2 == 0) {
    *param_3 = *(int *)(iVar4 + 0x1c);
    return 1;
  }
  if (*param_3 == *(int *)(iVar4 + 0x1c)) {
    iVar2 = func_0x00c314f0(param_1,0,&param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_00bbc4f0(param_1,"crypto\\ec\\ec_pmeth.c",0xe6);
      if (iVar2 != 0) {
        iVar3 = func_0x00c314f0(iVar1,iVar2,&param_1);
        if (iVar3 != 0) {
          iVar4 = func_0x00c77980(param_2,*param_3,iVar2,param_1,*(undefined4 *)(iVar4 + 0x14),
                                  *(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x10),
                                  *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
          if (iVar4 != 0) {
            uVar5 = 1;
          }
        }
        FUN_00bbc6c0(iVar2,param_1,"crypto\\ec\\ec_pmeth.c",0xf2);
        return uVar5;
      }
    }
  }
  return 0;
}



uint FUN_00c30d30(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      iVar2 = func_0x00c4f4a0(param_3);
      if (iVar2 != 0) {
        func_0x00c10570(*piVar1);
        *piVar1 = iVar2;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0xff,"pkey_ec_ctrl");
      func_0x00bc5160(0x10,0x8d,0);
      return 0;
    }
    switch(param_2) {
    case 1:
      iVar2 = FUN_00bbba70(param_4);
      if ((((((iVar2 != 0x40) && (iVar2 = FUN_00bbba70(param_4), iVar2 != 0x1a0)) &&
            (iVar2 = FUN_00bbba70(param_4), iVar2 != 0x2a3)) &&
           ((iVar2 = FUN_00bbba70(param_4), iVar2 != 0x2a0 &&
            (iVar2 = FUN_00bbba70(param_4), iVar2 != 0x2a1)))) &&
          ((iVar2 = FUN_00bbba70(param_4), iVar2 != 0x2a2 &&
           ((iVar2 = FUN_00bbba70(param_4), iVar2 != 0x448 &&
            (iVar2 = FUN_00bbba70(param_4), iVar2 != 0x449)))))) &&
         ((iVar2 = FUN_00bbba70(param_4), iVar2 != 0x44a &&
          ((iVar2 = FUN_00bbba70(param_4), iVar2 != 1099 &&
           (iVar2 = FUN_00bbba70(param_4), iVar2 != 0x477)))))) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x16d,"pkey_ec_ctrl");
        func_0x00bc5160(0x10,0x8a,0);
        return 0;
      }
      piVar1[1] = (int)param_4;
      return 1;
    case 2:
    case 5:
    case 7:
    case 0xb:
      return 1;
    case 0xd:
      *param_4 = piVar1[1];
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (*piVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x108,"pkey_ec_ctrl");
        func_0x00bc5160(0x10,0x8b,0);
        return 0;
      }
      func_0x00bab690(*piVar1,param_3);
      return 1;
    case 0x1003:
      if (param_3 == -2) {
        if ((char)piVar1[3] != -1) {
          return (int)(char)piVar1[3];
        }
        uVar3 = func_0x00c0d910(*(undefined4 *)(param_1 + 0x48));
        uVar4 = func_0x00bb62f0(uVar3);
        return uVar4 >> 0xc & 1;
      }
      if (param_3 + 1U < 3) {
        *(char *)(piVar1 + 3) = (char)param_3;
        if (param_3 == -1) {
          FUN_00c12650(piVar1[2]);
          piVar1[2] = 0;
          return 1;
        }
        iVar2 = func_0x00c0d910(*(undefined4 *)(param_1 + 0x48));
        if (*(int *)(*(int *)(param_1 + 0x48) + 0x38) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x122,"pkey_ec_ctrl");
          func_0x00bc5160(0x10,0x8010c,0);
          return 0;
        }
        if (*(int *)(iVar2 + 0xc) == 0) {
          return 0xfffffffe;
        }
        iVar5 = func_0x00bba4f0(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc));
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = piVar1[2];
        if (iVar5 == 0) {
          iVar5 = func_0x00c12630(iVar2);
          piVar1[2] = iVar5;
          if (iVar5 == 0) {
            return 0;
          }
        }
        if (param_3 != 0) {
          func_0x00c12a50();
          return 1;
        }
        func_0x00c125f0(iVar5,0x1000);
        return 1;
      }
      break;
    case 0x1004:
      if (param_3 == -2) {
        return (int)*(char *)((int)piVar1 + 0xd);
      }
      if ((param_3 == 1) || (param_3 == 2)) {
        *(char *)((int)piVar1 + 0xd) = (char)param_3;
        return 1;
      }
      break;
    case 0x1005:
      piVar1[4] = (int)param_4;
      return 1;
    case 0x1006:
      *param_4 = piVar1[4];
      return 1;
    case 0x1007:
      if (0 < param_3) {
        piVar1[7] = param_3;
        return 1;
      }
      break;
    case 0x1008:
      *param_4 = piVar1[7];
      return 1;
    case 0x1009:
      FUN_00bbc580(piVar1[5],"crypto\\ec\\ec_pmeth.c",0x155);
      piVar1[5] = (int)param_4;
      if (param_4 == (int *)0x0) {
        param_3 = 0;
      }
      piVar1[6] = param_3;
      return 1;
    case 0x100a:
      *param_4 = piVar1[5];
      return piVar1[6];
    }
  }
  return 0xfffffffe;
}



undefined4 FUN_00c31160(undefined4 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  pcVar6 = "ec_paramgen_curve";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00c31190:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_00c31195;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < ((byte *)pcVar6)[1];
    if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c31190;
    pbVar2 = pbVar2 + 2;
    pcVar6 = (char *)((byte *)pcVar6 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c31195:
  if (uVar3 == 0) {
    iVar4 = func_0x00c4f5d0(param_3);
    if (iVar4 == 0) {
      iVar4 = func_0x00bc2b00(param_3);
      if (iVar4 == 0) {
        iVar4 = func_0x00bc2530(param_3);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ec_pmeth.c",399,"pkey_ec_ctrl_str");
          func_0x00bc5160(0x10,0x8d,0);
          return 0;
        }
      }
    }
    uVar5 = func_0x00c77820(param_1,iVar4);
    return uVar5;
  }
  pcVar6 = "ec_param_enc";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00c31230:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_00c31235;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < ((byte *)pcVar6)[1];
    if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c31230;
    pbVar2 = pbVar2 + 2;
    pcVar6 = (char *)((byte *)pcVar6 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c31235:
  if (uVar3 == 0) {
    pcVar6 = "explicit";
    pbVar2 = param_3;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00c31268:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_00c3126d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < ((byte *)pcVar6)[1];
      if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c31268;
      pbVar2 = pbVar2 + 2;
      pcVar6 = (char *)((byte *)pcVar6 + 2);
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c3126d:
    if (uVar3 == 0) {
      uVar5 = func_0x00c77800(param_1,0);
      return uVar5;
    }
    pcVar6 = "named_curve";
    do {
      bVar1 = *param_3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00c312a5:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_00c312aa;
      }
      if (bVar1 == 0) break;
      bVar1 = param_3[1];
      bVar8 = bVar1 < ((byte *)pcVar6)[1];
      if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c312a5;
      param_3 = param_3 + 2;
      pcVar6 = (char *)((byte *)pcVar6 + 2);
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c312aa:
    if (uVar3 == 0) {
      uVar5 = func_0x00c77800(param_1,1);
      return uVar5;
    }
  }
  else {
    pbVar7 = &DAT_01060830;
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00c312f0:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_00c312f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00c312f0;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c312f5:
    if (uVar3 == 0) {
      iVar4 = func_0x00bf0e00(param_3);
      if (iVar4 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x19f,"pkey_ec_ctrl_str");
        func_0x00bc5160(0x10,0x97,0);
        return 0;
      }
      uVar5 = func_0x00c77950(param_1,iVar4);
      return uVar5;
    }
    pcVar6 = "ecdh_cofactor_mode";
    do {
      bVar1 = *param_2;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00c31370:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_00c31375;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[1];
      bVar8 = bVar1 < ((byte *)pcVar6)[1];
      if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c31370;
      param_2 = param_2 + 2;
      pcVar6 = (char *)((byte *)pcVar6 + 2);
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c31375:
    if (uVar3 == 0) {
      uVar5 = func_0x008aafde(param_3);
      uVar5 = func_0x00c77850(param_1,uVar5);
      return uVar5;
    }
  }
  return 0xfffffffe;
}



int FUN_00c313a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (*piVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x1b3,"pkey_ec_paramgen");
    func_0x00bc5160(0x10,0x8b,0);
    return 0;
  }
  iVar2 = func_0x00c127b0();
  if (iVar2 != 0) {
    iVar3 = func_0x00c12a60(iVar2,*piVar1);
    if ((iVar3 != 0) && (iVar3 = func_0x00bd5660(param_2,0x198,iVar2), iVar3 != 0)) {
      return iVar3;
    }
    FUN_00c12650(iVar2);
    return iVar3;
  }
  return 0;
}



undefined4 FUN_00c31430(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if ((*(int *)(param_1 + 0x48) == 0) && (*piVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_pmeth.c",0x1c6,"pkey_ec_keygen");
    func_0x00bc5160(0x10,0x8b,0);
    return 0;
  }
  iVar2 = func_0x00c127b0();
  if (iVar2 != 0) {
    iVar3 = func_0x00bd5660(param_2,0x198,iVar2);
    if (iVar3 == 0) {
      FUN_00c12650(iVar2);
    }
    else {
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar3 = func_0x00c12a60(iVar2,*piVar1);
      }
      else {
        iVar3 = func_0x00bd5870(param_2,*(int *)(param_1 + 0x48));
      }
      if (iVar3 != 0) {
        uVar4 = func_0x00c126f0(iVar2);
        return uVar4;
      }
    }
  }
  return 0;
}



undefined * FUN_00c314e0(void)

{
  return &DAT_010663e8;
}



undefined4 FUN_00c315f0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x25,"ecx_pub_encode");
    func_0x00bc5160(0x10,0x74,0);
    return 0;
  }
  iVar2 = **(int **)(param_2 + 8);
  if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
    cVar1 = ' ';
  }
  else {
    cVar1 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = func_0x00bbbc30(*(int *)(param_2 + 0x14) + 0xc,cVar1,"crypto\\ec\\ecx_meth.c",0x29);
  if (iVar2 != 0) {
    iVar4 = **(int **)(param_2 + 8);
    if ((iVar4 == 0x40a) || (iVar4 == 0x43f)) {
      cVar1 = ' ';
    }
    else {
      cVar1 = (iVar4 != 0x40b) + '8';
    }
    uVar3 = func_0x00bc2660(iVar4,0xffffffff,0,iVar2,cVar1);
    iVar4 = func_0x00bdd4c0(param_1,uVar3);
    if (iVar4 != 0) {
      return 1;
    }
    FUN_00bbc580(iVar2,"crypto\\ec\\ecx_meth.c",0x2f);
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x30,"ecx_pub_encode");
    func_0x00bc5160(0x10,0x8000b,0);
  }
  return 0;
}



bool FUN_00c31700(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar2 = func_0x00bdd290(0,&param_1,&stack0x00000000,&param_2,param_5);
  iVar1 = param_4;
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = func_0x00c78090(param_2,param_1,unaff_retaddr,**(undefined4 **)(param_4 + 8),0,0,0);
  if (iVar2 != 0) {
    func_0x00bd5660(iVar1,**(undefined4 **)(iVar1 + 8),iVar2);
  }
  return iVar2 != 0;
}



uint FUN_00c31780(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar2 = **(int **)(param_1 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      cVar1 = ' ';
    }
    else {
      cVar1 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = func_0x00401390(*(int *)(param_1 + 0x14) + 0xc,*(int *)(param_2 + 0x14) + 0xc,cVar1);
    return (uint)(iVar2 == 0);
  }
  return 0xfffffffe;
}



undefined4 FUN_00c317e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c77ed0(param_2,param_3,param_4);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00c31820(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000018;
  in_stack_00000018 = 0;
  iVar1 = *(int *)(iVar3 + 0x14);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x48) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x6a,"ecx_priv_encode");
    func_0x00bc5160(0x10,0x7b,0);
    return 0;
  }
  iVar1 = func_0x00bfcb00(&stack0x00000000,&stack0x00000018);
  if (iVar1 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x74,"ecx_priv_encode");
    func_0x00bc5160(0x10,0x8000d,0);
    return 0;
  }
  uVar2 = func_0x00bc2660(**(undefined4 **)(iVar3 + 8),0,0xffffffff,0,in_stack_00000018,iVar1);
  iVar3 = func_0x00c21fd0(in_stack_00000014,uVar2);
  if (iVar3 != 0) {
    return 1;
  }
  FUN_00bbc6c0(in_stack_00000018,iVar1,"crypto\\ec\\ecx_meth.c",0x7a);
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x7b,"ecx_priv_encode");
  func_0x00bc5160(0x10,0x8000d,0);
  return 0;
}



char FUN_00c31980(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
    return (iVar1 != 0x40b) + '8';
  }
  return ' ';
}



int FUN_00c319b0(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
    return (uint)(iVar1 != 0x40b) * 8 + 0x1c0;
  }
  return 0xfd;
}



undefined4 FUN_00c319f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80;
  if ((**(int **)(param_1 + 8) != 0x40a) && (**(int **)(param_1 + 8) != 0x43f)) {
    uVar1 = 0xe0;
  }
  return uVar1;
}



void FUN_00c31a20(int param_1)

{
  FUN_00c15480(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c31a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c326f0(param_1,param_2,param_3,param_4,1);
  return;
}



void FUN_00c31a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c326f0(param_1,param_2,param_3,param_4,0);
  return;
}



int FUN_00c31a70(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 9) {
    iVar2 = func_0x00c78090(0,param_4,param_3,**(undefined4 **)(param_1 + 8),0,0,0);
    if (iVar2 != 0) {
      func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar2);
      return 1;
    }
  }
  else {
    if (param_2 != 10) {
      return -2;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = **(int **)(param_1 + 8);
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        cVar1 = ' ';
      }
      else {
        cVar1 = (iVar2 != 0x40b) + '8';
      }
      iVar2 = func_0x00bbbc30(*(int *)(param_1 + 0x14) + 0xc,cVar1,"crypto\\ec\\ecx_meth.c",0xe9);
      *param_4 = iVar2;
      if (iVar2 != 0) {
        iVar2 = **(int **)(param_1 + 8);
        if ((iVar2 != 0x40a) && (iVar2 != 0x43f)) {
          return (iVar2 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
  }
  return 0;
}



undefined4 FUN_00c31b50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_2 != 3) {
    return 0xfffffffe;
  }
  *param_4 = 0;
  return 2;
}



undefined4 FUN_00c31b70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = FUN_00baaa40(*(int *)(param_1 + 0x38));
    uVar2 = func_0x00bc7fa0(uVar2);
  }
  iVar1 = func_0x00c78090(0,param_2,param_3,**(undefined4 **)(param_1 + 8),1,uVar2,0);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00c31bd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = FUN_00baaa40(*(int *)(param_1 + 0x38));
    uVar2 = func_0x00bc7fa0(uVar2);
  }
  iVar1 = func_0x00c78090(0,param_2,param_3,**(undefined4 **)(param_1 + 8),0,uVar2,0);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00c31c30(int param_1,void *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) != 0)) {
    iVar2 = **(int **)(param_1 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (iVar2 != 0x40b) + 0x38;
    }
    if (uVar3 <= *param_3) {
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (iVar2 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,*(void **)(iVar1 + 0x48),_Size);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00c31d00(int param_1,void *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if (iVar1 != 0) {
    iVar2 = **(int **)(param_1 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (iVar2 != 0x40b) + 0x38;
    }
    if (uVar3 <= *param_3) {
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (iVar2 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,(void *)(iVar1 + 0xc),_Size);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00c31dc0(int param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = func_0x00c4eb60();
  uVar4 = 0;
  param_1 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = func_0x00c4ecb0(iVar1,&DAT_01057a18,iVar3 + 0xc,*(undefined4 *)(iVar3 + 0x4c));
  if (iVar2 != 0) {
    uVar5 = 2;
    if (*(int *)(iVar3 + 0x48) != 0) {
      iVar3 = func_0x00c4ecb0(iVar1,&DAT_01057a10,*(int *)(iVar3 + 0x48),
                              *(undefined4 *)(iVar3 + 0x4c));
      if (iVar3 == 0) goto LAB_00c31e3a;
      uVar5 = 3;
    }
    uVar4 = func_0x00c4ed60(iVar1);
    param_1 = (*param_3)(param_2,uVar5,uVar4);
  }
LAB_00c31e3a:
  func_0x00c4eb30(iVar1);
  func_0x00c44dd0(uVar4);
  return param_1;
}



int FUN_00c31e60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2[5] != 0) {
    iVar2 = func_0x00c77dd0(param_2[5],0x87);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bd5660(param_1,*param_2,iVar2);
  if (iVar1 == 0) {
    FUN_00c15480(iVar2);
  }
  return iVar1;
}



void FUN_00c31eb0(undefined4 param_1,undefined4 param_2)

{
  func_0x00c32620(param_1,param_2,0x40a);
  return;
}



undefined4 FUN_00c31ed0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb62e0(param_2);
  iVar2 = func_0x00c154d0(*(undefined4 *)(param_2 + 4),1,0,*(undefined4 *)(param_2 + 8));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x189,"ecx_generic_import_from");
    func_0x00bc5160(5,0x80010,0);
    return 0;
  }
  iVar3 = func_0x00c77f70(iVar2,param_1,1);
  if (iVar3 != 0) {
    iVar3 = func_0x00bd5660(uVar1,0x40b,iVar2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  FUN_00c15480(iVar2);
  return 0;
}



undefined4 FUN_00c31f60(void)

{
  return 0x40;
}



undefined4 FUN_00c31f70(void)

{
  return 0x72;
}



byte FUN_00c31f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  func_0x00bdbc30(&stack0x00000000,&param_1,0,param_6);
  iVar1 = func_0x00bc27b0(unaff_retaddr);
  if (((iVar1 == 0x43f) || (iVar1 == 0x440)) && (param_1 == -1)) {
    iVar1 = func_0x00c0cad0(param_3,0,0,0,param_8);
    return -(iVar1 != 0) & 2;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x228,"ecd_item_verify");
  func_0x00bc5160(0x10,0x66,0);
  return 0;
}



undefined4 FUN_00c32010(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  uVar1 = func_0x00bc2660(0x43f,0xffffffff,0);
  func_0x00bdbc80(in_stack_00000010,uVar1);
  if (in_stack_00000014 != 0) {
    uVar1 = func_0x00bc2660(0x43f,0xffffffff,0);
    func_0x00bdbc80(in_stack_00000014,uVar1);
  }
  return 3;
}



undefined4 FUN_00c32060(undefined4 param_1)

{
  func_0x00bde470(param_1,0,0x43f,0x80,2);
  return 1;
}



undefined4 FUN_00c32080(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  uVar1 = func_0x00bc2660(0x440,0xffffffff,0);
  func_0x00bdbc80(in_stack_00000010,uVar1);
  if (in_stack_00000014 != 0) {
    uVar1 = func_0x00bc2660(0x440,0xffffffff,0);
    func_0x00bdbc80(in_stack_00000014,uVar1);
  }
  return 3;
}



undefined4 FUN_00c320d0(undefined4 param_1)

{
  func_0x00bde470(param_1,0,0x440,0xe0,2);
  return 1;
}



undefined4 FUN_00c320f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb62e0(param_2);
  iVar2 = func_0x00c154d0(*(undefined4 *)(param_2 + 4),2,0,*(undefined4 *)(param_2 + 8));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x189,"ecx_generic_import_from");
    func_0x00bc5160(5,0x80010,0);
    return 0;
  }
  iVar3 = func_0x00c77f70(iVar2,param_1,1);
  if (iVar3 != 0) {
    iVar3 = func_0x00bd5660(uVar1,0x43f,iVar2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  FUN_00c15480(iVar2);
  return 0;
}



undefined4 FUN_00c32180(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb62e0(param_2);
  iVar2 = func_0x00c154d0(*(undefined4 *)(param_2 + 4),3,0,*(undefined4 *)(param_2 + 8));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x189,"ecx_generic_import_from");
    func_0x00bc5160(5,0x80010,0);
    return 0;
  }
  iVar3 = func_0x00c77f70(iVar2,param_1,1);
  if (iVar3 != 0) {
    iVar3 = func_0x00bd5660(uVar1,0x440,iVar2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  FUN_00c15480(iVar2);
  return 0;
}



undefined4 FUN_00c32210(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00c78090(0,0,0,**(undefined4 **)(param_1 + 0x40),2,0,0);
  if (iVar1 != 0) {
    func_0x00bd5660(param_2,**(undefined4 **)(param_1 + 0x40),iVar1);
    return 1;
  }
  return 0;
}



undefined4
FUN_00c32250(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  puVar1 = param_5;
  iVar3 = param_4;
  iVar2 = func_0x00c328a0(param_3,param_4,param_5,&param_1,&stack0x00000000);
  if (iVar2 == 0) {
    return 0;
  }
  if ((iVar3 != 0) && (iVar3 = func_0x00c5ccb0(iVar3,param_1,unaff_retaddr), iVar3 == 0)) {
    return 0;
  }
  *puVar1 = 0x20;
  return 1;
}



undefined4
FUN_00c322c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  puVar1 = param_5;
  iVar3 = param_4;
  iVar2 = func_0x00c328a0(param_3,param_4,param_5,&param_1,&stack0x00000000);
  if (iVar2 == 0) {
    return 0;
  }
  if ((iVar3 != 0) && (iVar3 = func_0x00c64df0(iVar3,param_1,unaff_retaddr), iVar3 == 0)) {
    return 0;
  }
  *puVar1 = 0x38;
  return 1;
}



undefined4 FUN_00c32330(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (param_2 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4
FUN_00c32350(undefined4 param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00baaa40(param_1);
  iVar1 = func_0x00bd7f10(*(undefined4 *)(iVar1 + 0x48));
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x32b,"pkey_ecd_digestsign25519");
    func_0x00bc5160(0x10,0x74,0);
    return 0;
  }
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x334,"pkey_ecd_digestsign25519");
      func_0x00bc5160(0x10,100,0);
    }
    else {
      iVar1 = func_0x00c5c6e0(param_2,param_4,param_5,iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x48),0,0,
                              0,0,0,0,0);
      if (iVar1 != 0) goto LAB_00c323fa;
    }
    return 0;
  }
LAB_00c323fa:
  *param_3 = 0x40;
  return 1;
}



undefined4
FUN_00c32410(undefined4 param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00baaa40(param_1);
  puVar2 = (undefined4 *)func_0x00bd7f10(*(undefined4 *)(iVar1 + 0x48));
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x348,"pkey_ecd_digestsign448");
    func_0x00bc5160(0x10,0x74,0);
    return 0;
  }
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x351,"pkey_ecd_digestsign448");
      func_0x00bc5160(0x10,100,0);
    }
    else {
      iVar1 = func_0x00c78c50(*puVar2,param_2,param_4,param_5,puVar2 + 3,puVar2[0x12],0,0,0,
                              puVar2[1]);
      if (iVar1 != 0) goto LAB_00c324b9;
    }
    return 0;
  }
LAB_00c324b9:
  *param_3 = 0x72;
  return 1;
}



undefined4
FUN_00c324d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00baaa40(param_1);
  puVar2 = (undefined4 *)func_0x00bd7f10(*(undefined4 *)(iVar1 + 0x48));
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x363,"pkey_ecd_digestverify25519");
    func_0x00bc5160(0x10,0x74,0);
  }
  else if (param_3 == 0x40) {
    uVar3 = func_0x00c5c9b0(param_4,param_5,param_2,puVar2 + 3,0,0,0,0,0,*puVar2,puVar2[1]);
    return uVar3;
  }
  return 0;
}



undefined4
FUN_00c32550(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00baaa40(param_1);
  puVar2 = (undefined4 *)func_0x00bd7f10(*(undefined4 *)(iVar1 + 0x48));
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x377,"pkey_ecd_digestverify448");
    func_0x00bc5160(0x10,0x74,0);
  }
  else if (param_3 == 0x72) {
    uVar3 = func_0x00c78c90(*puVar2,param_4,param_5,param_2,puVar2 + 3,0,0,0,puVar2[1]);
    return uVar3;
  }
  return 0;
}



undefined4 FUN_00c325c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 1) {
    if (param_4 != 0) {
      iVar1 = func_0x00c77dc0();
      if (param_4 != iVar1) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ecx_meth.c",0x389,"pkey_ecd_ctrl");
        func_0x00bc5160(0x10,0x8a,0);
        return 0;
      }
    }
  }
  else if (param_2 != 7) {
    return 0xfffffffe;
  }
  return 1;
}



undefined * FUN_00c32860(void)

{
  return &DAT_01066790;
}



undefined * FUN_00c32870(void)

{
  return &DAT_01066818;
}



undefined * FUN_00c32880(void)

{
  return &DAT_010668a0;
}



undefined * FUN_00c32890(void)

{
  return &DAT_01066928;
}



undefined4 FUN_00c32980(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0x38,"crypto\\rsa\\rsa_pmeth.c",0x40);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = 6;
  *puVar1 = 0x800;
  puVar1[2] = 2;
  if (**(int **)(param_1 + 0x40) != 0x390) {
    uVar2 = 1;
  }
  puVar1[5] = uVar2;
  puVar1[0xd] = 1;
  puVar1[8] = 0xfffffffe;
  puVar1[9] = 0xffffffff;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  *(undefined4 **)(param_1 + 0x34) = puVar1 + 3;
  *(undefined4 *)(param_1 + 0x38) = 2;
  return 1;
}



undefined4 FUN_00c329f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_00bbc830(0x38,"crypto\\rsa\\rsa_pmeth.c",0x40);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0x800;
  uVar4 = 6;
  puVar2[2] = 2;
  if (**(int **)(param_1 + 0x40) != 0x390) {
    uVar4 = 1;
  }
  puVar2[5] = uVar4;
  puVar2[8] = 0xfffffffe;
  puVar2[9] = 0xffffffff;
  puVar2[0xd] = 1;
  *(undefined4 **)(param_1 + 0x50) = puVar2;
  *(undefined4 **)(param_1 + 0x34) = puVar2 + 3;
  *(undefined4 *)(param_1 + 0x38) = 2;
  puVar2 = *(undefined4 **)(param_1 + 0x50);
  puVar1 = *(undefined4 **)(param_2 + 0x50);
  *puVar2 = *puVar1;
  if (puVar1[1] != 0) {
    iVar3 = func_0x00bba340(puVar1[1]);
    puVar2[1] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  puVar2[5] = puVar1[5];
  puVar2[6] = puVar1[6];
  puVar2[7] = puVar1[7];
  puVar2[8] = puVar1[8];
  puVar2[0xd] = puVar1[0xd];
  if (puVar1[0xb] != 0) {
    FUN_00bbc580(puVar2[0xb],"crypto\\rsa\\rsa_pmeth.c",0x69);
    iVar3 = func_0x00bbbc30(puVar1[0xb],puVar1[0xc],"crypto\\rsa\\rsa_pmeth.c",0x6a);
    puVar2[0xb] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    puVar2[0xc] = puVar1[0xc];
  }
  return 1;
}



void FUN_00c32ae0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    FUN_00bba400(*(undefined4 *)(iVar1 + 4));
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x28),"crypto\\rsa\\rsa_pmeth.c",0x81);
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x2c),"crypto\\rsa\\rsa_pmeth.c",0x82);
    FUN_00bbc580(iVar1,"crypto\\rsa\\rsa_pmeth.c",0x83);
  }
  return;
}



int FUN_00c32b30(int param_1,undefined4 param_2,int *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  size_t sVar10;
  void *pvVar11;
  undefined4 uVar12;
  
  iVar8 = param_1;
  iVar6 = *(int *)(param_1 + 0x50);
  uVar3 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48));
  if (*(int *)(iVar6 + 0x18) == 0) {
    uVar9 = *(undefined4 *)(iVar6 + 0x14);
    sVar10 = param_5;
    pvVar11 = param_4;
    uVar12 = param_2;
LAB_00c32d49:
    param_1 = func_0x00bb7530(sVar10,pvVar11,uVar12,uVar3,uVar9);
  }
  else {
    sVar4 = func_0x00bc4320(*(int *)(iVar6 + 0x18));
    sVar10 = param_5;
    if ((int)sVar4 < 1) {
      FUN_00bc4f50();
      uVar3 = 0x98;
LAB_00c32b6f:
      func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",uVar3,"pkey_rsa_sign");
      func_0x00bc5160(4,0x8f,0);
      return -1;
    }
    if (param_5 != sVar4) {
      FUN_00bc4f50();
      uVar3 = 0x9d;
      goto LAB_00c32b6f;
    }
    iVar5 = FUN_00bbba70(*(undefined4 *)(iVar6 + 0x18));
    iVar1 = *(int *)(iVar6 + 0x14);
    if (iVar5 == 0x5f) {
      if (iVar1 != 1) {
        return -1;
      }
      iVar6 = func_0x00c79690(0,param_4,sVar10,param_2,&param_1,uVar3);
    }
    else {
      if (iVar1 == 5) {
        uVar7 = func_0x00bb77a0(uVar3);
        if (uVar7 < sVar10 + 1) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0xac,"pkey_rsa_sign");
          func_0x00bc5160(4,0x78,0);
          return -1;
        }
        iVar8 = func_0x00c344c0(iVar6,iVar8);
        if (iVar8 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0xb0,"pkey_rsa_sign");
          func_0x00bc5160(4,0x80004,0);
          return -1;
        }
        memcpy(*(void **)(iVar6 + 0x28),param_4,sVar10);
        iVar8 = *(int *)(iVar6 + 0x28);
        uVar9 = FUN_00bbba70(*(undefined4 *)(iVar6 + 0x18));
        uVar2 = func_0x00c2eaa0(uVar9);
        *(undefined1 *)(iVar8 + sVar10) = uVar2;
        param_1 = func_0x00bb7530(sVar10 + 1,*(undefined4 *)(iVar6 + 0x28),param_2,uVar3,5);
        goto LAB_00c32d53;
      }
      if (iVar1 != 1) {
        if (iVar1 != 6) {
          return -1;
        }
        iVar8 = func_0x00c344c0(iVar6,iVar8);
        if (iVar8 == 0) {
          return -1;
        }
        iVar8 = func_0x00c66870(uVar3,*(undefined4 *)(iVar6 + 0x28),param_4,
                                *(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x1c),
                                *(undefined4 *)(iVar6 + 0x20));
        if (iVar8 == 0) {
          return -1;
        }
        uVar9 = 3;
        pvVar11 = *(void **)(iVar6 + 0x28);
        uVar12 = param_2;
        sVar10 = func_0x00bb77a0(uVar3,pvVar11,param_2,uVar3,3);
        goto LAB_00c32d49;
      }
      uVar3 = FUN_00bbba70(*(undefined4 *)(iVar6 + 0x18),param_4,sVar10,param_2,&param_1,uVar3);
      iVar6 = func_0x00c78cd0(uVar3);
    }
    if (iVar6 < 1) {
      return iVar6;
    }
  }
LAB_00c32d53:
  if (-1 < param_1) {
    *param_3 = param_1;
    return 1;
  }
  return param_1;
}



size_t FUN_00c32d70(size_t param_1,void *param_2,size_t *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  size_t sVar7;
  
  sVar7 = param_1;
  iVar6 = *(int *)(param_1 + 0x50);
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48));
  iVar3 = *(int *)(iVar6 + 0x14);
  if (*(int *)(iVar6 + 0x18) != 0) {
    if (iVar3 == 5) {
      iVar3 = func_0x00c344c0(iVar6,sVar7);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      iVar3 = func_0x00bb7540(param_5,param_4,*(undefined4 *)(iVar6 + 0x28),uVar2,5);
      if (0 < iVar3) {
        sVar7 = iVar3 - 1;
        bVar1 = *(byte *)(sVar7 + *(int *)(iVar6 + 0x28));
        uVar2 = FUN_00bbba70(*(undefined4 *)(iVar6 + 0x18));
        uVar4 = func_0x00c2eaa0(uVar2);
        if (bVar1 == uVar4) {
          sVar5 = func_0x00bc4320(*(undefined4 *)(iVar6 + 0x18));
          if (sVar7 != sVar5) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0xef,"pkey_rsa_verifyrecover");
            func_0x00bc5160(4,0x8f,0);
            return 0;
          }
          if (param_2 != (void *)0x0) {
            memcpy(param_2,*(void **)(iVar6 + 0x28),sVar7);
          }
          goto LAB_00c32ec7;
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0xeb,"pkey_rsa_verifyrecover");
        func_0x00bc5160(4,100,0);
      }
    }
    else {
      if (iVar3 != 1) {
        return 0xffffffff;
      }
      uVar2 = FUN_00bbba70(*(int *)(iVar6 + 0x18),0,0,param_2,&param_1,param_4,param_5,uVar2);
      iVar6 = func_0x00c791a0(uVar2);
      sVar7 = param_1;
      if (0 < iVar6) goto LAB_00c32ec7;
    }
    return 0;
  }
  sVar7 = func_0x00bb7540(param_5,param_4,param_2,uVar2,iVar3);
LAB_00c32ec7:
  if ((int)sVar7 < 0) {
    return sVar7;
  }
  *param_3 = sVar7;
  return 1;
}



undefined4
FUN_00c32ee0(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint param_5)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  
  uVar10 = param_1;
  iVar7 = *(int *)(param_1 + 0x50);
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48));
  uVar5 = param_5;
  iVar6 = *(int *)(iVar7 + 0x18);
  if (iVar6 == 0) {
    iVar6 = *(int *)(iVar7 + 0x28);
    if (iVar6 == 0) {
      uVar8 = func_0x00c0d960(*(undefined4 *)(uVar10 + 0x48),"crypto\\rsa\\rsa_pmeth.c",0x77);
      uVar8 = func_0x00bb77a0(uVar8);
      iVar6 = FUN_00bbc4f0(uVar8);
      *(int *)(iVar7 + 0x28) = iVar6;
      if (iVar6 == 0) {
        return 0xffffffff;
      }
    }
    uVar10 = func_0x00bb7540(param_3,param_2,iVar6,uVar2,*(undefined4 *)(iVar7 + 0x14));
    param_5 = uVar5;
    if (uVar10 == 0) {
      return 0;
    }
LAB_00c33181:
    if (uVar10 != param_5) {
      return 0;
    }
    piVar9 = *(int **)(iVar7 + 0x28);
    while (uVar5 = uVar10 - 4, 3 < uVar10) {
      if (*param_4 != *piVar9) goto LAB_00c331af;
      param_4 = param_4 + 1;
      piVar9 = piVar9 + 1;
      uVar10 = uVar5;
    }
    if (uVar5 != 0xfffffffc) {
LAB_00c331af:
      if ((char)*param_4 != (char)*piVar9) {
        return 0;
      }
      if (uVar5 != 0xfffffffd) {
        if (*(char *)((int)param_4 + 1) != *(char *)((int)piVar9 + 1)) {
          return 0;
        }
        if (uVar5 != 0xfffffffe) {
          if (*(char *)((int)param_4 + 2) != *(char *)((int)piVar9 + 2)) {
            return 0;
          }
          if ((uVar5 != 0xffffffff) && (*(char *)((int)param_4 + 3) != *(char *)((int)piVar9 + 3)))
          {
            return 0;
          }
        }
      }
    }
    return 1;
  }
  if (*(int *)(iVar7 + 0x14) == 1) {
    uVar2 = FUN_00bbba70(iVar6,param_4,param_5,param_2,param_3,uVar2);
    uVar2 = func_0x00c78e30(uVar2);
    return uVar2;
  }
  uVar3 = func_0x00bc4320(iVar6);
  if ((int)uVar3 < 1) {
    FUN_00bc4f50();
    uVar2 = 0x11c;
  }
  else {
    if (uVar5 == uVar3) {
      if (*(int *)(iVar7 + 0x14) != 5) {
        if (*(int *)(iVar7 + 0x14) != 6) {
          return 0xffffffff;
        }
        iVar6 = func_0x00c344c0(iVar7,uVar10);
        if (iVar6 == 0) {
          return 0xffffffff;
        }
        iVar6 = func_0x00bb7540(param_3,param_2,*(undefined4 *)(iVar7 + 0x28),uVar2,3);
        if (iVar6 < 1) {
          return 0;
        }
        iVar7 = func_0x00c668a0(uVar2,param_4,*(undefined4 *)(iVar7 + 0x18),
                                *(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 0x28),
                                *(undefined4 *)(iVar7 + 0x20));
        if (0 < iVar7) {
          return 1;
        }
        return 0;
      }
      iVar6 = *(int *)(uVar10 + 0x50);
      uVar2 = func_0x00c0d960(*(undefined4 *)(uVar10 + 0x48));
      iVar4 = *(int *)(iVar6 + 0x14);
      if (*(int *)(iVar6 + 0x18) == 0) {
        uVar10 = func_0x00bb7540(param_3,param_2,0,uVar2,iVar4);
      }
      else if (iVar4 == 5) {
        iVar4 = func_0x00c344c0(iVar6,uVar10);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = func_0x00bb7540(param_3,param_2,*(undefined4 *)(iVar6 + 0x28),uVar2,5);
        if (iVar4 < 1) {
          return 0;
        }
        uVar10 = iVar4 - 1;
        bVar1 = *(byte *)(uVar10 + *(int *)(iVar6 + 0x28));
        uVar2 = FUN_00bbba70(*(undefined4 *)(iVar6 + 0x18));
        uVar5 = func_0x00c2eaa0(uVar2);
        if (bVar1 != uVar5) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0xeb,"pkey_rsa_verifyrecover");
          func_0x00bc5160(4,100,0);
          return 0;
        }
        uVar5 = func_0x00bc4320(*(undefined4 *)(iVar6 + 0x18));
        if (uVar10 != uVar5) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0xef,"pkey_rsa_verifyrecover");
          func_0x00bc5160(4,0x8f,0);
          return 0;
        }
      }
      else {
        if (iVar4 != 1) {
          return 0;
        }
        uVar2 = FUN_00bbba70(*(int *)(iVar6 + 0x18),0,0,0,&param_1,param_2,param_3,uVar2);
        iVar6 = func_0x00c791a0(uVar2);
        uVar10 = param_1;
        if (iVar6 < 1) {
          return 0;
        }
      }
      if ((int)uVar10 < 0) {
        return 0;
      }
      goto LAB_00c33181;
    }
    FUN_00bc4f50();
    uVar2 = 0x120;
  }
  func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",uVar2,"pkey_rsa_verify");
  func_0x00bc5160(4,0x8f,0);
  return 0xffffffff;
}



int FUN_00c33200(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x50);
  uVar1 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48));
  iVar4 = *(int *)(iVar5 + 0x14);
  if (iVar4 == 4) {
    uVar2 = func_0x00bb77a0(uVar1);
    iVar4 = *(int *)(iVar5 + 0x28);
    if (iVar4 == 0) {
      uVar3 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48),"crypto\\rsa\\rsa_pmeth.c",0x77);
      uVar3 = func_0x00bb77a0(uVar3);
      iVar4 = FUN_00bbc4f0(uVar3);
      *(int *)(iVar5 + 0x28) = iVar4;
      if (iVar4 == 0) {
        return -1;
      }
    }
    iVar4 = func_0x00c2dde0(iVar4,uVar2,param_4,param_5,*(undefined4 *)(iVar5 + 0x2c),
                            *(undefined4 *)(iVar5 + 0x30),*(undefined4 *)(iVar5 + 0x18),
                            *(undefined4 *)(iVar5 + 0x1c));
    if (iVar4 == 0) {
      return -1;
    }
    param_4 = *(undefined4 *)(iVar5 + 0x28);
    iVar4 = 3;
    param_5 = uVar2;
  }
  iVar5 = func_0x00bb7550(param_5,param_4,param_2,uVar1,iVar4);
  if (iVar5 < 0) {
    return iVar5;
  }
  *param_3 = iVar5;
  return 1;
}



uint FUN_00c332d0(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x50);
  uVar3 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48));
  iVar5 = *(int *)(iVar1 + 0x14);
  if (iVar5 == 4) {
    iVar5 = *(int *)(iVar1 + 0x28);
    if (iVar5 == 0) {
      uVar4 = func_0x00c0d960(*(undefined4 *)(param_1 + 0x48),"crypto\\rsa\\rsa_pmeth.c",0x77);
      uVar4 = func_0x00bb77a0(uVar4);
      iVar5 = FUN_00bbc4f0(uVar4);
      *(int *)(iVar1 + 0x28) = iVar5;
      if (iVar5 == 0) {
        return 0xffffffff;
      }
    }
    uVar6 = func_0x00bb7520(param_5,param_4,iVar5,uVar3,3);
    if ((int)uVar6 < 1) {
      return uVar6;
    }
    uVar6 = func_0x00c2de40(param_2,uVar6,*(undefined4 *)(iVar1 + 0x28),uVar6,uVar6,
                            *(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30),
                            *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
  }
  else {
    if ((iVar5 == 1) && (*(int *)(iVar1 + 0x34) == 0)) {
      iVar5 = 8;
    }
    uVar6 = func_0x00bb7520(param_5,param_4,param_2,uVar3,iVar5);
  }
  uVar2 = (int)uVar6 >> 0x1f;
  *param_3 = *param_3 & uVar2 | ~uVar2 & uVar6;
  return uVar2 & uVar6 | ~uVar2 & 1;
}



int FUN_00c333d0(uint *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)param_1[0x14];
  if (0x1001 < param_2) {
    switch(param_2) {
    case 0x1002:
    case 0x1007:
      if (piVar1[5] == 6) {
        if (param_2 == 0x1007) {
          *param_4 = piVar1[8];
          return 1;
        }
        if (param_3 < -3) {
          return -2;
        }
        if (piVar1[9] == -1) goto LAB_00c33653;
        if ((param_3 != -2) || (*param_1 != 0x20)) {
          iVar3 = func_0x00bc4320(piVar1[6]);
          if (iVar3 < 1) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x1f8,"pkey_rsa_ctrl");
            func_0x00bc5160(4,0x8f,0);
            return -2;
          }
          if (param_3 == -1) {
            if (piVar1[9] <= iVar3) {
LAB_00c33653:
              piVar1[8] = param_3;
              return 1;
            }
          }
          else if ((param_3 < 0) || (piVar1[9] <= param_3)) goto LAB_00c33653;
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x1fe,"pkey_rsa_ctrl");
          func_0x00bc5160(4,0xa4,0);
          return 0;
        }
        FUN_00bc4f50();
        uVar5 = 499;
      }
      else {
        FUN_00bc4f50();
        uVar5 = 0x1e8;
      }
      func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",uVar5,"pkey_rsa_ctrl");
      func_0x00bc5160(4,0x92,0);
      return -2;
    case 0x1003:
      if (0x1ff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x208,"pkey_rsa_ctrl");
      func_0x00bc5160(4,0x78,0);
      return -2;
    case 0x1004:
      if (((param_4 != (int *)0x0) && (iVar3 = func_0x00bba4d0(param_4), iVar3 != 0)) &&
         (iVar3 = func_0x00bba4f0(param_4), iVar3 == 0)) {
        FUN_00bba400(piVar1[1]);
        piVar1[1] = (int)param_4;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x210,"pkey_rsa_ctrl");
      func_0x00bc5160(4,0x65,0);
      return -2;
    case 0x1005:
    case 0x1008:
      if ((piVar1[5] != 6) && (piVar1[5] != 4)) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x23f,"pkey_rsa_ctrl");
        func_0x00bc5160(4,0x9c,0);
        return -2;
      }
      if (param_2 == 0x1008) {
        iVar3 = piVar1[7];
        if (iVar3 == 0) {
          iVar3 = piVar1[6];
        }
        *param_4 = iVar3;
        return 1;
      }
      if (piVar1[9] != -1) {
        iVar3 = FUN_00bbba70(piVar1[7]);
        iVar2 = FUN_00bbba70(param_4);
        if (iVar3 == iVar2) {
          return 1;
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x24b,"pkey_rsa_ctrl");
        func_0x00bc5160(4,0x98,0);
        return 0;
      }
      piVar1[7] = (int)param_4;
      return 1;
    case 0x1006:
      *param_4 = piVar1[5];
      return 1;
    case 0x1009:
    case 0x100b:
      if (piVar1[5] == 4) {
        if (param_2 != 0x100b) {
          piVar1[6] = (int)param_4;
          return 1;
        }
        *param_4 = piVar1[6];
        return 1;
      }
      FUN_00bc4f50();
      uVar5 = 0x222;
      break;
    case 0x100a:
      if (piVar1[5] == 4) {
        FUN_00bbc580(piVar1[0xb],"crypto\\rsa\\rsa_pmeth.c",599);
        if ((param_4 == (int *)0x0) || (param_3 < 1)) {
          param_3 = 0;
          param_4 = (int *)0x0;
        }
        piVar1[0xb] = (int)param_4;
        piVar1[0xc] = param_3;
        return 1;
      }
      FUN_00bc4f50();
      uVar5 = 0x254;
      break;
    case 0x100c:
      if (piVar1[5] == 4) {
        if (param_4 != (int *)0x0) {
          *param_4 = piVar1[0xb];
          return piVar1[0xc];
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x267,"pkey_rsa_ctrl");
        func_0x00bc5160(6,0xc0102,0);
        return 0;
      }
      FUN_00bc4f50();
      uVar5 = 0x263;
      break;
    case 0x100d:
      if (3 < param_3 - 2U) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x219,"pkey_rsa_ctrl");
        func_0x00bc5160(4,0xa5,0);
        return -2;
      }
      piVar1[2] = param_3;
      return 1;
    case 0x100e:
      if (piVar1[5] == 1) {
        piVar1[0xd] = param_3;
        return 1;
      }
      FUN_00bc4f50();
      uVar5 = 0x26f;
      break;
    default:
      return -2;
    }
    func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",uVar5,"pkey_rsa_ctrl");
    func_0x00bc5160(4,0x8d,0);
    return -2;
  }
  if (param_2 != 0x1001) {
    switch(param_2) {
    case 1:
      goto LAB_00c33407;
    case 3:
    case 4:
    case 9:
    case 10:
      if (*(int *)param_1[0x10] != 0x390) {
        return 1;
      }
    case 2:
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x286,"pkey_rsa_ctrl");
      func_0x00bc5160(4,0x94,0);
      return -2;
    case 5:
    case 7:
    case 0xb:
      return 1;
    default:
      return -2;
    case 0xd:
      *param_4 = piVar1[6];
      return 1;
    }
  }
  if (param_3 - 1U < 6) {
    iVar3 = func_0x00c34270(piVar1[6],param_3);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_3 == 6) {
      bVar4 = (*param_1 & 0x30) == 0;
    }
    else {
      if (*(int *)param_1[0x10] == 0x390) goto LAB_00c3352c;
      if (param_3 != 4) goto LAB_00c33520;
      bVar4 = (*param_1 & 0x600) == 0;
    }
    if (!bVar4) {
      if (piVar1[6] == 0) {
        iVar3 = func_0x00c22c10();
        piVar1[6] = iVar3;
      }
LAB_00c33520:
      piVar1[5] = param_3;
      return 1;
    }
  }
LAB_00c3352c:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x1de,"pkey_rsa_ctrl");
  func_0x00bc5160(4,0x90,0);
  return -2;
LAB_00c33407:
  iVar3 = func_0x00c34270(param_4,piVar1[5]);
  if (iVar3 == 0) {
    return 0;
  }
  if (piVar1[9] != -1) {
    iVar3 = FUN_00bbba70(piVar1[6]);
    iVar2 = FUN_00bbba70(param_4);
    if (iVar3 == iVar2) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x231,"pkey_rsa_ctrl");
    func_0x00bc5160(4,0x91,0);
    return 0;
  }
  piVar1[6] = (int)param_4;
  return 1;
}



int FUN_00c339f0(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  
  pbVar4 = param_3;
  if (param_3 == (byte *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x293,"pkey_rsa_ctrl_str");
    func_0x00bc5160(4,0x93,0);
    return 0;
  }
  pcVar8 = "rsa_padding_mode";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00c33a52:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_00c33a57;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < ((byte *)pcVar8)[1];
    if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33a52;
    pbVar2 = pbVar2 + 2;
    pcVar8 = (char *)((byte *)pcVar8 + 2);
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c33a57:
  if (uVar3 != 0) {
    pcVar8 = "rsa_pss_saltlen";
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_00c33c47:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_00c33c4c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < ((byte *)pcVar8)[1];
      if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33c47;
      pbVar2 = pbVar2 + 2;
      pcVar8 = (char *)((byte *)pcVar8 + 2);
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c33c4c:
    if (uVar3 != 0) {
      pcVar8 = "rsa_keygen_bits";
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00c33d66:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_00c33d6b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < ((byte *)pcVar8)[1];
        if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33d66;
        pbVar2 = pbVar2 + 2;
        pcVar8 = (char *)((byte *)pcVar8 + 2);
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c33d6b:
      if (uVar3 == 0) {
        uVar6 = func_0x008aafde(param_3);
        iVar5 = func_0x00bb5cf0(param_1,uVar6);
        return iVar5;
      }
      pcVar8 = "rsa_keygen_pubexp";
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00c33db0:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_00c33db5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < ((byte *)pcVar8)[1];
        if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33db0;
        pbVar2 = pbVar2 + 2;
        pcVar8 = (char *)((byte *)pcVar8 + 2);
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c33db5:
      if (uVar3 == 0) {
        param_3 = (byte *)uVar3;
        iVar5 = func_0x00bb9020(&param_3,pbVar4);
        if (iVar5 != 0) {
          iVar5 = func_0x00bb5c90(param_1,param_3);
          FUN_00bba400(param_3);
          return iVar5;
        }
      }
      else {
        pcVar8 = "rsa_keygen_primes";
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_00c33e20:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_00c33e25;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < ((byte *)pcVar8)[1];
          if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33e20;
          pbVar4 = pbVar4 + 2;
          pcVar8 = (char *)((byte *)pcVar8 + 2);
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_00c33e25:
        if (uVar3 == 0) {
          uVar6 = func_0x008aafde(param_3);
          iVar5 = func_0x00bb5dd0(param_1,uVar6);
          return iVar5;
        }
        pbVar2 = &DAT_0106085c;
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar2;
          if (bVar1 != *pbVar2) {
LAB_00c33e67:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_00c33e6c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar2[1];
          if (bVar1 != pbVar2[1]) goto LAB_00c33e67;
          pbVar4 = pbVar4 + 2;
          pbVar2 = pbVar2 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_00c33e6c:
        if (uVar3 == 0) {
          iVar5 = func_0x00becfb0(param_1,0xc7f0,0x1005,param_3);
          return iVar5;
        }
        if (**(int **)(param_1 + 0x40) == 0x390) {
          pcVar8 = "rsa_pss_keygen_mgf1_md";
          pbVar4 = param_2;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00c33ec5:
              uVar3 = -(uint)bVar9 | 1;
              goto LAB_00c33eca;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < ((byte *)pcVar8)[1];
            if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33ec5;
            pbVar4 = pbVar4 + 2;
            pcVar8 = (char *)((byte *)pcVar8 + 2);
          } while (bVar1 != 0);
          uVar3 = 0;
LAB_00c33eca:
          if (uVar3 == 0) {
            iVar5 = func_0x00becfb0(param_1,4,0x1005,param_3);
            return iVar5;
          }
          pcVar8 = "rsa_pss_keygen_md";
          pbVar4 = param_2;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00c33f10:
              uVar3 = -(uint)bVar9 | 1;
              goto LAB_00c33f15;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < ((byte *)pcVar8)[1];
            if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33f10;
            pbVar4 = pbVar4 + 2;
            pcVar8 = (char *)((byte *)pcVar8 + 2);
          } while (bVar1 != 0);
          uVar3 = 0;
LAB_00c33f15:
          if (uVar3 == 0) {
            iVar5 = func_0x00becfb0(param_1,4,1,param_3);
            return iVar5;
          }
          pcVar8 = "rsa_pss_keygen_saltlen";
          pbVar4 = param_2;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00c33f52:
              uVar3 = -(uint)bVar9 | 1;
              goto LAB_00c33f57;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < ((byte *)pcVar8)[1];
            if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33f52;
            pbVar4 = pbVar4 + 2;
            pcVar8 = (char *)((byte *)pcVar8 + 2);
          } while (bVar1 != 0);
          uVar3 = 0;
LAB_00c33f57:
          if (uVar3 == 0) {
            uVar6 = func_0x008aafde(param_3);
            iVar5 = func_0x00bb5f30(param_1,uVar6);
            return iVar5;
          }
        }
        pbVar2 = &DAT_01060878;
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar2;
          if (bVar1 != *pbVar2) {
LAB_00c33f96:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_00c33f9b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar2[1];
          if (bVar1 != pbVar2[1]) goto LAB_00c33f96;
          pbVar4 = pbVar4 + 2;
          pbVar2 = pbVar2 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_00c33f9b:
        if (uVar3 == 0) {
          iVar5 = func_0x00becfb0(param_1,0x600,0x1009,param_3);
          return iVar5;
        }
        pcVar8 = "rsa_oaep_label";
        do {
          bVar1 = *param_2;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_00c33fe0:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_00c33fe5;
          }
          if (bVar1 == 0) break;
          bVar1 = param_2[1];
          bVar9 = bVar1 < ((byte *)pcVar8)[1];
          if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33fe0;
          param_2 = param_2 + 2;
          pcVar8 = (char *)((byte *)pcVar8 + 2);
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_00c33fe5:
        if (uVar3 != 0) {
          return -2;
        }
        iVar5 = func_0x00bbbf00(param_3,&param_3);
        if (iVar5 != 0) {
          iVar7 = func_0x00bb5b90(param_1,iVar5,param_3);
          if (iVar7 < 1) {
            FUN_00bbc580(iVar5,"crypto\\rsa\\rsa_pmeth.c",0x2f5);
          }
          return iVar7;
        }
      }
      return 0;
    }
    pcVar8 = "digest";
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_00c33c80:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_00c33c85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < ((byte *)pcVar8)[1];
      if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00c33c80;
      pbVar4 = pbVar4 + 2;
      pcVar8 = (char *)((byte *)pcVar8 + 2);
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c33c85:
    if (uVar3 == 0) {
      iVar5 = func_0x00bb5ff0(param_1,0xffffffff);
      return iVar5;
    }
    pbVar2 = &DAT_01015f10;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00c33cc3:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_00c33cc8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00c33cc3;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c33cc8:
    if (uVar3 == 0) {
      iVar5 = func_0x00bb5ff0(param_1,0xfffffffd);
      return iVar5;
    }
    pbVar2 = &DAT_01060b80;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00c33d08:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_00c33d0d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00c33d08;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c33d0d:
    if (uVar3 == 0) {
      iVar5 = func_0x00bb5ff0(param_1,0xfffffffe);
      return iVar5;
    }
    uVar6 = func_0x008aafde(param_3);
    iVar5 = func_0x00bb5ff0(param_1,uVar6);
    return iVar5;
  }
  pbVar2 = &DAT_0104f604;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00c33a86:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_00c33a8b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00c33a86;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c33a8b:
  if (uVar3 == 0) {
    iVar5 = func_0x00bb5ef0(param_1,1);
    return iVar5;
  }
  pbVar2 = &DAT_01142038;
  pbVar4 = param_3;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00c33ad0:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_00c33ad5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00c33ad0;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c33ad5:
  if (uVar3 == 0) {
    iVar5 = func_0x00bb5ef0(param_1,3);
    return iVar5;
  }
  pbVar2 = &DAT_01060b70;
  pbVar4 = param_3;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00c33b15:
      uVar3 = -(uint)bVar9 | 1;
      goto LAB_00c33b1a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00c33b15;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_00c33b1a:
  if (uVar3 != 0) {
    pbVar2 = &DAT_01060b68;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00c33b45:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_00c33b4a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00c33b45;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c33b4a:
    if (uVar3 != 0) {
      pbVar2 = &DAT_01060b78;
      pbVar4 = param_3;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_00c33b90:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_00c33b95;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_00c33b90;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c33b95:
      if (uVar3 == 0) {
        iVar5 = func_0x00bb5ef0(param_1,5);
        return iVar5;
      }
      pbVar2 = &DAT_01050c54;
      pbVar4 = param_3;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_00c33bd3:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_00c33bd8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_00c33bd3;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00c33bd8:
      if (uVar3 == 0) {
        iVar5 = func_0x00bb5ef0(param_1,6);
        return iVar5;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x2a6,"pkey_rsa_ctrl_str");
      func_0x00bc5160(4,0x76,0);
      return -2;
    }
  }
  iVar5 = func_0x00bb5ef0(param_1,4);
  return iVar5;
}



int FUN_00c34040(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1[1] == 0) {
    iVar2 = func_0x00bba5e0();
    puVar1[1] = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x00bba8c0(iVar2,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00bb6340();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = func_0x00bb9ee0();
    if (iVar3 == 0) goto LAB_00c340fc;
    func_0x00bfd750(iVar3,param_1);
  }
  iVar4 = func_0x00c67380(iVar2,*puVar1,puVar1[2],puVar1[1],iVar3);
  func_0x00bb9ec0(iVar3);
  if (iVar4 < 1) {
    FUN_00bb6040(iVar2);
    return iVar4;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if ((**(int **)(param_1 + 0x40) == 0x390) &&
     (((*(int *)(iVar3 + 0x18) != 0 || (*(int *)(iVar3 + 0x1c) != 0)) ||
      (*(int *)(iVar3 + 0x20) != -2)))) {
    uVar5 = 0;
    if (*(int *)(iVar3 + 0x20) != -2) {
      uVar5 = *(undefined4 *)(iVar3 + 0x20);
    }
    iVar3 = func_0x00c4d3c0(*(int *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c),uVar5);
    *(int *)(iVar2 + 0x48) = iVar3;
    if (iVar3 == 0) {
LAB_00c340fc:
      FUN_00bb6040(iVar2);
      return 0;
    }
  }
  func_0x00bd5660(param_2,**(undefined4 **)(param_1 + 0x40),iVar2);
  return iVar4;
}



undefined4 FUN_00c34140(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = *(int *)(param_3 + 0x50);
  if (**(int **)(param_3 + 0x40) == 0x390) {
    iVar3 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x48));
    if (*(int *)(iVar3 + 0x48) == 0) {
      return 1;
    }
    iVar4 = func_0x00c4d310(*(int *)(iVar3 + 0x48),&param_3,&param_1,&stack0x00000000);
    if (iVar4 != 0) {
      iVar4 = func_0x00bc4320(param_3);
      if (iVar4 < 1) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x378,"pkey_pss_init");
        func_0x00bc5160(4,0x8f,0);
        return 0;
      }
      iVar5 = func_0x00bb77a0(iVar3);
      bVar2 = func_0x00bb7500(iVar3);
      iVar3 = (iVar5 - iVar4) + -1;
      if ((bVar2 & 7) != 1) {
        iVar3 = iVar5 - iVar4;
      }
      if (iVar3 < unaff_retaddr) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\rsa\\rsa_pmeth.c",0x37f,"pkey_pss_init");
        func_0x00bc5160(4,0x96,0);
        return 0;
      }
      *(int *)(iVar1 + 0x24) = unaff_retaddr;
      *(int *)(iVar1 + 0x18) = param_3;
      *(undefined4 *)(iVar1 + 0x1c) = param_1;
      *(int *)(iVar1 + 0x20) = unaff_retaddr;
      return 1;
    }
  }
  return 0;
}



undefined * FUN_00c344a0(void)

{
  return &DAT_01066b80;
}



undefined * FUN_00c344b0(void)

{
  return &DAT_01066c08;
}



void FUN_00c34510(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\evp\\asymcipher.c",0x1cf);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0xc));
      FUN_00bbc580(param_1,"crypto\\evp\\asymcipher.c",0x1d2);
    }
  }
  return;
}



undefined4 * FUN_00c348e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack00000004;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x00e87f70();
  iVar4 = 0;
  piVar3 = *(int **)(in_stack_00000018 + 8);
  iVar6 = 0;
  iVar5 = 0;
  iStack00000004 = 0;
  iVar7 = 0;
  puVar1 = (undefined4 *)FUN_00bbc830(0x40,"crypto\\evp\\asymcipher.c",0x142);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\asymcipher.c",0x15b,"evp_asym_cipher_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  puVar1[4] = 1;
  puVar1[3] = in_stack_0000001c;
  func_0x00bc8620(in_stack_0000001c);
  *puVar1 = in_stack_00000014;
  iVar2 = func_0x00bc9200(in_stack_00000018);
  puVar1[1] = iVar2;
  if (iVar2 != 0) {
    puVar1[2] = *(undefined4 *)(in_stack_00000018 + 0xc);
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      piVar3 = piVar3 + 1;
      do {
        switch(iVar2) {
        case 1:
          if (puVar1[5] == 0) {
            iStack00000004 = iStack00000004 + 1;
            puVar1[5] = *piVar3;
          }
          break;
        case 2:
          if (puVar1[6] == 0) {
            iVar4 = iVar4 + 1;
            puVar1[6] = *piVar3;
          }
          break;
        case 3:
          if (puVar1[7] == 0) {
            iVar4 = iVar4 + 1;
            puVar1[7] = *piVar3;
          }
          break;
        case 4:
          if (puVar1[8] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[8] = *piVar3;
          }
          break;
        case 5:
          if (puVar1[9] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[9] = *piVar3;
          }
          break;
        case 6:
          if (puVar1[10] == 0) {
            iStack00000004 = iStack00000004 + 1;
            puVar1[10] = *piVar3;
          }
          break;
        case 7:
          if (puVar1[0xb] == 0) {
            puVar1[0xb] = *piVar3;
          }
          break;
        case 8:
          if (puVar1[0xc] == 0) {
            iVar7 = iVar7 + 1;
            puVar1[0xc] = *piVar3;
          }
          break;
        case 9:
          if (puVar1[0xd] == 0) {
            iVar7 = iVar7 + 1;
            puVar1[0xd] = *piVar3;
          }
          break;
        case 10:
          if (puVar1[0xe] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[0xe] = *piVar3;
          }
          break;
        case 0xb:
          if (puVar1[0xf] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[0xf] = *piVar3;
          }
        }
        iVar2 = piVar3[1];
        piVar3 = piVar3 + 2;
      } while (iVar2 != 0);
      if ((((iStack00000004 == 2) && ((iVar4 == 0 || (iVar4 == 2)))) &&
          ((iVar6 == 0 || (iVar6 == 2)))) &&
         ((((iVar4 == 2 || (iVar6 == 2)) && ((iVar7 == 0 || (iVar7 == 2)))) &&
          ((iVar5 == 0 || (iVar5 == 2)))))) {
        return puVar1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\asymcipher.c",0x1bc,"evp_asym_cipher_from_algorithm");
    func_0x00bc5160(6,0xc1,0);
  }
  piVar3 = puVar1 + 4;
  LOCK();
  iVar7 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    FUN_00bbc580(puVar1[1],"crypto\\evp\\asymcipher.c",0x1cf);
    FUN_00bc7c90(puVar1[3]);
    FUN_00bbc580(puVar1,"crypto\\evp\\asymcipher.c",0x1d2);
  }
  return (undefined4 *)0x0;
}



void FUN_00c35050(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\evp\\kem.c",0x1af);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0xc));
      FUN_00bbc580(param_1,"crypto\\evp\\kem.c",0x1b2);
    }
  }
  return;
}



undefined4 * FUN_00c35240(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack00000004;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar3 = in_stack_00000018;
  func_0x00e87f70();
  iVar5 = 0;
  piVar4 = *(int **)(in_stack_00000018 + 8);
  iVar6 = 0;
  iStack00000004 = 0;
  iVar7 = 0;
  in_stack_00000018 = 0;
  puVar1 = (undefined4 *)FUN_00bbc830(0x48,"crypto\\evp\\kem.c",0x114);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\kem.c",300,"evp_kem_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  puVar1[4] = 1;
  puVar1[3] = in_stack_0000001c;
  func_0x00bc8620(in_stack_0000001c);
  *puVar1 = in_stack_00000014;
  iVar2 = func_0x00bc9200(iVar3);
  puVar1[1] = iVar2;
  if (iVar2 != 0) {
    puVar1[2] = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      piVar4 = piVar4 + 1;
      do {
        switch(iVar3) {
        case 1:
          if (puVar1[5] == 0) {
            iStack00000004 = iStack00000004 + 1;
            puVar1[5] = *piVar4;
          }
          break;
        case 2:
          if (puVar1[6] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[6] = *piVar4;
          }
          break;
        case 3:
          if (puVar1[7] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[7] = *piVar4;
          }
          break;
        case 4:
          if (puVar1[8] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[8] = *piVar4;
          }
          break;
        case 5:
          if (puVar1[9] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[9] = *piVar4;
          }
          break;
        case 6:
          if (puVar1[10] == 0) {
            iStack00000004 = iStack00000004 + 1;
            puVar1[10] = *piVar4;
          }
          break;
        case 7:
          if (puVar1[0xb] == 0) {
            puVar1[0xb] = *piVar4;
          }
          break;
        case 8:
          if (puVar1[0xc] == 0) {
            iVar7 = iVar7 + 1;
            puVar1[0xc] = *piVar4;
          }
          break;
        case 9:
          if (puVar1[0xd] == 0) {
            iVar7 = iVar7 + 1;
            puVar1[0xd] = *piVar4;
          }
          break;
        case 10:
          if (puVar1[0xe] == 0) {
            in_stack_00000018 = in_stack_00000018 + 1;
            puVar1[0xe] = *piVar4;
          }
          break;
        case 0xb:
          if (puVar1[0xf] == 0) {
            in_stack_00000018 = in_stack_00000018 + 1;
            puVar1[0xf] = *piVar4;
          }
          break;
        case 0xc:
          if (puVar1[0x10] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[0x10] = *piVar4;
          }
          break;
        case 0xd:
          if (puVar1[0x11] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[0x11] = *piVar4;
          }
        }
        iVar3 = piVar4[1];
        piVar4 = piVar4 + 2;
      } while (iVar3 != 0);
      if ((((iStack00000004 == 2) && (((iVar6 == 0 || (iVar6 == 2)) || (iVar6 == 3)))) &&
          ((((iVar5 == 0 || (iVar5 == 2)) || (iVar5 == 3)) &&
           ((iVar6 == iVar5 && ((iVar7 == 0 || (iVar7 == 2)))))))) &&
         ((in_stack_00000018 == 0 || (in_stack_00000018 == 2)))) {
        return puVar1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\kem.c",0x19b,"evp_kem_from_algorithm");
    func_0x00bc5160(6,0xc1,0);
  }
  piVar4 = puVar1 + 4;
  LOCK();
  iVar3 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    FUN_00bbc580(puVar1[1],"crypto\\evp\\kem.c",0x1af);
    FUN_00bc7c90(puVar1[3]);
    FUN_00bbc580(puVar1,"crypto\\evp\\kem.c",0x1b2);
  }
  return (undefined4 *)0x0;
}



void FUN_00c35a90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\evp\\exchange.c",0x97);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0xc));
      FUN_00bbc580(param_1,"crypto\\evp\\exchange.c",0x9a);
    }
  }
  return;
}



undefined4 *
FUN_00c36390(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  piVar3 = *(int **)(param_4 + 8);
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  puVar1 = (undefined4 *)FUN_00bbc830(0x3c,"crypto\\evp\\exchange.c",0x17);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\exchange.c",0x2f,"evp_keyexch_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  puVar1[4] = 1;
  puVar1[3] = param_5;
  func_0x00bc8620(param_5);
  *puVar1 = param_3;
  iVar2 = func_0x00bc9200(param_4);
  puVar1[1] = iVar2;
  if (iVar2 != 0) {
    puVar1[2] = *(undefined4 *)(param_4 + 0xc);
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      piVar3 = piVar3 + 1;
      do {
        switch(iVar2) {
        case 1:
          if (puVar1[5] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[5] = *piVar3;
          }
          break;
        case 2:
          if (puVar1[6] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[6] = *piVar3;
          }
          break;
        case 3:
          if (puVar1[8] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[8] = *piVar3;
          }
          break;
        case 4:
          if (puVar1[7] == 0) {
            puVar1[7] = *piVar3;
          }
          break;
        case 5:
          if (puVar1[9] == 0) {
            iVar6 = iVar6 + 1;
            puVar1[9] = *piVar3;
          }
          break;
        case 6:
          if (puVar1[10] == 0) {
            puVar1[10] = *piVar3;
          }
          break;
        case 7:
          if (puVar1[0xb] == 0) {
            puVar1[0xb] = *piVar3;
LAB_00c364eb:
            iVar4 = iVar4 + 1;
          }
          break;
        case 8:
          if (puVar1[0xc] == 0) {
            puVar1[0xc] = *piVar3;
            goto LAB_00c364eb;
          }
          break;
        case 9:
          if (puVar1[0xd] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[0xd] = *piVar3;
          }
          break;
        case 10:
          if (puVar1[0xe] == 0) {
            iVar5 = iVar5 + 1;
            puVar1[0xe] = *piVar3;
          }
        }
        iVar2 = piVar3[1];
        piVar3 = piVar3 + 2;
      } while (iVar2 != 0);
      if (((iVar6 == 4) && ((iVar5 == 0 || (iVar5 == 2)))) && ((iVar4 == 0 || (iVar4 == 2)))) {
        return puVar1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\exchange.c",0x83,"evp_keyexch_from_algorithm");
    func_0x00bc5160(6,0xc1,0);
  }
  piVar3 = puVar1 + 4;
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    FUN_00bbc580(puVar1[1],"crypto\\evp\\exchange.c",0x97);
    FUN_00bc7c90(puVar1[3]);
    FUN_00bbc580(puVar1,"crypto\\evp\\exchange.c",0x9a);
  }
  return (undefined4 *)0x0;
}



void FUN_00c365c0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\comp_methods.c",0x35);
  return;
}



undefined4
FUN_00c36680(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)func_0x00bef6e0(*param_1,0x11);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    pcVar1 = (code *)*piVar2;
    uVar3 = FUN_00baaa30(param_1,param_2,param_3,param_4);
    uVar3 = (*pcVar1)(uVar3);
    return uVar3;
  }
  return 0;
}



undefined4
FUN_00c366c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00bef6e0(*param_1,0x11);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    pcVar1 = *(code **)(iVar2 + 4);
    uVar3 = FUN_00baaa30(param_1,param_2,param_3,param_4);
    uVar3 = (*pcVar1)(uVar3);
    return uVar3;
  }
  return 0;
}



undefined4
FUN_00c36710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00bef6e0(*param_1,0x11);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    pcVar1 = *(code **)(iVar2 + 0x10);
    uVar3 = FUN_00baaa30(param_1,param_2,param_3,param_4);
    uVar3 = (*pcVar1)(uVar3);
    return uVar3;
  }
  return 0xffffffff;
}



undefined4 FUN_00c36760(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00bef6e0(*param_1,0x11);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    pcVar1 = *(code **)(iVar2 + 8);
    uVar3 = FUN_00baaa30(param_1,param_2,param_3);
    uVar3 = (*pcVar1)(uVar3);
    return uVar3;
  }
  return 0xffffffff;
}



undefined4 FUN_00c367a0(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00bef6e0(*param_1,0x11);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    pcVar1 = *(code **)(iVar2 + 0xc);
    uVar3 = FUN_00baaa30(param_1,param_2);
    uVar3 = (*pcVar1)(uVar3);
    return uVar3;
  }
  return 0xffffffff;
}



undefined4 FUN_00c367e0(undefined4 param_1)

{
  func_0x00bab690(param_1,1);
  return 1;
}



undefined4 FUN_00c36800(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00bef6e0(*param_1,0x11);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x00bab690(param_1,0);
  pcVar1 = *(code **)(iVar2 + 0x18);
  uVar3 = FUN_00baaa30(param_1);
  (*pcVar1)(uVar3);
  return 1;
}



void FUN_00c36f00(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\property\\property_string.c",0x3e);
  return;
}



void FUN_00c36f20(undefined4 *param_1)

{
  FUN_00bbe5f0(*param_1);
  return;
}



void FUN_00c371a0(int param_1)

{
  func_0x00bff5a0(*(undefined4 *)(param_1 + 4));
  FUN_00bbc580(param_1,"crypto\\property\\defn_cache.c",0x30);
  return;
}



undefined4
FUN_00c374f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7,int param_8,int param_9,int param_10,undefined4 param_11,
            int param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
            undefined4 param_16)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  int iVar15;
  
  func_0x00e87f70();
  uVar2 = FUN_00bc39e0(param_15);
  uVar13 = param_16;
  iVar3 = FUN_00bfee30(param_16,uVar2);
  param_8 = iVar3;
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\provider_conf.c",0x19c,"provider_conf_init");
    func_0x00bc5160(0xf,0x69,0);
    return 0;
  }
  iVar10 = 0;
  param_6 = 0;
  iVar4 = func_0x00bd1830(iVar3);
  if (0 < iVar4) {
    do {
      iVar3 = func_0x00bd1a80(iVar3,iVar10);
      uVar2 = *(undefined4 *)(iVar3 + 8);
      iVar3 = *(int *)(iVar3 + 4);
      param_4 = uVar2;
      param_5 = func_0x00bb6160(uVar13);
      param_3 = 0;
      param_1 = 0;
      param_2 = 0;
      iVar10 = func_0x008ab0c6(iVar3,0x2e);
      iVar4 = iVar10 + 1;
      if (iVar10 == 0) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_00bfee30(param_16,uVar2);
      param_7 = iVar3;
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\provider_conf.c",0x148,"provider_conf_load");
        func_0x00bc5160(0xf,0x69,"section=%s not found",uVar2);
        return 0;
      }
      iVar12 = 0;
      iVar5 = func_0x00bd1830(iVar3);
      iVar10 = 0;
      iVar15 = iVar4;
      if (iVar5 < 1) {
LAB_00c37738:
        param_13 = 0;
        param_9 = 0;
        param_10 = 0;
        param_11 = 0;
        param_12 = 0;
        if (((iVar4 == 0) ||
            (param_9 = func_0x00bbbc70(iVar4,"crypto\\provider_conf.c",0x171), param_9 != 0)) &&
           ((iVar10 == 0 ||
            (param_10 = func_0x00bbbc70(iVar10,"crypto\\provider_conf.c",0x176), param_10 != 0)))) {
          iVar3 = func_0x00bd1790();
          if (iVar3 == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = func_0x00c378a0(0,&param_9,0,param_4,param_16,iVar3);
            FUN_00bd1630(iVar3);
          }
          if ((0 < iVar4) && ((param_10 != 0 || (param_12 != 0)))) {
            iVar4 = func_0x00bc7df0(param_5,&param_9);
            goto LAB_00c377ef;
          }
        }
        else {
          iVar4 = 0;
        }
        func_0x00bc7f50(&param_9);
      }
      else {
        do {
          iVar3 = func_0x00bd1a80(iVar3,iVar12);
          pbVar6 = *(byte **)(iVar3 + 4);
          iVar4 = func_0x008ab0c6(pbVar6,0x2e);
          pcVar9 = "identity";
          pbVar11 = (byte *)(iVar4 + 1);
          if (iVar4 == 0) {
            pbVar11 = pbVar6;
          }
          iVar3 = *(int *)(iVar3 + 8);
          pbVar6 = pbVar11;
          do {
            bVar1 = *pbVar6;
            bVar14 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00c37620:
              uVar7 = -(uint)bVar14 | 1;
              goto LAB_00c37625;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar14 = bVar1 < ((byte *)pcVar9)[1];
            if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c37620;
            pbVar6 = pbVar6 + 2;
            pcVar9 = (char *)((byte *)pcVar9 + 2);
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_00c37625:
          iVar4 = iVar3;
          iVar10 = param_1;
          if (uVar7 != 0) {
            pcVar9 = "soft_load";
            pbVar6 = pbVar11;
            do {
              bVar1 = *pbVar6;
              bVar14 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00c37660:
                uVar7 = -(uint)bVar14 | 1;
                goto LAB_00c37665;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar14 = bVar1 < ((byte *)pcVar9)[1];
              if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c37660;
              pbVar6 = pbVar6 + 2;
              pcVar9 = (char *)((byte *)pcVar9 + 2);
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_00c37665:
            iVar4 = iVar15;
            if (uVar7 == 0) {
              puVar8 = &param_3;
LAB_00c376df:
              iVar3 = func_0x00c37ac0(pbVar11,iVar3,puVar8);
              iVar10 = param_1;
              if (iVar3 == 0) {
                return 0;
              }
            }
            else {
              pcVar9 = "module";
              pbVar6 = pbVar11;
              do {
                bVar1 = *pbVar6;
                bVar14 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00c37696:
                  uVar7 = -(uint)bVar14 | 1;
                  goto LAB_00c3769b;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar14 = bVar1 < ((byte *)pcVar9)[1];
                if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c37696;
                pbVar6 = pbVar6 + 2;
                pcVar9 = (char *)((byte *)pcVar9 + 2);
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_00c3769b:
              iVar10 = iVar3;
              if (uVar7 != 0) {
                pcVar9 = "activate";
                pbVar6 = pbVar11;
                do {
                  bVar1 = *pbVar6;
                  bVar14 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00c376d2:
                    uVar7 = -(uint)bVar14 | 1;
                    goto LAB_00c376d7;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar14 = bVar1 < ((byte *)pcVar9)[1];
                  if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c376d2;
                  pbVar6 = pbVar6 + 2;
                  pcVar9 = (char *)((byte *)pcVar9 + 2);
                } while (bVar1 != 0);
                uVar7 = 0;
LAB_00c376d7:
                iVar10 = param_1;
                if (uVar7 == 0) {
                  puVar8 = &param_2;
                  goto LAB_00c376df;
                }
              }
            }
          }
          param_1 = iVar10;
          iVar3 = param_7;
          iVar12 = iVar12 + 1;
          iVar10 = func_0x00bd1830(param_7);
          iVar15 = iVar4;
        } while (iVar12 < iVar10);
        iVar10 = param_1;
        if (param_2 == 0) goto LAB_00c37738;
        iVar4 = func_0x00c37250(param_5,iVar4,param_4,param_1,param_3,param_16);
      }
LAB_00c377ef:
      iVar3 = param_8;
      if (iVar4 < 0) {
        return 0;
      }
      iVar10 = param_6 + 1;
      param_6 = iVar10;
      iVar4 = func_0x00bd1830(param_8);
      uVar13 = param_16;
    } while (iVar10 < iVar4);
  }
  return 1;
}



void FUN_00c38210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00bee500(param_2,param_3,"providers\\implementations\\rands\\drbg.c",0xbd);
  return;
}



undefined4 FUN_00c38230(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    if ((code *)param_1[7] != (code *)0x0) {
      iVar1 = (*(code *)param_1[7])(param_1[6]);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x2fa,"ossl_drbg_enable_locking"
                       );
        func_0x00bc5160(0x39,0xb6,0);
        return 0;
      }
    }
    iVar1 = func_0x00bbb390();
    *param_1 = iVar1;
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x2ff,"ossl_drbg_enable_locking");
      func_0x00bc5160(0x39,0xb4,0);
      return 0;
    }
  }
  return 1;
}



uint FUN_00c38500(int param_1,int *param_2,int param_3,uint param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)((param_3 + 7 >> 0x1f & 7U) + param_3 + 7) >> 3;
  }
  if (uVar3 < param_4) {
    uVar3 = param_4;
  }
  if (param_5 < uVar3) {
    uVar3 = param_5;
  }
  iVar1 = FUN_00bee630(uVar3,"providers\\implementations\\rands\\drbg.c",0xa1);
  if (iVar1 != 0) {
    iVar2 = FUN_00c386f0(param_1,iVar1,uVar3,*(undefined4 *)(param_1 + 0x40),param_6,&param_1,4);
    if (iVar2 != 0) {
      *param_2 = iVar1;
      return uVar3;
    }
    FUN_00bee500(iVar1,uVar3,"providers\\implementations\\rands\\drbg.c",0xb1);
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0xb2,"ossl_drbg_get_seed");
    func_0x00bc5160(0x39,0xbf,0);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00c38891)

undefined4
FUN_00c386f0(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
            undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  
  uVar3 = 0;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || ((*param_1 != 0 && (iVar1 = func_0x00bbb470(*param_1), iVar1 == 0)))) {
    return 0;
  }
  if (param_1[0x22] != 1) {
    func_0x00c393e0(param_1);
    if (param_1[0x22] == 2) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x282,"ossl_prov_drbg_generate");
      func_0x00bc5160(0x39,0xc0,0);
      goto LAB_00c38977;
    }
    if (param_1[0x22] == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x286,"ossl_prov_drbg_generate");
      func_0x00bc5160(0x39,0xc1,0);
      goto LAB_00c38977;
    }
  }
  if ((uint)param_1[0x10] < param_4) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x28b,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xb5,0);
    goto LAB_00c38977;
  }
  if ((uint)param_1[0x11] < param_3) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x290,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xc4,0);
    goto LAB_00c38977;
  }
  if ((uint)param_1[0x17] < param_7) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x294,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xb8,0);
    uVar3 = 0;
    goto LAB_00c38977;
  }
  iVar1 = FUN_00466fc0();
  bVar4 = param_1[0xe] != iVar1;
  if (bVar4) {
    param_1[0xe] = iVar1;
  }
  if ((param_1[0x19] != 0) && ((uint)param_1[0x19] <= (uint)param_1[0x18])) {
    bVar4 = true;
  }
  if ((-1 < param_1[0x1d]) && ((0 < param_1[0x1d] || (param_1[0x1c] != 0)))) {
    lVar5 = func_0x008aaff6(0);
    if (*(longlong *)(param_1 + 0x1a) <= lVar5) {
      lVar5 = lVar5 - *(longlong *)(param_1 + 0x1a);
      iVar1 = (int)((ulonglong)lVar5 >> 0x20);
      if ((iVar1 < param_1[0x1d]) ||
         ((iVar1 <= param_1[0x1d] && ((uint)lVar5 < (uint)param_1[0x1c])))) goto LAB_00c388aa;
    }
    bVar4 = true;
  }
LAB_00c388aa:
  if ((((param_1[6] != 0) &&
       (iVar1 = param_1[0x20], iVar2 = func_0x00c37f90(param_1), iVar2 != iVar1)) || (bVar4)) ||
     (param_5 != 0)) {
    iVar1 = func_0x00c38e80(param_1,param_5,0,0,param_6,param_7);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x2b0,"ossl_prov_drbg_generate");
      func_0x00bc5160(0x39,0xc5,0);
      uVar3 = 0;
      goto LAB_00c38977;
    }
    param_6 = 0;
    param_7 = 0;
  }
  iVar1 = (*(code *)param_1[5])(param_1,param_2,param_3,param_6,param_7);
  if (iVar1 == 0) {
    param_1[0x22] = 2;
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x2b9,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xbf,0);
    uVar3 = 0;
  }
  else {
    param_1[0x18] = param_1[0x18] + 1;
    uVar3 = 1;
  }
LAB_00c38977:
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar3;
}



undefined4
FUN_00c38e30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x00c38e80(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined4 FUN_00c39650(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc36f0(param_1);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  uVar2 = func_0x00bc36f0(param_1);
  func_0x00c7a5b0(param_2,uVar2);
  return 1;
}



undefined4 FUN_00c39680(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = func_0x00bc5870(param_4,8);
  if (iVar1 < 1) {
    return 0;
  }
  func_0x00c7a7f0(param_4);
  return 1;
}



undefined4 FUN_00c396c0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      uVar3 = FUN_00bc39e0(param_1);
      uVar3 = func_0x00bc36f0(param_1,uVar3);
      func_0x00c7a500(param_3,param_2 + param_3,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c39730(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
      func_0x00c7aa70(param_4,param_3,0x40000000,uVar2);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
    func_0x00c7aa70(param_4,param_3,uVar3,uVar2);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c39800(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc36f0(param_2);
  if (*(code **)(iVar1 + 0x80) != (code *)0x0) {
    (**(code **)(iVar1 + 0x80))(param_4,param_3,param_5,iVar1,param_2 + 0x20);
    return 1;
  }
  if (0x3fffffff < param_5) {
    uVar2 = param_5 >> 0x1e;
    do {
      uVar3 = FUN_00bc39e0(param_2);
      uVar3 = func_0x00bc36f0(param_2,param_2 + 0x20,uVar3);
      func_0x004197c0(param_4,param_3,0x40000000,uVar3);
      param_5 = param_5 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_5 != 0) {
    uVar3 = FUN_00bc39e0(param_2);
    uVar3 = func_0x00bc36f0(param_2,param_2 + 0x20,uVar3);
    func_0x004197c0(param_4,param_3,param_5,uVar3);
  }
  return 1;
}



undefined4 FUN_00c398e0(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = FUN_00bc39e0(param_2);
      uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5,uVar2);
      func_0x00c7a870(param_4,param_3,0x40000000,uVar2);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = FUN_00bc39e0(param_2);
    uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5,uVar2);
    func_0x00c7a870(param_4,param_3,uVar3,uVar2);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c399c0(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack00000004;
  int in_stack_00000018;
  int in_stack_0000001c;
  uint in_stack_00000024;
  
  func_0x00e87f70();
  if (in_stack_00000024 == 0) {
    return 1;
  }
  uVar3 = in_stack_00000024;
  if (0x7ffffff < in_stack_00000024) {
    uVar3 = 0x8000000;
  }
  do {
    if (in_stack_00000024 < uVar3) {
      return 1;
    }
    uStack00000004 = 0;
    if (uVar3 * 8 != 0) {
      do {
        bVar1 = (byte)uStack00000004;
        uVar4 = uStack00000004 >> 3;
        uVar2 = FUN_00bc39e0(in_stack_00000018);
        uVar2 = func_0x00bc36f0(in_stack_00000018,in_stack_00000018 + 0x20,uVar2);
        func_0x00c79f00(&stack0x00000003,&stack0x00000002,1,1,uVar2);
        uStack00000004 = uStack00000004 + 1;
        *(byte *)(uVar4 + in_stack_0000001c) =
             0U >> (bVar1 & 7) | ~(byte)(0x80 >> (bVar1 & 7)) & *(byte *)(uVar4 + in_stack_0000001c)
        ;
      } while (uStack00000004 < uVar3 * 8);
    }
    in_stack_00000024 = in_stack_00000024 - uVar3;
    in_stack_0000001c = in_stack_0000001c + uVar3;
    uVar4 = in_stack_00000024;
    if (uVar3 <= in_stack_00000024) {
      uVar4 = uVar3;
    }
    uVar3 = uVar4;
  } while (in_stack_00000024 != 0);
  return 1;
}



undefined4 FUN_00c39b00(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      uVar1 = FUN_00bc39e0(param_1);
      uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
      func_0x00c79f00(param_3,param_2,8,0x40000000,uVar1);
      uVar2 = uVar2 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar2 != 0) {
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
    func_0x00c79f00(param_3,param_2,8,uVar2,uVar1);
  }
  return 1;
}



undefined4 FUN_00c39c00(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)func_0x00bc36f0(param_1);
  puVar1[0x60] = 0;
  func_0x00c7a5b0(param_2,puVar1);
  func_0x00c7a5b0(param_2 + 8,puVar1 + 0x20);
  puVar3 = puVar1 + 0x40;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}



undefined4 FUN_00c39c50(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc36f0(param_1);
  *(undefined4 *)(iVar1 + 0x180) = 0;
  func_0x00c7a5b0(param_2,iVar1);
  func_0x00c7a5b0(param_2 + 8,iVar1 + 0x80);
  func_0x00c7a5b0(param_2 + 0x10,iVar1 + 0x100);
  return 1;
}



undefined4 FUN_00c39ca0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = func_0x00bc3840(param_1);
  if (-1 < iVar1) {
    iVar2 = func_0x00bc5870(param_4,iVar1);
    if (0 < iVar2) {
      func_0x00c7a7f0(param_4);
      if (0xf < iVar1) {
        func_0x00c7a7f0(param_4 + 8);
      }
      if (0x17 < iVar1) {
        func_0x00c7a7f0(param_4 + 0x10);
      }
      return 1;
    }
  }
  return 0;
}



undefined4
FUN_00c39d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  func_0x00e87f70();
  iVar2 = func_0x00bc36d0(param_3);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_6) {
    param_4 = param_4 - param_5;
    uVar5 = 0;
    do {
      iVar2 = func_0x00bc36f0(param_3);
      iVar3 = func_0x00bc36f0(param_3);
      uVar4 = FUN_00bc39e0(param_3);
      uVar4 = func_0x00bc36f0(param_3,iVar3 + 0x80,iVar2 + 0x100,uVar4);
      func_0x00c7acd0(param_5,param_4 + param_5,uVar4);
      uVar5 = uVar5 + uVar1;
      param_5 = param_5 + uVar1;
    } while (uVar5 <= param_6 - uVar1);
  }
  return 1;
}



undefined4
FUN_00c39dc0(uint param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  func_0x00e87f70();
  uVar6 = param_6;
  iVar1 = param_3;
  iVar7 = param_5;
  if (param_6 < 0x40000000) {
    param_6 = param_4;
  }
  else {
    param_1 = param_6 >> 0x1e;
    param_6 = param_4;
    do {
      uVar2 = func_0x00bc3930(iVar1);
      iVar3 = func_0x00bc36f0(iVar1);
      iVar4 = func_0x00bc36f0(iVar1);
      uVar5 = func_0x00bc36f0(iVar1,iVar4 + 0x80,iVar3 + 0x100,iVar1 + 0x20,&stack0x00000000);
      iVar3 = param_6;
      func_0x00c7b750(iVar7,param_6,0x40000000,uVar5);
      func_0x00bc3aa0(iVar1,uVar2);
      param_6 = iVar3 + 0x40000000;
      uVar6 = uVar6 + 0xc0000000;
      iVar7 = iVar7 + 0x40000000;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    param_1 = 0;
  }
  if (uVar6 != 0) {
    param_1 = func_0x00bc3930(iVar1);
    iVar3 = func_0x00bc36f0(iVar1);
    iVar4 = func_0x00bc36f0(iVar1);
    uVar2 = func_0x00bc36f0(iVar1,iVar4 + 0x80,iVar3 + 0x100,iVar1 + 0x20,&param_1);
    func_0x00c7b750(iVar7,param_6,uVar6,uVar2);
    func_0x00bc3aa0(iVar1,param_1);
  }
  return 1;
}



undefined4
FUN_00c39ee0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  func_0x00e87f70();
  iVar2 = func_0x00bc36f0(param_3);
  iVar1 = param_3 + 0x20;
  if (*(code **)(iVar2 + 0x180) != (code *)0x0) {
    (**(code **)(iVar2 + 0x180))(param_5,param_4,param_6,iVar2,iVar1);
    return 1;
  }
  if (0x3fffffff < param_6) {
    uVar4 = param_6 >> 0x1e;
    do {
      uVar3 = FUN_00bc39e0(param_3);
      func_0x004199c0(param_5,param_4,0x40000000,iVar2,iVar2 + 0x80,iVar2 + 0x100,iVar1,uVar3);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_6 != 0) {
    uVar3 = FUN_00bc39e0(param_3);
    func_0x004199c0(param_5,param_4,param_6,iVar2,iVar2 + 0x80,iVar2 + 0x100,iVar1,uVar3);
  }
  return 1;
}



undefined4
FUN_00c39fd0(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  func_0x00e87f70();
  uVar5 = param_7;
  iVar1 = param_4;
  iVar6 = param_6;
  if (param_7 < 0x40000000) {
    param_7 = param_5;
  }
  else {
    param_2 = param_7 >> 0x1e;
    param_7 = param_5;
    do {
      param_1 = func_0x00bc3930(iVar1);
      iVar2 = func_0x00bc36f0(iVar1);
      iVar3 = func_0x00bc36f0(iVar1);
      uVar4 = FUN_00bc39e0(iVar1);
      uVar4 = func_0x00bc36f0(iVar1,iVar3 + 0x80,iVar2 + 0x100,iVar1 + 0x20,&param_1,uVar4);
      iVar2 = param_7;
      func_0x00c7ad90(iVar6,param_7,0x40000000,uVar4);
      func_0x00bc3aa0(iVar1,param_1);
      iVar6 = iVar6 + 0x40000000;
      param_7 = iVar2 + 0x40000000;
      uVar5 = uVar5 + 0xc0000000;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_2 = 0;
  }
  if (uVar5 != 0) {
    param_2 = func_0x00bc3930(iVar1);
    iVar2 = func_0x00bc36f0(iVar1);
    iVar3 = func_0x00bc36f0(iVar1);
    uVar4 = FUN_00bc39e0(iVar1);
    uVar4 = func_0x00bc36f0(iVar1,iVar3 + 0x80,iVar2 + 0x100,iVar1 + 0x20,&param_2,uVar4);
    func_0x00c7ad90(iVar6,param_7,uVar5,uVar4);
    func_0x00bc3aa0(iVar1,param_2);
  }
  return 1;
}



undefined4 FUN_00c3a120(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  iVar2 = func_0x00bc3b60(in_stack_00000010,0x2000);
  uVar5 = in_stack_0000001c * 8;
  if (iVar2 != 0) {
    uVar5 = in_stack_0000001c;
  }
  in_stack_0000001c = 0;
  if (uVar5 != 0) {
    do {
      bVar1 = (byte)in_stack_0000001c;
      uVar6 = in_stack_0000001c >> 3;
      iVar2 = func_0x00bc36f0(in_stack_00000010);
      iVar3 = func_0x00bc36f0(in_stack_00000010);
      uVar4 = FUN_00bc39e0(in_stack_00000010);
      uVar4 = func_0x00bc36f0(in_stack_00000010,iVar3 + 0x80,iVar2 + 0x100,in_stack_00000010 + 0x20,
                              uVar4);
      func_0x00c7afa0(&stack0x00000003,&stack0x00000002,1,1,uVar4);
      in_stack_0000001c = in_stack_0000001c + 1;
      *(byte *)(in_stack_00000014 + uVar6) =
           0U >> (bVar1 & 7) | ~(byte)(0x80 >> (bVar1 & 7)) & *(byte *)(in_stack_00000014 + uVar6);
    } while (in_stack_0000001c < uVar5);
  }
  return 1;
}



undefined4
FUN_00c3a230(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = param_6;
  func_0x00e87f70();
  if (param_6 < 0x40000000) {
    param_6 = param_4;
  }
  else {
    param_1 = param_6 >> 0x1e;
    param_6 = param_4;
    do {
      iVar1 = func_0x00bc36f0(param_3);
      iVar2 = func_0x00bc36f0(param_3);
      uVar3 = FUN_00bc39e0(param_3);
      uVar3 = func_0x00bc36f0(param_3,iVar2 + 0x80,iVar1 + 0x100,param_3 + 0x20,uVar3);
      func_0x00c7afa0(param_5,param_6,8,0x40000000,uVar3);
      param_5 = param_5 + 0x40000000;
      param_6 = param_6 + 0x40000000;
      uVar4 = uVar4 + 0xc0000000;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  if (uVar4 != 0) {
    iVar1 = func_0x00bc36f0(param_3);
    iVar2 = func_0x00bc36f0(param_3);
    uVar3 = FUN_00bc39e0(param_3);
    uVar3 = func_0x00bc36f0(param_3,iVar2 + 0x80,iVar1 + 0x100,param_3 + 0x20,uVar3);
    func_0x00c7afa0(param_5,param_6,8,uVar4,uVar3);
  }
  return 1;
}



void FUN_00c3a350(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  uint in_stack_0000002c;
  int in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  uint in_stack_00000040;
  
  func_0x00e87f70();
  uVar4 = in_stack_00000040;
  puVar7 = in_stack_0000003c;
  puVar3 = in_stack_00000038;
  iVar2 = in_stack_00000034;
  in_stack_0000002c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((0x3fffffff < in_stack_00000040) || ((in_stack_00000040 & 7) != 0)) {
    FUN_008ab370();
    return;
  }
  iVar5 = func_0x00baa460(in_stack_00000038,in_stack_0000003c,in_stack_00000040);
  if (iVar5 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_des3.c",400,"des_ede3_wrap_cipher");
    func_0x00bc5160(6,0xa2,0);
    FUN_008ab370();
    return;
  }
  iVar5 = FUN_00bc39e0(iVar2);
  if (iVar5 != 0) {
    if (puVar3 == (undefined4 *)0x0) {
      FUN_008ab370();
      return;
    }
    func_0x008ab0e6(puVar3 + 2,puVar7,uVar4);
    iVar5 = func_0x00c7ac40(puVar7,uVar4,&stack0x00000018);
    if (iVar5 != 0) {
      *(undefined4 *)((int)puVar3 + uVar4 + 8) = in_stack_00000018;
      *(undefined4 *)((int)puVar3 + uVar4 + 0xc) = in_stack_0000001c;
      func_0x00401320(&stack0x00000018,0x14);
      puVar7 = (undefined4 *)(iVar2 + 0x20);
      iVar5 = func_0x00bc5330(puVar7,8);
      if (0 < iVar5) {
        uVar1 = *(undefined4 *)(iVar2 + 0x24);
        *puVar3 = *puVar7;
        puVar3[1] = uVar1;
        FUN_00c39ee0(iVar2,puVar3 + 2,puVar3 + 2,uVar4 + 8);
        func_0x00c1eb00(puVar3,0,uVar4 + 0x10);
        *puVar7 = 0x2ca2dd4a;
        *(undefined4 *)(iVar2 + 0x24) = 0x521e879;
        FUN_00c39ee0(iVar2,puVar3,puVar3,uVar4 + 0x10);
        FUN_008ab370();
        return;
      }
    }
    FUN_008ab370();
    return;
  }
  if (uVar4 < 0x18) {
    FUN_008ab370();
    return;
  }
  if (puVar3 == (undefined4 *)0x0) {
    FUN_008ab370();
    return;
  }
  *(undefined4 *)(iVar2 + 0x20) = 0x2ca2dd4a;
  *(undefined4 *)(iVar2 + 0x24) = 0x521e879;
  FUN_00c39ee0(iVar2,&stack0x00000008,puVar7,8);
  if (puVar3 == puVar7) {
    func_0x008ab0e6(puVar3,puVar3 + 2,uVar4 - 8);
    puVar7 = puVar7 + -2;
  }
  iVar5 = uVar4 - 0x10;
  FUN_00c39ee0(iVar2,puVar3,puVar7 + 2,iVar5);
  FUN_00c39ee0(iVar2,&stack0x00000010,(uVar4 - 8) + (int)puVar7,8);
  func_0x00c1eb00(&stack0x00000008,0,8);
  func_0x00c1eb00(puVar3,0,iVar5);
  func_0x00c1eb00(iVar2 + 0x20,&stack0x00000010,8);
  FUN_00c39ee0(iVar2,puVar3,puVar3,iVar5);
  FUN_00c39ee0(iVar2,&stack0x00000008,&stack0x00000008,8);
  iVar6 = func_0x00c7ac40(puVar3,iVar5,&stack0x00000018);
  iVar8 = -1;
  if (iVar6 != 0) {
    iVar6 = func_0x00401390(&stack0x00000018,&stack0x00000008,8);
    if (iVar6 == 0) {
      iVar8 = iVar5;
    }
  }
  func_0x00401320(&stack0x00000008,8);
  func_0x00401320(&stack0x00000018,0x14);
  func_0x00401320(&stack0x00000010,8);
  func_0x00401320(iVar2 + 0x20,8);
  if (iVar8 == -1) {
    func_0x00401320(puVar3,iVar5);
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00c3a700(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc36f0(param_1);
  func_0x00c7a5b0(param_2,uVar1);
  iVar2 = func_0x00bc36f0(param_1);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar2 + 0x84) = uVar1;
  iVar2 = func_0x00bc36f0(param_1);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar2 + 0x88) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar2 + 0x8c) = uVar1;
  return 1;
}



undefined4
FUN_00c3a760(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = param_6;
  func_0x00e87f70();
  if (param_6 < 0x40000000) {
    param_6 = param_4;
  }
  else {
    param_1 = param_6 >> 0x1e;
    param_6 = param_4;
    do {
      iVar1 = func_0x00bc36f0(param_3);
      iVar2 = func_0x00bc36f0(param_3);
      uVar3 = FUN_00bc39e0(param_3);
      uVar3 = func_0x00bc36f0(param_3,param_3 + 0x20,iVar2 + 0x80,iVar1 + 0x88,uVar3);
      func_0x00c7b930(param_5,param_6,0x40000000,uVar3);
      param_5 = param_5 + 0x40000000;
      param_6 = param_6 + 0x40000000;
      uVar4 = uVar4 + 0xc0000000;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  if (uVar4 != 0) {
    iVar1 = func_0x00bc36f0(param_3);
    iVar2 = func_0x00bc36f0(param_3);
    uVar3 = FUN_00bc39e0(param_3);
    uVar3 = func_0x00bc36f0(param_3,param_3 + 0x20,iVar2 + 0x80,iVar1 + 0x88,uVar3);
    func_0x00c7b930(param_5,param_6,uVar4,uVar3);
  }
  return 1;
}



undefined4 FUN_00c3a890(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc3840(param_1);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = func_0x00bc36f0(param_1,iVar1,param_2);
  func_0x004171a0(uVar2);
  return 1;
}



undefined4 FUN_00c3a8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc36f0(param_1,param_4,param_3,param_2);
  func_0x00416e80(uVar1);
  return 1;
}



undefined4 FUN_00c3a920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = func_0x00bc36f0(param_1);
  iVar2 = func_0x00bc3840(param_1);
  if (iVar2 < 1) {
    return 0;
  }
  func_0x004171a0(iVar1,iVar2,param_2);
  puVar4 = (undefined4 *)(iVar1 + 0x408);
  func_0x00bb4130(puVar4);
  *(undefined4 *)(iVar1 + 0x51c) = 0xffffffff;
  puVar3 = puVar4;
  puVar5 = (undefined4 *)(iVar1 + 0x464);
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)(iVar1 + 0x4c0);
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}



void FUN_00c3a990(void)

{
  size_t _Size;
  undefined4 uVar1;
  void *_Dst;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *_Src;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  void *in_stack_00000028;
  void *in_stack_0000002c;
  size_t in_stack_00000030;
  
  func_0x00e87f70();
  _Src = in_stack_0000002c;
  _Dst = in_stack_00000028;
  uVar1 = in_stack_00000024;
  in_stack_0000001c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bc36f0(in_stack_00000024);
  _Size = *(size_t *)(iVar3 + 0x51c);
  if ((_Size != 0xffffffff) && (in_stack_00000030 != _Size + 0x10)) {
LAB_00c3ab24:
    FUN_008ab370();
    return;
  }
  iVar4 = FUN_00bc39e0(uVar1);
  sVar2 = in_stack_00000030;
  if (iVar4 == 0) {
    func_0x00416e80(iVar3,in_stack_00000030,_Src,_Dst);
    if (_Size == 0xffffffff) {
      FUN_00bb4190(iVar3 + 0x4c0,_Dst,sVar2);
    }
    else {
      FUN_00bb4190(iVar3 + 0x4c0,_Dst,_Size);
      func_0x00bb4010(&stack0x0000000c,iVar3 + 0x4c0);
      puVar6 = (undefined4 *)(iVar3 + 0x464);
      puVar7 = (undefined4 *)(iVar3 + 0x4c0);
      for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00bb4190((undefined4 *)(iVar3 + 0x4c0),&stack0x0000000c,0x10);
      func_0x00bb4010(&stack0x0000000c,iVar3 + 0x4c0);
      iVar4 = func_0x00401390(_Size + (int)_Dst,&stack0x0000000c,0x10);
      if (iVar4 != 0) goto LAB_00c3ab24;
    }
  }
  else if (_Size == 0xffffffff) {
    FUN_00bb4190(iVar3 + 0x4c0,_Src,in_stack_00000030);
    func_0x00416e80(iVar3,in_stack_00000030,_Src,_Dst);
  }
  else {
    FUN_00bb4190(iVar3 + 0x4c0,_Src,_Size);
    if (_Size != in_stack_00000030) {
      if (_Src != _Dst) {
        memcpy(_Dst,_Src,_Size);
      }
      iVar5 = (int)_Dst + _Size;
      func_0x00bb4010(iVar5,iVar3 + 0x4c0);
      puVar6 = (undefined4 *)(iVar3 + 0x464);
      puVar7 = (undefined4 *)(iVar3 + 0x4c0);
      for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00bb4190((undefined4 *)(iVar3 + 0x4c0),iVar5,0x10);
      func_0x00bb4010(iVar5,iVar3 + 0x4c0);
      _Src = _Dst;
    }
    func_0x00416e80(iVar3,in_stack_00000030,_Src,_Dst);
  }
  *(undefined4 *)(iVar3 + 0x51c) = 0xffffffff;
  FUN_008ab370();
  return;
}



void FUN_00c3ab70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
                 uint param_13,uint param_14,uint param_15,uint param_16,uint param_17,
                 undefined4 param_18,undefined4 param_19,int param_20,size_t param_21,void *param_22
                 )

{
  undefined4 uVar1;
  size_t _Size;
  void *_Src;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  func_0x00e87f70();
  _Src = param_22;
  _Size = param_21;
  uVar1 = param_19;
  param_17 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar2 = func_0x00bc36f0(param_19);
  if (param_20 == 0x16) {
    if (_Size == 0xd) {
      uVar4 = (uint)CONCAT11(*(undefined1 *)((int)_Src + 0xb),*(undefined1 *)((int)_Src + 0xc));
      iVar3 = FUN_00bc39e0(uVar1);
      if (iVar3 == 0) {
        if (uVar4 < 0x10) goto LAB_00c3ad51;
        uVar4 = uVar4 - 0x10;
        *(char *)((int)_Src + 0xc) = (char)uVar4;
        *(char *)((int)_Src + 0xb) = (char)(uVar4 >> 8);
      }
      *(uint *)(iVar2 + 0x51c) = uVar4;
      puVar5 = (undefined4 *)(iVar2 + 0x408);
      puVar6 = (undefined4 *)(iVar2 + 0x4c0);
      for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00bb4190((undefined4 *)(iVar2 + 0x4c0),_Src,0xd);
      FUN_008ab370();
      return;
    }
  }
  else if (param_20 == 0x17) {
    memset(&param_1,0,0x40);
    iVar3 = iVar2 + 0x408;
    if ((int)_Size < 0x41) {
      memcpy(&param_1,_Src,_Size);
    }
    else {
      func_0x00bb4130(iVar3);
      FUN_00bb4190(iVar3,_Src,_Size);
      func_0x00bb4010(&param_1,iVar3);
    }
    param_1 = param_1 ^ 0x36363636;
    param_2 = param_2 ^ 0x36363636;
    param_3 = param_3 ^ 0x36363636;
    param_4 = param_4 ^ 0x36363636;
    param_5 = param_5 ^ 0x36363636;
    param_6 = param_6 ^ 0x36363636;
    param_7 = param_7 ^ 0x36363636;
    param_8 = param_8 ^ 0x36363636;
    param_9 = param_9 ^ 0x36363636;
    param_10 = param_10 ^ 0x36363636;
    param_11 = param_11 ^ 0x36363636;
    param_12 = param_12 ^ 0x36363636;
    param_13 = param_13 ^ 0x36363636;
    param_14 = param_14 ^ 0x36363636;
    param_15 = param_15 ^ 0x36363636;
    param_16 = param_16 ^ 0x36363636;
    func_0x00bb4130(iVar3);
    FUN_00bb4190(iVar3,&param_1,0x40);
    param_1 = param_1 ^ 0x6a6a6a6a;
    param_2 = param_2 ^ 0x6a6a6a6a;
    param_3 = param_3 ^ 0x6a6a6a6a;
    param_4 = param_4 ^ 0x6a6a6a6a;
    param_5 = param_5 ^ 0x6a6a6a6a;
    param_6 = param_6 ^ 0x6a6a6a6a;
    param_7 = param_7 ^ 0x6a6a6a6a;
    param_8 = param_8 ^ 0x6a6a6a6a;
    param_9 = param_9 ^ 0x6a6a6a6a;
    param_10 = param_10 ^ 0x6a6a6a6a;
    param_11 = param_11 ^ 0x6a6a6a6a;
    param_12 = param_12 ^ 0x6a6a6a6a;
    param_13 = param_13 ^ 0x6a6a6a6a;
    param_14 = param_14 ^ 0x6a6a6a6a;
    param_15 = param_15 ^ 0x6a6a6a6a;
    param_16 = param_16 ^ 0x6a6a6a6a;
    func_0x00bb4130(iVar2 + 0x464);
    FUN_00bb4190(iVar2 + 0x464,&param_1,0x40);
    func_0x00401320(&param_1,0x40);
    FUN_008ab370();
    return;
  }
LAB_00c3ad51:
  FUN_008ab370();
  return;
}



void FUN_00c3ad80(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  int in_stack_000000ec;
  
  func_0x00e87f70();
  if (in_stack_000000ec == 0) {
    uVar1 = func_0x00bc36d0(in_stack_000000e0);
    iVar2 = func_0x00bc3c70(uVar1);
    if (iVar2 != 4) {
      uVar1 = func_0x00bc36d0(in_stack_000000e0);
      iVar2 = func_0x00bc3c70(uVar1);
      if (iVar2 != 3) {
        func_0x00c7bfe0(in_stack_000000e4,&stack0x00000000);
        uVar1 = func_0x00bc36f0(in_stack_000000e0);
        func_0x00c7bf50(&stack0x00000000,uVar1);
        func_0x00401320(&stack0x00000000,0xd8);
        goto LAB_00c3ae1a;
      }
    }
  }
  uVar1 = func_0x00bc36f0(in_stack_000000e0);
  func_0x00c7bfe0(in_stack_000000e4,uVar1);
LAB_00c3ae1a:
  FUN_008ab370();
  return;
}



undefined4 FUN_00c3ae40(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      uVar3 = func_0x00bc36f0(param_1);
      func_0x00c7bea0(param_3,param_2 + param_3,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3aea0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      uVar1 = FUN_00bc39e0(param_1);
      uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
      func_0x00c7c1b0(param_3,param_2,0x40000000,uVar1);
      uVar2 = uVar2 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar2 != 0) {
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
    func_0x00c7c1b0(param_3,param_2,uVar2,uVar1);
  }
  return 1;
}



undefined4 FUN_00c3af40(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
      func_0x00c7d0b0(param_4,param_3,0x40000000,uVar2);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
    func_0x00c7d0b0(param_4,param_3,uVar3,uVar2);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c3b010(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar3 = param_4;
  uVar4 = param_4;
  if (0x3fffffff < param_4) {
    uVar3 = 0x40000000;
  }
  do {
    if (uVar4 < uVar3) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,&param_4,uVar1);
    func_0x00c7cea0(param_3,param_2,uVar3,uVar1);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar3;
    uVar4 = uVar4 - uVar3;
    param_3 = param_3 + uVar3;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  } while (uVar4 != 0);
  return 1;
}



undefined4 FUN_00c3b0e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_0x00bc36f0(param_1);
  uVar3 = *puVar1;
  iVar2 = func_0x00bc36f0(param_1);
  uVar3 = func_0x00bc3840(param_1,param_2,uVar3);
  func_0x00c7d290(iVar2 + 4,uVar3);
  return 1;
}



undefined4 FUN_00c3b120(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  func_0x00e87f70();
  if (param_3 != 0) {
    iVar1 = func_0x00ba7910(param_2,2,0,&stack0x00000000);
    if (iVar1 < 1) {
      uVar3 = 0;
    }
    else if (unaff_retaddr == 0x80) {
      uVar3 = 0x3a;
    }
    else if (unaff_retaddr == 0x40) {
      uVar3 = 0x78;
    }
    else {
      uVar3 = 0;
      if (unaff_retaddr == 0x28) {
        uVar3 = 0xa0;
      }
    }
    uVar2 = func_0x00bc3700(param_2);
    uVar3 = func_0x00bfce80(param_3,uVar3,param_2 + 0x10,uVar2);
    return uVar3;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00c3b22b)
// WARNING: Removing unreachable block (ram,0x00c3b238)
// WARNING: Removing unreachable block (ram,0x00c3b221)
// WARNING: Removing unreachable block (ram,0x00c3b23b)
// WARNING: Removing unreachable block (ram,0x00c3b23f)
// WARNING: Removing unreachable block (ram,0x00c3b259)
// WARNING: Removing unreachable block (ram,0x00c3b26b)

void FUN_00c3b1a0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_stack_00000014;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  func_0x00e87f70();
  iVar1 = in_stack_00000020;
  in_stack_00000014 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000020 == 0) {
    FUN_008ab370();
    return;
  }
  uVar2 = func_0x00bc3700(in_stack_0000001c);
  if (0x10 < uVar2) {
    func_0x00bbf4f0("assertion failed: l <= sizeof(iv)","crypto\\evp\\e_rc2.c",0x8c);
  }
  uVar3 = func_0x00bfcd50(iVar1,&stack0x00000000,&stack0x00000004,uVar2);
  if (uVar3 == uVar2) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_rc2.c",0x7d,"rc2_magic_to_meth");
    func_0x00bc5160(6,0x6c,0);
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00c3b2d0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = func_0x00bc3840(param_1);
    piVar1 = (int *)func_0x00bc36f0(param_1);
    *piVar1 = iVar3 << 3;
    return 1;
  }
  if (param_2 == 2) {
    puVar2 = (undefined4 *)func_0x00bc36f0(param_1);
    *param_4 = *puVar2;
    return 1;
  }
  if (param_2 != 3) {
    return 0xffffffff;
  }
  if (0 < param_3) {
    piVar1 = (int *)func_0x00bc36f0(param_1);
    *piVar1 = param_3;
    return 1;
  }
  return 0;
}



undefined4 FUN_00c3b350(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    param_5 = param_5 >> 0x1e;
    do {
      iVar1 = func_0x00bc36f0(param_2);
      uVar2 = FUN_00bc39e0(param_2);
      func_0x00c7d450(param_4,param_3,0x40000000,iVar1 + 4,param_2 + 0x20,uVar2);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      param_5 = param_5 - 1;
    } while (param_5 != 0);
  }
  if (uVar3 != 0) {
    iVar1 = func_0x00bc36f0(param_2);
    uVar2 = FUN_00bc39e0(param_2);
    func_0x00c7d450(param_4,param_3,uVar3,iVar1 + 4,param_2 + 0x20,uVar2);
  }
  return 1;
}



undefined4 FUN_00c3b400(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar4 = param_4;
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar4 < uVar5) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    iVar1 = func_0x00bc36f0(param_1);
    uVar2 = FUN_00bc39e0(param_1);
    func_0x00c7dbb0(param_3,param_2,uVar5,iVar1 + 4,param_1 + 0x20,&param_4,uVar2);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar5;
    uVar4 = uVar4 - uVar5;
    param_3 = param_3 + uVar5;
    uVar3 = uVar4;
    if (uVar5 <= uVar4) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar4 != 0);
  return 1;
}



undefined4 FUN_00c3b490(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      iVar2 = func_0x00bc36f0(param_1);
      uVar3 = FUN_00bc39e0(param_1);
      func_0x00c7d390(param_3,param_2 + param_3,iVar2 + 4,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3b500(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      iVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
      func_0x00c7ddb0(param_4,param_3,0x40000000,iVar2 + 4);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    iVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
    func_0x00c7ddb0(param_4,param_3,uVar3,iVar2 + 4);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c3b630(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc3840(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = func_0x00bc36f0(param_1,iVar1,param_2);
  func_0x00c7df80(uVar2);
  return 1;
}



undefined4 FUN_00c3b670(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      uVar1 = FUN_00bc39e0(param_1);
      uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
      func_0x0041ac00(param_3,param_2,0x40000000,uVar1);
      uVar2 = uVar2 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar2 != 0) {
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
    func_0x0041ac00(param_3,param_2,uVar2,uVar1);
  }
  return 1;
}



undefined4 FUN_00c3b710(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar3 = param_4;
  uVar4 = param_4;
  if (0x3fffffff < param_4) {
    uVar3 = 0x40000000;
  }
  do {
    if (uVar4 < uVar3) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,&param_4,uVar1);
    func_0x00c7e130(param_3,param_2,uVar3,uVar1);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar3;
    uVar4 = uVar4 - uVar3;
    param_3 = param_3 + uVar3;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  } while (uVar4 != 0);
  return 1;
}



undefined4 FUN_00c3b7a0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      uVar3 = FUN_00bc39e0(param_1);
      uVar3 = func_0x00bc36f0(param_1,uVar3);
      func_0x00c7e070(param_3,param_2 + param_3,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3b810(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
      func_0x00c7e330(param_4,param_3,0x40000000,uVar2);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
    func_0x00c7e330(param_4,param_3,uVar3,uVar2);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c3b920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc3840(param_1);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = func_0x00bc36f0(param_1,iVar1,param_2);
  func_0x00c7e4f0(uVar2);
  return 1;
}



undefined4 FUN_00c3b960(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      uVar1 = FUN_00bc39e0(param_1);
      uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
      func_0x00c7f830(param_3,param_2,0x40000000,uVar1);
      uVar2 = uVar2 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar2 != 0) {
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
    func_0x00c7f830(param_3,param_2,uVar2,uVar1);
  }
  return 1;
}



undefined4 FUN_00c3ba00(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar3 = param_4;
  uVar4 = param_4;
  if (0x3fffffff < param_4) {
    uVar3 = 0x40000000;
  }
  do {
    if (uVar4 < uVar3) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,&param_4,uVar1);
    func_0x00c80550(param_3,param_2,uVar3,uVar1);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar3;
    uVar4 = uVar4 - uVar3;
    param_3 = param_3 + uVar3;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  } while (uVar4 != 0);
  return 1;
}



undefined4 FUN_00c3ba90(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      uVar3 = FUN_00bc39e0(param_1);
      uVar3 = func_0x00bc36f0(param_1,uVar3);
      func_0x00c7f770(param_3,param_2 + param_3,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3bb00(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
      func_0x00c80750(param_4,param_3,0x40000000,uVar2);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
    func_0x00c80750(param_4,param_3,uVar3,uVar2);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c3bc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc36d0(param_1);
  iVar2 = func_0x00bc3c70(uVar1);
  if ((param_4 == 0) && ((iVar2 == 1 || (iVar2 == 2)))) {
    iVar2 = func_0x00bc3840(param_1);
    uVar1 = func_0x00bc36f0(param_1);
    iVar2 = func_0x00c80fa0(param_2,iVar2 << 3,uVar1);
  }
  else {
    iVar2 = func_0x00bc3840(param_1);
    uVar1 = func_0x00bc36f0(param_1);
    iVar2 = func_0x00c811f0(param_2,iVar2 << 3,uVar1);
  }
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aria.c",0x4c,"aria_init_key");
    func_0x00bc5160(6,0xb0,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00c3bcb0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      iVar1 = FUN_00bc39e0(param_1);
      uVar2 = func_0x00bc36f0(param_1);
      if (iVar1 == 0) {
        func_0x00bcc480(param_3,param_2,0x40000000,uVar2,param_1 + 0x20,FUN_00c80910);
      }
      else {
        func_0x00bcc780();
      }
      uVar3 = uVar3 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar3 != 0) {
    iVar1 = FUN_00bc39e0(param_1);
    uVar2 = func_0x00bc36f0(param_1);
    if (iVar1 != 0) {
      func_0x00bcc780();
      return 1;
    }
    func_0x00bcc480(param_3,param_2,uVar3,uVar2,param_1 + 0x20,FUN_00c80910);
  }
  return 1;
}



undefined4 FUN_00c3bd90(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar4 = param_4;
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar4 < uVar5) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    uVar1 = FUN_00bc39e0(param_1);
    uVar2 = func_0x00bc36f0(param_1);
    func_0x00bcce30(param_3,param_2,uVar5,uVar2,param_1 + 0x20,&param_4,uVar1,FUN_00c80910);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar5;
    uVar4 = uVar4 - uVar5;
    param_3 = param_3 + uVar5;
    uVar3 = uVar4;
    if (uVar5 <= uVar4) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar4 != 0);
  return 1;
}



undefined4 FUN_00c3be30(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      FUN_00bc39e0(param_1);
      uVar3 = func_0x00bc36f0(param_1);
      FUN_00c80910(param_3,param_2 + param_3,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3bea0(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = func_0x00bc36f0(param_2);
      func_0x00bccc10(param_4,param_3,0x40000000,uVar2,param_2 + 0x20,&param_5,FUN_00c80910);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = func_0x00bc36f0(param_2);
    func_0x00bccc10(param_4,param_3,uVar3,uVar2,param_2 + 0x20,&param_5,FUN_00c80910);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c3bf70(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = param_4;
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  do {
    if (uVar5 < uVar6) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    iVar1 = func_0x00bc3b60(param_1,0x2000);
    uVar2 = FUN_00bc39e0(param_1);
    uVar3 = func_0x00bc36f0(param_1);
    uVar4 = uVar6 * 8;
    if (iVar1 != 0) {
      uVar4 = uVar6;
    }
    func_0x00bccd40(param_3,param_2,uVar4,uVar3,param_1 + 0x20,&param_4,uVar2,FUN_00c80910);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar6;
    uVar5 = uVar5 - uVar6;
    param_3 = param_3 + uVar6;
    uVar4 = uVar5;
    if (uVar6 <= uVar5) {
      uVar4 = uVar6;
    }
    uVar6 = uVar4;
  } while (uVar5 != 0);
  return 1;
}



undefined4 FUN_00c3c030(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar4 = param_4;
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar4 < uVar5) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    uVar1 = FUN_00bc39e0(param_1);
    uVar2 = func_0x00bc36f0(param_1);
    func_0x00bccde0(param_3,param_2,uVar5,uVar2,param_1 + 0x20,&param_4,uVar1,FUN_00c80910);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar5;
    uVar4 = uVar4 - uVar5;
    param_3 = param_3 + uVar5;
    uVar3 = uVar4;
    if (uVar5 <= uVar4) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar4 != 0);
  return 1;
}



undefined4
FUN_00c3c0d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc3930(param_2);
  uVar2 = func_0x00bc36f0(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,FUN_00c80910);
  func_0x00bcc940(param_4,param_3,param_5,uVar2,param_2 + 0x20,uVar3);
  func_0x00bc3aa0(param_2,iVar1);
  return 1;
}



undefined4 FUN_00c3c150(undefined4 param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x118) == 0) {
      memcpy(*(void **)(iVar1 + 0x2d0),param_3,*(size_t *)(iVar1 + 0x2d4));
    }
    else {
      func_0x00bce560(iVar1 + 0x120);
    }
    *(undefined4 *)(iVar1 + 0x11c) = 1;
    *(undefined4 *)(iVar1 + 0x2dc) = 0;
    return 1;
  }
  iVar2 = func_0x00bc3840(param_1,iVar1);
  iVar2 = func_0x00c811f0(param_2,iVar2 << 3);
  func_0x00bce4f0(iVar1 + 0x120,iVar1,FUN_00c80910);
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aria.c",0xe6,"aria_gcm_init_key");
    func_0x00bc5160(6,0xb0,0);
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(iVar1 + 0x11c) != 0 && (param_3 = *(void **)(iVar1 + 0x2d0), param_3 != (void *)0x0)
      ))) {
    func_0x00bce560(iVar1 + 0x120,param_3,*(undefined4 *)(iVar1 + 0x2d4));
    *(undefined4 *)(iVar1 + 0x11c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x118) = 1;
  return 1;
}



undefined4 FUN_00c3c270(undefined4 *param_1,undefined4 param_2,size_t param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar11;
  uint uVar12;
  size_t sVar13;
  int iVar10;
  
  iVar4 = func_0x00bc36f0(param_1);
  switch(param_2) {
  case 0:
    *(undefined4 *)(iVar4 + 0x118) = 0;
    *(undefined4 *)(iVar4 + 0x11c) = 0;
    uVar5 = func_0x00bc2520(*param_1);
    *(undefined4 *)(iVar4 + 0x2d4) = uVar5;
    *(undefined4 *)(iVar4 + 0x2d8) = 0xffffffff;
    *(undefined4 **)(iVar4 + 0x2d0) = param_1 + 8;
    *(undefined4 *)(iVar4 + 0x2dc) = 0;
    *(undefined4 *)(iVar4 + 0x2e0) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    iVar7 = func_0x00bc36f0(param_4);
    if (*(int *)(iVar4 + 0x298) != 0) {
      if (*(int *)(iVar4 + 0x298) != iVar4) {
        return 0;
      }
      *(int *)(iVar7 + 0x298) = iVar7;
    }
    if (*(undefined4 **)(iVar4 + 0x2d0) == param_1 + 8) {
      *(undefined8 **)(iVar7 + 0x2d0) = param_4 + 4;
      return 1;
    }
    pvVar6 = (void *)FUN_00bbc4f0(*(undefined4 *)(iVar4 + 0x2d4),"crypto\\evp\\e_aria.c",0x181);
    *(void **)(iVar7 + 0x2d0) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      memcpy(pvVar6,*(void **)(iVar4 + 0x2d0),*(size_t *)(iVar4 + 0x2d4));
      return 1;
    }
    break;
  case 9:
    if (0 < (int)param_3) {
      if ((0x10 < (int)param_3) && (*(int *)(iVar4 + 0x2d4) < (int)param_3)) {
        if (*(undefined4 **)(iVar4 + 0x2d0) != param_1 + 8) {
          FUN_00bbc580(*(undefined4 **)(iVar4 + 0x2d0),"crypto\\evp\\e_aria.c",0x119);
        }
        iVar7 = FUN_00bbc4f0(param_3,"crypto\\evp\\e_aria.c",0x11a);
        *(int *)(iVar4 + 0x2d0) = iVar7;
        if (iVar7 == 0) {
          return 0;
        }
      }
      *(size_t *)(iVar4 + 0x2d4) = param_3;
      return 1;
    }
    break;
  case 0x10:
    if (((param_3 - 1 < 0x10) && (iVar7 = FUN_00bc39e0(param_1), iVar7 != 0)) &&
       (-1 < *(int *)(iVar4 + 0x2d8))) {
      pvVar6 = (void *)func_0x00bc36c0(param_1);
      memcpy(param_4,pvVar6,param_3);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1 < 0x10) && (iVar7 = FUN_00bc39e0(param_1), iVar7 == 0)) {
      sVar13 = param_3;
      pvVar6 = (void *)func_0x00bc36c0(param_1);
      memcpy(pvVar6,param_4,sVar13);
      *(size_t *)(iVar4 + 0x2d8) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 0xffffffff) {
      memcpy(*(void **)(iVar4 + 0x2d0),param_4,*(size_t *)(iVar4 + 0x2d4));
      *(undefined4 *)(iVar4 + 0x2dc) = 1;
      return 1;
    }
    if ((3 < (int)param_3) && (7 < (int)(*(int *)(iVar4 + 0x2d4) - param_3))) {
      memcpy(*(void **)(iVar4 + 0x2d0),param_4,param_3);
      iVar7 = FUN_00bc39e0(param_1);
      if ((iVar7 == 0) ||
         (iVar7 = func_0x00bc5330(*(int *)(iVar4 + 0x2d0) + param_3,
                                  *(int *)(iVar4 + 0x2d4) - param_3), 0 < iVar7)) {
        *(undefined4 *)(iVar4 + 0x2dc) = 1;
        return 1;
      }
    }
    break;
  case 0x13:
    if ((*(int *)(iVar4 + 0x2dc) != 0) && (*(int *)(iVar4 + 0x118) != 0)) {
      func_0x00bce560(iVar4 + 0x120,*(undefined4 *)(iVar4 + 0x2d0),*(undefined4 *)(iVar4 + 0x2d4));
      sVar13 = *(size_t *)(iVar4 + 0x2d4);
      if (((int)param_3 < 1) || ((int)sVar13 < (int)param_3)) {
        param_3 = sVar13;
      }
      memcpy(param_4,(void *)((*(int *)(iVar4 + 0x2d0) - param_3) + sVar13),param_3);
      iVar7 = *(int *)(iVar4 + 0x2d0);
      iVar3 = *(int *)(iVar4 + 0x2d4);
      iVar10 = 8;
      do {
        iVar9 = iVar10 + -1;
        pcVar1 = (char *)(iVar10 + -9 + iVar7 + iVar3);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 != '\0') break;
        iVar10 = iVar9;
      } while (iVar9 != 0);
      *(undefined4 *)(iVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar8 = (undefined8 *)func_0x00bc36c0(param_1);
      *puVar8 = *param_4;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((int)puVar8 + 0xc) = *(undefined1 *)((int)param_4 + 0xc);
      *(undefined4 *)(iVar4 + 0x2e0) = 0xd;
      iVar4 = func_0x00bc36c0(param_1);
      uVar2 = *(undefined1 *)(iVar4 + 0xb);
      iVar4 = func_0x00bc36c0(param_1);
      uVar11 = (uint)CONCAT11(uVar2,*(undefined1 *)(iVar4 + 0xc));
      if (7 < uVar11) {
        uVar12 = uVar11 - 8;
        iVar4 = FUN_00bc39e0(param_1);
        if (iVar4 == 0) {
          if (uVar12 < 0x10) {
            return 0;
          }
          uVar12 = uVar11 - 0x18;
        }
        iVar4 = func_0x00bc36c0(param_1);
        *(char *)(iVar4 + 0xb) = (char)(uVar12 >> 8);
        iVar4 = func_0x00bc36c0(param_1);
        *(char *)(iVar4 + 0xc) = (char)uVar12;
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(iVar4 + 0x2dc) != 0) && (*(int *)(iVar4 + 0x118) != 0)) &&
       (iVar7 = FUN_00bc39e0(param_1), iVar7 == 0)) {
      memcpy((void *)((*(int *)(iVar4 + 0x2d4) - param_3) + *(int *)(iVar4 + 0x2d0)),param_4,param_3
            );
      func_0x00bce560(iVar4 + 0x120,*(undefined4 *)(iVar4 + 0x2d0),*(undefined4 *)(iVar4 + 0x2d4));
      *(undefined4 *)(iVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(iVar4 + 0x2d4);
    return 1;
  }
  return 0;
}



uint FUN_00c3c730(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc36f0(param_2);
  if (*(int *)(iVar1 + 0x118) != 0) {
    if (-1 < *(int *)(iVar1 + 0x2e0)) {
      iVar1 = func_0x00bc36f0(param_2);
      uVar5 = 0xffffffff;
      if ((param_3 == param_4) && (0x17 < param_5)) {
        iVar2 = FUN_00bc39e0(param_2,8,param_3);
        iVar2 = func_0x00ba7910(param_2,(-(uint)(iVar2 != 0) & 0xfffffffb) + 0x18);
        uVar6 = uVar5;
        if (0 < iVar2) {
          iVar2 = iVar1 + 0x120;
          uVar3 = func_0x00bc36c0(param_2,*(undefined4 *)(iVar1 + 0x2e0));
          iVar4 = func_0x00bcd4a0(iVar2,uVar3);
          if (iVar4 == 0) {
            uVar7 = param_5 - 0x18;
            iVar4 = FUN_00bc39e0(param_2);
            if (iVar4 == 0) {
              iVar4 = func_0x00bcd5a0(iVar2,param_4 + 8,param_3 + 8,uVar7);
              if (iVar4 == 0) {
                uVar3 = func_0x00bc36c0(param_2,0x10);
                func_0x00bce740(iVar2,uVar3);
                uVar3 = func_0x00bc36c0(param_2,param_4 + 8 + uVar7,0x10);
                iVar2 = func_0x00401390(uVar3);
                uVar6 = uVar7;
                if (iVar2 != 0) {
                  func_0x00401320(param_3 + 8,uVar7);
                  uVar6 = uVar5;
                }
              }
            }
            else {
              iVar4 = func_0x00bcdcc0(iVar2,param_4 + 8,param_3 + 8);
              if (iVar4 == 0) {
                func_0x00bce740(iVar2,param_3 + 8 + uVar7,0x10);
                uVar6 = param_5;
              }
            }
          }
        }
        *(undefined4 *)(iVar1 + 0x11c) = 0;
        *(undefined4 *)(iVar1 + 0x2e0) = 0xffffffff;
        return uVar6;
      }
      return 0xffffffff;
    }
    if (*(int *)(iVar1 + 0x11c) != 0) {
      if (param_4 == 0) {
        iVar2 = FUN_00bc39e0(param_2);
        if (iVar2 != 0) {
          uVar3 = func_0x00bc36c0(param_2,0x10);
          func_0x00bce740(iVar1 + 0x120,uVar3);
          *(undefined4 *)(iVar1 + 0x2d8) = 0x10;
          *(undefined4 *)(iVar1 + 0x11c) = 0;
          return 0;
        }
        if (-1 < *(int *)(iVar1 + 0x2d8)) {
          uVar3 = func_0x00bc36c0(param_2,*(int *)(iVar1 + 0x2d8));
          iVar2 = func_0x00bce3a0(iVar1 + 0x120,uVar3);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar1 + 0x11c) = 0;
            return 0;
          }
        }
      }
      else {
        if (param_3 == 0) {
          iVar1 = func_0x00bcd4a0(iVar1 + 0x120,param_4,param_5);
        }
        else {
          iVar2 = FUN_00bc39e0(param_2);
          if (iVar2 == 0) {
            iVar1 = func_0x00bcd5a0(iVar1 + 0x120,param_4,param_3,param_5);
          }
          else {
            iVar1 = func_0x00bcdcc0();
          }
        }
        if (iVar1 == 0) {
          return param_5;
        }
      }
    }
  }
  return 0xffffffff;
}



undefined4 FUN_00c3c9b0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (*(int *)(iVar1 + 0x2d0) != param_1 + 0x20) {
    FUN_00bbc580(*(int *)(iVar1 + 0x2d0),"crypto\\evp\\e_aria.c",0x1f7);
  }
  return 1;
}



undefined4 FUN_00c3c9f0(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_00c3caa5;
  iVar2 = func_0x00bc3840(param_1,iVar1);
  iVar2 = func_0x00c811f0(param_2,iVar2 << 3);
  func_0x00bcf8b0(iVar1 + 0x138,*(undefined4 *)(iVar1 + 300),*(undefined4 *)(iVar1 + 0x128),iVar1,
                  FUN_00c80910);
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aria.c",0x20c,"aria_ccm_init_key");
    func_0x00bc5160(6,0xb0,0);
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x168) = 0;
  *(undefined4 *)(iVar1 + 0x118) = 1;
  if (param_3 == (void *)0x0) {
    return 1;
  }
LAB_00c3caa5:
  memcpy((void *)(param_1 + 0x20),param_3,0xf - *(int *)(iVar1 + 0x128));
  *(undefined4 *)(iVar1 + 0x11c) = 1;
  return 1;
}



undefined4 FUN_00c3cae0(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  void *_Dst;
  uint _Size;
  
  iVar3 = func_0x00bc36f0(param_1);
  switch(param_2) {
  case 0:
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined4 *)(iVar3 + 0x128) = 8;
    *(undefined4 *)(iVar3 + 300) = 0xc;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x130) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    iVar5 = func_0x00bc36f0(param_4);
    if (*(int *)(iVar3 + 0x164) != 0) {
      if (*(int *)(iVar3 + 0x164) != iVar3) {
        return 0;
      }
      *(int *)(iVar5 + 0x164) = iVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
    goto LAB_00c3cc57;
  case 0x10:
    iVar5 = FUN_00bc39e0(param_1);
    if (((iVar5 != 0) && (*(int *)(iVar3 + 0x120) != 0)) &&
       (iVar5 = func_0x00bcf970(iVar3 + 0x138,param_4,param_3), iVar5 != 0)) {
      *(undefined4 *)(iVar3 + 0x120) = 0;
      *(undefined4 *)(iVar3 + 0x11c) = 0;
      *(undefined4 *)(iVar3 + 0x124) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((param_3 & 1) == 0) && (param_3 - 4 < 0xd)) {
      iVar5 = FUN_00bc39e0(param_1);
      if (param_4 != (int *)0x0) {
        if (iVar5 != 0) {
          return 0;
        }
        *(undefined4 *)(iVar3 + 0x120) = 1;
        _Size = param_3;
        _Dst = (void *)func_0x00bc36c0(param_1);
        memcpy(_Dst,param_4,_Size);
      }
      *(uint *)(iVar3 + 300) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      *(int *)(param_1 + 0x20) = *param_4;
      return 1;
    }
    break;
  case 0x14:
LAB_00c3cc57:
    if (param_3 - 2 < 7) {
      *(uint *)(iVar3 + 0x128) = param_3;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)func_0x00bc36c0(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((int)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(iVar3 + 0x130) = 0xd;
      iVar5 = func_0x00bc36c0(param_1);
      uVar1 = *(undefined1 *)(iVar5 + 0xb);
      iVar5 = func_0x00bc36c0(param_1);
      uVar2 = CONCAT11(uVar1,*(undefined1 *)(iVar5 + 0xc));
      if (7 < uVar2) {
        uVar2 = uVar2 - 8;
        iVar5 = FUN_00bc39e0(param_1);
        if (iVar5 == 0) {
          if ((int)(uint)uVar2 < *(int *)(iVar3 + 300)) {
            return 0;
          }
          uVar2 = uVar2 - (short)*(int *)(iVar3 + 300);
        }
        iVar5 = func_0x00bc36c0(param_1);
        *(char *)(iVar5 + 0xb) = (char)(uVar2 >> 8);
        iVar5 = func_0x00bc36c0(param_1);
        *(char *)(iVar5 + 0xc) = (char)uVar2;
        return *(undefined4 *)(iVar3 + 300);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(iVar3 + 0x128);
    return 1;
  }
  return 0;
}



void FUN_00c3cdb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  func_0x00e87f70();
  iVar7 = in_stack_00000024;
  iVar1 = in_stack_00000020;
  iVar4 = in_stack_0000001c;
  in_stack_00000014 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bc36f0(in_stack_0000001c);
  if (*(int *)(iVar3 + 0x118) == 0) {
LAB_00c3d045:
    FUN_008ab370();
    return;
  }
  if (-1 < *(int *)(iVar3 + 0x130)) {
    func_0x00c3d210(iVar4,iVar1,iVar7,in_stack_00000028);
    FUN_008ab370();
    return;
  }
  if ((iVar7 == 0) && (iVar1 != 0)) {
    FUN_008ab370();
    return;
  }
  if (*(int *)(iVar3 + 0x11c) == 0) goto LAB_00c3d045;
  if (iVar1 == 0) {
    if (iVar7 == 0) {
      iVar4 = func_0x00bcf900(iVar3 + 0x138,iVar4 + 0x20,0xf - *(int *)(iVar3 + 0x128),
                              in_stack_00000028);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar3 + 0x124) = 1;
        FUN_008ab370();
        return;
      }
    }
    else if ((*(int *)(iVar3 + 0x124) != 0) || (in_stack_00000028 == 0)) {
      func_0x00bced50(iVar3 + 0x138,iVar7,in_stack_00000028);
      FUN_008ab370();
      return;
    }
    goto LAB_00c3d045;
  }
  iVar5 = FUN_00bc39e0(iVar4);
  iVar2 = in_stack_00000028;
  if ((iVar5 == 0) && (*(int *)(iVar3 + 0x120) == 0)) goto LAB_00c3d045;
  if (*(int *)(iVar3 + 0x124) == 0) {
    iVar5 = func_0x00bcf900(iVar3 + 0x138,iVar4 + 0x20,0xf - *(int *)(iVar3 + 0x128),
                            in_stack_00000028);
    if (iVar5 != 0) goto LAB_00c3d045;
    *(undefined4 *)(iVar3 + 0x124) = 1;
  }
  iVar6 = FUN_00bc39e0(iVar4);
  iVar5 = *(int *)(iVar3 + 0x168);
  if (iVar6 != 0) {
    if (iVar5 == 0) {
      iVar4 = func_0x00bcf200(iVar3 + 0x138,iVar7,iVar1,iVar2);
    }
    else {
      iVar4 = func_0x00bcf570(iVar3 + 0x138,iVar7,iVar1,iVar2,iVar5);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x120) = 1;
      FUN_008ab370();
      return;
    }
    goto LAB_00c3d045;
  }
  if (iVar5 == 0) {
    iVar7 = func_0x00bcee40(iVar3 + 0x138,iVar7,iVar1,iVar2);
  }
  else {
    iVar7 = func_0x00bcf050(iVar3 + 0x138,iVar7,iVar1,iVar2,iVar5);
  }
  if ((iVar7 == 0) &&
     (iVar7 = func_0x00bcf970(iVar3 + 0x138,&stack0x00000004,*(undefined4 *)(iVar3 + 300)),
     iVar7 != 0)) {
    uVar8 = func_0x00bc36c0(iVar4,*(undefined4 *)(iVar3 + 300));
    iVar4 = func_0x00401390(&stack0x00000004,uVar8);
    if ((iVar4 == 0) && (iVar2 != -1)) goto LAB_00c3d012;
  }
  func_0x00401320(iVar1,iVar2);
LAB_00c3d012:
  *(undefined4 *)(iVar3 + 0x11c) = 0;
  *(undefined4 *)(iVar3 + 0x120) = 0;
  *(undefined4 *)(iVar3 + 0x124) = 0;
  FUN_008ab370();
  return;
}



undefined4 FUN_00c3d420(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar1 = func_0x00bc36f0(param_1);
  iVar2 = func_0x00bc3840(param_1,iVar1);
  iVar2 = func_0x0041c020(param_2,iVar2 << 3);
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_camellia.c",0xc9,"camellia_init_key");
    func_0x00bc5160(6,0x9d,0);
    return 0;
  }
  uVar3 = func_0x00bc36d0(param_1);
  iVar2 = func_0x00bc3c70(uVar3);
  if (((iVar2 == 1) || (iVar2 == 2)) && (param_4 == 0)) {
    puVar5 = &LAB_0041b310;
  }
  else {
    puVar5 = &LAB_0041aee0;
  }
  puVar4 = (undefined1 *)0x0;
  *(undefined1 **)(iVar1 + 0x118) = puVar5;
  if (iVar2 == 2) {
    puVar4 = &LAB_0041d0c0;
  }
  *(undefined1 **)(iVar1 + 0x11c) = puVar4;
  return 1;
}



undefined4 FUN_00c3d4e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = func_0x00bc36f0(param_1);
  if (*(int *)(iVar2 + 0x11c) != 0) {
    pcVar1 = *(code **)(iVar2 + 0x11c);
    uVar3 = FUN_00bc39e0(param_1);
    (*pcVar1)(param_3,param_2,param_4,iVar2,param_1 + 0x20,uVar3);
    return 1;
  }
  iVar4 = FUN_00bc39e0(param_1);
  if (iVar4 != 0) {
    func_0x00bcc780();
    return 1;
  }
  func_0x00bcc480(param_3,param_2,param_4,iVar2,param_1 + 0x20,*(undefined4 *)(iVar2 + 0x118));
  return 1;
}



undefined4 FUN_00c3d570(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar1 = func_0x00bc36e0(param_2);
  iVar2 = func_0x00bc36f0(param_2);
  if (uVar1 <= param_5) {
    uVar3 = 0;
    param_3 = param_3 - param_4;
    do {
      (**(code **)(iVar2 + 0x118))(param_4,param_3 + param_4,iVar2);
      uVar3 = uVar3 + uVar1;
      param_4 = param_4 + uVar1;
    } while (uVar3 <= param_5 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3d5e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  func_0x00bccc10(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,*(undefined4 *)(iVar2 + 0x118)
                 );
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4 FUN_00c3d630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  uVar3 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0x118));
  func_0x00bcce30(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,uVar3);
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4 FUN_00c3d690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  uVar3 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0x118));
  func_0x00bccde0(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,uVar3);
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4
FUN_00c3d6f0(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  func_0x00e87f70();
  iVar1 = param_4;
  iVar2 = func_0x00bc36f0(param_4);
  iVar3 = func_0x00bc3b60(iVar1,0x2000);
  if (iVar3 != 0) {
    uVar4 = func_0x00bc3930(iVar1);
    uVar5 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0x118));
    func_0x00bccd40(param_6,param_5,param_7,iVar2,iVar1 + 0x20,&stack0x00000000,uVar5);
    func_0x00bc3aa0(iVar1,uVar4);
    return 1;
  }
  iVar3 = param_6;
  iVar6 = param_5;
  uVar7 = param_7;
  if (0xfffffff < param_7) {
    param_2 = param_7 >> 0x1c;
    do {
      param_1 = func_0x00bc3930(iVar1);
      uVar4 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0x118));
      func_0x00bccd40(iVar3,iVar6,0x80000000,iVar2,iVar1 + 0x20,&param_1,uVar4);
      func_0x00bc3aa0(iVar1,param_1);
      uVar7 = uVar7 + 0xf0000000;
      iVar6 = iVar6 + 0x10000000;
      iVar3 = iVar3 + 0x10000000;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (uVar7 != 0) {
    param_2 = func_0x00bc3930(iVar1);
    uVar4 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0x118));
    func_0x00bccd40(iVar3,iVar6,uVar7 * 8,iVar2,iVar1 + 0x20,&param_2,uVar4);
    func_0x00bc3aa0(iVar1,param_2);
  }
  return 1;
}



undefined4
FUN_00c3d850(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc3930(param_2);
  iVar2 = func_0x00bc36f0(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x11c) == 0) {
    uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,*(undefined4 *)(iVar2 + 0x118));
    func_0x00bcc940(param_4,param_3,param_5,iVar2,param_2 + 0x20,uVar3);
  }
  else {
    uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,*(int *)(iVar2 + 0x11c));
    func_0x00bcca60(param_4,param_3,param_5,iVar2,param_2 + 0x20,uVar3);
  }
  func_0x00bc3aa0(param_2,iVar1);
  return 1;
}



undefined4 FUN_00c3da50(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  
  iVar4 = *(int *)(param_1 + 100);
  if (param_2 != 0) {
    puVar6 = (undefined2 *)(param_2 + 2);
    do {
      uVar5 = *puVar6;
      puVar1 = (undefined1 *)((int)puVar6 + -1);
      puVar2 = puVar6 + -1;
      uVar3 = (-2 - param_2) + (int)puVar6;
      puVar6 = puVar6 + 2;
      *(uint *)(iVar4 + (uVar3 & 0xfffffffc)) =
           CONCAT31(CONCAT21(uVar5,*puVar1),*(undefined1 *)puVar2);
    } while ((uint)((-2 - param_2) + (int)puVar6) < 0x20);
  }
  if (param_3 != 0) {
    puVar6 = (undefined2 *)(param_3 + 2);
    do {
      uVar5 = *puVar6;
      puVar1 = (undefined1 *)((int)puVar6 + -1);
      puVar2 = puVar6 + -1;
      uVar3 = (-2 - param_3) + (int)puVar6;
      puVar6 = puVar6 + 2;
      *(uint *)(iVar4 + 0x20 + (uVar3 & 0xfffffffc)) =
           CONCAT31(CONCAT21(uVar5,*puVar1),*(undefined1 *)puVar2);
    } while ((uint)((-2 - param_3) + (int)puVar6) < 0x10);
  }
  *(undefined4 *)(iVar4 + 0x70) = 0;
  return 1;
}



undefined4 FUN_00c3db00(void)

{
  int *piVar1;
  void *_Dst;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int in_stack_00000014;
  byte *in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_00000020;
  
  func_0x00e87f70();
  iVar5 = *(int *)(in_stack_00000014 + 100);
  uVar7 = *(uint *)(iVar5 + 0x70);
  if (uVar7 != 0) {
    if (in_stack_00000020 != 0) {
      pbVar9 = (byte *)(iVar5 + 0x30 + uVar7);
      do {
        if (0x3f < uVar7) break;
        bVar4 = *pbVar9;
        uVar7 = uVar7 + 1;
        pbVar9 = pbVar9 + 1;
        *in_stack_00000018 = bVar4 ^ *in_stack_0000001c;
        in_stack_0000001c = in_stack_0000001c + 1;
        in_stack_00000018 = in_stack_00000018 + 1;
        in_stack_00000020 = in_stack_00000020 - 1;
      } while (in_stack_00000020 != 0);
    }
    *(uint *)(iVar5 + 0x70) = uVar7;
    if (in_stack_00000020 == 0) {
      return 1;
    }
    if (uVar7 == 0x40) {
      *(undefined4 *)(iVar5 + 0x70) = 0;
      piVar1 = (int *)(iVar5 + 0x20);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
      }
    }
  }
  uVar6 = in_stack_00000020 & 0x3f;
  in_stack_00000020 = in_stack_00000020 - uVar6;
  uVar7 = *(uint *)(iVar5 + 0x20);
  while (0x3f < in_stack_00000020) {
    uVar8 = in_stack_00000020 >> 6;
    uVar2 = uVar8 + uVar7;
    uVar11 = 0;
    if (uVar8 <= uVar2) {
      uVar11 = uVar2;
    }
    uVar7 = -uVar7;
    if (uVar8 <= uVar2) {
      uVar7 = uVar8;
    }
    iVar10 = uVar7 * 0x40;
    func_0x0041d440(in_stack_00000018,in_stack_0000001c,iVar10,iVar5,iVar5 + 0x20);
    in_stack_00000020 = in_stack_00000020 + uVar7 * -0x40;
