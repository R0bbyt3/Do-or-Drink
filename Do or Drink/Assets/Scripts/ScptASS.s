/*
#include <stdio.h>

int nums[4] = {65, -105, 111, 34};

int main (void) {
  int i;
  int s = 0;

  for (i=0;i<4;i++)
    s = s+nums[i];

  printf ("soma = %d\n", s);

  return 0;
}
*/


.data
nums:   .long 65, -105, 111, 34    /* array de inteiros */
Sf:     .string "soma = %d\n"      /* string de formato para printf */

.text
.globl  main
main:

/********************************************************/
/* mantenha este trecho aqui e nao mexa - prologo !!!   */
  pushq   %rbp
  movq    %rsp, %rbp
  subq    $16, %rsp
  movq    %rbx, -8(%rbp)           /* guarda rbx */
  movq    %rcx, -16(%rbp)          /* guarda rcx */
/********************************************************/

  movq    $0, %rcx                 /* rcx = 0 (i = 0) */
  movq    $0, %rbx                 /* rbx = 0 (s = 0) */

L1:
  cmpl    $4, %ecx                  /* if (i >= 4) */
  jge     L2                        /* goto L2 */

  movslq  %ecx, %rdx                /* rdx = i */
  imull   $4, %edx                  /* rdx = i * sizeof(int) */
  leaq    nums(%rip), %rax          /* rax = &nums */
  addq    %rdx, %rax                /* rax = &nums[i] */

  movl    (%rax), %eax               /* eax = nums[i] */
  addl    %eax, %ebx                 /* s += nums[i] */

  incl    %ecx                       /* i++ */
  jmp     L1                          /* goto L1 */

L2:
  movq    $Sf, %rdi                  /* primeiro parametro (ponteiro) */
  movl    %ebx, %esi                 /* segundo parametro (inteiro) */
  movl    $0, %eax
  call    printf                      /* chama a funcao da biblioteca */

/***************************************************************/
/* mantenha este trecho aqui e nao mexa - finalizacao!!!!      */
  movq    $0, %rax                    /* rax = 0 (valor de retorno) */
  movq    -16(%rbp), %rcx             /* recupera rcx */
  movq    -8(%rbp), %rbx              /* recupera rbx */
  leave
  ret      
/***************************************************************/
