

undefined4 FUN_00c6b440(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0xe) {
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x24) = param_3;
  return 1;
}



undefined4
FUN_00c6b460(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    *param_7 = 0;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x338,"conn_sendmmsg");
    func_0x00bc5160(0x20,0xc0102,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (*piVar1 != 5) {
    iVar2 = func_0x00c6b640(param_1,piVar1);
    if (iVar2 < 1) {
      *param_7 = 0;
      return 0;
    }
  }
  if (piVar1[10] == 0) {
    *param_7 = 0;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x347,"conn_sendmmsg");
    func_0x00bc5160(0x20,0xc0101,0);
    return 0;
  }
  uVar3 = func_0x00bab480(piVar1[10],param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar3;
}



undefined4
FUN_00c6b530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    *param_7 = 0;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x357,"conn_recvmmsg");
    func_0x00bc5160(0x20,0xc0102,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (*piVar1 != 5) {
    iVar2 = func_0x00c6b640(param_1,piVar1);
    if (iVar2 < 1) {
      *param_7 = 0;
      return 0;
    }
  }
  if (piVar1[10] == 0) {
    *param_7 = 0;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x366,"conn_recvmmsg");
    func_0x00bc5160(0x20,0xc0101,0);
    return 0;
  }
  uVar3 = func_0x00bab290(piVar1[10],param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar3;
}



undefined4 FUN_00c6c2d0(undefined4 param_1,char *param_2,int param_3,int *param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  
  func_0x00e87f70();
  pcVar1 = param_2;
  pcVar6 = (char *)0x0;
  pcVar7 = (char *)0x0;
  if (param_2 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar5 = 0;
  pcVar2 = param_2;
  iVar4 = param_3;
  if (0 < param_3) {
    do {
      if (*pcVar2 == ':') {
        pcVar7 = pcVar2 + 1;
        pcVar6 = param_2 + (param_3 - (int)pcVar7);
        iVar4 = (int)pcVar2 - (int)param_2;
        break;
      }
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 1;
    } while (iVar5 < param_3);
  }
  uVar3 = func_0x00c6c5f0(param_2,iVar4);
  if (uVar3 == 0xffffffff) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\asn1_gen.c",0x10b,"asn1_cb");
    func_0x00bc5160(0xd,0xc2,"tag=%s",pcVar1);
    return 0xffffffff;
  }
  if ((uVar3 & 0x10000) == 0) {
    param_4[2] = uVar3;
    param_4[4] = (int)pcVar7;
    if ((pcVar7 == (char *)0x0) && (pcVar1[iVar4] != '\0')) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\asn1\\asn1_gen.c",0x115,"asn1_cb");
      func_0x00bc5160(0xd,0xbd,0);
      return 0xffffffff;
    }
    return 0;
  }
  switch(uVar3) {
  case 0x10001:
    if (*param_4 != -1) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\asn1\\asn1_gen.c",0x120,"asn1_cb");
      func_0x00bc5160(0xd,0xb5,0);
      return 0xffffffff;
    }
    iVar4 = func_0x00c6d0e0(pcVar7,pcVar6,param_4,param_4 + 1);
    break;
  case 0x10002:
    iVar4 = func_0x00c6d0e0(pcVar7,pcVar6,&stack0x00000000,&param_2);
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    iVar4 = func_0x00c6c1e0(param_4,unaff_retaddr,param_2,1,0,0);
    break;
  default:
    goto LAB_00c6c419;
  case 0x10004:
    iVar4 = func_0x00c6c1e0(param_4,3,0,0,1,1);
    break;
  case 0x10005:
    iVar4 = func_0x00c6c1e0(param_4,4,0,0,0,1);
    if (iVar4 != 0) {
      return 1;
    }
    return 0xffffffff;
  case 0x10006:
    iVar4 = func_0x00c6c1e0(param_4,0x10,0,1,0,1);
    break;
  case 0x10007:
    iVar4 = func_0x00c6c1e0(param_4,0x11,0,1,0,1);
    break;
  case 0x10008:
    if (pcVar7 == (char *)0x0) {
      FUN_00bc4f50();
      uVar8 = 0x145;
    }
    else {
      iVar4 = func_0x008ab040(pcVar7,&DAT_0108b0b8,5);
      if (iVar4 == 0) {
        param_4[3] = 1;
        return 1;
      }
      iVar4 = func_0x008ab040(pcVar7,&DAT_011a2654,4);
      if (iVar4 == 0) {
        param_4[3] = 2;
        return 1;
      }
      iVar4 = func_0x008ab040(pcVar7,&DAT_0108b0c0,3);
      if (iVar4 == 0) {
        param_4[3] = 3;
        return 1;
      }
      iVar4 = func_0x008ab040(pcVar7,"BITLIST",7);
      if (iVar4 == 0) {
        param_4[3] = 4;
        return 1;
      }
      FUN_00bc4f50();
      uVar8 = 0x151;
    }
    func_0x00bc5050("crypto\\asn1\\asn1_gen.c",uVar8,"asn1_cb");
    func_0x00bc5160(0xd,0xa0,0);
    return 0xffffffff;
  }
  if (iVar4 == 0) {
    return 0xffffffff;
  }
LAB_00c6c419:
  return 1;
}



undefined4 FUN_00c6cb70(char *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    iVar2 = func_0x00e87983(param_1,&param_1,10);
    if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_1 == pcVar1 + param_2)) {
      if (-1 < iVar2) {
        iVar2 = func_0x00c25500(param_3,iVar2,1);
        if (iVar2 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\asn1\\asn1_gen.c",0x2f5,"bitstr_cb");
          func_0x00bc5160(0xd,0x8000d,0);
          return 0;
        }
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\asn1\\asn1_gen.c",0x2f1,"bitstr_cb");
      func_0x00bc5160(0xd,0xbb,0);
    }
  }
  return 0;
}



undefined4 FUN_00c6d070(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (param_2 == 3) {
      iVar1 = func_0x008ab040(param_1,&DAT_0108b114,3);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 0x2906;
        return 1;
      }
    }
    uVar2 = func_0x00c6c5f0(param_1,param_2);
    if ((uVar2 != 0) && ((uVar2 & 0x10000) == 0)) {
      uVar2 = func_0x00c09290(uVar2);
      if (uVar2 != 0) {
        *param_3 = *param_3 | uVar2;
        return 1;
      }
    }
  }
  return 0;
}



size_t FUN_00c6d830(char *param_1,size_t param_2,int param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  size_t _Size;
  
  if (param_4 != (char *)0x0) {
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar4 - (int)(param_4 + 1);
    if ((int)param_2 < (int)pcVar4 - (int)(param_4 + 1)) {
      _Size = param_2;
    }
    memcpy(param_1,param_4,_Size);
    return _Size;
  }
  pcVar2 = (char *)func_0x00ce0b50();
  pcVar4 = "Enter PEM pass phrase:";
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
  }
  iVar3 = func_0x00ce0b70(param_1,-(param_3 != 0) & 4,param_2,pcVar4,param_3);
  if (iVar3 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\pem\\pem_lib.c",0x3e,"PEM_def_callback");
    func_0x00bc5160(9,0x6d,0);
    memset(param_1,0,param_2);
    return 0xffffffff;
  }
  pcVar4 = param_1 + 1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (int)param_1 - (int)pcVar4;
}



undefined4 FUN_00c6f550(int param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *_Dst;
  
  iVar2 = *(int *)(param_1 + 0x170);
  if (param_3 == 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x18c) != 3) && (*(int *)(param_1 + 0x18c) != 2)) {
    _Dst = (undefined1 *)(param_1 + 200 + *(int *)(param_1 + 0x178));
    memset(_Dst,0,iVar2 - *(int *)(param_1 + 0x178));
    *_Dst = *(undefined1 *)(param_1 + 0x17c);
    pbVar1 = (byte *)(iVar2 + 199 + param_1);
    *pbVar1 = *pbVar1 | 0x80;
    func_0x00ce1540(param_1,param_1 + 200,iVar2,iVar2);
    *(undefined4 *)(param_1 + 0x18c) = 2;
    func_0x00ce1760(param_1,param_2,param_3,iVar2,0);
    return 1;
  }
  return 0;
}



undefined4 FUN_00c6f690(void *param_1,void *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *_Dst;
  uint _Size;
  uint uVar6;
  
  uVar6 = param_3;
  iVar3 = (int)param_1;
  uVar2 = *(uint *)((int)param_1 + 0x170);
  uVar5 = *(uint *)((int)param_1 + 0x178);
  if (param_3 == 0) {
    return 1;
  }
  if (*(int *)((int)param_1 + 0x18c) == 2) {
    return 0;
  }
  if (*(int *)((int)param_1 + 0x18c) == 3) {
    uVar4 = 1;
    param_3 = 1;
    if (uVar5 != 0) {
      _Size = uVar6;
      if (uVar5 < uVar6) {
        _Size = uVar5;
      }
      memcpy(param_2,(void *)((uVar2 - uVar5) + 200 + (int)param_1),_Size);
      *(int *)((int)param_1 + 0x178) = *(int *)((int)param_1 + 0x178) - _Size;
      uVar4 = 1;
      param_3 = 1;
      uVar6 = uVar6 - _Size;
      param_1 = (void *)((int)param_2 + _Size);
      if (uVar6 == 0) {
        return 1;
      }
      goto LAB_00c6f723;
    }
  }
  else {
    _Dst = (undefined1 *)((int)param_1 + 200 + uVar5);
    memset(_Dst,0,uVar2 - uVar5);
    *_Dst = *(undefined1 *)((int)param_1 + 0x17c);
    pbVar1 = (byte *)((int)param_1 + 199 + uVar2);
    *pbVar1 = *pbVar1 | 0x80;
    func_0x00ce1540(param_1,(int)param_1 + 200,uVar2,uVar2);
    *(undefined4 *)((int)param_1 + 0x18c) = 3;
    uVar4 = 0;
    *(undefined4 *)((int)param_1 + 0x178) = 0;
    param_3 = 0;
  }
  param_1 = param_2;
LAB_00c6f723:
  uVar5 = uVar6;
  if (uVar2 <= uVar6) {
    uVar5 = uVar6 % uVar2;
    func_0x00ce1760(iVar3,param_1,uVar6 - uVar5,uVar2,param_3);
    uVar4 = 1;
    param_1 = (void *)((int)param_1 + (uVar6 - uVar5));
  }
  if (uVar5 != 0) {
    func_0x00ce1760(iVar3,(void *)(iVar3 + 200),uVar2,uVar2,uVar4);
    memcpy(param_1,(void *)(iVar3 + 200),uVar5);
    *(uint *)(iVar3 + 0x178) = uVar2 - uVar5;
  }
  return 1;
}



undefined4 FUN_00c6ffd0(undefined1 param_1,int *param_2)

{
  *(undefined1 *)*param_2 = param_1;
  *param_2 = *param_2 + 1;
  return 1;
}



undefined4 FUN_00c6fff0(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = (char)((uint)param_1 >> 8);
  puVar1[1] = (char)param_1;
  *param_2 = *param_2 + 2;
  return 1;
}



undefined4 FUN_00c70010(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = (char)((uint)param_1 >> 0x18);
  puVar1[1] = (char)((uint)param_1 >> 0x10);
  puVar1[2] = (char)((uint)param_1 >> 8);
  puVar1[3] = (char)param_1;
  *param_2 = *param_2 + 4;
  return 1;
}



undefined4 FUN_00c70040(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00c6fa30(*param_2,0xff,param_1);
  *param_2 = *param_2 + iVar1;
  return 1;
}



int FUN_00c70070(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00c6fa30(0,0xffffffff,param_1);
  if (0 < iVar1) {
    *param_2 = *param_2 + iVar1;
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 FUN_00c70180(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_1;
  if (0x7fffffff < param_1) {
    uVar3 = 0x7fffffff;
  }
  if ((uVar2 & 1) != 0) {
    iVar1 = func_0x00bd12b0(uVar3);
    if ((iVar1 == 0) && (uVar3 != 0x20)) {
      uVar2 = uVar2 & 0xfffffffe;
    }
  }
  if ((uVar2 & 2) != 0) {
    iVar1 = func_0x00bd12d0(uVar3,0x800);
    if (iVar1 == 0) {
      uVar2 = uVar2 & 0xfffffffd;
    }
  }
  if (((uVar2 & 0x10) != 0) && ((uVar3 & 0xffffff80) != 0)) {
    uVar2 = uVar2 & 0xffffffef;
  }
  if (((uVar2 & 4) != 0) && (0xff < param_1)) {
    uVar2 = uVar2 & 0xfffffffb;
  }
  if (((uVar2 & 0x800) != 0) && (0xffff < param_1)) {
    uVar2 = uVar2 & 0xfffff7ff;
  }
  if (((uVar2 & 0x2000) != 0) && ((0x10ffff < param_1 || (param_1 - 0xd800 < 0x800)))) {
    uVar2 = uVar2 & 0xffffdfff;
  }
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  *param_2 = uVar2;
  return 1;
}



uint FUN_00c70250(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  uint *puVar1;
  uint *puVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  uint uVar7;
  
  func_0x00e87f70();
  uVar7 = 0;
  if ((((param_3 == (void *)0x0) || (param_4 == 0)) ||
      (puVar2 = *(uint **)(param_2 + 0x28), puVar2 == (uint *)0x0)) ||
     (*(int *)(param_2 + 0x2c) == 0)) {
    return 0;
  }
  func_0x00baa700(param_2,0xf);
  puVar1 = puVar2 + 4;
  while( true ) {
    sVar3 = puVar2[3];
    if (sVar3 != 0) {
      _Size = param_4;
      if ((int)sVar3 <= (int)param_4) {
        _Size = sVar3;
      }
      memcpy(param_3,(void *)(*puVar1 + puVar2[2]),_Size);
      puVar2[3] = puVar2[3] - _Size;
      uVar7 = uVar7 + _Size;
      *puVar1 = *puVar1 + _Size;
      if (param_4 == _Size) {
        return uVar7;
      }
      param_4 = param_4 - _Size;
      param_3 = (void *)((int)param_3 + _Size);
    }
    iVar4 = *puVar1 + 0xfff + param_4;
    uVar6 = (iVar4 >> 0x1f & 0xfffU) + iVar4 & 0xfffff000;
    if ((int)*puVar2 < (int)uVar6) {
      uVar5 = FUN_00bbc5a0(puVar2[2],uVar6,"crypto\\bio\\bf_readbuff.c",0x61);
      if (uVar5 == 0) {
        return 0;
      }
      puVar2[2] = uVar5;
      *puVar2 = uVar6;
    }
    uVar6 = func_0x00bab230(*(undefined4 *)(param_2 + 0x2c),puVar2[4] + puVar2[2],param_4);
    if ((int)uVar6 < 1) break;
    puVar2[3] = uVar6;
  }
  func_0x00baa710(param_2);
  if ((int)uVar6 < 0) {
    if (0 < (int)uVar7) {
      uVar6 = uVar7;
    }
    return uVar6;
  }
  return uVar7;
}



int FUN_00c70380(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  func_0x00e87f70();
  iVar5 = 0;
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    param_4 = param_4 + -1;
    iVar1 = *(int *)(param_2 + 0x28);
    if ((iVar1 != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
      func_0x00baa700(param_2,0xf);
      pcVar6 = param_3;
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar3 = *(int *)(iVar1 + 8);
        iVar2 = *(int *)(iVar1 + 0x10);
        iVar5 = 0;
        do {
          if (param_4 <= iVar5) {
            *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - iVar5;
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + iVar5;
            goto LAB_00c70425;
          }
          pcVar6 = (char *)(iVar5 + iVar3 + iVar2);
          iVar5 = iVar5 + 1;
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
          if (*pcVar6 == '\n') {
            *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - iVar5;
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + iVar5;
            *param_3 = '\0';
            return iVar5;
          }
        } while (iVar5 < *(int *)(iVar1 + 0xc));
        *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - iVar5;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + iVar5;
LAB_00c70425:
        param_4 = param_4 - iVar5;
        pcVar6 = param_3;
        if (param_4 == 0) {
          *param_3 = '\0';
          return iVar5;
        }
      }
      iVar3 = func_0x00c706d0(iVar1,param_4 + 1);
      if (iVar3 != 0) {
        pcVar4 = (char *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x10));
        param_3 = (char *)0x0;
        if (0 < param_4) {
          do {
            iVar3 = func_0x00bab230(*(undefined4 *)(param_2 + 0x2c),pcVar4,1);
            if (iVar3 < 1) {
              func_0x00baa710(param_2);
              *pcVar6 = '\0';
              if (0 < iVar5) {
                iVar3 = iVar5;
              }
              return iVar3;
            }
            iVar5 = iVar5 + 1;
            *pcVar6 = *pcVar4;
            pcVar6 = pcVar6 + 1;
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            if (*pcVar4 == '\n') break;
            pcVar4 = pcVar4 + 1;
            param_3 = (char *)((int)param_3 + 1);
          } while ((int)param_3 < param_4);
        }
        *pcVar6 = '\0';
        return iVar5;
      }
    }
  }
  return 0;
}



int FUN_00c704d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  switch(param_2) {
  case 1:
  case 0x80:
    if ((-1 < param_3) && (iVar2 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0xc), param_3 <= iVar2)
       ) {
      *(int *)(iVar1 + 0x10) = param_3;
      *(int *)(iVar1 + 0xc) = iVar2 - param_3;
      return 1;
    }
    break;
  case 2:
    if (*(int *)(iVar1 + 0xc) < 1) {
      iVar1 = *(int *)(param_1 + 0x2c);
      if (iVar1 == 0) {
        return 1;
      }
LAB_00c70507:
      iVar1 = func_0x00baa730(iVar1,param_2,param_3,param_4);
      return iVar1;
    }
    break;
  case 3:
  case 0x85:
    return *(int *)(iVar1 + 0x10);
  default:
    return 0;
  case 10:
    if (*(int *)(iVar1 + 0xc) != 0) {
      return *(int *)(iVar1 + 0xc);
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 != 0) goto LAB_00c70507;
    break;
  case 0xb:
  case 0xc:
    return 1;
  }
  return 0;
}



undefined4 FUN_00c70600(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0x20,"crypto\\bio\\bf_readbuff.c",0x37);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    iVar2 = FUN_00bbc830(0x1000,"crypto\\bio\\bf_readbuff.c",0x3c);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(param_1 + 0x28) = puVar1;
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    FUN_00bbc580(puVar1,"crypto\\bio\\bf_readbuff.c",0x3e);
  }
  return 0;
}



undefined4 FUN_00c70670(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_00bbc580(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8),"crypto\\bio\\bf_readbuff.c",0x4f);
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x28),"crypto\\bio\\bf_readbuff.c",0x50);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}



int FUN_00c70720(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  func_0x00e87f70();
  iVar2 = func_0x00bfc8b0();
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_bitst.c",0x43,"v2i_ASN1_BIT_STRING");
    func_0x00bc5160(0x22,0x8000d,0);
    return 0;
  }
  iVar9 = 0;
  iVar3 = func_0x00bd1830(param_5);
  if (0 < iVar3) {
    do {
      iVar3 = func_0x00bd1a80(param_5,iVar9);
      puVar10 = *(undefined4 **)(param_3 + 0x34);
      pbVar7 = (byte *)puVar10[1];
      if (pbVar7 != (byte *)0x0) {
        do {
          pbVar4 = (byte *)puVar10[2];
          pbVar8 = *(byte **)(iVar3 + 4);
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00c707d0:
              uVar5 = -(uint)bVar11 | 1;
              goto LAB_00c707d5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00c707d0;
            pbVar4 = pbVar4 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_00c707d5:
          pbVar4 = *(byte **)(iVar3 + 4);
          if (uVar5 == 0) {
LAB_00c70819:
            iVar6 = func_0x00c25500(iVar2,*puVar10,1);
            if (iVar6 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\x509\\v3_bitst.c",0x4c,"v2i_ASN1_BIT_STRING");
              func_0x00bc5160(0x22,0x8000d,0);
              thunk_FUN_00bfc170(iVar2);
              return 0;
            }
            break;
          }
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_00c70800:
              uVar5 = -(uint)bVar11 | 1;
              goto LAB_00c70805;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_00c70800;
            pbVar7 = pbVar7 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_00c70805:
          if (uVar5 == 0) goto LAB_00c70819;
          pbVar7 = (byte *)puVar10[4];
          puVar10 = puVar10 + 3;
        } while (pbVar7 != (byte *)0x0);
      }
      if (puVar10[1] == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_bitst.c",0x54,"v2i_ASN1_BIT_STRING");
        func_0x00bc5160(0x22,0x6f,&DAT_0112e274,*(undefined4 *)(iVar3 + 4));
        thunk_FUN_00bfc170(iVar2);
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar3 = func_0x00bd1830(param_5);
    } while (iVar9 < iVar3);
  }
  return iVar2;
}



undefined4 FUN_00c708d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (*(undefined4 **)(param_1 + 0x34))[1];
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  while (iVar2 != 0) {
    iVar2 = func_0x00c254b0(param_2,*puVar1);
    if (iVar2 != 0) {
      func_0x00be2690(puVar1[1],0,&param_3);
    }
    iVar2 = puVar1[4];
    puVar1 = puVar1 + 3;
  }
  return param_3;
}



undefined * FUN_00c70920(void)

{
  return &DAT_0108b6f0;
}



int FUN_00c70930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = func_0x00bd1830(param_3);
  iVar2 = func_0x00bd17c0(0,iVar1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_extku.c",0x6a,"v2i_EXTENDED_KEY_USAGE");
    func_0x00bc5160(0x22,0x8000f,0);
    FUN_00bd1630(0);
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = func_0x00bd1a80(param_3,iVar4);
      iVar5 = *(int *)(iVar3 + 8);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar3 + 4);
      }
      iVar3 = func_0x00bc2c50(iVar5,0);
      if (iVar3 == 0) {
        func_0x00bd1860(iVar2,FUN_00bfb4c0);
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_extku.c",0x77,"v2i_EXTENDED_KEY_USAGE");
        func_0x00bc5160(0x22,0x6e,&DAT_0112e274,iVar5);
        return 0;
      }
      func_0x00bd18c0(iVar2,iVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar2;
}



void FUN_00c70a10(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_stack_00000054;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  
  func_0x00e87f70();
  uVar1 = in_stack_00000060;
  in_stack_00000054 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = 0;
  iVar2 = func_0x00bd1830(in_stack_00000060);
  if (0 < iVar2) {
    do {
      uVar3 = func_0x00bd1a80(uVar1,iVar4);
      func_0x00bfbbb0(&stack0x00000004,0x50,uVar3);
      func_0x00be2690(0,&stack0x00000004,&stack0x00000000);
      iVar4 = iVar4 + 1;
      iVar2 = func_0x00bd1830(uVar1);
    } while (iVar4 < iVar2);
  }
  FUN_008ab370();
  return;
}



undefined * FUN_00c70a90(void)

{
  return &DAT_0108b7b0;
}



undefined4 FUN_00c70aa0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00bbc8e0(param_3,&DAT_01058f18,param_4,&DAT_0112e1b4);
  if (*param_2 != 0) {
    func_0x00bab6e0(param_3,"Not Before: ",0xc);
    func_0x00bd2d50(param_3,*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    func_0x00bab6e0(param_3,&DAT_0112e444,2);
  }
  if (param_2[1] != 0) {
    func_0x00bab6e0(param_3,"Not After: ",0xb);
    func_0x00bd2d50(param_3,param_2[1]);
  }
  return 1;
}



undefined * FUN_00c70b20(void)

{
  return &DAT_0108b8a0;
}



undefined * FUN_00c70b30(void)

{
  return &DAT_0108b85c;
}



undefined4
FUN_00c70b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd20b0(&stack0x00000000,*param_4);
  if (((iVar1 == 0) || (param_1 + (uint)(0x7fffffff < unaff_retaddr) != 0)) ||
     (unaff_retaddr == 0x7fffffff)) {
    func_0x00bbc8e0(param_5,"%*sVersion: <unsupported>",param_6,&DAT_0112e1b4);
  }
  else {
    func_0x00bbc8e0(param_5,"%*sVersion: %ld (0x%lX)",param_6,&DAT_0112e1b4,unaff_retaddr + 1,
                    unaff_retaddr);
  }
  iVar3 = 0;
  iVar1 = func_0x00bd1830(param_4[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)func_0x00bd1a80(param_4[1],iVar3);
      iVar1 = FUN_00be3910(0,*puVar2);
      if (iVar1 == 0) {
        return 0;
      }
      func_0x00bbc8e0(param_5,"\n%*sZone: %s, User: ",param_6,&DAT_0112e1b4,iVar1);
      FUN_00bbc580(iVar1,"crypto\\x509\\v3_sxnet.c",0x54);
      func_0x00c27e80(param_5,puVar2[1]);
      iVar3 = iVar3 + 1;
      iVar1 = func_0x00bd1830(param_4[1]);
    } while (iVar3 < iVar1);
  }
  return 1;
}



undefined4 FUN_00c70c50(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_00000010;
  
  func_0x00e87f70();
  iVar4 = 0;
  iVar2 = func_0x00bd1830(in_stack_00000010);
  if (0 < iVar2) {
    do {
      iVar2 = func_0x00bd1a80(in_stack_00000010,iVar4);
      uVar1 = *(undefined4 *)(iVar2 + 8);
      iVar2 = func_0x00be3dd0(0,*(undefined4 *)(iVar2 + 4));
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_sxnet.c",0x7d,"SXNET_add_id_asc");
        func_0x00bc5160(0x22,0x83,0);
LAB_00c70cf5:
        func_0x00c08cb0(0,&DAT_0108b8a0);
        return 0;
      }
      iVar3 = func_0x00c70d10(&stack0x00000000,iVar2,uVar1,0xffffffff);
      if (iVar3 == 0) {
        thunk_FUN_00bfc170(iVar2);
        goto LAB_00c70cf5;
      }
      iVar4 = iVar4 + 1;
      iVar2 = func_0x00bd1830(in_stack_00000010);
    } while (iVar4 < iVar2);
  }
  return 0;
}



void * FUN_00c70f60(undefined4 param_1,size_t *param_2)

{
  void *_Dst;
  
  if ((param_2 != (size_t *)0x0) && (0 < (int)*param_2)) {
    _Dst = (void *)FUN_00bbc4f0(*param_2 + 1,"crypto\\x509\\v3_ia5.c",0x22);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,(void *)param_2[2],*param_2);
      *(undefined1 *)((int)_Dst + *param_2) = 0;
      return _Dst;
    }
  }
  return (void *)0x0;
}



int FUN_00c70fb0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_3 == (char *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_ia5.c",0x2e,"s2i_ASN1_IA5STRING");
    func_0x00bc5160(0x22,0x6b,0);
    return 0;
  }
  iVar2 = func_0x00bfc910();
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_ia5.c",0x32,"s2i_ASN1_IA5STRING");
    func_0x00bc5160(0x22,0x8000d,0);
    return 0;
  }
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = func_0x00bfc1f0(iVar2,param_3,(int)pcVar4 - (int)(param_3 + 1));
  if (iVar3 == 0) {
    thunk_FUN_00bfc170(iVar2);
    return 0;
  }
  return iVar2;
}



void FUN_00c71050(undefined4 param_1,undefined4 *param_2)

{
  func_0x00bbbd30(param_2[2],*param_2);
  return;
}



void FUN_00c71070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 unaff_retaddr;
  uint in_stack_00000054;
  byte *in_stack_00000060;
  byte *in_stack_00000064;
  
  func_0x00e87f70();
  pbVar2 = in_stack_00000064;
  in_stack_00000054 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  pbVar9 = &DAT_01142038;
  pbVar3 = in_stack_00000064;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_00c710b6:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_00c710bb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_00c710b6;
    pbVar3 = pbVar3 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_00c710bb:
  if (uVar4 == 0) {
    FUN_00bfc990();
    FUN_008ab370();
    return;
  }
  pbVar9 = &DAT_0108bbdc;
  pbVar3 = in_stack_00000064;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_00c71100:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_00c71105;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_00c71100;
    pbVar3 = pbVar3 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_00c71105:
  if (uVar4 != 0) {
    puVar5 = (undefined4 *)FUN_00bfc990();
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
      func_0x00bc5160(0x22,0x8000d,0);
      FUN_008ab370();
      return;
    }
    iVar6 = func_0x00bbbf00(pbVar2,&stack0x00000000);
    puVar5[2] = iVar6;
    if (iVar6 == 0) {
      thunk_FUN_00bfc170(puVar5);
      FUN_008ab370();
      return;
    }
    *puVar5 = unaff_retaddr;
    FUN_008ab370();
    return;
  }
  if (in_stack_00000060 != (byte *)0x0) {
    if ((*in_stack_00000060 & 1) != 0) {
      FUN_00bfc990();
      FUN_008ab370();
      return;
    }
    if (*(int *)(in_stack_00000060 + 8) == 0) {
      if (*(int *)(in_stack_00000060 + 0xc) == 0) goto LAB_00c71308;
      iVar6 = *(int *)(*(int *)(in_stack_00000060 + 0xc) + 0x14);
    }
    else {
      iVar6 = *(int *)(*(int *)(in_stack_00000060 + 8) + 0x2c);
    }
    if (iVar6 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_skid.c",0x43,"ossl_x509_pubkey_hash");
      func_0x00bc5160(0x22,0x72,0);
      FUN_008ab370();
      return;
    }
    iVar7 = func_0x00bddda0(&param_1,&stack0x00000000,iVar6);
    if (iVar7 != 0) {
      iVar7 = func_0x00bd4740(param_1,&DAT_0104e908,unaff_retaddr);
      if (iVar7 != 0) {
        iVar8 = FUN_00bfc990();
        if (iVar8 == 0) {
          FUN_00bd4770(iVar7);
          FUN_008ab370();
          return;
        }
        func_0x00bdd290(0,&param_3,&param_2,0,iVar6);
        iVar6 = func_0x00bd3910(param_3,param_2,&stack0x00000014,&param_4,iVar7,0);
        if (iVar6 != 0) {
          iVar6 = func_0x00bd3900(iVar8,&stack0x00000014,param_4);
          if (iVar6 != 0) {
            FUN_00bd4770(iVar7);
            FUN_008ab370();
            return;
          }
        }
        FUN_00bd4770(iVar7);
        thunk_FUN_00bfc170(iVar8);
      }
    }
    FUN_008ab370();
    return;
  }
LAB_00c71308:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\v3_skid.c",0x68,"s2i_skey_id");
  func_0x00bc5160(0x22,0x7d,0);
  FUN_008ab370();
  return;
}



undefined4 * FUN_00c714a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000010;
  
  func_0x00e87f70();
  puVar1 = (undefined4 *)FUN_00bfc990();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
    func_0x00bc5160(0x22,0x8000d,0);
    return (undefined4 *)0x0;
  }
  iVar2 = func_0x00bbbf00(in_stack_00000010,&stack0x00000000);
  puVar1[2] = iVar2;
  if (iVar2 == 0) {
    thunk_FUN_00bfc170(puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = unaff_retaddr;
  return puVar1;
}



int FUN_00c71520(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar1 = param_3;
  if (*param_2 != 0) {
    iVar2 = FUN_00c71050(0,*param_2);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_akid.c",0x31,"i2v_AUTHORITY_KEYID");
      func_0x00bc5160(0x22,0x8000d,0);
      return 0;
    }
    if ((param_2[1] == 0) && (param_2[2] == 0)) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = &DAT_01063788;
    }
    iVar4 = func_0x00be2690(puVar3,iVar2,&param_3);
    if (iVar4 == 0) {
      FUN_00bbc580(iVar2,"crypto\\x509\\v3_akid.c",0x36);
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_akid.c",0x37,"i2v_AUTHORITY_KEYID");
      func_0x00bc5160(0x22,0x8000b,0);
      goto LAB_00c71698;
    }
    FUN_00bbc580(iVar2,"crypto\\x509\\v3_akid.c",0x3a);
  }
  iVar2 = param_3;
  if ((param_2[1] == 0) || (iVar2 = FUN_00c28490(0,param_2[1],param_3), iVar2 != 0)) {
    param_3 = iVar2;
    if (param_2[2] == 0) {
      return param_3;
    }
    iVar2 = FUN_00c71050(0,param_2[2]);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_akid.c",0x47,"i2v_AUTHORITY_KEYID");
      func_0x00bc5160(0x22,0x8000d,0);
    }
    else {
      iVar4 = func_0x00be2690("serial",iVar2,&param_3);
      if (iVar4 != 0) {
        FUN_00bbc580(iVar2,"crypto\\x509\\v3_akid.c",0x4e);
        return param_3;
      }
      FUN_00bbc580(iVar2,"crypto\\x509\\v3_akid.c",0x4b);
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_akid.c",0x3f,"i2v_AUTHORITY_KEYID");
    func_0x00bc5160(0x22,0x8000b,0);
  }
LAB_00c71698:
  if (iVar1 == 0) {
    func_0x00bd1860(param_3,FUN_00be27e0);
  }
  return 0;
}



int * FUN_00c716d0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int *param_6,
                  undefined4 *param_7,uint param_8,undefined4 param_9,undefined4 param_10,
                  byte *param_11,undefined4 param_12)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  char cVar12;
  undefined4 uVar13;
  
  func_0x00e87f70();
  uVar13 = param_12;
  cVar12 = '\0';
  param_3 = param_3 & 0xffffff00;
  iVar2 = func_0x00bd1830(param_12);
  param_1 = 0;
  param_4 = 0;
  param_7 = (undefined4 *)0x0;
  param_5 = 0;
  param_2 = iVar2;
  param_6 = (int *)func_0x00c22d10();
  if (param_6 != (int *)0x0) {
    if (iVar2 == 1) {
      pbVar9 = &DAT_01142038;
      iVar2 = func_0x00bd1a80(uVar13,0);
      pbVar3 = *(byte **)(iVar2 + 4);
      do {
        bVar1 = *pbVar3;
        bVar11 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00c71764:
          uVar4 = -(uint)bVar11 | 1;
          goto LAB_00c71769;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar11 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00c71764;
        pbVar3 = pbVar3 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00c71769:
      if (uVar4 == 0) {
        return param_6;
      }
      iVar10 = 0;
LAB_00c71780:
      do {
        iVar2 = func_0x00bd1a80(uVar13,iVar10);
        pbVar3 = *(byte **)(iVar2 + 8);
        if (pbVar3 != (byte *)0x0) {
          pbVar8 = &DAT_0108bc54;
          pbVar9 = pbVar3;
          do {
            bVar1 = *pbVar9;
            bVar11 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00c717c0:
              uVar4 = -(uint)bVar11 | 1;
              goto LAB_00c717c5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar9[1];
            bVar11 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00c717c0;
            pbVar9 = pbVar9 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar4 = 0;
LAB_00c717c5:
          if (uVar4 != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_akid.c",0x7b,"v2i_AUTHORITY_KEYID");
            func_0x00bc5160(0x22,0x78,"name=%s option=%s",*(undefined4 *)(iVar2 + 4),
                            *(undefined4 *)(iVar2 + 8));
            goto LAB_00c71c89;
          }
        }
        pbVar9 = *(byte **)(iVar2 + 4);
        pbVar6 = &DAT_01063788;
        pbVar8 = pbVar9;
        do {
          bVar1 = *pbVar8;
          bVar11 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00c717f7:
            uVar4 = -(uint)bVar11 | 1;
            goto LAB_00c717fc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar11 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00c717f7;
          pbVar8 = pbVar8 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_00c717fc:
        if ((uVar4 == 0) && (cVar12 == '\0')) {
          cVar12 = (pbVar3 != (byte *)0x0) + '\x01';
        }
        else {
          pcVar7 = "issuer";
          pbVar8 = pbVar9;
          do {
            bVar1 = *pbVar8;
            bVar11 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00c71840:
              uVar4 = -(uint)bVar11 | 1;
              goto LAB_00c71845;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar11 = bVar1 < ((byte *)pcVar7)[1];
            if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00c71840;
            pbVar8 = pbVar8 + 2;
            pcVar7 = (char *)((byte *)pcVar7 + 2);
          } while (bVar1 != 0);
          uVar4 = 0;
LAB_00c71845:
          if ((uVar4 != 0) || ((char)param_3 != '\0')) {
            pbVar8 = &DAT_01142038;
            pbVar3 = pbVar9;
            goto LAB_00c718b0;
          }
          param_3 = 1;
          if (pbVar3 != (byte *)0x0) {
            param_3 = 2;
          }
        }
        iVar10 = iVar10 + 1;
        uVar13 = param_12;
      } while (iVar10 < param_2);
    }
    else {
      iVar10 = 0;
      if (0 < iVar2) goto LAB_00c71780;
    }
    pbVar3 = param_11;
    if (param_11 == (byte *)0x0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_akid.c",0x98,"v2i_AUTHORITY_KEYID");
      uVar13 = 0xc0102;
    }
    else {
      if ((*param_11 & 1) != 0) {
        return param_6;
      }
      iVar2 = *(int *)(param_11 + 4);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_akid.c",0x9c,"v2i_AUTHORITY_KEYID");
        uVar13 = 0x79;
      }
      else {
        iVar10 = *(int *)(param_11 + 8);
        param_2 = iVar10;
        FUN_00bcaeb0();
        if (*(int *)(pbVar3 + 0x1c) == 0) {
          uVar4 = (uint)(iVar10 == iVar2);
          param_8 = uVar4;
        }
        else {
          uVar4 = func_0x00bdef40(*(undefined4 *)(pbVar3 + 8),*(int *)(pbVar3 + 0x1c));
        }
        func_0x00bcad80();
        if ((cVar12 == '\x02') || ((cVar12 == '\x01' && (uVar4 == 0)))) {
          pbVar3 = pbVar3 + 0x1c;
          iVar10 = func_0x00be01f0(iVar2,0x52,0xffffffff);
          if ((iVar10 < 0) || (iVar10 = func_0x00be01d0(iVar2,iVar10), iVar10 == 0)) {
LAB_00c71aa3:
            if ((param_2 == iVar2) && (*(int *)pbVar3 != 0)) {
              param_2 = 0;
              iVar10 = func_0x00bdd2f0(&param_2,*(int *)pbVar3);
              if (iVar10 != 0) {
                param_1 = func_0x00c71340(param_2);
              }
              func_0x00bdd150(param_2);
            }
          }
          else {
            if (param_2 == iVar2) {
              if (uVar4 == 0) goto LAB_00c71aa3;
              pbVar3 = param_11 + 0x1c;
            }
            param_1 = func_0x00c28200(iVar10);
            iVar10 = FUN_00bbba70(param_1);
            if (iVar10 == 0) {
              thunk_FUN_00bfc170(param_1);
              param_1 = 0;
              goto LAB_00c71aa3;
            }
            if (param_1 == 0) goto LAB_00c71aa3;
          }
          if ((cVar12 == '\x02') && (param_1 == 0)) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_akid.c",0xbf,"v2i_AUTHORITY_KEYID");
            uVar13 = 0x7b;
            goto LAB_00c71c7f;
          }
        }
        if (((char)param_3 != '\x02') &&
           ((((char)param_3 != '\x01' || (uVar4 != 0)) || (param_1 != 0)))) {
          param_6[1] = 0;
          *param_6 = param_1;
          param_6[2] = param_5;
          return param_6;
        }
        uVar13 = func_0x00bb6140(iVar2);
        iVar10 = func_0x00bdc630(uVar13);
        param_4 = iVar10;
        uVar13 = func_0x008f5810(iVar2);
        param_5 = func_0x00bd2040(uVar13);
        if ((iVar10 != 0) && (param_5 != 0)) {
          param_3 = func_0x00bd1790();
          if ((param_3 == 0) ||
             (puVar5 = (undefined4 *)func_0x00be0560(), uVar4 = param_3, param_7 = puVar5,
             puVar5 == (undefined4 *)0x0)) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_akid.c",0xd0,"v2i_AUTHORITY_KEYID");
            func_0x00bc5160(0x22,0x8000d,0);
            uVar4 = param_3;
          }
          else {
            iVar2 = func_0x00bd18c0(param_3,puVar5);
            if (iVar2 != 0) {
              puVar5[1] = param_4;
              *puVar5 = 4;
              param_6[1] = uVar4;
              *param_6 = param_1;
              param_6[2] = param_5;
              return param_6;
            }
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_akid.c",0xd4,"v2i_AUTHORITY_KEYID");
            func_0x00bc5160(0x22,0x8000f,0);
          }
          goto LAB_00c71c8b;
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_akid.c",200,"v2i_AUTHORITY_KEYID");
        uVar13 = 0x7a;
      }
    }
LAB_00c71c7f:
    func_0x00bc5160(0x22,uVar13,0);
  }
  goto LAB_00c71c89;
  while( true ) {
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00c718d0;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
    if (bVar1 == 0) break;
LAB_00c718b0:
    bVar1 = *pbVar3;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00c718d0:
      uVar4 = -(uint)bVar11 | 1;
      goto LAB_00c718d5;
    }
    if (bVar1 == 0) break;
  }
  uVar4 = 0;
LAB_00c718d5:
  if (uVar4 != 0) {
    pbVar8 = &DAT_01063788;
    pbVar3 = pbVar9;
    do {
      bVar1 = *pbVar3;
      bVar11 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00c71904:
        uVar4 = -(uint)bVar11 | 1;
        goto LAB_00c71909;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar11 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00c71904;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00c71909:
    if (uVar4 != 0) {
      pcVar7 = "issuer";
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_00c71932:
          uVar4 = -(uint)bVar11 | 1;
          goto LAB_00c71937;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < ((byte *)pcVar7)[1];
        if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00c71932;
        pbVar9 = pbVar9 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00c71937:
      if (uVar4 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_akid.c",0x8e,"v2i_AUTHORITY_KEYID");
        func_0x00bc5160(0x22,0xac,"name=%s",*(undefined4 *)(iVar2 + 4));
        goto LAB_00c71c89;
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\v3_akid.c",0x8a,"v2i_AUTHORITY_KEYID");
  func_0x00bc5160(0x22,0xab,"name=%s",*(undefined4 *)(iVar2 + 4));
LAB_00c71c89:
  uVar4 = 0;
LAB_00c71c8b:
  FUN_00bd1630(uVar4);
  FUN_00be0540(param_7);
  FUN_00bdc650(param_4);
  thunk_FUN_00bfc170(param_5);
  thunk_FUN_00bfc170(param_1);
  func_0x00c22ce0(param_6);
  return (int *)0x0;
}



void FUN_00c71cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00be3dd0(param_1,param_3);
  return;
}



int FUN_00c71cf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = func_0x00bd1f40(param_2);
  iVar3 = (*(int **)(param_1 + 0x34))[1];
  piVar1 = *(int **)(param_1 + 0x34);
  while (iVar3 != 0) {
    if (iVar2 == *piVar1) {
      iVar3 = func_0x00bbbc70(piVar1[1],"crypto\\x509\\v3_enum.c",0x32);
      return iVar3;
    }
    iVar3 = piVar1[4];
    piVar1 = piVar1 + 3;
  }
  iVar3 = 0;
  if (param_2 == 0) {
    return param_2;
  }
  iVar2 = func_0x00bd1fd0(param_2,0);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utl.c",0xae,"i2s_ASN1_ENUMERATED");
    uVar4 = 0x8000d;
  }
  else {
    iVar3 = func_0x00be3060(iVar2);
    if (iVar3 != 0) goto LAB_00be38f8;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utl.c",0xb0,"i2s_ASN1_ENUMERATED");
    uVar4 = 0x80022;
  }
  func_0x00bc5160(0x22,uVar4,0);
LAB_00be38f8:
  FUN_00bba400(iVar2);
  return iVar3;
}



bool FUN_00c71d40(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = func_0x00bbc8e0(param_3,"%*scrlUrl: ",param_4,&DAT_0112e1b4);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = func_0x00c27e80(param_3,*param_2);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = func_0x00bab6e0(param_3,&DAT_0113d23c,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (param_2[1] != 0) {
    iVar1 = func_0x00bbc8e0(param_3,"%*scrlNum: ",param_4,&DAT_0112e1b4);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = func_0x00cd9a50(param_3,param_2[1]);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = func_0x00bab6e0(param_3,&DAT_0113d23c,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (param_2[2] == 0) {
    return true;
  }
  iVar1 = func_0x00bbc8e0(param_3,"%*scrlTime: ",param_4,&DAT_0112e1b4);
  if ((0 < iVar1) && (iVar1 = func_0x00bd2d50(param_3,param_2[2]), iVar1 != 0)) {
    iVar1 = func_0x00bab6e0(param_3,&DAT_0113d23c,1);
    return 0 < iVar1;
  }
  return false;
}



bool FUN_00c71e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bbc8e0(param_3,&DAT_01058f18,param_4,&DAT_0112e1b4);
  if (0 < iVar1) {
    iVar1 = func_0x00bd2d50(param_3,param_2);
    return iVar1 != 0;
  }
  return false;
}



bool FUN_00c71e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bbc8e0(param_3,&DAT_01058f18,param_4,&DAT_0112e1b4);
  if (0 < iVar1) {
    iVar1 = func_0x00bfba40(param_3,param_2);
    return 0 < iVar1;
  }
  return false;
}



void thunk_FUN_00bfc990(void)

{
  func_0x00bfc2f0(4);
  return;
}



size_t FUN_00c71ed0(size_t *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    memcpy((void *)*param_2,(void *)param_1[2],*param_1);
    *param_2 = *param_2 + *param_1;
    return *param_1;
  }
  return *param_1;
}



int FUN_00c71f00(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    iVar1 = FUN_00bfc990();
    if (iVar1 == 0) goto LAB_00c71f44;
  }
  iVar2 = func_0x00bd3900(iVar1,*param_2,param_3);
  if (iVar2 != 0) {
    *param_2 = *param_2 + param_3;
    if (param_1 != (int *)0x0) {
      *param_1 = iVar1;
    }
    return iVar1;
  }
LAB_00c71f44:
  if ((param_1 == (int *)0x0) || (*param_1 != iVar1)) {
    thunk_FUN_00bfc170(iVar1);
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ocsp\\v3_ocsp.c",0xce,"d2i_ocsp_nonce");
  func_0x00bc5160(0x27,0x8000d,0);
  return 0;
}



void thunk_FUN_00bfc170(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x10) == 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x16f);
    }
    if ((uVar1 & 0x80) == 0) {
      FUN_00bbc580(param_1,"crypto\\asn1\\asn1_lib.c",0x171);
    }
  }
  return;
}



bool FUN_00c71fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bbc8e0(param_3,&DAT_01058f18,param_4,&DAT_0112e1b4);
  if (0 < iVar1) {
    iVar1 = func_0x00ce1ae0(param_3,param_2,4);
    return 0 < iVar1;
  }
  return false;
}



void thunk_FUN_00bfc950(void)

{
  func_0x00c08650(&DAT_0105ce18);
  return;
}



undefined4 FUN_00c72000(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = func_0x00bbc8e0(param_3,"%*sIssuer: ",param_4,&DAT_0112e1b4);
  if ((iVar1 < 1) || (iVar1 = func_0x00c23cb0(param_3,*param_2,0,0x82031f), iVar1 < 1)) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = func_0x00bd1830(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)func_0x00bd1a80(param_2[1],iVar3);
      iVar1 = func_0x00bbc8e0(param_3,&DAT_0108bf98,param_4 * 2,&DAT_0112e1b4);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = func_0x00bfba40(param_3,*puVar2);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = func_0x00bab050(param_3,&DAT_00ffa508);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = func_0x00c288b0(param_3,puVar2[1]);
      if (iVar1 < 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = func_0x00bd1830(param_2[1]);
    } while (iVar3 < iVar1);
  }
  return 1;
}



undefined4 FUN_00c720e0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  func_0x00bbc8e0(param_3,"%*sPath Length Constraint: ",param_4,&DAT_0112e1b4);
  if (*param_2 == 0) {
    func_0x00bbc8e0(param_3,"infinite");
  }
  else {
    func_0x00cd9a50(param_3,*param_2);
  }
  func_0x00bab050(param_3,&DAT_0113d23c);
  func_0x00bbc8e0(param_3,"%*sPolicy Language: ",param_4,&DAT_0112e1b4);
  func_0x00bfba40(param_3,*(undefined4 *)param_2[1]);
  puVar1 = *(undefined4 **)(param_2[1] + 4);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[2] != 0)) {
    func_0x00bbc8e0(param_3,"\n%*sPolicy Text: %.*s",param_4,&DAT_0112e1b4,*puVar1,puVar1[2]);
  }
  return 1;
}



undefined4 *
FUN_00c72180(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  func_0x00e87f70();
  param_1 = 0;
  param_2 = 0;
  uVar2 = func_0x00be2b70(param_7);
  iVar7 = 0;
  param_3 = uVar2;
  iVar3 = func_0x00bd1830(uVar2);
  uVar9 = param_6;
  if (iVar3 < 1) {
LAB_00c723f6:
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_pci.c",0x11c,"r2i_pci");
    uVar9 = 0x9a;
  }
  else {
    do {
      puVar4 = (undefined4 *)func_0x00bd1a80(uVar2,iVar7);
      pcVar1 = (char *)puVar4[1];
      if (pcVar1 == (char *)0x0) {
LAB_00c723ac:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_pci.c",0xfb,"r2i_pci");
        func_0x00bc5160(0x22,0x99,0);
        func_0x00ba6530(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
        goto LAB_00c72420;
      }
      if (*pcVar1 == '@') {
        iVar6 = 1;
        iVar3 = func_0x00c68410(uVar9,pcVar1 + 1);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_pci.c",0x105,"r2i_pci");
          func_0x00bc5160(0x22,0x87,0);
          func_0x00ba6530(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          uVar2 = param_3;
          goto LAB_00c72420;
        }
        iVar8 = 0;
        do {
          iVar5 = func_0x00bd1830(iVar3);
          if (iVar5 <= iVar8) break;
          uVar9 = func_0x00bd1a80(iVar3,iVar8,&param_1,&stack0x00000000,&param_2);
          iVar6 = func_0x00c72470(uVar9);
          iVar8 = iVar8 + 1;
        } while (iVar6 != 0);
        uVar9 = param_6;
        func_0x00c68460(param_6,iVar3);
        uVar2 = param_3;
        if (iVar6 == 0) goto LAB_00c72420;
      }
      else {
        if (puVar4[2] == 0) goto LAB_00c723ac;
        iVar3 = func_0x00c72470(puVar4,&param_1,&stack0x00000000,&param_2);
        if (iVar3 == 0) {
          func_0x00ba6530(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          goto LAB_00c72420;
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = func_0x00bd1830(uVar2);
    } while (iVar7 < iVar3);
    if (param_1 == 0) goto LAB_00c723f6;
    iVar3 = func_0x00bc27b0(param_1);
    if (((iVar3 == 0x29b) || (iVar3 == 0x299)) && (param_2 != 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_pci.c",0x122,"r2i_pci");
      uVar9 = 0x9f;
    }
    else {
      puVar4 = (undefined4 *)func_0x00c29d10();
      if (puVar4 != (undefined4 *)0x0) {
        *(int *)puVar4[1] = param_1;
        *(int *)(puVar4[1] + 4) = param_2;
        *puVar4 = 0;
        goto LAB_00c7244f;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\v3_pci.c",0x128,"r2i_pci");
      uVar9 = 0x8000d;
    }
  }
  func_0x00bc5160(0x22,uVar9,0);
LAB_00c72420:
  FUN_00bfb4c0(param_1);
  thunk_FUN_00bfc170(0);
  thunk_FUN_00bfc170(param_2);
  func_0x00c29ce0(0);
  puVar4 = (undefined4 *)0x0;
LAB_00c7244f:
  func_0x00bd1860(uVar2,FUN_00be27e0);
  return puVar4;
}



undefined * FUN_00c72a20(void)

{
  return &DAT_0108c0e8;
}



undefined * FUN_00c72a30(void)

{
  return &DAT_0108c118;
}



int FUN_00c72a40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_stack_00000014;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd1830(in_stack_00000014);
  iVar2 = func_0x00bd17c0(0,iVar1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_pmaps.c",0x4c,"v2i_POLICY_MAPPINGS");
    func_0x00bc5160(0x22,0x8000f,0);
    return 0;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    while( true ) {
      iVar3 = func_0x00bd1a80(in_stack_00000014,iVar6);
      piVar5 = (int *)(iVar3 + 4);
      if ((*(int *)(iVar3 + 8) == 0) || (*piVar5 == 0)) break;
      iVar4 = func_0x00bc2c50(*piVar5,0);
      iVar3 = func_0x00bc2c50(*(undefined4 *)(iVar3 + 8),0);
      if ((iVar4 == 0) || (iVar3 == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_pmaps.c",0x5a,"v2i_POLICY_MAPPINGS");
        func_0x00bc5160(0x22,0x6e,&DAT_0112e274,*piVar5);
        goto LAB_00c72baf;
      }
      piVar5 = (int *)func_0x00c08650(&DAT_0108c0e8);
      if (piVar5 == (int *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_pmaps.c",0x60,"v2i_POLICY_MAPPINGS");
        func_0x00bc5160(0x22,0x8000d,0);
        goto LAB_00c72baf;
      }
      *piVar5 = iVar4;
      piVar5[1] = iVar3;
      func_0x00bd18c0(iVar2,piVar5);
      iVar6 = iVar6 + 1;
      if (iVar1 <= iVar6) {
        return iVar2;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_pmaps.c",0x53,"v2i_POLICY_MAPPINGS");
    func_0x00bc5160(0x22,0x6e,&DAT_0112e274,*piVar5);
    iVar4 = 0;
    iVar3 = 0;
LAB_00c72baf:
    FUN_00bfb4c0(iVar4);
    FUN_00bfb4c0(iVar3);
    func_0x00bd1860(iVar2,FUN_00c72c90);
    iVar2 = 0;
  }
  return iVar2;
}



void FUN_00c72be0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint in_stack_000000a4;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  
  func_0x00e87f70();
  uVar1 = in_stack_000000b0;
  in_stack_000000a4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = 0;
  iVar2 = func_0x00bd1830(in_stack_000000b0);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)func_0x00bd1a80(uVar1,iVar4);
      func_0x00bfbbb0(&stack0x00000054,0x50,*puVar3);
      func_0x00bfbbb0(&stack0x00000004,0x50,puVar3[1]);
      func_0x00be2690(&stack0x00000054,&stack0x00000004,&stack0x00000000);
      iVar4 = iVar4 + 1;
      iVar2 = func_0x00bd1830(uVar1);
    } while (iVar4 < iVar2);
  }
  FUN_008ab370();
  return;
}



void FUN_00c72c90(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_0108c0e8);
  return;
}



void FUN_00c72cb0(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\ct\\ct_x509v3.c",0x12);
  return;
}



undefined4 FUN_00c72cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00ce2990(param_2,param_3,param_4,&DAT_0113d23c,0);
  return 1;
}



undefined4 FUN_00c72d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00ce1fc0(param_1,param_2,param_3);
  iVar2 = func_0x00c72d80(uVar1,2);
  if (iVar2 != 1) {
    FUN_00ce1ba0(uVar1);
    *param_1 = 0;
    return 0;
  }
  return uVar1;
}



undefined4 FUN_00c72d40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00ce1fc0(param_1,param_2,param_3);
  iVar2 = func_0x00c72d80(uVar1,3);
  if (iVar2 != 1) {
    FUN_00ce1ba0(uVar1);
    *param_1 = 0;
    return 0;
  }
  return uVar1;
}



undefined4 FUN_00c72de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = func_0x00bd1830(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = func_0x00bd1a80(param_2,iVar4);
      iVar1 = func_0x00bd2050(uVar2);
      uVar3 = 0;
      do {
        if (iVar1 == (&DAT_012b650c)[uVar3 * 2]) {
          func_0x00be2690(0,(&PTR_s_status_request_012b6510)[uVar3 * 2],&param_3);
          goto LAB_00c72e41;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 2);
      func_0x00be2720(0,uVar2,&param_3);
LAB_00c72e41:
      iVar4 = iVar4 + 1;
      iVar1 = func_0x00bd1830(param_2);
    } while (iVar4 < iVar1);
  }
  return param_3;
}



int FUN_00c72e60(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 in_stack_00000018;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd1790();
  uVar4 = in_stack_00000018;
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_tlsf.c",99,"v2i_TLS_FEATURE");
    func_0x00bc5160(0x22,0x8000f,0);
    return 0;
  }
  iVar5 = 0;
  iVar2 = func_0x00bd1830(in_stack_00000018);
  if (0 < iVar2) {
    do {
      param_2 = func_0x00bd1a80(uVar4,iVar5);
      pcVar7 = *(char **)(param_2 + 8);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = *(char **)(param_2 + 4);
      }
      uVar6 = 0;
      do {
        iVar2 = func_0x00bbbfe0(pcVar7,(&PTR_s_status_request_012b6510)[uVar6 * 2]);
        if (iVar2 == 0) {
          uVar6 = (&DAT_012b650c)[uVar6 * 2];
          goto LAB_00c72f6e;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 2);
      uVar6 = func_0x008ab02e(pcVar7,&param_1,10);
      if (((*param_1 != '\0') || (pcVar7 == param_1)) || (0xffff < uVar6)) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_tlsf.c",0x77,"v2i_TLS_FEATURE");
        func_0x00bc5160(0x22,0x8f,0);
        func_0x00ba6530(4,"name=",*(undefined4 *)(param_2 + 4),", value=",
                        *(undefined4 *)(param_2 + 8));
        iVar2 = 0;
        goto LAB_00c72fe4;
      }
LAB_00c72f6e:
      iVar2 = func_0x00bfc930();
      if (iVar2 == 0) {
LAB_00c72fba:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_tlsf.c",0x80,"v2i_TLS_FEATURE");
        func_0x00bc5160(0x22,0x8000d,0);
LAB_00c72fe4:
        func_0x00bd1860(iVar1,thunk_FUN_00bfc170);
        thunk_FUN_00bfc170(iVar2);
        return 0;
      }
      iVar3 = func_0x00bd2190(iVar2,uVar6);
      if (iVar3 == 0) goto LAB_00c72fba;
      iVar3 = func_0x00bd18c0(iVar1,iVar2);
      uVar4 = in_stack_00000018;
      if (iVar3 < 1) goto LAB_00c72fba;
      iVar5 = iVar5 + 1;
      iVar2 = func_0x00bd1830(in_stack_00000018);
    } while (iVar5 < iVar2);
  }
  return iVar1;
}



undefined * FUN_00c73010(void)

{
  return &DAT_0108c2b4;
}



undefined * FUN_00c73020(void)

{
  return &DAT_0108c39c;
}



undefined * FUN_00c73030(void)

{
  return &DAT_0108c41c;
}



undefined * FUN_00c73040(void)

{
  return &DAT_0108c474;
}



undefined * FUN_00c73050(void)

{
  return &DAT_0108c4b8;
}



void FUN_00c73060(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iStack00000004;
  int iStack00000008;
  uint in_stack_00000094;
  undefined4 in_stack_0000009c;
  int *in_stack_000000a0;
  undefined4 in_stack_000000a4;
  int in_stack_000000a8;
  
  func_0x00e87f70();
  iVar7 = in_stack_000000a8;
  uVar2 = in_stack_000000a4;
  piVar1 = in_stack_000000a0;
  in_stack_00000094 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((*in_stack_000000a0 == 0) ||
     ((((iVar3 = func_0x00bbc8e0(in_stack_000000a4,"%*sadmissionAuthority:\n",in_stack_000000a8,
                                 &DAT_0112e1b4), 0 < iVar3 &&
        (iVar3 = func_0x00bbc8e0(uVar2,"%*s  ",iVar7,&DAT_0112e1b4), 0 < iVar3)) &&
       (iVar3 = func_0x00c288b0(uVar2,*piVar1), 0 < iVar3)) &&
      (iVar3 = func_0x00bbc8e0(uVar2,&DAT_0113d23c), 0 < iVar3)))) {
    iStack00000008 = 0;
    iVar3 = func_0x00bd1830(piVar1[1]);
    if (0 < iVar3) {
      do {
        piVar4 = (int *)func_0x00bd1a80(piVar1[1],iStack00000008);
        iVar3 = func_0x00bbc8e0(uVar2,"%*sEntry %0d:\n",iVar7,&DAT_0112e1b4,iStack00000008 + 1);
        if ((iVar3 < 1) ||
           (((*piVar4 != 0 &&
             (((iVar3 = func_0x00bbc8e0(uVar2,"%*s  admissionAuthority:\n",iVar7,&DAT_0112e1b4),
               iVar3 < 1 ||
               (iVar3 = func_0x00bbc8e0(uVar2,"%*s    ",iVar7,&DAT_0112e1b4), iVar3 < 1)) ||
              ((iVar3 = func_0x00c288b0(uVar2,*piVar4), iVar3 < 1 ||
               (iVar3 = func_0x00bbc8e0(uVar2,&DAT_0113d23c), iVar3 < 1)))))) ||
            ((piVar4[1] != 0 &&
             (iVar3 = func_0x00c73460(in_stack_0000009c,piVar4[1],uVar2,iVar7), iVar3 < 1))))))
        break;
        iVar15 = 0;
        iVar3 = func_0x00bd1830(piVar4[2]);
        if (0 < iVar3) {
          do {
            piVar5 = (int *)func_0x00bd1a80(piVar4[2],iVar15);
            iVar3 = func_0x00bbc8e0(uVar2,"%*s  Profession Info Entry %0d:\n",iVar7,&DAT_0112e1b4,
                                    iVar15 + 1);
            if (((iVar3 < 1) ||
                ((piVar5[3] != 0 &&
                 (((iVar3 = func_0x00bbc8e0(uVar2,"%*s    registrationNumber: ",iVar7,&DAT_0112e1b4)
                   , iVar3 < 1 || (iVar3 = func_0x00c27e80(uVar2,piVar5[3]), iVar3 < 1)) ||
                  (iVar3 = func_0x00bbc8e0(uVar2,&DAT_0113d23c), iVar3 < 1)))))) ||
               ((*piVar5 != 0 &&
                (iVar3 = func_0x00c73460(in_stack_0000009c,*piVar5,uVar2,iVar7 + 2), iVar3 < 1))))
            goto LAB_00c7343c;
            if (piVar5[1] != 0) {
              iVar3 = func_0x00bbc8e0(uVar2,"%*s    Info Entries:\n",iVar7,&DAT_0112e1b4);
              if (iVar3 < 1) goto LAB_00c7343c;
              iVar13 = 0;
              iVar3 = func_0x00bd1830(piVar5[1]);
              if (0 < iVar3) {
                do {
                  uVar6 = func_0x00bd1a80(piVar5[1],iVar13);
                  iVar3 = func_0x00bbc8e0(uVar2,"%*s      ",iVar7,&DAT_0112e1b4);
                  if (((iVar3 < 1) || (iVar3 = func_0x00c27e80(uVar2,uVar6), iVar3 < 1)) ||
                     (iVar3 = func_0x00bbc8e0(uVar2,&DAT_0113d23c), iVar3 < 1)) goto LAB_00c7343c;
                  iVar13 = iVar13 + 1;
                  iVar3 = func_0x00bd1830(piVar5[1]);
                } while (iVar13 < iVar3);
              }
            }
            if (piVar5[2] != 0) {
              iVar7 = func_0x00bbc8e0(uVar2,"%*s    Profession OIDs:\n",iVar7,&DAT_0112e1b4);
              if (iVar7 < 1) goto LAB_00c7343c;
              iStack00000004 = 0;
              iVar3 = func_0x00bd1830(piVar5[2]);
              iVar7 = in_stack_000000a8;
              if (0 < iVar3) {
                do {
                  uVar6 = func_0x00bd1a80(piVar5[2],iStack00000004);
                  uVar8 = func_0x00bc27b0(uVar6);
                  puVar9 = (undefined1 *)func_0x00bc2640(uVar8);
                  func_0x00bc27c0(&stack0x00000014,0x80,uVar6,1);
                  bVar14 = puVar9 == (undefined1 *)0x0;
                  puVar12 = &DAT_0112e458;
                  if (bVar14) {
                    puVar12 = &DAT_0112e1b4;
                  }
                  puVar10 = &DAT_0112e454;
                  if (bVar14) {
                    puVar10 = &DAT_0112e1b4;
                  }
                  puVar11 = &DAT_0112e1b4;
                  if (!bVar14) {
                    puVar11 = puVar9;
                  }
                  iVar7 = func_0x00bbc8e0(uVar2,"%*s      %s%s%s%s\n",in_stack_000000a8,
                                          &DAT_0112e1b4,puVar11,puVar10,&stack0x00000014,puVar12);
                  if (iVar7 < 1) goto LAB_00c7343c;
                  iStack00000004 = iStack00000004 + 1;
                  iVar3 = func_0x00bd1830(piVar5[2]);
                  iVar7 = in_stack_000000a8;
                } while (iStack00000004 < iVar3);
              }
            }
            iVar15 = iVar15 + 1;
            iVar3 = func_0x00bd1830(piVar4[2]);
          } while (iVar15 < iVar3);
        }
        iStack00000008 = iStack00000008 + 1;
        iVar3 = func_0x00bd1830(piVar1[1]);
      } while (iStack00000008 < iVar3);
    }
  }
LAB_00c7343c:
  FUN_008ab370();
  return;
}



void * FUN_00c73610(undefined4 param_1,size_t *param_2)

{
  void *_Dst;
  
  if ((param_2 != (size_t *)0x0) && (*param_2 != 0)) {
    _Dst = (void *)FUN_00bbc4f0(*param_2 + 1,"crypto\\x509\\v3_utf8.c",0x26);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    memcpy(_Dst,(void *)param_2[2],*param_2);
    *(undefined1 *)((int)_Dst + *param_2) = 0;
    return _Dst;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\v3_utf8.c",0x23,"i2s_ASN1_UTF8STRING");
  func_0x00bc5160(0x22,0xc0102,0);
  return (void *)0x0;
}



int FUN_00c73680(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_3 == (char *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utf8.c",0x32,"s2i_ASN1_UTF8STRING");
    func_0x00bc5160(0x22,0x6b,0);
    return 0;
  }
  iVar2 = func_0x00bfca10();
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utf8.c",0x36,"s2i_ASN1_UTF8STRING");
    func_0x00bc5160(0x22,0x8000d,0);
    return 0;
  }
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = func_0x00bfc1f0(iVar2,param_3,(int)pcVar4 - (int)(param_3 + 1));
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_utf8.c",0x3a,"s2i_ASN1_UTF8STRING");
    func_0x00bc5160(0x22,0x8000d,0);
    thunk_FUN_00bfc170(iVar2);
    return 0;
  }
  return iVar2;
}



undefined * FUN_00c73740(void)

{
  return &DAT_0108c848;
}



int * FUN_00c73750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  bool bVar14;
  
  piVar3 = (int *)func_0x00c08650(&DAT_0108c848);
  if (piVar3 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_ist.c",0x2a,"v2i_issuer_sign_tool");
    func_0x00bc5160(0x22,0x8000d,0);
    return (int *)0x0;
  }
  iVar10 = 0;
  iVar4 = func_0x00bd1830(param_3);
  if (0 < iVar4) {
    do {
      iVar4 = func_0x00bd1a80(param_3,iVar10);
      if (iVar4 != 0) {
        pbVar12 = *(byte **)(iVar4 + 4);
        pcVar9 = "signTool";
        pbVar7 = pbVar12;
        do {
          bVar1 = *pbVar7;
          bVar14 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00c737e6:
            uVar5 = -(uint)bVar14 | 1;
            goto LAB_00c737eb;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar14 = bVar1 < ((byte *)pcVar9)[1];
          if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c737e6;
          pbVar7 = pbVar7 + 2;
          pcVar9 = (char *)((byte *)pcVar9 + 2);
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_00c737eb:
        if (uVar5 != 0) {
          pcVar9 = "cATool";
          pbVar7 = pbVar12;
          do {
            bVar1 = *pbVar7;
            bVar14 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00c73860:
              uVar5 = -(uint)bVar14 | 1;
              goto LAB_00c73865;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar14 = bVar1 < ((byte *)pcVar9)[1];
            if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c73860;
            pbVar7 = pbVar7 + 2;
            pcVar9 = (char *)((byte *)pcVar9 + 2);
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_00c73865:
          if (uVar5 != 0) {
            pcVar9 = "signToolCert";
            pbVar7 = pbVar12;
            do {
              bVar1 = *pbVar7;
              bVar14 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00c738d5:
                uVar5 = -(uint)bVar14 | 1;
                goto LAB_00c738da;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar14 = bVar1 < ((byte *)pcVar9)[1];
              if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c738d5;
              pbVar7 = pbVar7 + 2;
              pcVar9 = (char *)((byte *)pcVar9 + 2);
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_00c738da:
            if (uVar5 != 0) {
              pcVar9 = "cAToolCert";
              do {
                bVar1 = *pbVar12;
                bVar14 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00c73944:
                  uVar5 = -(uint)bVar14 | 1;
                  goto LAB_00c73949;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar12[1];
                bVar14 = bVar1 < ((byte *)pcVar9)[1];
                if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c73944;
                pbVar12 = pbVar12 + 2;
                pcVar9 = (char *)((byte *)pcVar9 + 2);
              } while (bVar1 != 0);
              uVar5 = 0;
LAB_00c73949:
              if (uVar5 != 0) {
                uVar11 = 0x80106;
                uVar13 = 0x54;
                goto LAB_00c739b2;
              }
              iVar6 = func_0x00bfca10();
              piVar3[3] = iVar6;
              if ((iVar6 != 0) && (pcVar9 = *(char **)(iVar4 + 8), pcVar9 != (char *)0x0)) {
                pcVar8 = pcVar9;
                do {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
                iVar4 = func_0x00bfc1f0(iVar6,pcVar9,(int)pcVar8 - (int)(pcVar9 + 1));
                if (iVar4 != 0) goto LAB_00c7397f;
              }
              uVar11 = 0x8000d;
              uVar13 = 0x50;
              goto LAB_00c739b2;
            }
            iVar6 = func_0x00bfca10();
            piVar3[2] = iVar6;
            if ((iVar6 != 0) && (pcVar9 = *(char **)(iVar4 + 8), pcVar9 != (char *)0x0)) {
              pcVar8 = pcVar9;
              do {
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar2 != '\0');
              iVar4 = func_0x00bfc1f0(iVar6,pcVar9,(int)pcVar8 - (int)(pcVar9 + 1));
              if (iVar4 != 0) goto LAB_00c7397f;
            }
            uVar11 = 0x8000d;
            uVar13 = 0x48;
            goto LAB_00c739b2;
          }
          iVar6 = func_0x00bfca10();
          piVar3[1] = iVar6;
          if ((iVar6 != 0) && (pcVar9 = *(char **)(iVar4 + 8), pcVar9 != (char *)0x0)) {
            pcVar8 = pcVar9;
            do {
              cVar2 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 != '\0');
            iVar4 = func_0x00bfc1f0(iVar6,pcVar9,(int)pcVar8 - (int)(pcVar9 + 1));
            if (iVar4 != 0) goto LAB_00c7397f;
          }
          uVar11 = 0x8000d;
          uVar13 = 0x40;
          goto LAB_00c739b2;
        }
        iVar6 = func_0x00bfca10();
        *piVar3 = iVar6;
        if ((iVar6 != 0) && (pcVar9 = *(char **)(iVar4 + 8), pcVar9 != (char *)0x0)) {
          pcVar8 = pcVar9;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          iVar4 = func_0x00bfc1f0(iVar6,pcVar9,(int)pcVar8 - (int)(pcVar9 + 1));
          if (iVar4 != 0) goto LAB_00c7397f;
        }
        uVar11 = 0x8000d;
        uVar13 = 0x38;
LAB_00c739b2:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\v3_ist.c",uVar13,"v2i_issuer_sign_tool");
        func_0x00bc5160(0x22,uVar11,0);
        func_0x00c08cb0(piVar3,&DAT_0108c848);
        return (int *)0x0;
      }
LAB_00c7397f:
      iVar10 = iVar10 + 1;
      iVar4 = func_0x00bd1830(param_3);
    } while (iVar10 < iVar4);
  }
  return piVar3;
}



undefined4 FUN_00c739f0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_ist.c",0x66,"i2r_issuer_sign_tool");
    func_0x00bc5160(0x22,0x80106,0);
    return 0;
  }
  bVar1 = *param_2 != 0;
  if (bVar1) {
    func_0x00bbc8e0(param_3,"%*ssignTool    : ",param_4,&DAT_0112e1b4);
    func_0x00bab6e0(param_3,((undefined4 *)*param_2)[2],*(undefined4 *)*param_2);
  }
  if (param_2[1] != 0) {
    if (bVar1) {
      func_0x00bab6e0(param_3,&DAT_0113d23c,1);
    }
    func_0x00bbc8e0(param_3,"%*scATool      : ",param_4,&DAT_0112e1b4);
    func_0x00bab6e0(param_3,((undefined4 *)param_2[1])[2],*(undefined4 *)param_2[1]);
    bVar1 = true;
  }
  if (param_2[2] != 0) {
    if (bVar1) {
      func_0x00bab6e0(param_3,&DAT_0113d23c,1);
    }
    func_0x00bbc8e0(param_3,"%*ssignToolCert: ",param_4,&DAT_0112e1b4);
    func_0x00bab6e0(param_3,((undefined4 *)param_2[2])[2],*(undefined4 *)param_2[2]);
    bVar1 = true;
  }
  if (param_2[3] != 0) {
    if (bVar1) {
      func_0x00bab6e0(param_3,&DAT_0113d23c,1);
    }
    func_0x00bbc8e0(param_3,"%*scAToolCert  : ",param_4,&DAT_0112e1b4);
    func_0x00bab6e0(param_3,((undefined4 *)param_2[3])[2],*(undefined4 *)param_2[3]);
  }
  return 1;
}



void FUN_00c73b20(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\x509\\v3_group_ac.c",0x20);
  return;
}



void FUN_00c73b40(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\x509\\v3_soa_id.c",0x20);
  return;
}



void FUN_00c73b60(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\x509\\v3_no_ass.c",0x20);
  return;
}



void FUN_00c73b80(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\x509\\v3_no_rev_avail.c",0x20);
  return;
}



void FUN_00c73ba0(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\x509\\v3_single_use.c",0x20);
  return;
}



void FUN_00c73bc0(void)

{
  func_0x00bbbc70(&DAT_00ff41a0,"crypto\\x509\\v3_ind_iss.c",0x20);
  return;
}



undefined * FUN_00c73be0(void)

{
  return &DAT_0108ccc8;
}



undefined * FUN_00c73bf0(void)

{
  return &DAT_0108ccf8;
}



undefined * FUN_00c73c00(void)

{
  return &DAT_0108cd28;
}



undefined4 FUN_00c73c10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  func_0x00e87f70();
  iStack00000004 = 0;
  iVar1 = func_0x00bd1830(in_stack_00000014);
  if (0 < iVar1) {
    do {
      func_0x00bbc8e0(in_stack_00000018,"%*sTargets:\n",in_stack_0000001c,&DAT_0112e1b4);
      uVar2 = func_0x00bd1a80(in_stack_00000014,iStack00000004);
      iVar4 = 0;
      iVar1 = func_0x00bd1830(uVar2);
      if (0 < iVar1) {
        do {
          func_0x00bbc8e0(in_stack_00000018,"%*sTarget:\n",in_stack_0000001c + 2,&DAT_0112e1b4);
          uVar3 = func_0x00bd1a80(uVar2,iVar4);
          func_0x00c73f10(in_stack_00000010,uVar3,in_stack_00000018,in_stack_0000001c + 4);
          iVar4 = iVar4 + 1;
          iVar1 = func_0x00bd1830(uVar2);
        } while (iVar4 < iVar1);
      }
      iStack00000004 = iStack00000004 + 1;
      iVar1 = func_0x00bd1830(in_stack_00000014);
    } while (iStack00000004 < iVar1);
  }
  return 1;
}



undefined * FUN_00c73cf0(void)

{
  return &DAT_0108cbac;
}



undefined * FUN_00c73d00(void)

{
  return &DAT_0108cc18;
}



undefined * FUN_00c73d10(void)

{
  return &DAT_0108cc70;
}



undefined * FUN_00c740e0(void)

{
  return &DAT_0108d028;
}



undefined4
FUN_00c740f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  func_0x00e87f70();
  if (param_3 == 0) {
    pcVar7 = "<No Attributes>\n";
  }
  else {
    iVar1 = func_0x00bd1830(param_3);
    if (iVar1 != 0) {
      iVar6 = 0;
      iVar1 = func_0x00bd1830(param_3);
      if (iVar1 < 1) {
        return 1;
      }
      while( true ) {
        uVar2 = func_0x00bd1a80(param_3,iVar6);
        uVar3 = func_0x00c1cda0(uVar2);
        iVar1 = func_0x00bc27b0(uVar3);
        if ((param_5 != 0) &&
           (iVar4 = func_0x00bbc8e0(param_4,&DAT_01058f18,param_5,&DAT_0112e1b4), iVar4 < 1)) {
          return 0;
        }
        if (iVar1 == 0) {
          iVar4 = func_0x00bfba40(param_4,uVar3);
          if (iVar4 < 1) {
            return 0;
          }
          iVar4 = func_0x00bab050(param_4,&DAT_0103594c);
        }
        else {
          uVar3 = func_0x00bc2640(iVar1);
          iVar4 = func_0x00bbc8e0(param_4,&DAT_0108d090,uVar3);
        }
        if (iVar4 < 1) break;
        iVar4 = func_0x00c1cd80(uVar2);
        if (iVar4 == 0) {
          iVar1 = func_0x00bbc8e0(param_4,"%*s<No Values>\n",param_5 + 4,&DAT_0112e1b4);
          if (iVar1 < 1) {
            return 0;
          }
        }
        else {
          iVar5 = 0;
          iVar4 = func_0x00c1cd80(uVar2);
          if (0 < iVar4) {
            do {
              uVar3 = func_0x00c1cde0(uVar2,iVar5);
              iVar4 = func_0x00c13b20(param_4,iVar1,uVar3,param_5 + 4);
              if (iVar4 < 1) {
                return 0;
              }
              iVar4 = func_0x00bab050(param_4,&DAT_0113d23c);
              if (iVar4 < 1) {
                return 0;
              }
              iVar5 = iVar5 + 1;
              iVar4 = func_0x00c1cd80(uVar2);
            } while (iVar5 < iVar4);
          }
        }
        iVar6 = iVar6 + 1;
        iVar1 = func_0x00bd1830(param_3);
        if (iVar1 <= iVar6) {
          return 1;
        }
      }
      return 0;
    }
    pcVar7 = "<Empty Attributes>\n";
  }
  iVar1 = func_0x00bbc8e0(param_4,pcVar7);
  if (0 < iVar1) {
    return 1;
  }
  return 0;
}



undefined * FUN_00c74290(void)

{
  return &DAT_0108d0f4;
}



undefined4 FUN_00c742a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  func_0x00e87f70();
  iVar3 = func_0x00bbc8e0(in_stack_00000018,"%*sUser Notices:\n",in_stack_0000001c,&DAT_0112e1b4);
  if (iVar3 < 1) {
    return 0;
  }
  iVar8 = 0;
  iVar3 = func_0x00bd1830(in_stack_00000014);
  if (0 < iVar3) {
    in_stack_0000001c = in_stack_0000001c + 4;
    do {
      piVar4 = (int *)func_0x00bd1a80(in_stack_00000014,iVar8);
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        iVar3 = func_0x00bbc8e0(in_stack_00000018,"%*sOrganization: %.*s\n",in_stack_0000001c,
                                &DAT_0112e1b4,*(undefined4 *)*piVar1,((undefined4 *)*piVar1)[2]);
        if (iVar3 < 1) {
          return 0;
        }
        iVar3 = func_0x00bd1830(piVar1[1]);
        puVar6 = &DAT_01141e74;
        if (iVar3 < 2) {
          puVar6 = &DAT_0112e1b4;
        }
        iVar3 = func_0x00bbc8e0(in_stack_00000018,"%*sNumber%s: ",in_stack_0000001c,&DAT_0112e1b4,
                                puVar6);
        if (iVar3 < 1) {
          return 0;
        }
        iVar7 = 0;
        iVar3 = func_0x00bd1830(piVar1[1]);
        if (0 < iVar3) {
          do {
            iVar3 = func_0x00bd1a80(piVar1[1],iVar7);
            if ((iVar7 != 0) &&
               (iVar5 = func_0x00bab050(in_stack_00000018,&DAT_0112e444), iVar5 < 1)) {
              return 0;
            }
            if ((iVar3 == 0) && (iVar5 = func_0x00bab050(in_stack_00000018,"(null)"), iVar5 < 1)) {
              return 0;
            }
            iVar3 = FUN_00be3910(0,iVar3);
            if (iVar3 == 0) {
              return 0;
            }
            iVar5 = func_0x00bab050(in_stack_00000018,iVar3);
            if (iVar5 < 1) {
              FUN_00bbc580(iVar3,"crypto\\x509\\v3_usernotice.c",0x2f);
              return 0;
            }
            FUN_00bbc580(iVar3,"crypto\\x509\\v3_usernotice.c",0x32);
            iVar7 = iVar7 + 1;
            iVar3 = func_0x00bd1830(piVar1[1]);
          } while (iVar7 < iVar3);
        }
        if ((piVar4[1] != 0) &&
           (iVar3 = func_0x00bab050(in_stack_00000018,&DAT_0113d23c), iVar3 < 1)) {
          return 0;
        }
      }
      puVar2 = (undefined4 *)piVar4[1];
      if ((puVar2 != (undefined4 *)0x0) &&
         (iVar3 = func_0x00bbc8e0(in_stack_00000018,"%*sExplicit Text: %.*s",in_stack_0000001c,
                                  &DAT_0112e1b4,*puVar2,puVar2[2]), iVar3 < 0)) {
        return 0;
      }
      iVar3 = func_0x00bab050(in_stack_00000018,&DAT_0114074c);
      if (iVar3 < 1) {
        return 0;
      }
      iVar8 = iVar8 + 1;
      iVar3 = func_0x00bd1830(in_stack_00000014);
    } while (iVar8 < iVar3);
  }
  return 1;
}



undefined * FUN_00c744b0(void)

{
  return &DAT_0108d1b8;
}



undefined4 FUN_00c744c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  func_0x00be26e0("authority",*param_2,&param_3);
  func_0x00be2720("pathlen",param_2[1],&param_3);
  return param_3;
}



int FUN_00c74500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = func_0x00c08650(&DAT_0108d1b8);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_battcons.c",0x41,"v2i_OSSL_BASIC_ATTR_CONSTRAINTS");
    func_0x00bc5160(0x22,0x8000d,0);
    return 0;
  }
  iVar8 = 0;
  iVar3 = func_0x00bd1830(param_3);
  if (0 < iVar3) {
    do {
      iVar3 = func_0x00bd1a80(param_3,iVar8);
      pcVar6 = "authority";
      pbVar7 = *(byte **)(iVar3 + 4);
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_00c74590:
          uVar4 = -(uint)bVar9 | 1;
          goto LAB_00c74595;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < ((byte *)pcVar6)[1];
        if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c74590;
        pbVar5 = pbVar5 + 2;
        pcVar6 = (char *)((byte *)pcVar6 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00c74595:
      if (uVar4 == 0) {
        iVar3 = func_0x00be2830(iVar3,iVar2);
      }
      else {
        pcVar6 = "pathlen";
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_00c745c7:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_00c745cc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < ((byte *)pcVar6)[1];
          if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c745c7;
          pbVar7 = pbVar7 + 2;
          pcVar6 = (char *)((byte *)pcVar6 + 2);
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_00c745cc:
        if (uVar4 != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_battcons.c",0x4d,"v2i_OSSL_BASIC_ATTR_CONSTRAINTS");
          func_0x00bc5160(0x22,0x6a,0);
          func_0x00ba6530(4,"name=",*(undefined4 *)(iVar3 + 4),", value=",*(undefined4 *)(iVar3 + 8)
                         );
          goto LAB_00c74639;
        }
        iVar3 = func_0x00be2b20(iVar3,iVar2 + 4);
      }
      if (iVar3 == 0) {
LAB_00c74639:
        func_0x00c08cb0(iVar2,&DAT_0108d1b8);
        return 0;
      }
      iVar8 = iVar8 + 1;
      iVar3 = func_0x00bd1830(param_3);
    } while (iVar8 < iVar3);
  }
  return iVar2;
}



bool FUN_00c74650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bbc8e0(param_3,&DAT_01058f18,param_4,&DAT_0112e1b4);
  if (0 < iVar1) {
    iVar1 = func_0x00c288b0(param_3,param_2);
    if (0 < iVar1) {
      iVar1 = func_0x00bab050(param_3,&DAT_0113d23c);
      return 0 < iVar1;
    }
  }
  return false;
}



undefined4
FUN_00c77ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  func_0x00e87f70();
  iVar1 = func_0x00c21f80(0,&stack0x00000000,&param_1,&param_2,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x00bfca80(0,&stack0x00000000,param_1);
  if (iVar1 == 0) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00bc39e0(iVar1);
    param_1 = FUN_00bbba70(iVar1);
  }
  uVar2 = func_0x00c78090(param_2,uVar2,param_1,0,1,param_5,param_6);
  thunk_FUN_00bfc170(iVar1);
  return uVar2;
}



void FUN_00c80910(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uStack00000004;
  uint uStack00000008;
  int iStack0000000c;
  undefined1 *in_stack_00000014;
  undefined1 *in_stack_00000018;
  uint *in_stack_0000001c;
  
  func_0x00e87f70();
  if ((((in_stack_00000014 != (undefined1 *)0x0) && (in_stack_00000018 != (undefined1 *)0x0)) &&
      (in_stack_0000001c != (uint *)0x0)) &&
     (((uVar3 = in_stack_0000001c[0x44], uVar3 == 0xc || (uVar3 == 0xe)) || (uVar3 == 0x10)))) {
    uVar1 = CONCAT31(CONCAT21(CONCAT11(*in_stack_00000014,in_stack_00000014[1]),in_stack_00000014[2]
                             ),in_stack_00000014[3]) ^ *in_stack_0000001c;
    uVar2 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000014[4],in_stack_00000014[5]),
                              in_stack_00000014[6]),in_stack_00000014[7]) ^ in_stack_0000001c[1];
    uVar3 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000014[8],in_stack_00000014[9]),
                              in_stack_00000014[10]),in_stack_00000014[0xb]) ^ in_stack_0000001c[2];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000014[0xc],in_stack_00000014[0xd]),
                              in_stack_00000014[0xe]),in_stack_00000014[0xf]) ^ in_stack_0000001c[3]
    ;
    uVar6 = *(uint *)(&DAT_01091838 + (uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01091c38 + (uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01091438 + (uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_01092038 + (uVar3 & 0xff) * 4);
    uVar3 = *(uint *)(&DAT_01091838 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01091c38 + (uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01091438 + (uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_01092038 + (uVar4 & 0xff) * 4);
    uVar4 = *(uint *)(&DAT_01091838 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01091c38 + (uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01091438 + (uVar2 >> 0x18) * 4) ^
            *(uint *)(&DAT_01092038 + (uVar2 & 0xff) * 4) ^ uVar6;
    uVar2 = uVar3 ^ uVar4;
    uStack00000004 =
         *(uint *)(&DAT_01091838 + (uVar1 >> 0x10 & 0xff) * 4) ^
         *(uint *)(&DAT_01091c38 + (uVar1 >> 8 & 0xff) * 4) ^
         *(uint *)(&DAT_01091438 + (uVar1 >> 0x18) * 4) ^
         *(uint *)(&DAT_01092038 + (uVar1 & 0xff) * 4) ^ uVar4;
    uVar3 = uVar3 ^ uVar6 ^ uStack00000004;
    uVar1 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar4 = ((uVar4 ^ uVar3) & 0xffff00ff) << 8 ^ (uVar4 ^ uVar3) >> 8 & 0xff00ff ^ uVar1;
    uStack00000004 = uStack00000004 ^ uVar4;
    uVar3 = uVar1 ^ uVar2 ^ uStack00000004;
    uStack00000004 = uStack00000004 ^ in_stack_0000001c[4];
    uVar1 = uVar3 ^ in_stack_0000001c[6];
    uStack00000008 = uVar4 ^ in_stack_0000001c[5] ^ uVar3;
    in_stack_00000014 = (undefined1 *)(uVar2 ^ uVar4 ^ in_stack_0000001c[7]);
    puVar5 = in_stack_0000001c + 8;
    if (0 < (int)(in_stack_0000001c[0x44] - 2)) {
      iStack0000000c = (in_stack_0000001c[0x44] - 3 >> 1) + 1;
      do {
        uVar2 = *(uint *)(&DAT_01092038 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_01091838 + (uVar1 & 0xff) * 4);
        uVar4 = *(uint *)(&DAT_01092038 + ((uint)in_stack_00000014 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + ((uint)in_stack_00000014 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + ((uint)in_stack_00000014 >> 0x18) * 4) ^
                *(uint *)(&DAT_01091838 + ((uint)in_stack_00000014 & 0xff) * 4);
        uVar1 = *(uint *)(&DAT_01092038 + (uStack00000008 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + (uStack00000008 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + (uStack00000008 >> 0x18) * 4) ^
                *(uint *)(&DAT_01091838 + (uStack00000008 & 0xff) * 4) ^ uVar2;
        uVar6 = uVar4 ^ uVar1;
        uVar3 = *(uint *)(&DAT_01092038 + (uStack00000004 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + (uStack00000004 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + (uStack00000004 >> 0x18) * 4) ^
                *(uint *)(&DAT_01091838 + (uStack00000004 & 0xff) * 4) ^ uVar1;
        uVar4 = uVar2 ^ uVar4 ^ uVar3;
        uVar1 = uVar4 ^ uVar1;
        uVar6 = (uVar6 & 0xffff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
        uVar2 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ^
                uVar4;
        uVar3 = (uVar3 >> 0x10 | uVar3 << 0x10) ^ uVar2;
        uVar1 = uVar4 ^ uVar6 ^ uVar3;
        uVar3 = uVar3 ^ *puVar5;
        uVar6 = uVar6 ^ uVar2 ^ puVar5[3];
        uVar4 = uVar1 ^ puVar5[2];
        uVar2 = uVar2 ^ puVar5[1] ^ uVar1;
        uVar7 = *(uint *)(&DAT_01091838 + (uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + (uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + (uVar4 >> 0x18) * 4) ^
                *(uint *)(&DAT_01092038 + (uVar4 & 0xff) * 4);
        uVar1 = *(uint *)(&DAT_01091838 + (uVar6 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + (uVar6 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + (uVar6 >> 0x18) * 4) ^
                *(uint *)(&DAT_01092038 + (uVar6 & 0xff) * 4);
        uVar4 = *(uint *)(&DAT_01091838 + (uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_01091c38 + (uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_01091438 + (uVar2 >> 0x18) * 4) ^
                *(uint *)(&DAT_01092038 + (uVar2 & 0xff) * 4) ^ uVar7;
        uStack00000004 =
             *(uint *)(&DAT_01091838 + (uVar3 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_01091c38 + (uVar3 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_01091438 + (uVar3 >> 0x18) * 4) ^
             *(uint *)(&DAT_01092038 + (uVar3 & 0xff) * 4) ^ uVar4;
        uVar3 = uVar1 ^ uVar7 ^ uStack00000004;
        uVar1 = uVar1 ^ uVar4;
        uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar6 = ((uVar4 ^ uVar3) & 0xffff00ff) << 8 ^ (uVar4 ^ uVar3) >> 8 & 0xff00ff ^ uVar2;
        uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uStack00000004 = uStack00000004 ^ uVar6;
        uVar3 = uVar2 ^ uVar4 ^ uStack00000004;
        uStack00000004 = uStack00000004 ^ puVar5[4];
        uVar1 = uVar3 ^ puVar5[6];
        uStack00000008 = uVar6 ^ puVar5[5] ^ uVar3;
        in_stack_00000014 = (undefined1 *)(uVar4 ^ uVar6 ^ puVar5[7]);
        puVar5 = puVar5 + 8;
        iStack0000000c = iStack0000000c + -1;
      } while (iStack0000000c != 0);
    }
    uVar2 = (((*(uint *)(&DAT_01092038 + (uStack00000004 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_01091c38)[(uStack00000004 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_01091438)[(uStack00000004 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_01091838)[(uStack00000004 & 0xff) * 4]) ^ *puVar5;
    uVar4 = (((*(uint *)(&DAT_01092038 + (uStack00000008 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_01091c38)[(uStack00000008 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_01091438)[(uStack00000008 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_01091838)[(uStack00000008 & 0xff) * 4]) ^ puVar5[1];
    uVar1 = (((*(uint *)(&DAT_01092038 + (uVar1 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_01091c38)[(uVar1 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_01091438)[(uVar1 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_01091838)[(uVar1 & 0xff) * 4]) ^ puVar5[2];
    uVar3 = (((*(uint *)(&DAT_01092038 + ((uint)in_stack_00000014 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_01091c38)[((uint)in_stack_00000014 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_01091438)[((uint)in_stack_00000014 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_01091838)[((uint)in_stack_00000014 & 0xff) * 4]) ^ puVar5[3];
    *in_stack_00000018 = (char)(uVar2 >> 0x18);
    in_stack_00000018[1] = (char)(uVar2 >> 0x10);
    in_stack_00000018[2] = (char)(uVar2 >> 8);
    in_stack_00000018[3] = (char)uVar2;
    in_stack_00000018[4] = (char)(uVar4 >> 0x18);
    in_stack_00000018[5] = (char)(uVar4 >> 0x10);
    in_stack_00000018[6] = (char)(uVar4 >> 8);
    in_stack_00000018[8] = (char)(uVar1 >> 0x18);
    in_stack_00000018[9] = (char)(uVar1 >> 0x10);
    in_stack_00000018[10] = (char)(uVar1 >> 8);
    in_stack_00000018[0xc] = (char)(uVar3 >> 0x18);
    in_stack_00000018[0xd] = (char)(uVar3 >> 0x10);
    in_stack_00000018[7] = (char)uVar4;
    in_stack_00000018[0xb] = (char)uVar1;
    in_stack_00000018[0xe] = (char)(uVar3 >> 8);
    in_stack_00000018[0xf] = (char)uVar3;
  }
  return;
}



void FUN_00c81fe0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000014;
  uint *in_stack_00000018;
  
  func_0x00e87f70();
  uVar2 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000010[8],in_stack_00000010[9]),
                            in_stack_00000010[10]),in_stack_00000010[0xb]);
  uVar4 = in_stack_00000018[0x1e] ^ uVar2;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000010[0xc],in_stack_00000010[0xd]),
                            in_stack_00000010[0xe]),in_stack_00000010[0xf]);
  uVar3 = in_stack_00000018[0x1f] ^ uVar4 ^ uVar1;
  uVar3 = *(uint *)(&DAT_01092c38 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar3 & 0xff) * 4);
  uVar4 = uVar4 + uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 + uVar4;
  uVar3 = *(uint *)(&DAT_01092c38 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar3 & 0xff) * 4);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*in_stack_00000010,in_stack_00000010[1]),in_stack_00000010[2]),
                   in_stack_00000010[3]) ^ uVar3 + uVar4;
  uVar6 = in_stack_00000018[0x1c] ^ uVar5;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000010[4],in_stack_00000010[5]),in_stack_00000010[6]
                           ),in_stack_00000010[7]) ^ uVar3;
  uVar4 = in_stack_00000018[0x1d] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0x1a] ^ uVar2;
  uVar4 = in_stack_00000018[0x1b] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x18] ^ uVar5;
  uVar4 = in_stack_00000018[0x19] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0x16] ^ uVar2;
  uVar4 = in_stack_00000018[0x17] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x14] ^ uVar5;
  uVar4 = in_stack_00000018[0x15] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0x12] ^ uVar2;
  uVar4 = in_stack_00000018[0x13] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x10] ^ uVar5;
  uVar4 = in_stack_00000018[0x11] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0xe] ^ uVar2;
  uVar1 = uVar1 ^ uVar4;
  uVar4 = in_stack_00000018[0xf] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0xc] ^ uVar5;
  uVar4 = in_stack_00000018[0xd] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[10] ^ uVar2;
  uVar4 = in_stack_00000018[0xb] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[8] ^ uVar5;
  uVar4 = in_stack_00000018[9] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[6] ^ uVar2;
  uVar4 = in_stack_00000018[7] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[4] ^ uVar5;
  uVar4 = in_stack_00000018[5] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[2] ^ uVar2;
  uVar4 = in_stack_00000018[3] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar4 = in_stack_00000018[1] ^ *in_stack_00000018 ^ uVar5 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = (*in_stack_00000018 ^ uVar5) + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  *in_stack_00000014 = (char)(uVar2 >> 0x18);
  in_stack_00000014[1] = (char)(uVar2 >> 0x10);
  in_stack_00000014[2] = (char)(uVar2 >> 8);
  in_stack_00000014[4] = (char)(uVar1 >> 0x18);
  in_stack_00000014[5] = (char)(uVar1 >> 0x10);
  in_stack_00000014[6] = (char)(uVar1 >> 8);
  in_stack_00000014[7] = (char)uVar1;
  in_stack_00000014[0xb] = (char)uVar5;
  in_stack_00000014[8] = (char)(uVar5 >> 0x18);
  in_stack_00000014[9] = (char)(uVar5 >> 0x10);
  in_stack_00000014[10] = (char)(uVar5 >> 8);
  in_stack_00000014[0xc] = (char)(uVar3 >> 0x18);
  in_stack_00000014[0xd] = (char)(uVar3 >> 0x10);
  in_stack_00000014[3] = (char)uVar2;
  in_stack_00000014[0xe] = (char)(uVar3 >> 8);
  in_stack_00000014[0xf] = (char)uVar3;
  return;
}



void FUN_00c82d40(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000014;
  uint *in_stack_00000018;
  
  func_0x00e87f70();
  uVar2 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000010[8],in_stack_00000010[9]),
                            in_stack_00000010[10]),in_stack_00000010[0xb]);
  uVar4 = *in_stack_00000018 ^ uVar2;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000010[0xc],in_stack_00000010[0xd]),
                            in_stack_00000010[0xe]),in_stack_00000010[0xf]);
  uVar3 = in_stack_00000018[1] ^ uVar4 ^ uVar1;
  uVar3 = *(uint *)(&DAT_01092c38 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar3 & 0xff) * 4);
  uVar4 = uVar4 + uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 + uVar4;
  uVar3 = *(uint *)(&DAT_01092c38 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar3 & 0xff) * 4);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*in_stack_00000010,in_stack_00000010[1]),in_stack_00000010[2]),
                   in_stack_00000010[3]) ^ uVar3 + uVar4;
  uVar6 = in_stack_00000018[2] ^ uVar5;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(in_stack_00000010[4],in_stack_00000010[5]),in_stack_00000010[6]
                           ),in_stack_00000010[7]) ^ uVar3;
  uVar4 = in_stack_00000018[3] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[4] ^ uVar2;
  uVar4 = in_stack_00000018[5] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[6] ^ uVar5;
  uVar4 = in_stack_00000018[7] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[8] ^ uVar2;
  uVar4 = in_stack_00000018[9] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[10] ^ uVar5;
  uVar4 = in_stack_00000018[0xb] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0xc] ^ uVar2;
  uVar4 = in_stack_00000018[0xd] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0xe] ^ uVar5;
  uVar4 = in_stack_00000018[0xf] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x10] ^ uVar2;
  uVar1 = uVar1 ^ uVar4;
  uVar4 = in_stack_00000018[0x11] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x12] ^ uVar5;
  uVar4 = in_stack_00000018[0x13] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0x14] ^ uVar2;
  uVar4 = in_stack_00000018[0x15] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x16] ^ uVar5;
  uVar4 = in_stack_00000018[0x17] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0x18] ^ uVar2;
  uVar4 = in_stack_00000018[0x19] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar6 = in_stack_00000018[0x1a] ^ uVar5;
  uVar4 = in_stack_00000018[0x1b] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = in_stack_00000018[0x1c] ^ uVar2;
  uVar4 = in_stack_00000018[0x1d] ^ uVar6 ^ uVar1;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar5 = uVar5 ^ uVar4 + uVar6;
  uVar4 = in_stack_00000018[0x1f] ^ in_stack_00000018[0x1e] ^ uVar5 ^ uVar3;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar6 = (in_stack_00000018[0x1e] ^ uVar5) + uVar4;
  uVar6 = *(uint *)(&DAT_01092c38 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar6 & 0xff) * 4);
  uVar4 = uVar4 + uVar6;
  uVar4 = *(uint *)(&DAT_01092c38 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01092838 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01093038 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_01092438 + (uVar4 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4 + uVar6;
  uVar1 = uVar1 ^ uVar4;
  *in_stack_00000014 = (char)(uVar2 >> 0x18);
  in_stack_00000014[1] = (char)(uVar2 >> 0x10);
  in_stack_00000014[2] = (char)(uVar2 >> 8);
  in_stack_00000014[4] = (char)(uVar1 >> 0x18);
  in_stack_00000014[5] = (char)(uVar1 >> 0x10);
  in_stack_00000014[6] = (char)(uVar1 >> 8);
  in_stack_00000014[7] = (char)uVar1;
  in_stack_00000014[0xb] = (char)uVar5;
  in_stack_00000014[8] = (char)(uVar5 >> 0x18);
  in_stack_00000014[9] = (char)(uVar5 >> 0x10);
  in_stack_00000014[10] = (char)(uVar5 >> 8);
  in_stack_00000014[0xc] = (char)(uVar3 >> 0x18);
  in_stack_00000014[0xd] = (char)(uVar3 >> 0x10);
  in_stack_00000014[3] = (char)uVar2;
  in_stack_00000014[0xe] = (char)(uVar3 >> 8);
  in_stack_00000014[0xf] = (char)uVar3;
  return;
}



void FUN_00c84590(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                 uint *param_5)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  func_0x00e87f70();
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),param_3[7]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_3[8],param_3[9]),param_3[10]),param_3[0xb]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]),param_3[0xf]);
  uVar5 = param_5[0x1f] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar7 = ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar7 << 2) ^
          ((uint)(uVar1 >> 6) | uVar7 << 10) ^ ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^
          CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^
          CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]) ^ uVar7;
  uVar5 = param_5[0x1e] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar3 = uVar3 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[0x1d] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar4 = uVar4 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[0x1c] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar6 = uVar6 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[0x1b] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x1a] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x19] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x18] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x17] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x16] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x15] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x14] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x13] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x12] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x11] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x10] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xf] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xe] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xd] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xc] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xb] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[10] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[9] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[8] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[7] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[6] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[5] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[4] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[3] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar7 = uVar7 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[2] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar3 = uVar3 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[1] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar4 = uVar4 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = *param_5 ^ uVar4 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar6 = uVar6 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  *param_4 = (char)(uVar6 >> 0x18);
  param_4[1] = (char)(uVar6 >> 0x10);
  param_4[2] = (char)(uVar6 >> 8);
  param_4[3] = (char)uVar6;
  param_4[4] = (char)(uVar4 >> 0x18);
  param_4[5] = (char)(uVar4 >> 0x10);
  param_4[6] = (char)(uVar4 >> 8);
  param_4[7] = (char)uVar4;
  param_4[8] = (char)(uVar3 >> 0x18);
  param_4[9] = (char)(uVar3 >> 0x10);
  param_4[10] = (char)(uVar3 >> 8);
  param_4[0xc] = (char)(uVar7 >> 0x18);
  param_4[0xd] = (char)(uVar7 >> 0x10);
  param_4[0xf] = (char)uVar7;
  param_4[0xb] = (char)uVar3;
  param_4[0xe] = (char)(uVar7 >> 8);
  return;
}



void FUN_00c850a0(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                 uint *param_5)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  func_0x00e87f70();
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),param_3[7]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_3[8],param_3[9]),param_3[10]),param_3[0xb]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]),param_3[0xf]);
  uVar5 = *param_5 ^ uVar6 ^ uVar4 ^ uVar3;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar7 = ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar7 << 2) ^
          ((uint)(uVar1 >> 6) | uVar7 << 10) ^ ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^
          CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^
          CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]) ^ uVar7;
  uVar5 = param_5[1] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar3 = uVar3 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[2] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar4 = uVar4 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[3] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar6 = uVar6 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[4] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[5] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[6] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[7] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[8] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[9] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[10] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xb] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xc] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xd] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xe] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0xf] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x10] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x11] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x12] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x13] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x14] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x15] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x16] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x17] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x18] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar7 = uVar7 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x19] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar3 = uVar3 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x1a] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar4 = uVar4 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x1b] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar6 = uVar6 ^ *(uint *)(&DAT_012b6520 + (uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_012b6920 + (uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01093538 + (uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_012b6d20 + (uVar5 & 0xff) * 4);
  uVar5 = param_5[0x1c] ^ uVar6 ^ uVar4 ^ uVar3;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar7 = uVar7 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[0x1d] ^ uVar6 ^ uVar4 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar3 = uVar3 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[0x1e] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar4 = uVar4 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  uVar5 = param_5[0x1f] ^ uVar4 ^ uVar3 ^ uVar7;
  uVar1 = CONCAT11((&DAT_01093438)[uVar5 >> 0x18],(&DAT_01093438)[uVar5 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_01093438)[uVar5 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_01093438)[uVar5 & 0xff]);
  uVar6 = uVar6 ^ ((uint)((byte)(&DAT_01093438)[uVar5 >> 0x18] >> 6) | uVar8 << 2) ^
                  ((uint)(uVar1 >> 6) | uVar8 << 10) ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^
                  CONCAT13((&DAT_01093438)[uVar5 & 0xff],uVar2) ^ uVar8;
  *param_4 = (char)(uVar6 >> 0x18);
  param_4[1] = (char)(uVar6 >> 0x10);
  param_4[2] = (char)(uVar6 >> 8);
  param_4[3] = (char)uVar6;
  param_4[4] = (char)(uVar4 >> 0x18);
  param_4[5] = (char)(uVar4 >> 0x10);
  param_4[6] = (char)(uVar4 >> 8);
  param_4[7] = (char)uVar4;
  param_4[8] = (char)(uVar3 >> 0x18);
  param_4[9] = (char)(uVar3 >> 0x10);
  param_4[10] = (char)(uVar3 >> 8);
  param_4[0xc] = (char)(uVar7 >> 0x18);
  param_4[0xd] = (char)(uVar7 >> 0x10);
  param_4[0xf] = (char)uVar7;
  param_4[0xb] = (char)uVar3;
  param_4[0xe] = (char)(uVar7 >> 8);
  return;
}



undefined4 FUN_00c85f60(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
    piVar1 = (int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
    _Dst = (void *)(param_1 + 0x18);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x00c86060(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x00c86060(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x58) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



void FUN_00c869a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00bb4190(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  FUN_00bb72a0(param_1 + 0x5c,param_2,param_3);
  return;
}



undefined4 FUN_00c8d320(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint _Size;
  uint _Size_00;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  _Size_00 = 0x80 - iVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (iVar1 != 0) {
      memcpy((void *)(iVar1 + 0x60 + param_1),param_2,_Size_00);
      func_0x00c869e0(param_1,param_1 + 0x60,0x80);
      *(undefined4 *)(param_1 + 0xe0) = 0;
      param_2 = (void *)((int)param_2 + _Size_00);
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x80 < param_3) {
      _Size = 0x80;
      if ((param_3 & 0x7f) != 0) {
        _Size = param_3 & 0x7f;
      }
      func_0x00c869e0(param_1,param_2,param_3 - _Size);
      param_2 = (void *)((int)param_2 + (param_3 - _Size));
    }
  }
  memcpy((void *)(*(int *)(param_1 + 0xe0) + 0x60 + param_1),param_2,_Size);
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + _Size;
  return 1;
}



undefined4 FUN_00c8f140(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint _Size;
  uint _Size_00;
  
  iVar1 = *(int *)(param_1 + 0x70);
  _Size_00 = 0x40 - iVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (iVar1 != 0) {
      memcpy((void *)(iVar1 + 0x30 + param_1),param_2,_Size_00);
      func_0x00c8d3d0(param_1,param_1 + 0x30,0x40);
      *(undefined4 *)(param_1 + 0x70) = 0;
      param_2 = (void *)((int)param_2 + _Size_00);
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x40 < param_3) {
      _Size = 0x40;
      if ((param_3 & 0x3f) != 0) {
        _Size = param_3 & 0x3f;
      }
      func_0x00c8d3d0(param_1,param_2,param_3 - _Size);
      param_2 = (void *)((int)param_2 + (param_3 - _Size));
    }
  }
  memcpy((void *)(*(int *)(param_1 + 0x70) + 0x30 + param_1),param_2,_Size);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + _Size;
  return 1;
}



undefined4 FUN_00c8f290(size_t *param_1,void *param_2,uint param_3)

{
  void *_Dst;
  uint uVar1;
  size_t sVar2;
  
  sVar2 = *param_1;
  if (sVar2 != 0) {
    uVar1 = 8 - sVar2;
    _Dst = (void *)(sVar2 + 4 + (int)param_1);
    if (param_3 < uVar1) {
      memcpy(_Dst,param_2,param_3);
      *param_1 = *param_1 + param_3;
      return 1;
    }
    memcpy(_Dst,param_2,uVar1);
    *param_1 = 0;
    param_3 = param_3 - uVar1;
    param_2 = (void *)((int)param_2 + uVar1);
    func_0x00c8f330(param_1,param_1 + 1,8);
  }
  uVar1 = param_3 & 0xfffffff8;
  if (uVar1 != 0) {
    func_0x00c8f330(param_1,param_2,uVar1);
  }
  sVar2 = param_3 - uVar1;
  if (sVar2 != 0) {
    memcpy(param_1 + 1,(void *)(uVar1 + (int)param_2),sVar2);
    *param_1 = sVar2;
  }
  return 1;
}



undefined4 FUN_00c8f620(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x14) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar3;
    piVar1 = (int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (param_3 >> 0x1d);
    _Dst = (void *)(param_1 + 0x1c);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x00448540(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x00448540(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x5c) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



undefined4 FUN_00c8fae0(void)

{
  byte bVar1;
  sbyte sVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  uint uVar10;
  uint uStack00000010;
  int in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_00000020;
  
  func_0x00e87f70();
  if (0xfffffff < in_stack_00000020) {
    uStack00000010 = in_stack_00000020 >> 0x1c;
    do {
      uVar10 = *(uint *)(in_stack_00000018 + 0x80);
      *(int *)(in_stack_00000018 + 0x84) = *(int *)(in_stack_00000018 + 0x84) + -0x80000000;
      if (*(uint *)(in_stack_00000018 + 0x84) < 0x80000000) {
        uVar7 = 1;
        piVar4 = (int *)(in_stack_00000018 + 0x88);
        do {
          *piVar4 = *piVar4 + 1;
          if (*piVar4 != 0) break;
          uVar7 = uVar7 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar7 < 8);
      }
      uVar7 = 0x80000000;
      pbVar6 = in_stack_0000001c;
      if ((uVar10 & 7) == 0) {
        do {
          if ((uVar10 == 0) && (uVar9 = uVar7 >> 9, uVar9 != 0)) {
            func_0x00ce3480(in_stack_00000018,pbVar6,uVar9);
            pbVar6 = pbVar6 + ((uVar9 << 9) >> 3);
            uVar7 = uVar7 & 0x1ff;
          }
          else {
            uVar9 = 0x200 - uVar10;
            _Dst = (void *)((uVar10 >> 3) + 0x40 + in_stack_00000018);
            if (uVar7 < uVar9) {
              memcpy(_Dst,pbVar6,uVar7 >> 3);
              uVar10 = uVar10 + uVar7;
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 - uVar9;
              memcpy(_Dst,pbVar6,uVar9 >> 3);
              pbVar6 = pbVar6 + (uVar9 >> 3);
              func_0x00ce3480(in_stack_00000018,in_stack_00000018 + 0x40,1);
              uVar10 = 0;
            }
            *(uint *)(in_stack_00000018 + 0x80) = uVar10;
          }
        } while (uVar7 != 0);
      }
      else {
        sVar2 = (sbyte)(uVar10 & 7);
        bVar3 = 8 - sVar2;
        while (uVar7 != 0) {
          bVar1 = *pbVar6;
          pbVar5 = (byte *)(in_stack_00000018 + 0x40 + (uVar10 >> 3));
          iVar8 = (uVar10 >> 3) + 1;
          *pbVar5 = bVar1 >> sVar2 | *pbVar5;
          if (uVar7 < 9) {
            uVar10 = uVar10 + uVar7;
            if (uVar10 == 0x200) {
              func_0x00ce3480(in_stack_00000018,in_stack_00000018 + 0x40,1);
              iVar8 = 0;
              uVar10 = 0;
            }
            uVar7 = 0;
            *(byte *)(iVar8 + 0x40 + in_stack_00000018) = bVar1 << (bVar3 & 0x1f);
            *(uint *)(in_stack_00000018 + 0x80) = uVar10;
          }
          else {
            pbVar6 = pbVar6 + 1;
            uVar10 = uVar10 + 8;
            uVar7 = uVar7 - 8;
            if (0x1ff < uVar10) {
              func_0x00ce3480(in_stack_00000018,in_stack_00000018 + 0x40,1);
              iVar8 = 0;
              uVar10 = uVar10 & 0x1ff;
            }
            *(byte *)(iVar8 + 0x40 + in_stack_00000018) = bVar1 << (bVar3 & 0x1f);
            *(uint *)(in_stack_00000018 + 0x80) = uVar10;
          }
        }
      }
      in_stack_00000020 = in_stack_00000020 + 0xf0000000;
      in_stack_0000001c = in_stack_0000001c + 0x10000000;
      uStack00000010 = uStack00000010 - 1;
    } while (uStack00000010 != 0);
  }
  if (in_stack_00000020 != 0) {
    func_0x00c8f720(in_stack_00000018,in_stack_0000001c,in_stack_00000020 << 3);
  }
  return 1;
}



undefined4 FUN_00c93b70(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    piVar1 = (int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (param_3 >> 0x1d);
    _Dst = (void *)(param_1 + 0x28);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x00c8fd00(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x00c8fd00(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x68) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



void FUN_00c93c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00c93ca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}



void FUN_00c93ca0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  uint in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  int in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 uVar13;
  
  func_0x00e87f70();
  uVar6 = in_stack_00000094;
  uVar5 = in_stack_00000090;
  uVar11 = in_stack_00000088;
  iVar4 = in_stack_00000084;
  uVar3 = in_stack_00000078;
  uVar13 = in_stack_00000074;
  in_stack_0000006c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  puVar12 = &stack0x0000001c;
  if (in_stack_00000084 == 0) {
    FUN_008ab370();
    return;
  }
  uVar7 = func_0x00ce3c20(in_stack_00000080);
  piVar8 = (int *)func_0x00bfcd20(uVar7);
  if (piVar8 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\pkcs12\\p12_crpt.c",0x29,"PKCS12_PBE_keyivgen_ex");
    func_0x00bc5160(0x23,0x65,0);
    FUN_008ab370();
    return;
  }
  if (piVar8[1] == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = func_0x00bd2050(piVar8[1]);
  }
  uVar1 = ((undefined4 *)*piVar8)[2];
  uVar2 = *(undefined4 *)*piVar8;
  uVar9 = FUN_00bc39e0(iVar4,&stack0x0000002c,uVar11,uVar5,uVar6);
  iVar10 = func_0x00ce4010(uVar3,in_stack_0000007c,uVar1,uVar2,1,uVar7,uVar9);
  if (iVar10 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\pkcs12\\p12_crpt.c",0x37,"PKCS12_PBE_keyivgen_ex");
    uVar13 = 0x6b;
LAB_00c93e42:
    func_0x00bc5160(0x23,uVar13,0);
    func_0x00ce3c00(piVar8);
    FUN_008ab370();
    return;
  }
  iVar10 = func_0x00bc2520(iVar4);
  if (iVar10 < 1) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    uVar11 = func_0x00bc2520(iVar4,&stack0x0000001c,uVar11,uVar5,uVar6);
    iVar10 = func_0x00ce4010(uVar3,in_stack_0000007c,uVar1,uVar2,2,uVar7,uVar11);
    if (iVar10 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\pkcs12\\p12_crpt.c",0x40,"PKCS12_PBE_keyivgen_ex");
      uVar13 = 0x6a;
      goto LAB_00c93e42;
    }
  }
  func_0x00ce3c00(piVar8);
  func_0x00ba8630(uVar13,iVar4,0,&stack0x0000002c,puVar12,in_stack_0000008c);
  func_0x00401320(&stack0x0000002c,0x40);
  func_0x00401320(&stack0x0000001c,0x10);
  FUN_008ab370();
  return;
}



void FUN_00c93ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00c93ef0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}



void FUN_00c93ef0(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  uint in_stack_0000013c;
  undefined4 in_stack_00000144;
  char *in_stack_00000148;
  int in_stack_0000014c;
  int *in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 uVar14;
  
  func_0x00e87f70();
  uVar5 = in_stack_00000164;
  uVar4 = in_stack_00000160;
  uVar9 = in_stack_00000158;
  uVar14 = in_stack_00000154;
  piVar7 = in_stack_00000150;
  iVar12 = in_stack_0000014c;
  pcVar3 = in_stack_00000148;
  in_stack_0000013c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  in_stack_00000030 = in_stack_00000144;
  iVar11 = 0;
  in_stack_00000024 = FUN_00bc42b0(in_stack_00000158);
  if (((piVar7 == (int *)0x0) || (*piVar7 != 0x10)) || (piVar7[1] == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p5_crpt.c",0x2f,"PKCS5_PBE_keyivgen_ex");
    func_0x00bc5160(6,0x72,0);
    FUN_008ab370();
    return;
  }
  uVar6 = func_0x00ce3c20(piVar7);
  piVar7 = (int *)func_0x00bfcd20(uVar6);
  if (piVar7 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p5_crpt.c",0x35,"PKCS5_PBE_keyivgen_ex");
    func_0x00bc5160(6,0x72,0);
    goto LAB_00c93fc7;
  }
  in_stack_0000002c = func_0x00bc2520(uVar14);
  if (in_stack_0000002c < 0x11) {
    in_stack_00000028 = FUN_00bc39e0(uVar14);
    if (0x40 < in_stack_00000028) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\p5_crpt.c",0x40,"PKCS5_PBE_keyivgen_ex");
      uVar14 = 0x82;
      goto LAB_00c94265;
    }
    if (piVar7[1] == 0) {
      in_stack_00000020 = 1;
    }
    else {
      in_stack_00000020 = func_0x00bd2050(piVar7[1]);
    }
    uVar6 = ((undefined4 *)*piVar7)[2];
    uVar2 = *(undefined4 *)*piVar7;
    if (pcVar3 == (char *)0x0) {
      iVar12 = 0;
    }
    else if (iVar12 == -1) {
      pcVar13 = pcVar3;
      do {
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar12 = (int)pcVar13 - (int)(pcVar3 + 1);
    }
    iVar8 = func_0x00bc4320(uVar9);
    if (0 < iVar8) {
      uVar9 = func_0x00ce3100(uVar4,"PBKDF1",uVar5);
      iVar11 = func_0x00cdcad0(uVar9);
      FUN_00ce3130(uVar9);
      if (iVar11 != 0) {
        puVar10 = (undefined4 *)func_0x00bbfaa0(&stack0x00000034,&DAT_01059dc0,pcVar3,iVar12);
        in_stack_00000048 = *puVar10;
        in_stack_0000004c = puVar10[1];
        in_stack_00000050 = puVar10[2];
        in_stack_00000054 = puVar10[3];
        in_stack_00000058 = puVar10[4];
        puVar10 = (undefined4 *)func_0x00bbfaa0(&stack0x00000034,&DAT_01059db8,uVar6,uVar2);
        in_stack_0000005c = *puVar10;
        in_stack_00000060 = puVar10[1];
        in_stack_00000064 = puVar10[2];
        in_stack_00000068 = puVar10[3];
        in_stack_0000006c = puVar10[4];
        puVar10 = (undefined4 *)func_0x00bbfa40(&stack0x00000034,&DAT_01093bec,&stack0x00000020);
        in_stack_00000070 = *puVar10;
        in_stack_00000074 = puVar10[1];
        in_stack_00000078 = puVar10[2];
        in_stack_0000007c = puVar10[3];
        in_stack_00000080 = puVar10[4];
        puVar10 = (undefined4 *)func_0x00bbfb90(&stack0x00000034,"digest",in_stack_00000024,0);
        in_stack_00000084 = *puVar10;
        in_stack_00000088 = puVar10[1];
        in_stack_0000008c = puVar10[2];
        in_stack_00000090 = puVar10[3];
        in_stack_00000094 = puVar10[4];
        puVar10 = (undefined4 *)func_0x00bbfa10(&stack0x00000034);
        in_stack_00000098 = *puVar10;
        in_stack_0000009c = puVar10[1];
        in_stack_000000a0 = puVar10[2];
        in_stack_000000a4 = puVar10[3];
        in_stack_000000a8 = puVar10[4];
        iVar12 = func_0x00cdcb90(iVar11,&stack0x000000bc,iVar8,&stack0x00000048);
        if (iVar12 == 1) {
          memcpy(&stack0x000000fc,&stack0x000000bc,in_stack_00000028);
          memcpy(&stack0x000000ac,&stack0x000000cc + -in_stack_0000002c,in_stack_0000002c);
          iVar12 = func_0x00ba8630(in_stack_00000030,uVar14,0,&stack0x000000fc,&stack0x000000ac,
                                   in_stack_0000015c);
          if (iVar12 != 0) {
            func_0x00401320(&stack0x000000bc,0x40);
            func_0x00401320(&stack0x000000fc,0x40);
            func_0x00401320(&stack0x000000ac,0x10);
          }
        }
      }
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p5_crpt.c",0x3b,"PKCS5_PBE_keyivgen_ex");
    uVar14 = 0xc2;
LAB_00c94265:
    func_0x00bc5160(6,uVar14,0);
  }
  func_0x00cdc990(iVar11);
  func_0x00ce3c00(piVar7);
LAB_00c93fc7:
  FUN_008ab370();
  return;
}



void FUN_00c94300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00c94330(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}



void FUN_00c94330(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *in_stack_00000010;
  uint in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 uVar8;
  
  func_0x00e87f70();
  uVar3 = in_stack_0000008c;
  uVar2 = in_stack_00000088;
  uVar1 = in_stack_00000070;
  uVar8 = in_stack_0000006c;
  in_stack_00000064 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar7 = 0;
  uVar4 = func_0x00ce40f0(in_stack_00000078);
  piVar5 = (int *)func_0x00bfcd20(uVar4);
  if (piVar5 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0x7f,"PKCS5_v2_PBE_keyivgen_ex");
    func_0x00bc5160(6,0x72,0);
    goto LAB_00c94520;
  }
  uVar4 = func_0x00bc27b0(*(undefined4 *)*piVar5,0,0,0,&stack0x00000010);
  iVar6 = func_0x00c3f940(2,uVar4);
  if (iVar6 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0x86,"PKCS5_v2_PBE_keyivgen_ex");
    func_0x00bc5160(6,0x7c,0);
    goto LAB_00c94520;
  }
  iVar6 = func_0x00bc27c0(&stack0x00000014,0x50,*(undefined4 *)piVar5[1],0);
  if (iVar6 < 1) {
    FUN_00bc4f50();
    uVar8 = 0x8e;
LAB_00c94430:
    func_0x00bc5050("crypto\\evp\\p5_crpt2.c",uVar8,"PKCS5_v2_PBE_keyivgen_ex");
    func_0x00bc5160(6,0x6b,0);
  }
  else {
    FUN_00bcaeb0();
    iVar7 = func_0x00ba8520(uVar2,&stack0x00000014,uVar3);
    iVar6 = iVar7;
    if (iVar7 == 0) {
      iVar6 = func_0x00bf0d60(&stack0x00000014);
      if (iVar6 == 0) {
        FUN_00bcacf0();
        FUN_00bc4f50();
        uVar8 = 0x9a;
        goto LAB_00c94430;
      }
    }
    func_0x00bcad80();
    iVar6 = func_0x00ba8630(uVar8,iVar6,0,0,0,in_stack_00000084);
    if (iVar6 != 0) {
      iVar6 = func_0x00bc3b70(uVar8,*(undefined4 *)(piVar5[1] + 4));
      if (iVar6 < 1) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xa3,"PKCS5_v2_PBE_keyivgen_ex");
        func_0x00bc5160(6,0x7a,0);
      }
      else {
        (*in_stack_00000010)
                  (uVar8,uVar1,in_stack_00000074,*(undefined4 *)(*piVar5 + 4),0,0,in_stack_00000084,
                   uVar2,uVar3);
      }
    }
  }
LAB_00c94520:
  FUN_00ba8550(iVar7);
  func_0x00ce40d0(piVar5);
  FUN_008ab370();
  return;
}



void FUN_00c94550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00c94580(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}



void FUN_00c94580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  uint in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  
  func_0x00e87f70();
  uVar6 = in_stack_00000078;
  uVar3 = in_stack_0000006c;
  in_stack_00000064 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  piVar9 = (int *)0x0;
  param_8 = in_stack_00000070;
  param_5 = in_stack_00000088;
  iVar10 = 0;
  param_4 = in_stack_0000008c;
  param_6 = 0;
  iVar4 = func_0x00bc36d0(in_stack_0000006c);
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xc3,"PKCS5_v2_PBKDF2_keyivgen_ex");
    func_0x00bc5160(6,0x83,0);
    uVar7 = 0;
  }
  else {
    uVar5 = func_0x00bc3840(uVar3);
    if (0x40 < uVar5) {
      func_0x00bbf4f0("assertion failed: keylen <= sizeof(key)","crypto\\evp\\p5_crpt2.c",199);
    }
    uVar6 = func_0x00ce4120(uVar6);
    piVar9 = (int *)func_0x00bfcd20(uVar6);
    if (piVar9 == (int *)0x0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xce,"PKCS5_v2_PBKDF2_keyivgen_ex");
      func_0x00bc5160(6,0x72,0);
      uVar7 = uVar5;
    }
    else {
      uVar7 = func_0x00bc3840(uVar3);
      param_7 = uVar7;
      if ((int)uVar7 < 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xd4,"PKCS5_v2_PBKDF2_keyivgen_ex");
        func_0x00bc5160(6,0x82,0);
        uVar7 = uVar5;
      }
      else if ((piVar9[2] == 0) || (uVar5 = func_0x00bd2050(piVar9[2]), uVar5 == uVar7)) {
        if ((undefined4 *)piVar9[3] == (undefined4 *)0x0) {
          uVar6 = 0xa3;
        }
        else {
          uVar6 = func_0x00bc27b0(*(undefined4 *)piVar9[3]);
        }
        iVar4 = func_0x00c3f890(1,uVar6,0,&param_3,0);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xe6,"PKCS5_v2_PBKDF2_keyivgen_ex");
          func_0x00bc5160(6,0x7d,0);
        }
        else {
          FUN_00bcaeb0();
          uVar6 = func_0x00bc2790(param_3,param_4);
          iVar10 = func_0x00bd4740(param_5,uVar6);
          param_2 = iVar10;
          if (iVar10 == 0) {
            uVar6 = func_0x00bc2790(param_3);
            param_2 = func_0x00bf0e00(uVar6);
            if (param_2 == 0) {
              FUN_00bcacf0();
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xf0,"PKCS5_v2_PBKDF2_keyivgen_ex");
              func_0x00bc5160(6,0x7d,0);
              goto LAB_00c9486c;
            }
          }
          func_0x00bcad80();
          if (*(int *)*piVar9 == 4) {
            puVar1 = (undefined4 *)((int *)*piVar9)[1];
            uVar6 = puVar1[2];
            uVar2 = *puVar1;
            uVar8 = func_0x00bd2050(piVar9[1]);
            iVar4 = func_0x00c948a0(param_8,in_stack_00000074,uVar6,uVar2,uVar8,param_2,param_7,
                                    &stack0x00000024,param_5,param_4);
            if (iVar4 != 0) {
              param_6 = func_0x00ba8630(uVar3,0,0,&stack0x00000024,0,in_stack_00000084);
            }
          }
          else {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xf6,"PKCS5_v2_PBKDF2_keyivgen_ex");
            func_0x00bc5160(6,0x7e,0);
          }
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\p5_crpt2.c",0xdc,"PKCS5_v2_PBKDF2_keyivgen_ex");
        func_0x00bc5160(6,0x7b,0);
      }
    }
  }
LAB_00c9486c:
  func_0x00401320(&stack0x00000024,uVar7);
  func_0x00ce4100(piVar9);
  FUN_00bd4770(iVar10);
  FUN_008ab370();
  return;
}



void FUN_00c94ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00c94af0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}



void FUN_00c94af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9,int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 uVar7;
  
  func_0x00e87f70();
  uVar3 = in_stack_00000094;
  uVar2 = in_stack_00000090;
  uVar1 = in_stack_00000080;
  uVar7 = in_stack_00000074;
  in_stack_0000006c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_8 = in_stack_00000078;
  piVar6 = (int *)0x0;
  iVar4 = func_0x00bc36d0(in_stack_00000074);
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\p5_scrypt.c",0xf9,"PKCS5_v2_scrypt_keyivgen_ex");
    func_0x00bc5160(6,0x83,0);
    goto LAB_00c94d59;
  }
  piVar6 = (int *)func_0x00bfcd20(&DAT_01093cd4,uVar1);
  if (piVar6 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\p5_scrypt.c",0x102,"PKCS5_v2_scrypt_keyivgen_ex");
    func_0x00bc5160(6,0x72,0);
    goto LAB_00c94d59;
  }
  iVar4 = func_0x00bc3840(uVar7);
  if (iVar4 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\p5_scrypt.c",0x108,"PKCS5_v2_scrypt_keyivgen_ex");
    func_0x00bc5160(6,0x82,0);
    goto LAB_00c94d59;
  }
  if ((piVar6[4] == 0) ||
     (((iVar5 = func_0x00bd20d0(&param_9,piVar6[4]), iVar5 != 0 && (param_9 == iVar4)) &&
      (param_10 == 0)))) {
    iVar5 = func_0x00bd20d0(&param_6,piVar6[1]);
    if ((((iVar5 == 0) || (iVar5 = func_0x00bd20d0(&param_4,piVar6[2]), iVar5 == 0)) ||
        (iVar5 = func_0x00bd20d0(&param_2,piVar6[3]), iVar5 == 0)) ||
       (iVar5 = func_0x00ce46a0(0,0,0,0,param_6,param_7,param_4,param_5,param_2,param_3,0,0,0,0,
                                uVar2,uVar3), iVar5 == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\asn1\\p5_scrypt.c",0x11d,"PKCS5_v2_scrypt_keyivgen_ex");
      uVar7 = 0xab;
      goto LAB_00c94d3d;
    }
    iVar5 = func_0x00ce46a0(param_8,in_stack_0000007c,((undefined4 *)*piVar6)[2],
                            *(undefined4 *)*piVar6,param_6,param_7,param_4,param_5,param_2,param_3,0
                            ,0,&stack0x0000002c,iVar4,uVar2,uVar3);
    if (iVar5 != 0) {
      func_0x00ba8630(uVar7,0,0,&stack0x0000002c,0,in_stack_0000008c);
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\p5_scrypt.c",0x113,"PKCS5_v2_scrypt_keyivgen_ex");
    uVar7 = 0x7b;
LAB_00c94d3d:
    func_0x00bc5160(6,uVar7,0);
  }
  if (iVar4 != 0) {
    func_0x00401320(&stack0x0000002c,iVar4);
  }
LAB_00c94d59:
  func_0x00c08cb0(piVar6,&DAT_01093cd4);
  FUN_008ab370();
  return;
}



undefined4 FUN_00c94da0(void)

{
  char *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  char *pcVar8;
  void *_Dst;
  size_t _Size;
  char *_Src;
  int iStack00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  func_0x00e87f70();
  uVar3 = FUN_00bc39e0(in_stack_00000010);
  iVar4 = FUN_00bfee30(in_stack_00000014,uVar3);
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\asn_moid.c",0x20,"oid_module_init");
    func_0x00bc5160(0xd,0xac,0);
    return 0;
  }
  iStack00000004 = 0;
  iVar5 = func_0x00bd1830(iVar4);
  if (0 < iVar5) {
    do {
      iVar5 = func_0x00bd1a80(iVar4,iStack00000004);
      _Dst = (void *)0x0;
      _Src = *(char **)(iVar5 + 8);
      pvVar2 = *(void **)(iVar5 + 4);
      pcVar6 = (char *)func_0x00e87d40(_Src,0x2c);
      pvVar7 = pvVar2;
      pcVar8 = _Src;
      if ((pcVar6 != (char *)0x0) && (pcVar8 = pcVar6 + 1, pcVar6 != _Src)) {
        if (*pcVar8 == '\0') goto LAB_00c94f56;
        iVar5 = func_0x00bd12d0((int)*pcVar8,8);
        while (iVar5 != 0) {
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          iVar5 = func_0x00bd12d0((int)*pcVar1,8);
        }
        iVar5 = func_0x00bd12d0((int)*_Src,8);
        while (iVar5 != 0) {
          pcVar1 = _Src + 1;
          _Src = _Src + 1;
          iVar5 = func_0x00bd12d0((int)*pcVar1,8);
        }
        iVar5 = func_0x00bd12d0((int)pcVar6[-1],8);
        while (iVar5 != 0) {
          if (pcVar6 + -1 == _Src) goto LAB_00c94f56;
          iVar5 = func_0x00bd12d0((int)pcVar6[-2],8);
          pcVar6 = pcVar6 + -1;
        }
        _Size = (int)pcVar6 - (int)_Src;
        _Dst = (void *)FUN_00bbc4f0(_Size + 1,"crypto\\asn1\\asn_moid.c",0x5a);
        if (_Dst == (void *)0x0) goto LAB_00c94f56;
        memcpy(_Dst,_Src,_Size);
        *(undefined1 *)(_Size + (int)_Dst) = 0;
        pvVar7 = _Dst;
      }
      iVar5 = func_0x00bc22f0(pcVar8,pvVar2,pvVar7);
      FUN_00bbc580(_Dst,"crypto\\asn1\\asn_moid.c",99);
      if (iVar5 == 0) {
LAB_00c94f56:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\asn1\\asn_moid.c",0x26,"oid_module_init");
        func_0x00bc5160(0xd,0xab,0);
        return 0;
      }
      iStack00000004 = iStack00000004 + 1;
      iVar5 = func_0x00bd1830(iVar4);
    } while (iStack00000004 < iVar5);
  }
  return 1;
}



void thunk_FUN_00c28080(void)

{
  int iVar1;
  
  iVar1 = DAT_013df168;
  if (DAT_013df168 != 0) {
    DAT_013df168 = 0;
    func_0x00bd1860(iVar1,FUN_00c281e0);
  }
  return;
}



undefined4
FUN_00c94fc0(char *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6
            ,int param_7,int param_8,undefined4 param_9,int param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  
  func_0x00e87f70();
  uVar3 = FUN_00bc39e0(param_12);
  iVar4 = FUN_00bfee30(param_13,uVar3);
  param_10 = iVar4;
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\asn1\\asn_mstbl.c",0x1d,"stbl_module_init");
    func_0x00bc5160(0xd,0xac,0);
    return 0;
  }
  iVar12 = 0;
  param_8 = 0;
  iVar5 = func_0x00bd1830(iVar4);
  if (0 < iVar5) {
    do {
      iVar4 = func_0x00bd1a80(iVar4,iVar12);
      param_6 = 0xffffffff;
      uVar3 = 0;
      param_5 = 0xffffffff;
      iVar5 = 0;
      param_2 = 0;
      param_9 = *(undefined4 *)(iVar4 + 4);
      param_3 = *(int *)(iVar4 + 8);
      param_7 = func_0x00bc2b00(param_9);
      if (((param_7 == 0) && (param_7 = func_0x00bc2530(param_9), param_7 == 0)) ||
         (iVar5 = func_0x00be2b70(param_3), iVar5 == 0)) {
LAB_00c9534d:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\asn1\\asn_mstbl.c",0x6b,"do_tcreate");
        pcVar7 = "name=%s, value=%s";
        uVar3 = param_9;
        iVar12 = param_3;
LAB_00c95370:
        func_0x00bc5160(0xd,0xda,pcVar7,uVar3,iVar12);
LAB_00c95385:
        func_0x00bd1860(iVar5,FUN_00be27e0);
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\asn1\\asn_mstbl.c",0x23,"stbl_module_init");
        func_0x00bc5160(0xd,0xdb,0);
        return 0;
      }
      iVar10 = 0;
      param_4 = 0;
      iVar4 = func_0x00bd1830(iVar5);
      if (0 < iVar4) {
        do {
          iVar4 = func_0x00bd1a80(iVar5,iVar10);
          pbVar13 = *(byte **)(iVar4 + 8);
          if (pbVar13 == (byte *)0x0) goto LAB_00c9512e;
          pbVar11 = *(byte **)(iVar4 + 4);
          pbVar9 = &DAT_010087ac;
          pbVar8 = pbVar11;
          do {
            bVar1 = *pbVar8;
            bVar14 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00c95101:
              uVar6 = -(uint)bVar14 | 1;
              goto LAB_00c95106;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar14 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00c95101;
            pbVar8 = pbVar8 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_00c95106:
          if (uVar6 == 0) {
            param_6 = func_0x00e87983(pbVar13,&param_1,0);
            cVar2 = *param_1;
joined_r0x00c95124:
            if (cVar2 != '\0') {
LAB_00c9512e:
              if (iVar4 == 0) goto LAB_00c9534d;
              iVar12 = param_3;
              if (*(int *)(iVar4 + 8) != 0) {
                iVar12 = *(int *)(iVar4 + 8);
              }
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\asn1\\asn_mstbl.c",0x66,"do_tcreate");
              pcVar7 = "field=%s, value=%s";
              uVar3 = *(undefined4 *)(iVar4 + 4);
              goto LAB_00c95370;
            }
          }
          else {
            pbVar9 = &DAT_01015f10;
            pbVar8 = pbVar11;
            do {
              bVar1 = *pbVar8;
              bVar14 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_00c95190:
                uVar6 = -(uint)bVar14 | 1;
                goto LAB_00c95195;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar14 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_00c95190;
              pbVar8 = pbVar8 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            uVar6 = 0;
LAB_00c95195:
            if (uVar6 == 0) {
              param_5 = func_0x00e87983(pbVar13,&param_1,0);
              cVar2 = *param_1;
              goto joined_r0x00c95124;
            }
            pbVar9 = &DAT_01093de8;
            pbVar8 = pbVar11;
            do {
              bVar1 = *pbVar8;
              bVar14 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_00c951e5:
                uVar6 = -(uint)bVar14 | 1;
                goto LAB_00c951ea;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar14 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_00c951e5;
              pbVar8 = pbVar8 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            uVar6 = 0;
LAB_00c951ea:
            if (uVar6 == 0) {
              iVar12 = func_0x00c6c1b0(pbVar13,&param_2);
              if ((iVar12 != 0) && (param_2 != 0)) goto LAB_00c952b7;
              goto LAB_00c9512e;
            }
            pcVar7 = "flags";
            do {
              bVar1 = *pbVar11;
              bVar14 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00c95240:
                uVar6 = -(uint)bVar14 | 1;
                goto LAB_00c95245;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar11[1];
              bVar14 = bVar1 < ((byte *)pcVar7)[1];
              if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00c95240;
              pbVar11 = pbVar11 + 2;
              pcVar7 = (char *)((byte *)pcVar7 + 2);
            } while (bVar1 != 0);
            uVar6 = 0;
LAB_00c95245:
            if (uVar6 != 0) goto LAB_00c9512e;
            pcVar7 = "nomask";
            pbVar11 = pbVar13;
            do {
              bVar1 = *pbVar11;
              bVar14 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00c95274:
                uVar6 = -(uint)bVar14 | 1;
                goto LAB_00c95279;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar11[1];
              bVar14 = bVar1 < ((byte *)pcVar7)[1];
              if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00c95274;
              pbVar11 = pbVar11 + 2;
              pcVar7 = (char *)((byte *)pcVar7 + 2);
            } while (bVar1 != 0);
            uVar6 = 0;
LAB_00c95279:
            if (uVar6 == 0) {
              uVar3 = 2;
            }
            else {
              pbVar11 = &DAT_01142038;
              do {
                bVar1 = *pbVar13;
                bVar14 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_00c952a7:
                  uVar6 = -(uint)bVar14 | 1;
                  goto LAB_00c952ac;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar13[1];
                bVar14 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_00c952a7;
                pbVar13 = pbVar13 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              uVar6 = 0;
LAB_00c952ac:
              if (uVar6 != 0) goto LAB_00c9512e;
              uVar3 = 1;
            }
          }
LAB_00c952b7:
          iVar10 = param_4 + 1;
          param_4 = iVar10;
          iVar4 = func_0x00bd1830(iVar5);
          iVar12 = param_8;
        } while (iVar10 < iVar4);
      }
      iVar4 = func_0x00c27f50(param_7,param_6,param_5,param_2,uVar3);
      if (iVar4 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\asn1\\asn_mstbl.c",0x71,"do_tcreate");
        func_0x00bc5160(0xd,0x8000d,0);
        goto LAB_00c95385;
      }
      func_0x00bd1860(iVar5,FUN_00be27e0);
      iVar4 = param_10;
      iVar12 = iVar12 + 1;
      param_8 = iVar12;
      iVar5 = func_0x00bd1830(param_10);
    } while (iVar12 < iVar5);
  }
  return 1;
}



undefined4 FUN_00c953f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  int unaff_retaddr;
  
  func_0x00e87f70();
  uVar2 = FUN_00bc39e0(param_2);
  iVar3 = FUN_00bfee30(param_3,uVar2);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\evp_cnf.c",0x21,"alg_module_init");
    func_0x00bc5160(6,0xa5,0);
    return 0;
  }
  iVar9 = 0;
  iVar4 = func_0x00bd1830(iVar3);
  if (0 < iVar4) {
    do {
      iVar4 = func_0x00bd1a80(iVar3,iVar9);
      pcVar7 = "fips_mode";
      pbVar8 = *(byte **)(iVar4 + 4);
      pbVar6 = pbVar8;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_00c95490:
          uVar5 = -(uint)bVar10 | 1;
          goto LAB_00c95495;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < ((byte *)pcVar7)[1];
        if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00c95490;
        pbVar6 = pbVar6 + 2;
        pcVar7 = (char *)((byte *)pcVar7 + 2);
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_00c95495:
      if (uVar5 == 0) {
        iVar4 = func_0x00be2830(iVar4,&stack0x00000000);
        if (iVar4 == 0) {
          return 0;
        }
        uVar2 = func_0x00bb6160(param_3,0 < unaff_retaddr,0);
        iVar4 = func_0x00bc92b0(uVar2);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          uVar2 = 0x33;
LAB_00c95557:
          func_0x00bc5050("crypto\\evp\\evp_cnf.c",uVar2,"alg_module_init");
          func_0x00bc5160(6,0xd1,0);
          return 0;
        }
      }
      else {
        pcVar7 = "default_properties";
        do {
          bVar1 = *pbVar8;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00c95507:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_00c9550c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar10 = bVar1 < ((byte *)pcVar7)[1];
          if (bVar1 != ((byte *)pcVar7)[1]) goto LAB_00c95507;
          pbVar8 = pbVar8 + 2;
          pcVar7 = (char *)((byte *)pcVar7 + 2);
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_00c9550c:
        if (uVar5 != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\evp_cnf.c",0x3d,"alg_module_init");
          func_0x00bc5160(6,0xa9,"name=%s, value=%s",*(undefined4 *)(iVar4 + 4),
                          *(undefined4 *)(iVar4 + 8));
          return 0;
        }
        uVar2 = func_0x00bb6160(param_3,*(undefined4 *)(iVar4 + 8),0,0);
        iVar4 = func_0x00bc9730(uVar2);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          uVar2 = 0x39;
          goto LAB_00c95557;
        }
      }
      iVar9 = iVar9 + 1;
      iVar4 = func_0x00bd1830(iVar3);
    } while (iVar9 < iVar4);
  }
  return 1;
}



void FUN_00c95a60(void)

{
  int iVar1;
  
  iVar1 = func_0x00bd1840(DAT_013dffc0);
  while (iVar1 != 0) {
    func_0x00bc67c0(iVar1);
    iVar1 = func_0x00bd1840(DAT_013dffc0);
  }
  FUN_00bd1630(DAT_013dffc0);
  DAT_013dffc0 = 0;
  return;
}



undefined4 FUN_00c95ab0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00bc39e0(param_1);
  iVar2 = FUN_00bfee30(param_2,uVar1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\engine\\eng_cnf.c",0x9e,"int_engine_module_init");
    func_0x00bc5160(0x26,0x94,0);
    return 0;
  }
  iVar4 = 0;
  iVar3 = func_0x00bd1830(iVar2);
  if (0 < iVar3) {
    do {
      iVar3 = func_0x00bd1a80(iVar2,iVar4);
      iVar3 = func_0x00c955e0(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),param_2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = func_0x00bd1830(iVar2);
    } while (iVar4 < iVar3);
  }
  return 1;
}



void FUN_00c95c30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uStack00000004;
  
  func_0x00e87f70();
  if (DAT_013dffc4 != 0) {
    uStack00000004 = 0;
    if (DAT_013dffc8 != 0) {
      iVar3 = 0;
      do {
        iVar1 = DAT_013dffc4;
        FUN_00bbc580(*(undefined4 *)(iVar3 + DAT_013dffc4),"crypto\\conf\\conf_ssl.c",0x31);
        uVar2 = 0;
        if (*(int *)(iVar3 + 8 + iVar1) != 0) {
          do {
            FUN_00bbc580(*(undefined4 *)(*(int *)(iVar3 + 4 + iVar1) + uVar2 * 8),
                         "crypto\\conf\\conf_ssl.c",0x33);
            FUN_00bbc580(*(undefined4 *)(*(int *)(iVar3 + 4 + iVar1) + 4 + uVar2 * 8),
                         "crypto\\conf\\conf_ssl.c",0x34);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(iVar1 + 8 + iVar3));
        }
        FUN_00bbc580(*(undefined4 *)(iVar3 + 4 + iVar1),"crypto\\conf\\conf_ssl.c",0x36);
        uStack00000004 = uStack00000004 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uStack00000004 < DAT_013dffc8);
    }
    FUN_00bbc580(DAT_013dffc4,"crypto\\conf\\conf_ssl.c",0x38);
    DAT_013dffc4 = 0;
    DAT_013dffc8 = 0;
  }
  return;
}



undefined4 FUN_00c95d20(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iStack00000004;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x00e87f70();
  uVar3 = FUN_00bc39e0(in_stack_00000018);
  iVar4 = FUN_00bfee30(in_stack_0000001c,uVar3);
  iVar5 = func_0x00bd1830(iVar4);
  if (iVar5 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_ssl.c",0x4c,"ssl_module_init");
    func_0x00bc5160(0xe,0x78 - (uint)(iVar4 != 0),"section=%s",uVar3);
  }
  else {
    uVar6 = func_0x00bd1830(iVar4);
    FUN_00c95c30(in_stack_00000018);
    DAT_013dffc4 = FUN_00bbc830(uVar6 * 0xc,"crypto\\conf\\conf_ssl.c",0x51);
    if (DAT_013dffc4 != 0) {
      uVar10 = 0;
      DAT_013dffc8 = uVar6;
      if (uVar6 != 0) {
        iStack00000004 = 0;
        do {
          piVar1 = (int *)(iStack00000004 + DAT_013dffc4);
          iVar5 = func_0x00bd1a80(iVar4,uVar10);
          iVar7 = FUN_00bfee30(in_stack_0000001c,*(undefined4 *)(iVar5 + 8));
          iVar8 = func_0x00bd1830(iVar7);
          if (iVar8 < 1) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\conf\\conf_ssl.c",0x60,"ssl_module_init");
            func_0x00bc5160(0xe,0x76 - (uint)(iVar7 != 0),"name=%s, value=%s",
                            *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
            goto LAB_00c95d85;
          }
          iVar5 = func_0x00bbbc70(*(undefined4 *)(iVar5 + 4),"crypto\\conf\\conf_ssl.c",100);
          *piVar1 = iVar5;
          if (iVar5 == 0) goto LAB_00c95d85;
          uVar6 = func_0x00bd1830(iVar7);
          iVar5 = FUN_00bbc830(uVar6 * 8,"crypto\\conf\\conf_ssl.c",0x68);
          piVar1[1] = iVar5;
          if (iVar5 == 0) goto LAB_00c95d85;
          uVar9 = 0;
          piVar1[2] = uVar6;
          if (uVar6 != 0) {
            do {
              iVar8 = func_0x00bd1a80(iVar7,uVar9);
              piVar2 = (int *)(piVar1[1] + uVar9 * 8);
              iVar5 = func_0x008ab0c6(*(undefined4 *)(iVar8 + 4),0x2e);
              if (iVar5 == 0) {
                iVar5 = *(int *)(iVar8 + 4);
              }
              else {
                iVar5 = iVar5 + 1;
              }
              iVar5 = func_0x00bbbc70(iVar5,"crypto\\conf\\conf_ssl.c",0x77);
              *piVar2 = iVar5;
              iVar5 = func_0x00bbbc70(*(undefined4 *)(iVar8 + 8),"crypto\\conf\\conf_ssl.c",0x78);
              piVar2[1] = iVar5;
              if ((*piVar2 == 0) || (iVar5 == 0)) goto LAB_00c95d85;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar6);
          }
          uVar10 = uVar10 + 1;
          iStack00000004 = iStack00000004 + 0xc;
        } while (uVar10 < DAT_013dffc8);
      }
      return 1;
    }
  }
LAB_00c95d85:
  FUN_00c95c30(in_stack_00000018);
  return 0;
}



undefined4 FUN_00c977e0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  int in_stack_00000010;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(in_stack_00000010 + 0xc) + 0xbc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",0x20,"ossl_ecdh_compute_key");
    func_0x00bc5160(0x10,0xa0,0);
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00c97821. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



undefined4 FUN_00c97830(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  int iStack00000004;
  undefined4 uStack00000008;
  undefined4 *in_stack_00000010;
  uint *in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 uVar8;
  
  func_0x00e87f70();
  _Dst = (void *)0x0;
  iVar7 = 0;
  iStack00000004 = 0;
  uStack00000008 = 0;
  iVar1 = func_0x00bb5940(*(undefined4 *)(in_stack_0000001c + 0x30));
  if (iVar1 == 0) goto LAB_00c97ac7;
  func_0x00bb59e0(iVar1);
  iVar7 = func_0x00bb57f0(iVar1);
  if (iVar7 == 0) {
    FUN_00bc4f50();
    uVar8 = 0x42;
LAB_00c97888:
    func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",uVar8,"ossl_ecdh_simple_compute_key");
    func_0x00bc5160(0x10,0x80003,0);
  }
  else {
    iVar2 = FUN_00baaa40(in_stack_0000001c);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",0x48,"ossl_ecdh_simple_compute_key");
      func_0x00bc5160(0x10,0x7d,0);
      goto LAB_00c97ac7;
    }
    uVar8 = func_0x00bb6310(in_stack_0000001c);
    uVar3 = func_0x00bb62f0(in_stack_0000001c);
    if ((uVar3 & 0x1000) != 0) {
      iVar4 = func_0x00c10680(uVar8,iVar7,0);
      if (iVar4 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",0x54,"ossl_ecdh_simple_compute_key");
        func_0x00bc5160(0x10,0x80010,0);
        goto LAB_00c97ac7;
      }
      iVar4 = func_0x00be8540(iVar7,iVar7,iVar2,iVar1);
      iVar2 = iVar7;
      if (iVar4 == 0) {
        FUN_00bc4f50();
        uVar8 = 0x58;
        goto LAB_00c97888;
      }
    }
    iStack00000004 = func_0x00c11e70(uVar8);
    if (iStack00000004 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",0x5f,"ossl_ecdh_simple_compute_key");
      func_0x00bc5160(0x10,0x80010,0);
      goto LAB_00c97ac7;
    }
    iVar2 = func_0x00c11d30(uVar8,iStack00000004,0,in_stack_00000018,iVar2,iVar1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar8 = 100;
    }
    else {
      iVar2 = func_0x00c11a40(uVar8,iStack00000004,iVar7,0,iVar1);
      if (iVar2 != 0) {
        iVar2 = func_0x00c10700(uVar8);
        uVar6 = (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3;
        iVar2 = func_0x00bba610(iVar7);
        uVar3 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
        if (uVar6 < uVar3) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",0x79,"ossl_ecdh_simple_compute_key");
          func_0x00bc5160(0x10,0xc0103,0);
          goto LAB_00c97ac7;
        }
        _Dst = (void *)FUN_00bbc4f0(uVar6,"crypto\\ec\\ecdh_ossl.c",0x7c);
        if (_Dst == (void *)0x0) goto LAB_00c97ac7;
        memset(_Dst,0,uVar6 - uVar3);
        uVar5 = func_0x00bb9f70(iVar7,(uVar6 - uVar3) + (int)_Dst);
        if (uVar3 == uVar5) {
          uStack00000008 = 1;
          *in_stack_00000010 = _Dst;
          _Dst = (void *)0x0;
          *in_stack_00000014 = uVar6;
          goto LAB_00c97ac7;
        }
        FUN_00bc4f50();
        uVar8 = 0x81;
        goto LAB_00c97888;
      }
      FUN_00bc4f50();
      uVar8 = 0x6e;
    }
    func_0x00bc5050("crypto\\ec\\ecdh_ossl.c",uVar8,"ossl_ecdh_simple_compute_key");
    func_0x00bc5160(0x10,0x9b,0);
  }
LAB_00c97ac7:
  func_0x00bb9ff0(iVar7);
  func_0x00c11760(iStack00000004);
  func_0x00bb56f0(iVar1);
  func_0x00bb5760(iVar1);
  FUN_00bbc580(_Dst,"crypto\\ec\\ecdh_ossl.c",0x91);
  return uStack00000008;
}



undefined4
FUN_00c98040(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5,int param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_4 == 0) && ((param_6 == 0 || (param_7 == 0)))) {
    uVar1 = func_0x00c1fbd0(param_8);
    *param_5 = uVar1;
    return 1;
  }
  iVar2 = func_0x00c55ec0(param_2,param_3,param_6,param_7,param_8);
  if (iVar2 == 0) {
    *param_5 = 0;
    return 0;
  }
  puVar3 = &param_4;
  if (param_4 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  uVar1 = func_0x00c21350(iVar2,puVar3);
  *param_5 = uVar1;
  func_0x00c1fb20(iVar2);
  return 1;
}



undefined4 FUN_00c980c0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0xc) + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x2b,"ossl_ecdsa_sign_setup");
    func_0x00bc5160(0x10,0xaa,0);
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00c98101. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



undefined4 FUN_00c98110(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  int in_stack_00000014;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(in_stack_00000014 + 0xc) + 0xc4);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x37,"ossl_ecdsa_sign_sig");
    func_0x00bc5160(0x10,0xaa,0);
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00c98151. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



void FUN_00c98160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c97b10(param_1,param_2,param_3,param_4,0,0,0,0,0,0);
  return;
}



int * FUN_00c98190(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,int param_8,int param_9,int param_10,
                  int param_11)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  
  func_0x00e87f70();
  iVar3 = param_11;
  iVar8 = 0;
  param_3 = 0;
  param_2 = 0;
  iVar11 = 0;
  iVar2 = func_0x00bb6310(param_11);
  param_4 = FUN_00baaa40(iVar3);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x11f,"ossl_ecdsa_simple_sign_sig");
    func_0x00bc5160(0x10,0xc0102,0);
    return (int *)0x0;
  }
  if (param_4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x123,"ossl_ecdsa_simple_sign_sig");
    func_0x00bc5160(0x10,0x7d,0);
    return (int *)0x0;
  }
  iVar3 = func_0x00c12540(iVar3);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x128,"ossl_ecdsa_simple_sign_sig");
    func_0x00bc5160(0x10,0x9f,0);
    return (int *)0x0;
  }
  piVar4 = (int *)func_0x00c1fb70();
  if (piVar4 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x12e,"ossl_ecdsa_simple_sign_sig");
    func_0x00bc5160(0x10,0x8002a,0);
    return (int *)0x0;
  }
  iVar3 = func_0x00bba5e0();
  *piVar4 = iVar3;
  iVar3 = func_0x00bba5e0();
  piVar4[1] = iVar3;
  if ((*piVar4 == 0) || (iVar3 == 0)) {
    uVar10 = 0x134;
  }
  else {
    iVar8 = func_0x00bb5940(*(undefined4 *)(param_11 + 0x30));
    if ((iVar8 == 0) || (iVar11 = func_0x00bba5e0(), iVar11 == 0)) {
      uVar10 = 0x13b;
    }
    else {
      param_5 = FUN_00bc39e0(iVar2);
      if (param_5 == 0) {
        uVar9 = 0x80010;
        uVar10 = 0x140;
        goto LAB_00c98508;
      }
      uVar5 = func_0x00bba610(param_5);
      if (param_8 * 8 - uVar5 != 0 && (int)uVar5 <= param_8 * 8) {
        param_8 = (int)(uVar5 + 7 + ((int)(uVar5 + 7) >> 0x1f & 7U)) >> 3;
      }
      iVar6 = func_0x00bb9f50(param_7,param_8,iVar11);
      if (iVar6 == 0) {
        uVar10 = 0x14b;
      }
      else {
        if ((param_8 * 8 - uVar5 == 0 || param_8 * 8 < (int)uVar5) ||
           (iVar6 = func_0x00be9e10(iVar11,iVar11,8 - (uVar5 & 7)), iVar6 != 0)) {
          do {
            iVar6 = param_9;
            if ((param_9 == 0) || (param_10 == 0)) {
              iVar7 = func_0x00c97b10(param_11,iVar8,&param_2,piVar4,param_7,param_8,0,0,0,0);
              iVar6 = param_2;
              if (iVar7 == 0) {
                uVar9 = 0x8002a;
                uVar10 = 0x157;
                goto LAB_00c98508;
              }
            }
            else {
              iVar7 = func_0x00bba2d0(*piVar4,param_10);
              if (iVar7 == 0) {
                uVar10 = 0x15e;
                goto LAB_00c98503;
              }
            }
            iVar7 = func_0x00bfa260(iVar3,*piVar4,*(undefined4 *)(iVar2 + 0x5c),iVar8);
            if ((iVar7 == 0) ||
               (iVar7 = func_0x00bfa150(iVar3,iVar3,param_4,*(undefined4 *)(iVar2 + 0x5c),iVar8),
               iVar7 == 0)) {
              uVar10 = 0x16c;
              goto LAB_00c98503;
            }
            iVar7 = func_0x00be9490(iVar3,iVar3,iVar11,param_5);
            if (iVar7 == 0) {
              uVar10 = 0x170;
              goto LAB_00c98503;
            }
            iVar7 = func_0x00bfa260(iVar3,iVar3,*(undefined4 *)(iVar2 + 0x5c),iVar8);
            if ((iVar7 == 0) ||
               (iVar6 = func_0x00bf9d60(iVar3,iVar3,iVar6,*(undefined4 *)(iVar2 + 0x5c),iVar8),
               iVar6 == 0)) {
              uVar10 = 0x179;
              goto LAB_00c98503;
            }
            iVar6 = func_0x00bba540(iVar3);
            if (iVar6 == 0) goto LAB_00c98532;
            if ((param_9 != 0) && (param_10 != 0)) {
              uVar9 = 0x9d;
              uVar10 = 0x183;
              goto LAB_00c98508;
            }
            iVar6 = param_3 + 1;
            bVar1 = param_3 < 9;
            param_3 = iVar6;
          } while (bVar1);
          uVar9 = 0xb0;
          uVar10 = 0x188;
          goto LAB_00c98508;
        }
        uVar10 = 0x150;
      }
    }
  }
LAB_00c98503:
  uVar9 = 0x80003;
LAB_00c98508:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",uVar10,"ossl_ecdsa_simple_sign_sig");
  func_0x00bc5160(0x10,uVar9,0);
  func_0x00c1fb20(piVar4);
  piVar4 = (int *)0x0;
LAB_00c98532:
  func_0x00bb5760(iVar8);
  FUN_00bba080(iVar11);
  FUN_00bba080(param_2);
  return piVar4;
}



uint FUN_00c98560(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iStack0000000c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  undefined4 *in_stack_00000028;
  int in_stack_0000002c;
  undefined4 uVar11;
  
  func_0x00e87f70();
  uVar10 = 0xffffffff;
  iStack0000000c = 0;
  if ((((in_stack_0000002c == 0) || (iVar1 = func_0x00bb6310(in_stack_0000002c), iVar1 == 0)) ||
      (iVar2 = func_0x00baf190(in_stack_0000002c), iVar2 == 0)) ||
     (in_stack_00000028 == (undefined4 *)0x0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x1ca,"ossl_ecdsa_simple_verify_sig");
    uVar11 = 0x7c;
LAB_00c98999:
    func_0x00bc5160(0x10,uVar11,0);
    return 0xffffffff;
  }
  iVar3 = func_0x00c12540(in_stack_0000002c);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x1cf,"ossl_ecdsa_simple_verify_sig");
    uVar11 = 0x9f;
    goto LAB_00c98999;
  }
  iVar3 = func_0x00bb5940(*(undefined4 *)(in_stack_0000002c + 0x30));
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x1d5,"ossl_ecdsa_simple_verify_sig");
    uVar11 = 0x80003;
    goto LAB_00c98999;
  }
  func_0x00bb59e0(iVar3);
  uVar11 = func_0x00bb57f0(iVar3);
  uVar4 = func_0x00bb57f0(iVar3);
  uVar5 = func_0x00bb57f0(iVar3);
  iVar6 = func_0x00bb57f0(iVar3);
  if (iVar6 == 0) {
    FUN_00bc4f50();
    uVar11 = 0x1de;
  }
  else {
    iVar7 = FUN_00bc39e0(iVar1);
    if (iVar7 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x1e4,"ossl_ecdsa_simple_verify_sig");
      func_0x00bc5160(0x10,0x80010,0);
      goto LAB_00c9895a;
    }
    iVar8 = func_0x00bba540(*in_stack_00000028);
    if ((((iVar8 != 0) || (iVar8 = func_0x00bba4c0(*in_stack_00000028), iVar8 != 0)) ||
        ((iVar8 = func_0x00bba970(*in_stack_00000028,iVar7), -1 < iVar8 ||
         ((iVar8 = func_0x00bba540(in_stack_00000028[1]), iVar8 != 0 ||
          (iVar8 = func_0x00bba4c0(in_stack_00000028[1]), iVar8 != 0)))))) ||
       (iVar8 = func_0x00bba970(in_stack_00000028[1],iVar7), -1 < iVar8)) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x1eb,"ossl_ecdsa_simple_verify_sig");
      func_0x00bc5160(0x10,0x9c,0);
      uVar10 = 0;
      goto LAB_00c9895a;
    }
    iVar8 = func_0x00c121e0(iVar1,uVar4,in_stack_00000028[1],iVar3);
    if (iVar8 == 0) {
      FUN_00bc4f50();
      uVar11 = 0x1f1;
    }
    else {
      uVar9 = func_0x00bba610(iVar7);
      if ((int)uVar9 < in_stack_00000024 * 8) {
        in_stack_00000024 = (int)(uVar9 + 7 + ((int)(uVar9 + 7) >> 0x1f & 7U)) >> 3;
      }
      iVar8 = func_0x00bb9f50(in_stack_00000020,in_stack_00000024,uVar5);
      if (iVar8 == 0) {
        FUN_00bc4f50();
        uVar11 = 0x1fc;
      }
      else if (((int)uVar9 < in_stack_00000024 * 8) &&
              (iVar8 = func_0x00be9e10(uVar5,uVar5,8 - (uVar9 & 7)), iVar8 == 0)) {
        FUN_00bc4f50();
        uVar11 = 0x201;
      }
      else {
        iVar8 = func_0x00be92b0(uVar11,uVar5,uVar4,iVar7,iVar3);
        if (iVar8 == 0) {
          FUN_00bc4f50();
          uVar11 = 0x206;
        }
        else {
          iVar8 = func_0x00be92b0(uVar4,*in_stack_00000028,uVar4,iVar7,iVar3);
          if (iVar8 != 0) {
            iStack0000000c = func_0x00c11e70(iVar1);
            if (iStack0000000c == 0) {
              FUN_00bc4f50();
              uVar11 = 0x210;
            }
            else {
              iVar2 = func_0x00c11d30(iVar1,iStack0000000c,uVar11,iVar2,uVar4,iVar3);
              if (iVar2 == 0) {
                FUN_00bc4f50();
                uVar11 = 0x214;
              }
              else {
                iVar1 = func_0x00c11a40(iVar1,iStack0000000c,iVar6,0,iVar3);
                if (iVar1 != 0) {
                  iVar1 = func_0x00be9410(uVar11,iVar6,iVar7,iVar3);
                  if (iVar1 != 0) {
                    iVar1 = func_0x00bba970(uVar11,*in_stack_00000028);
                    uVar10 = (uint)(iVar1 == 0);
                    goto LAB_00c9895a;
                  }
                  FUN_00bc4f50();
                  uVar11 = 0x21e;
                  goto LAB_00c98668;
                }
                FUN_00bc4f50();
                uVar11 = 0x219;
              }
            }
            func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",uVar11,"ossl_ecdsa_simple_verify_sig");
            func_0x00bc5160(0x10,0x80010,0);
            goto LAB_00c9895a;
          }
          FUN_00bc4f50();
          uVar11 = 0x20b;
        }
      }
    }
  }
LAB_00c98668:
  func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",uVar11,"ossl_ecdsa_simple_verify_sig");
  func_0x00bc5160(0x10,0x80003,0);
LAB_00c9895a:
  func_0x00bb56f0(iVar3);
  func_0x00bb5760(iVar3);
  func_0x00c11a10(iStack0000000c);
  return uVar10;
}



undefined4
FUN_00c989b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  func_0x00e87f70();
  piVar6 = param_6;
  uVar5 = 0xffffffff;
  param_1 = param_6;
  param_6 = (int *)func_0x00c1fb70();
  if (param_6 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = func_0x00c20900(&param_6,&param_1,param_7);
  if ((iVar2 != 0) && (uVar3 = func_0x00c21350(param_6,&stack0x00000000), uVar3 == param_7)) {
    piVar4 = (int *)0x0;
    while (uVar1 = uVar3 - 4, 3 < uVar3) {
      if (*piVar6 != *piVar4) goto LAB_00c98a36;
      piVar6 = piVar6 + 1;
      piVar4 = piVar4 + 1;
      uVar3 = uVar1;
    }
    if (uVar1 != 0xfffffffc) {
LAB_00c98a36:
      if (((char)*piVar6 != (char)*piVar4) ||
         ((uVar1 != 0xfffffffd &&
          ((*(char *)((int)piVar6 + 1) != *(char *)((int)piVar4 + 1) ||
           ((uVar1 != 0xfffffffe &&
            ((*(char *)((int)piVar6 + 2) != *(char *)((int)piVar4 + 2) ||
             ((uVar1 != 0xffffffff && (*(char *)((int)piVar6 + 3) != *(char *)((int)piVar4 + 3))))))
            ))))))) goto LAB_00c98a7d;
    }
    uVar5 = func_0x00c55fa0(param_4,param_5,param_6,param_8);
  }
LAB_00c98a7d:
  FUN_00bbc580(0,"crypto\\ec\\ecdsa_ossl.c",0x1b7);
  func_0x00c1fb20(param_6);
  return uVar5;
}



undefined4 FUN_00c98ab0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  int in_stack_00000010;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(in_stack_00000010 + 0xc) + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecdsa_ossl.c",0x43,"ossl_ecdsa_verify_sig");
    func_0x00bc5160(0x10,0xaa,0);
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00c98af1. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



void FUN_00c99bc0(int *param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00bbc580(param_1[1],"crypto\\ui\\ui_lib.c",0x35);
    if (*param_1 == 3) {
      FUN_00bbc580(param_1[5],"crypto\\ui\\ui_lib.c",0x38);
      FUN_00bbc580(param_1[6],"crypto\\ui\\ui_lib.c",0x39);
      FUN_00bbc580(param_1[7],"crypto\\ui\\ui_lib.c",0x3a);
    }
  }
  FUN_00bbc580(param_1,"crypto\\ui\\ui_lib.c",0x44);
  return;
}



int FUN_00c99c30(void)

{
  int iVar1;
  int *in_stack_00000030;
  
  func_0x00e87f70();
  if (*(code **)(*in_stack_00000030 + 8) != (code *)0x0) {
    iVar1 = (**(code **)(*in_stack_00000030 + 8))(in_stack_00000030,&stack0x00000000);
    return (0 < iVar1) - 1;
  }
  return 0;
}



bool FUN_00c99da0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (*param_3 != 0) {
    iVar1 = func_0x00bbbc30(*param_3,8,"crypto\\ui\\ui_util.c",0x4b);
    *param_3 = iVar1;
    return iVar1 != 0;
  }
  return false;
}



void FUN_00c99dd0(undefined4 param_1,undefined4 param_2)

{
  FUN_00bbc580(param_2,"crypto\\ui\\ui_util.c",0x55);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00c99df0(void)

{
  DAT_012b7120 = func_0x00bca460(0xe,0,0,_guard_check_icall,FUN_00c99da0,FUN_00c99dd0);
  _DAT_013dffd0 = 1;
  return;
}



void FUN_00c99e20(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_stack_00000410;
  undefined4 in_stack_00000414;
  
  func_0x00e87f70();
  iVar2 = FUN_00bbba70(in_stack_00000414);
  if (iVar2 == 1) {
    uVar3 = FUN_00bbba70(in_stack_00000410,DAT_012b7120);
    puVar4 = (undefined4 *)func_0x00c99700(uVar3);
    iVar2 = func_0x00c996e0(in_stack_00000414);
    uVar3 = puVar4[1];
    pcVar1 = (code *)*puVar4;
    if (0x400 < iVar2) {
      iVar2 = 0x400;
    }
    uVar5 = FUN_00bc39e0(in_stack_00000410);
    uVar6 = (*pcVar1)(&stack0x00000004,iVar2,uVar3,uVar5);
    if (iVar2 < (int)uVar6) {
      FUN_008ab370();
      return;
    }
    if (-1 < (int)uVar6) {
      if (0x400 < uVar6) {
        func_0x008ab9e3();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (&stack0x00000004)[uVar6] = 0;
      func_0x00c99a30(in_stack_00000410,in_stack_00000414,&stack0x00000004,uVar6);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



bool FUN_00c99f30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_2;
  iVar1 = param_1;
  param_1 = 0;
  if (param_2 == 0) {
    return true;
  }
  iVar2 = func_0x00bc09d0(param_2,&DAT_0103d958);
  if (iVar2 != 0) {
    if ((*(byte *)(iVar1 + 4) & 1) != 0) {
      return true;
    }
    if ((*(int *)(iVar2 + 4) != 5) ||
       (iVar2 = (**(code **)(*(int *)(iVar1 + 0x50) + 0xc))
                          (iVar1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)),
       iVar2 == 0)) {
      FUN_00bc4f50();
      uVar4 = 0xd6;
      goto LAB_00c99f93;
    }
  }
  iVar2 = func_0x00bc09d0(iVar3,"speed");
  if (iVar2 != 0) {
    iVar2 = func_0x00bc0300(iVar2,&param_1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar4 = 0xdd;
      goto LAB_00c99f93;
    }
    (**(code **)(*(int *)(iVar1 + 0x50) + 8))(iVar1,param_1);
  }
  iVar3 = func_0x00bc09d0(iVar3,"keylen");
  if (iVar3 == 0) {
    return true;
  }
  iVar3 = func_0x00bc0300(iVar3,&param_2);
  if (iVar3 != 0) {
    return param_2 == *(int *)(iVar1 + 8);
  }
  FUN_00bc4f50();
  uVar4 = 0xe7;
LAB_00c99f93:
  func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_siv.c",uVar4,
                  "aes_siv_set_ctx_params");
  func_0x00bc5160(0x39,0x67,0);
  return false;
}



void FUN_00c9a050(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0x10))(param_1);
    FUN_00bbc6c0(param_1,0x58,"providers\\implementations\\ciphers\\cipher_aes_siv.c",0x37);
  }
  return;
}



int FUN_00c9a080(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x58,"providers\\implementations\\ciphers\\cipher_aes_siv.c",0x43);
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x50) + 0x14))(param_1,iVar1);
      if (iVar2 == 0) {
        FUN_00bbc580(iVar1,"providers\\implementations\\ciphers\\cipher_aes_siv.c",0x47);
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  return 0;
}



void FUN_00c9a0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00c9a490(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



void FUN_00c9a100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00c9a490(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



undefined4
FUN_00c9a130(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      if (param_6 == 0) {
        if (param_3 == (uint *)0x0) {
          return 1;
        }
        *param_3 = 0;
        return 1;
      }
      if (param_4 < param_6) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_siv.c",0x82,"siv_cipher");
        func_0x00bc5160(0x39,0x6a,0);
        return 0;
      }
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 4))(param_1,param_2,param_5,param_6);
    if (0 < iVar1) {
      if (param_3 != (uint *)0x0) {
        *param_3 = param_6;
      }
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00c9a1c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 4))(param_1,param_2,0,0);
    if (iVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00c9a200(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0103d958);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 5)) {
    if (((*(byte *)(param_1 + 4) & 1) != 0) && (*(int *)(iVar1 + 0xc) == *(int *)(param_1 + 0xc))) {
      iVar1 = func_0x00bc1050(iVar1,param_1 + 0x20,*(int *)(param_1 + 0xc));
      if (iVar1 != 0) goto LAB_00c9a270;
    }
    FUN_00bc4f50();
    uVar2 = 0xaa;
LAB_00c9a253:
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_siv.c",uVar2,
                    "aes_siv_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
LAB_00c9a270:
  iVar1 = func_0x00bc09d0(param_2,"taglen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0xc));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0xb0;
      goto LAB_00c9a253;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0xb5;
      goto LAB_00c9a253;
    }
  }
  return 1;
}



undefined ** FUN_00c9a2f0(void)

{
  return &PTR_s_keylen_01094440;
}



undefined ** FUN_00c9a300(void)

{
  return &PTR_s_keylen_01094490;
}



undefined4 * FUN_00c9a310(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(0x58,"providers\\implementations\\ciphers\\cipher_aes_siv.c",0x26);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0x10;
    *puVar2 = 0x10004;
    puVar2[2] = 0x20;
    uVar3 = func_0x00ce6e30(0x100);
    puVar2[0x14] = uVar3;
    uVar3 = func_0x00bc3c60(param_1);
    puVar2[0x15] = uVar3;
  }
  return puVar2;
}



void FUN_00c9a370(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10004,3,0,0x100,8,0);
  return;
}



undefined4 * FUN_00c9a390(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(0x58,"providers\\implementations\\ciphers\\cipher_aes_siv.c",0x26);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0x10;
    *puVar2 = 0x10004;
    puVar2[2] = 0x30;
    uVar3 = func_0x00ce6e30(0x180);
    puVar2[0x14] = uVar3;
    uVar3 = func_0x00bc3c60(param_1);
    puVar2[0x15] = uVar3;
  }
  return puVar2;
}



void FUN_00c9a3f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10004,3,0,0x180,8,0);
  return;
}



undefined4 * FUN_00c9a410(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(0x58,"providers\\implementations\\ciphers\\cipher_aes_siv.c",0x26);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0x10;
    *puVar2 = 0x10004;
    puVar2[2] = 0x40;
    uVar3 = func_0x00ce6e30(0x200);
    puVar2[0x14] = uVar3;
    uVar3 = func_0x00bc3c60(param_1);
    puVar2[0x15] = uVar3;
  }
  return puVar2;
}



void FUN_00c9a470(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10004,3,0,0x200,8,0);
  return;
}



undefined4 FUN_00c9a610(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  iVar6 = param_3;
  if (param_3 != 0) {
    iVar5 = func_0x00bc09d0(param_3,&DAT_0103d958);
    if (iVar5 != 0) {
      if ((*(int *)(iVar5 + 4) != 5) || (*(int *)(iVar5 + 0xc) != 0x10)) {
        FUN_00bc4f50();
        uVar7 = 0xeb;
        goto LAB_00c9a6b4;
      }
      if ((*(uint *)(param_2 + 0x198) & 1) == 0) {
        puVar1 = *(undefined4 **)(iVar5 + 8);
        uVar7 = *puVar1;
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(uint *)(param_2 + 0x198) = *(uint *)(param_2 + 0x198) | 2;
        *(undefined4 *)(param_2 + 0x7c) = uVar7;
        *(undefined4 *)(param_2 + 0x80) = uVar2;
        *(undefined4 *)(param_2 + 0x84) = uVar3;
        *(undefined4 *)(param_2 + 0x88) = uVar4;
      }
    }
    iVar5 = func_0x00bc09d0(iVar6,"speed");
    if (iVar5 != 0) {
      iVar5 = func_0x00bc0300(iVar5,&stack0x00000000);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        uVar7 = 0xf6;
        goto LAB_00c9a6b4;
      }
      *(uint *)(param_2 + 0x198) = *(uint *)(param_2 + 0x198) & 0xffffffdf;
    }
    iVar6 = func_0x00bc09d0(iVar6,"keylen");
    if (iVar6 != 0) {
      iVar6 = func_0x00bc0300(iVar6,&param_3);
      if (iVar6 == 0) {
        FUN_00bc4f50();
        uVar7 = 0x100;
LAB_00c9a6b4:
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",uVar7,
                        "ossl_aes_gcm_siv_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (param_3 != *(int *)(param_2 + 0x18)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x105,
                        "ossl_aes_gcm_siv_set_ctx_params");
        func_0x00bc5160(0x39,0x69,0);
        return 0;
      }
    }
  }
  return 1;
}



void FUN_00c9a770(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),
                 "providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x33);
    (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1);
    FUN_00bbc6c0(param_1,0x1a0,"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x35);
  }
  return;
}



undefined4 * FUN_00c9a7b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           func_0x00bbbc30(param_1,0x1a0,"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c"
                           ,0x43);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[2] = 0;
  *puVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = func_0x00bbbc30(*(int *)(param_1 + 8),puVar2[5] + 0xf & 0xfffffff0,
                            "providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x4b);
    puVar2[2] = iVar1;
    if (iVar1 == 0) goto LAB_00c9a82f;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 8))(puVar2,param_1);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_00c9a82f:
  FUN_00bbc6c0(puVar2[2],puVar2[5],"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x55)
  ;
  FUN_00bbc580(puVar2,"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x56);
  return (undefined4 *)0x0;
}



void FUN_00c9a870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00c9ac30(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



void FUN_00c9a8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00c9ac30(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



bool FUN_00c9a8d0(int param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return false;
  }
  if (param_6 == 0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    return true;
  }
  if (param_4 < param_6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x9b,
                    "ossl_aes_gcm_siv_cipher");
    func_0x00bc5160(0x39,0x6a,0);
    return false;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,param_2,param_5,param_6);
  if ((param_3 != (uint *)0x0) && (iVar1 != 0)) {
    *param_3 = param_6;
  }
  return iVar1 != 0;
}



bool FUN_00c9a960(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,param_2,0,0);
  if ((param_3 != (undefined4 *)0x0) && (iVar1 != 0)) {
    *param_3 = 0;
  }
  return iVar1 != 0;
}



undefined4 FUN_00c9a9a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0103d958);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 5)) {
    if ((((byte)*(undefined4 *)(param_1 + 0x198) & 5) == 5) && (*(int *)(iVar1 + 0xc) == 0x10)) {
      iVar1 = func_0x00bc1050(iVar1,param_1 + 0x6c,0x10);
      if (iVar1 != 0) goto LAB_00c9aa17;
    }
    FUN_00bc4f50();
    uVar2 = 0xc0;
LAB_00c9a9fa:
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",uVar2,
                    "ossl_aes_gcm_siv_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
LAB_00c9aa17:
  iVar1 = func_0x00bc09d0(param_2,"taglen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0x10);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0xc6;
      goto LAB_00c9a9fa;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0xcb;
      goto LAB_00c9a9fa;
    }
  }
  return 1;
}



undefined ** FUN_00c9aa90(void)

{
  return &PTR_s_keylen_010946c8;
}



undefined ** FUN_00c9aaa0(void)

{
  return &PTR_s_keylen_01094718;
}



int FUN_00c9aab0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x1a0,"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x22);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0x10;
    uVar2 = func_0x00ce7660(0x80);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    uVar2 = func_0x00bc3c60(param_1);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return iVar1;
}



void FUN_00c9ab10(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10005,3,0,0x80,8,0x60);
  return;
}



int FUN_00c9ab30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x1a0,"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x22);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0x18;
    uVar2 = func_0x00ce7660(0xc0);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    uVar2 = func_0x00bc3c60(param_1);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return iVar1;
}



void FUN_00c9ab90(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10005,3,0,0xc0,8,0x60);
  return;
}



int FUN_00c9abb0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x1a0,"providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x22);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0x20;
    uVar2 = func_0x00ce7660(0x100);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    uVar2 = func_0x00bc3c60(param_1);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return iVar1;
}



void FUN_00c9ac10(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10005,3,0,0x100,8,0x60);
  return;
}



int FUN_00c9ae50(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x168,
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                       ,0x31);
  if (iVar1 != 0) {
    func_0x00c8d230(iVar1 + 0xe8);
  }
  return iVar1;
}



undefined4 * FUN_00c9ae90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x168,
                          "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                          ,0x41);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9aed0(int param_1)

{
  if (param_1 != 0) {
    func_0x00401320(param_1 + 0x128,0x40);
    FUN_00bbc580(param_1,
                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                 ,0x4f);
  }
  return;
}



undefined ** FUN_00c9af00(void)

{
  return &PTR_DAT_01094868;
}



bool FUN_00c9af10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined1 *)(param_1 + 0xe8));
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"block-size");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0x80);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00c9af70(void)

{
  return &PTR_DAT_010948a8;
}



undefined4 FUN_00c9af80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_2);
      if ((iVar1 == 0) || (0x3f < param_2 - 1U)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xcb,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x71,0);
        return 0;
      }
      func_0x00c8d280(param_1 + 0xe8,param_2);
    }
    iVar1 = func_0x00bc09d0(iVar2,&DAT_01141910);
    if ((iVar1 != 0) &&
       (iVar1 = func_0x00c9b310(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc)),
       iVar1 == 0)) {
      return 0;
    }
    iVar1 = func_0x00bc09d0(iVar2,"custom");
    if (iVar1 != 0) {
      if (0x10 < *(uint *)(iVar1 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xdc,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x6f,0);
        return 0;
      }
      func_0x00c8d2a0(param_1 + 0xe8,*(undefined4 *)(iVar1 + 8),*(uint *)(iVar1 + 0xc));
    }
    iVar2 = func_0x00bc09d0(iVar2,&DAT_01059db8);
    if (iVar2 != 0) {
      if (0x10 < *(uint *)(iVar2 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xe8,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x70,0);
        return 0;
      }
      func_0x00c8d2e0(param_1 + 0xe8,*(undefined4 *)(iVar2 + 8),*(uint *)(iVar2 + 0xc));
    }
  }
  return 1;
}



undefined4 FUN_00c9b0f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0058e2e0();
  iVar3 = param_4;
  iVar1 = param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    iVar2 = func_0x00bc09d0(param_4,&DAT_0113cdc0);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if ((iVar2 == 0) || (0x3f < param_1 - 1U)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xcb,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x71,0);
        return 0;
      }
      func_0x00c8d280(iVar1 + 0xe8,param_1);
    }
    iVar2 = func_0x00bc09d0(iVar3,&DAT_01141910);
    if ((iVar2 != 0) &&
       (iVar2 = func_0x00c9b310(iVar1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)),
       iVar2 == 0)) {
      return 0;
    }
    iVar2 = func_0x00bc09d0(iVar3,"custom");
    if (iVar2 != 0) {
      if (0x10 < *(uint *)(iVar2 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xdc,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x6f,0);
        return 0;
      }
      func_0x00c8d2a0(iVar1 + 0xe8,*(undefined4 *)(iVar2 + 8),*(uint *)(iVar2 + 0xc));
    }
    iVar3 = func_0x00bc09d0(iVar3,&DAT_01059db8);
    if (iVar3 != 0) {
      if (0x10 < *(uint *)(iVar3 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xe8,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x70,0);
        return 0;
      }
      func_0x00c8d2e0(iVar1 + 0xe8,*(undefined4 *)(iVar3 + 8),*(uint *)(iVar3 + 0xc));
    }
  }
  if (param_2 == 0) {
    if (*(char *)(iVar1 + 0xe9) == '\0') {
      FUN_00bc4f50();
      func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                      ,0x75,"blake2_mac_init");
      func_0x00bc5160(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar3 = func_0x00c9b310(iVar1,param_2,param_3);
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar4 = func_0x00c8d110(iVar1,iVar1 + 0xe8,iVar1 + 0x128);
  return uVar4;
}



undefined4 FUN_00c9b2c0(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint _Size;
  uint _Size_00;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  _Size_00 = 0x80 - iVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (iVar1 != 0) {
      memcpy((void *)(iVar1 + 0x60 + param_1),param_2,_Size_00);
      func_0x00c869e0(param_1,param_1 + 0x60,0x80);
      *(undefined4 *)(param_1 + 0xe0) = 0;
      param_2 = (void *)((int)param_2 + _Size_00);
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x80 < param_3) {
      _Size = 0x80;
      if ((param_3 & 0x7f) != 0) {
        _Size = param_3 & 0x7f;
      }
      func_0x00c869e0(param_1,param_2,param_3 - _Size);
      param_2 = (void *)((int)param_2 + (param_3 - _Size));
    }
  }
  memcpy((void *)(*(int *)(param_1 + 0xe0) + 0x60 + param_1),param_2,_Size);
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + _Size;
  return 1;
}



void FUN_00c9b2e0(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  *param_3 = (uint)*(byte *)(param_1 + 0xe8);
  func_0x00c8d010(param_2,param_1);
  return;
}



int FUN_00c9b3a0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0xb8,
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                       ,0x31);
  if (iVar1 != 0) {
    func_0x00c8f090(iVar1 + 0x78);
  }
  return iVar1;
}



undefined4 * FUN_00c9b3e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0xb8,
                          "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                          ,0x41);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9b420(int param_1)

{
  if (param_1 != 0) {
    func_0x00401320(param_1 + 0x98,0x20);
    FUN_00bbc580(param_1,
                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                 ,0x4f);
  }
  return;
}



undefined ** FUN_00c9b450(void)

{
  return &PTR_DAT_01094a28;
}



bool FUN_00c9b460(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined1 *)(param_1 + 0x78));
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"block-size");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0x40);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00c9b4c0(void)

{
  return &PTR_DAT_01094a68;
}



undefined4 FUN_00c9b4d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_2);
      if ((iVar1 == 0) || (0x1f < param_2 - 1U)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xcb,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x71,0);
        return 0;
      }
      func_0x00c8d280(param_1 + 0x78,param_2);
    }
    iVar1 = func_0x00bc09d0(iVar2,&DAT_01141910);
    if ((iVar1 != 0) &&
       (iVar1 = func_0x00c9b840(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc)),
       iVar1 == 0)) {
      return 0;
    }
    iVar1 = func_0x00bc09d0(iVar2,"custom");
    if (iVar1 != 0) {
      if (8 < *(uint *)(iVar1 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xdc,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x6f,0);
        return 0;
      }
      func_0x00c8f0c0(param_1 + 0x78,*(undefined4 *)(iVar1 + 8),*(uint *)(iVar1 + 0xc));
    }
    iVar2 = func_0x00bc09d0(iVar2,&DAT_01059db8);
    if (iVar2 != 0) {
      if (8 < *(uint *)(iVar2 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xe8,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x70,0);
        return 0;
      }
      func_0x00c8f100(param_1 + 0x78,*(undefined4 *)(iVar2 + 8),*(uint *)(iVar2 + 0xc));
    }
  }
  return 1;
}



undefined4 FUN_00c9b630(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0058e2e0();
  iVar3 = param_4;
  iVar1 = param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    iVar2 = func_0x00bc09d0(param_4,&DAT_0113cdc0);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if ((iVar2 == 0) || (0x1f < param_1 - 1U)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xcb,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x71,0);
        return 0;
      }
      func_0x00c8d280(iVar1 + 0x78,param_1);
    }
    iVar2 = func_0x00bc09d0(iVar3,&DAT_01141910);
    if ((iVar2 != 0) &&
       (iVar2 = func_0x00c9b840(iVar1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)),
       iVar2 == 0)) {
      return 0;
    }
    iVar2 = func_0x00bc09d0(iVar3,"custom");
    if (iVar2 != 0) {
      if (8 < *(uint *)(iVar2 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xdc,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x6f,0);
        return 0;
      }
      func_0x00c8f0c0(iVar1 + 0x78,*(undefined4 *)(iVar2 + 8),*(uint *)(iVar2 + 0xc));
    }
    iVar3 = func_0x00bc09d0(iVar3,&DAT_01059db8);
    if (iVar3 != 0) {
      if (8 < *(uint *)(iVar3 + 0xc)) {
        FUN_00bc4f50();
        func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                        ,0xe8,"blake2_mac_set_ctx_params");
        func_0x00bc5160(0x39,0x70,0);
        return 0;
      }
      func_0x00c8f100(iVar1 + 0x78,*(undefined4 *)(iVar3 + 8),*(uint *)(iVar3 + 0xc));
    }
  }
  if (param_2 == 0) {
    if (*(char *)(iVar1 + 0x79) == '\0') {
      FUN_00bc4f50();
      func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\macs\\blake2_mac_impl.c"
                      ,0x75,"blake2_mac_init");
      func_0x00bc5160(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar3 = func_0x00c9b840(iVar1,param_2,param_3);
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar4 = func_0x00c8ef90(iVar1,iVar1 + 0x78,iVar1 + 0x98);
  return uVar4;
}



undefined4 FUN_00c9b7f0(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint _Size;
  uint _Size_00;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  _Size_00 = 0x40 - iVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (iVar1 != 0) {
      memcpy((void *)(iVar1 + 0x30 + param_1),param_2,_Size_00);
      func_0x00c8d3d0(param_1,param_1 + 0x30,0x40);
      *(undefined4 *)(param_1 + 0x70) = 0;
      param_2 = (void *)((int)param_2 + _Size_00);
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x40 < param_3) {
      _Size = 0x40;
      if ((param_3 & 0x3f) != 0) {
        _Size = param_3 & 0x3f;
      }
      func_0x00c8d3d0(param_1,param_2,param_3 - _Size);
      param_2 = (void *)((int)param_2 + (param_3 - _Size));
    }
  }
  memcpy((void *)(*(int *)(param_1 + 0x70) + 0x30 + param_1),param_2,_Size);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + _Size;
  return 1;
}



void FUN_00c9b810(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  *param_3 = (uint)*(byte *)(param_1 + 0x78);
  func_0x00c8eeb0(param_2,param_1);
  return;
}



undefined4 * FUN_00c9b8d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x14,"providers\\implementations\\macs\\cmac_prov.c",0x3f);
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = func_0x00ce7760();
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  FUN_00bbc580(puVar2,"providers\\implementations\\macs\\cmac_prov.c",0x41);
  return (undefined4 *)0x0;
}



undefined4 * FUN_00c9b920(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_00bbc830(0x14,"providers\\implementations\\macs\\cmac_prov.c",0x3f);
  if (puVar3 != (undefined4 *)0x0) {
    iVar2 = func_0x00ce7760();
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *puVar3 = uVar1;
      goto LAB_00c9b97c;
    }
  }
  FUN_00bbc580(puVar3,"providers\\implementations\\macs\\cmac_prov.c",0x41);
  puVar3 = (undefined4 *)0x0;
LAB_00c9b97c:
  if (puVar3 != (undefined4 *)0x0) {
    iVar2 = func_0x00ce7670(puVar3[1],param_1[1]);
    if ((iVar2 != 0) && (iVar2 = func_0x00cd5d60(puVar3 + 2,param_1 + 2), iVar2 != 0)) {
      return puVar3;
    }
    func_0x00ce7700(puVar3[1]);
    func_0x00cd5e80(puVar3 + 2);
    FUN_00bbc580(puVar3,"providers\\implementations\\macs\\cmac_prov.c",0x52);
  }
  return (undefined4 *)0x0;
}



void FUN_00c9b9d0(int param_1)

{
  if (param_1 != 0) {
    func_0x00ce7700(*(undefined4 *)(param_1 + 4));
    func_0x00cd5e80(param_1 + 8);
    FUN_00bbc580(param_1,"providers\\implementations\\macs\\cmac_prov.c",0x52);
  }
  return;
}



undefined ** FUN_00c9ba00(void)

{
  return &PTR_DAT_01094b28;
}



bool FUN_00c9ba10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    uVar2 = FUN_00bbba70(*(undefined4 *)(param_1 + 4));
    iVar3 = func_0x00bc36d0(uVar2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bc36e0(uVar2);
    }
    iVar1 = func_0x00bc10c0(iVar1,iVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"block-size");
  if (iVar1 != 0) {
    uVar2 = FUN_00bbba70(*(undefined4 *)(param_1 + 4));
    iVar3 = func_0x00bc36d0(uVar2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bc36e0(uVar2);
    }
    iVar1 = func_0x00bc10c0(iVar1,iVar3);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00c9bac0(void)

{
  return &PTR_s_cipher_01094b68;
}



undefined4 FUN_00c9bad0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(*param_1);
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"cipher");
    if (iVar2 != 0) {
      iVar2 = func_0x00cd5dc0(param_1 + 2,param_2,uVar1);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = FUN_00bbba70(param_1 + 2);
      iVar2 = func_0x00bc3c70(uVar1);
      if (iVar2 != 2) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\macs\\cmac_prov.c",0x10b,"cmac_set_ctx_params")
        ;
        func_0x00bc5160(0x39,0x7d,0);
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01141910);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 5) {
        return 0;
      }
      uVar1 = func_0x00c9bcd0(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      return uVar1;
    }
  }
  return 1;
}



undefined4 FUN_00c9bb90(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00bc3c60(*param_1);
  if (param_4 != 0) {
    iVar1 = func_0x00bc09d0(param_4,"cipher");
    if (iVar1 != 0) {
      iVar1 = func_0x00cd5dc0(param_1 + 2,param_4,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_00bbba70(param_1 + 2);
      iVar1 = func_0x00bc3c70(uVar2);
      if (iVar1 != 2) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\macs\\cmac_prov.c",0x10b,"cmac_set_ctx_params")
        ;
        func_0x00bc5160(0x39,0x7d,0);
        return 0;
      }
    }
    iVar1 = func_0x00bc09d0(param_4,&DAT_01141910);
    if ((iVar1 != 0) &&
       ((*(int *)(iVar1 + 4) != 5 ||
        (iVar1 = func_0x00c9bcd0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc)),
        iVar1 == 0)))) {
      return 0;
    }
  }
  if (param_2 == 0) {
    uVar2 = func_0x00ce7890(param_1[1],0,0,0,0);
    return uVar2;
  }
  uVar2 = func_0x00c9bcd0(param_1,param_2,param_3);
  return uVar2;
}



void FUN_00c9bc80(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00ce78b0(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}



void FUN_00c9bca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  func_0x00ce77b0(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}



undefined4 * FUN_00c9bd10(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x14,"providers\\implementations\\macs\\gmac_prov.c",0x41);
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = func_0x00ba8070();
      puVar2[1] = iVar1;
      if (iVar1 != 0) {
        *puVar2 = param_1;
        return puVar2;
      }
      func_0x00ba8010(0);
      func_0x00cd5e80(puVar2 + 2);
      FUN_00bbc580(puVar2,"providers\\implementations\\macs\\gmac_prov.c",0x36);
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00c9bd70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    uVar1 = *param_1;
    iVar2 = FUN_0058e2e0();
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00bbc830(0x14,"providers\\implementations\\macs\\gmac_prov.c",0x41)
      ;
      if (puVar3 != (undefined4 *)0x0) {
        iVar2 = func_0x00ba8070();
        puVar3[1] = iVar2;
        if (iVar2 == 0) {
          func_0x00ba8010(0);
        }
        else {
          *puVar3 = uVar1;
          iVar2 = func_0x00ba7710(iVar2,param_1[1]);
          if (iVar2 != 0) {
            iVar2 = func_0x00cd5d60(puVar3 + 2,param_1 + 2);
            if (iVar2 != 0) {
              return puVar3;
            }
          }
          func_0x00ba8010(puVar3[1]);
        }
        func_0x00cd5e80(puVar3 + 2);
        FUN_00bbc580(puVar3,"providers\\implementations\\macs\\gmac_prov.c",0x36);
      }
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9be10(int param_1)

{
  if (param_1 != 0) {
    func_0x00ba8010(*(undefined4 *)(param_1 + 4));
    func_0x00cd5e80(param_1 + 8);
    FUN_00bbc580(param_1,"providers\\implementations\\macs\\gmac_prov.c",0x36);
  }
  return;
}



undefined ** FUN_00c9be40(void)

{
  return &PTR_DAT_01094c50;
}



undefined4 FUN_00c9be50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_1,&DAT_0113cdc0);
  if (iVar1 != 0) {
    uVar2 = func_0x00bc10c0(iVar1,0x10);
    return uVar2;
  }
  return 1;
}



undefined ** FUN_00c9be80(void)

{
  return &PTR_s_cipher_01094c78;
}



bool FUN_00c9be90(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1];
  uVar2 = func_0x00bc3c60(*param_1);
  if (param_2 != 0) {
    if (iVar5 == 0) {
      return false;
    }
    iVar3 = func_0x00bc09d0(param_2,"cipher");
    if (iVar3 != 0) {
      puVar1 = param_1 + 2;
      iVar3 = func_0x00cd5dc0(puVar1,param_2,uVar2);
      if (iVar3 == 0) {
        return false;
      }
      uVar2 = FUN_00bbba70(puVar1);
      iVar3 = func_0x00bc3c70(uVar2);
      if (iVar3 != 6) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\macs\\gmac_prov.c",0xdc,"gmac_set_ctx_params");
        func_0x00bc5160(0x39,0x7d,0);
        return false;
      }
      uVar2 = FUN_00bc39e0(puVar1,0,0);
      uVar2 = FUN_00bbba70(puVar1,uVar2);
      iVar3 = func_0x00ba90a0(iVar5,uVar2);
      if (iVar3 == 0) {
        return false;
      }
    }
    iVar3 = func_0x00bc09d0(param_2,&DAT_01141910);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 5) {
        return false;
      }
      iVar3 = func_0x00c9c2a0(param_1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
      if (iVar3 == 0) {
        return false;
      }
    }
    iVar3 = func_0x00bc09d0(param_2,&DAT_01056ae8);
    if (iVar3 != 0) {
      if ((*(int *)(iVar3 + 4) == 5) &&
         (iVar4 = func_0x00ba7910(iVar5,9,*(undefined4 *)(iVar3 + 0xc),0), 0 < iVar4)) {
        iVar5 = func_0x00ba90a0(iVar5,0,0,0,*(undefined4 *)(iVar3 + 8));
        return iVar5 != 0;
      }
      return false;
    }
  }
  return true;
}



undefined4 FUN_00c9bfd0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = param_1[1];
  uVar3 = func_0x00bc3c60(*param_1);
  if (param_4 != 0) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = func_0x00bc09d0(param_4,"cipher");
    if (iVar4 != 0) {
      puVar1 = param_1 + 2;
      iVar4 = func_0x00cd5dc0(puVar1,param_4,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      uVar3 = FUN_00bbba70(puVar1);
      iVar4 = func_0x00bc3c70(uVar3);
      if (iVar4 != 6) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\macs\\gmac_prov.c",0xdc,"gmac_set_ctx_params");
        func_0x00bc5160(0x39,0x7d,0);
        return 0;
      }
      uVar3 = FUN_00bc39e0(puVar1,0,0);
      uVar3 = FUN_00bbba70(puVar1,uVar3);
      iVar4 = func_0x00ba90a0(iVar2,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
    }
    iVar4 = func_0x00bc09d0(param_4,&DAT_01141910);
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 4) != 5) {
        return 0;
      }
      iVar4 = func_0x00c9c2a0(param_1,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      if (iVar4 == 0) {
        return 0;
      }
    }
    iVar4 = func_0x00bc09d0(param_4,&DAT_01056ae8);
    if ((iVar4 != 0) &&
       (((*(int *)(iVar4 + 4) != 5 ||
         (iVar5 = func_0x00ba7910(iVar2,9,*(undefined4 *)(iVar4 + 0xc),0), iVar5 < 1)) ||
        (iVar2 = func_0x00ba90a0(iVar2,0,0,0,*(undefined4 *)(iVar4 + 8)), iVar2 == 0)))) {
      return 0;
    }
  }
  if (param_2 == 0) {
    uVar3 = func_0x00ba90a0(param_1[1],0,0,0,0);
    return uVar3;
  }
  uVar3 = func_0x00c9c2a0(param_1,param_2,param_3);
  return uVar3;
}



undefined4 FUN_00c9c140(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  if (param_3 == 0) {
    return 1;
  }
  uVar3 = param_3;
  iVar4 = param_2;
  if (0x7fffffff < param_3) {
    do {
      iVar1 = func_0x00ba9100(uVar2,0,&param_1,iVar4,0x7fffffff);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = uVar3 + 0x80000001;
      iVar4 = iVar4 + 0x7fffffff;
    } while (0x7fffffff < uVar3);
  }
  uVar2 = func_0x00ba9100(uVar2,0,&param_1,iVar4,uVar3);
  return uVar2;
}



undefined4 FUN_00c9c1b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  int in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 *in_stack_0000004c;
  
  func_0x00e87f70();
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  in_stack_00000034 = 0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 0;
  iVar1 = FUN_0058e2e0();
  iVar3 = in_stack_00000044;
  if (iVar1 != 0) {
    iVar1 = func_0x00ba8e80(*(undefined4 *)(in_stack_00000044 + 4),in_stack_00000048,
                            &stack0x00000000);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)func_0x00bbfaa0(&stack0x00000004,&DAT_0103d958,in_stack_00000048,0x10);
      in_stack_00000018 = *puVar2;
      in_stack_0000001c = puVar2[1];
      in_stack_00000020 = puVar2[2];
      in_stack_00000024 = puVar2[3];
      in_stack_00000028 = puVar2[4];
      iVar3 = func_0x00ba8040(*(undefined4 *)(iVar3 + 4),&stack0x00000018);
      if (iVar3 != 0) {
        *in_stack_0000004c = 0x10;
        return 1;
      }
    }
  }
  return 0;
}



undefined4 * FUN_00c9c300(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x78,"providers\\implementations\\macs\\hmac_prov.c",0x53);
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = func_0x00c2edb0();
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  FUN_00bbc580(puVar2,"providers\\implementations\\macs\\hmac_prov.c",0x55);
  return (undefined4 *)0x0;
}



undefined4 * FUN_00c9c350(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *_Dst;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = FUN_0058e2e0();
  if (iVar3 != 0) {
    uVar2 = *param_1;
    iVar3 = FUN_0058e2e0();
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)FUN_00bbc830(0x78,"providers\\implementations\\macs\\hmac_prov.c",0x53)
      ;
      if (puVar4 != (undefined4 *)0x0) {
        iVar3 = func_0x00c2edb0();
        puVar4[1] = iVar3;
        if (iVar3 != 0) {
          *puVar4 = uVar2;
          puVar6 = param_1;
          puVar7 = puVar4;
          for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar4[1] = iVar3;
          puVar1 = (undefined8 *)(puVar4 + 2);
          puVar4[5] = 0;
          *puVar1 = 0;
          puVar4[4] = 0;
          iVar3 = func_0x00c2ec80(puVar4[1],param_1[1]);
          if (iVar3 != 0) {
            iVar3 = func_0x00cd5eb0(puVar1,param_1 + 2);
            if (iVar3 != 0) {
              if (param_1[5] != 0) {
                iVar3 = 1;
                if (param_1[6] != 0) {
                  iVar3 = param_1[6];
                }
                _Dst = (void *)FUN_00bee630(iVar3,"providers\\implementations\\macs\\hmac_prov.c",
                                            0x83);
                puVar4[5] = _Dst;
                if (_Dst == (void *)0x0) {
                  FUN_00c9c490(puVar4);
                  return (undefined4 *)0x0;
                }
                memcpy(_Dst,(void *)param_1[5],param_1[6]);
              }
              return puVar4;
            }
          }
          func_0x00c2ed50(puVar4[1]);
          func_0x00cd6000(puVar1);
          FUN_00bee500(puVar4[5],puVar4[6],"providers\\implementations\\macs\\hmac_prov.c",0x65);
          FUN_00bbc580(puVar4,"providers\\implementations\\macs\\hmac_prov.c",0x66);
          return (undefined4 *)0x0;
        }
      }
      FUN_00bbc580(puVar4,"providers\\implementations\\macs\\hmac_prov.c",0x55);
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9c490(int param_1)

{
  if (param_1 != 0) {
    func_0x00c2ed50(*(undefined4 *)(param_1 + 4));
    func_0x00cd6000(param_1 + 8);
    FUN_00bee500(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 "providers\\implementations\\macs\\hmac_prov.c",0x65);
    FUN_00bbc580(param_1,"providers\\implementations\\macs\\hmac_prov.c",0x66);
  }
  return;
}



undefined ** FUN_00c9c4d0(void)

{
  return &PTR_DAT_01094d80;
}



bool FUN_00c9c4e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    uVar2 = func_0x00c2f2a0(*(undefined4 *)(param_1 + 4));
    iVar1 = func_0x00bc10c0(iVar1,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"block-size");
  if (iVar1 != 0) {
    iVar3 = FUN_00bbba70(param_1 + 8);
    if (iVar3 != 0) {
      iVar3 = func_0x00bc42e0(iVar3);
    }
    iVar1 = func_0x00bc0c00(iVar1,iVar3);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00c9c570(void)

{
  return &PTR_s_digest_01094dc0;
}



bool FUN_00c9c580(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(*param_1);
  if (param_2 != 0) {
    iVar2 = func_0x00cd5f40(param_1 + 2,param_2,uVar1);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01141910);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 5) {
        return false;
      }
      iVar2 = func_0x00c9c7e0(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      if (iVar2 == 0) {
        return false;
      }
    }
    iVar2 = func_0x00bc09d0(param_2,"tls-data-size");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,param_1 + 7);
      return iVar2 != 0;
    }
  }
  return true;
}



undefined4 FUN_00c9c610(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00bc3c60(*param_1);
  if (param_4 != 0) {
    iVar1 = func_0x00cd5f40(param_1 + 2,param_4,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x00bc09d0(param_4,&DAT_01141910);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 5) {
        return 0;
      }
      iVar1 = func_0x00c9c7e0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = func_0x00bc09d0(param_4,"tls-data-size");
    if ((iVar1 != 0) && (iVar1 = func_0x00bc0300(iVar1,param_1 + 7), iVar1 == 0)) {
      return 0;
    }
  }
  if (param_2 == 0) {
    uVar2 = func_0x00c2ef70(param_1[1],0,0,0,0);
    return uVar2;
  }
  uVar2 = func_0x00c9c7e0(param_1,param_2,param_3);
  return uVar2;
}



undefined4 FUN_00c9c6d0(int param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 == 0) {
    uVar2 = func_0x00c2f280(*(undefined4 *)(param_1 + 4),param_2,param_3);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    if (param_3 == 0xd) {
      *(undefined8 *)(param_1 + 0x20) = *param_2;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 1);
      *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)((int)param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x30) = 1;
      return 1;
    }
  }
  else if (param_3 <= uVar1) {
    uVar2 = FUN_00bbba70(param_1 + 8,param_1 + 0x34,param_1 + 0x74,param_1 + 0x20,param_2,param_3,
                         uVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0);
    uVar2 = func_0x00ce7c80(uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c9c760(undefined4 param_1,int param_2,void *param_3,int *param_4)

{
  int iVar1;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar1 = func_0x00c2eec0(*(undefined4 *)(param_2 + 4),param_3,&stack0x00000000);
      if (iVar1 != 0) {
        *param_4 = unaff_retaddr;
        return 1;
      }
    }
    else if (*(int *)(param_2 + 0x74) != 0) {
      if (param_4 != (int *)0x0) {
        *param_4 = *(int *)(param_2 + 0x74);
      }
      memcpy(param_3,(void *)(param_2 + 0x34),*(size_t *)(param_2 + 0x74));
      return 1;
    }
  }
  return 0;
}



void FUN_00c9c890(undefined4 param_1)

{
  func_0x00c9d0a0(param_1,&PTR_s_digest_01094eb0);
  return;
}



void FUN_00c9c8b0(undefined4 param_1)

{
  func_0x00c9d0a0(param_1,&PTR_s_digest_01094ed8);
  return;
}



int FUN_00c9c8d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00c9d130(*param_1);
    if (iVar1 != 0) {
      iVar2 = func_0x00bd3f20(*(undefined4 *)(iVar1 + 4),param_1[1]);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd5eb0(iVar1 + 8,param_1 + 2);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar1 + 0x14) = param_1[5];
          *(undefined4 *)(iVar1 + 0x18) = param_1[6];
          *(undefined4 *)(iVar1 + 0x1c) = param_1[7];
          *(undefined4 *)(iVar1 + 0x20) = param_1[8];
          memcpy((void *)(iVar1 + 0x24),param_1 + 9,param_1[6]);
          memcpy((void *)(iVar1 + 0x2c4),param_1 + 0xb1,*(size_t *)(iVar1 + 0x1c));
          return iVar1;
        }
      }
      func_0x00bd45b0(*(undefined4 *)(iVar1 + 4));
      func_0x00cd6000(iVar1 + 8);
      func_0x00401320(iVar1 + 0x24,*(undefined4 *)(iVar1 + 0x18));
      func_0x00401320(iVar1 + 0x2c4,*(undefined4 *)(iVar1 + 0x1c));
      FUN_00bbc580(iVar1,"providers\\implementations\\macs\\kmac_prov.c",0xa3);
      return 0;
    }
  }
  return 0;
}



void FUN_00c9c9b0(int param_1)

{
  if (param_1 != 0) {
    func_0x00bd45b0(*(undefined4 *)(param_1 + 4));
    func_0x00cd6000(param_1 + 8);
    func_0x00401320(param_1 + 0x24,*(undefined4 *)(param_1 + 0x18));
    func_0x00401320(param_1 + 0x2c4,*(undefined4 *)(param_1 + 0x1c));
    FUN_00bbc580(param_1,"providers\\implementations\\macs\\kmac_prov.c",0xa3);
  }
  return;
}



undefined ** FUN_00c9ca00(void)

{
  return &PTR_DAT_01094f00;
}



bool FUN_00c9ca10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"block-size");
  if (iVar1 != 0) {
    uVar2 = FUN_00bbba70(param_1 + 8);
    uVar2 = func_0x00bc42e0(uVar2);
    iVar1 = func_0x00bc0c00(iVar1,uVar2);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00c9ca80(void)

{
  return &PTR_DAT_01094f40;
}



bool FUN_00c9ca90(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,&DAT_0105791c);
    if ((iVar2 != 0) && (iVar2 = func_0x00bbfcd0(iVar2,param_1 + 0x20), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(uVar1,&DAT_0113cdc0);
    if (iVar2 != 0) {
      param_2 = 0;
      iVar2 = func_0x00bc0300(iVar2,&param_2);
      if (iVar2 == 0) {
        return false;
      }
      if (0x1fffff < param_2) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\macs\\kmac_prov.c",0x1da,"kmac_set_ctx_params")
        ;
        func_0x00bc5160(0x39,0xd9,0);
        return false;
      }
      *(uint *)(param_1 + 0x14) = param_2;
    }
    iVar2 = func_0x00bc09d0(uVar1,&DAT_01141910);
    if ((iVar2 != 0) &&
       (iVar2 = func_0x00c9d1b0(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)),
       iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(uVar1,"custom");
    if (iVar2 != 0) {
      if (*(uint *)(iVar2 + 0xc) < 0x201) {
        iVar2 = func_0x00c9cfe0(param_1 + 0x2c4,0x204,param_1 + 0x1c,*(undefined4 *)(iVar2 + 8),
                                *(uint *)(iVar2 + 0xc));
        return iVar2 != 0;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\macs\\kmac_prov.c",0x1f1,"kmac_set_ctx_params");
      func_0x00bc5160(0x39,0x6f,0);
      return false;
    }
  }
  return true;
}



undefined4 FUN_00c9cbd0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  func_0x00e87f70();
  uVar7 = *(undefined4 *)(in_stack_0000002c + 4);
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00c9ca90(in_stack_0000002c,in_stack_00000038);
  if (iVar1 == 0) {
    return 0;
  }
  if (in_stack_00000030 == 0) {
    if (*(int *)(in_stack_0000002c + 0x18) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\macs\\kmac_prov.c",0x143,"kmac_init");
      func_0x00bc5160(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = func_0x00c9d1b0(in_stack_0000002c,in_stack_00000030,in_stack_00000034);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar3 = *(undefined4 *)(in_stack_0000002c + 4);
  uVar2 = FUN_00bbba70(in_stack_0000002c + 8,0);
  iVar1 = func_0x00bd3dd0(uVar3,uVar2);
  if (iVar1 != 0) {
    uVar3 = FUN_00bbba70(in_stack_0000002c + 8);
    uVar4 = func_0x00bc42e0(uVar3);
    if ((int)uVar4 < 1) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\macs\\kmac_prov.c",0x14c,"kmac_init");
      func_0x00bc5160(0x39,0xa6,0);
      return 0;
    }
    if (*(int *)(in_stack_0000002c + 0x1c) == 0) {
      FUN_00c9ca90(in_stack_0000002c,&stack0x00000000);
    }
    iVar1 = 0;
    if (in_stack_0000002c != -0x2c4) {
      iVar1 = *(int *)(in_stack_0000002c + 0x1c);
    }
    iVar1 = ((iVar1 + 7 + uVar4) / uVar4) * uVar4;
    iVar5 = FUN_00bbc4f0(iVar1,"providers\\implementations\\macs\\kmac_prov.c",0x15f);
    if (iVar5 != 0) {
      iVar6 = func_0x00c9cee0(iVar5,0,&DAT_01094ea8,6,in_stack_0000002c + 0x2c4,
                              *(undefined4 *)(in_stack_0000002c + 0x1c),uVar4);
      if (((iVar6 == 0) || (iVar1 = func_0x00bd3e10(uVar7,iVar5,iVar1), iVar1 == 0)) ||
         (iVar1 = func_0x00bd3e10(uVar7,in_stack_0000002c + 0x24,
                                  *(undefined4 *)(in_stack_0000002c + 0x18)), iVar1 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      FUN_00bbc580(iVar5,"providers\\implementations\\macs\\kmac_prov.c",0x166);
      return uVar7;
    }
    return 0;
  }
  return 0;
}



void FUN_00c9cdd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00bd3e10(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}



undefined4 FUN_00c9cdf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  func_0x00e87f70();
  iVar2 = param_2;
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar3 = FUN_0058e2e0();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x20) == 0) {
    uVar4 = 0;
    uVar5 = *(int *)(iVar2 + 0x14) << 3;
    uVar6 = uVar5;
    if (uVar5 != 0) {
      do {
        if (3 < uVar4) break;
        uVar6 = uVar6 >> 8;
        uVar4 = uVar4 + 1;
      } while (uVar6 != 0);
      if (uVar4 != 0) {
        uVar6 = uVar4;
        if (uVar4 < 4) goto joined_r0x00c9cecc;
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\macs\\kmac_prov.c",0x21a,"right_encode");
        func_0x00bc5160(0x39,0xca,0);
        goto LAB_00c9ceb8;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  uVar4 = 1;
  uVar6 = 0;
  do {
    *(char *)((int)&param_2 + uVar6) = (char)uVar5;
    uVar5 = uVar5 >> 8;
joined_r0x00c9cecc:
    uVar6 = uVar6 - 1;
  } while (-1 < (int)uVar6);
  *(char *)((int)&param_2 + uVar4) = (char)uVar4;
  iVar3 = func_0x00bd3e10(uVar1,&param_2,uVar4 + 1);
  if ((iVar3 != 0) &&
     (iVar3 = func_0x00bd3ab0(uVar1,param_3,*(undefined4 *)(iVar2 + 0x14)), iVar3 != 0)) {
    *param_4 = *(undefined4 *)(iVar2 + 0x14);
    return 1;
  }
LAB_00c9ceb8:
  *param_4 = *(undefined4 *)(iVar2 + 0x14);
  return 0;
}



void FUN_00c9d3a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x90,"providers\\implementations\\macs\\siphash_prov.c",0x3e);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  return;
}



undefined4 * FUN_00c9d3d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x90,"providers\\implementations\\macs\\siphash_prov.c",0x50);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9d410(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\macs\\siphash_prov.c",0x46);
  return;
}



undefined ** FUN_00c9d430(void)

{
  return &PTR_DAT_01095150;
}



bool FUN_00c9d440(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    uVar2 = func_0x00bb6150(param_1 + 8);
    iVar1 = func_0x00bc10c0(iVar1,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"c-rounds");
  if (iVar1 != 0) {
    iVar3 = 2;
    if (*(int *)(param_1 + 0x88) != 0) {
      iVar3 = *(int *)(param_1 + 0x88);
    }
    iVar1 = func_0x00bc10c0(iVar1,iVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"d-rounds");
  if (iVar1 == 0) {
    return true;
  }
  iVar3 = 4;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  iVar1 = func_0x00bc10c0(iVar1,iVar3);
  return iVar1 != 0;
}



undefined ** FUN_00c9d4f0(void)

{
  return &PTR_DAT_010951a0;
}



bool FUN_00c9d500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_2);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = func_0x00ce9600(param_1 + 8,param_2);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = func_0x00ce9600(param_1 + 0x48,param_2);
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = func_0x00bc09d0(iVar2,"c-rounds");
    if ((iVar1 != 0) && (iVar1 = func_0x00bc0300(iVar1,param_1 + 0x88), iVar1 == 0)) {
      return false;
    }
    iVar1 = func_0x00bc09d0(iVar2,"d-rounds");
    if ((iVar1 != 0) && (iVar1 = func_0x00bc0300(iVar1,param_1 + 0x8c), iVar1 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(iVar2,&DAT_01141910);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 5) {
        return false;
      }
      iVar2 = func_0x00c9d7a0(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      return iVar2 != 0;
    }
  }
  return true;
}



undefined4 FUN_00c9d5f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0058e2e0();
  iVar3 = param_4;
  iVar1 = param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    iVar2 = func_0x00bc09d0(param_4,&DAT_0113cdc0);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = func_0x00ce9600(iVar1 + 8,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = func_0x00ce9600(iVar1 + 0x48,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(iVar3,"c-rounds");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x88), iVar2 == 0)) {
      return 0;
    }
    iVar2 = func_0x00bc09d0(iVar3,"d-rounds");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x8c), iVar2 == 0)) {
      return 0;
    }
    iVar3 = func_0x00bc09d0(iVar3,&DAT_01141910);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar3 + 4) != 5 ||
        (iVar3 = func_0x00c9d7a0(iVar1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc)),
        iVar3 == 0)))) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar4 = func_0x00c9d7a0(iVar1,param_2,param_3);
    return uVar4;
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x60);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x68);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x70);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x74);
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x84);
  return 1;
}



undefined4 FUN_00c9d730(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00ce90f0(param_1 + 8,param_2,param_3);
  }
  return 1;
}



undefined4 FUN_00c9d760(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = func_0x00bb6150(param_1 + 8);
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (uVar1 <= param_4)) {
    *param_3 = uVar1;
    uVar3 = func_0x00ce8a70(param_1 + 8,param_2,uVar1);
    return uVar3;
  }
  return 0;
}



void FUN_00c9d810(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0xf8,"providers\\implementations\\macs\\poly1305_prov.c",0x32)
  ;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  return;
}



undefined4 * FUN_00c9d840(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0xf8,"providers\\implementations\\macs\\poly1305_prov.c",0x44);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9d880(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\macs\\poly1305_prov.c",0x3a);
  return;
}



undefined ** FUN_00c9d8a0(void)

{
  return &PTR_DAT_010952a8;
}



undefined ** FUN_00c9d8b0(void)

{
  return &PTR_DAT_010952d0;
}



bool FUN_00c9d8c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_01141910);
  if (iVar1 != 0) {
    iVar1 = func_0x00c9d9d0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    return iVar1 != 0;
  }
  return true;
}



uint FUN_00c9d900(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x00bc09d0(param_4,&DAT_01141910);
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00c9d9d0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc)),
     iVar1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    return (uint)(*(int *)(param_1 + 4) == 0);
  }
  uVar2 = func_0x00c9d9d0(param_1,param_2,param_3);
  return uVar2;
}



undefined4 FUN_00c9d960(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 4) = 1;
  if (param_3 != 0) {
    func_0x00c81f10(param_1 + 8,param_2,param_3);
  }
  return 1;
}



undefined4 FUN_00c9d990(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  func_0x00c81dc0(param_1 + 8,param_2);
  *param_3 = 0x10;
  return 1;
}



undefined4 * FUN_00c9da30(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x30,"providers\\implementations\\kdfs\\pbkdf2.c",0x4c);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = param_1;
  func_0x00c9def0(puVar2);
  return puVar2;
}



undefined4 * FUN_00c9da70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *_Dst;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    _Dst = (undefined4 *)FUN_00bbc830(0x30,"providers\\implementations\\kdfs\\pbkdf2.c",0x4c);
    if (_Dst != (undefined4 *)0x0) {
      *_Dst = uVar1;
      iVar2 = func_0x00cd62b0(param_1[3],param_1[4],_Dst + 3,_Dst + 4);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[1],param_1[2],_Dst + 1,_Dst + 2);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd5eb0(_Dst + 8,param_1 + 8);
          if (iVar2 != 0) {
            uVar1 = param_1[7];
            _Dst[6] = param_1[6];
            _Dst[7] = uVar1;
            _Dst[0xb] = param_1[0xb];
            return _Dst;
          }
        }
      }
      func_0x00cd6000(_Dst + 8);
      FUN_00bbc580(_Dst[3],"providers\\implementations\\kdfs\\pbkdf2.c",99);
      FUN_00bbc6c0(_Dst[1],_Dst[2],"providers\\implementations\\kdfs\\pbkdf2.c",0x65);
      memset(_Dst,0,0x30);
      FUN_00bbc580(_Dst,"providers\\implementations\\kdfs\\pbkdf2.c",0x6f);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9db50(void *param_1)

{
  if (param_1 != (void *)0x0) {
    func_0x00cd6000((int)param_1 + 0x20);
    FUN_00bbc580(*(undefined4 *)((int)param_1 + 0xc),"providers\\implementations\\kdfs\\pbkdf2.c",99
                );
    FUN_00bbc6c0(*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 8),
                 "providers\\implementations\\kdfs\\pbkdf2.c",0x65);
    memset(param_1,0,0x30);
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\pbkdf2.c",0x6f);
  }
  return;
}



void FUN_00c9dba0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 8);
  FUN_00bbc580(param_1[3],"providers\\implementations\\kdfs\\pbkdf2.c",99);
  FUN_00bbc6c0(param_1[1],param_1[2],"providers\\implementations\\kdfs\\pbkdf2.c",0x65);
  memset(param_1,0,0x30);
  *param_1 = uVar1;
  func_0x00c9def0(param_1);
  return;
}



undefined4 FUN_00c9dbf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00c9dcc0(param_1,param_4);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf2.c",0xf3,"kdf_pbkdf2_derive");
          func_0x00bc5160(0x39,0x83,0);
          return 0;
        }
        uVar2 = FUN_00bbba70(param_1 + 0x20);
        uVar2 = func_0x00c9dfc0(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                uVar2,param_2,param_3,*(undefined4 *)(param_1 + 0x2c));
        return uVar2;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf2.c",0xee,"kdf_pbkdf2_derive");
      func_0x00bc5160(0x39,0x82,0);
    }
  }
  return 0;
}



undefined ** FUN_00c9dcb0(void)

{
  return &PTR_s_properties_01095388;
}



undefined4 FUN_00c9dcc0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint unaff_retaddr;
  
  func_0x00e87f70();
  puVar1 = param_3;
  uVar2 = func_0x00bc3c60(*param_3);
  iVar4 = param_4;
  if (param_4 != 0) {
    iVar3 = func_0x00bc09d0(param_4,"digest");
    if (iVar3 != 0) {
      iVar3 = func_0x00cd5f40(puVar1 + 8,iVar4,uVar2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = FUN_00bbba70(puVar1 + 8);
      iVar3 = func_0x00bc44f0(uVar2);
      if (iVar3 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf2.c",0x10e,
                        "kdf_pbkdf2_set_ctx_params");
        func_0x00bc5160(0x39,0xb7,0);
        return 0;
      }
