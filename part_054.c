  case 0x20:
    if (in_stack_000000c4 != (SOCKET *)0x0) {
      _Src[0x1c] = 1;
      _Src[0x1d] = 0;
      goto LAB_00ce00b0;
    }
    _Src[0x1c] = 0;
    _Src[0x1d] = 0;
    func_0x00bcaf80(_Src);
    break;
  case 0x21:
    iVar5 = setsockopt(*(SOCKET *)(in_stack_000000b8 + 0x24),0xffff,0x1006,&stack0x00000000,4);
    if (iVar5 < 0) {
      FUN_00bc4f50();
      uVar6 = 0x317;
LAB_00ce0254:
      func_0x00bc5050("crypto\\bio\\bss_dgram.c",uVar6,"dgram_ctrl");
      pcVar11 = "calling setsockopt()";
LAB_00ce0266:
      iVar5 = WSAGetLastError();
      func_0x00bc5160(2,iVar5,pcVar11);
      goto LAB_00ce0277;
    }
    break;
  case 0x22:
    iVar5 = getsockopt(*(SOCKET *)(in_stack_000000b8 + 0x24),0xffff,0x1006,(char *)&param_2,
                       (int *)&stack0x00000000);
    if (iVar5 < 0) {
      FUN_00bc4f50();
      uVar6 = 0x32b;
LAB_00ce02b7:
      func_0x00bc5050("crypto\\bio\\bss_dgram.c",uVar6,"dgram_ctrl");
      pcVar11 = "calling getsockopt()";
      goto LAB_00ce0266;
    }
    _Src = (short *)param_2;
    goto LAB_00ce02cf;
  case 0x23:
    param_2 = CONCAT44(param_2._4_4_,(int)in_stack_000000c4[1] / 1000 + *in_stack_000000c4 * 1000);
    iVar5 = setsockopt(*(SOCKET *)(in_stack_000000b8 + 0x24),0xffff,0x1005,(char *)&param_2,4);
    if (iVar5 < 0) {
      FUN_00bc4f50();
      uVar6 = 0x349;
      goto LAB_00ce0254;
    }
    break;
  case 0x24:
    param_2 = CONCAT44(param_2._4_4_,4);
    iVar5 = getsockopt(*(SOCKET *)(in_stack_000000b8 + 0x24),0xffff,0x1005,&stack0x00000000,
                       (int *)&param_2);
    if (iVar5 < 0) {
      FUN_00bc4f50();
      uVar6 = 0x35d;
      goto LAB_00ce02b7;
    }
LAB_00ce02cf:
    *_Dst = (int)_Src / 1000;
    _Dst[1] = ((int)_Src % 1000) * 1000;
    break;
  case 0x25:
  case 0x26:
    if (*(int *)(_Src + 0x1e) != 0x274c) goto LAB_00ce04b0;
    _Src[0x1e] = 0;
    _Src[0x1f] = 0;
    break;
  case 0x27:
LAB_00ce0277:
    break;
  case 0x29:
    goto LAB_00ce04b4;
  case 0x2a:
    *(size_t *)(_Src + 0x20) = in_stack_000000c0;
    break;
  case 0x2b:
    if (*(int *)(_Src + 0x1e) != 0x73) goto LAB_00ce04b0;
    _Src[0x1e] = 0;
    _Src[0x1f] = 0;
    break;
  case 0x2d:
    uVar1 = *in_stack_000000c4;
    if ((int)uVar1 < 0) {
      param_2 = 0;
      _Src[0x24] = 0;
      _Src[0x25] = 0;
      _Src[0x26] = 0;
      _Src[0x27] = 0;
    }
    else {
      uVar2 = in_stack_000000c4[1];
      uVar8 = (uint)((ulonglong)uVar1 * 1000000);
      lVar3 = (ulonglong)(uVar2 + uVar8) * 1000;
      *(int *)(_Src + 0x24) = (int)lVar3;
      *(uint *)(_Src + 0x26) =
           (((int)uVar2 >> 0x1f) +
            ((int)uVar1 >> 0x1f) * 1000000 + (int)((ulonglong)uVar1 * 1000000 >> 0x20) +
           (uint)CARRY4(uVar2,uVar8)) * 1000 + (int)((ulonglong)lVar3 >> 0x20);
    }
    break;
  case 0x2e:
    sVar7 = func_0x00bcb070(_Src);
    if ((in_stack_000000c0 == 0) ||
       (sVar10 = in_stack_000000c0, (int)sVar7 < (int)in_stack_000000c0)) {
      sVar10 = sVar7;
    }
    memcpy(_Dst,_Src,sVar10);
    break;
  case 0x2f:
    func_0x00ce0890(_Src);
    func_0x00bcafa0(_Src);
    break;
  case 0x30:
    if (*_Src == 2) {
      param_1 = (uint)(in_stack_000000c0 != 0);
      iVar5 = setsockopt(*(SOCKET *)(in_stack_000000b8 + 0x24),0,0xe,(char *)&param_1,4);
      if (iVar5 < 0) {
        FUN_00bc4f50();
        uVar6 = 0x39e;
LAB_00ce044f:
        func_0x00bc5050("crypto\\bio\\bss_dgram.c",uVar6,"dgram_ctrl");
        iVar5 = WSAGetLastError();
        func_0x00bc5160(2,iVar5,"calling setsockopt()");
      }
    }
    else {
      if (*_Src != 0x17) goto LAB_00ce0277;
      param_1 = (uint)(in_stack_000000c0 != 0);
      iVar5 = setsockopt(*(SOCKET *)(in_stack_000000b8 + 0x24),0x29,0xe,(char *)&param_1,4);
      if (iVar5 < 0) {
        FUN_00bc4f50();
        uVar6 = 0x3ab;
        goto LAB_00ce044f;
      }
    }
    break;
  case 0x31:
    func_0x00ce0890(_Src);
    break;
  case 0x32:
  case 0x47:
    *(size_t *)(_Src + 0x2c) = in_stack_000000c0;
    break;
  case 0x53:
    *in_stack_000000c4 = (int)(char)_Src[0x2e];
    break;
  case 0x55:
    break;
  case 0x5b:
  case 0x5c:
    *in_stack_000000c4 = 1;
    in_stack_000000c4[1] = *(SOCKET *)(in_stack_000000b8 + 0x24);
    break;
  case 0x5d:
    iVar4 = func_0x00bcafa0(_Src);
    if (iVar4 == 0) {
      iVar5 = getpeername(*(SOCKET *)(iVar5 + 0x24),(sockaddr *)&stack0x00000014,
                          (int *)&stack0x00000000);
      if ((iVar5 != 0) || (iVar5 = func_0x00bcafa0(&stack0x00000014), iVar5 == 0))
      goto LAB_00ce04b0;
      _Src = (short *)&stack0x00000014;
    }
    sVar7 = func_0x00bcb070(_Src);
    if ((in_stack_000000c0 == 0) ||
       (sVar10 = in_stack_000000c0, (int)sVar7 < (int)in_stack_000000c0)) {
      sVar10 = sVar7;
    }
    memcpy(_Dst,_Src,sVar10);
    break;
  case 0x66:
    func_0x00bcab60(*(undefined4 *)(in_stack_000000b8 + 0x24),in_stack_000000c0 != 0);
    break;
  case 0x68:
    psVar9 = _Src;
    if (*(int *)(in_stack_000000b8 + 0x18) != 0) {
      if (*(int *)(in_stack_000000b8 + 0x14) != 0) {
        func_0x00c07ee0(*(undefined4 *)(in_stack_000000b8 + 0x24));
        psVar9 = *(short **)(iVar5 + 0x28);
      }
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
    }
    s = *_Dst;
    *(size_t *)(iVar5 + 0x18) = in_stack_000000c0;
    *(SOCKET *)(iVar5 + 0x24) = s;
    *(undefined4 *)(iVar5 + 0x14) = 1;
    iVar4 = getsockname(s,(sockaddr *)(psVar9 + 0xe),(int *)&stack0x00000000);
    if (iVar4 < 0) {
      func_0x00bcaf80((sockaddr *)(psVar9 + 0xe));
    }
    iVar5 = getpeername(*(SOCKET *)(iVar5 + 0x24),(sockaddr *)&stack0x00000030,&param_3);
    if (iVar5 == 0) {
      uVar6 = FUN_008ad590(&stack0x00000030);
      func_0x00bcaff0(_Src,uVar6);
      _Src[0x1c] = 1;
      _Src[0x1d] = 0;
    }
    break;
  case 0x69:
    if (*(int *)(in_stack_000000b8 + 0x14) == 0) goto LAB_00ce0277;
    if (in_stack_000000c4 != (SOCKET *)0x0) {
      *in_stack_000000c4 = *(SOCKET *)(in_stack_000000b8 + 0x24);
    }
  }
LAB_00ce04b4:
  FUN_008ab370();
  return;
}



undefined4 FUN_00ce05b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bbc830(0x60,"crypto\\bio\\bss_dgram.c",0x10a);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return 1;
}



undefined4 FUN_00ce05e0(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      func_0x00c07ee0(*(undefined4 *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x28),"crypto\\bio\\bss_dgram.c",0x11c);
  return 1;
}



undefined4
FUN_00ce0630(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  sockaddr *to;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    *param_7 = 0;
    return 1;
  }
  if (param_2[3] != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x5cb,"dgram_sendmmsg");
    func_0x00bc5160(0x20,0x6f,0);
    *param_7 = 0;
    return 0;
  }
  if (param_2[2] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x00bcb070(param_2[2]);
  }
  if (param_2[2] == 0) {
    to = (sockaddr *)0x0;
  }
  else {
    to = (sockaddr *)FUN_008ad590(param_2[2]);
  }
  iVar1 = sendto(*(SOCKET *)(param_1 + 0x24),(char *)*param_2,param_2[1],0,to,iVar1);
  if (iVar1 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x5da,"dgram_sendmmsg");
    uVar2 = 0;
    iVar1 = WSAGetLastError();
    func_0x00bc5160(2,iVar1,uVar2);
    *param_7 = 0;
    return 0;
  }
  param_2[1] = iVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_7 = 1;
  return 1;
}



undefined4
FUN_00ce0730(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  int *fromlen;
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    *param_7 = 0;
    return 1;
  }
  if (param_2[3] != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x6be,"dgram_recvmmsg");
    func_0x00bc5160(0x20,0x6f,0);
    *param_7 = 0;
    return 0;
  }
  fromlen = &param_4;
  param_4 = 0x1c;
  if ((sockaddr *)param_2[2] == (sockaddr *)0x0) {
    fromlen = (int *)0x0;
  }
  iVar1 = recvfrom(*(SOCKET *)(param_1 + 0x24),(char *)*param_2,param_2[1],0,(sockaddr *)param_2[2],
                   fromlen);
  if (iVar1 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x6ce,"dgram_recvmmsg");
    uVar2 = 0;
    iVar1 = WSAGetLastError();
    func_0x00bc5160(2,iVar1,uVar2);
    return 0;
  }
  param_2[1] = iVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_7 = 1;
  return 1;
}



undefined * FUN_00ce1950(void)

{
  return &DAT_010b69cc;
}



undefined * FUN_00ce1960(void)

{
  return &DAT_010b694c;
}



undefined * FUN_00ce1970(void)

{
  return &DAT_010b68f4;
}



undefined * FUN_00ce1980(void)

{
  return &DAT_010b6a4c;
}



undefined * FUN_00ce1990(void)

{
  return &DAT_010b68b0;
}



undefined * FUN_00ce19a0(void)

{
  return &DAT_010b6828;
}



undefined * FUN_00ce19b0(void)

{
  return &DAT_010b6734;
}



undefined * FUN_00ce19c0(void)

{
  return &DAT_010b66f0;
}



undefined * FUN_00ce19d0(void)

{
  return &DAT_010b6684;
}



undefined * FUN_00ce19e0(void)

{
  return &DAT_010b67a0;
}



undefined * FUN_00ce1a20(void)

{
  return &DAT_010b6b10;
}



void FUN_00ce1a30(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_010b68b0);
  return;
}



undefined * FUN_00ce1a70(void)

{
  return &DAT_010b6b54;
}



void FUN_00ce1ba0(undefined4 param_1)

{
  func_0x00bd1860(param_1,FUN_00ce1dc0);
  return;
}



void FUN_00ce1dc0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 0xc),"crypto\\ct\\ct_sct.c",0x27);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x20),"crypto\\ct\\ct_sct.c",0x28);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x2c),"crypto\\ct\\ct_sct.c",0x29);
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\ct\\ct_sct.c",0x2a);
    FUN_00bbc580(param_1,"crypto\\ct\\ct_sct.c",0x2b);
  }
  return;
}



undefined4
FUN_00ce2040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  func_0x00e87f70();
  param_2 = 0;
  iVar1 = func_0x00ce22f0(param_5,&param_2);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  uVar2 = func_0x00bfcb00(&stack0x00000000,param_6);
  FUN_00bbc580(param_2,"crypto\\ct\\ct_oct.c",399);
  return uVar2;
}



void FUN_00ce2e30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = param_1 + 4;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(param_1[2],"crypto\\evp\\mac_meth.c",0x27);
      FUN_00bc7c90(*param_1);
      FUN_00bbc580(param_1,"crypto\\evp\\mac_meth.c",0x2a);
    }
  }
  return;
}



int * FUN_00ce2ea0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_2 + 8);
  iVar5 = 0;
  iVar4 = 0;
  piVar1 = (int *)FUN_00bbc830(0x44,"crypto\\evp\\mac_meth.c",0x31);
  if (piVar1 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\mac_meth.c",0x42,"evp_mac_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
  }
  else {
    piVar1[4] = 1;
    piVar1[1] = param_1;
    iVar2 = func_0x00bc9200(param_2);
    piVar1[2] = iVar2;
    if (iVar2 != 0) {
      piVar1[3] = *(int *)(param_2 + 0xc);
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        do {
          switch(iVar2) {
          case 1:
            if (piVar1[5] == 0) {
              iVar4 = iVar4 + 1;
              piVar1[5] = *piVar3;
            }
            break;
          case 2:
            if (piVar1[6] == 0) {
              piVar1[6] = *piVar3;
            }
            break;
          case 3:
            if (piVar1[7] == 0) {
              iVar4 = iVar4 + 1;
              piVar1[7] = *piVar3;
            }
            break;
          case 4:
            if (piVar1[8] == 0) {
              iVar5 = iVar5 + 1;
              piVar1[8] = *piVar3;
            }
            break;
          case 5:
            if (piVar1[9] == 0) {
              iVar5 = iVar5 + 1;
              piVar1[9] = *piVar3;
            }
            break;
          case 6:
            if (piVar1[10] == 0) {
              iVar5 = iVar5 + 1;
              piVar1[10] = *piVar3;
            }
            break;
          case 7:
            if (piVar1[0xe] == 0) {
              piVar1[0xe] = *piVar3;
            }
            break;
          case 8:
            if (piVar1[0xf] == 0) {
              piVar1[0xf] = *piVar3;
            }
            break;
          case 9:
            if (piVar1[0x10] == 0) {
              piVar1[0x10] = *piVar3;
            }
            break;
          case 10:
            if (piVar1[0xb] == 0) {
              piVar1[0xb] = *piVar3;
            }
            break;
          case 0xb:
            if (piVar1[0xc] == 0) {
              piVar1[0xc] = *piVar3;
            }
            break;
          case 0xc:
            if (piVar1[0xd] == 0) {
              piVar1[0xd] = *piVar3;
            }
          }
          iVar2 = piVar3[1];
          piVar3 = piVar3 + 2;
        } while (iVar2 != 0);
        if ((iVar5 == 3) && (iVar4 == 2)) {
          *piVar1 = param_3;
          if (param_3 != 0) {
            func_0x00bc8620(param_3);
          }
          return piVar1;
        }
      }
      piVar3 = piVar1 + 4;
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        FUN_00bbc580(piVar1[2],"crypto\\evp\\mac_meth.c",0x27);
        FUN_00bc7c90(*piVar1);
        FUN_00bbc580(piVar1,"crypto\\evp\\mac_meth.c",0x2a);
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\mac_meth.c",0x9c,"evp_mac_from_algorithm");
      func_0x00bc5160(6,0xc1,0);
      return (int *)0x0;
    }
    piVar3 = piVar1 + 4;
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      FUN_00bbc580(piVar1[2],"crypto\\evp\\mac_meth.c",0x27);
      FUN_00bc7c90(*piVar1);
      FUN_00bbc580(piVar1,"crypto\\evp\\mac_meth.c",0x2a);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



void FUN_00ce3130(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = param_1 + 4;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(param_1[2],"crypto\\evp\\kdf_meth.c",0x28);
      FUN_00bc7c90(*param_1);
      FUN_00bbc580(param_1,"crypto\\evp\\kdf_meth.c",0x2b);
    }
  }
  return;
}



int * FUN_00ce31d0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = param_3;
  func_0x00e87f70();
  iVar6 = 0;
  piVar5 = *(int **)(param_3 + 8);
  param_3 = 0;
  piVar2 = (int *)FUN_00bbc830(0x40,"crypto\\evp\\kdf_meth.c",0x32);
  if (piVar2 == (int *)0x0) {
    FUN_00bbc580(0,"crypto\\evp\\kdf_meth.c",0x34);
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\kdf_meth.c",0x43,"evp_kdf_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
  }
  else {
    piVar2[4] = 1;
    piVar2[1] = param_2;
    iVar3 = func_0x00bc9200(iVar4);
    piVar1 = piVar2 + 2;
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      piVar2[3] = *(int *)(iVar4 + 0xc);
      iVar4 = *piVar5;
      if (iVar4 != 0) {
        piVar5 = piVar5 + 1;
        do {
          switch(iVar4) {
          case 1:
            if (piVar2[5] == 0) {
              iVar6 = iVar6 + 1;
              piVar2[5] = *piVar5;
            }
            break;
          case 2:
            if (piVar2[6] == 0) {
              piVar2[6] = *piVar5;
            }
            break;
          case 3:
            if (piVar2[7] == 0) {
              iVar6 = iVar6 + 1;
              piVar2[7] = *piVar5;
            }
            break;
          case 4:
            if (piVar2[8] == 0) {
              piVar2[8] = *piVar5;
            }
            break;
          case 5:
            if (piVar2[9] == 0) {
              param_3 = param_3 + 1;
              piVar2[9] = *piVar5;
            }
            break;
          case 6:
            if (piVar2[10] == 0) {
              piVar2[10] = *piVar5;
            }
            break;
          case 7:
            if (piVar2[0xb] == 0) {
              piVar2[0xb] = *piVar5;
            }
            break;
          case 8:
            if (piVar2[0xc] == 0) {
              piVar2[0xc] = *piVar5;
            }
            break;
          case 9:
            if (piVar2[0xd] == 0) {
              piVar2[0xd] = *piVar5;
            }
            break;
          case 10:
            if (piVar2[0xe] == 0) {
              piVar2[0xe] = *piVar5;
            }
            break;
          case 0xb:
            if (piVar2[0xf] == 0) {
              piVar2[0xf] = *piVar5;
            }
          }
          iVar4 = piVar5[1];
          piVar5 = piVar5 + 2;
        } while (iVar4 != 0);
        if ((param_3 == 1) && (iVar6 == 2)) {
          *piVar2 = param_4;
          if (param_4 != 0) {
            func_0x00bc8620(param_4);
          }
          return piVar2;
        }
      }
      piVar5 = piVar2 + 4;
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        FUN_00bbc580(*piVar1,"crypto\\evp\\kdf_meth.c",0x28);
        FUN_00bc7c90(*piVar2);
        FUN_00bbc580(piVar2,"crypto\\evp\\kdf_meth.c",0x2b);
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\kdf_meth.c",0x95,"evp_kdf_from_algorithm");
      func_0x00bc5160(6,0xc1,0);
      return (int *)0x0;
    }
    piVar5 = piVar2 + 4;
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      FUN_00bbc580(*piVar1,"crypto\\evp\\kdf_meth.c",0x28);
      FUN_00bc7c90(*piVar2);
      FUN_00bbc580(piVar2,"crypto\\evp\\kdf_meth.c",0x2b);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



int FUN_00ce5390(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = FUN_00bbba70(param_2);
  if (iVar2 == 1) {
    uVar3 = func_0x00bb6b70(param_2,DAT_013e00dc);
    func_0x00e87aae(uVar3);
    fflush(DAT_013e00dc);
    uVar3 = 1;
  }
  else {
    if (iVar2 == 2) {
      uVar3 = func_0x00bb6b70(param_2);
      fprintf(DAT_013e00dc,"Verifying - %s",uVar3);
      fflush(DAT_013e00dc);
      uVar6 = FUN_00bc39e0(param_2,1);
      iVar2 = func_0x00ce5640(param_1,param_2,uVar6 & 1);
      if (iVar2 < 1) {
        return iVar2;
      }
      pbVar4 = (byte *)func_0x00c99620(param_2);
      pbVar5 = (byte *)func_0x00c99600(param_2);
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00ce5472:
          uVar6 = -(uint)bVar7 | 1;
          goto LAB_00ce5477;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00ce5472;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_00ce5477:
      if (uVar6 == 0) {
        return 1;
      }
      fprintf(DAT_013e00dc,"Verify failure\n");
      fflush(DAT_013e00dc);
      return 0;
    }
    if (iVar2 != 3) {
      return 1;
    }
    uVar3 = func_0x00bb6b70(param_2,DAT_013e00dc);
    func_0x00e87aae(uVar3);
    uVar3 = func_0x00c995f0(param_2,DAT_013e00dc);
    func_0x00e87aae(uVar3);
    fflush(DAT_013e00dc);
    uVar3 = 0;
  }
  uVar6 = FUN_00bc39e0(param_2,uVar3);
  iVar2 = func_0x00ce5640(param_1,param_2,uVar6 & 1);
  return iVar2;
}



undefined4 FUN_00ce54f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bbba70(param_2);
  if ((iVar1 == 4) || (iVar1 == 5)) {
    uVar2 = func_0x00bb6b70(param_2,DAT_013e00dc);
    func_0x00e87aae(uVar2);
    fflush(DAT_013e00dc);
  }
  return 1;
}



undefined4 FUN_00ce5540(int param_1)

{
  int iVar1;
  HANDLE hConsoleHandle;
  BOOL BVar2;
  LPDWORD lpMode;
  
  iVar1 = func_0x00bbb470(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    return 0;
  }
  DAT_013e00e0 = 1;
  DAT_013e00dc = func_0x00e87989("conout$",&DAT_0114337c);
  if (DAT_013e00dc == 0) {
    DAT_013e00dc = func_0x00e8798f(2);
  }
  lpMode = &DAT_013e00d0;
  hConsoleHandle = GetStdHandle(0xfffffff6);
  BVar2 = GetConsoleMode(hConsoleHandle,lpMode);
  if ((BVar2 == 0) &&
     (DAT_013e00e0 = BVar2, DAT_013e00d8 = func_0x00e87989("conin$",&DAT_01198360),
     DAT_013e00d8 != 0)) {
    return 1;
  }
  DAT_013e00d8 = func_0x00e8798f(0);
  return 1;
}



undefined4 FUN_00ce55e0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00e8798f(0);
  if (DAT_013e00d8 != iVar1) {
    func_0x008aafb6(DAT_013e00d8);
  }
  iVar1 = func_0x00e8798f(2);
  if (DAT_013e00dc != iVar1) {
    func_0x008aafb6(DAT_013e00dc);
  }
  func_0x00bbb440(*(undefined4 *)(param_1 + 0x18));
  return 1;
}



void FUN_00ce5a00(undefined4 param_1)

{
  DAT_013e00e4 = param_1;
  return;
}



undefined ** FUN_00ce5b60(void)

{
  return &PTR_s_keylen_010b7e88;
}



undefined ** FUN_00ce5b70(void)

{
  return &PTR_s_ivlen_010b7f50;
}



undefined4 FUN_00ce5b80(int param_1,void *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if ((uVar3 & 8) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x194,
                    "ossl_cipher_generic_block_final");
    func_0x00bc5160(0x39,0x72,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    puVar1 = (uint *)(param_1 + 0x48);
    if ((uVar3 & 2) == 0) {
      if (*puVar1 != uVar2) {
        if ((*puVar1 != 0) || ((uVar3 & 1) != 0)) {
          FUN_00bc4f50();
          uVar5 = 0x1bc;
LAB_00ce5c3d:
          func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar5,
                          "ossl_cipher_generic_block_final");
          func_0x00bc5160(0x39,0x6b,0);
          return 0;
        }
LAB_00ce5ce4:
        *param_3 = 0;
        return 1;
      }
      _Src = (void *)(param_1 + 0x10);
      iVar4 = (**(code **)(*(int *)(param_1 + 0x70) + 4))(param_1,_Src,_Src,uVar2);
      if (iVar4 != 0) {
        if (((*(byte *)(param_1 + 0x50) & 1) != 0) &&
           (iVar4 = func_0x00cef520(_Src,puVar1,uVar2), iVar4 == 0)) {
          return 0;
        }
        if (param_4 < *puVar1) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x1cb,
                          "ossl_cipher_generic_block_final");
          func_0x00bc5160(0x39,0x6a,0);
          return 0;
        }
        memcpy(param_2,_Src,*puVar1);
        *param_3 = *puVar1;
        *puVar1 = 0;
        return 1;
      }
      FUN_00bc4f50();
      uVar5 = 0x1c1;
    }
    else {
      if ((uVar3 & 1) == 0) {
        if (*puVar1 == 0) goto LAB_00ce5ce4;
        if (*puVar1 != uVar2) {
          FUN_00bc4f50();
          uVar5 = 0x1a5;
          goto LAB_00ce5c3d;
        }
      }
      else {
        func_0x00cef3d0(param_1 + 0x10,puVar1,uVar2);
      }
      if (param_4 < uVar2) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x1aa,
                        "ossl_cipher_generic_block_final");
        func_0x00bc5160(0x39,0x6a,0);
        return 0;
      }
      iVar4 = (**(code **)(*(int *)(param_1 + 0x70) + 4))(param_1,param_2,param_1 + 0x10,uVar2);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *param_3 = uVar2;
        return 1;
      }
      FUN_00bc4f50();
      uVar5 = 0x1ae;
    }
  }
  else {
    FUN_00bc4f50();
    uVar5 = 0x19a;
  }
  func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar5,
                  "ossl_cipher_generic_block_final");
  func_0x00bc5160(0x39,0x66,0);
  return 0;
}



bool FUN_00ce5db0(undefined4 param_1,uint param_2,int param_3,uint *param_4,uint param_5,int param_6
                 ,uint param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar4 = param_2;
  func_0x00e87f70();
  uVar7 = param_7;
  param_2 = 0;
  uVar5 = *(uint *)(iVar4 + 0x50);
  uVar2 = *(uint *)(iVar4 + 0x44);
  if ((uVar5 & 8) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x102,
                    "ossl_cipher_generic_block_update");
    func_0x00bc5160(0x39,0x72,0);
    return false;
  }
  if (*(int *)(iVar4 + 0x54) == 0) {
    if (*(int *)(iVar4 + 0x48) == 0) {
      uVar5 = -uVar2 & param_7;
    }
    else {
      uVar5 = func_0x00cef380(iVar4 + 0x10,(uint *)(iVar4 + 0x48),uVar2,&param_6,&param_7);
    }
    if ((*(uint *)(iVar4 + 0x48) == uVar2) &&
       ((((*(uint *)(iVar4 + 0x50) & 2) != 0 || (param_7 != 0)) ||
        ((*(uint *)(iVar4 + 0x50) & 1) == 0)))) {
      if (param_5 < uVar2) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x15f,
                        "ossl_cipher_generic_block_update");
        func_0x00bc5160(0x39,0x6a,0);
        return false;
      }
      iVar3 = (**(code **)(*(int *)(iVar4 + 0x70) + 4))(iVar4,param_3,iVar4 + 0x10,uVar2);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar8 = 0x163;
        goto LAB_00ce611e;
      }
      *(undefined4 *)(iVar4 + 0x48) = 0;
      param_3 = param_3 + uVar2;
      param_2 = uVar2;
    }
    if (uVar5 != 0) {
      if ((((*(uint *)(iVar4 + 0x50) & 2) == 0) && ((*(uint *)(iVar4 + 0x50) & 1) != 0)) &&
         (uVar5 == param_7)) {
        if (param_7 < uVar2) {
          FUN_00bc4f50();
          uVar8 = 0x16d;
          goto LAB_00ce60d5;
        }
        uVar5 = uVar5 - uVar2;
      }
      param_2 = param_2 + uVar5;
      if (param_5 < param_2) {
        FUN_00bc4f50();
        uVar8 = 0x174;
LAB_00ce60d5:
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar8,
                        "ossl_cipher_generic_block_update");
        func_0x00bc5160(0x39,0x6a,0);
        return false;
      }
      if (uVar5 != 0) {
        iVar3 = (**(code **)(*(int *)(iVar4 + 0x70) + 4))(iVar4,param_3,param_6,uVar5);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          uVar8 = 0x17a;
          goto LAB_00ce611e;
        }
        param_6 = param_6 + uVar5;
        param_7 = param_7 - uVar5;
      }
    }
    if ((param_7 != 0) &&
       (iVar4 = func_0x00cef4a0(iVar4 + 0x10,iVar4 + 0x48,uVar2,&param_6,&param_7), iVar4 == 0)) {
      return false;
    }
    *param_4 = param_2;
    return param_7 == 0;
  }
  if ((((param_6 == 0) || (param_6 != param_3)) || (param_5 < param_7)) || ((uVar5 & 1) == 0)) {
    FUN_00bc4f50();
    uVar8 = 0x111;
    goto LAB_00ce611e;
  }
  if ((uVar5 & 2) != 0) {
    uVar6 = uVar2 - param_7 % uVar2;
    uVar5 = uVar6 + param_7;
    if (param_5 < uVar5) {
      FUN_00bc4f50();
      uVar8 = 0x11e;
      goto LAB_00ce611e;
    }
    if (0x100 < uVar6) {
      FUN_00bc4f50();
      uVar8 = 0x123;
      goto LAB_00ce611e;
    }
    param_2 = uVar6 - 1 & 0xff;
    if (*(int *)(iVar4 + 0x54) == 0x300) {
      uVar5 = uVar6 - 1;
      if (1 < uVar6) {
        memset((void *)(param_7 + param_3),0,uVar6 - 1);
        uVar5 = param_2;
      }
      *(char *)(uVar6 + param_3 + -1 + param_7) = (char)uVar5;
      uVar7 = param_7;
    }
    else if (param_7 < uVar5) {
      memset((void *)(param_7 + param_3),param_2,uVar5 - param_7);
    }
    param_7 = uVar7 + uVar6;
  }
  if (param_7 % uVar2 == 0) {
    iVar3 = (**(code **)(*(int *)(iVar4 + 0x70) + 4))(iVar4,param_3,param_6,param_7);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      uVar8 = 0x13b;
    }
    else {
      puVar1 = (undefined4 *)(iVar4 + 0x58);
      if (*(int *)(iVar4 + 0x5c) != 0) {
        FUN_00bbc580(*puVar1,"providers\\implementations\\ciphers\\ciphercommon.c",0x140);
        *(undefined4 *)(iVar4 + 0x5c) = 0;
        *puVar1 = 0;
      }
      *param_4 = param_7;
      if (((*(byte *)(iVar4 + 0x50) & 2) != 0) ||
         (iVar4 = func_0x00cef400(*(undefined4 *)(iVar4 + 0x78),*(undefined4 *)(iVar4 + 0x54),
                                  param_3,param_4,uVar2,puVar1,iVar4 + 0x5c,
                                  *(undefined4 *)(iVar4 + 0x60),0), iVar4 != 0)) {
        return true;
      }
      FUN_00bc4f50();
      uVar8 = 0x14c;
    }
  }
  else {
    FUN_00bc4f50();
    uVar8 = 0x134;
  }
LAB_00ce611e:
  func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar8,
                  "ossl_cipher_generic_block_update");
  func_0x00bc5160(0x39,0x66,0);
  return false;
}



undefined4
FUN_00ce6190(int param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x50) & 8) != 0) {
      if (param_4 < param_6) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x232,
                        "ossl_cipher_generic_cipher");
        func_0x00bc5160(0x39,0x6a,0);
        return 0;
      }
      iVar1 = (**(code **)(*(int *)(param_1 + 0x70) + 4))(param_1,param_2,param_5,param_6);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x237,
                        "ossl_cipher_generic_cipher");
        func_0x00bc5160(0x39,0x66,0);
        return 0;
      }
      *param_3 = param_6;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x22d,
                    "ossl_cipher_generic_cipher");
    func_0x00bc5160(0x39,0x72,0);
  }
  return 0;
}



void FUN_00ce6260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00ce5a20(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



void FUN_00ce6290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00ce5a20(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



undefined4 FUN_00ce62c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00bc09d0(param_2,"ivlen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x40));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar3 = 0x246;
      goto LAB_00ce62fc;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"padding");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(uint *)(param_1 + 0x50) & 1);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar3 = 0x24b;
LAB_00ce62fc:
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar3,
                      "ossl_cipher_generic_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_01056ae8);
  if (iVar1 != 0) {
    iVar2 = func_0x00bc1000(iVar1,param_1,*(undefined4 *)(param_1 + 0x40));
    if (iVar2 == 0) {
      iVar1 = func_0x00bc1050(iVar1,param_1,*(undefined4 *)(param_1 + 0x40));
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar3 = 0x252;
        goto LAB_00ce6486;
      }
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"updated-iv");
  if (iVar1 != 0) {
    iVar2 = func_0x00bc1000(iVar1,param_1 + 0x20,*(undefined4 *)(param_1 + 0x40));
    if (iVar2 == 0) {
      iVar1 = func_0x00bc1050(iVar1,param_1 + 0x20,*(undefined4 *)(param_1 + 0x40));
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar3 = 0x259;
        goto LAB_00ce6486;
      }
    }
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_01056af8);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x6c));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar3 = 0x25e;
      goto LAB_00ce6486;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar3 = 0x263;
      goto LAB_00ce6486;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"tls-mac");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1000(iVar1,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar3 = 0x269;
LAB_00ce6486:
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar3,
                      "ossl_cipher_generic_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00ce6730(void)

{
  return &PTR_s_keylen_010b7d20;
}



undefined ** FUN_00ce6740(void)

{
  return &PTR_DAT_010b7c58;
}



undefined4 FUN_00ce6880(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_2;
  iVar1 = param_1;
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"padding");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x27c;
        goto LAB_00ce68c5;
      }
      *(uint *)(iVar1 + 0x50) = (uint)(param_1 != 0) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
    }
    iVar2 = func_0x00bc09d0(iVar3,"use-bits");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x286;
        goto LAB_00ce68c5;
      }
      *(uint *)(iVar1 + 0x50) = -(uint)(param_1 != 0) & 0x80 | *(uint *)(iVar1 + 0x50) & 0xffffff7f;
    }
    iVar2 = func_0x00bc09d0(iVar3,"tls-version");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x54);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x28e;
        goto LAB_00ce68c5;
      }
    }
    iVar2 = func_0x00bc09d0(iVar3,"tls-mac-size");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x60);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x295;
        goto LAB_00ce68c5;
      }
    }
    iVar3 = func_0x00bc09d0(iVar3,&DAT_01056af8);
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0300(iVar3,&param_1);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x29e;
LAB_00ce68c5:
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar4,
                        "ossl_cipher_generic_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      *(int *)(iVar1 + 0x6c) = param_1;
    }
  }
  return 1;
}



undefined ** FUN_00ce6a00(void)

{
  return &PTR_s_padding_010b7dc0;
}



undefined4 FUN_00ce6a10(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x50) & 8) != 0) {
      *param_3 = 0;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x21b,
                    "ossl_cipher_generic_stream_final");
    func_0x00bc5160(0x39,0x72,0);
  }
  return 0;
}



undefined4
FUN_00ce6a60(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 8) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x1db,
                    "ossl_cipher_generic_stream_update");
    func_0x00bc5160(0x39,0x72,0);
    return 0;
  }
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x1e5,
                    "ossl_cipher_generic_stream_update");
    func_0x00bc5160(0x39,0x6a,0);
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x70) + 4))(param_1,param_2,param_5,param_6);
  if (iVar1 != 0) {
    *param_3 = param_6;
    if (((*(byte *)(param_1 + 0x50) & 2) == 0) && (*(int *)(param_1 + 0x54) != 0)) {
      if (*(int *)(param_1 + 100) != 0) {
        uVar2 = (uint)*(byte *)(param_2 + -1 + param_6);
        if (param_6 < uVar2 + 1) {
          return 0;
        }
        param_6 = (param_6 - uVar2) - 1;
        *param_3 = param_6;
      }
      if (param_6 < *(uint *)(param_1 + 0x68)) {
        return 0;
      }
      param_6 = param_6 - *(uint *)(param_1 + 0x68);
      *param_3 = param_6;
      uVar2 = *(uint *)(param_1 + 0x60);
      if (uVar2 != 0) {
        if (param_6 < uVar2) {
          return 0;
        }
        *(uint *)(param_1 + 0x58) = (param_6 - uVar2) + param_2;
        *param_3 = *param_3 - uVar2;
      }
    }
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x1ea,
                  "ossl_cipher_generic_stream_update");
  func_0x00bc5160(0x39,0x66,0);
  return 0;
}



undefined4 FUN_00ce6b80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_00ce6880(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = func_0x00bc09d0(iVar2,"keylen");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_2);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",0x80,
                        "ossl_cipher_var_keylen_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (*(int *)(param_1 + 0x3c) != param_2) {
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffff7;
        *(int *)(param_1 + 0x3c) = param_2;
      }
    }
  }
  return 1;
}



undefined ** FUN_00ce6c10(void)

{
  return &PTR_s_padding_010b7e38;
}



void FUN_00ce6c20(int param_1)

{
  func_0x00cf7800(param_1 + 0x10);
  FUN_00ba8550(*(undefined4 *)(param_1 + 0x4c));
  FUN_00ba8550(*(undefined4 *)(param_1 + 0x48));
  return;
}



undefined4 FUN_00ce6c50(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  param_3 = param_3 >> 1;
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  FUN_00ba8550(*(undefined4 *)(param_1 + 0x4c));
  FUN_00ba8550(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_3 == 0x10) {
    uVar2 = func_0x00ba8520(uVar3,"AES-128-CBC",0);
    pcVar4 = "AES-128-CTR";
  }
  else if (param_3 == 0x18) {
    uVar2 = func_0x00ba8520(uVar3,"AES-192-CBC",0);
    pcVar4 = "AES-192-CTR";
  }
  else {
    iVar1 = 0;
    if (param_3 != 0x20) goto LAB_00ce6ce4;
    uVar2 = func_0x00ba8520(uVar3,"AES-256-CBC",0);
    pcVar4 = "AES-256-CTR";
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  iVar1 = func_0x00ba8520(uVar3,pcVar4,0);
  *(int *)(param_1 + 0x48) = iVar1;
LAB_00ce6ce4:
  if ((*(int *)(param_1 + 0x4c) != 0) && (iVar1 != 0)) {
    uVar3 = func_0x00cf7b10(param_1 + 0x10,param_2,param_3,*(int *)(param_1 + 0x4c),iVar1,uVar3,0);
    return uVar3;
  }
  return 0;
}



undefined4 FUN_00ce6d10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  param_2[0x10] = param_1[0x10];
  param_2[0x11] = uVar1;
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar3;
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  iVar4 = func_0x00cf7870(param_2 + 4,param_1 + 4);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2[0x13] != 0) {
    FUN_00ba85f0(param_2[0x13]);
  }
  if (param_2[0x12] != 0) {
    FUN_00ba85f0(param_2[0x12]);
  }
  return 1;
}



undefined4 FUN_00ce6da0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0x10) {
    return 0;
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  return 1;
}



undefined4 FUN_00ce6db0(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x40) = (uint)(param_2 != 1) * 2 + -1;
  return 1;
}



bool FUN_00ce6dc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1 + 0x10;
  if (param_3 == 0) {
    iVar1 = func_0x00bb6150(iVar1);
    return iVar1 == 0;
  }
  if (param_2 == 0) {
    iVar1 = func_0x00cf76c0(iVar1,param_3);
    return iVar1 == 1;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    iVar1 = func_0x00cf7a30();
    return 0 < iVar1;
  }
  iVar1 = func_0x00cf78e0(iVar1,param_3,param_2,param_4);
  return 0 < iVar1;
}



void FUN_00ce6e40(int param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,int *param_10
                 )

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  func_0x00e87f70();
  piVar1 = param_10;
  param_8 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uVar4 = 0;
  iVar6 = 0;
  iVar3 = param_10[6];
  if (iVar3 == 0x10) {
    pcVar2 = "AES-128-ECB";
  }
  else if (iVar3 == 0x18) {
    pcVar2 = "AES-192-ECB";
  }
  else {
    if (iVar3 != 0x20) goto LAB_00ce6fc7;
    pcVar2 = "AES-256-ECB";
  }
  uVar4 = func_0x00ba8520(param_10[3],pcVar2,0);
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    iVar3 = func_0x00ba8070();
    *piVar1 = iVar3;
    if (iVar3 == 0) goto LAB_00ce6fc7;
  }
  iVar3 = func_0x00ba90d0(iVar3,uVar4,piVar1 + 7,0,0);
  if (iVar3 != 0) {
    param_3 = piVar1[0x25];
    uVar5 = 0;
    param_2 = *(undefined8 *)(piVar1 + 0x23);
    do {
      param_1 = iVar6;
      iVar3 = func_0x00ba9100(*piVar1,&param_4,&stack0x00000000,&param_1,0x10);
      if (iVar3 == 0) goto LAB_00ce6fc7;
      iVar6 = iVar6 + 1;
      *(undefined4 *)((int)piVar1 + uVar5 + 0x5c) = param_4;
      *(undefined4 *)((int)piVar1 + uVar5 + 0x60) = param_5;
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0x10);
    uVar5 = 0;
    if (piVar1[6] != 0) {
      do {
        param_1 = iVar6;
        iVar3 = func_0x00ba9100(*piVar1,&param_4,&stack0x00000000,&param_1,0x10);
        if (iVar3 == 0) goto LAB_00ce6fc7;
        iVar6 = iVar6 + 1;
        *(undefined4 *)((int)piVar1 + uVar5 + 0x3c) = param_4;
        *(undefined4 *)((int)piVar1 + uVar5 + 0x40) = param_5;
        uVar5 = uVar5 + 8;
      } while (uVar5 < (uint)piVar1[6]);
    }
    iVar3 = func_0x00ba90d0(*piVar1,uVar4,piVar1 + 0xf,0,0);
    if (iVar3 != 0) {
      piVar1[0x66] = piVar1[0x66] & 0xffffffe7;
      FUN_00ba8550(uVar4);
      FUN_008ab370();
      return;
    }
  }
LAB_00ce6fc7:
  func_0x00ba8010(*piVar1);
  FUN_00ba8550(uVar4);
  *piVar1 = 0;
  FUN_008ab370();
  return;
}



uint FUN_00ce7000(int param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == (void *)0x0) {
    if ((*(uint *)(param_1 + 0x198) & 1) != 0) {
      return *(uint *)(param_1 + 0x198) >> 2 & 1;
    }
    iVar1 = func_0x00401390(param_1 + 0x6c,param_1 + 0x7c,0x10);
    return *(uint *)(param_1 + 0x198) >> 1 & (uint)(iVar1 == 0);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
      uVar3 = func_0x00ce7460();
      return uVar3;
    }
    uVar3 = func_0x00ce7260(param_1,param_3,param_2,param_4);
    return uVar3;
  }
  if (param_4 == 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 8),
                 "providers\\implementations\\ciphers\\cipher_aes_gcm_siv_hw.c",0x74);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 1;
  }
  uVar3 = *(int *)(param_1 + 0x14) + 0xf + param_4 & 0xfffffff0;
  iVar1 = FUN_00bbc5a0(*(undefined4 *)(param_1 + 8),uVar3,
                       "providers\\implementations\\ciphers\\cipher_aes_gcm_siv_hw.c",0x7e);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = iVar1;
  memcpy((void *)(*(int *)(param_1 + 0x14) + iVar1),param_3,param_4);
  uVar2 = *(int *)(param_1 + 0x14) + param_4;
  *(uint *)(param_1 + 0x14) = uVar2;
  if (uVar2 < uVar3) {
    memset((void *)(*(int *)(param_1 + 8) + uVar2),0,uVar3 - uVar2);
  }
  return 1;
}



void FUN_00ce7110(undefined4 *param_1)

{
  func_0x00ba8010(*param_1);
  *param_1 = 0;
  return;
}



undefined4 FUN_00ce7130(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  if (*param_2 == 0) {
    return 1;
  }
  iVar1 = func_0x00ba8070();
  *param_1 = iVar1;
  if ((iVar1 != 0) && (iVar1 = func_0x00ba7710(iVar1,*param_2), iVar1 != 0)) {
    return 1;
  }
  func_0x00ba8010(*param_1);
  *param_1 = 0;
  return 0;
}



void FUN_00ce8690(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)param_1;
  param_2[1] = (char)((uint)*param_1 >> 8);
  param_2[2] = *(undefined1 *)((int)param_1 + 2);
  param_2[3] = *(undefined1 *)((int)param_1 + 3);
  param_2[4] = *(undefined1 *)(param_1 + 1);
  param_2[5] = (char)((uint)param_1[1] >> 8);
  param_2[6] = *(undefined1 *)((int)param_1 + 6);
  param_2[7] = *(undefined1 *)((int)param_1 + 7);
  param_2[8] = *(undefined1 *)(param_1 + 2);
  param_2[9] = (char)((uint)param_1[2] >> 8);
  param_2[10] = *(undefined1 *)((int)param_1 + 10);
  param_2[0xb] = *(undefined1 *)((int)param_1 + 0xb);
  param_2[0xc] = *(undefined1 *)(param_1 + 3);
  param_2[0xd] = (char)((uint)param_1[3] >> 8);
  param_2[0xe] = *(undefined1 *)((int)param_1 + 0xe);
  param_2[0xf] = *(undefined1 *)((int)param_1 + 0xf);
  return;
}



void FUN_00ce8710(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = param_1[3];
  param_2[1] = param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = param_1[7];
  param_2[5] = param_1[6];
  param_2[6] = param_1[5];
  param_2[7] = param_1[4];
  param_2[8] = param_1[0xb];
  param_2[9] = param_1[10];
  param_2[10] = param_1[9];
  param_2[0xb] = param_1[8];
  param_2[0xc] = param_1[0xf];
  param_2[0xd] = param_1[0xe];
  param_2[0xe] = param_1[0xd];
  param_2[0xf] = param_1[0xc];
  param_2[0x10] = param_1[0x13];
  param_2[0x11] = param_1[0x12];
  param_2[0x12] = param_1[0x11];
  param_2[0x13] = param_1[0x10];
  return;
}



void FUN_00ce87b0(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = param_1[3];
  param_2[1] = param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = param_1[7];
  param_2[5] = param_1[6];
  param_2[6] = param_1[5];
  param_2[7] = param_1[4];
  param_2[8] = param_1[0xb];
  param_2[9] = param_1[10];
  param_2[10] = param_1[9];
  param_2[0xb] = param_1[8];
  param_2[0xc] = param_1[0xf];
  param_2[0xd] = param_1[0xe];
  param_2[0xe] = param_1[0xd];
  param_2[0xf] = param_1[0xc];
  param_2[0x10] = param_1[0x13];
  param_2[0x11] = param_1[0x12];
  param_2[0x12] = param_1[0x11];
  param_2[0x13] = param_1[0x10];
  param_2[0x14] = param_1[0x17];
  param_2[0x15] = param_1[0x16];
  param_2[0x16] = param_1[0x15];
  param_2[0x17] = param_1[0x14];
  param_2[0x18] = param_1[0x1b];
  param_2[0x19] = param_1[0x1a];
  param_2[0x1a] = param_1[0x19];
  param_2[0x1b] = param_1[0x18];
  param_2[0x1c] = param_1[0x1f];
  param_2[0x1d] = param_1[0x1e];
  param_2[0x1e] = param_1[0x1d];
  param_2[0x1f] = param_1[0x1c];
  return;
}



void FUN_00ce88a0(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = param_1[7];
  param_2[1] = param_1[6];
  param_2[2] = param_1[5];
  param_2[3] = param_1[4];
  param_2[4] = param_1[3];
  param_2[5] = param_1[2];
  param_2[6] = param_1[1];
  param_2[7] = *param_1;
  param_2[8] = param_1[0xf];
  param_2[9] = param_1[0xe];
  param_2[10] = param_1[0xd];
  param_2[0xb] = param_1[0xc];
  param_2[0xc] = param_1[0xb];
  param_2[0xd] = param_1[10];
  param_2[0xe] = param_1[9];
  param_2[0xf] = param_1[8];
  param_2[0x10] = param_1[0x17];
  param_2[0x11] = param_1[0x16];
  param_2[0x12] = param_1[0x15];
  param_2[0x13] = param_1[0x14];
  param_2[0x14] = param_1[0x13];
  param_2[0x15] = param_1[0x12];
  param_2[0x16] = param_1[0x11];
  param_2[0x17] = param_1[0x10];
  param_2[0x18] = param_1[0x1f];
  param_2[0x19] = param_1[0x1e];
  param_2[0x1a] = param_1[0x1d];
  param_2[0x1b] = param_1[0x1c];
  param_2[0x1c] = param_1[0x1b];
  param_2[0x1d] = param_1[0x1a];
  param_2[0x1e] = param_1[0x19];
  param_2[0x1f] = param_1[0x18];
  param_2[0x20] = param_1[0x27];
  param_2[0x21] = param_1[0x26];
  param_2[0x22] = param_1[0x25];
  param_2[0x23] = param_1[0x24];
  param_2[0x24] = param_1[0x23];
  param_2[0x25] = param_1[0x22];
  param_2[0x26] = param_1[0x21];
  param_2[0x27] = param_1[0x20];
  param_2[0x28] = param_1[0x2f];
  param_2[0x29] = param_1[0x2e];
  param_2[0x2a] = param_1[0x2d];
  param_2[0x2b] = param_1[0x2c];
  param_2[0x2c] = param_1[0x2b];
  param_2[0x2d] = param_1[0x2a];
  param_2[0x2e] = param_1[0x29];
  param_2[0x2f] = param_1[0x28];
  param_2[0x30] = param_1[0x37];
  param_2[0x31] = param_1[0x36];
  param_2[0x32] = param_1[0x35];
  param_2[0x33] = param_1[0x34];
  param_2[0x34] = param_1[0x33];
  param_2[0x35] = param_1[0x32];
  param_2[0x36] = param_1[0x31];
  param_2[0x37] = param_1[0x30];
  param_2[0x38] = param_1[0x3f];
  param_2[0x39] = param_1[0x3e];
  param_2[0x3a] = param_1[0x3d];
  param_2[0x3b] = param_1[0x3c];
  param_2[0x3c] = param_1[0x3b];
  param_2[0x3d] = param_1[0x3a];
  param_2[0x3e] = param_1[0x39];
  param_2[0x3f] = param_1[0x38];
  return;
}



void FUN_00ce9790(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar1 = *param_2;
  if (uVar1 != 0) {
    do {
      uVar3 = uVar1 & 0xff;
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 >> 8;
    } while (uVar1 != 0);
    *param_3 = uVar3;
    uVar1 = *param_2;
    if (iVar2 != 0) goto LAB_00ce97ba;
  }
  iVar2 = 1;
LAB_00ce97ba:
  func_0x00bfae30(param_1,uVar1,0,iVar2);
  return;
}



void FUN_00cec650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x00e87f70();
  param_1 = 1;
  func_0x00cecc40(param_3,param_4,param_5,&param_1,&stack0x00000000,param_6,param_7);
  return;
}



void FUN_00cec6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x00e87f70();
  param_1 = 0;
  func_0x00cecc40(param_3,param_4,param_5,&param_1,&stack0x00000000,param_6,param_7);
  return;
}



int FUN_00ced980(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6,int *param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  func_0x00e87f70();
  iVar3 = 0;
  param_3 = *param_7;
  uVar6 = 0;
  iVar5 = 0;
  param_1 = 0;
  iVar7 = 0;
  param_4 = 0;
  param_2 = 0;
  uVar4 = param_8 + 7U >> 3;
  param_5 = func_0x00c0fcc0();
  if (param_5 == 0) {
    iVar1 = 0;
LAB_00cedb4f:
    param_8 = 0x8000a;
    iVar3 = 0;
    param_7 = (int *)0x1af;
  }
  else {
    iVar1 = func_0x00bba550(param_3,uVar4,0);
    if (iVar1 == 0) {
      param_8 = 0x80003;
      param_7 = (int *)0x1b2;
      goto LAB_00cedb61;
    }
    param_3 = param_3 + uVar4;
    param_8 = iVar1;
    param_1 = func_0x00bba550(param_3,0x14,0);
    iVar1 = param_8;
    if ((param_1 != 0) &&
       (iVar7 = func_0x00bba550(param_3 + 0x14,uVar4,0), iVar1 = param_8, iVar7 != 0)) {
      param_3 = param_3 + 0x14 + uVar4;
      if (param_9 != 0) {
        iVar2 = func_0x00cee2f0(&param_3,uVar4,&param_2);
        iVar1 = param_8;
        iVar5 = param_2;
        if (iVar2 == 0) {
          param_8 = 0x80003;
          param_7 = (int *)0x1b2;
          goto LAB_00cedb61;
        }
LAB_00cedad4:
        iVar3 = param_5;
        iVar2 = func_0x00c0fd60(param_5,iVar1,param_1,iVar7);
        if (iVar2 != 0) {
          iVar7 = 0;
          iVar1 = 0;
          param_1 = 0;
          iVar2 = func_0x00c0fd20(iVar3,iVar5,uVar6);
          if (iVar2 != 0) {
            *param_7 = param_3;
            return iVar3;
          }
        }
        goto LAB_00cedb4f;
      }
      iVar2 = func_0x00cee2f0(&param_3,0x14,&param_4);
      uVar6 = param_4;
      iVar1 = param_8;
      if (iVar2 != 0) {
        func_0x00bba880(param_4,4);
        iVar5 = func_0x00bba5e0();
        iVar1 = param_8;
        if (((iVar5 != 0) && (iVar3 = func_0x00bb5930(), iVar1 = param_8, iVar3 != 0)) &&
           (iVar2 = func_0x00c2b1f0(iVar5,iVar7,uVar6,param_8,iVar3), iVar2 != 0)) {
          func_0x00bb5760(iVar3);
          goto LAB_00cedad4;
        }
      }
    }
    param_8 = 0x80003;
    param_7 = (int *)0x1b2;
  }
LAB_00cedb61:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\pem\\pvkfmt.c",param_7,"ossl_b2i_DSA_after_header");
  func_0x00bc5160(9,param_8,0);
  FUN_00c0fc00(param_5);
  FUN_00bba400(iVar1);
  FUN_00bba400(param_1);
  FUN_00bba400(iVar7);
  FUN_00bba400(iVar5);
  FUN_00bba400(uVar6);
  func_0x00bb5760(iVar3);
  return 0;
}



int FUN_00cedbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                int *param_9,int param_10,int param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  func_0x00e87f70();
  puVar2 = (undefined4 *)*param_9;
  iVar7 = 0;
  param_1 = 0;
  param_7 = 0;
  param_2 = 0;
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  param_6 = 0;
  uVar5 = param_10 + 7U >> 3;
  uVar8 = param_10 + 0xfU >> 4;
  iVar3 = func_0x00bb6340();
  if (iVar3 == 0) goto LAB_00ceddf8;
  param_1 = func_0x00bba5e0();
  if (param_1 != 0) {
    puVar1 = puVar2 + 1;
    iVar7 = func_0x00bba8c0(param_1,*puVar2);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = func_0x00bba550(puVar1,uVar5,0);
      param_10 = iVar7;
      if (iVar7 != 0) {
        if (param_11 == 0) {
          iVar7 = func_0x00cee2f0(&stack0x00000000,uVar8,&param_2);
          if ((((iVar7 == 0) ||
               (iVar7 = func_0x00cee2f0(&stack0x00000000,uVar8,&param_3), iVar7 == 0)) ||
              (iVar7 = func_0x00cee2f0(&stack0x00000000,uVar8,&param_4), iVar7 == 0)) ||
             (((iVar7 = func_0x00cee2f0(&stack0x00000000,uVar8,&param_5), iVar7 == 0 ||
               (iVar7 = func_0x00cee2f0(&stack0x00000000,uVar8,&param_6), iVar7 == 0)) ||
              (iVar7 = func_0x00cee2f0(&stack0x00000000,uVar5,&param_7), iVar7 == 0)))) {
            uVar9 = 0x80003;
            uVar6 = 499;
            iVar7 = param_10;
            goto LAB_00cede02;
          }
          iVar4 = func_0x00bb6450(iVar3,param_2,param_3);
          iVar7 = param_10;
          if (iVar4 != 0) {
            param_3 = 0;
            param_2 = 0;
            iVar4 = func_0x00bb63b0(iVar3,param_4,param_5,param_6);
            iVar7 = param_10;
            if (iVar4 != 0) {
              param_6 = 0;
              param_5 = 0;
              param_4 = 0;
              goto LAB_00ceddad;
            }
          }
        }
        else {
LAB_00ceddad:
          iVar4 = func_0x00bb64c0(iVar3,param_10,param_1,param_7);
          iVar7 = param_10;
          if (iVar4 != 0) {
            *param_9 = (int)puVar1 + uVar5;
            return iVar3;
          }
        }
LAB_00ceddf8:
        uVar9 = 0x80004;
        uVar6 = 0x1f0;
        goto LAB_00cede02;
      }
    }
  }
  uVar9 = 0x80003;
  uVar6 = 499;
LAB_00cede02:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\pem\\pvkfmt.c",uVar6,"ossl_b2i_RSA_after_header");
  func_0x00bc5160(9,uVar9,0);
  FUN_00bba400(param_1);
  FUN_00bba400(iVar7);
  FUN_00bba400(param_2);
  FUN_00bba400(param_3);
  FUN_00bba400(param_4);
  FUN_00bba400(param_5);
  FUN_00bba400(param_6);
  FUN_00bba400(param_7);
  FUN_00bb6040(iVar3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00cee3a4)

void FUN_00cee350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  func_0x00e87f70();
  iVar1 = func_0x00cd59f0(param_2,param_3);
  if (iVar1 != 0) {
    FUN_00bcaeb0();
    func_0x00c1f050(iVar1,&stack0x00000000);
    func_0x00bcad80();
    func_0x00baa8e0(iVar1);
    func_0x00cee700(param_2,0,0,param_5,param_6);
    return;
  }
  return;
}



undefined4
FUN_00cee3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar1 = func_0x00cd59f0(param_6,param_7);
  param_1 = 0xffffffff;
  iVar4 = 0;
  if (iVar1 == 0) goto LAB_00cee55f;
  iVar4 = func_0x00c1eac0();
  if (iVar4 == 0) {
LAB_00cee535:
    FUN_00bc4f50();
    uVar6 = 0x80;
  }
  else {
    iVar2 = func_0x00c1e8f0(iVar4,0x10);
    if (iVar2 == 0) goto LAB_00cee535;
    FUN_00bcaeb0();
    iVar2 = func_0x00bab230(iVar1,*(undefined4 *)(iVar4 + 4),0x10);
    bVar5 = iVar2 == 0x10;
    func_0x00bcad80();
    if (iVar2 != 0x10) {
LAB_00cee4fe:
      func_0x00baa8e0(iVar1);
      if (!bVar5) {
        func_0x00c1e8a0(iVar4);
        iVar4 = 0;
      }
      uVar6 = func_0x00cee700(param_6,2,iVar4,param_9,param_10);
      return uVar6;
    }
    FUN_00bcaeb0();
    param_2 = *(undefined4 *)(iVar4 + 4);
    iVar2 = func_0x00cee050(&param_2,0x10,&param_4,&param_3,&param_1,&stack0x00000000);
    bVar5 = 0 < iVar2;
    func_0x00bcad80();
    if (iVar2 < 1) goto LAB_00cee4fe;
    iVar2 = func_0x00cede80(param_3,param_1,0xffffffff);
    iVar3 = func_0x00c1e8f0(iVar4,iVar2 + 0x10);
    if (iVar3 != 0) {
      FUN_00bcaeb0();
      iVar3 = func_0x00bab230(iVar1,*(int *)(iVar4 + 4) + 0x10,iVar2);
      bVar5 = iVar3 == iVar2;
      func_0x00bcad80();
      goto LAB_00cee4fe;
    }
    FUN_00bc4f50();
    uVar6 = 0x96;
  }
  func_0x00bc5050("providers\\implementations\\storemgmt\\file_store_any2obj.c",uVar6,
                  "msblob2obj_decode");
  func_0x00bc5160(9,0x80007,0);
LAB_00cee55f:
  func_0x00baa8e0(iVar1);
  func_0x00c1e8a0(iVar4);
  return 0;
}



undefined4
FUN_00cee580(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar1 = func_0x00cd59f0(param_4,param_5);
  iVar4 = 0;
  if (iVar1 == 0) goto LAB_00cee6dc;
  iVar4 = func_0x00c1eac0();
  if (iVar4 == 0) {
LAB_00cee6b2:
    FUN_00bc4f50();
    uVar6 = 0xc3;
  }
  else {
    iVar2 = func_0x00c1e8f0(iVar4,0x18);
    if (iVar2 == 0) goto LAB_00cee6b2;
    FUN_00bcaeb0();
    iVar2 = func_0x00bab230(iVar1,*(undefined4 *)(iVar4 + 4),0x18);
    bVar5 = iVar2 == 0x18;
    func_0x00bcad80();
    if (iVar2 != 0x18) {
LAB_00cee67b:
      func_0x00baa8e0(iVar1);
      if (!bVar5) {
        func_0x00c1e8a0(iVar4);
        iVar4 = 0;
      }
      uVar6 = func_0x00cee700(param_4,2,iVar4,param_7,param_8);
      return uVar6;
    }
    FUN_00bcaeb0();
    iVar2 = func_0x00ceded0(&stack0x00000000,0x18,0,&param_2,&param_1);
    bVar5 = 0 < iVar2;
    func_0x00bcad80();
    if (iVar2 < 1) goto LAB_00cee67b;
    iVar3 = param_2 + param_1;
    iVar2 = func_0x00c1e8f0(iVar4,iVar3 + 0x18);
    if (iVar2 != 0) {
      FUN_00bcaeb0();
      iVar2 = func_0x00bab230(iVar1,*(int *)(iVar4 + 4) + 0x18,iVar3);
      bVar5 = iVar2 == iVar3;
      func_0x00bcad80();
      goto LAB_00cee67b;
    }
    FUN_00bc4f50();
    uVar6 = 0xd9;
  }
  func_0x00bc5050("providers\\implementations\\storemgmt\\file_store_any2obj.c",uVar6,
                  "pvk2obj_decode");
  func_0x00bc5160(9,0x80007,0);
LAB_00cee6dc:
  func_0x00baa8e0(iVar1);
  func_0x00c1e8a0(iVar4);
  return 0;
}



undefined ** FUN_00cee8e0(void)

{
  return &PTR_s_blocksize_010b88b8;
}



undefined4 FUN_00ceeb70(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 1;
}



void FUN_00ceeb80(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint _Size;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  uint in_stack_0000004c;
  int in_stack_00000054;
  int in_stack_00000058;
  uint *in_stack_0000005c;
  uint in_stack_00000060;
  void *in_stack_00000064;
  uint in_stack_00000068;
  
  func_0x00e87f70();
  uVar12 = in_stack_00000068;
  pvVar17 = in_stack_00000064;
  puVar11 = in_stack_0000005c;
  iVar14 = in_stack_00000058;
  iVar10 = in_stack_00000054;
  in_stack_0000004c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((in_stack_00000068 < 0x10) || (in_stack_00000060 < in_stack_00000068)) goto LAB_00ceedf5;
  if (in_stack_00000058 == 0) {
    *in_stack_0000005c = in_stack_00000068;
    FUN_008ab370();
    return;
  }
  if ((*(uint *)(in_stack_00000054 + 0x50) & 0x10) != 0) goto LAB_00ceedf5;
  iVar13 = *(int *)(in_stack_00000054 + 0x4c);
  if ((*(uint *)(in_stack_00000054 + 0x50) & 2) == 0) {
    if (iVar13 == 0) {
      uVar16 = in_stack_00000068 & 0xf;
      if (uVar16 == 0) {
LAB_00ceec85:
        iVar14 = (**(code **)(*(int *)(in_stack_00000054 + 0x70) + 4))
                           (in_stack_00000054,in_stack_00000058,in_stack_00000064,in_stack_00000068)
        ;
        uVar16 = -(uint)(iVar14 != 0) & uVar12;
      }
      else {
        iVar13 = (in_stack_00000068 - uVar16) + -0x10;
        if (iVar13 != 0) {
          iVar15 = (**(code **)(*(int *)(in_stack_00000054 + 0x70) + 4))
                             (in_stack_00000054,in_stack_00000058,in_stack_00000064,iVar13);
          if (iVar15 == 0) {
            uVar16 = 0;
            goto LAB_00ceedcf;
          }
          pvVar17 = (void *)((int)pvVar17 + iVar13);
          iVar14 = iVar14 + iVar13;
        }
        uVar2 = *(undefined4 *)(iVar10 + 0x20);
        uVar3 = *(undefined4 *)(iVar10 + 0x24);
        uVar4 = *(undefined4 *)(iVar10 + 0x28);
        uVar5 = *(undefined4 *)(iVar10 + 0x2c);
        puVar1 = (undefined4 *)(uVar16 + (int)pvVar17);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        *(undefined4 *)(iVar10 + 0x20) = 0;
        *(undefined4 *)(iVar10 + 0x24) = 0;
        *(undefined4 *)(iVar10 + 0x28) = 0;
        *(undefined4 *)(iVar10 + 0x2c) = 0;
        iVar13 = (**(code **)(*(int *)(iVar10 + 0x70) + 4))(iVar10,&stack0x0000003c,puVar1,0x10);
        if (iVar13 == 0) {
          uVar16 = 0;
        }
        else {
          memcpy(&stack0x0000002c,pvVar17,uVar16);
          memcpy((void *)((int)&stack0x0000002c + uVar16),&stack0x0000003c + uVar16,0x10 - uVar16);
          func_0x00bd0f80(&stack0x0000002c,&stack0x0000003c,uVar16,iVar14 + 0x10);
          *(undefined4 *)(iVar10 + 0x20) = uVar2;
          *(undefined4 *)(iVar10 + 0x24) = uVar3;
          *(undefined4 *)(iVar10 + 0x28) = uVar4;
          *(undefined4 *)(iVar10 + 0x2c) = uVar5;
          iVar14 = (**(code **)(*(int *)(iVar10 + 0x70) + 4))(iVar10,iVar14,&stack0x0000002c,0x10);
          if (iVar14 == 0) {
            uVar16 = 0;
          }
          else {
            *(undefined4 *)(iVar10 + 0x20) = uVar6;
            *(undefined4 *)(iVar10 + 0x24) = uVar7;
            *(undefined4 *)(iVar10 + 0x28) = uVar8;
            *(undefined4 *)(iVar10 + 0x2c) = uVar9;
            uVar16 = uVar12;
          }
        }
      }
    }
    else {
      if (iVar13 == 1) {
        if ((in_stack_00000068 & 0xf) == 0) goto LAB_00ceec85;
      }
      else if (iVar13 != 2) goto LAB_00ceedf5;
      uVar16 = func_0x00cee8f0(in_stack_00000054,in_stack_00000064,in_stack_00000058,
                               in_stack_00000068);
    }
  }
  else if (iVar13 == 0) {
    _Size = in_stack_00000068 & 0xf;
    uVar16 = in_stack_00000068 - _Size;
    iVar13 = (**(code **)(*(int *)(in_stack_00000054 + 0x70) + 4))
                       (in_stack_00000054,in_stack_00000058,in_stack_00000064,uVar16);
    if (iVar13 == 0) {
      uVar16 = 0;
    }
    else if (_Size != 0) {
      in_stack_0000002c = 0;
      in_stack_00000030 = 0;
      in_stack_00000034 = 0;
      in_stack_00000038 = 0;
      memcpy(&stack0x0000002c,(void *)((int)pvVar17 + uVar16),_Size);
      iVar14 = (**(code **)(*(int *)(iVar10 + 0x70) + 4))
                         (iVar10,(_Size - 0x10) + iVar14 + uVar16,&stack0x0000002c,0x10);
      uVar16 = -(uint)(iVar14 != 0) & uVar12;
    }
  }
  else {
    if (iVar13 == 1) {
      if ((in_stack_00000068 & 0xf) == 0) goto LAB_00ceec85;
    }
    else if (iVar13 != 2) goto LAB_00ceedf5;
    uVar16 = func_0x00ceea70(in_stack_00000054,in_stack_00000064,in_stack_00000058,in_stack_00000068
                            );
  }
LAB_00ceedcf:
  if (uVar16 != 0) {
    *(uint *)(iVar10 + 0x50) = *(uint *)(iVar10 + 0x50) | 0x10;
    *puVar11 = uVar16;
    FUN_008ab370();
    return;
  }
LAB_00ceedf5:
  FUN_008ab370();
  return;
}



undefined4 FUN_00ceee70(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  iVar1 = param_1 + 0x80;
  *(int *)(param_1 + 0x74) = iVar1;
  if (((*(int *)(param_1 + 0x38) == 1) || (*(int *)(param_1 + 0x38) == 2)) &&
     ((*(byte *)(param_1 + 0x50) & 2) == 0)) {
    if ((DAT_01466b74 & 0x200) == 0) {
      iVar1 = func_0x00404a60(param_2,param_3 << 3,iVar1);
      puVar2 = (undefined *)0x0;
      if (*(int *)(param_1 + 0x38) == 2) {
        puVar2 = &DAT_004040f0;
      }
      puVar3 = &LAB_00404040;
    }
    else {
      iVar1 = func_0x00405770();
      puVar2 = (undefined *)0x0;
      if (*(int *)(param_1 + 0x38) == 2) {
        puVar2 = &LAB_00405850;
      }
      puVar3 = &LAB_00405810;
    }
  }
  else if ((DAT_01466b74 & 0x200) == 0) {
    iVar1 = func_0x00404a50(param_2,param_3 << 3,iVar1);
    puVar2 = (undefined *)0x0;
    if (*(int *)(param_1 + 0x38) == 2) {
      puVar2 = &DAT_004040f0;
    }
    puVar3 = &LAB_00402a00;
  }
  else {
    iVar1 = func_0x00405720();
    puVar2 = (undefined *)0x0;
    if (*(int *)(param_1 + 0x38) == 2) {
      puVar2 = &LAB_00405850;
    }
    puVar3 = &LAB_004057d0;
  }
  *(undefined1 **)(param_1 + 0x30) = puVar3;
  *(undefined **)(param_1 + 0x34) = puVar2;
  if (iVar1 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_hw.c",0x75,
                    "cipher_hw_aes_initkey");
    func_0x00bc5160(0x39,0x65,0);
    return 0;
  }
  return 1;
}



void FUN_00ceef80(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x60; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1d] = param_1 + 0x20;
  return;
}



undefined4 FUN_00ceefa0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = param_1 + 0x80;
  *(int *)(param_1 + 0x74) = iVar1;
  if (((*(int *)(param_1 + 0x38) == 1) || (*(int *)(param_1 + 0x38) == 2)) &&
     ((*(byte *)(param_1 + 0x50) & 2) == 0)) {
    iVar1 = func_0x004089e0(param_2,param_3 << 3,iVar1);
    puVar2 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x30) = &LAB_00405990;
    if (*(int *)(param_1 + 0x38) == 2) {
      puVar2 = &SUB_004080f0;
    }
  }
  else {
    iVar1 = func_0x004089c0(param_2,param_3 << 3,iVar1);
    *(undefined1 **)(param_1 + 0x30) = &LAB_00405940;
    if (*(int *)(param_1 + 0x38) == 2) {
      puVar2 = &SUB_004080f0;
    }
    else {
      puVar2 = (undefined1 *)0x0;
      if (*(int *)(param_1 + 0x38) == 5) {
        puVar2 = &LAB_004064d0;
      }
    }
  }
  *(undefined1 **)(param_1 + 0x34) = puVar2;
  if (-1 < iVar1) {
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\ciphers\\cipher_aes_hw_aesni.inc"
                  ,0x30,"cipher_hw_aesni_initkey");
  func_0x00bc5160(0x39,0x65,0);
  return 0;
}



undefined4 FUN_00cef060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x004080f0(param_3,param_2,param_4,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,
                  *(uint *)(param_1 + 0x50) >> 1 & 1);
  return 1;
}



undefined4 FUN_00cef090(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (*(uint *)(param_1 + 0x44) <= param_4) {
    func_0x00405e80(param_3,param_2,param_4,*(undefined4 *)(param_1 + 0x74),
                    *(uint *)(param_1 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cef1a0(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  
  param_3 = param_3 >> 1;
  if ((DAT_01466b74 & 0x200) == 0) {
    if ((*(uint *)(param_1 + 0x50) & 2) == 0) {
      func_0x00404a60(param_2,param_3 * 8,param_1 + 0x80);
      puVar1 = &LAB_00404040;
    }
    else {
      func_0x00404a50();
      puVar1 = &LAB_00402a00;
    }
    *(undefined1 **)(param_1 + 0x278) = puVar1;
    func_0x00404a50(param_2 + param_3,param_3 * 8,param_1 + 0x178);
    *(undefined1 **)(param_1 + 0x27c) = &LAB_00402a00;
  }
  else {
    if ((*(uint *)(param_1 + 0x50) & 2) == 0) {
      func_0x00405770();
      puVar1 = &LAB_00405810;
    }
    else {
      func_0x00405720();
      puVar1 = &LAB_004057d0;
    }
    *(undefined1 **)(param_1 + 0x278) = puVar1;
    func_0x00405720(param_2 + param_3,param_3 * 8,param_1 + 0x178);
    *(undefined1 **)(param_1 + 0x27c) = &LAB_004057d0;
  }
  *(int *)(param_1 + 0x274) = param_1 + 0x178;
  *(int *)(param_1 + 0x270) = param_1 + 0x80;
  *(undefined4 *)(param_1 + 0x280) = 0;
  return 1;
}



void FUN_00cef290(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xa2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x9c] = param_1 + 0x20;
  param_1[0x9d] = param_1 + 0x5e;
  return;
}



undefined4 FUN_00cef2c0(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  
  param_3 = param_3 >> 1;
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    func_0x004089e0(param_2,param_3 * 8,param_1 + 0x80);
    puVar1 = &LAB_00405990;
  }
  else {
    func_0x004089c0();
    puVar1 = &LAB_00405940;
  }
  *(undefined1 **)(param_1 + 0x278) = puVar1;
  func_0x004089c0(param_2 + param_3,param_3 * 8,param_1 + 0x178);
  *(int *)(param_1 + 0x274) = param_1 + 0x178;
  *(int *)(param_1 + 0x270) = param_1 + 0x80;
  puVar1 = &LAB_00406e00;
  *(undefined1 **)(param_1 + 0x27c) = &LAB_00405940;
  if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
    puVar1 = &LAB_00406870;
  }
  *(undefined1 **)(param_1 + 0x280) = puVar1;
  return 1;
}



undefined4 FUN_00cef5d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 * 8;
  iVar2 = param_1 + 0x270;
  iVar1 = param_1 + 0x80;
  if ((DAT_01466b74 & 0x200) == 0) {
    func_0x00bd05c0(iVar2);
    func_0x00404a50(param_2,param_3,iVar1);
    func_0x00404a60(param_2,param_3,param_1 + 0x178);
    iVar2 = func_0x00bd0c60(iVar2,iVar1,param_1 + 0x178,&LAB_00402a00,&LAB_00404040,0);
  }
  else {
    func_0x00bd05c0(iVar2);
    func_0x00405720(param_2,param_3,iVar1);
    func_0x00405770(param_2,param_3,param_1 + 0x178);
    iVar2 = func_0x00bd0c60(iVar2,iVar1,param_1 + 0x178,&LAB_004057d0,&LAB_00405810,0);
  }
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 1;
    return 1;
  }
  return 0;
}



undefined4 FUN_00cef6a0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  func_0x00bd05c0(param_1 + 0x270);
  func_0x004089c0(param_2,param_3 * 8,param_1 + 0x80);
  func_0x004089e0(param_2,param_3 * 8,param_1 + 0x178);
  puVar1 = &LAB_00407a70;
  if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
    puVar1 = &LAB_004073f0;
  }
  iVar2 = func_0x00bd0c60(param_1 + 0x270,param_1 + 0x80,param_1 + 0x178,&LAB_00405940,&LAB_00405990
                          ,puVar1);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 1;
  return 1;
}



undefined4
FUN_00cefb30(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x17b,
                      "ossl_gcm_cipher");
      func_0x00bc5160(0x39,0x6a,0);
    }
    else {
      iVar1 = func_0x00cef750(param_1,param_2,param_3,param_5,param_6);
      if (0 < iVar1) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00cefba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cef9d0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



void FUN_00cefbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cef9d0(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



undefined4 FUN_00cefc00(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_2;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    uVar2 = func_0x00cf8ba0(iVar3);
    switch(uVar2) {
    case 0x23:
      iVar3 = func_0x00bc10c0(param_2,*(uint *)(param_1 + 0x34) >> 3 & 1);
      goto LAB_00cefe24;
    case 0x25:
      uVar1 = param_2[3];
      if ((((uVar1 == 0) || (0x10 < uVar1)) || ((*(byte *)(param_1 + 0x34) & 1) == 0)) ||
         (*(int *)(param_1 + 0xc) == -1)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0xe0,
                        "ossl_gcm_get_ctx_params");
        func_0x00bc5160(0x39,0x6e,0);
        return 0;
      }
      iVar3 = func_0x00bc1050(param_2,param_1 + 0xb8,uVar1);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar2 = 0xe4;
LAB_00cefc5b:
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",uVar2,
                        "ossl_gcm_get_ctx_params");
        func_0x00bc5160(0x39,0x68,0);
        return 0;
      }
      break;
    case 0x26:
      uVar2 = 0x10;
      if (*(int *)(param_1 + 0xc) != -1) {
        uVar2 = *(undefined4 *)(param_1 + 0xc);
      }
      iVar3 = func_0x00bc10c0(param_2,uVar2);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar2 = 0xb1;
        goto LAB_00cefc5b;
      }
      break;
    case 0x28:
      iVar3 = func_0x00bc10c0(param_2,*(undefined4 *)(param_1 + 0x10));
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar2 = 0xd5;
        goto LAB_00cefc5b;
      }
      break;
    case 0x29:
      if (param_2[2] == 0) {
        return 0;
      }
      if (param_2[1] != 5) {
        return 0;
      }
      iVar3 = func_0x00cefab0(param_1,param_2[2],param_2[3]);
LAB_00cefe24:
      if (iVar3 == 0) {
        return 0;
      }
      break;
    case 0x34:
      if (*(int *)(param_1 + 0x30) == 0) {
        return 0;
      }
      if ((uint)param_2[3] < *(uint *)(param_1 + 8)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0xbb,
                        "ossl_gcm_get_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
      iVar3 = func_0x00bc1050(param_2,param_1 + 0x38,*(uint *)(param_1 + 8));
      if ((iVar3 == 0) &&
         (iVar3 = func_0x00bc1000(param_2,param_1 + 0x38,*(undefined4 *)(param_1 + 8)), iVar3 == 0))
      {
        FUN_00bc4f50();
        uVar2 = 0xc0;
        goto LAB_00cefc5b;
      }
      break;
    case 0x35:
      iVar3 = func_0x00bc10c0(param_2,*(undefined4 *)(param_1 + 8));
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x9f;
        goto LAB_00cefc5b;
      }
      break;
    case 0x36:
      iVar3 = func_0x00bc10c0(param_2,*(undefined4 *)(param_1 + 4));
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar2 = 0xa6;
        goto LAB_00cefc5b;
      }
      break;
    case 0x4a:
      if (*(int *)(param_1 + 0x30) == 0) {
        return 0;
      }
      if ((uint)param_2[3] < *(uint *)(param_1 + 8)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0xc9,
                        "ossl_gcm_get_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
      iVar3 = func_0x00bc1050(param_2,param_1 + 0x38,*(uint *)(param_1 + 8));
      if ((iVar3 == 0) &&
         (iVar3 = func_0x00bc1000(param_2,param_1 + 0x38,*(undefined4 *)(param_1 + 8)), iVar3 == 0))
      {
        FUN_00bc4f50();
        uVar2 = 0xce;
        goto LAB_00cefc5b;
      }
    }
    iVar3 = param_2[5];
    param_2 = param_2 + 5;
  } while( true );
}



undefined4 FUN_00ceff70(int param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  iVar2 = param_1;
  if ((param_2 != (int *)0x0) && (iVar4 = *param_2, iVar4 != 0)) {
    piVar8 = param_2 + 1;
    do {
      uVar3 = func_0x00cf8ba0(iVar4);
      switch(uVar3) {
      case 0x25:
        param_1 = iVar2 + 0xb8;
        iVar4 = func_0x00bc01d0(piVar8 + -1,&param_1,0x10,&param_2);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          uVar3 = 0x10b;
          goto LAB_00cf022f;
        }
        if ((param_2 == (int *)0x0) || ((*(byte *)(iVar2 + 0x34) & 1) != 0)) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x10f,
                          "ossl_gcm_set_ctx_params");
          func_0x00bc5160(0x39,0x6e,0);
          return 0;
        }
        *(int **)(iVar2 + 0xc) = param_2;
        break;
      case 0x27:
        if (*piVar8 != 5) {
          FUN_00bc4f50();
          uVar3 = 0x128;
          goto LAB_00cf022f;
        }
        iVar4 = piVar8[2];
        puVar1 = (undefined8 *)piVar8[1];
        iVar5 = FUN_0058e2e0();
        if ((iVar5 == 0) || (iVar4 != 0xd)) {
LAB_00cf028d:
          param_2 = (int *)0x0;
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x12d,
                          "ossl_gcm_set_ctx_params");
          func_0x00bc5160(0x39,0x6c,0);
          return 0;
        }
        *(undefined8 *)(iVar2 + 0xb8) = *puVar1;
        *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(puVar1 + 1);
        *(undefined1 *)(iVar2 + 0xc4) = *(undefined1 *)((int)puVar1 + 0xc);
        *(undefined4 *)(iVar2 + 0x14) = 0xd;
        uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar2 + 0xc3),*(undefined1 *)(iVar2 + 0xc4));
        if (uVar7 < 8) goto LAB_00cf028d;
        uVar6 = uVar7 - 8;
        if ((*(byte *)(iVar2 + 0x34) & 1) == 0) {
          if (uVar6 < 0x10) goto LAB_00cf028d;
          uVar6 = uVar7 - 0x18;
        }
        *(char *)(iVar2 + 0xc4) = (char)uVar6;
        *(char *)(iVar2 + 0xc3) = (char)(uVar6 >> 8);
        param_2 = (int *)&DAT_00000010;
        *(undefined4 *)(iVar2 + 0x10) = 0x10;
        break;
      case 0x2a:
        if (*piVar8 != 5) {
          FUN_00bc4f50();
          uVar3 = 0x135;
          goto LAB_00cf022f;
        }
        uVar7 = piVar8[2];
        if (uVar7 == 0xffffffff) {
          memcpy((void *)(iVar2 + 0x38),(void *)piVar8[1],*(size_t *)(iVar2 + 8));
          *(undefined4 *)(iVar2 + 0x30) = 1;
          *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 0x10;
        }
        else {
          if ((uVar7 < 4) || (*(int *)(iVar2 + 8) - uVar7 < 8)) {
code_r0x00cf02d7:
            FUN_00bc4f50();
            uVar3 = 0x139;
LAB_00cf022f:
            func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",uVar3,
                            "ossl_gcm_set_ctx_params");
            func_0x00bc5160(0x39,0x67,0);
            return 0;
          }
          memcpy((void *)(iVar2 + 0x38),(void *)piVar8[1],uVar7);
          uVar6 = *(uint *)(iVar2 + 0x34);
          if ((uVar6 & 1) != 0) {
            iVar4 = func_0x00bc5450(*(undefined4 *)(iVar2 + 200),iVar2 + 0x38 + uVar7,
                                    *(int *)(iVar2 + 8) - uVar7,0);
            if (iVar4 < 1) goto code_r0x00cf02d7;
            uVar6 = *(uint *)(iVar2 + 0x34) | 8;
          }
          *(undefined4 *)(iVar2 + 0x30) = 1;
          *(uint *)(iVar2 + 0x34) = uVar6 | 0x10;
        }
        break;
      case 0x2b:
        if ((void *)piVar8[1] == (void *)0x0) {
          return 0;
        }
        if (*piVar8 != 5) {
          return 0;
        }
        if (((byte)*(undefined4 *)(iVar2 + 0x34) & 0x15) != 0x14) {
          return 0;
        }
        memcpy((void *)(*(int *)(iVar2 + 8) + 0x38 + (iVar2 - piVar8[2])),(void *)piVar8[1],
               piVar8[2]);
        iVar4 = (**(code **)(*(int *)(iVar2 + 0xcc) + 4))
                          (iVar2,iVar2 + 0x38,*(undefined4 *)(iVar2 + 8));
        if (iVar4 == 0) {
          return 0;
        }
        *(undefined4 *)(iVar2 + 0x30) = 2;
        break;
      case 0x35:
        iVar4 = func_0x00bc0300(piVar8 + -1,&param_2);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          uVar3 = 0x117;
          goto LAB_00cf022f;
        }
        if ((param_2 == (int *)0x0) || ((int *)0x80 < param_2)) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x11b,
                          "ossl_gcm_set_ctx_params");
          func_0x00bc5160(0x39,0x6d,0);
          return 0;
        }
        if (*(int **)(iVar2 + 8) != param_2) {
          if (*(int *)(iVar2 + 0x30) != 0) {
            *(undefined4 *)(iVar2 + 0x30) = 3;
          }
          *(int **)(iVar2 + 8) = param_2;
        }
      }
      iVar4 = piVar8[4];
      piVar8 = piVar8 + 5;
    } while (iVar4 != 0);
  }
  return 1;
}



undefined4 FUN_00cf0330(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00cef750(param_1,param_2,param_3,0,0);
    if (0 < iVar1) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}



undefined4
FUN_00cf0370(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5,uint param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    *param_3 = 0;
  }
  else {
    if (param_4 < param_6) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x155,
                      "ossl_gcm_stream_update");
      func_0x00bc5160(0x39,0x6a,0);
      return 0;
    }
    iVar1 = func_0x00cef750(param_1,param_2,param_3,param_5,param_6);
    if (iVar1 < 1) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x15a,
                      "ossl_gcm_stream_update");
      func_0x00bc5160(0x39,0x66,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00cf0460(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  
  if ((DAT_01466b74 & 0x200) == 0) {
    func_0x00404a50(param_2,param_3 << 3,param_1 + 0x288);
    puVar1 = &LAB_00402a00;
  }
  else {
    func_0x00405720();
    puVar1 = &LAB_004057d0;
  }
  func_0x00bce4f0(param_1 + 0xd0,param_1 + 0x288,puVar1);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
  *(undefined4 *)(param_1 + 0x280) = 0;
  return 1;
}



bool FUN_00cf04d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xd0;
  iVar1 = *(int *)(param_1 + 0x280);
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    if (iVar1 == 0) {
      iVar2 = func_0x00bcd5a0(iVar2,param_2,param_4,param_3);
      return iVar2 == 0;
    }
    iVar2 = func_0x00bcd970(iVar2,param_2,param_4,param_3,iVar1);
  }
  else if (iVar1 == 0) {
    iVar2 = func_0x00bcdcc0(iVar2,param_2,param_4,param_3);
  }
  else {
    iVar2 = func_0x00bce090(iVar2,param_2,param_4,param_3,iVar1);
  }
  if (iVar2 != 0) {
    return false;
  }
  return true;
}



undefined4 FUN_00cf0560(int param_1,undefined4 param_2,int param_3)

{
  func_0x004089c0(param_2,param_3 << 3,param_1 + 0x288);
  func_0x00bce4f0(param_1 + 0xd0,param_1 + 0x288,&LAB_00405940);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
  *(undefined1 **)(param_1 + 0x280) = &LAB_004064d0;
  return 1;
}



undefined4
FUN_00cf0910(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x139,
                      "ossl_ccm_cipher");
      func_0x00bc5160(0x39,0x6a,0);
    }
    else {
      iVar1 = func_0x00cf05d0(param_1,param_2,param_3,param_5,param_6);
      if (0 < iVar1) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00cf0980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cf0800(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



void FUN_00cf09b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cf0800(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



undefined4 FUN_00cf09e0(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00bc09d0(param_2,"ivlen");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,0xf - param_1[1]), iVar1 == 0)) {
    FUN_00bc4f50();
    uVar3 = 0x9a;
LAB_00cf0a22:
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",uVar3,
                    "ossl_ccm_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"taglen");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,param_1[2]), iVar1 == 0)) {
    FUN_00bc4f50();
    uVar3 = 0xa3;
    goto LAB_00cf0a22;
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_01056ae8);
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0xc) < 0xf - param_1[1]) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xab,
                      "ossl_ccm_get_ctx_params");
      func_0x00bc5160(0x39,0x6d,0);
      return 0;
    }
    iVar2 = func_0x00bc1050(iVar1,param_1 + 6,*(uint *)(iVar1 + 0xc));
    if ((iVar2 == 0) &&
       (iVar1 = func_0x00bc1000(iVar1,param_1 + 6,*(undefined4 *)(iVar1 + 0xc)), iVar1 == 0)) {
      FUN_00bc4f50();
      uVar3 = 0xb0;
      goto LAB_00cf0c1d;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"updated-iv");
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0xc) < 0xf - param_1[1]) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xb8,
                      "ossl_ccm_get_ctx_params");
      func_0x00bc5160(0x39,0x6d,0);
      return 0;
    }
    iVar2 = func_0x00bc1050(iVar1,param_1 + 6,*(uint *)(iVar1 + 0xc));
    if ((iVar2 == 0) &&
       (iVar1 = func_0x00bc1000(iVar1,param_1 + 6,*(undefined4 *)(iVar1 + 0xc)), iVar1 == 0)) {
      FUN_00bc4f50();
      uVar3 = 0xbd;
      goto LAB_00cf0c1d;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if ((iVar1 == 0) || (iVar1 = func_0x00bc10c0(iVar1,param_1[3]), iVar1 != 0)) {
    iVar1 = func_0x00bc09d0(param_2,"tlsaadpad");
    if ((iVar1 == 0) || (iVar1 = func_0x00bc10c0(iVar1,param_1[5]), iVar1 != 0)) {
      iVar1 = func_0x00bc09d0(param_2,&DAT_0103d958);
      if (iVar1 == 0) {
        return 1;
      }
      if (((byte)*param_1 & 9) == 9) {
        if (*(int *)(iVar1 + 4) != 5) {
          FUN_00bc4f50();
          uVar3 = 0xd5;
          goto LAB_00cf0c1d;
        }
        iVar1 = (**(code **)(param_1[0x1b] + 0x14))
                          (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
        if (iVar1 != 0) {
          *param_1 = *param_1 & 0xffffffe3;
          return 1;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xd1,
                        "ossl_ccm_get_ctx_params");
        func_0x00bc5160(0x39,0x77,0);
      }
      return 0;
    }
    FUN_00bc4f50();
    uVar3 = 0xca;
  }
  else {
    FUN_00bc4f50();
    uVar3 = 0xc4;
  }
LAB_00cf0c1d:
  func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",uVar3,
                  "ossl_ccm_get_ctx_params");
  func_0x00bc5160(0x39,0x68,0);
  return 0;
}



undefined4 FUN_00cf0cc0(uint *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar5 = param_2;
  puVar3 = param_1;
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = func_0x00bc09d0(param_2,&DAT_0103d958);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 5) {
      FUN_00bc4f50();
      uVar7 = 0x50;
      goto LAB_00cf0cfe;
    }
    uVar6 = *(uint *)(iVar4 + 0xc);
    if ((((uVar6 & 1) != 0) || (uVar6 < 4)) || (0x10 < uVar6)) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x54,
                      "ossl_ccm_set_ctx_params");
      func_0x00bc5160(0x39,0x76,0);
      return 0;
    }
    if (*(void **)(iVar4 + 8) != (void *)0x0) {
      if ((*puVar3 & 1) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x5a,
                        "ossl_ccm_set_ctx_params");
        func_0x00bc5160(0x39,0x78,0);
        return 0;
      }
      memcpy(puVar3 + 10,*(void **)(iVar4 + 8),uVar6);
      *puVar3 = *puVar3 | 8;
    }
    puVar3[2] = *(uint *)(iVar4 + 0xc);
  }
  iVar4 = func_0x00bc09d0(iVar5,"ivlen");
  if (iVar4 != 0) {
    iVar4 = func_0x00bc0300(iVar4,&param_1);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      uVar7 = 0x68;
      goto LAB_00cf0cfe;
    }
    uVar6 = -(int)param_1 + 0xf;
    if (6 < -(int)param_1 + 0xdU) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x6d,
                      "ossl_ccm_set_ctx_params");
      func_0x00bc5160(0x39,0x6d,0);
      return 0;
    }
    if (puVar3[1] != uVar6) {
      *puVar3 = *puVar3 & 0xfffffffb;
      puVar3[1] = uVar6;
    }
  }
  iVar4 = func_0x00bc09d0(iVar5,"tlsaad");
  if (iVar4 == 0) {
LAB_00cf0ecd:
    iVar5 = func_0x00bc09d0(iVar5,"tlsivfixed");
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 4) != 5) {
        FUN_00bc4f50();
        uVar7 = 0x87;
LAB_00cf0cfe:
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",uVar7,
                        "ossl_ccm_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (*(int *)(iVar5 + 0xc) != 4) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x8b,
                        "ossl_ccm_set_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
      puVar3[6] = **(uint **)(iVar5 + 8);
    }
    return 1;
  }
  if (*(int *)(iVar4 + 4) != 5) {
    FUN_00bc4f50();
    uVar7 = 0x79;
    goto LAB_00cf0cfe;
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  puVar2 = *(undefined8 **)(iVar4 + 8);
  iVar4 = FUN_0058e2e0();
  if ((iVar4 != 0) && (iVar1 == 0xd)) {
    *(undefined8 *)(puVar3 + 10) = *puVar2;
    puVar3[0xc] = *(uint *)(puVar2 + 1);
    *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)((int)puVar2 + 0xc);
    puVar3[4] = 0xd;
    uVar6 = (uint)CONCAT11(*(undefined1 *)((int)puVar3 + 0x33),(char)puVar3[0xd]);
    if (7 < uVar6) {
      uVar6 = uVar6 - 8;
      if ((*puVar3 & 1) == 0) {
        if (uVar6 < puVar3[2]) goto LAB_00cf0ef9;
        uVar6 = uVar6 - puVar3[2];
      }
      *(char *)(puVar3 + 0xd) = (char)uVar6;
      *(char *)((int)puVar3 + 0x33) = (char)(uVar6 >> 8);
      param_1 = (uint *)puVar3[2];
      if (param_1 == (uint *)0x0) goto LAB_00cf0f01;
      puVar3[5] = (uint)param_1;
      goto LAB_00cf0ecd;
    }
  }
LAB_00cf0ef9:
  param_1 = (uint *)0x0;
LAB_00cf0f01:
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x7e,
                  "ossl_ccm_set_ctx_params");
  func_0x00bc5160(0x39,0x73,0);
  return 0;
}



undefined4 FUN_00cf0f80(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00cf05d0(param_1,param_2,param_3,0,0);
    if (0 < iVar1) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}



undefined4
FUN_00cf0fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,uint param_6)

{
  int iVar1;
  
  if (param_4 < param_6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x114,
                    "ossl_ccm_stream_update");
    func_0x00bc5160(0x39,0x6a,0);
    return 0;
  }
  iVar1 = func_0x00cf05d0(param_1,param_2,param_3,param_5,param_6);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x119,
                    "ossl_ccm_stream_update");
    func_0x00bc5160(0x39,0x66,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00cf1050(uint *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  
  if ((DAT_01466b74 & 0x200) == 0) {
    func_0x00404a50(param_2,param_3 << 3,param_1 + 0x20);
    puVar1 = &LAB_00402a00;
  }
  else {
    func_0x00405720();
    puVar1 = &LAB_004057d0;
  }
  func_0x00bcf8b0(param_1 + 0xe,param_1[2],param_1[1],param_1 + 0x20,puVar1);
  *param_1 = *param_1 | 2;
  param_1[0x1a] = 0;
  return 1;
}



undefined4 FUN_00cf10c0(uint *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  
  func_0x004089c0(param_2,param_3 << 3,param_1 + 0x20);
  func_0x00bcf8b0(param_1 + 0xe,param_1[2],param_1[1],param_1 + 0x20,&LAB_00405940);
  puVar1 = &LAB_00406320;
  if ((*param_1 & 1) != 0) {
    puVar1 = &LAB_004061f0;
  }
  param_1[0x1a] = (uint)puVar1;
  *param_1 = *param_1 | 2;
  return 1;
}



undefined4 FUN_00cf1140(int param_1,undefined4 param_2,int param_3)

{
  func_0x00c811f0(param_2,param_3 << 3,param_1 + 0x288);
  func_0x00bce4f0(param_1 + 0xd0,param_1 + 0x288,FUN_00c80910);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
  *(undefined4 *)(param_1 + 0x280) = 0;
  return 1;
}



undefined4 FUN_00cf11a0(uint *param_1,undefined4 param_2,int param_3)

{
  func_0x00c811f0(param_2,param_3 << 3,param_1 + 0x1c);
  func_0x00bcf8b0(param_1 + 0xe,param_1[2],param_1[1],param_1 + 0x1c,FUN_00c80910);
  *param_1 = *param_1 | 2;
  param_1[0x1a] = 0;
  return 1;
}



undefined4 FUN_00cf1200(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x80;
  if (((*(byte *)(param_1 + 0x50) & 2) == 0) &&
     ((*(int *)(param_1 + 0x38) == 1 || (*(int *)(param_1 + 0x38) == 2)))) {
    iVar2 = func_0x00c80fa0(param_2,param_3 << 3,iVar1);
  }
  else {
    iVar2 = func_0x00c811f0(param_2,param_3 << 3,iVar1);
  }
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aria_hw.c",0x19,
                    "cipher_hw_aria_initkey");
    func_0x00bc5160(0x39,0x65,0);
    return 0;
  }
  *(int *)(param_1 + 0x74) = iVar1;
  *(code **)(param_1 + 0x30) = FUN_00c80910;
  return 1;
}



void FUN_00cf1290(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x66; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1d] = param_1 + 0x20;
  return;
}



undefined4 FUN_00cf1320(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x74) = param_1 + 0x80;
  iVar2 = func_0x0041c020(param_2,param_3 << 3,param_1 + 0x80);
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_camellia_hw.c",0x1e,
                    "cipher_hw_camellia_initkey");
    func_0x00bc5160(0x39,0x65,0);
    return 0;
  }
  if (((*(byte *)(param_1 + 0x50) & 2) == 0) && ((iVar1 == 1 || (iVar1 == 2)))) {
    puVar3 = (undefined1 *)0x0;
    if (iVar1 == 2) {
      puVar3 = &LAB_0041d0c0;
    }
    *(undefined1 **)(param_1 + 0x30) = &LAB_0041b310;
    *(undefined1 **)(param_1 + 0x34) = puVar3;
    return 1;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 == 2) {
    puVar3 = &LAB_0041d0c0;
  }
  *(undefined1 **)(param_1 + 0x30) = &LAB_0041aee0;
  *(undefined1 **)(param_1 + 0x34) = puVar3;
  return 1;
}



undefined4 FUN_00cf1440(int param_1,undefined4 param_2)

{
  func_0x00c85bb0(param_2,param_1 + 0x288);
  func_0x00bce4f0(param_1 + 0xd0,param_1 + 0x288,FUN_00c850a0);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
  *(undefined4 *)(param_1 + 0x280) = 0;
  return 1;
}



undefined4 FUN_00cf14a0(uint *param_1,undefined4 param_2)

{
  func_0x00c85bb0(param_2,param_1 + 0x1c);
  func_0x00bcf8b0(param_1 + 0xe,param_1[2],param_1[1],param_1 + 0x1c,FUN_00c850a0);
  *param_1 = *param_1 | 2;
  param_1[0x1a] = 0;
  return 1;
}



undefined4 FUN_00cf14f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(int *)(param_1 + 0x74) = param_1 + 0x80;
  if (((*(byte *)(param_1 + 0x50) & 2) == 0) &&
     ((*(int *)(param_1 + 0x38) == 1 || (*(int *)(param_1 + 0x38) == 2)))) {
    pcVar1 = FUN_00c84590;
  }
  else {
    pcVar1 = FUN_00c850a0;
  }
  func_0x00c85bb0(param_2,param_1 + 0x80);
  *(code **)(param_1 + 0x30) = pcVar1;
  return 1;
}



void FUN_00cf1540(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1d] = param_1 + 0x20;
  return;
}



undefined4 FUN_00cf1950(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_00c850a0;
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    pcVar1 = FUN_00c84590;
  }
  func_0x00c85bb0(param_2,param_1 + 0x80);
  *(code **)(param_1 + 0x18c) = pcVar1;
  func_0x00c85bb0((param_3 >> 1) + param_2,param_1 + 0x100);
  *(int *)(param_1 + 0x188) = param_1 + 0x100;
  *(int *)(param_1 + 0x184) = param_1 + 0x80;
  *(code **)(param_1 + 400) = FUN_00c850a0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  return 1;
}



void FUN_00cf19d0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x68; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x61] = param_1 + 0x20;
  param_1[0x62] = param_1 + 0x40;
  return;
}



bool FUN_00cf1a10(void *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = *(uint *)((int)param_1 + 0x50);
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(uint *)((int)param_1 + 0x50) = uVar1 & 0xfffffffd;
  if (param_4 == 0) {
    if (((uVar1 & 4) != 0) &&
       (((iVar2 = *(int *)((int)param_1 + 0x38), iVar2 == 2 || (iVar2 == 3)) || (iVar2 == 4)))) {
      memcpy((void *)((int)param_1 + 0x20),param_1,*(size_t *)((int)param_1 + 0x40));
    }
  }
  else {
    iVar2 = func_0x00ce6750(param_1,param_4,param_5);
    if (iVar2 == 0) {
      return false;
    }
  }
  if (param_2 != 0) {
    if (param_3 == *(int *)((int)param_1 + 0x3c)) {
      iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x70))
                        (param_1,param_2,*(int *)((int)param_1 + 0x3c));
      if (iVar2 != 0) {
        *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 8;
        goto LAB_00cf1ac6;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_tdes_common.c",0x68,"tdes_init");
      func_0x00bc5160(0x39,0x69,0);
    }
    return false;
  }
LAB_00cf1ac6:
  iVar2 = FUN_00ce6880(param_1,param_6);
  return iVar2 != 0;
}



int FUN_00cf1ae0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x208,"providers\\implementations\\ciphers\\cipher_tdes_common.c",0x30);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
      return iVar1;
    }
  }
  return 0;
}



bool FUN_00cf1b20(void *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = *(uint *)((int)param_1 + 0x50);
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(uint *)((int)param_1 + 0x50) = uVar1 | 2;
  if (param_4 == 0) {
    if (((uVar1 & 4) != 0) &&
       (((iVar2 = *(int *)((int)param_1 + 0x38), iVar2 == 2 || (iVar2 == 3)) || (iVar2 == 4)))) {
      memcpy((void *)((int)param_1 + 0x20),param_1,*(size_t *)((int)param_1 + 0x40));
    }
  }
  else {
    iVar2 = func_0x00ce6750(param_1,param_4,param_5);
    if (iVar2 == 0) {
      return false;
    }
  }
  if (param_2 != 0) {
    if (param_3 == *(int *)((int)param_1 + 0x3c)) {
      iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x70))
                        (param_1,param_2,*(int *)((int)param_1 + 0x3c));
      if (iVar2 != 0) {
        *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 8;
        goto LAB_00cf1bd6;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_tdes_common.c",0x68,"tdes_init");
      func_0x00bc5160(0x39,0x69,0);
    }
    return false;
  }
LAB_00cf1bd6:
  iVar2 = FUN_00ce6880(param_1,param_6);
  return iVar2 != 0;
}



void FUN_00cf1bf0(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x208,"providers\\implementations\\ciphers\\cipher_tdes_common.c",0x3e);
  return;
}



undefined4 FUN_00cf1c20(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00ce62c0(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"randkey");
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  iVar2 = *(int *)(iVar2 + 8);
  if ((uVar1 == 0) ||
     (iVar3 = func_0x00bc5990(*(undefined4 *)(param_1 + 0x78),iVar2,uVar1,0), iVar3 < 1)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_tdes_common.c",0xa5,
                    "ossl_tdes_get_ctx_params");
    func_0x00bc5160(0x39,0x79,0);
    return 0;
  }
  func_0x00c7a7f0(iVar2);
  if (uVar1 < 0x10) {
    return 1;
  }
  func_0x00c7a7f0(iVar2 + 8);
  if (uVar1 < 0x18) {
    return 1;
  }
  func_0x00c7a7f0(iVar2 + 0x10);
  return 1;
}



undefined ** FUN_00cf1d50(void)

{
  return &PTR_s_keylen_010b8f40;
}



undefined4 thunk_FUN_00ce6880(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_2;
  iVar1 = param_1;
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"padding");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x27c;
        goto LAB_00ce68c5;
      }
      *(uint *)(iVar1 + 0x50) = (uint)(param_1 != 0) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
    }
    iVar2 = func_0x00bc09d0(iVar3,"use-bits");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x286;
        goto LAB_00ce68c5;
      }
      *(uint *)(iVar1 + 0x50) = -(uint)(param_1 != 0) & 0x80 | *(uint *)(iVar1 + 0x50) & 0xffffff7f;
    }
    iVar2 = func_0x00bc09d0(iVar3,"tls-version");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x54);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x28e;
        goto LAB_00ce68c5;
      }
    }
    iVar2 = func_0x00bc09d0(iVar3,"tls-mac-size");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x60);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x295;
        goto LAB_00ce68c5;
      }
    }
    iVar3 = func_0x00bc09d0(iVar3,&DAT_01056af8);
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0300(iVar3,&param_1);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar4 = 0x29e;
LAB_00ce68c5:
        func_0x00bc5050("providers\\implementations\\ciphers\\ciphercommon.c",uVar4,
                        "ossl_cipher_generic_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      *(int *)(iVar1 + 0x6c) = param_1;
    }
  }
  return 1;
}



undefined ** FUN_00cf1dd0(void)

{
  return &PTR_s_padding_010b8fe0;
}



undefined4 FUN_00cf1de0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x200) = 0;
  func_0x00c7a5b0(param_2,param_1 + 0x80);
  func_0x00c7a5b0(param_2 + 8,param_1 + 0x100);
  func_0x00c7a5b0(param_2 + 0x10,param_1 + 0x180);
  return 1;
}



void FUN_00cf1e30(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1d] = param_1 + 0x20;
  return;
}



undefined4 FUN_00cf1e50(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(code **)(param_1 + 0x200) == (code *)0x0) {
    if (0x3fffffff < param_4) {
      param_1 = param_4 >> 0x1e;
      do {
        func_0x004199c0(param_3,param_2,0x40000000,iVar1 + 0x80,iVar1 + 0x100,iVar1 + 0x180,
                        iVar1 + 0x20,*(uint *)(iVar1 + 0x50) >> 1 & 1);
        param_4 = param_4 + 0xc0000000;
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (param_4 != 0) {
      func_0x004199c0(param_3,param_2,param_4,iVar1 + 0x80,iVar1 + 0x100,iVar1 + 0x180,iVar1 + 0x20,
                      *(uint *)(iVar1 + 0x50) >> 1 & 1);
    }
    return 1;
  }
  (**(code **)(param_1 + 0x200))(param_3,param_2,param_4,param_1 + 0x80,param_1 + 0x20);
  return 1;
}



undefined4 FUN_00cf1f30(int param_1,int param_2,int param_3,uint param_4)

{
  if (7 < param_4) {
    param_2 = param_2 - param_3;
    param_4 = param_4 >> 3;
    do {
      func_0x00c7acd0(param_3,param_3 + param_2,param_1 + 0x80,param_1 + 0x100,param_1 + 0x180,
                      *(uint *)(param_1 + 0x50) >> 1 & 1);
      param_3 = param_3 + 8;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 1;
}



undefined4 FUN_00cf1fc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x200) = 0;
  func_0x00c7a5b0(param_2,(undefined4 *)(param_1 + 0x80));
  func_0x00c7a5b0(param_2 + 8,param_1 + 0x100);
  puVar2 = (undefined4 *)(param_1 + 0x80);
  puVar3 = (undefined4 *)(param_1 + 0x180);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}



undefined4 FUN_00cf2010(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  uint in_stack_00000028;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_0000001c + 0x6c);
  if (0x3fffffff < in_stack_00000028) {
    uVar2 = in_stack_00000028 >> 0x1e;
    do {
      func_0x00c7b750(in_stack_00000024,in_stack_00000020,0x40000000,in_stack_0000001c + 0x80,
                      in_stack_0000001c + 0x100,in_stack_0000001c + 0x180,in_stack_0000001c + 0x20,
                      &stack0x00000000);
      in_stack_00000028 = in_stack_00000028 + 0xc0000000;
      in_stack_00000024 = in_stack_00000024 + 0x40000000;
      in_stack_00000020 = in_stack_00000020 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_00000028 == 0) {
    *(undefined4 *)(in_stack_0000001c + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c7b750(in_stack_00000024,in_stack_00000020,in_stack_00000028,in_stack_0000001c + 0x80,
                  in_stack_0000001c + 0x100,in_stack_0000001c + 0x180,in_stack_0000001c + 0x20,
                  &stack0x00000000);
  *(undefined4 *)(in_stack_0000001c + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf2110(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  param_1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = param_4;
  iVar3 = param_3;
  iVar4 = param_2;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      func_0x00c7ad90(iVar3,iVar4,0x40000000,iVar1 + 0x80,iVar1 + 0x100,iVar1 + 0x180,iVar1 + 0x20,
                      &param_1,*(uint *)(iVar1 + 0x50) >> 1 & 1);
      uVar2 = uVar2 + 0xc0000000;
      iVar3 = iVar3 + 0x40000000;
      iVar4 = iVar4 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    param_4 = 0;
  }
  if (uVar2 != 0) {
    func_0x00c7ad90(iVar3,iVar4,uVar2,iVar1 + 0x80,iVar1 + 0x100,iVar1 + 0x180,iVar1 + 0x20,&param_1
                    ,*(uint *)(iVar1 + 0x50) >> 1 & 1);
  }
  *(int *)(iVar1 + 0x6c) = param_1;
  return 1;
}



undefined4
FUN_00cf21e0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,uint param_6
            )

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00e87f70();
  uVar3 = param_3;
  uVar4 = param_6 * 8;
  if ((*(byte *)(param_3 + 0x50) & 0x80) != 0) {
    uVar4 = param_6;
  }
  param_6 = 0;
  if (uVar4 != 0) {
    do {
      bVar1 = (byte)param_6 & 7;
      uVar5 = param_6 >> 3;
      param_3 = CONCAT31(param_3._1_3_,
                         -(((byte)(1 << (7 - bVar1 & 0x1f)) & *(byte *)(uVar5 + param_5)) != 0)) &
                0xffffff80;
      func_0x00c7afa0(&param_3,&stack0x00000003,1,1,uVar3 + 0x80,uVar3 + 0x100,uVar3 + 0x180,
                      uVar3 + 0x20,*(uint *)(uVar3 + 0x50) >> 1 & 1);
      bVar2 = (byte)param_6;
      param_6 = param_6 + 1;
      *(byte *)(uVar5 + param_4) =
           0U >> (bVar2 & 7) | ~(byte)(0x80 >> bVar1) & *(byte *)(uVar5 + param_4);
    } while (param_6 < uVar4);
  }
  return 1;
}



undefined4 FUN_00cf22d0(void)

{
  uint uVar1;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  uint in_stack_00000020;
  
  func_0x00e87f70();
  if (0x3fffffff < in_stack_00000020) {
    uVar1 = in_stack_00000020 >> 0x1e;
    do {
      func_0x00c7afa0(in_stack_0000001c,in_stack_00000018,8,0x40000000,in_stack_00000014 + 0x80,
                      in_stack_00000014 + 0x100,in_stack_00000014 + 0x180,in_stack_00000014 + 0x20,
                      *(uint *)(in_stack_00000014 + 0x50) >> 1 & 1);
      in_stack_00000020 = in_stack_00000020 + 0xc0000000;
      in_stack_0000001c = in_stack_0000001c + 0x40000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (in_stack_00000020 != 0) {
    func_0x00c7afa0(in_stack_0000001c,in_stack_00000018,8,in_stack_00000020,in_stack_00000014 + 0x80
                    ,in_stack_00000014 + 0x100,in_stack_00000014 + 0x180,in_stack_00000014 + 0x20,
                    *(uint *)(in_stack_00000014 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf2440(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined2 *)(param_2 + 2);
    do {
      uVar4 = *puVar5;
      puVar1 = (undefined1 *)((int)puVar5 + -1);
      puVar2 = puVar5 + -1;
      uVar3 = (-2 - param_2) + (int)puVar5;
      puVar5 = puVar5 + 2;
      *(uint *)(param_1 + 0x80 + (uVar3 & 0xfffffffc)) =
           CONCAT31(CONCAT21(uVar4,*puVar1),*(undefined1 *)puVar2);
    } while ((uint)((-2 - param_2) + (int)puVar5) < 0x20);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 1;
}



undefined4 FUN_00cf24c0(int param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  
  if ((*(byte *)(param_1 + 0x50) & 4) != 0) {
    puVar5 = (undefined2 *)(param_1 + 2);
    do {
      uVar4 = *puVar5;
      puVar1 = (undefined1 *)((int)puVar5 + -1);
      puVar2 = puVar5 + -1;
      uVar3 = (-2 - param_1) + (int)puVar5;
      puVar5 = puVar5 + 2;
      *(uint *)(param_1 + 0xa0 + (uVar3 & 0xfffffffc)) =
           CONCAT31(CONCAT21(uVar4,*puVar1),*(undefined1 *)puVar2);
    } while ((uint)((-2 - param_1) + (int)puVar5) < 0x10);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 1;
}



undefined4 FUN_00cf2520(void)

{
  int *piVar1;
  void *_Dst;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int in_stack_00000018;
  byte *in_stack_0000001c;
  byte *in_stack_00000020;
  uint in_stack_00000024;
  
  func_0x00e87f70();
  uVar5 = *(uint *)(in_stack_00000018 + 0xf0);
  if (uVar5 != 0) {
    if (in_stack_00000024 != 0) {
      pbVar7 = (byte *)(in_stack_00000018 + 0xb0 + uVar5);
      do {
        if (0x3f < uVar5) break;
        bVar4 = *pbVar7;
        uVar5 = uVar5 + 1;
        pbVar7 = pbVar7 + 1;
        *in_stack_0000001c = bVar4 ^ *in_stack_00000020;
        in_stack_00000020 = in_stack_00000020 + 1;
        in_stack_0000001c = in_stack_0000001c + 1;
        in_stack_00000024 = in_stack_00000024 - 1;
      } while (in_stack_00000024 != 0);
    }
    *(uint *)(in_stack_00000018 + 0xf0) = uVar5;
    if (in_stack_00000024 == 0) {
      return 1;
    }
    if (uVar5 == 0x40) {
      *(undefined4 *)(in_stack_00000018 + 0xf0) = 0;
      piVar1 = (int *)(in_stack_00000018 + 0xa0);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(int *)(in_stack_00000018 + 0xa4) = *(int *)(in_stack_00000018 + 0xa4) + 1;
      }
    }
  }
  uVar5 = in_stack_00000024 & 0x3f;
  in_stack_00000024 = in_stack_00000024 - uVar5;
  if (0x3f < in_stack_00000024) {
    uVar9 = *(uint *)(in_stack_00000018 + 0xa0);
    do {
      uVar6 = in_stack_00000024 >> 6;
      uVar2 = uVar6 + uVar9;
      uVar10 = 0;
      if (uVar6 <= uVar2) {
        uVar10 = uVar2;
      }
      uVar9 = -uVar9;
      if (uVar6 <= uVar2) {
        uVar9 = uVar6;
      }
      iVar8 = uVar9 * 0x40;
      func_0x0041d440(in_stack_0000001c,in_stack_00000020,iVar8,in_stack_00000018 + 0x80,
                      (uint *)(in_stack_00000018 + 0xa0));
      in_stack_00000024 = in_stack_00000024 + uVar9 * -0x40;
      in_stack_00000020 = in_stack_00000020 + iVar8;
      in_stack_0000001c = in_stack_0000001c + iVar8;
      *(uint *)(in_stack_00000018 + 0xa0) = uVar10;
      if (uVar10 == 0) {
        *(int *)(in_stack_00000018 + 0xa4) = *(int *)(in_stack_00000018 + 0xa4) + 1;
      }
      uVar9 = uVar10;
    } while (0x3f < in_stack_00000024);
  }
  if (uVar5 != 0) {
    _Dst = (void *)(in_stack_00000018 + 0xb0);
    memset(_Dst,0,0x40);
    func_0x0041d440(_Dst,_Dst,0x40,in_stack_00000018 + 0x80,in_stack_00000018 + 0xa0);
    uVar9 = 0;
    do {
      pbVar3 = (byte *)(in_stack_00000018 + 0xb0 + uVar9);
      pbVar7 = in_stack_0000001c + uVar9;
      uVar9 = uVar9 + 1;
      *pbVar7 = *pbVar3 ^ pbVar7[(int)in_stack_00000020 - (int)in_stack_0000001c];
    } while (uVar9 < uVar5);
    *(uint *)(in_stack_00000018 + 0xf0) = uVar5;
  }
  return 1;
}



undefined4 FUN_00cf26a0(int param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0xd) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x284) = *param_2;
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)((int)param_2 + 0xc);
  uVar1 = (uint)CONCAT11(*(undefined1 *)((int)param_2 + 0xb),*(undefined1 *)((int)param_2 + 0xc));
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    if (uVar1 < 0x10) {
      return 0;
    }
    uVar1 = uVar1 - 0x10;
    *(char *)(param_1 + 0x290) = (char)uVar1;
    *(char *)(param_1 + 0x28f) = (char)(uVar1 >> 8);
  }
  *(uint *)(param_1 + 0x2b0) = uVar1;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x284) ^ *(uint *)(param_1 + 0x26c);
  *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) & 0xfffffffd;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 0x288) ^ *(uint *)(param_1 + 0x270);
  return 0x10;
}



undefined4 FUN_00cf27a0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0xc) {
    return 0;
  }
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 0x26c) = uVar1;
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x270) = uVar1;
  return 1;
}



void FUN_00cf2840(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
    FUN_00cd4e40();
    return;
  }
  FUN_00cd4e90(param_1 + 0x80,param_2,param_3,0,0,0);
  return;
}



void FUN_00cf28b0(void)

{
  int in_stack_00000018;
  
  func_0x00e87f70();
  *(uint *)(in_stack_00000018 + 0x2a8) = *(uint *)(in_stack_00000018 + 0x2a8) & 0xfffffffc;
  *(undefined4 *)(in_stack_00000018 + 0x298) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x29c) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x2a0) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x2a4) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x2b0) = 0xffffffff;
  if ((*(byte *)(in_stack_00000018 + 0x50) & 2) == 0) {
    FUN_00cd4e90(in_stack_00000018 + 0x80,0,0,&stack0x00000000,0x10,0);
  }
  else {
    FUN_00cd4e40();
  }
  *(undefined4 *)(in_stack_00000018 + 0x268) = *(undefined4 *)(in_stack_00000018 + 0x124);
  *(undefined4 *)(in_stack_00000018 + 0x26c) = *(undefined4 *)(in_stack_00000018 + 0x128);
  *(undefined4 *)(in_stack_00000018 + 0x270) = *(undefined4 *)(in_stack_00000018 + 300);
  *(uint *)(in_stack_00000018 + 0x50) = *(uint *)(in_stack_00000018 + 0x50) | 4;
  FUN_008ab370();
  return;
}



void FUN_00cf2990(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uStack00000004;
  uint in_stack_00000020;
  int in_stack_00000028;
  undefined4 *in_stack_0000002c;
  uint *in_stack_00000030;
  int in_stack_00000034;
  uint in_stack_00000038;
  
  func_0x00e87f70();
  iVar7 = in_stack_00000034;
  puVar6 = in_stack_00000030;
  puVar5 = in_stack_0000002c;
  iVar8 = in_stack_00000028;
  in_stack_00000020 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uStack00000004 = *(uint *)(in_stack_00000028 + 0x2a8);
  uVar9 = *(uint *)(in_stack_00000028 + 0x2b0);
  if ((uStack00000004 & 2) == 0) {
    if ((uVar9 != 0xffffffff) && (in_stack_0000002c != (undefined4 *)0x0)) {
      if (in_stack_00000038 == uVar9 + 0x10) {
        func_0x00cf2d60(in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034,
                        in_stack_00000038);
        FUN_008ab370();
        return;
      }
      FUN_008ab370();
      return;
    }
    puVar13 = (undefined4 *)(in_stack_00000028 + 0x120);
    *puVar13 = 0;
    iVar14 = in_stack_00000028 + 0x130;
    func_0x0041d440(iVar14,&DAT_010b9160,0x40,in_stack_00000028 + 0x100,puVar13);
    func_0x00c81e40(iVar8 + 0x178,iVar14);
    *puVar13 = 1;
    *(uint *)(iVar8 + 0x2a8) = *(uint *)(iVar8 + 0x2a8) | 2;
    uStack00000004 = *(uint *)(iVar8 + 0x2a8);
    *(undefined4 *)(iVar8 + 0x170) = 0;
    *(undefined4 *)(iVar8 + 0x2a0) = 0;
    *(undefined4 *)(iVar8 + 0x2a4) = 0;
    *(undefined4 *)(iVar8 + 0x298) = 0;
    *(undefined4 *)(iVar8 + 0x29c) = 0;
    if (uVar9 != 0xffffffff) {
      func_0x00c81f10(iVar8 + 0x178,iVar8 + 0x284,0xd);
      *(undefined4 *)(iVar8 + 0x298) = 0xd;
      *(uint *)(iVar8 + 0x2a8) = *(uint *)(iVar8 + 0x2a8) | 1;
      uStack00000004 = *(uint *)(iVar8 + 0x2a8);
      *(undefined4 *)(iVar8 + 0x29c) = 0;
    }
  }
  uVar11 = in_stack_00000038;
  if (iVar7 == 0) {
    iVar14 = 0;
    uVar12 = uVar9;
    puVar13 = puVar5;
LAB_00cf2c24:
    if ((*(byte *)(iVar8 + 0x2a8) & 1) != 0) {
      uVar9 = *(uint *)(iVar8 + 0x298) & 0xf;
      if (uVar9 != 0) {
        func_0x00c81f10(iVar8 + 0x178,&DAT_010b9160,0x10 - uVar9);
      }
      *(uint *)(iVar8 + 0x2a8) = *(uint *)(iVar8 + 0x2a8) & 0xfffffffe;
    }
    uVar9 = *(uint *)(iVar8 + 0x2a0) & 0xf;
    if (uVar9 != 0) {
      func_0x00c81f10(iVar8 + 0x178,&DAT_010b9160,0x10 - uVar9);
    }
    func_0x00c81f10(iVar8 + 0x178,iVar8 + 0x298,0x10);
    puVar10 = (undefined1 *)(iVar8 + 0x274);
    if ((*(byte *)(iVar8 + 0x50) & 2) == 0) {
      puVar10 = &stack0x00000010;
    }
    func_0x00c81dc0(iVar8 + 0x178,puVar10);
    *(uint *)(iVar8 + 0x2a8) = *(uint *)(iVar8 + 0x2a8) & 0xfffffffd;
    if ((iVar14 == 0) || (uVar11 == uVar12)) {
      if (((*(byte *)(iVar8 + 0x50) & 2) != 0) ||
         (iVar8 = func_0x00401390(&stack0x00000010,iVar8 + 0x274,*(undefined4 *)(iVar8 + 0x2ac)),
         iVar8 == 0)) goto LAB_00cf2d0e;
    }
    else {
      if ((*(byte *)(iVar8 + 0x50) & 2) != 0) {
        uVar2 = *(undefined4 *)(iVar8 + 0x278);
        uVar3 = *(undefined4 *)(iVar8 + 0x27c);
        uVar4 = *(undefined4 *)(iVar8 + 0x280);
        *puVar13 = *(undefined4 *)(iVar8 + 0x274);
        puVar13[1] = uVar2;
        puVar13[2] = uVar3;
        puVar13[3] = uVar4;
        goto LAB_00cf2d0e;
      }
      iVar8 = func_0x00401390(&stack0x00000010,iVar14,0x10);
      if (iVar8 == 0) {
        uVar11 = uVar11 - 0x10;
        goto LAB_00cf2d0e;
      }
      memset((void *)((int)puVar13 - uVar12),0,uVar12);
    }
  }
  else {
    if (puVar5 == (undefined4 *)0x0) {
      func_0x00c81f10(iVar8 + 0x178,iVar7,in_stack_00000038);
      puVar1 = (uint *)(iVar8 + 0x298);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 + uVar11;
      *(int *)(iVar8 + 0x29c) = *(int *)(iVar8 + 0x29c) + (uint)CARRY4(uVar9,uVar11);
      *(uint *)(iVar8 + 0x2a8) = *(uint *)(iVar8 + 0x2a8) | 1;
      goto LAB_00cf2d0e;
    }
    if ((uStack00000004 & 1) != 0) {
      uVar12 = *(uint *)(iVar8 + 0x298) & 0xf;
      if (uVar12 != 0) {
        func_0x00c81f10(iVar8 + 0x178,&DAT_010b9160,0x10 - uVar12);
      }
      *(uint *)(iVar8 + 0x2a8) = *(uint *)(iVar8 + 0x2a8) & 0xfffffffe;
    }
    *(undefined4 *)(iVar8 + 0x2b0) = 0xffffffff;
    uVar12 = uVar11;
    if ((uVar9 == 0xffffffff) || (uVar12 = uVar9, uVar11 == uVar9 + 0x10)) {
      iVar14 = iVar7 + uVar12;
      puVar13 = (undefined4 *)((int)puVar5 + uVar12);
      if ((*(byte *)(iVar8 + 0x50) & 2) == 0) {
        func_0x00c81f10(iVar8 + 0x178,iVar7,uVar12);
        (**(code **)(*(int *)(iVar8 + 0xf0) + 4))(iVar8 + 0x80,puVar5,iVar7,uVar12);
      }
      else {
        (**(code **)(*(int *)(iVar8 + 0xf0) + 4))(iVar8 + 0x80,puVar5);
        func_0x00c81f10(iVar8 + 0x178,puVar5,uVar12);
      }
      puVar1 = (uint *)(iVar8 + 0x2a0);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 + uVar12;
      *(uint *)(iVar8 + 0x2a4) = *(int *)(iVar8 + 0x2a4) + (uint)CARRY4(uVar9,uVar12);
      if ((iVar14 != 0) && (uVar11 == uVar12)) goto LAB_00cf2d0e;
      goto LAB_00cf2c24;
    }
  }
  uVar11 = 0;
LAB_00cf2d0e:
  *puVar6 = uVar11;
  FUN_008ab370();
  return;
}



undefined4 FUN_00cf3350(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c7df80(param_1 + 0x80,param_3,param_2);
  return 1;
}



undefined4
FUN_00cf3370(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  
  func_0x00e87f70();
  if (0x3fffffff < param_6) {
    uVar1 = param_6 >> 0x1e;
    do {
      func_0x0041ac00(param_5,param_4,0x40000000,param_3 + 0x80,param_3 + 0x20,
                      *(uint *)(param_3 + 0x50) >> 1 & 1);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_6 != 0) {
    func_0x0041ac00(param_5,param_4,param_6,param_3 + 0x80,param_3 + 0x20,
                    *(uint *)(param_3 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf3420(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      func_0x00c7e070(param_3,param_2 + param_3,param_1 + 0x80,*(uint *)(param_1 + 0x50) >> 1 & 1);
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf3490(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  if (0x3fffffff < in_stack_0000001c) {
    uVar2 = in_stack_0000001c >> 0x1e;
    do {
      func_0x00c7e330(in_stack_00000018,in_stack_00000014,0x40000000,in_stack_00000010 + 0x80,
                      in_stack_00000010 + 0x20,&stack0x00000000);
      in_stack_0000001c = in_stack_0000001c + 0xc0000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      in_stack_00000014 = in_stack_00000014 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c7e330(in_stack_00000018,in_stack_00000014,in_stack_0000001c,in_stack_00000010 + 0x80,
                  in_stack_00000010 + 0x20,&stack0x00000000);
  *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf3550(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return 1;
  }
  iVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_4;
  param_1 = uVar1;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar6 < uVar5) break;
    func_0x00c7e130(iVar4,param_2,uVar5,iVar2 + 0x80,iVar2 + 0x20,&param_1,
                    *(uint *)(iVar2 + 0x50) >> 1 & 1);
    param_2 = param_2 + uVar5;
    uVar6 = uVar6 - uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar6 != 0);
  *(int *)(iVar2 + 0x6c) = param_1;
  return 1;
}



void FUN_00cf3620(void)

{
  int in_stack_000000e0;
  undefined4 in_stack_000000e4;
  
  func_0x00e87f70();
  if ((((*(byte *)(in_stack_000000e0 + 0x50) & 2) == 0) && (*(int *)(in_stack_000000e0 + 0x38) != 4)
      ) && (*(int *)(in_stack_000000e0 + 0x38) != 3)) {
    func_0x00c7bfe0(in_stack_000000e4,&stack0x00000000);
    func_0x00c7bf50(&stack0x00000000,in_stack_000000e0 + 0x80);
    func_0x00401320(&stack0x00000000,0xd8);
  }
  else {
    func_0x00c7bfe0(in_stack_000000e4,in_stack_000000e0 + 0x80);
  }
  FUN_008ab370();
  return;
}



undefined4
FUN_00cf36b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  
  func_0x00e87f70();
  if (0x3fffffff < param_6) {
    uVar1 = param_6 >> 0x1e;
    do {
      func_0x00c7c1b0(param_5,param_4,0x40000000,param_3 + 0x80,param_3 + 0x20,
                      *(uint *)(param_3 + 0x50) >> 1 & 1);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_6 != 0) {
    func_0x00c7c1b0(param_5,param_4,param_6,param_3 + 0x80,param_3 + 0x20,
                    *(uint *)(param_3 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf3760(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  if (0x3fffffff < in_stack_0000001c) {
    uVar2 = in_stack_0000001c >> 0x1e;
    do {
      func_0x00c7d0b0(in_stack_00000018,in_stack_00000014,0x40000000,in_stack_00000010 + 0x80,
                      in_stack_00000010 + 0x20,&stack0x00000000);
      in_stack_0000001c = in_stack_0000001c + 0xc0000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      in_stack_00000014 = in_stack_00000014 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c7d0b0(in_stack_00000018,in_stack_00000014,in_stack_0000001c,in_stack_00000010 + 0x80,
                  in_stack_00000010 + 0x20,&stack0x00000000);
  *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf3820(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return 1;
  }
  iVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_4;
  param_1 = uVar1;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar6 < uVar5) break;
    func_0x00c7cea0(iVar4,param_2,uVar5,iVar2 + 0x80,iVar2 + 0x20,&param_1,
                    *(uint *)(iVar2 + 0x50) >> 1 & 1);
    param_2 = param_2 + uVar5;
    uVar6 = uVar6 - uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar6 != 0);
  *(int *)(iVar2 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf38b0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      func_0x00c7bea0(param_3,param_2 + param_3,param_1 + 0x80);
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf3950(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c7e4f0(param_1 + 0x80,param_3,param_2);
  return 1;
}



undefined4
FUN_00cf3970(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  
  func_0x00e87f70();
  if (0x3fffffff < param_6) {
    uVar1 = param_6 >> 0x1e;
    do {
      func_0x00c7f830(param_5,param_4,0x40000000,param_3 + 0x80,param_3 + 0x20,
                      *(uint *)(param_3 + 0x50) >> 1 & 1);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_6 != 0) {
    func_0x00c7f830(param_5,param_4,param_6,param_3 + 0x80,param_3 + 0x20,
                    *(uint *)(param_3 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf3a20(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      func_0x00c7f770(param_3,param_2 + param_3,param_1 + 0x80,*(uint *)(param_1 + 0x50) >> 1 & 1);
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf3a90(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  if (0x3fffffff < in_stack_0000001c) {
    uVar2 = in_stack_0000001c >> 0x1e;
    do {
      func_0x00c80750(in_stack_00000018,in_stack_00000014,0x40000000,in_stack_00000010 + 0x80,
                      in_stack_00000010 + 0x20,&stack0x00000000);
      in_stack_0000001c = in_stack_0000001c + 0xc0000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      in_stack_00000014 = in_stack_00000014 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c80750(in_stack_00000018,in_stack_00000014,in_stack_0000001c,in_stack_00000010 + 0x80,
                  in_stack_00000010 + 0x20,&stack0x00000000);
  *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf3b50(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return 1;
  }
  iVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_4;
  param_1 = uVar1;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar6 < uVar5) break;
    func_0x00c80550(iVar4,param_2,uVar5,iVar2 + 0x80,iVar2 + 0x20,&param_1,
                    *(uint *)(iVar2 + 0x50) >> 1 & 1);
    param_2 = param_2 + uVar5;
    uVar6 = uVar6 - uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar6 != 0);
  *(int *)(iVar2 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf3c20(int param_1,undefined4 param_2)

{
  func_0x00c83aa0(param_2,param_1 + 0x80);
  return 1;
}



undefined4
FUN_00cf3c40(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  
  func_0x00e87f70();
  if (0x3fffffff < param_6) {
    uVar1 = param_6 >> 0x1e;
    do {
      func_0x00c84500(param_5,param_4,0x40000000,param_3 + 0x80,param_3 + 0x20,
                      *(uint *)(param_3 + 0x50) >> 1 & 1);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_6 != 0) {
    func_0x00c84500(param_5,param_4,param_6,param_3 + 0x80,param_3 + 0x20,
                    *(uint *)(param_3 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf3cf0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      func_0x00c844d0(param_3,param_2 + param_3,param_1 + 0x80,*(uint *)(param_1 + 0x50) >> 1 & 1);
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf3d60(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  if (0x3fffffff < in_stack_0000001c) {
    uVar2 = in_stack_0000001c >> 0x1e;
    do {
      func_0x00c84560(in_stack_00000018,in_stack_00000014,0x40000000,in_stack_00000010 + 0x80,
                      in_stack_00000010 + 0x20,&stack0x00000000);
      in_stack_0000001c = in_stack_0000001c + 0xc0000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      in_stack_00000014 = in_stack_00000014 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c84560(in_stack_00000018,in_stack_00000014,in_stack_0000001c,in_stack_00000010 + 0x80,
                  in_stack_00000010 + 0x20,&stack0x00000000);
  *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf3e20(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return 1;
  }
  iVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_4;
  param_1 = uVar1;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar6 < uVar5) break;
    func_0x00c84530(iVar4,param_2,uVar5,iVar2 + 0x80,iVar2 + 0x20,&param_1,
                    *(uint *)(iVar2 + 0x50) >> 1 & 1);
    param_2 = param_2 + uVar5;
    uVar6 = uVar6 - uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar6 != 0);
  *(int *)(iVar2 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf3ef0(int param_1,undefined4 param_2)

{
  func_0x00c7d290(param_1 + 0x80,*(undefined4 *)(param_1 + 0x3c),param_2,
                  *(undefined4 *)(param_1 + 0x180));
  return 1;
}



undefined4
FUN_00cf3f20(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  
  func_0x00e87f70();
  if (0x3fffffff < param_6) {
    uVar1 = param_6 >> 0x1e;
    do {
      func_0x00c7d450(param_5,param_4,0x40000000,param_3 + 0x80,param_3 + 0x20,
                      *(uint *)(param_3 + 0x50) >> 1 & 1);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_6 != 0) {
    func_0x00c7d450(param_5,param_4,param_6,param_3 + 0x80,param_3 + 0x20,
                    *(uint *)(param_3 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf3fd0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      func_0x00c7d390(param_3,param_2 + param_3,param_1 + 0x80,*(uint *)(param_1 + 0x50) >> 1 & 1);
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf4040(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  if (0x3fffffff < in_stack_0000001c) {
    uVar2 = in_stack_0000001c >> 0x1e;
    do {
      func_0x00c7ddb0(in_stack_00000018,in_stack_00000014,0x40000000,in_stack_00000010 + 0x80,
                      in_stack_00000010 + 0x20,&stack0x00000000);
      in_stack_0000001c = in_stack_0000001c + 0xc0000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      in_stack_00000014 = in_stack_00000014 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c7ddb0(in_stack_00000018,in_stack_00000014,in_stack_0000001c,in_stack_00000010 + 0x80,
                  in_stack_00000010 + 0x20,&stack0x00000000);
  *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf4100(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return 1;
  }
  iVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_4;
  param_1 = uVar1;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar6 < uVar5) break;
    func_0x00c7dbb0(iVar4,param_2,uVar5,iVar2 + 0x80,iVar2 + 0x20,&param_1,
                    *(uint *)(iVar2 + 0x50) >> 1 & 1);
    param_2 = param_2 + uVar5;
    uVar6 = uVar6 - uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar6 != 0);
  *(int *)(iVar2 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf41d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  func_0x00c7a5b0(param_2,param_1 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x184) = uVar1;
  return 1;
}



undefined4 FUN_00cf4220(void)

{
  uint uVar1;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  uint in_stack_00000020;
  
  func_0x00e87f70();
  if (0x3fffffff < in_stack_00000020) {
    uVar1 = in_stack_00000020 >> 0x1e;
    do {
      func_0x00c7b930(in_stack_0000001c,in_stack_00000018,0x40000000,in_stack_00000014 + 0x80,
                      in_stack_00000014 + 0x20,in_stack_00000014 + 0x100,in_stack_00000014 + 0x180,
                      *(uint *)(in_stack_00000014 + 0x50) >> 1 & 1);
      in_stack_00000020 = in_stack_00000020 + 0xc0000000;
      in_stack_0000001c = in_stack_0000001c + 0x40000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (in_stack_00000020 != 0) {
    func_0x00c7b930(in_stack_0000001c,in_stack_00000018,in_stack_00000020,in_stack_00000014 + 0x80,
                    in_stack_00000014 + 0x20,in_stack_00000014 + 0x100,in_stack_00000014 + 0x180,
                    *(uint *)(in_stack_00000014 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf4310(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  func_0x00c7a5b0(param_2,param_1 + 0x80);
  return 1;
}



void FUN_00cf4340(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1d] = param_1 + 0x20;
  return;
}



undefined4 FUN_00cf4360(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      func_0x00c7a500(param_3,param_2 + param_3,param_1 + 0x80,*(uint *)(param_1 + 0x50) >> 1 & 1);
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf43d0(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(code **)(param_1 + 0x100) == (code *)0x0) {
    if (0x3fffffff < param_4) {
      param_1 = param_4 >> 0x1e;
      do {
        func_0x004197c0(param_3,param_2,0x40000000,iVar1 + 0x80,iVar1 + 0x20,
                        *(uint *)(iVar1 + 0x50) >> 1 & 1);
        param_4 = param_4 + 0xc0000000;
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (param_4 != 0) {
      func_0x004197c0(param_3,param_2,param_4,iVar1 + 0x80,iVar1 + 0x20,
                      *(uint *)(iVar1 + 0x50) >> 1 & 1);
    }
    return 1;
  }
  (**(code **)(param_1 + 0x100))(param_3,param_2,param_4,param_1 + 0x80,param_1 + 0x20);
  return 1;
}



undefined4 FUN_00cf4490(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  if (0x3fffffff < in_stack_0000001c) {
    uVar2 = in_stack_0000001c >> 0x1e;
    do {
      func_0x00c7aa70(in_stack_00000018,in_stack_00000014,0x40000000,in_stack_00000010 + 0x80,
                      in_stack_00000010 + 0x20,&stack0x00000000);
      in_stack_0000001c = in_stack_0000001c + 0xc0000000;
      in_stack_00000018 = in_stack_00000018 + 0x40000000;
      in_stack_00000014 = in_stack_00000014 + 0x40000000;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
    return 1;
  }
  func_0x00c7aa70(in_stack_00000018,in_stack_00000014,in_stack_0000001c,in_stack_00000010 + 0x80,
                  in_stack_00000010 + 0x20,&stack0x00000000);
  *(undefined4 *)(in_stack_00000010 + 0x6c) = uVar1;
  return 1;
}



undefined4 FUN_00cf4550(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return 1;
  }
  iVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_4;
  param_1 = uVar1;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (uVar6 < uVar5) break;
    func_0x00c7a870(iVar4,param_2,uVar5,iVar2 + 0x80,iVar2 + 0x20,&param_1,
                    *(uint *)(iVar2 + 0x50) >> 1 & 1);
    param_2 = param_2 + uVar5;
    uVar6 = uVar6 - uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar6 != 0);
  *(int *)(iVar2 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf45e0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uStack00000004;
  int in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_00000020;
  
  func_0x00e87f70();
  if (in_stack_00000020 == 0) {
    return 1;
  }
  uVar2 = in_stack_00000020;
  if (0x7ffffff < in_stack_00000020) {
    uVar2 = 0x8000000;
  }
  do {
    if (in_stack_00000020 < uVar2) {
      return 1;
    }
    uStack00000004 = 0;
    if (uVar2 * 8 != 0) {
      do {
        bVar1 = (byte)uStack00000004;
        uVar3 = uStack00000004 >> 3;
        func_0x00c79f00(&stack0x00000003,&stack0x00000002,1,1,in_stack_00000014 + 0x80,
                        in_stack_00000014 + 0x20,*(uint *)(in_stack_00000014 + 0x50) >> 1 & 1);
        uStack00000004 = uStack00000004 + 1;
        *(byte *)(uVar3 + in_stack_00000018) =
             0U >> (bVar1 & 7) | ~(byte)(0x80 >> (bVar1 & 7)) & *(byte *)(uVar3 + in_stack_00000018)
        ;
      } while (uStack00000004 < uVar2 * 8);
    }
    in_stack_00000020 = in_stack_00000020 - uVar2;
    in_stack_00000018 = in_stack_00000018 + uVar2;
    uVar3 = in_stack_00000020;
    if (uVar2 <= in_stack_00000020) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3;
  } while (in_stack_00000020 != 0);
  return 1;
}



undefined4
FUN_00cf4720(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  
  func_0x00e87f70();
  if (0x3fffffff < param_6) {
    uVar1 = param_6 >> 0x1e;
    do {
      func_0x00c79f00(param_5,param_4,8,0x40000000,param_3 + 0x80,param_3 + 0x20,
                      *(uint *)(param_3 + 0x50) >> 1 & 1);
      param_6 = param_6 + 0xc0000000;
      param_5 = param_5 + 0x40000000;
      param_4 = param_4 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_6 != 0) {
    func_0x00c79f00(param_5,param_4,8,param_6,param_3 + 0x80,param_3 + 0x20,
                    *(uint *)(param_3 + 0x50) >> 1 & 1);
  }
  return 1;
}



undefined4 FUN_00cf4840(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x004171a0(param_1 + 0x80,param_3,param_2);
  return 1;
}



undefined4 FUN_00cf4860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00416e80(param_1 + 0x80,param_4,param_3,param_2);
  return 1;
}



undefined4 FUN_00cf48a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  func_0x004171a0(param_1 + 0x80,param_3,param_2);
  puVar3 = (undefined4 *)(param_1 + 0x488);
  func_0x00bb4130(puVar3);
  *(undefined4 *)(param_1 + 0x59c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0x10;
  puVar2 = puVar3;
  puVar4 = (undefined4 *)(param_1 + 0x4e4);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x540);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  return 1;
}



void FUN_00cf4910(void)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *_Src;
  undefined4 *puVar6;
  uint in_stack_00000018;
  int in_stack_00000020;
  void *in_stack_00000024;
  void *in_stack_00000028;
  size_t in_stack_0000002c;
  
  func_0x00e87f70();
  _Src = in_stack_00000028;
  _Dst = in_stack_00000024;
  iVar1 = in_stack_00000020;
  in_stack_00000018 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  _Size = *(size_t *)(in_stack_00000020 + 0x59c);
  if ((_Size != 0xffffffff) && (in_stack_0000002c != _Size + 0x10)) {
LAB_00cf4a72:
    FUN_008ab370();
    return;
  }
  if ((*(byte *)(in_stack_00000020 + 0x50) & 2) == 0) {
    func_0x00416e80(in_stack_00000020 + 0x80,in_stack_0000002c,in_stack_00000028,in_stack_00000024);
    puVar6 = (undefined4 *)(iVar1 + 0x540);
    if (_Size == 0xffffffff) {
      FUN_00bb4190(puVar6,_Dst,in_stack_0000002c);
    }
    else {
      FUN_00bb4190(puVar6,_Dst,_Size);
      func_0x00bb4010(&stack0x00000008,puVar6);
      puVar4 = (undefined4 *)(iVar1 + 0x4e4);
      for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00bb4190(iVar1 + 0x540,&stack0x00000008,0x10);
      func_0x00bb4010(&stack0x00000008,iVar1 + 0x540);
      iVar3 = func_0x00401390(_Size + (int)_Dst,&stack0x00000008,0x10);
      if (iVar3 != 0) goto LAB_00cf4a72;
    }
  }
  else {
    puVar6 = (undefined4 *)(in_stack_00000020 + 0x540);
    if (_Size == 0xffffffff) {
      FUN_00bb4190(puVar6,in_stack_00000028,in_stack_0000002c);
    }
    else {
      FUN_00bb4190(puVar6,in_stack_00000028,_Size);
      if (_Size != in_stack_0000002c) {
        if (_Src != _Dst) {
          memcpy(_Dst,_Src,_Size);
        }
        iVar3 = _Size + (int)_Dst;
        func_0x00bb4010(iVar3,puVar6);
        puVar4 = (undefined4 *)(iVar1 + 0x4e4);
        puVar5 = puVar6;
        for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00bb4190(puVar6,iVar3,0x10);
        func_0x00bb4010(iVar3,puVar6);
        _Src = _Dst;
      }
    }
    func_0x00416e80(iVar1 + 0x80,in_stack_0000002c,_Src,_Dst);
  }
  *(undefined4 *)(iVar1 + 0x59c) = 0xffffffff;
  FUN_008ab370();
  return;
}



undefined4 FUN_00cf4ac0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0xd) {
    return 0;
  }
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0xb),*(undefined1 *)(param_2 + 0xc));
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    if (uVar1 < 0x10) {
      return 0;
    }
    uVar1 = uVar1 - 0x10;
    *(char *)(param_2 + 0xc) = (char)uVar1;
    *(char *)(param_2 + 0xb) = (char)(uVar1 >> 8);
  }
  *(uint *)(param_1 + 0x59c) = uVar1;
  puVar3 = (undefined4 *)(param_1 + 0x488);
  puVar4 = (undefined4 *)(param_1 + 0x540);
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00bb4190((undefined4 *)(param_1 + 0x540),param_2,0xd);
  return 0x10;
}



void FUN_00cf4b30(void)

{
  int iVar1;
  int in_stack_00000048;
  void *in_stack_0000004c;
  uint in_stack_00000050;
  
  func_0x00e87f70();
  memset(&stack0x00000000,0,0x40);
  iVar1 = in_stack_00000048 + 0x488;
  if (in_stack_00000050 < 0x41) {
    memcpy(&stack0x00000000,in_stack_0000004c,in_stack_00000050);
  }
  else {
    func_0x00bb4130(iVar1);
    FUN_00bb4190(iVar1,in_stack_0000004c,in_stack_00000050);
    func_0x00bb4010(&stack0x00000000,iVar1);
  }
  func_0x00bb4130(iVar1);
  FUN_00bb4190(iVar1,&stack0x00000000,0x40);
  func_0x00bb4130(in_stack_00000048 + 0x4e4);
  FUN_00bb4190(in_stack_00000048 + 0x4e4,&stack0x00000000,0x40);
  func_0x00401320(&stack0x00000000,0x40);
  FUN_008ab370();
  return;
}



void FUN_00cf6c20(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 8),"crypto\\ct\\ct_log.c",0x127);
    func_0x00bd5d50(*(undefined4 *)(param_1 + 0x2c));
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\ct\\ct_log.c",0x129);
    FUN_00bbc580(param_1,"crypto\\ct\\ct_log.c",0x12a);
  }
  return;
}



undefined4 FUN_00cf8180(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    param_2 = (undefined4 *)*param_2;
    uVar1 = func_0x00bc2660(0x4f);
    *param_2 = uVar1;
  }
  return 1;
}



undefined4 FUN_00cf81b0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        if ((*(uint *)(param_1 + 0x50) & 2) == 0) {
          func_0x00bcc480(param_3,param_2,0x40000000,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,
                          *(undefined4 *)(param_1 + 0x30));
        }
        else {
          func_0x00bcc780();
        }
      }
      else {
        (**(code **)(param_1 + 0x34))
                  (param_3,param_2,0x40000000,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,
                   *(uint *)(param_1 + 0x50) >> 1 & 1);
      }
      uVar1 = uVar1 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar1 != 0) {
    FUN_00cf8410(param_1,param_2,param_3,uVar1);
  }
  return 1;
}



undefined4 FUN_00cf8260(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = param_4;
  uVar3 = param_4;
  if (0x3fffffff < param_4) {
    uVar3 = 0x40000000;
  }
  do {
    if (uVar2 < uVar3) {
      return 1;
    }
    param_4 = *(undefined4 *)(param_1 + 0x6c);
    func_0x00bcce30(param_3,param_2,uVar2,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,&param_4,
                    *(uint *)(param_1 + 0x50) >> 1 & 1,*(undefined4 *)(param_1 + 0x30));
    param_2 = param_2 + uVar3;
    uVar2 = uVar2 - uVar3;
    param_3 = param_3 + uVar3;
    *(uint *)(param_1 + 0x6c) = param_4;
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
  } while (uVar2 != 0);
  return 1;
}



undefined4 FUN_00cf82e0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = param_4;
  uVar3 = param_4;
  if (0x3fffffff < param_4) {
    uVar3 = 0x40000000;
  }
  do {
    if (uVar2 < uVar3) {
      return 1;
    }
    param_4 = *(undefined4 *)(param_1 + 0x6c);
    func_0x00bccde0(param_3,param_2,uVar2,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,&param_4,
                    *(uint *)(param_1 + 0x50) >> 1 & 1,*(undefined4 *)(param_1 + 0x30));
    param_2 = param_2 + uVar3;
    uVar2 = uVar2 - uVar3;
    param_3 = param_3 + uVar3;
    *(uint *)(param_1 + 0x6c) = param_4;
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
  } while (uVar2 != 0);
  return 1;
}



undefined4 FUN_00cf8360(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  func_0x00e87f70();
  uVar2 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = *(undefined4 *)(param_2 + 0x6c);
      func_0x00bccc10(param_4,param_3,0x40000000,*(undefined4 *)(param_2 + 0x74),param_2 + 0x20,
                      &param_5,*(undefined4 *)(param_2 + 0x30));
      *(uint *)(param_2 + 0x6c) = param_5;
      uVar2 = uVar2 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar2 != 0) {
    param_5 = *(undefined4 *)(param_2 + 0x6c);
    func_0x00bccc10(param_4,param_3,uVar2,*(undefined4 *)(param_2 + 0x74),param_2 + 0x20,&param_5,
                    *(undefined4 *)(param_2 + 0x30));
    *(uint *)(param_2 + 0x6c) = param_5;
  }
  return 1;
}



undefined4 FUN_00cf8410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))
              (param_3,param_2,param_4,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,
               *(uint *)(param_1 + 0x50) >> 1 & 1);
    return 1;
  }
  if ((*(uint *)(param_1 + 0x50) & 2) != 0) {
    func_0x00bcc780();
    return 1;
  }
  func_0x00bcc480(param_3,param_2,param_4,*(undefined4 *)(param_1 + 0x74),param_1 + 0x20,
                  *(undefined4 *)(param_1 + 0x30));
  return 1;
}



undefined4 FUN_00cf8480(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  func_0x00e87f70();
  iVar5 = param_2;
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  iVar7 = param_2 + 0x20;
  puVar1 = (uint *)(param_2 + 0x50);
  if (-1 < (char)*puVar1) {
    iVar7 = param_4;
    iVar8 = param_3;
    uVar9 = param_5;
    param_2 = uVar4;
    if (0xfffffff < param_5) {
      uVar6 = param_5 >> 0x1c;
      do {
        func_0x00bccd40(iVar7,iVar8,0x80000000,*(undefined4 *)(iVar5 + 0x74),iVar5 + 0x20,&param_2,
                        *(uint *)(iVar5 + 0x50) >> 1 & 1,*(undefined4 *)(iVar5 + 0x30));
        uVar9 = uVar9 + 0xf0000000;
        iVar8 = iVar8 + 0x10000000;
        iVar7 = iVar7 + 0x10000000;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (uVar9 != 0) {
      func_0x00bccd40(iVar7,iVar8,uVar9 * 8,*(undefined4 *)(iVar5 + 0x74),iVar5 + 0x20,&param_2,
                      *(uint *)(iVar5 + 0x50) >> 1 & 1,*(undefined4 *)(iVar5 + 0x30));
    }
    *(int *)(iVar5 + 0x6c) = param_2;
    return 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x30);
  puVar3 = (undefined4 *)(param_2 + 0x74);
  param_2 = uVar4;
  func_0x00bccd40(param_4,param_3,param_5,*puVar3,iVar7,&param_2,*puVar1 >> 1 & 1,*puVar2);
  *(int *)(iVar5 + 0x6c) = param_2;
  return 1;
}



undefined4 FUN_00cf8580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x50);
  iVar3 = param_1 + 0x20;
  puVar4 = (undefined4 *)(param_1 + 0x74);
  param_1 = *(undefined4 *)(param_1 + 0x6c);
  func_0x00bcce30(param_3,param_2,param_4,*puVar4,iVar3,&param_1,*puVar2 >> 1 & 1,*puVar1);
  *(int *)(iVar5 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf85d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x50);
  iVar3 = param_1 + 0x20;
  puVar4 = (undefined4 *)(param_1 + 0x74);
  param_1 = *(undefined4 *)(param_1 + 0x6c);
  func_0x00bccde0(param_3,param_2,param_4,*puVar4,iVar3,&param_1,*puVar2 >> 1 & 1,*puVar1);
  *(int *)(iVar5 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf8620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = param_1;
  iVar1 = param_1 + 0x10;
  iVar2 = param_1 + 0x20;
  piVar3 = (int *)(param_1 + 0x34);
  if (*piVar3 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x74);
    param_1 = *(undefined4 *)(param_1 + 0x6c);
    func_0x00bcca60(param_3,param_2,param_4,*puVar4,iVar2,iVar1,&param_1,*piVar3);
    *(int *)(iVar6 + 0x6c) = param_1;
    return 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x30);
  puVar5 = (undefined4 *)(param_1 + 0x74);
  param_1 = *(undefined4 *)(param_1 + 0x6c);
  func_0x00bcc940(param_3,param_2,param_4,*puVar5,iVar2,iVar1,&param_1,*puVar4);
  *(int *)(iVar6 + 0x6c) = param_1;
  return 1;
}



undefined4 FUN_00cf86a0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 <= param_4) {
    if (*(code **)(param_1 + 0x34) != (code *)0x0) {
      (**(code **)(param_1 + 0x34))
                (param_3,param_2,param_4,*(undefined4 *)(param_1 + 0x74),
                 *(uint *)(param_1 + 0x50) >> 1 & 1);
      return 1;
    }
    uVar2 = 0;
    param_2 = param_2 - param_3;
    do {
      (**(code **)(param_1 + 0x30))(param_3,param_2 + param_3,*(undefined4 *)(param_1 + 0x74));
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00cf8720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x30);
  iVar2 = param_1 + 0x20;
  puVar3 = (undefined4 *)(param_1 + 0x74);
  param_1 = *(undefined4 *)(param_1 + 0x6c);
  func_0x00bccc10(param_3,param_2,param_4,*puVar3,iVar2,&param_1,*puVar1);
  *(int *)(iVar4 + 0x6c) = param_1;
  return 1;
}



bool FUN_00cfeb70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00bcd4a0(param_1 + 0xd0,param_2,param_3);
  return iVar1 == 0;
}



bool FUN_00cfeb90(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    func_0x00bce740(param_1 + 0xd0,param_2,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0x10;
    return true;
  }
  iVar1 = func_0x00bce3a0(param_1 + 0xd0,param_2,*(undefined4 *)(param_1 + 0xc));
  return iVar1 == 0;
}



bool FUN_00cfebe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    iVar1 = func_0x00bcd5a0(param_1 + 0xd0,param_2,param_4,param_3);
    return iVar1 == 0;
  }
  iVar1 = func_0x00bcdcc0();
  if (iVar1 == 0) {
    return true;
  }
  return false;
}



undefined4
FUN_00cfec20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xcc) + 8))(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xcc) + 0xc))(param_1,param_4,param_5,param_6);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x10;
      iVar1 = (**(code **)(*(int *)(param_1 + 0xcc) + 0x10))(param_1,param_7);
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



undefined4 FUN_00cfec90(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00bce560(param_1 + 0xd0,param_2,param_3);
  return 1;
}



void FUN_00cfecb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint in_stack_00000014;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  func_0x00e87f70();
  uVar3 = in_stack_0000002c;
  uVar2 = in_stack_00000028;
  uVar1 = in_stack_00000024;
  in_stack_00000014 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar5 = in_stack_0000001c + 0x38;
  if (*(int *)(in_stack_0000001c + 0x68) == 0) {
    iVar4 = func_0x00bcee40(iVar5,in_stack_00000020,in_stack_00000024,in_stack_00000028);
  }
  else {
    iVar4 = func_0x00bcf050(iVar5,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                            *(int *)(in_stack_0000001c + 0x68));
  }
  if (((iVar4 != 0) ||
      (iVar5 = func_0x00bcf970(iVar5,&stack0x00000004,in_stack_00000030), iVar5 == 0)) ||
     (iVar5 = func_0x00401390(&stack0x00000004,uVar3,in_stack_00000030), iVar5 != 0)) {
    func_0x00401320(uVar1,uVar2);
  }
  FUN_008ab370();
  return;
}



bool FUN_00cfed60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1 + 0x38;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = func_0x00bcf200(iVar2,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x00bcf570(iVar2,param_2,param_3,param_4,*(int *)(param_1 + 0x68));
  }
  bVar3 = iVar1 == 0;
  if ((bVar3) && (param_5 != 0)) {
    iVar2 = func_0x00bcf970(iVar2,param_5,param_6);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



bool FUN_00cfedd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00bcf970(param_1 + 0x38,param_2,param_3);
  return iVar1 != 0;
}



undefined4 FUN_00cfee00(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00bced50(param_1 + 0x38,param_2,param_3);
  return 1;
}



bool FUN_00cfee20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bcf900(param_1 + 0x38,param_2,param_3,param_4);
  return iVar1 == 0;
}



undefined * FUN_00cfee50(void)

{
  return &DAT_010b9f2c;
}



undefined * FUN_00cfee60(void)

{
  return &DAT_010ba108;
}



undefined * FUN_00cfee70(void)

{
  return &DAT_010b9fec;
}



undefined * FUN_00cfee80(void)

{
  return &DAT_010b9fa8;
}



undefined * FUN_00cfee90(void)

{
  return &DAT_010ba0b0;
}



void FUN_00cfeec0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_010ba108);
  return;
}



undefined4 FUN_00cfef40(void)

{
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\ssl_lib.c",0x12c5,"ssl_undefined_function");
  func_0x00bc5160(0x14,0xc0101,0);
  return 0;
}



void FUN_00d01e60(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)0x0;
    if (*param_1 == 0) {
      piVar2 = param_1;
    }
    if (piVar2 != (int *)0x0) {
      func_0x00bd9c70(piVar2[0xdc]);
      func_0x00d01590(piVar2 + 0xdd);
      if (piVar2[0xb] != 0) {
        iVar1 = func_0x00baafb0(piVar2[10]);
        piVar2[10] = iVar1;
        (**(code **)(piVar2[0x248] + 0x2c))(piVar2[0x24a],iVar1);
        func_0x00baa8e0(piVar2[0xb]);
        piVar2[0xb] = 0;
      }
      func_0x00d0b960(piVar2 + 0x244);
      func_0x00c1e8a0(piVar2[0x28]);
      FUN_00bd1630(piVar2[0xe7]);
      FUN_00bd1630(piVar2[0xe8]);
      FUN_00bd1630(piVar2[0xe9]);
      FUN_00bd1630(piVar2[0xe6]);
      if (piVar2[0x1c7] != 0) {
        func_0x00d08660(piVar2);
        FUN_00d07ed0(piVar2[0x1c7]);
      }
      FUN_00d07ed0(piVar2[0x1c8]);
      FUN_00bbc580(piVar2[0x1c9],"ssl\\ssl_lib.c",0x597);
      func_0x00d05500(piVar2[0x1ab]);
      FUN_00bbc580(piVar2[0x3ac],"ssl\\ssl_lib.c",0x59a);
      FUN_00bbc580(piVar2[0x1f7],"ssl\\ssl_lib.c",0x59d);
      func_0x00cff320(piVar2[0x228]);
      FUN_00bbc580(piVar2[0x203],"ssl\\ssl_lib.c",0x59f);
      FUN_00bbc580(piVar2[0x205],"ssl\\ssl_lib.c",0x5a0);
      FUN_00bbc580(piVar2[0x207],"ssl\\ssl_lib.c",0x5a1);
      FUN_00bbc580(piVar2[0x209],"ssl\\ssl_lib.c",0x5a2);
      func_0x00bd1860(piVar2[0x1fd],FUN_00c22910);
      func_0x00bd1860(piVar2[0x1fc],FUN_00ce1a30);
      FUN_00ce1ba0(piVar2[0x226]);
      FUN_00bbc580(piVar2[0x1f9],"ssl\\ssl_lib.c",0x5a9);
      FUN_00bbc580(piVar2[0x1fe],"ssl\\ssl_lib.c",0x5ab);
      FUN_00bbc580(piVar2[0x20f],"ssl\\ssl_lib.c",0x5ac);
      FUN_00bbc580(piVar2[0x217],"ssl\\ssl_lib.c",0x5ad);
      if (piVar2[0x222] != 0) {
        FUN_00bbc580(*(undefined4 *)(piVar2[0x222] + 0x268),"ssl\\ssl_lib.c",0x5af);
      }
      FUN_00bbc580(piVar2[0x222],"ssl\\ssl_lib.c",0x5b0);
      FUN_00bbc580(piVar2[0x22f],"ssl\\ssl_lib.c",0x5b1);
      func_0x00bd45b0(piVar2[0x232]);
      func_0x00bd1860(piVar2[0x1e0],FUN_00bdc650);
      func_0x00bd1860(piVar2[0x1e1],FUN_00bdc650);
      FUN_00bbc580(piVar2[0x3ae],"ssl\\ssl_lib.c",0x5b7);
      FUN_00bbc580(piVar2[0x3b0],"ssl\\ssl_lib.c",0x5b8);
      func_0x00bdf360(piVar2[0x1de]);
      if (param_1[3] != 0) {
        (**(code **)(param_1[3] + 0x24))(param_1);
      }
      func_0x00c402c0(piVar2[0x39f]);
      FUN_00bbc580(piVar2[0x211],"ssl\\ssl_lib.c",0x5c2);
      FUN_00bd1630(piVar2[0x229]);
      func_0x00baa980(piVar2[10]);
      piVar2[10] = 0;
      func_0x00baa980(piVar2[9]);
      piVar2[9] = 0;
      FUN_00bbc580(piVar2[0xa8],"ssl\\ssl_lib.c",0x5d3);
    }
  }
  return;
}



void FUN_00d021a0(int param_1)

{
  func_0x00d021c0(param_1,*(undefined4 *)(param_1 + 4));
  return;
}



bool FUN_00d028f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (int *)0x0) &&
     ((piVar2 = param_1, *param_1 == 0 ||
      ((*param_1 == 1 && (piVar2 = (int *)param_1[8], (int *)param_1[8] != (int *)0x0)))))) {
    iVar1 = func_0x00d08660(piVar2);
    if (iVar1 != 0) {
      FUN_00d07ed0(piVar2[0x1c7]);
      piVar2[0x1c7] = 0;
    }
    FUN_00d07ed0(piVar2[0x1c8]);
    piVar2[0x1c8] = 0;
    FUN_00bbc580(piVar2[0x1c9],"ssl\\ssl_lib.c",0x24d);
    piVar2[0x1c9] = 0;
    piVar2[0x1ca] = 0;
    piVar2[0x1bd] = 0;
    piVar2[0x3a5] = 0;
    piVar2[0x1d8] = 0;
    piVar2[0xdb] = 0;
    piVar2[0x11] = 0;
    if (piVar2[0x22b] == 0) {
      func_0x00d06cb0(piVar2);
      iVar1 = *(int *)param_1[3];
      piVar2[8] = iVar1;
      piVar2[0x1e9] = iVar1;
      piVar2[0xc] = 1;
      func_0x00c1e8a0(piVar2[0x28]);
      piVar2[0x28] = 0;
      piVar2[0x1e8] = 0;
      piVar2[0x22c] = -1;
      piVar2[0x21c] = 0;
      piVar2[0x21d] = 0;
      piVar2[0x21e] = 0;
      piVar2[0x21f] = 0;
      piVar2[0x220] = 0;
      func_0x00bd45b0(piVar2[0x232]);
      piVar2[0x232] = 0;
      piVar2[0xe3] = -1;
      piVar2[0xe4] = -1;
      FUN_00bde1d0(piVar2[0xe1]);
      piVar2[0xe1] = 0;
      piVar2[0xe0] = 0;
      func_0x00bda060(piVar2[0xdc],0);
      FUN_00bbc580(piVar2[0x3ac],"ssl\\ssl_lib.c",0x279);
      piVar2[0x3ac] = 0;
      piVar2[0x3ad] = 0;
      iVar1 = param_1[3];
      if (iVar1 == param_1[2]) {
        iVar1 = (**(code **)(iVar1 + 0x20))(param_1);
      }
      else {
        (**(code **)(iVar1 + 0x24))();
        param_1[3] = param_1[2];
        iVar1 = (**(code **)(param_1[2] + 0x1c))(param_1);
      }
      if (iVar1 != 0) {
        iVar1 = func_0x00d0bac0(piVar2 + 0x244);
        return iVar1 != 0;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\ssl_lib.c",600,"ossl_ssl_connection_reset");
      func_0x00bc5160(0x14,0xc0103,0);
    }
  }
  return false;
}



undefined4 FUN_00d02e00(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((param_1 != (int *)0x0) &&
     ((piVar2 = param_1, *param_1 == 0 ||
      ((*param_1 == 1 && (piVar2 = (int *)param_1[8], (int *)param_1[8] != (int *)0x0)))))) {
    uVar1 = (*(code *)piVar2[0x3aa])(param_1,piVar2[0x3ab]);
    return uVar1;
  }
  return 0;
}



int FUN_00d03190(int param_1,int param_2)

{
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  return -(uint)(*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc));
}



int FUN_00d031b0(int *param_1,int *param_2)

{
  if (*(uint *)(*param_2 + 0xc) < *(uint *)(*param_1 + 0xc)) {
    return 1;
  }
  return -(uint)(*(uint *)(*param_1 + 0xc) < *(uint *)(*param_2 + 0xc));
}



undefined4 FUN_00d031d0(int *param_1)

{
  undefined4 uVar1;
  
  param_1 = (int *)*param_1;
  if ((param_1 != (int *)0x0) &&
     ((*param_1 == 0 || ((*param_1 == 1 && (param_1 = (int *)param_1[8], param_1 != (int *)0x0))))))
  {
                    // WARNING: Could not recover jumptable at 0x00d031f7. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*(code *)param_1[0xd])();
    return uVar1;
  }
  return 0xffffffff;
}



undefined4 FUN_00d036e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) &&
     ((piVar4 = piVar1, *piVar1 == 0 ||
      ((*piVar1 == 1 && (piVar4 = (int *)piVar1[8], (int *)piVar1[8] != (int *)0x0)))))) {
    iVar2 = param_1[3];
    if ((iVar2 == 0) || (iVar2 == 1)) {
      uVar3 = (*(code *)param_1[4])(piVar1,param_1[1],param_1[2],piVar4 + 0x3a0);
      return uVar3;
    }
    if (iVar2 == 2) {
                    // WARNING: Could not recover jumptable at 0x00d0371b. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*(code *)param_1[4])();
      return uVar3;
    }
  }
  return 0xffffffff;
}



uint FUN_00d03920(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  if ((*param_1 != *param_2) || (param_1[0x92] != param_2[0x92])) {
    return 1;
  }
  pbVar4 = (byte *)(param_2 + 0x93);
  pbVar3 = (byte *)(param_1 + 0x93);
  uVar2 = param_1[0x92];
  while (uVar1 = uVar2 - 4, 3 < uVar2) {
    if (*(int *)pbVar3 != *(int *)pbVar4) goto LAB_00d03966;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
    uVar2 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_00d03966:
    bVar5 = *pbVar3 < *pbVar4;
    if ((*pbVar3 != *pbVar4) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar5 = pbVar3[1] < pbVar4[1], pbVar3[1] != pbVar4[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar5 = pbVar3[2] < pbVar4[2], pbVar3[2] != pbVar4[2] ||
           ((uVar1 != 0xffffffff && (bVar5 = pbVar3[3] < pbVar4[3], pbVar3[3] != pbVar4[3]))))))))))
       )) {
      return -(uint)bVar5 | 1;
    }
  }
  return 0;
}



undefined4 FUN_00d039b0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  func_0x00e87f70();
  puVar1 = (undefined4 *)(param_2 + 0x24c);
  if (*(uint *)(param_2 + 0x248) < 4) {
    memcpy(&stack0x00000000,(undefined4 *)(param_2 + 0x24c),*(uint *)(param_2 + 0x248));
    puVar1 = (undefined4 *)register0x00000010;
  }
  return *puVar1;
}



undefined4 FUN_00d03e50(void)

{
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\ssl_lib.c",0x12cb,"ssl_undefined_void_function");
  func_0x00bc5160(0x14,0xc0101,0);
  return 0;
}



void FUN_00d043f0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"ssl\\ssl_lib.c",0x9f);
    func_0x00bd5d50(*(undefined4 *)(param_1 + 0xc));
    FUN_00bbc580(param_1,"ssl\\ssl_lib.c",0xa1);
  }
  return;
}



undefined * FUN_00d04470(void)

{
  return &DAT_010bb1b0;
}



undefined * FUN_00d04480(void)

{
  return &DAT_010bb238;
}



undefined * FUN_00d04490(void)

{
  return &DAT_010bb018;
}



undefined * FUN_00d044a0(void)

{
  return &DAT_010bb128;
}



undefined * FUN_00d044b0(void)

{
  return &DAT_010baf90;
}



undefined * FUN_00d044c0(void)

{
  return &DAT_010bace8;
}



undefined * FUN_00d044d0(void)

{
  return &DAT_010baa40;
}



undefined * FUN_00d044e0(void)

{
  return &DAT_010bac60;
}



undefined * FUN_00d044f0(void)

{
  return &DAT_010ba9b8;
}



undefined * FUN_00d04500(void)

{
  return &DAT_010babd8;
}



undefined * FUN_00d04510(void)

{
  return &DAT_010ba930;
}



undefined * FUN_00d04520(void)

{
  return &DAT_010bad70;
}



undefined * FUN_00d04530(void)

{
  return &DAT_010baac8;
}



void FUN_00d05b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*(int *)(param_1 + 0x6ac) + 0x4c))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined4 *)(*(int *)(param_1 + 0x6ac) + 0x54));
  return;
}



bool FUN_00d05b70(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    uVar1 = func_0x00d00800(param_1);
  }
  else {
    uVar1 = func_0x00cff7e0(param_2);
  }
  if ((int)uVar1 < 6) {
    if (((int)uVar1 < 0) || (iVar2 = (&DAT_010bb390)[uVar1], uVar1 == 0)) {
      if (param_3 != 0x40007) {
        return true;
      }
      if (0x4f < param_4) {
        return true;
      }
      return false;
    }
  }
  else {
    iVar2 = 0x100;
    uVar1 = 5;
  }
  if (param_3 < 0x10002) {
    if (param_3 != 0x10001) {
      if (param_3 == 9) {
        if (param_1 == (int *)0x0) {
          return false;
        }
        if (*param_1 != 0) {
          if (*param_1 != 1) {
            return false;
          }
          param_1 = (int *)param_1[8];
          if (param_1 == (int *)0x0) {
            return false;
          }
        }
        if ((*(byte *)(*(int *)(param_1[3] + 0x74) + 0x28) & 8) != 0) {
          if (param_5 == 0x100) {
            param_5 = 0xff00;
          }
          if (param_5 < 0xfefe) {
            return true;
          }
          if (uVar1 != 0) {
            return false;
          }
          return true;
        }
        if (0x302 < param_5) {
          return true;
        }
        if (uVar1 != 0) {
          return false;
        }
        return true;
      }
      if (param_3 == 10) {
        bVar3 = uVar1 < 3;
      }
      else {
        if (param_3 != 0xf) goto LAB_00d05c6c;
        bVar3 = uVar1 < 2;
      }
      if (bVar3) {
        return true;
      }
      return false;
    }
  }
  else if ((param_3 != 0x10002) && (param_3 != 0x10003)) {
LAB_00d05c6c:
    if (param_4 < iVar2) {
      return false;
    }
    return true;
  }
  if ((((iVar2 <= param_4) && ((*(byte *)(param_6 + 0x14) & 4) == 0)) &&
      ((*(byte *)(param_6 + 0x1c) & 1) == 0)) &&
     ((iVar2 < 0xa1 || ((*(byte *)(param_6 + 0x1c) & 2) == 0)))) {
    if ((2 < uVar1) && (*(int *)(param_6 + 0x20) != 0x304)) {
      return (*(uint *)(param_6 + 0x10) & 0x186) != 0;
    }
    return true;
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00d05ff0(void)

{
  DAT_012b7724 = func_0x00bca460(5,0,"SSL for verify callback",0,0,0);
  _DAT_013e00f0 = ~DAT_012b7724 >> 0x1f;
  return;
}



uint FUN_00d06020(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  func_0x00e87f70();
  param_1 = (byte *)0x0;
  uVar1 = func_0x00bdc820(param_3,&stack0x00000000);
  uVar2 = func_0x00bdc820(param_4,&param_1);
  if (((int)uVar1 < 0) || ((int)uVar2 < 0)) {
    uVar1 = 0xfffffffe;
  }
  else if (uVar1 == uVar2) {
    pbVar3 = (byte *)0x0;
    pbVar4 = param_1;
    while (uVar2 = uVar1 - 4, 3 < uVar1) {
      if (*(int *)pbVar3 != *(int *)pbVar4) goto LAB_00d06096;
      pbVar3 = pbVar3 + 4;
      pbVar4 = pbVar4 + 4;
      uVar1 = uVar2;
    }
    if (uVar2 != 0xfffffffc) {
LAB_00d06096:
      bVar5 = *pbVar3 < *pbVar4;
      if ((*pbVar3 != *pbVar4) ||
         ((uVar2 != 0xfffffffd &&
          ((bVar5 = pbVar3[1] < pbVar4[1], pbVar3[1] != pbVar4[1] ||
           ((uVar2 != 0xfffffffe &&
            ((bVar5 = pbVar3[2] < pbVar4[2], pbVar3[2] != pbVar4[2] ||
             ((uVar2 != 0xffffffff && (bVar5 = pbVar3[3] < pbVar4[3], pbVar3[3] != pbVar4[3]))))))))
          )))) {
        uVar1 = -(uint)bVar5 | 1;
        goto LAB_00d060d3;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 - uVar2;
  }
LAB_00d060d3:
  FUN_00bbc580(0,"ssl\\ssl_cert.c",0x2d1);
  FUN_00bbc580(param_1,"ssl\\ssl_cert.c",0x2d2);
  return uVar1;
}



void FUN_00d06110(undefined4 param_1)

{
  func_0x00bde960(param_1,0,0,0);
  return;
}



void FUN_00d06130(undefined4 *param_1,undefined4 *param_2)

{
  FUN_00d06020(*param_1,*param_2);
  return;
}



undefined4
FUN_00d06540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 *param_9)

{
  undefined4 uVar1;
  
  if ((code *)param_9[1] == (code *)0x0) {
    return 1;
  }
  uVar1 = (*(code *)param_9[1])(param_1,param_2,param_4,param_5,param_8,*param_9);
  return uVar1;
}



void FUN_00d065d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_1,param_2,param_4,*param_5);
  }
  return;
}



undefined4 FUN_00d06b70(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     ((*param_1 == 0 || ((*param_1 == 1 && (param_1 = (int *)param_1[8], param_1 != (int *)0x0))))))
  {
    uVar1 = func_0x00d072c0(param_1,1);
    return uVar1;
  }
  return 0xffffffff;
}



undefined4 FUN_00d06d00(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     ((*param_1 == 0 || ((*param_1 == 1 && (param_1 = (int *)param_1[8], param_1 != (int *)0x0))))))
  {
    uVar1 = func_0x00d072c0(param_1,0);
    return uVar1;
  }
  return 0xffffffff;
}



bool FUN_00d06ed0(int param_1)

{
  if (((*(int *)(param_1 + 0x854) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
     (*(int *)(param_1 + 0x6c) == 0x32)) {
    return *(int *)(param_1 + 0x6f4) != 2;
  }
  return false;
}



void FUN_00d07ed0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 800);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      func_0x00bca230(2,param_1,param_1 + 0x2d8);
      func_0x00401320(param_1 + 0x48,0x200);
      func_0x00401320(param_1 + 0x24c,0x20);
      FUN_00bde1d0(*(undefined4 *)(param_1 + 0x2a0));
      func_0x00bd5d50(*(undefined4 *)(param_1 + 0x29c));
      func_0x00bdf360(*(undefined4 *)(param_1 + 0x2a4));
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x2e0),"ssl\\ssl_sess.c",0x35b);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x2e4),"ssl\\ssl_sess.c",0x35c);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x290),"ssl\\ssl_sess.c",0x35e);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x294),"ssl\\ssl_sess.c",0x35f);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x304),"ssl\\ssl_sess.c",0x362);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x2f8),"ssl\\ssl_sess.c",0x364);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x308),"ssl\\ssl_sess.c",0x365);
      FUN_00bbc6c0(param_1,0x328,"ssl\\ssl_sess.c",0x367);
    }
  }
  return;
}



undefined4 FUN_00d08390(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = func_0x00bc5450(**(undefined4 **)(param_1 + 4),param_2,*param_3,0);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = func_0x00d00900(param_1,param_2,*param_3);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      return 0;
    }
  }
  if (9 < uVar2) {
    return 0;
  }
  return 1;
}



void FUN_00d09500(void)

{
  code *pcVar1;
  int iVar2;
  void *in_stack_00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  func_0x00e87f70();
  if ((int)in_stack_0000005c < 0x50) {
    memcpy(&stack0x00000000,in_stack_00000058,in_stack_0000005c);
    if (0x4f < in_stack_0000005c) {
      func_0x008ab9e3();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (&stack0x00000000)[in_stack_0000005c] = 0;
    iVar2 = func_0x00d26d40(&stack0x00000000);
    if (iVar2 != 0) {
      iVar2 = func_0x00bd18c0(in_stack_00000060,iVar2);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\ssl_ciph.c",0x513,"ciphersuite_cb");
        func_0x00bc5160(0x14,0xc0103,0);
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00d0b8c0(void)

{
  func_0x00d33f50();
  _DAT_013e0108 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00d0b8d0(void)

{
  _DAT_013e0108 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00d0b8e0(void)

{
  func_0x00d09410();
  func_0x00d28090();
  _DAT_013e00fc = 1;
  _DAT_013e0100 = 1;
  return;
}



void FUN_00d0b900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  if (*(code **)(param_6 + 0x364) != (code *)0x0) {
    (**(code **)(param_6 + 0x364))
              (param_1,param_2,param_3,param_4,param_5,param_6,*(undefined4 *)(param_6 + 0x368));
  }
  return;
}



void thunk_FUN_00d05b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  (**(code **)(*(int *)(param_1 + 0x6ac) + 0x4c))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined4 *)(*(int *)(param_1 + 0x6ac) + 0x54));
  return;
}



void FUN_00d0b940(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x958))(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x95c));
  return;
}



int FUN_00d0bea0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  if ((param_1 != (int *)0x0) &&
     ((piVar5 = param_1, *param_1 == 0 ||
      ((*param_1 == 1 && (piVar5 = (int *)param_1[8], piVar5 != (int *)0x0)))))) {
    if ((*(byte *)(*(int *)(piVar5[3] + 0x74) + 0x28) & 8) != 0) {
      param_1 = (int *)FUN_00bbba70(*(undefined4 *)(piVar5[0x255] + 4));
      iVar1 = func_0x00d115c0(&param_1);
      while (iVar1 != 0) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar1 + 8) + 0x14);
        iVar1 = func_0x00d115c0(&param_1);
      }
    }
    uVar3 = 0;
    if (piVar5[0x25a] != 0) {
      piVar2 = piVar5 + 0x261;
      do {
        if ((char)piVar2[-3] != '\x17') {
          return iVar4;
        }
        iVar4 = iVar4 + *piVar2;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 10;
      } while (uVar3 < (uint)piVar5[0x25a]);
    }
    iVar1 = (**(code **)(piVar5[0x247] + 0x10))(piVar5[0x249]);
    return iVar1 + iVar4;
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

int FUN_00d0bf70(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  code *pcStack00000004;
  uint uStack0000000c;
  int *in_stack_00000014;
  char in_stack_00000018;
  undefined1 *in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000024;
  int in_stack_00000028;
  uint *in_stack_0000002c;
  size_t sVar15;
  
  func_0x00e87f70();
  pcStack00000004 = (code *)0x0;
  piVar13 = (int *)0x0;
  if ((in_stack_00000014 != (int *)0x0) && (*in_stack_00000014 == 0)) {
    piVar13 = in_stack_00000014;
  }
  if ((((*(byte *)(((int *)piVar13[3])[0x1d] + 0x28) & 8) != 0) ||
      (iVar5 = *(int *)piVar13[3], iVar5 < 0x304)) || (bVar3 = true, iVar5 == 0x10000)) {
    bVar3 = false;
  }
  if (((in_stack_00000018 != '\0') && (in_stack_00000018 != '\x17')) &&
     (in_stack_00000018 != '\x16')) {
LAB_00d0bfe4:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x275,"ssl3_read_bytes");
    func_0x00d06d50(piVar13,0x50,0xc0103,0);
    return -1;
  }
  if (in_stack_00000028 == 0) {
    if ((in_stack_00000018 == '\x16') && (iVar5 = piVar13[0x250], iVar5 != 0)) {
      piVar10 = piVar13 + 0x24f;
      uVar6 = 0;
      if (in_stack_00000024 != 0) {
        iVar9 = (int)in_stack_00000020 - (int)piVar10;
        do {
          if (iVar5 == 0) break;
          uVar6 = uVar6 + 1;
          *(char *)((int)piVar10 + iVar9) = (char)*piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
          iVar5 = piVar13[0x250] + -1;
          piVar13[0x250] = iVar5;
          in_stack_00000024 = in_stack_00000024 - 1;
        } while (in_stack_00000024 != 0);
      }
      uVar12 = 0;
      if (iVar5 != 0) {
        do {
          iVar5 = *piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
          *(char *)((int)piVar13 + uVar12 + 0x93c) = (char)iVar5;
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)piVar13[0x250]);
      }
      if (in_stack_0000001c != (undefined1 *)0x0) {
        *in_stack_0000001c = 0x16;
      }
      *in_stack_0000002c = uVar6;
      return 1;
    }
  }
  else if (in_stack_00000018 != '\x17') goto LAB_00d0bfe4;
  iVar5 = func_0x00d06dc0(piVar13);
  if ((iVar5 == 0) && (iVar5 = func_0x00d06b10(in_stack_00000014), iVar5 != 0)) {
    iVar5 = (*(code *)piVar13[0xd])(in_stack_00000014);
    if (-1 < iVar5) goto joined_r0x00d0c0ce;
    return iVar5;
  }
LAB_00d0c0f0:
  do {
    while( true ) {
      piVar13[0xc] = 1;
      if ((uint)piVar13[0x25a] <= (uint)piVar13[0x25b]) {
        piVar13[0x25a] = 0;
        uVar6 = 0;
        piVar13[0x25b] = 0;
        do {
          piVar10 = piVar13 + (uVar6 * 5 + 0x12e) * 2;
          uVar7 = (**(code **)(piVar13[0x247] + 0x20))
                            (piVar13[0x249],piVar10,piVar10 + 1,piVar10 + 2,piVar10 + 3,piVar10 + 5,
                             0,0,"ssl\\record\\rec_layer_s3.c",0x2b5);
          iVar5 = func_0x00d0bd90(piVar13,0,uVar7);
          if (iVar5 < 1) {
            return iVar5;
          }
          piVar10[6] = 0;
          piVar13[0x25a] = piVar13[0x25a] + 1;
          iVar5 = (**(code **)(piVar13[0x247] + 0xc))(piVar13[0x249]);
        } while ((iVar5 != 0) && (uVar6 = piVar13[0x25a], uVar6 < 0x20));
      }
      piVar10 = piVar13 + piVar13[0x25b] * 10 + 0x25c;
      if ((piVar13[0x250] != 0) &&
         (((((char)piVar10[2] != '\x16' && ((*(byte *)(((int *)piVar13[3])[0x1d] + 0x28) & 8) == 0))
           && (iVar5 = *(int *)piVar13[3], 0x303 < iVar5)) && (iVar5 != 0x10000)))) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x2c5,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,10,0x125,0);
        return -1;
      }
      if (((char)piVar10[2] != '\x15') && (piVar10[5] != 0)) {
        piVar13[0x254] = 0;
      }
      if ((piVar13[0x40] != 0) && ((char)piVar10[2] != '\x16')) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x2d6,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,10,0x91,0);
        return -1;
      }
      if ((piVar13[0x11] & 2U) != 0) {
        piVar13[0x25b] = piVar13[0x25b] + 1;
        piVar13[0xc] = 1;
        return 0;
      }
      cVar1 = (char)piVar10[2];
      if ((in_stack_00000018 != cVar1) &&
         ((((cVar1 != '\x14' || (in_stack_00000018 != '\x16')) ||
           (in_stack_0000001c == (undefined1 *)0x0)) || (bVar3)))) break;
      iVar5 = func_0x00d06b10(in_stack_00000014);
      if ((iVar5 == 0) || (in_stack_00000018 != '\x17')) {
        if ((in_stack_00000018 == '\x16') && (((char)piVar10[2] == '\x14' && (piVar13[0x250] != 0)))
           ) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x2fa,"ssl3_read_bytes");
          func_0x00d06d50(piVar13,10,0x85,0);
          return -1;
        }
      }
      else if ((piVar13[0x69] == 0) || (piVar13[0x8a] == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x2f3,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,10,100,0);
        return -1;
      }
      if (in_stack_0000001c != (undefined1 *)0x0) {
        *in_stack_0000001c = (char)piVar10[2];
      }
      if (in_stack_00000024 == 0) {
        if (piVar10[5] != 0) {
          return 0;
        }
        iVar5 = func_0x00d0cfd0(piVar13,piVar10,0);
        return (iVar5 != 0) - 1;
      }
      uStack0000000c = piVar13[0x25b];
      uVar6 = 0;
      puVar14 = (uint *)(piVar10 + 5);
      do {
        uVar12 = *puVar14;
        if (in_stack_00000024 - uVar6 <= *puVar14) {
          uVar12 = in_stack_00000024 - uVar6;
        }
        memcpy(in_stack_00000020,(void *)(puVar14[1] + puVar14[-2]),uVar12);
        in_stack_00000020 = (void *)((int)in_stack_00000020 + uVar12);
        sVar15 = uVar12;
        if (in_stack_00000028 == 0) {
LAB_00d0c6cb:
          iVar5 = func_0x00d0cfd0(piVar13,puVar14 + -5,sVar15);
          if (iVar5 == 0) {
            return -1;
          }
        }
        else if (*puVar14 == 0) {
          sVar15 = 0;
          goto LAB_00d0c6cb;
        }
        if ((*puVar14 == 0) || ((in_stack_00000028 != 0 && (uVar12 == *puVar14)))) {
          puVar14 = puVar14 + 10;
          uStack0000000c = uStack0000000c + 1;
        }
        uVar6 = uVar6 + uVar12;
      } while (((in_stack_00000018 == '\x17') && (uStack0000000c < (uint)piVar13[0x25a])) &&
              (uVar6 < in_stack_00000024));
      if (uVar6 != 0) {
        *in_stack_0000002c = uVar6;
        return 1;
      }
    }
    if (piVar10[1] == 2) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x340,"ssl3_read_bytes");
      func_0x00d06d50(piVar13,0x50,0xc0103,0);
      return -1;
    }
    if (*(int *)in_stack_00000014[3] == 0x10000) {
      if ((piVar13[0xe] != 0) || (cVar1 != '\x15')) {
        piVar13[8] = piVar10[1];
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x34d,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,10,0xf4,0);
        return -1;
      }
    }
    else if (cVar1 != '\x15') {
      if ((piVar13[0x11] & 1U) != 0) {
        if (cVar1 != '\x16') {
          iVar5 = func_0x00d0cfd0(piVar13,piVar10,0);
          if (iVar5 != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x3cb,"ssl3_read_bytes");
            func_0x00d06d50(piVar13,0xffffffff,0x123,0);
            return -1;
          }
          return -1;
        }
        if ((((*(byte *)(((int *)piVar13[3])[0x1d] + 0x28) & 8) != 0) ||
            (iVar5 = *(int *)piVar13[3], iVar5 < 0x304)) || (iVar5 == 0x10000)) {
          iVar5 = func_0x00d0cfd0(piVar13,piVar10,0);
          if (iVar5 == 0) {
            return -1;
          }
          if ((*(byte *)(piVar13 + 0x1e4) & 4) == 0) goto LAB_00d0c462;
          goto LAB_00d0c0f0;
        }
      }
      if ((char)piVar10[2] == '\x16') {
        uVar6 = piVar10[5];
        uVar8 = 4 - piVar13[0x250];
        uVar12 = uVar6;
        if (uVar8 <= uVar6) {
          uVar12 = uVar8;
        }
        if (uVar12 == 0) {
          if (uVar6 == 0) goto LAB_00d0c4d5;
        }
        else {
          memcpy((void *)(piVar13[0x250] + 0x93c + (int)piVar13),(void *)(piVar10[6] + piVar10[3]),
                 uVar12);
          piVar13[0x250] = piVar13[0x250] + uVar12;
LAB_00d0c4d5:
          iVar5 = func_0x00d0cfd0(piVar13,piVar10,uVar12);
          if (iVar5 == 0) {
            return -1;
          }
        }
        if ((uint)piVar13[0x250] < 4) goto LAB_00d0c0f0;
      }
      if ((char)piVar10[2] == '\x14') {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x3f0,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,10,0x85,0);
        return -1;
      }
      if (((uint)piVar13[0x250] < 4) || (iVar5 = func_0x00d06dc0(piVar13), iVar5 != 0)) {
        switch((char)piVar10[2]) {
        case '\x14':
        case '\x15':
        case '\x16':
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x435,"ssl3_read_bytes");
          func_0x00d06d50(piVar13,10,0xc0103,0);
          return -1;
        case '\x17':
          goto LAB_00d0c590;
        default:
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x42b,"ssl3_read_bytes");
          func_0x00d06d50(piVar13,10,0xf5,0);
          return -1;
        }
      }
      iVar5 = piVar13[0x27];
      func_0x00d06e60(piVar13,1);
      iVar9 = (*(code *)piVar13[0xd])(in_stack_00000014);
      if (iVar9 < 0) {
        return iVar9;
      }
      if (iVar9 == 0) {
        return -1;
      }
      if (iVar5 == 0xb) {
        return -1;
      }
      if (((*(byte *)(piVar13 + 0x1e4) & 4) == 0) &&
         (iVar5 = (**(code **)(piVar13[0x247] + 8))(piVar13[0x249]), iVar5 == 0)) {
LAB_00d0c462:
        piVar13[0xc] = 3;
        uVar7 = func_0x00d007d0(in_stack_00000014);
        func_0x00baa700(uVar7,0xf);
        func_0x00bab680(uVar7,9);
        return -1;
      }
      goto LAB_00d0c0f0;
    }
    pcVar11 = (char *)(piVar10[6] + piVar10[3]);
    uVar6 = piVar10[5];
    if (((0x7fffffff < uVar6) || (uVar6 == 0)) || (cVar1 = *pcVar11, uVar6 == 1)) {
LAB_00d0c88f:
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x35f,"ssl3_read_bytes");
      func_0x00d06d50(piVar13,10,0xcd,0);
      return -1;
    }
    bVar2 = pcVar11[1];
    uVar12 = (uint)bVar2;
    if (uVar6 != 2) goto LAB_00d0c88f;
    if ((code *)piVar13[0xd9] != (code *)0x0) {
      (*(code *)piVar13[0xd9])(0,piVar13[8],0x15,pcVar11,2,in_stack_00000014,piVar13[0xda]);
    }
    pcVar4 = (code *)piVar13[0x1d7];
    if ((((code *)piVar13[0x1d7] != (code *)0x0) ||
        (pcVar4 = *(code **)(in_stack_00000014[1] + 0xb0),
        *(code **)(in_stack_00000014[1] + 0xb0) != (code *)0x0)) ||
       (pcVar4 = pcStack00000004, pcStack00000004 != (code *)0x0)) {
      pcStack00000004 = pcVar4;
      (*pcStack00000004)(in_stack_00000014,0x4004,CONCAT11(cVar1,bVar2));
    }
    if (bVar3) {
      if (uVar12 == 0x5a) goto LAB_00d0c36b;
      goto LAB_00d0c3a9;
    }
    if (cVar1 != '\x01') goto LAB_00d0c3a9;
LAB_00d0c36b:
    piVar13[0x41] = uVar12;
    iVar5 = func_0x00d0cfd0(piVar13,piVar10,0);
    if (iVar5 == 0) {
      return -1;
    }
    piVar13[0x254] = piVar13[0x254] + 1;
    if (piVar13[0x254] == 5) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x37a,"ssl3_read_bytes");
      func_0x00d06d50(piVar13,10,0x199,0);
      return -1;
    }
    if ((!bVar3) || (uVar12 != 0x5a)) {
LAB_00d0c3a9:
      if ((uVar12 == 0) && ((bVar3 || (cVar1 == '\x01')))) {
        piVar13[0x11] = piVar13[0x11] | 2;
        return 0;
      }
      if ((cVar1 == '\x02') || (bVar3)) {
        piVar13[0xc] = 1;
        piVar13[0x42] = uVar12;
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x38c,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,0xffffffff,uVar12 + 1000,"SSL alert number %d",uVar12);
        piVar13[0x11] = piVar13[0x11] | 2;
        iVar5 = func_0x00d0cfd0(piVar13,piVar10,0);
        if (iVar5 != 0) {
          func_0x00d07e30(piVar13[0x228],piVar13[0x1c7]);
          return 0;
        }
        return -1;
      }
      if (uVar12 == 100) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x39d,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,0x28,0x153,0);
        return -1;
      }
      if (cVar1 != '\x01') {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x3a4,"ssl3_read_bytes");
        func_0x00d06d50(piVar13,0x2f,0xf6,0);
        return -1;
      }
    }
  } while( true );
LAB_00d0c590:
  iVar5 = func_0x00d06ba0(piVar13);
  if (iVar5 != 0) {
    piVar13[0x48] = 2;
    return -1;
  }
  iVar5 = FUN_00d06ed0(piVar13);
  if (iVar5 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x455,"ssl3_read_bytes");
    func_0x00d06d50(piVar13,10,0xf5,0);
    return -1;
  }
  iVar5 = piVar10[5];
  iVar9 = func_0x00d0bce0(piVar13);
  if (iVar9 == 0) {
    FUN_00bc4f50();
    uVar7 = 0x9a;
  }
  else {
    if ((uint)(piVar13[0x3a3] + iVar5) <= iVar9 + 0x68U) {
      piVar13[0x3a3] = piVar13[0x3a3] + iVar5;
      iVar5 = func_0x00d0cfd0(piVar13,piVar10,0);
joined_r0x00d0c0ce:
      if (iVar5 == 0) {
        return -1;
      }
      goto LAB_00d0c0f0;
    }
    FUN_00bc4f50();
    uVar7 = 0xa3;
  }
  func_0x00bc5050("ssl\\record\\rec_layer_s3.c",uVar7,"ossl_early_data_count_ok");
  func_0x00d06d50(piVar13,10,0xa4,0);
  return -1;
}



void FUN_00d0cb10(uint param_1,int param_2,uint param_3,int *param_4,uint *param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *in_stack_00000224;
  undefined4 in_stack_00000228;
  int in_stack_0000022c;
  uint in_stack_00000230;
  uint *in_stack_00000234;
  
  func_0x00e87f70();
  if (in_stack_00000224 == (int *)0x0) goto LAB_00d0cfb0;
  piVar12 = (int *)0x0;
  if (*in_stack_00000224 == 0) {
    piVar12 = in_stack_00000224;
  }
  param_4 = piVar12;
  if (piVar12 == (int *)0x0) goto LAB_00d0cfb0;
  uVar11 = piVar12[0x24e];
  piVar12[0xc] = 1;
  if ((in_stack_00000230 < uVar11) ||
     ((piVar12[0x251] != 0 && (in_stack_00000230 < piVar12[0x251] + uVar11)))) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x128,"ssl3_write_bytes");
    uVar2 = 0x10f;
LAB_00d0cfa2:
    func_0x00d06d50(piVar12,0x50,uVar2,0);
  }
  else {
    param_5 = in_stack_00000234;
    if ((piVar12[0x27] == 4) && (iVar1 = func_0x00d0bc50(piVar12,in_stack_00000230,0,1), iVar1 == 0)
       ) goto LAB_00d0cfb0;
    piVar12[0x24e] = 0;
    if ((piVar12[0x251] == 0) && ((piVar12[0x22c] != -1 || (0 < piVar12[0x201])))) {
      func_0x00d06e60(piVar12,1);
    }
    iVar1 = func_0x00d06b10(in_stack_00000224);
    if (((iVar1 != 0) && (iVar1 = func_0x00d06dc0(piVar12), iVar1 == 0)) && (piVar12[0x27] != 6)) {
      iVar1 = (*(code *)piVar12[0xd])(in_stack_00000224);
      if ((iVar1 < 0) || (iVar1 == 0)) goto LAB_00d0cfb0;
    }
    cVar9 = (char)in_stack_00000228;
    if (piVar12[0x251] == 0) {
LAB_00d0ccc3:
      if (uVar11 == 0) {
        piVar12[0x251] = 0;
        *(char *)(piVar12 + 0x252) = cVar9;
        piVar12[0x253] = in_stack_0000022c;
      }
      if (uVar11 == in_stack_00000230) {
        *param_5 = uVar11;
        goto LAB_00d0cfb0;
      }
      if ((piVar12[0x43] < 1) ||
         (iVar1 = (**(code **)(in_stack_00000224[3] + 0x50))(in_stack_00000224), 0 < iVar1)) {
        uVar13 = in_stack_00000230 - uVar11;
        uVar3 = func_0x00d03410(piVar12);
        param_3 = uVar3;
        param_1 = func_0x00d03480(piVar12);
        if ((uVar3 != 0) && ((param_1 != 0 && (param_1 <= uVar3)))) {
          iVar1 = piVar12[8];
          if (iVar1 == 0x304) {
            iVar1 = 0x303;
          }
          param_2 = iVar1;
          iVar4 = func_0x00d06ab0(in_stack_00000224);
          if ((((iVar4 == 0xd) && (piVar12[0x22b] == 0)) &&
              (uVar3 = func_0x00d01330(in_stack_00000224), (uVar3 & 0xffffff00) == 0x300)) &&
             ((iVar4 = func_0x00d01330(in_stack_00000224), 0x301 < iVar4 &&
              (param_2 = iVar1, piVar12[0x1bd] == 0)))) {
            param_2 = 0x301;
          }
          while( true ) {
            uVar5 = (**(code **)(piVar12[0x248] + 0x14))
                              (piVar12[0x24a],in_stack_00000228,uVar13,param_3,&param_1);
            uVar3 = piVar12[0x1ec];
            if ((uVar3 != 0) && (uVar3 < uVar5)) {
              uVar5 = uVar3;
            }
            if (0x20 < uVar5) {
              uVar5 = 0x20;
            }
            if (param_3 < param_1) {
              FUN_00bc4f50();
              uVar2 = 0x1aa;
              goto LAB_00d0cf5e;
            }
            uVar3 = uVar13 / uVar5;
            param_6 = uVar13 % uVar5;
            if (uVar3 < param_1) {
              uVar10 = 0;
              uVar7 = uVar13;
              if (uVar5 != 0) {
                iVar1 = 0;
                piVar6 = (int *)&stack0x00000020;
                uVar8 = uVar3 + 1;
                if (param_6 == 0) {
                  uVar8 = uVar3;
                }
                do {
                  *(char *)(piVar6 + -1) = cVar9;
                  uVar10 = uVar10 + 1;
                  *piVar6 = param_2;
                  iVar4 = iVar1 + uVar11;
                  iVar1 = iVar1 + uVar8;
                  piVar6[1] = iVar4 + in_stack_0000022c;
                  uVar3 = uVar8 - 1;
                  if (uVar10 != param_6) {
                    uVar3 = uVar8;
                  }
                  piVar6[2] = uVar8;
                  piVar6 = piVar6 + 4;
                  uVar8 = uVar3;
                  piVar12 = param_4;
                } while (uVar10 < uVar5);
              }
            }
            else {
              if (uVar5 != 0) {
                iVar1 = in_stack_0000022c + uVar11;
                piVar6 = (int *)&stack0x00000020;
                uVar3 = uVar5;
                do {
                  *(char *)(piVar6 + -1) = cVar9;
                  piVar6[1] = iVar1;
                  iVar1 = iVar1 + param_1;
                  *piVar6 = param_2;
                  piVar6[2] = param_1;
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 4;
                  piVar12 = param_4;
                } while (uVar3 != 0);
              }
              uVar7 = uVar5 * param_1;
            }
            piVar12[0x251] = uVar7;
            uVar2 = (**(code **)(piVar12[0x248] + 0x18))
                              (piVar12[0x24a],&stack0x0000001c,uVar5,"ssl\\record\\rec_layer_s3.c",
                               0x1d3);
            iVar1 = func_0x00d0bd90(piVar12,1,uVar2);
            if (iVar1 < 1) goto LAB_00d0cc7d;
            uVar3 = piVar12[0x251];
            if ((uVar3 == uVar13) || ((cVar9 == '\x17' && ((*(byte *)(piVar12 + 0x1e4) & 1) != 0))))
            break;
            uVar13 = uVar13 - uVar3;
            uVar11 = uVar11 + uVar3;
          }
          *param_5 = uVar3 + uVar11;
          piVar12[0x251] = 0;
          goto LAB_00d0cfb0;
        }
        FUN_00bc4f50();
        uVar2 = 0x183;
LAB_00d0cf5e:
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",uVar2,"ssl3_write_bytes");
        uVar2 = 0xc0103;
        goto LAB_00d0cfa2;
      }
    }
    else {
      if (((in_stack_00000230 < (uint)piVar12[0x251]) ||
          (((*(byte *)(piVar12 + 0x1e4) & 2) == 0 && (piVar12[0x253] != in_stack_0000022c)))) ||
         ((char)piVar12[0x252] != cVar9)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_s3.c",0x102,"tls_write_check_pending");
        uVar2 = 0x7f;
        goto LAB_00d0cfa2;
      }
      uVar2 = (**(code **)(piVar12[0x248] + 0x1c))
                        (piVar12[0x24a],"ssl\\record\\rec_layer_s3.c",0x154);
      iVar1 = func_0x00d0bd90(piVar12,1,uVar2);
      if (0 < iVar1) {
        uVar11 = uVar11 + piVar12[0x251];
        piVar12[0x251] = 0;
        goto LAB_00d0ccc3;
      }
    }
LAB_00d0cc7d:
    piVar12[0x24e] = uVar11;
  }
LAB_00d0cfb0:
  FUN_008ab370();
  return;
}



void FUN_00d0dd60(DWORD param_1)

{
  uint in_stack_00000018;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  func_0x00e87f70();
  in_stack_00000018 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  GetSystemTime((LPSYSTEMTIME)&stack0x00000008);
  SystemTimeToFileTime((SYSTEMTIME *)&stack0x00000008,(LPFILETIME)&stack0x00000000);
  FUN_008ab370();
  return;
}



void FUN_00d0dd80(void)

{
  int iVar1;
  int unaff_retaddr;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x00e87f70();
  iVar1 = func_0x00d0da30(in_stack_00000014,&stack0x00000000);
  if (iVar1 == 0) {
    return;
  }
  if (in_stack_00000018 != 0xf) {
    FUN_00d25260(*(undefined4 *)(unaff_retaddr + 0x20),in_stack_00000018,in_stack_0000001c);
    return;
  }
  func_0x00d3ca80(*(undefined4 *)(unaff_retaddr + 0x2c),in_stack_0000001c,unaff_retaddr);
  FUN_00d25260(*(undefined4 *)(unaff_retaddr + 0x20),0xf,in_stack_0000001c);
  return;
}



void FUN_00d0e330(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    uVar2 = 0xd2;
    uVar4 = 0xc0102;
LAB_00d0e35f:
    bVar1 = false;
    iVar3 = func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar2,"expect_quic",uVar4,0);
    if (iVar3 == 0) goto LAB_00d0e3a2;
  }
  else if (*param_1 == 1) {
    bVar1 = false;
    piVar5 = param_1;
  }
  else {
    if (*param_1 != 2) {
      uVar2 = 0xe6;
      uVar4 = 0xc0103;
      goto LAB_00d0e35f;
    }
    bVar1 = true;
    piVar5 = (int *)param_1[8];
  }
  if (((piVar5[0x21] & 1U) == 0) && (!bVar1)) {
    piVar5[0x21] = piVar5[0x21] & 0xfffffffb;
  }
LAB_00d0e3a2:
  func_0x00d0e630(param_1);
  return;
}



uint FUN_00d0e3b0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  uVar4 = param_3;
  piVar9 = param_1;
  piVar7 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    uVar2 = 0xd2;
    uVar5 = 0xc0102;
LAB_00d0e3e6:
    iVar3 = func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar2,"expect_quic",uVar5,0);
    piVar8 = (int *)0x0;
    if (iVar3 == 0) {
      return 0;
    }
LAB_00d0e41a:
    bVar1 = false;
  }
  else {
    if (*param_1 == 1) {
      piVar7 = (int *)param_1[0xd];
      piVar8 = param_1;
      goto LAB_00d0e41a;
    }
    if (*param_1 != 2) {
      uVar2 = 0xe6;
      uVar5 = 0xc0103;
      goto LAB_00d0e3e6;
    }
    piVar8 = (int *)param_1[8];
    bVar1 = true;
    piVar7 = param_1;
  }
  uVar2 = param_4;
  switch(param_2) {
  case 0x10:
    func_0x00d3cad0(piVar8[0xb],param_4);
    uVar4 = func_0x00d002a0(piVar8[8],param_2,uVar4,uVar2);
    return uVar4;
  default:
    uVar4 = func_0x00d01a00(piVar8,param_2,uVar4,param_4,1);
    return uVar4;
  case 0x21:
    if (!bVar1) {
      piVar8[0x23] = piVar8[0x23] | uVar4;
    }
    if (piVar7 != (int *)0x0) {
      uVar6 = uVar4 & 0xfffffffe;
      if ((*(byte *)(piVar7 + 10) & 0x10) == 0) {
        uVar6 = uVar4;
      }
      uVar4 = piVar7[0xe];
      piVar7[0xe] = uVar6 | uVar4;
      return uVar6 | uVar4;
    }
    break;
  case 0x28:
  case 0x29:
  case 0x34:
  case 0x7d:
  case 0x7e:
    return 0;
  case 0x49:
    iVar3 = func_0x00d0e9d0(piVar9,param_4,&param_1);
    if (iVar3 == 0) {
      return 0;
    }
    return (uint)(param_1 == (int *)0x0);
  case 0x4a:
    if (piVar9 == (int *)0x0) {
      uVar2 = 0xd2;
      uVar5 = 0xc0102;
    }
    else {
      if (*piVar9 == 1) goto LAB_00d0e527;
      if (*piVar9 == 2) {
        piVar9 = (int *)piVar9[8];
        goto LAB_00d0e527;
      }
      uVar2 = 0xe6;
      uVar5 = 0xc0103;
    }
    iVar3 = func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar2,"expect_quic",uVar5,0);
    piVar9 = (int *)0x0;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
LAB_00d0e527:
    func_0x00bfa730(piVar9[0xc]);
    if ((*(byte *)(piVar9 + 0x21) & 1) != 0) {
      uVar2 = func_0x00d3bdb0(piVar9[0xb],0);
      func_0x00d404b0(uVar2);
    }
    func_0x00bfa770(piVar9[0xc]);
    return 1;
  case 0x4e:
    if (!bVar1) {
      piVar8[0x23] = piVar8[0x23] & ~uVar4;
    }
    if (piVar7 != (int *)0x0) {
      uVar4 = piVar7[0xe] & ~uVar4;
      piVar7[0xe] = uVar4;
      return uVar4;
    }
  }
  return piVar8[0x23];
}



undefined4 thunk_FUN_00d261f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 6:
    *(undefined4 *)(*(int *)(param_1 + 0xd8) + 8) = param_3;
    return 1;
  default:
    return 0;
  case 0x35:
    *(undefined4 *)(param_1 + 0x14c) = param_3;
    return 1;
  case 0x3f:
    *(undefined4 *)(param_1 + 0x170) = param_3;
    return 1;
  case 0x48:
    *(undefined4 *)(param_1 + 0x168) = param_3;
    return 1;
  case 0x4b:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(undefined4 *)(param_1 + 0x1ec) = param_3;
    return 1;
  case 0x4c:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(undefined4 *)(param_1 + 0x1f0) = param_3;
    return 1;
  case 0x4d:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(undefined4 *)(param_1 + 500) = param_3;
    return 1;
  case 0x4f:
    *(undefined4 *)(param_1 + 0x23c) = param_3;
    return 1;
  }
}



// WARNING: Removing unreachable block (ram,0x00d15a4e)
// WARNING: Removing unreachable block (ram,0x00d15a5b)
// WARNING: Removing unreachable block (ram,0x00d15a7b)
// WARNING: Removing unreachable block (ram,0x00d15aa0)
// WARNING: Removing unreachable block (ram,0x00d15a56)

undefined4 thunk_FUN_00d26340(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 in_stack_00000020;
  
  switch(param_2) {
  case 3:
    if (param_4 != (int *)0x0) {
      iVar3 = func_0x00d23680(param_4);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\s3_lib.c",0xf30,"ssl3_ctx_ctrl");
        func_0x00bc5160(0x14,0x80005,0);
        return 0;
      }
      iVar4 = func_0x00cffdb0(param_1,iVar3);
      if (iVar4 != 0) {
        return 1;
      }
      func_0x00bd5d50(iVar3);
      return 0;
    }
    FUN_00bc4f50();
    uVar5 = 0xf2b;
    goto LAB_00d26375;
  case 4:
    if (param_4 != (int *)0x0) {
      uVar5 = func_0x00d23790(param_1 + 0x18c,param_1 + 0x188,param_4);
      return uVar5;
    }
    FUN_00bc4f50();
    uVar5 = 0xf46;
LAB_00d26375:
    func_0x00bc5050("ssl\\s3_lib.c",uVar5,"ssl3_ctx_ctrl");
    func_0x00bc5160(0x14,0xc0102,0);
LAB_00d26390:
    return 0;
  default:
    goto LAB_00d26390;
  case 6:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_lib.c",0xf3b,"ssl3_ctx_ctrl");
    func_0x00bc5160(0x14,0xc0101,0);
    return 0;
  case 0xe:
    iVar3 = *(int *)(param_1 + 0xa8);
    if (iVar3 == 0) {
      iVar3 = func_0x00bd1790();
      *(int *)(param_1 + 0xa8) = iVar3;
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar5 = 0xfd9;
        goto LAB_00d2689a;
      }
    }
    iVar3 = func_0x00bd18c0(iVar3,param_4);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      uVar5 = 0xfde;
LAB_00d2689a:
      func_0x00bc5050("ssl\\s3_lib.c",uVar5,"ssl3_ctx_ctrl");
      func_0x00bc5160(0x14,0x8000f,0);
      return 0;
    }
    break;
  case 0x36:
    *(int **)(param_1 + 0x150) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (int *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 != 0x3b) {
        iVar3 = *(int *)(param_1 + 0x158);
        iVar4 = *(int *)(param_1 + 0x15c);
        iVar1 = *(int *)(param_1 + 0x160);
        *param_4 = *(int *)(param_1 + 0x154);
        param_4[1] = iVar3;
        param_4[2] = iVar4;
        param_4[3] = iVar1;
        piVar6 = *(int **)(param_1 + 0x164);
        iVar3 = piVar6[1];
        iVar4 = piVar6[2];
        iVar1 = piVar6[3];
        param_4[4] = *piVar6;
        param_4[5] = iVar3;
        param_4[6] = iVar4;
        param_4[7] = iVar1;
        iVar3 = piVar6[5];
        iVar4 = piVar6[6];
        iVar1 = piVar6[7];
        param_4[8] = piVar6[4];
        param_4[9] = iVar3;
        param_4[10] = iVar4;
        param_4[0xb] = iVar1;
        iVar3 = *(int *)(param_1 + 0x164);
        iVar4 = *(int *)(iVar3 + 0x24);
        iVar1 = *(int *)(iVar3 + 0x28);
        iVar2 = *(int *)(iVar3 + 0x2c);
        param_4[0xc] = *(int *)(iVar3 + 0x20);
        param_4[0xd] = iVar4;
        param_4[0xe] = iVar1;
        param_4[0xf] = iVar2;
        iVar4 = *(int *)(iVar3 + 0x34);
        iVar1 = *(int *)(iVar3 + 0x38);
        iVar2 = *(int *)(iVar3 + 0x3c);
        param_4[0x10] = *(int *)(iVar3 + 0x30);
        param_4[0x11] = iVar4;
        param_4[0x12] = iVar1;
        param_4[0x13] = iVar2;
        return 1;
      }
      iVar3 = param_4[1];
      iVar4 = param_4[2];
      iVar1 = param_4[3];
      piVar6 = *(int **)(param_1 + 0x164);
      *(int *)(param_1 + 0x154) = *param_4;
      *(int *)(param_1 + 0x158) = iVar3;
      *(int *)(param_1 + 0x15c) = iVar4;
      *(int *)(param_1 + 0x160) = iVar1;
      iVar3 = param_4[5];
      iVar4 = param_4[6];
      iVar1 = param_4[7];
      *piVar6 = param_4[4];
      piVar6[1] = iVar3;
      piVar6[2] = iVar4;
      piVar6[3] = iVar1;
      iVar3 = param_4[9];
      iVar4 = param_4[10];
      iVar1 = param_4[0xb];
      piVar6[4] = param_4[8];
      piVar6[5] = iVar3;
      piVar6[6] = iVar4;
      piVar6[7] = iVar1;
      iVar3 = *(int *)(param_1 + 0x164);
      iVar4 = param_4[0xd];
      iVar1 = param_4[0xe];
      iVar2 = param_4[0xf];
      *(int *)(iVar3 + 0x20) = param_4[0xc];
      *(int *)(iVar3 + 0x24) = iVar4;
      *(int *)(iVar3 + 0x28) = iVar1;
      *(int *)(iVar3 + 0x2c) = iVar2;
      iVar4 = param_4[0x11];
      iVar1 = param_4[0x12];
      iVar2 = param_4[0x13];
      *(int *)(iVar3 + 0x30) = param_4[0x10];
      *(int *)(iVar3 + 0x34) = iVar4;
      *(int *)(iVar3 + 0x38) = iVar1;
      *(int *)(iVar3 + 0x3c) = iVar2;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_lib.c",0xf5b,"ssl3_ctx_ctrl");
    func_0x00bc5160(0x14,0x145,0);
    return 0;
  case 0x40:
    *(int **)(param_1 + 0x174) = param_4;
    return 1;
  case 0x41:
    *(int *)(param_1 + 0x178) = param_3;
    return 1;
  case 0x4e:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(int **)(param_1 + 0x1e8) = param_4;
    return 1;
  case 0x4f:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x1f8),"ssl\\s3_lib.c",0xf8c);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    if (param_4 != (int *)0x0) {
      piVar6 = param_4;
      do {
        iVar3 = *piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
      } while ((char)iVar3 != '\0');
      if ((uint)((int)piVar6 - (int)((int)param_4 + 1)) < 0x100) {
        piVar6 = param_4;
        do {
          iVar3 = *piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while ((char)iVar3 != '\0');
        if (piVar6 != (int *)((int)param_4 + 1)) {
          iVar3 = func_0x00bbbc70(param_4,"ssl\\s3_lib.c",0xf94);
          *(int *)(param_1 + 0x1f8) = iVar3;
          if (iVar3 != 0) {
            return 1;
          }
          FUN_00bc4f50();
          uVar5 = 0xf95;
          goto LAB_00d26654;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\s3_lib.c",0xf91,"ssl3_ctx_ctrl");
      func_0x00bc5160(0x14,0x165,0);
      return 0;
    }
    break;
  case 0x50:
    *(int *)(param_1 + 0x220) = param_3;
    return 1;
  case 0x51:
    *(code **)(param_1 + 500) = FUN_00d25220;
    if (*(int *)(param_1 + 0x21c) != 0) {
      FUN_00bbc580(*(int *)(param_1 + 0x21c),"ssl\\s3_lib.c",0xf9d);
    }
    iVar3 = func_0x00bbbc70(param_4,"ssl\\s3_lib.c",0xf9e);
    *(int *)(param_1 + 0x21c) = iVar3;
    if (iVar3 == 0) {
      FUN_00bc4f50();
      uVar5 = 3999;
LAB_00d26654:
      func_0x00bc5050("ssl\\s3_lib.c",uVar5,"ssl3_ctx_ctrl");
      func_0x00bc5160(0x14,0xc0103,0);
      return 0;
    }
    break;
  case 0x52:
    iVar3 = *(int *)(param_1 + 0xa8);
    if ((iVar3 == 0) && (param_3 == 0)) goto LAB_00d26974;
    goto LAB_00d2697f;
  case 0x53:
    func_0x00bdf360(*(undefined4 *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return 1;
  case 0x58:
    if (param_3 != 0) {
      uVar5 = func_0x00d059b0();
      return uVar5;
    }
    uVar5 = func_0x00d058f0(0,param_1,param_4);
    return uVar5;
  case 0x59:
    if (param_3 != 0) {
      uVar5 = func_0x00d05070();
      return uVar5;
    }
    uVar5 = func_0x00d04fe0(0,param_1,param_4);
    return uVar5;
  case 0x5b:
    uVar5 = func_0x00d15880(param_1 + 0x18c,param_1 + 0x188,param_4,param_3);
    return uVar5;
  case 0x5c:
    func_0x00e87f70();
    iVar3 = FUN_00bbc4f0(0x50,"ssl\\t1_lib.c",0x447);
    if (iVar3 == 0) {
      return 0;
    }
    iVar4 = func_0x00bf1420(in_stack_00000020,0x3a,1,FUN_00d12760,&stack0x00000000);
    if (iVar4 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\t1_lib.c",0x44e,"tls1_set_groups_list");
      func_0x00bc5160(0x14,0x80106,"No valid groups in \'%s\'",in_stack_00000020);
    }
    FUN_00bbc580(iVar3,"ssl\\t1_lib.c",0x463);
    return 0;
  case 0x61:
    uVar5 = func_0x00d15c70(*(undefined4 *)(param_1 + 0xd8),param_4,param_3,0);
    return uVar5;
  case 0x62:
    uVar5 = 0;
    goto LAB_00d267a2;
  case 0x65:
    uVar5 = func_0x00d15c70(*(undefined4 *)(param_1 + 0xd8),param_4,param_3,1);
    return uVar5;
  case 0x66:
    uVar5 = 1;
LAB_00d267a2:
    uVar5 = func_0x00d15da0(param_1,*(undefined4 *)(param_1 + 0xd8),param_4,uVar5);
    return uVar5;
  case 0x68:
    uVar5 = func_0x00d27290(*(undefined4 *)(param_1 + 0xd8),param_4,param_3);
    return uVar5;
  case 0x69:
    uVar5 = func_0x00d04ca0(0,param_1,param_3);
    return uVar5;
  case 0x6a:
    uVar5 = 0;
    goto LAB_00d26817;
  case 0x6b:
    uVar5 = 1;
LAB_00d26817:
    uVar5 = func_0x00d05a00(*(undefined4 *)(param_1 + 0xd8),param_4,uVar5,param_3);
    return uVar5;
  case 0x73:
LAB_00d26974:
    iVar3 = *(int *)(**(int **)(param_1 + 0xd8) + 8);
LAB_00d2697f:
    *param_4 = iVar3;
    break;
  case 0x74:
    uVar5 = func_0x00d05860(*(undefined4 *)(param_1 + 0xd8),param_4);
    return uVar5;
  case 0x75:
    uVar5 = func_0x00d05a40(*(undefined4 *)(param_1 + 0xd8),param_3);
    return uVar5;
  case 0x76:
    *(int *)(*(int *)(param_1 + 0xd8) + 0xc) = param_3;
    return 1;
  case 0x7f:
    return *(undefined4 *)(param_1 + 0x178);
  case 0x80:
    *param_4 = *(int *)(param_1 + 0x170);
    return 1;
  case 0x81:
    *param_4 = *(int *)(param_1 + 0x174);
    return 1;
  case 0x89:
    uVar5 = func_0x00d05630(*(undefined4 *)(param_1 + 0xd8),param_4,0);
    return uVar5;
  case 0x8a:
    uVar5 = func_0x00d05630(*(undefined4 *)(param_1 + 0xd8),param_4,1);
    return uVar5;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00d0e720(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xd2;
    uVar5 = 0xc0102;
  }
  else {
    if (*param_1 == 1) {
      iVar3 = param_1[0xc];
      piVar6 = param_1 + 0xc;
      goto LAB_00d0e844;
    }
    if (*param_1 == 2) {
      iVar3 = param_1[8];
      func_0x00bfa730(*(undefined4 *)(iVar3 + 0x30));
      *(int *)(iVar3 + 0x80) = *(int *)(iVar3 + 0x80) + -1;
      cVar1 = *(char *)(param_1[9] + 0xd1);
      if (((cVar1 == '\x01') || (cVar1 == '\x02')) &&
         (iVar4 = func_0x00d3e140(*(undefined4 *)(param_1[9] + 0x58),0), iVar4 == 0)) {
        uVar2 = func_0x00d3bda0(*(undefined4 *)(iVar3 + 0x2c),param_1[9],0,0);
        func_0x00d3fdc0(uVar2);
      }
      cVar1 = *(char *)(param_1[9] + 0xd2);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        uVar2 = func_0x00d3bda0(*(undefined4 *)(iVar3 + 0x2c),param_1[9],0,0);
        func_0x00d3fec0(uVar2);
      }
      *(uint *)(param_1[9] + 0xd4) = *(uint *)(param_1[9] + 0xd4) | 0x20;
      uVar2 = func_0x00d3bda0(*(undefined4 *)(iVar3 + 0x2c),param_1[9]);
      func_0x00d3ff60(uVar2);
      piVar6 = *(int **)(iVar3 + 0x34);
      func_0x00bfa770(*(undefined4 *)(iVar3 + 0x30));
      if (param_1 == piVar6) {
        return;
      }
      func_0x00d003d0(iVar3);
      return;
    }
    uVar2 = 0xe6;
    uVar5 = 0xc0103;
  }
  iVar3 = func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar2,"expect_quic",uVar5,0);
  if (iVar3 == 0) {
    return;
  }
  piVar6 = (int *)&DAT_00000030;
  param_1 = (int *)0x0;
  iVar3 = _DAT_00000030;
LAB_00d0e844:
  func_0x00bfa730(iVar3);
  iVar3 = param_1[0xd];
  if (iVar3 != 0) {
    func_0x00bfa770(*piVar6);
    func_0x00d003d0(iVar3);
    func_0x00bfa730(*piVar6);
    param_1[0xd] = 0;
  }
  if (((byte)param_1[0x21] & 9) == 9) {
    func_0x00d40a10(param_1 + 0x17);
    func_0x00d40950(param_1 + 0x17);
  }
  func_0x00d003d0(param_1[8]);
  func_0x00d3bd60(param_1[0xb]);
  func_0x00d40b70(param_1[10]);
  func_0x00d41430(param_1[9]);
  func_0x00baa980(param_1[0xe]);
  func_0x00baa980(param_1[0xf]);
  func_0x00bfa770(*piVar6);
  func_0x00bfa700(piVar6);
  return;
}



uint FUN_00d0e8e0(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00d26c70(param_1);
  return uVar1 & -(uint)((*(uint *)(uVar1 + 0x34) & 0x40000) != 0);
}



undefined4 FUN_00d0ecd0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xd2;
    uVar3 = 0xc0102;
  }
  else {
    if ((*param_1 == 1) || (*param_1 == 2)) goto LAB_00d0ed16;
    uVar1 = 0xe6;
    uVar3 = 0xc0103;
  }
  iVar2 = func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar1,"expect_quic",uVar3,0);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00d0ed16:
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\quic\\quic_impl.c",0x25a,"ossl_quic_clear");
  func_0x00bc5160(0x14,0x8010c,0);
  return 0;
}



int FUN_00d0ed50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,code *param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  
  func_0x00e87f70();
  iVar4 = FUN_00bbc830(0xb0,"ssl\\quic\\quic_impl.c",0x182);
  if (iVar4 == 0) {
    func_0x00d10580(0,"ssl\\quic\\quic_impl.c",0x184,"ossl_quic_new",0x8000f,0);
    return 0;
  }
  iVar5 = func_0x00bfa740();
  iVar9 = param_9;
  *(int *)(iVar4 + 0x30) = iVar5;
  if (iVar5 == 0) {
    uVar6 = 0x189;
    uVar8 = 0x8000f;
  }
  else {
    iVar5 = func_0x00d02d90(iVar4,param_9,*(undefined4 *)(param_9 + 4),1);
    if (iVar5 != 0) {
      uVar6 = func_0x00d04450();
      piVar7 = (int *)func_0x00d021c0(iVar9,uVar6);
      *(int **)(iVar4 + 0x20) = piVar7;
      if ((piVar7 == (int *)0x0) ||
         ((*piVar7 != 0 && ((*piVar7 != 1 || (piVar7 = (int *)piVar7[8], piVar7 == (int *)0x0))))))
      {
        pcVar11 = "ossl_quic_new";
        uVar6 = 0x198;
      }
      else {
        piVar7[0x2d] = piVar7[0x2d] | 0x2000;
        piVar7[0x1e2] = piVar7[0x1e2] & 0xdf6ffb85;
        piVar7[0x1e3] = piVar7[0x1e3] & 3;
        piVar7[0x22e] = 0;
        iVar5 = func_0x00d06aa0();
        puVar1 = *(undefined4 **)(iVar4 + 4);
        uVar10 = 0;
        uVar2 = *(uint *)(iVar4 + 0x84);
        if (*(int *)(iVar4 + 0xc) == iVar5) {
          uVar10 = 8;
        }
        *(undefined4 *)(iVar4 + 0x88) = 1;
        *(uint *)(iVar4 + 0x84) = uVar10 | uVar2 & 0xfffffff1;
        *(undefined4 *)(iVar4 + 0x8c) = puVar1[0x32];
        uVar3 = puVar1[0x31];
        *(uint *)(iVar4 + 0x90) = puVar1[0x30] & 0xdf6ffb87;
        *(uint *)(iVar4 + 0x94) = uVar3 & 3;
        *(uint *)(iVar4 + 0x84) = uVar10 | uVar2 & 0xffffffe1 | 0x20;
        *(undefined4 *)(iVar4 + 0x98) = 0;
        *(undefined4 *)(iVar4 + 0xa8) = 0;
        param_3 = *puVar1;
        param_4 = puVar1[0xa1];
        param_5 = *(undefined4 *)(iVar4 + 0x30);
        param_6 = FUN_00d0dd60;
        param_7 = iVar4;
        iVar5 = func_0x00d41480(&param_3);
        *(int *)(iVar4 + 0x24) = iVar5;
        if (iVar5 != 0) {
          iVar5 = func_0x00d413e0(iVar5,&stack0x00000000);
          *(int *)(iVar4 + 0x28) = iVar5;
          if (iVar5 == 0) {
            func_0x00d10580(0,"ssl\\quic\\quic_impl.c",0x5ef,"create_channel",0xc0103,0);
            func_0x00d41430(*(undefined4 *)(iVar4 + 0x24));
            func_0x00d003d0(iVar4);
            return 0;
          }
          iVar5 = func_0x00d40a90(iVar5,*(undefined4 *)(iVar4 + 0x20));
          *(int *)(iVar4 + 0x2c) = iVar5;
          if (iVar5 == 0) {
            func_0x00d10580(0,"ssl\\quic\\quic_impl.c",0x5f6,"create_channel",0xc0103,0);
            func_0x00d40b70(*(undefined4 *)(iVar4 + 0x28));
            func_0x00d41430(*(undefined4 *)(iVar4 + 0x24));
            func_0x00d003d0(iVar4);
            return 0;
          }
          func_0x00d3ca80(iVar5,*(undefined4 *)(iVar9 + 0xe4),iVar4);
          func_0x00d3cad0(*(undefined4 *)(iVar4 + 0x2c),*(undefined4 *)(iVar9 + 0xe8));
          iVar9 = *(int *)(iVar4 + 0x98);
          if (iVar9 == 0) {
            if (((*(int *)(iVar4 + 0x34) == 0) && ((*(byte *)(iVar4 + 0x84) & 0x40) == 0)) ||
               (*(int *)(iVar4 + 0x88) == 0)) {
              iVar9 = 1;
            }
            else {
              iVar9 = 2;
            }
          }
          func_0x00d3ca40(*(undefined4 *)(iVar4 + 0x2c),iVar9 == 2,*(undefined4 *)(iVar4 + 0xa0),
                          *(undefined4 *)(iVar4 + 0xa4));
          return iVar4;
        }
        pcVar11 = "create_channel";
        uVar6 = 0x5e8;
      }
      func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar6,pcVar11,0xc0103,0);
      func_0x00d003d0(iVar4);
      return 0;
    }
    uVar6 = 0x192;
    uVar8 = 0xc0103;
  }
  func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar6,"ossl_quic_new",uVar8,0);
  func_0x00bfa700((undefined4 *)(iVar4 + 0x30));
  FUN_00bbc580(iVar4,"ssl\\quic\\quic_impl.c",0x1cc);
  return 0;
}



void FUN_00d0f0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00d10640(param_1,param_2,param_3,param_4,1);
  return;
}



void FUN_00d0f0c0(undefined4 param_1)

{
  func_0x00d0f0d0(param_1,0);
  return;
}



void FUN_00d0f250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00d10640(param_1,param_2,param_3,param_4,0);
  return;
}



undefined4 FUN_00d0f270(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xd2;
    uVar3 = 0xc0102;
  }
  else {
    if ((*param_1 == 1) || (*param_1 == 2)) goto LAB_00d0f2b6;
    uVar1 = 0xe6;
    uVar3 = 0xc0103;
  }
  iVar2 = func_0x00d10580(0,"ssl\\quic\\quic_impl.c",uVar1,"expect_quic",uVar3,0);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00d0f2b6:
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\quic\\quic_impl.c",0x24e,"ossl_quic_reset");
  func_0x00bc5160(0x14,0x8010c,0);
  return 0;
}



void FUN_00d0f5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00d0f600(param_1,param_2,param_3,0,0,param_4);
  return;
}



undefined4 FUN_00d10240(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 0x84) & 0x80) == 0) {
    iVar1 = func_0x00d3bec0(*(undefined4 *)(iVar2 + 0x2c));
    if (iVar1 == 0) {
      iVar2 = func_0x00d3be30(*(undefined4 *)(iVar2 + 0x2c));
      if (iVar2 != 0) {
        iVar2 = func_0x00d3be70(*(undefined4 *)(*param_1 + 0x2c));
        if (iVar2 == 0) {
          iVar2 = func_0x00d01370(*(undefined4 *)(*param_1 + 0x20));
          if (((iVar2 != 4) && (iVar2 != 7)) && (iVar2 != 8)) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0xffffffff;
}



uint FUN_00d104c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 0x84) & 0x80) == 0) {
    iVar1 = func_0x00d3bec0(*(undefined4 *)(iVar2 + 0x2c));
    if (iVar1 == 0) {
      iVar1 = func_0x00d3be30(*(undefined4 *)(iVar2 + 0x2c));
      if (iVar1 != 0) {
        iVar2 = func_0x00d3be90(*(undefined4 *)(iVar2 + 0x2c),param_1[1]);
        return (uint)(iVar2 != 0);
      }
    }
  }
  return 0xffffffff;
}



uint FUN_00d10b40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  if ((((*(byte *)(iVar2 + 0x84) & 0x80) == 0) &&
      (iVar1 = func_0x00d3bec0(*(undefined4 *)(iVar2 + 0x2c)), iVar1 == 0)) &&
     (iVar2 = func_0x00d3be30(*(undefined4 *)(iVar2 + 0x2c)), iVar2 != 0)) {
    iVar2 = func_0x00d108d0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    return (uint)(*(int *)param_1[4] != 0);
  }
  func_0x00d10580(*param_1,"ssl\\quic\\quic_impl.c",0xaa7,"quic_read_again",0xcf,0);
  return 0xffffffff;
}



undefined4 FUN_00d10bd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00d3bec0(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = func_0x00d3bda0(*(undefined4 *)(param_1 + 0x2c));
  if (((*(byte *)(param_1 + 0x84) & 0x80) != 0) && (iVar1 = func_0x00d3fa20(uVar2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



void FUN_00d10c10(int param_1)

{
  func_0x00d3bec0(*(undefined4 *)(param_1 + 0x2c));
  return;
}



void FUN_00d10c20(int param_1)

{
  func_0x00d3bef0(*(undefined4 *)(param_1 + 0x2c));
  return;
}



uint FUN_00d10ce0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 0x84) & 0x80) == 0) {
    iVar1 = func_0x00d3bec0(*(undefined4 *)(iVar2 + 0x2c));
    if (iVar1 == 0) {
      iVar2 = func_0x00d3be30(*(undefined4 *)(iVar2 + 0x2c));
      if (iVar2 != 0) {
        uVar3 = func_0x00d3bda0(*(undefined4 *)(*param_1 + 0x2c),param_1[4],param_1[5]);
        iVar2 = func_0x00d3f910(uVar3);
        param_1[1] = iVar2;
        if (iVar2 == 0) {
          uVar3 = func_0x00d3bda0(*(undefined4 *)(*param_1 + 0x2c),param_1[4] | 2,param_1[5]);
          iVar2 = func_0x00d3f910(uVar3);
          param_1[1] = iVar2;
        }
        return (uint)(iVar2 != 0);
      }
    }
  }
  func_0x00d10580(param_1[2],"ssl\\quic\\quic_impl.c",0x72f,"quic_wait_for_stream",0xcf,0);
  return 0xffffffff;
}



uint FUN_00d10d90(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  int *in_stack_00000018;
  
  func_0x00e87f70();
  piVar2 = in_stack_00000018;
  in_stack_00000018 = (int *)0x0;
  iVar4 = *(int *)(*piVar2 + 0x20);
  if ((((*(byte *)(iVar4 + 0x84) & 0x80) == 0) &&
      (iVar3 = func_0x00d3bec0(*(undefined4 *)(iVar4 + 0x2c)), iVar3 == 0)) &&
     (iVar4 = func_0x00d3be30(*(undefined4 *)(iVar4 + 0x2c)), iVar4 != 0)) {
    iVar4 = func_0x00d10c30(*piVar2,piVar2 + 4);
    if (iVar4 != 0) {
      piVar2[4] = 0xc0103;
      iVar4 = func_0x00d112f0(*piVar2,piVar2[1],piVar2[2],&stack0x00000018);
      if (iVar4 != 0) {
        bVar7 = (int *)piVar2[2] == in_stack_00000018;
        uVar1 = piVar2[6];
        iVar4 = *piVar2;
        if (in_stack_00000018 != (int *)0x0) {
          uVar5 = func_0x00d3bda0(*(undefined4 *)(*(int *)(iVar4 + 0x20) + 0x2c),
                                  *(undefined4 *)(iVar4 + 0x24));
          func_0x00d3ff60(uVar5);
        }
        if ((bVar7) && ((uVar1 & 1) != 0)) {
          func_0x00d3e0a0(*(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x58));
        }
        piVar6 = piVar2 + 2;
        piVar2[1] = piVar2[1] + (int)in_stack_00000018;
        *piVar6 = *piVar6 - (int)in_stack_00000018;
        piVar2[3] = piVar2[3] + (int)in_stack_00000018;
        return (uint)(*piVar6 == 0);
      }
    }
  }
  return 0xfffffffe;
}



undefined4 FUN_00d11610(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint unaff_retaddr;
  undefined4 uVar7;
  
  func_0x00e87f70();
  piVar6 = param_4;
  param_4 = (int *)0x0;
  uVar5 = 0;
  puVar1 = (undefined4 *)*piVar6;
  iVar2 = piVar6[1];
  iVar3 = puVar1[0xe9];
  if (iVar3 == puVar1[0xe8]) {
    if (iVar3 == 0) {
      iVar3 = FUN_00bbc4f0(400,"ssl\\t1_lib.c",0xfa);
    }
    else {
      iVar3 = FUN_00bbc5a0(puVar1[0xe7],(iVar3 * 5 + 0x32) * 8,"ssl\\t1_lib.c",0xff);
    }
    if (iVar3 == 0) {
      return 0;
    }
    puVar1[0xe7] = iVar3;
    memset((void *)(iVar3 + puVar1[0xe9] * 0x28),0,400);
    puVar1[0xe9] = puVar1[0xe9] + 10;
  }
  piVar6 = (int *)(puVar1[0xe7] + puVar1[0xe8] * 0x28);
  iVar3 = func_0x00bc09d0(param_3,"tls-group-name");
  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 4)) {
    FUN_00bc4f50();
    uVar7 = 0x10d;
  }
  else {
    iVar3 = func_0x00bbbc70(*(undefined4 *)(iVar3 + 8),"ssl\\t1_lib.c",0x110);
    *piVar6 = iVar3;
    if (iVar3 == 0) goto LAB_00d119f1;
    iVar3 = func_0x00bc09d0(param_3,"tls-group-name-internal");
    if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 4)) {
      FUN_00bc4f50();
      uVar7 = 0x116;
    }
    else {
      iVar3 = func_0x00bbbc70(*(undefined4 *)(iVar3 + 8),"ssl\\t1_lib.c",0x119);
      piVar6[1] = iVar3;
      if (iVar3 == 0) goto LAB_00d119f1;
      iVar3 = func_0x00bc09d0(param_3,"tls-group-id");
      if (((iVar3 == 0) || (iVar3 = func_0x00bc0300(iVar3,&stack0x00000000), iVar3 == 0)) ||
         (0xffff < unaff_retaddr)) {
        FUN_00bc4f50();
        uVar7 = 0x11f;
      }
      else {
        *(short *)(piVar6 + 4) = (short)unaff_retaddr;
        iVar3 = func_0x00bc09d0(param_3,"tls-group-alg");
        if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 4)) {
          FUN_00bc4f50();
          uVar7 = 0x126;
        }
        else {
          iVar3 = func_0x00bbbc70(*(undefined4 *)(iVar3 + 8),"ssl\\t1_lib.c",0x129);
          piVar6[2] = iVar3;
          if (iVar3 == 0) goto LAB_00d119f1;
          iVar3 = func_0x00bc09d0(param_3,"tls-group-sec-bits");
          if ((iVar3 == 0) || (iVar3 = func_0x00bc0300(iVar3,piVar6 + 3), iVar3 == 0)) {
            FUN_00bc4f50();
            uVar7 = 0x12f;
          }
          else {
            iVar3 = func_0x00bc09d0(param_3,"tls-group-is-kem");
            if ((iVar3 == 0) ||
               ((iVar3 = func_0x00bc0300(iVar3,&param_4), iVar3 != 0 && (param_4 < 2)))) {
              *(byte *)(piVar6 + 9) = (byte)param_4 & 1;
              iVar3 = func_0x00bc09d0(param_3,"tls-min-tls");
              if ((iVar3 == 0) || (iVar3 = func_0x00bbfcd0(iVar3,piVar6 + 5), iVar3 == 0)) {
                FUN_00bc4f50();
                uVar7 = 0x13c;
              }
              else {
                iVar3 = func_0x00bc09d0(param_3,"tls-max-tls");
                if ((iVar3 == 0) || (iVar3 = func_0x00bbfcd0(iVar3,piVar6 + 6), iVar3 == 0)) {
                  FUN_00bc4f50();
                  uVar7 = 0x142;
                }
                else {
                  iVar3 = func_0x00bc09d0(param_3,"tls-min-dtls");
                  if ((iVar3 == 0) || (iVar3 = func_0x00bbfcd0(iVar3,piVar6 + 7), iVar3 == 0)) {
                    FUN_00bc4f50();
                    uVar7 = 0x148;
                  }
                  else {
                    iVar3 = func_0x00bc09d0(param_3,"tls-max-dtls");
                    if ((iVar3 != 0) && (iVar3 = func_0x00bbfcd0(iVar3,piVar6 + 8), iVar3 != 0)) {
                      uVar5 = 1;
                      FUN_00bcaeb0();
                      iVar3 = func_0x00c0ddb0(*puVar1,piVar6[2],puVar1[0xa1]);
                      if (iVar3 != 0) {
                        iVar4 = FUN_00baaa40(iVar3);
                        if (iVar4 == iVar2) {
                          puVar1[0xe8] = puVar1[0xe8] + 1;
                          piVar6 = (int *)0x0;
                        }
                        FUN_00c0dde0(iVar3);
                      }
                      func_0x00bcad80();
                      goto LAB_00d119f1;
                    }
                    FUN_00bc4f50();
                    uVar7 = 0x14e;
                  }
                }
              }
            }
            else {
              FUN_00bc4f50();
              uVar7 = 0x135;
            }
          }
        }
      }
    }
  }
  func_0x00bc5050("ssl\\t1_lib.c",uVar7,"add_provider_groups");
  func_0x00bc5160(0x14,0x80106,0);
LAB_00d119f1:
  if (piVar6 != (int *)0x0) {
    FUN_00bbc580(*piVar6,"ssl\\t1_lib.c",0x171);
    FUN_00bbc580(piVar6[1],"ssl\\t1_lib.c",0x172);
    FUN_00bbc580(piVar6[2],"ssl\\t1_lib.c",0x173);
    piVar6[1] = 0;
    *piVar6 = 0;
    piVar6[2] = 0;
  }
  return uVar5;
}



undefined4 FUN_00d11a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  func_0x00e87f70();
  piVar8 = param_4;
  param_4 = (int *)0x0;
  puVar1 = (undefined4 *)*piVar8;
  iVar5 = piVar8[1];
  iVar2 = puVar1[0xec];
  if (iVar2 == puVar1[0xeb]) {
    if (iVar2 == 0) {
      iVar2 = FUN_00bbc4f0(0x208,"ssl\\t1_lib.c",0x1b8);
    }
    else {
      iVar2 = FUN_00bbc5a0(puVar1[0xea],(iVar2 + 10) * 0x34,"ssl\\t1_lib.c",0x1bd);
    }
    if (iVar2 == 0) {
      return 0;
    }
    puVar1[0xea] = iVar2;
    memset((void *)(puVar1[0xec] * 0x34 + iVar2),0,0x208);
    puVar1[0xec] = puVar1[0xec] + 10;
  }
  piVar8 = (int *)(puVar1[0xeb] * 0x34 + puVar1[0xea]);
  iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-name");
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 4)) {
    FUN_00bc4f50();
    uVar7 = 0x1cb;
LAB_00d120ca:
    func_0x00bc5050("ssl\\t1_lib.c",uVar7,"add_provider_sigalgs");
    func_0x00bc5160(0x14,0x80106,0);
  }
  else {
    FUN_00bbc580(piVar8[2],"ssl\\t1_lib.c",0x1ce);
    iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x1cf);
    piVar8[2] = iVar2;
    if (iVar2 != 0) {
      iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-iana-name");
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 4)) {
        FUN_00bc4f50();
        uVar7 = 0x1d5;
      }
      else {
        FUN_00bbc580(*piVar8,"ssl\\t1_lib.c",0x1d8);
        iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x1d9);
        *piVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00d120e5;
        iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-code-point");
        if (iVar2 != 0) {
          iVar2 = func_0x00bc0300(iVar2,&param_4);
          if ((iVar2 != 0) && (param_4 < 0x10000)) {
            *(short *)(piVar8 + 1) = (short)param_4;
            iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-sec-bits");
            if (iVar2 != 0) {
              iVar2 = func_0x00bc0300(iVar2,piVar8 + 10);
              if (iVar2 != 0) {
                iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-oid");
                if (iVar2 == 0) {
                  piVar8[3] = 0;
LAB_00d11c69:
                  iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-sig-name");
                  if (iVar2 == 0) {
                    piVar8[4] = 0;
LAB_00d11cbe:
                    iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-sig-oid");
                    if (iVar2 == 0) {
                      piVar8[5] = 0;
LAB_00d11d13:
                      iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-hash-name");
                      if (iVar2 == 0) {
                        piVar8[6] = 0;
LAB_00d11d68:
                        iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-hash-oid");
                        if (iVar2 == 0) {
                          piVar8[7] = 0;
LAB_00d11dbd:
                          iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-keytype");
                          if (iVar2 == 0) {
                            piVar8[8] = 0;
LAB_00d11e12:
                            iVar2 = func_0x00bc09d0(param_3,"tls-sigalg-keytype-oid");
                            if (iVar2 == 0) {
                              piVar8[9] = 0;
LAB_00d11e67:
                              iVar2 = func_0x00bc09d0(param_3,"tls-min-tls");
                              if (iVar2 != 0) {
                                iVar2 = func_0x00bbfcd0(iVar2,piVar8 + 0xb);
                                if (iVar2 != 0) {
                                  iVar2 = piVar8[0xb];
                                  if (((iVar2 != 0) && (iVar2 != -1)) && (iVar2 < 0x304)) {
                                    uVar7 = 1;
                                    goto LAB_00d120e7;
                                  }
                                  iVar2 = func_0x00bc09d0(param_3,"tls-max-tls");
                                  if (iVar2 != 0) {
                                    iVar2 = func_0x00bbfcd0(iVar2,piVar8 + 0xc);
                                    if (iVar2 != 0) {
                                      iVar2 = piVar8[0xc];
                                      if ((iVar2 != 0) && (iVar2 != -1)) {
                                        if (iVar2 < piVar8[0xb]) {
                                          FUN_00bc4f50();
                                          uVar7 = 599;
                                          goto LAB_00d120ca;
                                        }
                                        if (iVar2 < 0x304) {
                                          uVar7 = 1;
                                          goto LAB_00d120e7;
                                        }
                                      }
                                      FUN_00bcaeb0();
                                      iVar2 = piVar8[8];
                                      if ((iVar2 == 0) && (iVar2 = piVar8[4], iVar2 == 0)) {
                                        iVar2 = piVar8[2];
                                      }
                                      iVar3 = func_0x00c0ddb0(*puVar1,iVar2,puVar1[0xa1]);
                                      if (iVar3 != 0) {
                                        iVar4 = FUN_00baaa40(iVar3);
                                        if (iVar4 == iVar5) {
                                          func_0x00bc22f0(piVar8[3],piVar8[2],0);
                                          iVar5 = func_0x00bc2c10(piVar8[2]);
                                          if (iVar5 != 0) {
                                            uVar7 = func_0x00bc2c10(piVar8[2]);
                                            iVar5 = func_0x00bc2660(uVar7);
                                            if (iVar5 != 0) {
                                              if (piVar8[4] != 0) {
                                                func_0x00bc22f0(piVar8[5],piVar8[4],0);
                                              }
                                              if (piVar8[8] != 0) {
                                                func_0x00bc22f0(piVar8[9],piVar8[8],0);
                                              }
                                              if (piVar8[6] != 0) {
                                                func_0x00bc22f0(piVar8[7],piVar8[6],0);
                                              }
                                              if (piVar8[6] == 0) {
                                                uVar7 = 0;
                                              }
                                              else {
                                                uVar7 = func_0x00bc2c10(piVar8[6]);
                                              }
                                              iVar5 = piVar8[2];
                                              uVar6 = func_0x00bc2c10(iVar2);
                                              uVar7 = func_0x00bc2c10(iVar5,uVar7,uVar6);
                                              func_0x00c04060(uVar7);
                                              puVar1[0xeb] = puVar1[0xeb] + 1;
                                              piVar8 = (int *)0x0;
                                              goto LAB_00d1201c;
                                            }
                                          }
                                          FUN_00bc4f50();
                                          func_0x00bc5050("ssl\\t1_lib.c",0x288,
                                                          "add_provider_sigalgs");
                                          func_0x00bc5160(0x14,0x80106,0);
                                          uVar7 = 1;
                                          goto LAB_00d120e7;
                                        }
LAB_00d1201c:
                                        FUN_00c0dde0(iVar3);
                                      }
                                      func_0x00bcad80();
                                      uVar7 = 1;
                                      goto LAB_00d120e7;
                                    }
                                  }
                                  FUN_00bc4f50();
                                  uVar7 = 0x252;
                                  goto LAB_00d120ca;
                                }
                              }
                              FUN_00bc4f50();
                              uVar7 = 0x246;
                              goto LAB_00d120ca;
                            }
                            if (*(int *)(iVar2 + 4) == 4) {
                              FUN_00bbc580(piVar8[9],"ssl\\t1_lib.c",0x23d);
                              iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",
                                                      0x23e);
                              piVar8[9] = iVar2;
                              if (iVar2 != 0) goto LAB_00d11e67;
                            }
                          }
                          else if (*(int *)(iVar2 + 4) == 4) {
                            FUN_00bbc580(piVar8[8],"ssl\\t1_lib.c",0x231);
                            iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x232
                                                   );
                            piVar8[8] = iVar2;
                            if (iVar2 != 0) goto LAB_00d11e12;
                          }
                        }
                        else if (*(int *)(iVar2 + 4) == 4) {
                          FUN_00bbc580(piVar8[7],"ssl\\t1_lib.c",0x225);
                          iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x226);
                          piVar8[7] = iVar2;
                          if (iVar2 != 0) goto LAB_00d11dbd;
                        }
                      }
                      else if (*(int *)(iVar2 + 4) == 4) {
                        FUN_00bbc580(piVar8[6],"ssl\\t1_lib.c",0x219);
                        iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x21a);
                        piVar8[6] = iVar2;
                        if (iVar2 != 0) goto LAB_00d11d68;
                      }
                    }
                    else if (*(int *)(iVar2 + 4) == 4) {
                      FUN_00bbc580(piVar8[5],"ssl\\t1_lib.c",0x20d);
                      iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x20e);
                      piVar8[5] = iVar2;
                      if (iVar2 != 0) goto LAB_00d11d13;
                    }
                  }
                  else if (*(int *)(iVar2 + 4) == 4) {
                    FUN_00bbc580(piVar8[4],"ssl\\t1_lib.c",0x201);
                    iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x202);
                    piVar8[4] = iVar2;
                    if (iVar2 != 0) goto LAB_00d11cbe;
                  }
                }
                else if (*(int *)(iVar2 + 4) == 4) {
                  FUN_00bbc580(piVar8[3],"ssl\\t1_lib.c",0x1f5);
                  iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),"ssl\\t1_lib.c",0x1f6);
                  piVar8[3] = iVar2;
                  if (iVar2 != 0) goto LAB_00d11c69;
                }
                goto LAB_00d120e5;
              }
            }
            FUN_00bc4f50();
            uVar7 = 0x1ea;
            goto LAB_00d120ca;
          }
        }
        FUN_00bc4f50();
        uVar7 = 0x1e2;
      }
      goto LAB_00d120ca;
    }
  }
LAB_00d120e5:
  uVar7 = 0;
LAB_00d120e7:
  if (piVar8 != (int *)0x0) {
    FUN_00bbc580(*piVar8,"ssl\\t1_lib.c",0x29e);
    *piVar8 = 0;
    FUN_00bbc580(piVar8[2],"ssl\\t1_lib.c",0x2a0);
    piVar8[2] = 0;
    FUN_00bbc580(piVar8[3],"ssl\\t1_lib.c",0x2a2);
    piVar8[3] = 0;
    FUN_00bbc580(piVar8[4],"ssl\\t1_lib.c",0x2a4);
    piVar8[4] = 0;
    FUN_00bbc580(piVar8[5],"ssl\\t1_lib.c",0x2a6);
    piVar8[5] = 0;
    FUN_00bbc580(piVar8[6],"ssl\\t1_lib.c",0x2a8);
    piVar8[6] = 0;
    FUN_00bbc580(piVar8[7],"ssl\\t1_lib.c",0x2aa);
    piVar8[7] = 0;
    FUN_00bbc580(piVar8[8],"ssl\\t1_lib.c",0x2ac);
    piVar8[8] = 0;
    FUN_00bbc580(piVar8[9],"ssl\\t1_lib.c",0x2ae);
    piVar8[9] = 0;
  }
  return uVar7;
}



void FUN_00d122d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00e87f70();
  func_0x00c01890(param_3,"TLS-GROUP",FUN_00d11610,&stack0x00000000);
  return;
}



undefined4 FUN_00d12310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00e87f70();
  func_0x00c01890(param_3,"TLS-SIGALG",FUN_00d11a50,&stack0x00000000);
  return 1;
}



void FUN_00d12760(void)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  short *psVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *_Src;
  uint uVar13;
  bool bVar14;
  uint in_stack_00000048;
  char *in_stack_00000050;
  uint in_stack_00000054;
  int *in_stack_00000058;
  
  func_0x00e87f70();
  piVar5 = in_stack_00000058;
  in_stack_00000048 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000050 != (char *)0x0) {
    _Src = in_stack_00000050 + 1;
    if (*in_stack_00000050 != '?') {
      _Src = in_stack_00000050;
    }
    uVar11 = in_stack_00000054 - 1;
    if (*in_stack_00000050 != '?') {
      uVar11 = in_stack_00000054;
    }
    if (in_stack_00000058[1] == in_stack_00000058[2]) {
      iVar6 = FUN_00bbc5a0(in_stack_00000058[3],in_stack_00000058[2] * 2 + 0x50,"ssl\\t1_lib.c",
                           0x424);
      if (iVar6 == 0) goto LAB_00d128ef;
      piVar5[2] = piVar5[2] + 0x28;
      piVar5[3] = iVar6;
    }
    if ((int)uVar11 < 0x40) {
      memcpy(&stack0x00000008,_Src,uVar11);
      if (0x3f < uVar11) {
        func_0x008ab9e3();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *piVar5;
      uVar13 = 0;
      (&stack0x00000008)[uVar11] = 0;
      uVar11 = *(uint *)(iVar6 + 0x3a0);
      if (uVar11 != 0) {
        puVar3 = *(undefined4 **)(iVar6 + 0x39c);
        puVar12 = puVar3;
        do {
          pbVar7 = (byte *)*puVar12;
          pbVar10 = &stack0x00000008;
          do {
            bVar1 = *pbVar7;
            bVar14 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00d12846:
              uVar8 = -(uint)bVar14 | 1;
              goto LAB_00d1284b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar14 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00d12846;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          uVar8 = 0;
LAB_00d1284b:
          if (uVar8 == 0) {
LAB_00d1289e:
            sVar2 = *(short *)(puVar3 + uVar13 * 10 + 4);
            if (sVar2 != 0) {
              uVar11 = piVar5[1];
              uVar13 = 0;
              if (uVar11 == 0) goto LAB_00d128cd;
              psVar9 = (short *)piVar5[3];
              goto LAB_00d128c0;
            }
            break;
          }
          pbVar7 = (byte *)puVar12[1];
          pbVar10 = &stack0x00000008;
          do {
            bVar1 = *pbVar7;
            bVar14 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00d12876:
              uVar8 = -(uint)bVar14 | 1;
              goto LAB_00d1287b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar14 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00d12876;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          uVar8 = 0;
LAB_00d1287b:
          if (uVar8 == 0) goto LAB_00d1289e;
          uVar13 = uVar13 + 1;
          puVar12 = puVar12 + 10;
        } while (uVar13 < uVar11);
      }
      FUN_008ab370();
      return;
    }
  }
LAB_00d128ef:
  FUN_008ab370();
  return;
  while( true ) {
    uVar13 = uVar13 + 1;
    psVar9 = psVar9 + 1;
    if (uVar11 <= uVar13) break;
LAB_00d128c0:
    if (*psVar9 == sVar2) goto LAB_00d128d7;
  }
LAB_00d128cd:
  *(short *)(piVar5[3] + uVar11 * 2) = sVar2;
  piVar5[1] = piVar5[1] + 1;
LAB_00d128d7:
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00d12ae8)
// WARNING: Removing unreachable block (ram,0x00d12af0)
// WARNING: Removing unreachable block (ram,0x00d12af5)
// WARNING: Removing unreachable block (ram,0x00d12b05)
// WARNING: Removing unreachable block (ram,0x00d12afa)
// WARNING: Removing unreachable block (ram,0x00d12b03)
// WARNING: Removing unreachable block (ram,0x00d12b12)

void FUN_00d12910(undefined4 param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  uint *puVar4;
  char *_Src;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined **ppuVar13;
  bool bVar14;
  uint in_stack_00000034;
  char *in_stack_0000003c;
  uint in_stack_00000040;
  uint *in_stack_00000044;
  
  func_0x00e87f70();
  puVar4 = in_stack_00000044;
  in_stack_00000034 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uVar12 = 0;
  param_1 = 0;
  if (in_stack_0000003c != (char *)0x0) {
    cVar1 = *in_stack_0000003c;
    uVar8 = in_stack_00000040 - 1;
    if (cVar1 != '?') {
      uVar8 = in_stack_00000040;
    }
    param_2 = (uint)(cVar1 == '?');
    if ((*in_stack_00000044 != 0x3e) && ((int)uVar8 < 0x28)) {
      _Src = in_stack_0000003c + 1;
      if (cVar1 != '?') {
        _Src = in_stack_0000003c;
      }
      memcpy(&stack0x0000000c,_Src,uVar8);
      if (0x27 < uVar8) {
        func_0x008ab9e3();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (&stack0x0000000c)[uVar8] = 0;
      puVar5 = (undefined1 *)func_0x008ab0c6(&stack0x0000000c,0x2b);
      if (puVar5 == (undefined1 *)0x0) {
        uVar8 = puVar4[0x20];
        if ((uVar8 != 0) && (*(uint *)(uVar8 + 0x3ac) != 0)) {
          puVar11 = (undefined4 *)(*(int *)(uVar8 + 0x3a8) + 8);
          do {
            pbVar6 = (byte *)*puVar11;
            if (pbVar6 != (byte *)0x0) {
              pbVar10 = &stack0x0000000c;
              do {
                bVar2 = *pbVar10;
                bVar14 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00d12a00:
                  uVar7 = -(uint)bVar14 | 1;
                  goto LAB_00d12a05;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar10[1];
                bVar14 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00d12a00;
                pbVar10 = pbVar10 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
LAB_00d12a05:
              if (uVar7 == 0) {
                *(undefined2 *)((int)puVar4 + *puVar4 * 2 + 4) =
                     *(undefined2 *)(uVar12 * 0x34 + 4 + *(int *)(uVar8 + 0x3a8));
                *puVar4 = *puVar4 + 1;
                break;
              }
            }
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 0xd;
          } while (uVar12 < *(uint *)(uVar8 + 0x3ac));
        }
        if ((puVar4[0x20] == 0) || (uVar12 == *(uint *)(puVar4[0x20] + 0x3ac))) {
          uVar12 = 0;
          ppuVar13 = &PTR_s_ecdsa_secp256r1_sha256_010bd728;
          do {
            pbVar6 = *ppuVar13;
            if (pbVar6 != (byte *)0x0) {
              pbVar10 = &stack0x0000000c;
              do {
                bVar2 = *pbVar10;
                bVar14 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00d12a70:
                  uVar8 = -(uint)bVar14 | 1;
                  goto LAB_00d12a75;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar10[1];
                bVar14 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00d12a70;
                pbVar10 = pbVar10 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              uVar8 = 0;
LAB_00d12a75:
              if (uVar8 == 0) {
                *(undefined2 *)((int)puVar4 + *puVar4 * 2 + 4) = *(undefined2 *)(ppuVar13 + 1);
                *puVar4 = *puVar4 + 1;
                break;
              }
            }
            uVar12 = uVar12 + 1;
            ppuVar13 = ppuVar13 + 9;
          } while (uVar12 < 0x1f);
          if (uVar12 == 0x1f) goto LAB_00d12b65;
        }
        uVar12 = 0;
        uVar8 = *puVar4 - 1;
        if (uVar8 != 0) {
          puVar9 = puVar4 + 1;
          while ((short)*puVar9 != *(short *)((int)puVar4 + uVar8 * 2 + 4)) {
            uVar12 = uVar12 + 1;
            puVar9 = (uint *)((int)puVar9 + 2);
            if (uVar8 <= uVar12) {
              FUN_008ab370();
              return;
            }
          }
          *puVar4 = uVar8;
        }
        FUN_008ab370();
        return;
      }
      *puVar5 = 0;
      if (puVar5[1] != '\0') {
        func_0x00d12600(&param_1,&stack0x00000000,&stack0x0000000c);
        func_0x00d12600(&param_1,&stack0x00000000,puVar5 + 1);
LAB_00d12b65:
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d15040(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (int *)0x0) &&
     (((piVar2 = param_1, *param_1 == 0 ||
       ((*param_1 == 1 && (piVar2 = (int *)param_1[8], (int *)param_1[8] != (int *)0x0)))) &&
      (iVar1 = func_0x00d257b0(param_1), iVar1 != 0)))) {
    iVar1 = *(int *)param_1[3];
    if (iVar1 == 0x10000) {
      iVar1 = 0x304;
    }
    piVar2[8] = iVar1;
    return 1;
  }
  return 0;
}



