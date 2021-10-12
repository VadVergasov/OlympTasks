	.file	"condition.cpp"
	.text
	.section	.text$_ZnwyPv,"x"
	.linkonce discard
	.globl	_ZnwyPv
	.def	_ZnwyPv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZnwyPv
_ZnwyPv:
.LFB90:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZdlPvS_,"x"
	.linkonce discard
	.globl	_ZdlPvS_
	.def	_ZdlPvS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZdlPvS_
_ZdlPvS_:
.LFB92:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
.lcomm _ZStL8__ioinit,1,1
	.section .rdata,"dr"
	.align 4
_ZL1N:
	.long	100
	.text
	.globl	_Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE
	.def	_Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE
_Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE:
.LFB2450:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$80, %rsp
	.seh_stackalloc	80
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movl	$0, -8(%rbp)
.L11:
	cmpl	$99, -8(%rbp)
	jg	.L5
	movzbl	-1(%rbp), %eax
	xorl	$1, %eax
	testb	%al, %al
	jne	.L5
	movl	$0, -12(%rbp)
.L10:
	cmpl	$99, -12(%rbp)
	jg	.L6
	movzbl	-1(%rbp), %eax
	xorl	$1, %eax
	testb	%al, %al
	jne	.L6
	movl	$0, -16(%rbp)
.L9:
	cmpl	$99, -16(%rbp)
	jg	.L7
	movzbl	-1(%rbp), %eax
	xorl	$1, %eax
	testb	%al, %al
	jne	.L7
	movl	-8(%rbp), %eax
	cltq
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEixEy
	movq	%rax, %rcx
	movl	-12(%rbp), %eax
	cltq
	movq	%rax, %rdx
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEy
	movq	%rax, %rcx
	movl	-16(%rbp), %eax
	cltq
	movq	%rax, %rdx
	call	_ZNSt6vectorIiSaIiEEixEy
	movl	(%rax), %eax
	cmpl	%eax, 24(%rbp)
	sete	%al
	testb	%al, %al
	je	.L8
	movl	-8(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -40(%rbp)
	movb	$0, -1(%rbp)
.L8:
	addl	$1, -16(%rbp)
	jmp	.L9
.L7:
	addl	$1, -12(%rbp)
	jmp	.L10
.L6:
	addl	$1, -8(%rbp)
	jmp	.L11
.L5:
	leaq	-40(%rbp), %r8
	leaq	-36(%rbp), %rcx
	leaq	-32(%rbp), %rdx
	leaq	-28(%rbp), %rax
	movq	%r8, %r9
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt5tupleIJiiiEEC1IJRiS2_S2_ELb1EEEDpOT_
	leaq	-28(%rbp), %rdx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt5tupleIJiiiEEaSEOS0_
	nop
	addq	$80, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2456:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$312, %rsp
	.seh_stackalloc	312
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	movl	$0, %ecx
	call	time
	movl	%eax, %ecx
	call	srand
	movl	$0, %ecx
.LEHB0:
	call	_ZNSt8ios_base15sync_with_stdioEb
	movl	$0, %edx
	movq	.refptr._ZSt3cin(%rip), %rax
	leaq	16(%rax), %rcx
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo
	movl	$0, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	leaq	8(%rax), %rcx
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo
.LEHE0:
	leaq	47(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC1Ev
	leaq	79(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIiSaIiEEEC1Ev
	leaq	111(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIiEC1Ev
	leaq	111(%rbp), %rdx
	leaq	80(%rbp), %rax
	movq	%rdx, %r8
	movl	$100, %edx
	movq	%rax, %rcx
.LEHB1:
	call	_ZNSt6vectorIiSaIiEEC1EyRKS0_
.LEHE1:
	leaq	79(%rbp), %rcx
	leaq	80(%rbp), %rdx
	leaq	48(%rbp), %rax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movl	$100, %edx
	movq	%rax, %rcx
.LEHB2:
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_
.LEHE2:
	leaq	47(%rbp), %rcx
	leaq	48(%rbp), %rdx
	leaq	16(%rbp), %rax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movl	$100, %edx
	movq	%rax, %rcx
.LEHB3:
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_
.LEHE3:
	leaq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	leaq	80(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEED1Ev
	leaq	111(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIiED1Ev
	leaq	79(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIiSaIiEEED1Ev
	leaq	47(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEEC1Ev
	leaq	16(%rbp), %rax
	movq	%rax, 168(%rbp)
	movq	168(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE5beginEv
	movq	%rax, -40(%rbp)
	movq	168(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE3endEv
	movq	%rax, -48(%rbp)
.L19:
	leaq	-48(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_
	testb	%al, %al
	je	.L13
	leaq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEdeEv
	movq	%rax, 144(%rbp)
	movq	144(%rbp), %rax
	movq	%rax, 136(%rbp)
	movq	136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EE5beginEv
	movq	%rax, -56(%rbp)
	movq	136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EE3endEv
	movq	%rax, -64(%rbp)
.L18:
	leaq	-64(%rbp), %rdx
	leaq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_
	testb	%al, %al
	je	.L14
	leaq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv
	movq	%rax, 128(%rbp)
	movq	128(%rbp), %rax
	movq	%rax, 120(%rbp)
	movq	120(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEE5beginEv
	movq	%rax, -72(%rbp)
	movq	120(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEE3endEv
	movq	%rax, -80(%rbp)
.L17:
	leaq	-80(%rbp), %rdx
	leaq	-72(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	testb	%al, %al
	je	.L15
	leaq	-72(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
	movq	%rax, 112(%rbp)
	call	rand
	movl	%eax, %ecx
	movl	$1125899907, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$18, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$1000000, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movq	112(%rbp), %rdx
	movl	%eax, (%rdx)
	call	rand
	andl	$1, %eax
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	.L16
	movq	112(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
.LEHB4:
	call	_ZNSt6vectorIiSaIiEE9push_backERKi
.L16:
	leaq	-72(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
	jmp	.L17
.L15:
	leaq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv
	jmp	.L18
.L14:
	leaq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEppEv
	jmp	.L19
.L13:
	movl	$0, -28(%rbp)
	movl	$0, -24(%rbp)
	movl	$0, -20(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, 160(%rbp)
	movq	160(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEE5beginEv
	movq	%rax, -88(%rbp)
	movq	160(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEE3endEv
	movq	%rax, -96(%rbp)
.L21:
	leaq	-96(%rbp), %rdx
	leaq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	testb	%al, %al
	je	.L20
	leaq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
	movl	(%rax), %eax
	movl	%eax, 156(%rbp)
	leaq	-28(%rbp), %rcx
	movl	156(%rbp), %edx
	leaq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE
.LEHE4:
	leaq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
	jmp	.L21
.L20:
	movl	$0, %ebx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEED1Ev
	leaq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev
	movl	%ebx, %eax
	jmp	.L31
.L29:
	movq	%rax, %rbx
	leaq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	jmp	.L24
.L28:
	movq	%rax, %rbx
.L24:
	leaq	80(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEED1Ev
	jmp	.L25
.L27:
	movq	%rax, %rbx
.L25:
	leaq	111(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIiED1Ev
	leaq	79(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIiSaIiEEED1Ev
	leaq	47(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB5:
	call	_Unwind_Resume
.L30:
	movq	%rax, %rbx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIiSaIiEED1Ev
	leaq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
.LEHE5:
.L31:
	addq	$312, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2456:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2456-.LLSDACSB2456
.LLSDACSB2456:
	.uleb128 .LEHB0-.LFB2456
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB2456
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L27-.LFB2456
	.uleb128 0
	.uleb128 .LEHB2-.LFB2456
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L28-.LFB2456
	.uleb128 0
	.uleb128 .LEHB3-.LFB2456
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L29-.LFB2456
	.uleb128 0
	.uleb128 .LEHB4-.LFB2456
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L30-.LFB2456
	.uleb128 0
	.uleb128 .LEHB5-.LFB2456
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE2456:
	.text
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEixEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEixEy
	.def	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEixEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEixEy
_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEixEy:
.LFB2738:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rcx
	movq	24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEy
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEy
_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEy:
.LFB2739:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rcx
	movq	24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEEixEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEEixEy
	.def	_ZNSt6vectorIiSaIiEEixEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEEixEy
_ZNSt6vectorIiSaIiEEixEy:
.LFB2740:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	24(%rbp), %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5tupleIJiiiEEC1IJRiS2_S2_ELb1EEEDpOT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5tupleIJiiiEEC1IJRiS2_S2_ELb1EEEDpOT_
	.def	_ZNSt5tupleIJiiiEEC1IJRiS2_S2_ELb1EEEDpOT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5tupleIJiiiEEC1IJRiS2_S2_ELb1EEEDpOT_
_ZNSt5tupleIJiiiEEC1IJRiS2_S2_ELb1EEEDpOT_:
.LFB2743:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -24(%rbp)
	movq	-48(%rbp), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdi
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rsi
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rdi, %r9
	movq	%rsi, %r8
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt11_Tuple_implILy0EJiiiEEC2IRiJS2_S2_EvEEOT_DpOT0_
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt5tupleIJiiiEEaSEOS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt5tupleIJiiiEEaSEOS0_
	.def	_ZNSt5tupleIJiiiEEaSEOS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt5tupleIJiiiEEaSEOS0_
_ZNSt5tupleIJiiiEEaSEOS0_:
.LFB2744:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt4moveIRSt5tupleIJiiiEEEONSt16remove_referenceIT_E4typeEOS4_
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy0EJiiiEEaSEOS0_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIiEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIiEC2Ev
	.def	_ZNSaIiEC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIiEC2Ev
_ZNSaIiEC2Ev:
.LFB2747:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiEC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIiEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIiEC1Ev
	.def	_ZNSaIiEC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIiEC1Ev
_ZNSaIiEC1Ev:
.LFB2748:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiEC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIiED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIiED2Ev
	.def	_ZNSaIiED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIiED2Ev
_ZNSaIiED2Ev:
.LFB2750:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIiED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIiED1Ev
	.def	_ZNSaIiED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIiED1Ev
_ZNSaIiED1Ev:
.LFB2751:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEEC1EyRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEEC1EyRKS0_
	.def	_ZNSt6vectorIiSaIiEEC1EyRKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEEC1EyRKS0_
_ZNSt6vectorIiSaIiEEC1EyRKS0_:
.LFB2754:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-64(%rbp), %rax
	movq	-48(%rbp), %rcx
	movq	-56(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB6:
	call	_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_
.LEHE6:
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB7:
	call	_ZNSt6vectorIiSaIiEE21_M_default_initializeEy
.LEHE7:
	jmp	.L48
.L47:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEED2Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB8:
	call	_Unwind_Resume
	nop
.LEHE8:
.L48:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2754:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2754-.LLSDACSB2754
.LLSDACSB2754:
	.uleb128 .LEHB6-.LFB2754
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB2754
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L47-.LFB2754
	.uleb128 0
	.uleb128 .LEHB8-.LFB2754
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE2754:
	.section	.text$_ZNSt6vectorIiSaIiEEC1EyRKS0_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEED1Ev
	.def	_ZNSt6vectorIiSaIiEED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEED1Ev
_ZNSt6vectorIiSaIiEED1Ev:
.LFB2757:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2757:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2757-.LLSDACSB2757
.LLSDACSB2757:
.LLSDACSE2757:
	.section	.text$_ZNSt6vectorIiSaIiEED1Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIiSaIiEEEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIiSaIiEEEC1Ev
	.def	_ZNSaISt6vectorIiSaIiEEEC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIiSaIiEEEC1Ev
_ZNSaISt6vectorIiSaIiEEEC1Ev:
.LFB2760:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIiSaIiEEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIiSaIiEEED2Ev
	.def	_ZNSaISt6vectorIiSaIiEEED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIiSaIiEEED2Ev
_ZNSaISt6vectorIiSaIiEEED2Ev:
.LFB2762:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIiSaIiEEED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIiSaIiEEED1Ev
	.def	_ZNSaISt6vectorIiSaIiEEED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIiSaIiEEED1Ev
_ZNSaISt6vectorIiSaIiEEED1Ev:
.LFB2763:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_
_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_:
.LFB2766:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	%r9, -40(%rbp)
	movq	-64(%rbp), %rax
	movq	-40(%rbp), %rcx
	movq	-56(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB9:
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_
.LEHE9:
	movq	-48(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB10:
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EE18_M_fill_initializeEyRKS1_
.LEHE10:
	jmp	.L56
.L55:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB11:
	call	_Unwind_Resume
	nop
.LEHE11:
.L56:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2766:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2766-.LLSDACSB2766
.LLSDACSB2766:
	.uleb128 .LEHB9-.LFB2766
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB10-.LFB2766
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L55-.LFB2766
	.uleb128 0
	.uleb128 .LEHB11-.LFB2766
	.uleb128 .LEHE11-.LEHB11
	.uleb128 0
	.uleb128 0
.LLSDACSE2766:
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1EyRKS1_RKS2_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev:
.LFB2769:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt8_DestroyIPSt6vectorIiSaIiEES2_EvT_S4_RSaIT0_E
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2769:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2769-.LLSDACSB2769
.LLSDACSB2769:
.LLSDACSE2769:
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC1Ev
	.def	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC1Ev
_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC1Ev:
.LFB2772:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED2Ev
	.def	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED2Ev
_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED2Ev:
.LFB2774:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev
	.def	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev
_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED1Ev:
.LFB2775:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_
	.def	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_
_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_:
.LFB2778:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	%r9, -40(%rbp)
	movq	-64(%rbp), %rax
	movq	-40(%rbp), %rcx
	movq	-56(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB12:
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_
.LEHE12:
	movq	-48(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB13:
	call	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE18_M_fill_initializeEyRKS3_
.LEHE13:
	jmp	.L64
.L63:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB14:
	call	_Unwind_Resume
	nop
.LEHE14:
.L64:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2778:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2778-.LLSDACSB2778
.LLSDACSB2778:
	.uleb128 .LEHB12-.LFB2778
	.uleb128 .LEHE12-.LEHB12
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB13-.LFB2778
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L63-.LFB2778
	.uleb128 0
	.uleb128 .LEHB14-.LFB2778
	.uleb128 .LEHE14-.LEHB14
	.uleb128 0
	.uleb128 0
.LLSDACSE2778:
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEC1EyRKS3_RKS4_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev
	.def	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev
_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev:
.LFB2781:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EES4_EvT_S6_RSaIT0_E
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2781:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2781-.LLSDACSB2781
.LLSDACSB2781:
.LLSDACSE2781:
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EED1Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEEC1Ev
	.def	_ZNSt6vectorIiSaIiEEC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEEC1Ev
_ZNSt6vectorIiSaIiEEC1Ev:
.LFB2784:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEEC2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2784:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2784-.LLSDACSB2784
.LLSDACSB2784:
.LLSDACSE2784:
	.section	.text$_ZNSt6vectorIiSaIiEEC1Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE5beginEv
	.def	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE5beginEv
_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE5beginEv:
.LFB2785:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE3endEv
	.def	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE3endEv
_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE3endEv:
.LFB2786:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	leaq	8(%rax), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxxneIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxxneIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_
	.def	_ZN9__gnu_cxxneIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxxneIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_
_ZN9__gnu_cxxneIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_:
.LFB2787:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv
	movq	(%rax), %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEppEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEppEv
	.def	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEppEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEppEv
_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEppEv:
.LFB2788:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	leaq	24(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEdeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEdeEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEdeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEdeEv
_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEdeEv:
.LFB2789:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EE5beginEv
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EE5beginEv
_ZNSt6vectorIS_IiSaIiEESaIS1_EE5beginEv:
.LFB2790:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EE3endEv
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EE3endEv
_ZNSt6vectorIS_IiSaIiEESaIS1_EE3endEv:
.LFB2791:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	leaq	8(%rax), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxxneIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxxneIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_
	.def	_ZN9__gnu_cxxneIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxxneIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_
_ZN9__gnu_cxxneIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_:
.LFB2792:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
	movq	(%rax), %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv
	.def	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv
_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv:
.LFB2793:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	leaq	24(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv
_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv:
.LFB2794:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEE5beginEv
	.def	_ZNSt6vectorIiSaIiEE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEE5beginEv
_ZNSt6vectorIiSaIiEE5beginEv:
.LFB2795:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEE3endEv
	.def	_ZNSt6vectorIiSaIiEE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEE3endEv
_ZNSt6vectorIiSaIiEE3endEv:
.LFB2796:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	leaq	8(%rax), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
	.def	_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_
_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_:
.LFB2797:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
	.def	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv:
.LFB2798:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	leaq	4(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv:
.LFB2799:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEE9push_backERKi,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEE9push_backERKi
	.def	_ZNSt6vectorIiSaIiEE9push_backERKi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEE9push_backERKi
_ZNSt6vectorIiSaIiEE9push_backERKi:
.LFB2800:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	je	.L98
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	24(%rbp), %rcx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	leaq	4(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L100
.L98:
	movq	16(%rbp), %rcx
	call	_ZNSt6vectorIiSaIiEE3endEv
	movq	%rax, %rdx
	movq	24(%rbp), %rax
	movq	%rax, %r8
	movq	16(%rbp), %rcx
	call	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
.L100:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE,"x"
	.linkonce discard
	.globl	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	.def	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE:
.LFB2874:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy0EJiiiEEC2IRiJS2_S2_EvEEOT_DpOT0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt11_Tuple_implILy0EJiiiEEC2IRiJS2_S2_EvEEOT_DpOT0_
	.def	_ZNSt11_Tuple_implILy0EJiiiEEC2IRiJS2_S2_EvEEOT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy0EJiiiEEC2IRiJS2_S2_EvEEOT_DpOT0_
_ZNSt11_Tuple_implILy0EJiiiEEC2IRiJS2_S2_EvEEOT_DpOT0_:
.LFB2876:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	movq	32(%rbp), %rbx
	movq	56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rsi
	movq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rsi, %r8
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt11_Tuple_implILy1EJiiEEC2IRiJS2_EvEEOT_DpOT0_
	movq	32(%rbp), %rax
	leaq	8(%rax), %rbx
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt10_Head_baseILy0EiLb0EEC2IRiEEOT_
	nop
	addq	$32, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt4moveIRSt5tupleIJiiiEEEONSt16remove_referenceIT_E4typeEOS4_,"x"
	.linkonce discard
	.globl	_ZSt4moveIRSt5tupleIJiiiEEEONSt16remove_referenceIT_E4typeEOS4_
	.def	_ZSt4moveIRSt5tupleIJiiiEEEONSt16remove_referenceIT_E4typeEOS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt4moveIRSt5tupleIJiiiEEEONSt16remove_referenceIT_E4typeEOS4_
_ZSt4moveIRSt5tupleIJiiiEEEONSt16remove_referenceIT_E4typeEOS4_:
.LFB2878:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy0EJiiiEEaSEOS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt11_Tuple_implILy0EJiiiEEaSEOS0_
	.def	_ZNSt11_Tuple_implILy0EJiiiEEaSEOS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy0EJiiiEEaSEOS0_
_ZNSt11_Tuple_implILy0EJiiiEEaSEOS0_:
.LFB2879:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_
	movq	%rax, %rcx
	call	_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE
	movl	(%rax), %ebx
	movq	-64(%rbp), %rcx
	call	_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_
	movl	%ebx, (%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_
	movq	%rax, %rcx
	call	_ZSt4moveIRSt11_Tuple_implILy1EJiiEEEONSt16remove_referenceIT_E4typeEOS4_
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy1EJiiEEaSEOS0_
	movq	-64(%rbp), %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiEC2Ev
	.def	_ZN9__gnu_cxx13new_allocatorIiEC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiEC2Ev
_ZN9__gnu_cxx13new_allocatorIiEC2Ev:
.LFB2881:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiED2Ev
	.def	_ZN9__gnu_cxx13new_allocatorIiED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiED2Ev
_ZN9__gnu_cxx13new_allocatorIiED2Ev:
.LFB2884:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev
	.def	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev
_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev:
.LFB2889:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNSaIiED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_
	.def	_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_
_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_:
.LFB2890:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-64(%rbp), %rax
	movq	-48(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB15:
	call	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEy
.LEHE15:
	jmp	.L114
.L113:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB16:
	call	_Unwind_Resume
	nop
.LEHE16:
.L114:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2890:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2890-.LLSDACSB2890
.LLSDACSB2890:
	.uleb128 .LEHB15-.LFB2890
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L113-.LFB2890
	.uleb128 0
	.uleb128 .LEHB16-.LFB2890
	.uleb128 .LEHE16-.LEHB16
	.uleb128 0
	.uleb128 0
.LLSDACSE2890:
	.section	.text$_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEED2Ev
	.def	_ZNSt12_Vector_baseIiSaIiEED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEED2Ev
_ZNSt12_Vector_baseIiSaIiEED2Ev:
.LFB2893:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2893:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2893-.LLSDACSB2893
.LLSDACSB2893:
.LLSDACSE2893:
	.section	.text$_ZNSt12_Vector_baseIiSaIiEED2Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEE21_M_default_initializeEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEE21_M_default_initializeEy
	.def	_ZNSt6vectorIiSaIiEE21_M_default_initializeEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEE21_M_default_initializeEy
_ZNSt6vectorIiSaIiEE21_M_default_initializeEy:
.LFB2895:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	24(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt27__uninitialized_default_n_aIPiyiET_S1_T0_RSaIT1_E
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	.def	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv:
.LFB2896:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
	.def	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E:
.LFB2897:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt8_DestroyIPiEvT_S1_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2Ev
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2Ev
_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2Ev:
.LFB2899:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev
_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEED2Ev:
.LFB2902:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev:
.LFB2907:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNSaISt6vectorIiSaIiEEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_:
.LFB2908:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-64(%rbp), %rax
	movq	-48(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implC1ERKS3_
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB17:
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE17_M_create_storageEy
.LEHE17:
	jmp	.L126
.L125:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB18:
	call	_Unwind_Resume
	nop
.LEHE18:
.L126:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2908:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2908-.LLSDACSB2908
.LLSDACSB2908:
	.uleb128 .LEHB17-.LFB2908
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L125-.LFB2908
	.uleb128 0
	.uleb128 .LEHB18-.LFB2908
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
.LLSDACSE2908:
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev:
.LFB2911:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movabsq	$-6148914691236517205, %rax
	imulq	%rdx, %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE13_M_deallocateEPS2_y
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2911:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2911-.LLSDACSB2911
.LLSDACSB2911:
.LLSDACSE2911:
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EE18_M_fill_initializeEyRKS1_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EE18_M_fill_initializeEyRKS1_
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EE18_M_fill_initializeEyRKS1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EE18_M_fill_initializeEyRKS1_
_ZNSt6vectorIS_IiSaIiEESaIS1_EE18_M_fill_initializeEyRKS1_:
.LFB2913:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %r8
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	%r8, %r9
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt24__uninitialized_fill_n_aIPSt6vectorIiSaIiEEyS2_S2_ET_S4_T0_RKT1_RSaIT2_E
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv:
.LFB2914:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPSt6vectorIiSaIiEES2_EvT_S4_RSaIT0_E,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPSt6vectorIiSaIiEES2_EvT_S4_RSaIT0_E
	.def	_ZSt8_DestroyIPSt6vectorIiSaIiEES2_EvT_S4_RSaIT0_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPSt6vectorIiSaIiEES2_EvT_S4_RSaIT0_E
_ZSt8_DestroyIPSt6vectorIiSaIiEES2_EvT_S4_RSaIT0_E:
.LFB2915:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2Ev
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2Ev
_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2Ev:
.LFB2917:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev
_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEED2Ev:
.LFB2920:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev:
.LFB2925:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEED2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_:
.LFB2926:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-64(%rbp), %rax
	movq	-48(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implC1ERKS5_
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB19:
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE17_M_create_storageEy
.LEHE19:
	jmp	.L138
.L137:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB20:
	call	_Unwind_Resume
	nop
.LEHE20:
.L138:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2926:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2926-.LLSDACSB2926
.LLSDACSB2926:
	.uleb128 .LEHB19-.LFB2926
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L137-.LFB2926
	.uleb128 0
	.uleb128 .LEHB20-.LFB2926
	.uleb128 .LEHE20-.LEHB20
	.uleb128 0
	.uleb128 0
.LLSDACSE2926:
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EEC2EyRKS5_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev:
.LFB2929:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movabsq	$-6148914691236517205, %rax
	imulq	%rdx, %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE13_M_deallocateEPS4_y
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2929:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2929-.LLSDACSB2929
.LLSDACSB2929:
.LLSDACSE2929:
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EED2Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE18_M_fill_initializeEyRKS3_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE18_M_fill_initializeEyRKS3_
	.def	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE18_M_fill_initializeEyRKS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE18_M_fill_initializeEyRKS3_
_ZNSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EE18_M_fill_initializeEyRKS3_:
.LFB2931:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv
	movq	%rax, %r8
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	%r8, %r9
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt24__uninitialized_fill_n_aIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_S4_ET_S6_T0_RKT1_RSaIT2_E
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE19_M_get_Tp_allocatorEv:
.LFB2932:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EES4_EvT_S6_RSaIT0_E,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EES4_EvT_S6_RSaIT0_E
	.def	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EES4_EvT_S6_RSaIT0_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EES4_EvT_S6_RSaIT0_E
_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EES4_EvT_S6_RSaIT0_E:
.LFB2933:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEEC2Ev
	.def	_ZNSt12_Vector_baseIiSaIiEEC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEEC2Ev
_ZNSt12_Vector_baseIiSaIiEEC2Ev:
.LFB2935:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_
	.def	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_
_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEEC1ERKS6_:
.LFB2939:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv
_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIS1_IiSaIiEESaIS3_EES1_IS5_SaIS5_EEE4baseEv:
.LFB2940:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_
	.def	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_
_ZN9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS4_:
.LFB2943:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
_ZNK9__gnu_cxx17__normal_iteratorIPSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv:
.LFB2944:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_
	.def	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_
_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_:
.LFB2947:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv:
.LFB2948:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
	.def	_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_:
.LFB2949:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movq	%rax, %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "vector::_M_realloc_insert\0"
	.section	.text$_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
	.def	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_:
.LFB2950:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$80, %rsp
	.seh_stackalloc	80
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	leaq	.LC0(%rip), %r8
	movl	$1, %edx
	movq	32(%rbp), %rcx
.LEHB21:
	call	_ZNKSt6vectorIiSaIiEE12_M_check_lenEyPKc
	movq	%rax, -16(%rbp)
	movq	32(%rbp), %rcx
	call	_ZNSt6vectorIiSaIiEE5beginEv
	movq	%rax, -40(%rbp)
	leaq	-40(%rbp), %rdx
	leaq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
	movq	%rax, -24(%rbp)
	movq	32(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy
.LEHE21:
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movq	%rax, %rcx
	movq	-24(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movq	32(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
	movq	$0, -8(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rbx
	leaq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rdx
	movq	32(%rbp), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx
	movq	%rbx, %r9
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB22:
	call	_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
	movq	%rax, -8(%rbp)
	addq	$4, -8(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	movq	32(%rbp), %rax
	movq	8(%rax), %rbx
	leaq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rsi, %r9
	movq	%rdx, %r8
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
.LEHE22:
	movq	%rax, -8(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	32(%rbp), %rax
	movq	8(%rax), %rdx
	movq	32(%rbp), %rax
	movq	(%rax), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB23:
	call	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
	movq	32(%rbp), %rax
	movq	32(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, %rcx
	movq	32(%rbp), %rdx
	movq	(%rdx), %rdx
	subq	%rdx, %rcx
	movq	%rcx, %rdx
	sarq	$2, %rdx
	movq	%rdx, %rcx
	movq	32(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy
.LEHE23:
	movq	32(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	32(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-16(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movq	32(%rbp), %rax
	movq	%rdx, 16(%rax)
	jmp	.L162
.L160:
	movq	%rax, %rcx
	call	__cxa_begin_catch
	cmpq	$0, -8(%rbp)
	jne	.L157
	movq	-24(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
.LEHB24:
	call	_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
	jmp	.L158
.L157:
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	movq	-8(%rbp), %rdx
	movq	-32(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
.L158:
	movq	32(%rbp), %rax
	movq	-16(%rbp), %rcx
	movq	-32(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy
	call	__cxa_rethrow
.LEHE24:
.L161:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB25:
	call	_Unwind_Resume
	nop
.LEHE25:
.L162:
	addq	$80, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
	.align 4
.LLSDA2950:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT2950-.LLSDATTD2950
.LLSDATTD2950:
	.byte	0x1
	.uleb128 .LLSDACSE2950-.LLSDACSB2950
.LLSDACSB2950:
	.uleb128 .LEHB21-.LFB2950
	.uleb128 .LEHE21-.LEHB21
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB22-.LFB2950
	.uleb128 .LEHE22-.LEHB22
	.uleb128 .L160-.LFB2950
	.uleb128 0x1
	.uleb128 .LEHB23-.LFB2950
	.uleb128 .LEHE23-.LEHB23
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB24-.LFB2950
	.uleb128 .LEHE24-.LEHB24
	.uleb128 .L161-.LFB2950
	.uleb128 0
	.uleb128 .LEHB25-.LFB2950
	.uleb128 .LEHE25-.LEHB25
	.uleb128 0
	.uleb128 0
.LLSDACSE2950:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT2950:
	.section	.text$_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy1EJiiEEC2IRiJS2_EvEEOT_DpOT0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt11_Tuple_implILy1EJiiEEC2IRiJS2_EvEEOT_DpOT0_
	.def	_ZNSt11_Tuple_implILy1EJiiEEC2IRiJS2_EvEEOT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy1EJiiEEC2IRiJS2_EvEEOT_DpOT0_
_ZNSt11_Tuple_implILy1EJiiEEC2IRiJS2_EvEEOT_DpOT0_:
.LFB2996:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-64(%rbp), %rbx
	movq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt11_Tuple_implILy2EJiEEC2IRiEEOT_
	movq	-64(%rbp), %rax
	leaq	4(%rax), %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt10_Head_baseILy1EiLb0EEC2IRiEEOT_
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt10_Head_baseILy0EiLb0EEC2IRiEEOT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt10_Head_baseILy0EiLb0EEC2IRiEEOT_
	.def	_ZNSt10_Head_baseILy0EiLb0EEC2IRiEEOT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt10_Head_baseILy0EiLb0EEC2IRiEEOT_
_ZNSt10_Head_baseILy0EiLb0EEC2IRiEEOT_:
.LFB2999:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movl	(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_,"x"
	.linkonce discard
	.globl	_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_
	.def	_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_
_ZNSt11_Tuple_implILy0EJiiiEE7_M_headERS0_:
.LFB3001:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rcx
	call	_ZNSt10_Head_baseILy0EiLb0EE7_M_headERS0_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE,"x"
	.linkonce discard
	.globl	_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE
	.def	_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE
_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE:
.LFB3002:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_,"x"
	.linkonce discard
	.globl	_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_
	.def	_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_
_ZNSt11_Tuple_implILy0EJiiiEE7_M_tailERS0_:
.LFB3003:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt4moveIRSt11_Tuple_implILy1EJiiEEEONSt16remove_referenceIT_E4typeEOS4_,"x"
	.linkonce discard
	.globl	_ZSt4moveIRSt11_Tuple_implILy1EJiiEEEONSt16remove_referenceIT_E4typeEOS4_
	.def	_ZSt4moveIRSt11_Tuple_implILy1EJiiEEEONSt16remove_referenceIT_E4typeEOS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt4moveIRSt11_Tuple_implILy1EJiiEEEONSt16remove_referenceIT_E4typeEOS4_
_ZSt4moveIRSt11_Tuple_implILy1EJiiEEEONSt16remove_referenceIT_E4typeEOS4_:
.LFB3004:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy1EJiiEEaSEOS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt11_Tuple_implILy1EJiiEEaSEOS0_
	.def	_ZNSt11_Tuple_implILy1EJiiEEaSEOS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy1EJiiEEaSEOS0_
_ZNSt11_Tuple_implILy1EJiiEEaSEOS0_:
.LFB3005:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_
	movq	%rax, %rcx
	call	_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE
	movl	(%rax), %ebx
	movq	-64(%rbp), %rcx
	call	_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_
	movl	%ebx, (%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_
	movq	%rax, %rcx
	call	_ZSt4moveIRSt11_Tuple_implILy2EJiEEEONSt16remove_referenceIT_E4typeEOS4_
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy2EJiEEaSEOS0_
	movq	-64(%rbp), %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_
	.def	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_
_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_:
.LFB3008:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSaIiEC2ERKS_
	movq	16(%rbp), %rax
	movq	$0, (%rax)
	movq	16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEy
	.def	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEy
_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEy:
.LFB3009:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	24(%rbp), %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy
	.def	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy
_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPiy:
.LFB3010:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L179
	movq	16(%rbp), %rax
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Piy
.L179:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt27__uninitialized_default_n_aIPiyiET_S1_T0_RSaIT1_E,"x"
	.linkonce discard
	.globl	_ZSt27__uninitialized_default_n_aIPiyiET_S1_T0_RSaIT1_E
	.def	_ZSt27__uninitialized_default_n_aIPiyiET_S1_T0_RSaIT1_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt27__uninitialized_default_n_aIPiyiET_S1_T0_RSaIT1_E
_ZSt27__uninitialized_default_n_aIPiyiET_S1_T0_RSaIT1_E:
.LFB3011:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt25__uninitialized_default_nIPiyET_S1_T0_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPiEvT_S1_,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPiEvT_S1_
	.def	_ZSt8_DestroyIPiEvT_S1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPiEvT_S1_
_ZSt8_DestroyIPiEvT_S1_:
.LFB3012:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implC1ERKS3_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implC1ERKS3_
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implC1ERKS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implC1ERKS3_
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE12_Vector_implC1ERKS3_:
.LFB3015:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSaISt6vectorIiSaIiEEEC2ERKS2_
	movq	16(%rbp), %rax
	movq	$0, (%rax)
	movq	16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE17_M_create_storageEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE17_M_create_storageEy
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE17_M_create_storageEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE17_M_create_storageEy
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE17_M_create_storageEy:
.LFB3016:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE11_M_allocateEy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rcx
	movq	24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rcx,%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE13_M_deallocateEPS2_y,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE13_M_deallocateEPS2_y
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE13_M_deallocateEPS2_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE13_M_deallocateEPS2_y
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE13_M_deallocateEPS2_y:
.LFB3017:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L187
	movq	16(%rbp), %rax
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE10deallocateERS3_PS2_y
.L187:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt24__uninitialized_fill_n_aIPSt6vectorIiSaIiEEyS2_S2_ET_S4_T0_RKT1_RSaIT2_E,"x"
	.linkonce discard
	.globl	_ZSt24__uninitialized_fill_n_aIPSt6vectorIiSaIiEEyS2_S2_ET_S4_T0_RKT1_RSaIT2_E
	.def	_ZSt24__uninitialized_fill_n_aIPSt6vectorIiSaIiEEyS2_S2_ET_S4_T0_RKT1_RSaIT2_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt24__uninitialized_fill_n_aIPSt6vectorIiSaIiEEyS2_S2_ET_S4_T0_RKT1_RSaIT2_E
_ZSt24__uninitialized_fill_n_aIPSt6vectorIiSaIiEEyS2_S2_ET_S4_T0_RKT1_RSaIT2_E:
.LFB3018:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt20uninitialized_fill_nIPSt6vectorIiSaIiEEyS2_ET_S4_T0_RKT1_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_
	.def	_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_
_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_:
.LFB3019:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIiSaIiEEEEvT_S6_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implC1ERKS5_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implC1ERKS5_
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implC1ERKS5_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implC1ERKS5_
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE12_Vector_implC1ERKS5_:
.LFB3022:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC2ERKS4_
	movq	16(%rbp), %rax
	movq	$0, (%rax)
	movq	16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE17_M_create_storageEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE17_M_create_storageEy
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE17_M_create_storageEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE17_M_create_storageEy
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE17_M_create_storageEy:
.LFB3023:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE11_M_allocateEy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rcx
	movq	24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rcx,%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE13_M_deallocateEPS4_y,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE13_M_deallocateEPS4_y
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE13_M_deallocateEPS4_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE13_M_deallocateEPS4_y
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE13_M_deallocateEPS4_y:
.LFB3024:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L195
	movq	16(%rbp), %rax
	movq	32(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE10deallocateERS5_PS4_y
.L195:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt24__uninitialized_fill_n_aIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_S4_ET_S6_T0_RKT1_RSaIT2_E,"x"
	.linkonce discard
	.globl	_ZSt24__uninitialized_fill_n_aIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_S4_ET_S6_T0_RKT1_RSaIT2_E
	.def	_ZSt24__uninitialized_fill_n_aIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_S4_ET_S6_T0_RKT1_RSaIT2_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt24__uninitialized_fill_n_aIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_S4_ET_S6_T0_RKT1_RSaIT2_E
_ZSt24__uninitialized_fill_n_aIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_S4_ET_S6_T0_RKT1_RSaIT2_E:
.LFB3025:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt20uninitialized_fill_nIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_ET_S6_T0_RKT1_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_
	.def	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_
_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_:
.LFB3026:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIS2_IiSaIiEESaIS4_EEEEvT_S8_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1Ev
	.def	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1Ev
_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1Ev:
.LFB3029:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNSaIiEC2Ev
	movq	16(%rbp), %rax
	movq	$0, (%rax)
	movq	16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE,"x"
	.linkonce discard
	.globl	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	.def	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE:
.LFB3030:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
	.def	_ZN9__gnu_cxx13new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
_ZN9__gnu_cxx13new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_:
.LFB3031:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movl	(%rax), %ebx
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movl	$4, %ecx
	call	_ZnwyPv
	movl	%ebx, (%rax)
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIiSaIiEE12_M_check_lenEyPKc,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIiSaIiEE12_M_check_lenEyPKc
	.def	_ZNKSt6vectorIiSaIiEE12_M_check_lenEyPKc;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIiSaIiEE12_M_check_lenEyPKc
_ZNKSt6vectorIiSaIiEE12_M_check_lenEyPKc:
.LFB3032:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%r8, -32(%rbp)
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE8max_sizeEv
	movq	%rax, %rbx
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE4sizeEv
	subq	%rax, %rbx
	movq	%rbx, %rdx
	movq	-40(%rbp), %rax
	cmpq	%rax, %rdx
	setb	%al
	testb	%al, %al
	je	.L204
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt20__throw_length_errorPKc
.L204:
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE4sizeEv
	movq	%rax, %rbx
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE4sizeEv
	movq	%rax, -96(%rbp)
	leaq	-40(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt3maxIyERKT_S2_S2_
	movq	(%rax), %rax
	addq	%rbx, %rax
	movq	%rax, -88(%rbp)
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE4sizeEv
	cmpq	%rax, -88(%rbp)
	jb	.L205
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE8max_sizeEv
	cmpq	%rax, -88(%rbp)
	jbe	.L206
.L205:
	movq	-48(%rbp), %rcx
	call	_ZNKSt6vectorIiSaIiEE8max_sizeEv
	jmp	.L207
.L206:
	movq	-88(%rbp), %rax
.L207:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
	.def	_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_:
.LFB3033:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rax
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rax
	subq	%rax, %rbx
	movq	%rbx, %rax
	sarq	$2, %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy
	.def	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy
_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEy:
.LFB3034:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L212
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIiEE8allocateERS0_y
	jmp	.L214
.L212:
	movl	$0, %eax
.L214:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_,"x"
	.linkonce discard
	.globl	_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
	.def	_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_:
.LFB3035:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	%r9, -40(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
	movq	%rax, %rcx
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rax
	movq	%rdx, %r9
	movq	%rax, %r8
	movq	%rbx, %rdx
	call	_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
	.def	_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_:
.LFB3036:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy2EJiEEC2IRiEEOT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt11_Tuple_implILy2EJiEEC2IRiEEOT_
	.def	_ZNSt11_Tuple_implILy2EJiEEC2IRiEEOT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy2EJiEEC2IRiEEOT_
_ZNSt11_Tuple_implILy2EJiEEC2IRiEEOT_:
.LFB3082:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt10_Head_baseILy2EiLb0EEC2IRiEEOT_
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt10_Head_baseILy1EiLb0EEC2IRiEEOT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt10_Head_baseILy1EiLb0EEC2IRiEEOT_
	.def	_ZNSt10_Head_baseILy1EiLb0EEC2IRiEEOT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt10_Head_baseILy1EiLb0EEC2IRiEEOT_
_ZNSt10_Head_baseILy1EiLb0EEC2IRiEEOT_:
.LFB3085:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movl	(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt10_Head_baseILy0EiLb0EE7_M_headERS0_,"x"
	.linkonce discard
	.globl	_ZNSt10_Head_baseILy0EiLb0EE7_M_headERS0_
	.def	_ZNSt10_Head_baseILy0EiLb0EE7_M_headERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt10_Head_baseILy0EiLb0EE7_M_headERS0_
_ZNSt10_Head_baseILy0EiLb0EE7_M_headERS0_:
.LFB3087:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_,"x"
	.linkonce discard
	.globl	_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_
	.def	_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_
_ZNSt11_Tuple_implILy1EJiiEE7_M_headERS0_:
.LFB3088:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rcx
	call	_ZNSt10_Head_baseILy1EiLb0EE7_M_headERS0_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_,"x"
	.linkonce discard
	.globl	_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_
	.def	_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_
_ZNSt11_Tuple_implILy1EJiiEE7_M_tailERS0_:
.LFB3089:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt4moveIRSt11_Tuple_implILy2EJiEEEONSt16remove_referenceIT_E4typeEOS4_,"x"
	.linkonce discard
	.globl	_ZSt4moveIRSt11_Tuple_implILy2EJiEEEONSt16remove_referenceIT_E4typeEOS4_
	.def	_ZSt4moveIRSt11_Tuple_implILy2EJiEEEONSt16remove_referenceIT_E4typeEOS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt4moveIRSt11_Tuple_implILy2EJiEEEONSt16remove_referenceIT_E4typeEOS4_
_ZSt4moveIRSt11_Tuple_implILy2EJiEEEONSt16remove_referenceIT_E4typeEOS4_:
.LFB3090:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy2EJiEEaSEOS0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt11_Tuple_implILy2EJiEEaSEOS0_
	.def	_ZNSt11_Tuple_implILy2EJiEEaSEOS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy2EJiEEaSEOS0_
_ZNSt11_Tuple_implILy2EJiEEaSEOS0_:
.LFB3091:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_
	movq	%rax, %rcx
	call	_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE
	movl	(%rax), %ebx
	movq	-64(%rbp), %rcx
	call	_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_
	movl	%ebx, (%rax)
	movq	-64(%rbp), %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIiEC2ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIiEC2ERKS_
	.def	_ZNSaIiEC2ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIiEC2ERKS_
_ZNSaIiEC2ERKS_:
.LFB3093:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaIiEC1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaIiEC1ERKS_
	.def	_ZNSaIiEC1ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaIiEC1ERKS_
_ZNSaIiEC1ERKS_:
.LFB3094:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Piy,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Piy
	.def	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Piy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Piy
_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Piy:
.LFB3095:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPiy
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt25__uninitialized_default_nIPiyET_S1_T0_,"x"
	.linkonce discard
	.globl	_ZSt25__uninitialized_default_nIPiyET_S1_T0_
	.def	_ZSt25__uninitialized_default_nIPiyET_S1_T0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt25__uninitialized_default_nIPiyET_S1_T0_
_ZSt25__uninitialized_default_nIPiyET_S1_T0_:
.LFB3096:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movb	$1, -1(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPiyEET_S3_T0_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_,"x"
	.linkonce discard
	.globl	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_
	.def	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_
_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_:
.LFB3097:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIiSaIiEEEC2ERKS2_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIiSaIiEEEC2ERKS2_
	.def	_ZNSaISt6vectorIiSaIiEEEC2ERKS2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIiSaIiEEEC2ERKS2_
_ZNSaISt6vectorIiSaIiEEEC2ERKS2_:
.LFB3099:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIiSaIiEEEC1ERKS2_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIiSaIiEEEC1ERKS2_
	.def	_ZNSaISt6vectorIiSaIiEEEC1ERKS2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIiSaIiEEEC1ERKS2_
_ZNSaISt6vectorIiSaIiEEEC1ERKS2_:
.LFB3100:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE11_M_allocateEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE11_M_allocateEy
	.def	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE11_M_allocateEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE11_M_allocateEy
_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE11_M_allocateEy:
.LFB3101:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L239
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE8allocateERS3_y
	jmp	.L241
.L239:
	movl	$0, %eax
.L241:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE10deallocateERS3_PS2_y,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE10deallocateERS3_PS2_y
	.def	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE10deallocateERS3_PS2_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE10deallocateERS3_PS2_y
_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE10deallocateERS3_PS2_y:
.LFB3102:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE10deallocateEPS3_y
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt20uninitialized_fill_nIPSt6vectorIiSaIiEEyS2_ET_S4_T0_RKT1_,"x"
	.linkonce discard
	.globl	_ZSt20uninitialized_fill_nIPSt6vectorIiSaIiEEyS2_ET_S4_T0_RKT1_
	.def	_ZSt20uninitialized_fill_nIPSt6vectorIiSaIiEEyS2_ET_S4_T0_RKT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt20uninitialized_fill_nIPSt6vectorIiSaIiEEyS2_ET_S4_T0_RKT1_
_ZSt20uninitialized_fill_nIPSt6vectorIiSaIiEEyS2_ET_S4_T0_RKT1_:
.LFB3103:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIiSaIiEEEEvT_S6_,"x"
	.linkonce discard
	.globl	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIiSaIiEEEEvT_S6_
	.def	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIiSaIiEEEEvT_S6_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIiSaIiEEEEvT_S6_
_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIiSaIiEEEEvT_S6_:
.LFB3104:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
.L247:
	movq	16(%rbp), %rax
	cmpq	24(%rbp), %rax
	je	.L248
	movq	16(%rbp), %rcx
	call	_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_
	movq	%rax, %rcx
	call	_ZSt8_DestroyISt6vectorIiSaIiEEEvPT_
	addq	$24, 16(%rbp)
	jmp	.L247
.L248:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC2ERKS4_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC2ERKS4_
	.def	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC2ERKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC2ERKS4_
_ZNSaISt6vectorIS_IiSaIiEESaIS1_EEEC2ERKS4_:
.LFB3106:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2ERKS6_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE11_M_allocateEy,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE11_M_allocateEy
	.def	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE11_M_allocateEy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE11_M_allocateEy
_ZNSt12_Vector_baseISt6vectorIS0_IiSaIiEESaIS2_EESaIS4_EE11_M_allocateEy:
.LFB3108:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	cmpq	$0, 24(%rbp)
	je	.L251
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE8allocateERS5_y
	jmp	.L253
.L251:
	movl	$0, %eax
.L253:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE10deallocateERS5_PS4_y,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE10deallocateERS5_PS4_y
	.def	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE10deallocateERS5_PS4_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE10deallocateERS5_PS4_y
_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE10deallocateERS5_PS4_y:
.LFB3109:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE10deallocateEPS5_y
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt20uninitialized_fill_nIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_ET_S6_T0_RKT1_,"x"
	.linkonce discard
	.globl	_ZSt20uninitialized_fill_nIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_ET_S6_T0_RKT1_
	.def	_ZSt20uninitialized_fill_nIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_ET_S6_T0_RKT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt20uninitialized_fill_nIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_ET_S6_T0_RKT1_
_ZSt20uninitialized_fill_nIPSt6vectorIS0_IiSaIiEESaIS2_EEyS4_ET_S6_T0_RKT1_:
.LFB3110:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIS2_IiSaIiEESaIS4_EEEEvT_S8_,"x"
	.linkonce discard
	.globl	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIS2_IiSaIiEESaIS4_EEEEvT_S8_
	.def	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIS2_IiSaIiEESaIS4_EEEEvT_S8_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIS2_IiSaIiEESaIS4_EEEEvT_S8_
_ZNSt12_Destroy_auxILb0EE9__destroyIPSt6vectorIS2_IiSaIiEESaIS4_EEEEvT_S8_:
.LFB3111:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
.L259:
	movq	16(%rbp), %rax
	cmpq	24(%rbp), %rax
	je	.L260
	movq	16(%rbp), %rcx
	call	_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_
	movq	%rax, %rcx
	call	_ZSt8_DestroyISt6vectorIS0_IiSaIiEESaIS2_EEEvPT_
	addq	$24, 16(%rbp)
	jmp	.L259
.L260:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIiSaIiEE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIiSaIiEE8max_sizeEv
	.def	_ZNKSt6vectorIiSaIiEE8max_sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIiSaIiEE8max_sizeEv
_ZNKSt6vectorIiSaIiEE8max_sizeEv:
.LFB3112:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIiSaIiEE4sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIiSaIiEE4sizeEv
	.def	_ZNKSt6vectorIiSaIiEE4sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIiSaIiEE4sizeEv
_ZNKSt6vectorIiSaIiEE4sizeEv:
.LFB3113:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt3maxIyERKT_S2_S2_,"x"
	.linkonce discard
	.globl	_ZSt3maxIyERKT_S2_S2_
	.def	_ZSt3maxIyERKT_S2_S2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt3maxIyERKT_S2_S2_
_ZSt3maxIyERKT_S2_S2_:
.LFB3114:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	24(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jnb	.L266
	movq	24(%rbp), %rax
	jmp	.L267
.L266:
	movq	16(%rbp), %rax
.L267:
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIiEE8allocateERS0_y,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIiEE8allocateERS0_y
	.def	_ZNSt16allocator_traitsISaIiEE8allocateERS0_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIiEE8allocateERS0_y
_ZNSt16allocator_traitsISaIiEE8allocateERS0_y:
.LFB3115:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movl	$0, %r8d
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorIiE8allocateEyPKv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_,"x"
	.linkonce discard
	.globl	_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
	.def	_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_:
.LFB3116:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	-8(%rbp), %rax
	movq	16(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt13move_iteratorIPiEC1ES0_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E,"x"
	.linkonce discard
	.globl	_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E
	.def	_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E
_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E:
.LFB3117:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_
	.def	_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_
_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_:
.LFB3118:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt10_Head_baseILy2EiLb0EEC2IRiEEOT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt10_Head_baseILy2EiLb0EEC2IRiEEOT_
	.def	_ZNSt10_Head_baseILy2EiLb0EEC2IRiEEOT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt10_Head_baseILy2EiLb0EEC2IRiEEOT_
_ZNSt10_Head_baseILy2EiLb0EEC2IRiEEOT_:
.LFB3168:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRiEOT_RNSt16remove_referenceIS1_E4typeE
	movl	(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt10_Head_baseILy1EiLb0EE7_M_headERS0_,"x"
	.linkonce discard
	.globl	_ZNSt10_Head_baseILy1EiLb0EE7_M_headERS0_
	.def	_ZNSt10_Head_baseILy1EiLb0EE7_M_headERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt10_Head_baseILy1EiLb0EE7_M_headERS0_
_ZNSt10_Head_baseILy1EiLb0EE7_M_headERS0_:
.LFB3170:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_,"x"
	.linkonce discard
	.globl	_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_
	.def	_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_
_ZNSt11_Tuple_implILy2EJiEE7_M_headERS0_:
.LFB3171:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt10_Head_baseILy2EiLb0EE7_M_headERS0_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
	.def	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_:
.LFB3173:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPiy,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPiy
	.def	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPiy;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPiy
_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPiy:
.LFB3175:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZdlPv
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPiyEET_S3_T0_,"x"
	.linkonce discard
	.globl	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPiyEET_S3_T0_
	.def	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPiyEET_S3_T0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPiyEET_S3_T0_
_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPiyEET_S3_T0_:
.LFB3176:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	$0, -4(%rbp)
	leaq	-4(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt6fill_nIPiyiET_S1_T0_RKT1_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_
_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEEC2ERKS4_:
.LFB3178:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE8allocateERS3_y,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE8allocateERS3_y
	.def	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE8allocateERS3_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE8allocateERS3_y
_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE8allocateERS3_y:
.LFB3180:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movl	$0, %r8d
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8allocateEyPKv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE10deallocateEPS3_y,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE10deallocateEPS3_y
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE10deallocateEPS3_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE10deallocateEPS3_y
_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE10deallocateEPS3_y:
.LFB3181:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZdlPv
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_,"x"
	.linkonce discard
	.globl	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_
	.def	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_
_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_:
.LFB3182:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%r8, -32(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -88(%rbp)
.L292:
	cmpq	$0, -40(%rbp)
	je	.L291
	movq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_
	movq	%rax, %rcx
	movq	-32(%rbp), %rax
	movq	%rax, %rdx
.LEHB26:
	call	_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_
.LEHE26:
	subq	$1, -40(%rbp)
	addq	$24, -88(%rbp)
	jmp	.L292
.L291:
	movq	-88(%rbp), %rax
	jmp	.L298
.L296:
	movq	%rax, %rcx
	call	__cxa_begin_catch
	movq	-88(%rbp), %rax
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
.LEHB27:
	call	_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_
	call	__cxa_rethrow
.LEHE27:
.L297:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB28:
	call	_Unwind_Resume
.LEHE28:
.L298:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
	.align 4
.LLSDA3182:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT3182-.LLSDATTD3182
.LLSDATTD3182:
	.byte	0x1
	.uleb128 .LLSDACSE3182-.LLSDACSB3182
.LLSDACSB3182:
	.uleb128 .LEHB26-.LFB3182
	.uleb128 .LEHE26-.LEHB26
	.uleb128 .L296-.LFB3182
	.uleb128 0x1
	.uleb128 .LEHB27-.LFB3182
	.uleb128 .LEHE27-.LEHB27
	.uleb128 .L297-.LFB3182
	.uleb128 0
	.uleb128 .LEHB28-.LFB3182
	.uleb128 .LEHE28-.LEHB28
	.uleb128 0
	.uleb128 0
.LLSDACSE3182:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3182:
	.section	.text$_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIiSaIiEEyS4_EET_S6_T0_RKT1_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_,"x"
	.linkonce discard
	.globl	_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_
	.def	_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_
_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_:
.LFB3183:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyISt6vectorIiSaIiEEEvPT_,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyISt6vectorIiSaIiEEEvPT_
	.def	_ZSt8_DestroyISt6vectorIiSaIiEEEvPT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyISt6vectorIiSaIiEEEvPT_
_ZSt8_DestroyISt6vectorIiSaIiEEEvPT_:
.LFB3184:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNSt6vectorIiSaIiEED1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2ERKS6_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2ERKS6_
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2ERKS6_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2ERKS6_
_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEEC2ERKS6_:
.LFB3186:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE8allocateERS5_y,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE8allocateERS5_y
	.def	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE8allocateERS5_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE8allocateERS5_y
_ZNSt16allocator_traitsISaISt6vectorIS0_IiSaIiEESaIS2_EEEE8allocateERS5_y:
.LFB3188:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movl	$0, %r8d
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8allocateEyPKv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE10deallocateEPS5_y,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE10deallocateEPS5_y
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE10deallocateEPS5_y;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE10deallocateEPS5_y
_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE10deallocateEPS5_y:
.LFB3189:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZdlPv
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_,"x"
	.linkonce discard
	.globl	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_
	.def	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_
_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_:
.LFB3190:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%r8, -32(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -88(%rbp)
.L309:
	cmpq	$0, -40(%rbp)
	je	.L308
	movq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_
	movq	%rax, %rcx
	movq	-32(%rbp), %rax
	movq	%rax, %rdx
.LEHB29:
	call	_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_
.LEHE29:
	subq	$1, -40(%rbp)
	addq	$24, -88(%rbp)
	jmp	.L309
.L308:
	movq	-88(%rbp), %rax
	jmp	.L315
.L313:
	movq	%rax, %rcx
	call	__cxa_begin_catch
	movq	-88(%rbp), %rax
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
.LEHB30:
	call	_ZSt8_DestroyIPSt6vectorIS0_IiSaIiEESaIS2_EEEvT_S6_
	call	__cxa_rethrow
.LEHE30:
.L314:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB31:
	call	_Unwind_Resume
.LEHE31:
.L315:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
	.align 4
.LLSDA3190:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT3190-.LLSDATTD3190
.LLSDATTD3190:
	.byte	0x1
	.uleb128 .LLSDACSE3190-.LLSDACSB3190
.LLSDACSB3190:
	.uleb128 .LEHB29-.LFB3190
	.uleb128 .LEHE29-.LEHB29
	.uleb128 .L313-.LFB3190
	.uleb128 0x1
	.uleb128 .LEHB30-.LFB3190
	.uleb128 .LEHE30-.LEHB30
	.uleb128 .L314-.LFB3190
	.uleb128 0
	.uleb128 .LEHB31-.LFB3190
	.uleb128 .LEHE31-.LEHB31
	.uleb128 0
	.uleb128 0
.LLSDACSE3190:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3190:
	.section	.text$_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPSt6vectorIS2_IiSaIiEESaIS4_EEyS6_EET_S8_T0_RKT1_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_,"x"
	.linkonce discard
	.globl	_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_
	.def	_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_
_ZSt11__addressofISt6vectorIS0_IiSaIiEESaIS2_EEEPT_RS5_:
.LFB3191:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt8_DestroyISt6vectorIS0_IiSaIiEESaIS2_EEEvPT_,"x"
	.linkonce discard
	.globl	_ZSt8_DestroyISt6vectorIS0_IiSaIiEESaIS2_EEEvPT_
	.def	_ZSt8_DestroyISt6vectorIS0_IiSaIiEESaIS2_EEEvPT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt8_DestroyISt6vectorIS0_IiSaIiEESaIS2_EEEvPT_
_ZSt8_DestroyISt6vectorIS0_IiSaIiEESaIS2_EEEvPT_:
.LFB3192:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
	.def	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_:
.LFB3193:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	.def	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv:
.LFB3194:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorIiE8allocateEyPKv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorIiE8allocateEyPKv
	.def	_ZN9__gnu_cxx13new_allocatorIiE8allocateEyPKv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorIiE8allocateEyPKv
_ZN9__gnu_cxx13new_allocatorIiE8allocateEyPKv:
.LFB3195:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv
	cmpq	%rax, 24(%rbp)
	seta	%al
	testb	%al, %al
	je	.L326
	call	_ZSt17__throw_bad_allocv
.L326:
	movq	24(%rbp), %rax
	salq	$2, %rax
	movq	%rax, %rcx
	call	_Znwy
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt13move_iteratorIPiEC1ES0_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt13move_iteratorIPiEC1ES0_
	.def	_ZNSt13move_iteratorIPiEC1ES0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt13move_iteratorIPiEC1ES0_
_ZNSt13move_iteratorIPiEC1ES0_:
.LFB3198:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_,"x"
	.linkonce discard
	.globl	_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
	.def	_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_:
.LFB3199:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt10_Head_baseILy2EiLb0EE7_M_headERS0_,"x"
	.linkonce discard
	.globl	_ZNSt10_Head_baseILy2EiLb0EE7_M_headERS0_
	.def	_ZNSt10_Head_baseILy2EiLb0EE7_M_headERS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt10_Head_baseILy2EiLb0EE7_M_headERS0_
_ZNSt10_Head_baseILy2EiLb0EE7_M_headERS0_:
.LFB3227:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt6fill_nIPiyiET_S1_T0_RKT1_,"x"
	.linkonce discard
	.globl	_ZSt6fill_nIPiyiET_S1_T0_RKT1_
	.def	_ZSt6fill_nIPiyiET_S1_T0_RKT1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt6fill_nIPiyiET_S1_T0_RKT1_
_ZSt6fill_nIPiyiET_S1_T0_RKT1_:
.LFB3228:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rcx
	call	_ZSt12__niter_baseIPiET_S1_
	movq	%rax, %rcx
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	call	_ZSt10__fill_n_aIPiyiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8allocateEyPKv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8allocateEyPKv
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8allocateEyPKv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8allocateEyPKv
_ZN9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8allocateEyPKv:
.LFB3229:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNK9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8max_sizeEv
	cmpq	%rax, 24(%rbp)
	seta	%al
	testb	%al, %al
	je	.L337
	call	_ZSt17__throw_bad_allocv
.L337:
	movq	24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rcx
	call	_Znwy
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_,"x"
	.linkonce discard
	.globl	_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_
	.def	_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_
_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_:
.LFB3230:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRKSt6vectorIiSaIiEEEOT_RNSt16remove_referenceIS5_E4typeE
	movq	%rax, %rdi
	movq	-48(%rbp), %rbx
	movq	%rbx, %rdx
	movl	$24, %ecx
	call	_ZnwyPv
	movq	%rax, %rsi
	movq	%rdi, %rdx
	movq	%rsi, %rcx
.LEHB32:
	call	_ZNSt6vectorIiSaIiEEC1ERKS1_
.LEHE32:
	jmp	.L341
.L340:
	movq	%rax, %rdi
	movq	%rbx, %rdx
	movq	%rsi, %rcx
	call	_ZdlPvS_
	movq	%rdi, %rax
	movq	%rax, %rcx
.LEHB33:
	call	_Unwind_Resume
	nop
.LEHE33:
.L341:
	addq	$40, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3230:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3230-.LLSDACSB3230
.LLSDACSB3230:
	.uleb128 .LEHB32-.LFB3230
	.uleb128 .LEHE32-.LEHB32
	.uleb128 .L340-.LFB3230
	.uleb128 0
	.uleb128 .LEHB33-.LFB3230
	.uleb128 .LEHE33-.LEHB33
	.uleb128 0
	.uleb128 0
.LLSDACSE3230:
	.section	.text$_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8allocateEyPKv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8allocateEyPKv
	.def	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8allocateEyPKv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8allocateEyPKv
_ZN9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8allocateEyPKv:
.LFB3231:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rcx
	call	_ZNK9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8max_sizeEv
	cmpq	%rax, 24(%rbp)
	seta	%al
	testb	%al, %al
	je	.L345
	call	_ZSt17__throw_bad_allocv
.L345:
	movq	24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rcx
	call	_Znwy
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_,"x"
	.linkonce discard
	.globl	_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_
	.def	_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_
_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_:
.LFB3232:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt7forwardIRKSt6vectorIS0_IiSaIiEESaIS2_EEEOT_RNSt16remove_referenceIS7_E4typeE
	movq	%rax, %rdi
	movq	-48(%rbp), %rbx
	movq	%rbx, %rdx
	movl	$24, %ecx
	call	_ZnwyPv
	movq	%rax, %rsi
	movq	%rdi, %rdx
	movq	%rsi, %rcx
.LEHB34:
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_
.LEHE34:
	jmp	.L349
.L348:
	movq	%rax, %rdi
	movq	%rbx, %rdx
	movq	%rsi, %rcx
	call	_ZdlPvS_
	movq	%rdi, %rax
	movq	%rax, %rcx
.LEHB35:
	call	_Unwind_Resume
	nop
.LEHE35:
.L349:
	addq	$40, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3232:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3232-.LLSDACSB3232
.LLSDACSB3232:
	.uleb128 .LEHB34-.LFB3232
	.uleb128 .LEHE34-.LEHB34
	.uleb128 .L348-.LFB3232
	.uleb128 0
	.uleb128 .LEHB35-.LFB3232
	.uleb128 .LEHE35-.LEHB35
	.uleb128 0
	.uleb128 0
.LLSDACSE3232:
	.section	.text$_ZSt10_ConstructISt6vectorIS0_IiSaIiEESaIS2_EEJRKS4_EEvPT_DpOT0_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv
	.def	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv
_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv:
.LFB3233:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movabsq	$4611686018427387903, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_,"x"
	.linkonce discard
	.globl	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_
	.def	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_
_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_:
.LFB3234:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt12__niter_baseIPiET_S1_,"x"
	.linkonce discard
	.globl	_ZSt12__niter_baseIPiET_S1_
	.def	_ZSt12__niter_baseIPiET_S1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt12__niter_baseIPiET_S1_
_ZSt12__niter_baseIPiET_S1_:
.LFB3249:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt10__fill_n_aIPiyiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_,"x"
	.linkonce discard
	.globl	_ZSt10__fill_n_aIPiyiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_
	.def	_ZSt10__fill_n_aIPiyiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt10__fill_n_aIPiyiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_
_ZSt10__fill_n_aIPiyiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_:
.LFB3250:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, -8(%rbp)
.L358:
	cmpq	$0, -8(%rbp)
	je	.L357
	movq	16(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	subq	$1, -8(%rbp)
	addq	$4, 16(%rbp)
	jmp	.L358
.L357:
	movq	16(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8max_sizeEv
	.def	_ZNK9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8max_sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8max_sizeEv
_ZNK9__gnu_cxx13new_allocatorISt6vectorIiSaIiEEE8max_sizeEv:
.LFB3251:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movabsq	$768614336404564650, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt7forwardIRKSt6vectorIiSaIiEEEOT_RNSt16remove_referenceIS5_E4typeE,"x"
	.linkonce discard
	.globl	_ZSt7forwardIRKSt6vectorIiSaIiEEEOT_RNSt16remove_referenceIS5_E4typeE
	.def	_ZSt7forwardIRKSt6vectorIiSaIiEEEOT_RNSt16remove_referenceIS5_E4typeE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt7forwardIRKSt6vectorIiSaIiEEEOT_RNSt16remove_referenceIS5_E4typeE
_ZSt7forwardIRKSt6vectorIiSaIiEEEOT_RNSt16remove_referenceIS5_E4typeE:
.LFB3252:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIiSaIiEEC1ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIiSaIiEEC1ERKS1_
	.def	_ZNSt6vectorIiSaIiEEC1ERKS1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIiSaIiEEC1ERKS1_
_ZNSt6vectorIiSaIiEEC1ERKS1_:
.LFB3255:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-32(%rbp), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	leaq	-81(%rbp), %rax
	movq	%rax, %rcx
.LEHB36:
	call	_ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_
.LEHE36:
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIiSaIiEE4sizeEv
	movq	%rax, %rdx
	leaq	-81(%rbp), %rax
	movq	%rax, %r8
	movq	%rbx, %rcx
.LEHB37:
	call	_ZNSt12_Vector_baseIiSaIiEEC2EyRKS0_
.LEHE37:
	leaq	-81(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIiED1Ev
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	movq	-32(%rbp), %rax
	movq	(%rax), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIiSaIiEE3endEv
	movq	%rax, %rsi
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIiSaIiEE5beginEv
	movq	%rdi, %r9
	movq	%rbx, %r8
	movq	%rsi, %rdx
	movq	%rax, %rcx
.LEHB38:
	call	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E
.LEHE38:
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L369
.L367:
	movq	%rax, %rbx
	leaq	-81(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIiED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB39:
	call	_Unwind_Resume
.L368:
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseIiSaIiEED2Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
	nop
.LEHE39:
.L369:
	addq	$56, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3255:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3255-.LLSDACSB3255
.LLSDACSB3255:
	.uleb128 .LEHB36-.LFB3255
	.uleb128 .LEHE36-.LEHB36
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB37-.LFB3255
	.uleb128 .LEHE37-.LEHB37
	.uleb128 .L367-.LFB3255
	.uleb128 0
	.uleb128 .LEHB38-.LFB3255
	.uleb128 .LEHE38-.LEHB38
	.uleb128 .L368-.LFB3255
	.uleb128 0
	.uleb128 .LEHB39-.LFB3255
	.uleb128 .LEHE39-.LEHB39
	.uleb128 0
	.uleb128 0
.LLSDACSE3255:
	.section	.text$_ZNSt6vectorIiSaIiEEC1ERKS1_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8max_sizeEv
	.def	_ZNK9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8max_sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8max_sizeEv
_ZNK9__gnu_cxx13new_allocatorISt6vectorIS1_IiSaIiEESaIS3_EEE8max_sizeEv:
.LFB3256:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movabsq	$768614336404564650, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt7forwardIRKSt6vectorIS0_IiSaIiEESaIS2_EEEOT_RNSt16remove_referenceIS7_E4typeE,"x"
	.linkonce discard
	.globl	_ZSt7forwardIRKSt6vectorIS0_IiSaIiEESaIS2_EEEOT_RNSt16remove_referenceIS7_E4typeE
	.def	_ZSt7forwardIRKSt6vectorIS0_IiSaIiEESaIS2_EEEOT_RNSt16remove_referenceIS7_E4typeE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt7forwardIRKSt6vectorIS0_IiSaIiEESaIS2_EEEOT_RNSt16remove_referenceIS7_E4typeE
_ZSt7forwardIRKSt6vectorIS0_IiSaIiEESaIS2_EEEOT_RNSt16remove_referenceIS7_E4typeE:
.LFB3257:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_
	.def	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_
_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_:
.LFB3260:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-32(%rbp), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdx
	leaq	-81(%rbp), %rax
	movq	%rax, %rcx
.LEHB40:
	call	_ZN9__gnu_cxx14__alloc_traitsISaISt6vectorIiSaIiEEEE17_S_select_on_copyERKS4_
.LEHE40:
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv
	movq	%rax, %rdx
	leaq	-81(%rbp), %rax
	movq	%rax, %r8
	movq	%rbx, %rcx
.LEHB41:
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EEC2EyRKS3_
.LEHE41:
	leaq	-81(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIiSaIiEEED1Ev
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	movq	-32(%rbp), %rax
	movq	(%rax), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE3endEv
	movq	%rax, %rsi
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5beginEv
	movq	%rdi, %r9
	movq	%rbx, %r8
	movq	%rsi, %rdx
	movq	%rax, %rcx
.LEHB42:
	call	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_S4_ET0_T_SC_SB_RSaIT1_E
.LEHE42:
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	.L379
.L377:
	movq	%rax, %rbx
	leaq	-81(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaISt6vectorIiSaIiEEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB43:
	call	_Unwind_Resume
.L378:
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EED2Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
	nop
.LEHE43:
.L379:
	addq	$56, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA3260:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3260-.LLSDACSB3260
.LLSDACSB3260:
	.uleb128 .LEHB40-.LFB3260
	.uleb128 .LEHE40-.LEHB40
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB41-.LFB3260
	.uleb128 .LEHE41-.LEHB41
	.uleb128 .L377-.LFB3260
	.uleb128 0
	.uleb128 .LEHB42-.LFB3260
	.uleb128 .LEHE42-.LEHB42
	.uleb128 .L378-.LFB3260
	.uleb128 0
	.uleb128 .LEHB43-.LFB3260
	.uleb128 .LEHE43-.LEHB43
	.uleb128 0
	.uleb128 0
.LLSDACSE3260:
	.section	.text$_ZNSt6vectorIS_IiSaIiEESaIS1_EEC1ERKS3_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_,"x"
	.linkonce discard
	.globl	_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
	.def	_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_:
.LFB3261:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	movq	%rax, %rcx
	movq	-48(%rbp), %rax
	movq	%rax, %r8
	movq	%rbx, %rdx
	call	_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_
	.def	_ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_
_ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_:
.LFB3265:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIiSaIiEE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIiSaIiEE5beginEv
	.def	_ZNKSt6vectorIiSaIiEE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIiSaIiEE5beginEv
_ZNKSt6vectorIiSaIiEE5beginEv:
.LFB3266:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIiSaIiEE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIiSaIiEE3endEv
	.def	_ZNKSt6vectorIiSaIiEE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIiSaIiEE3endEv
_ZNKSt6vectorIiSaIiEE3endEv:
.LFB3267:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E,"x"
	.linkonce discard
	.globl	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E
	.def	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E
_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E:
.LFB3268:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv
	.def	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv
_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv:
.LFB3269:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movabsq	$-6148914691236517205, %rax
	imulq	%rdx, %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx14__alloc_traitsISaISt6vectorIiSaIiEEEE17_S_select_on_copyERKS4_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxx14__alloc_traitsISaISt6vectorIiSaIiEEEE17_S_select_on_copyERKS4_
	.def	_ZN9__gnu_cxx14__alloc_traitsISaISt6vectorIiSaIiEEEE17_S_select_on_copyERKS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx14__alloc_traitsISaISt6vectorIiSaIiEEEE17_S_select_on_copyERKS4_
_ZN9__gnu_cxx14__alloc_traitsISaISt6vectorIiSaIiEEEE17_S_select_on_copyERKS4_:
.LFB3270:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE37select_on_container_copy_constructionERKS3_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
	.def	_ZNKSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv
_ZNKSt12_Vector_baseISt6vectorIiSaIiEESaIS2_EE19_M_get_Tp_allocatorEv:
.LFB3271:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5beginEv
	.def	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5beginEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5beginEv
_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5beginEv:
.LFB3272:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6vectorIS_IiSaIiEESaIS1_EE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE3endEv
	.def	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE3endEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6vectorIS_IiSaIiEESaIS1_EE3endEv
_ZNKSt6vectorIS_IiSaIiEESaIS1_EE3endEv:
.LFB3273:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_S4_ET0_T_SC_SB_RSaIT1_E,"x"
	.linkonce discard
	.globl	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_S4_ET0_T_SC_SB_RSaIT1_E
	.def	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_S4_ET0_T_SC_SB_RSaIT1_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_S4_ET0_T_SC_SB_RSaIT1_E
_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_S4_ET0_T_SC_SB_RSaIT1_E:
.LFB3274:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_ET0_T_SC_SB_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E,"x"
	.linkonce discard
	.globl	_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
	.def	_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E
_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E:
.LFB3275:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	16(%rbp), %rcx
	call	_ZNKSt13move_iteratorIPiE4baseEv
	movq	%rax, %rcx
	call	_ZSt12__miter_baseIPiET_S1_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_,"x"
	.linkonce discard
	.globl	_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_
	.def	_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_
_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_:
.LFB3276:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt12__niter_baseIPiET_S1_
	movq	%rax, %rsi
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt12__niter_baseIPiET_S1_
	movq	%rax, %rbx
	movq	32(%rbp), %rcx
	call	_ZSt12__niter_baseIPiET_S1_
	movq	%rsi, %r8
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_
	addq	$32, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
	.def	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_:
.LFB3277:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSaIiEC1ERKS_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_
	.def	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_
_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_:
.LFB3280:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_,"x"
	.linkonce discard
	.globl	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	.def	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_:
.LFB3281:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE37select_on_container_copy_constructionERKS3_,"x"
	.linkonce discard
	.globl	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE37select_on_container_copy_constructionERKS3_
	.def	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE37select_on_container_copy_constructionERKS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE37select_on_container_copy_constructionERKS3_
_ZNSt16allocator_traitsISaISt6vectorIiSaIiEEEE37select_on_container_copy_constructionERKS3_:
.LFB3282:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSaISt6vectorIiSaIiEEEC1ERKS2_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_
	.def	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_
_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEC1ERKS5_:
.LFB3285:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_ET0_T_SC_SB_,"x"
	.linkonce discard
	.globl	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_ET0_T_SC_SB_
	.def	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_ET0_T_SC_SB_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_ET0_T_SC_SB_
_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES2_IS4_SaIS4_EEEEPS4_ET0_T_SC_SB_:
.LFB3286:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt13move_iteratorIPiE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt13move_iteratorIPiE4baseEv
	.def	_ZNKSt13move_iteratorIPiE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt13move_iteratorIPiE4baseEv
_ZNKSt13move_iteratorIPiE4baseEv:
.LFB3287:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt12__miter_baseIPiET_S1_,"x"
	.linkonce discard
	.globl	_ZSt12__miter_baseIPiET_S1_
	.def	_ZSt12__miter_baseIPiET_S1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt12__miter_baseIPiET_S1_
_ZSt12__miter_baseIPiET_S1_:
.LFB3288:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_,"x"
	.linkonce discard
	.globl	_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_
	.def	_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_
_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_:
.LFB3289:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_,"x"
	.linkonce discard
	.globl	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_
	.def	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_
_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_:
.LFB3290:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_,"x"
	.linkonce discard
	.globl	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_
	.def	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_
_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_:
.LFB3291:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%r8, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -88(%rbp)
.L426:
	leaq	-40(%rbp), %rax
	movq	%rax, %rdx
	leaq	-48(%rbp), %rcx
	call	_ZN9__gnu_cxxneIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_
	testb	%al, %al
	je	.L425
	leaq	-48(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv
	movq	%rax, %rbx
	movq	-88(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt11__addressofISt6vectorIiSaIiEEEPT_RS3_
	movq	%rbx, %rdx
	movq	%rax, %rcx
.LEHB44:
	call	_ZSt10_ConstructISt6vectorIiSaIiEEJRKS2_EEvPT_DpOT0_
.LEHE44:
	leaq	-48(%rbp), %rcx
	call	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv
	addq	$24, -88(%rbp)
	jmp	.L426
.L425:
	movq	-88(%rbp), %rax
	jmp	.L432
.L430:
	movq	%rax, %rcx
	call	__cxa_begin_catch
	movq	-88(%rbp), %rdx
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
.LEHB45:
	call	_ZSt8_DestroyIPSt6vectorIiSaIiEEEvT_S4_
	call	__cxa_rethrow
.LEHE45:
.L431:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB46:
	call	_Unwind_Resume
.LEHE46:
.L432:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
	.align 4
.LLSDA3291:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT3291-.LLSDATTD3291
.LLSDATTD3291:
	.byte	0x1
	.uleb128 .LLSDACSE3291-.LLSDACSB3291
.LLSDACSB3291:
	.uleb128 .LEHB44-.LFB3291
	.uleb128 .LEHE44-.LEHB44
	.uleb128 .L430-.LFB3291
	.uleb128 0x1
	.uleb128 .LEHB45-.LFB3291
	.uleb128 .LEHE45-.LEHB45
	.uleb128 .L431-.LFB3291
	.uleb128 0
	.uleb128 .LEHB46-.LFB3291
	.uleb128 .LEHE46-.LEHB46
	.uleb128 0
	.uleb128 0
.LLSDACSE3291:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3291:
	.section	.text$_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES4_IS6_SaIS6_EEEEPS6_EET0_T_SE_SD_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_,"x"
	.linkonce discard
	.globl	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
	.def	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_:
.LFB3292:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L434
	movq	-8(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	32(%rbp), %rax
	movq	%rdx, %r8
	movq	16(%rbp), %rdx
	movq	%rax, %rcx
	call	memmove
.L434:
	movq	-8(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	32(%rbp), %rax
	addq	%rdx, %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_,"x"
	.linkonce discard
	.globl	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	.def	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_:
.LFB3293:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
	movq	%rax, %rcx
	movq	-48(%rbp), %rax
	movq	%rax, %r8
	movq	%rbx, %rdx
	call	_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxxneIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxxneIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_
	.def	_ZN9__gnu_cxxneIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxxneIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_
_ZN9__gnu_cxxneIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_:
.LFB3294:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
	movq	(%rax), %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv
	.def	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv
_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEppEv:
.LFB3295:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	leaq	24(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv
_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEEdeEv:
.LFB3296:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_,"x"
	.linkonce discard
	.globl	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
	.def	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_:
.LFB3297:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_,"x"
	.linkonce discard
	.globl	_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_
	.def	_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_
_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_:
.LFB3298:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt12__niter_baseIPiET_S1_
	movq	%rax, %rsi
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	movq	%rax, %rbx
	movq	32(%rbp), %rcx
	call	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	movq	%rsi, %r8
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_
	addq	$32, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv
_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorIiSaIiEES1_IS3_SaIS3_EEE4baseEv:
.LFB3299:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE,"x"
	.linkonce discard
	.globl	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	.def	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE:
.LFB3300:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	16(%rbp), %rcx
	call	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
	movq	(%rax), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_,"x"
	.linkonce discard
	.globl	_ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_
	.def	_ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_
_ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_:
.LFB3301:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movb	$1, -1(%rbp)
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
	.def	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv:
.LFB3302:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_,"x"
	.linkonce discard
	.globl	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
	.def	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_:
.LFB3303:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L457
	movq	-8(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	32(%rbp), %rax
	movq	%rdx, %r8
	movq	16(%rbp), %rdx
	movq	%rax, %rcx
	call	memmove
.L457:
	movq	-8(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	32(%rbp), %rax
	addq	%rdx, %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB3305:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB3304:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L462
	cmpl	$65535, 24(%rbp)
	jne	.L462
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L462:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE
_GLOBAL__sub_I__Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE:
.LFB3306:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__Z13get_conditionRSt6vectorIS_IS_IiSaIiEESaIS1_EESaIS3_EEiRSt5tupleIJiiiEE
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 7.3.0"
	.def	time;	.scl	2;	.type	32;	.endef
	.def	srand;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base15sync_with_stdioEb;	.scl	2;	.type	32;	.endef
	.def	_ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo;	.scl	2;	.type	32;	.endef
	.def	rand;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	__cxa_begin_catch;	.scl	2;	.type	32;	.endef
	.def	__cxa_rethrow;	.scl	2;	.type	32;	.endef
	.def	__cxa_end_catch;	.scl	2;	.type	32;	.endef
	.def	_ZSt20__throw_length_errorPKc;	.scl	2;	.type	32;	.endef
	.def	_ZdlPv;	.scl	2;	.type	32;	.endef
	.def	_ZSt17__throw_bad_allocv;	.scl	2;	.type	32;	.endef
	.def	_Znwy;	.scl	2;	.type	32;	.endef
	.def	memmove;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
