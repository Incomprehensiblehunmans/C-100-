	.file	"5.c"
	.section .rdata,"dr"
.LC0:
	.ascii "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\346\210\220\347\273\251\357\274\232\0"
.LC1:
	.ascii "%d\0"
.LC2:
	.ascii "\344\275\240\347\232\204\346\210\220\347\273\251\347\255\211\347\272\247\344\270\272\357\274\232%c\12\0"
	.text
	.globl	func
	.def	func;	.scl	2;	.type	32;	.endef
	.seh_proc	func
func:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	leaq	.LC0(%rip), %rcx
	call	puts
	leaq	-8(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	movl	-8(%rbp), %eax
	cmpl	$89, %eax
	jg	.L2
	movl	-8(%rbp), %eax
	cmpl	$59, %eax
	jle	.L3
	movl	$66, %eax
	jmp	.L5
.L3:
	movl	$67, %eax
	jmp	.L5
.L2:
	movl	$65, %eax
.L5:
	movb	%al, -1(%rbp)
	movsbl	-1(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	call	func
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 5.1.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
