
// automatically generated by m4 from headers in proto subdir


#ifndef __ADT_B_VECTOR_H__
#define __ADT_B_VECTOR_H__

#include <stddef.h>

// DATA STRUCTURES

typedef struct b_vector_s
{

   void       *data;
   size_t      size;
   size_t      capacity;
   size_t      max_size;

} b_vector_t;

extern size_t __LIB__ b_vector_append(b_vector_t *v,int c) __smallc;
extern size_t __LIB__ b_vector_append_callee(b_vector_t *v,int c) __smallc __z88dk_callee;
#define b_vector_append(a,b) b_vector_append_callee(a,b)


extern void __LIB__ *b_vector_append_block(b_vector_t *v,size_t n) __smallc;
extern void __LIB__ *b_vector_append_block_callee(b_vector_t *v,size_t n) __smallc __z88dk_callee;
#define b_vector_append_block(a,b) b_vector_append_block_callee(a,b)


extern size_t __LIB__ b_vector_append_n(b_vector_t *v,size_t n,int c) __smallc;
extern size_t __LIB__ b_vector_append_n_callee(b_vector_t *v,size_t n,int c) __smallc __z88dk_callee;
#define b_vector_append_n(a,b,c) b_vector_append_n_callee(a,b,c)


extern int __LIB__ b_vector_at(b_vector_t *v,size_t idx) __smallc;
extern int __LIB__ b_vector_at_callee(b_vector_t *v,size_t idx) __smallc __z88dk_callee;
#define b_vector_at(a,b) b_vector_at_callee(a,b)


extern int __LIB__ b_vector_back(b_vector_t *v) __smallc __z88dk_fastcall;


extern size_t __LIB__ b_vector_capacity(b_vector_t *v) __smallc __z88dk_fastcall;


extern void __LIB__ b_vector_clear(b_vector_t *v) __smallc __z88dk_fastcall;


extern void __LIB__ *b_vector_data(b_vector_t *v) __smallc __z88dk_fastcall;


extern void __LIB__ b_vector_destroy(b_vector_t *v) __smallc __z88dk_fastcall;


extern int __LIB__ b_vector_empty(b_vector_t *v) __smallc __z88dk_fastcall;


extern size_t __LIB__ b_vector_erase(b_vector_t *v,size_t idx) __smallc;
extern size_t __LIB__ b_vector_erase_callee(b_vector_t *v,size_t idx) __smallc __z88dk_callee;
#define b_vector_erase(a,b) b_vector_erase_callee(a,b)


extern size_t __LIB__ b_vector_erase_block(b_vector_t *v,size_t idx,size_t n) __smallc;
extern size_t __LIB__ b_vector_erase_block_callee(b_vector_t *v,size_t idx,size_t n) __smallc __z88dk_callee;
#define b_vector_erase_block(a,b,c) b_vector_erase_block_callee(a,b,c)


extern size_t __LIB__ b_vector_erase_range(b_vector_t *v,size_t idx_first,size_t idx_last) __smallc;
extern size_t __LIB__ b_vector_erase_range_callee(b_vector_t *v,size_t idx_first,size_t idx_last) __smallc __z88dk_callee;
#define b_vector_erase_range(a,b,c) b_vector_erase_range_callee(a,b,c)


extern int __LIB__ b_vector_front(b_vector_t *v) __smallc __z88dk_fastcall;


extern b_vector_t __LIB__ *b_vector_init(void *p,size_t capacity,size_t max_size) __smallc;
extern b_vector_t __LIB__ *b_vector_init_callee(void *p,size_t capacity,size_t max_size) __smallc __z88dk_callee;
#define b_vector_init(a,b,c) b_vector_init_callee(a,b,c)


extern size_t __LIB__ b_vector_insert(b_vector_t *v,size_t idx,int c) __smallc;
extern size_t __LIB__ b_vector_insert_callee(b_vector_t *v,size_t idx,int c) __smallc __z88dk_callee;
#define b_vector_insert(a,b,c) b_vector_insert_callee(a,b,c)


extern void __LIB__ *b_vector_insert_block(b_vector_t *v,size_t idx,size_t n) __smallc;
extern void __LIB__ *b_vector_insert_block_callee(b_vector_t *v,size_t idx,size_t n) __smallc __z88dk_callee;
#define b_vector_insert_block(a,b,c) b_vector_insert_block_callee(a,b,c)


extern size_t __LIB__ b_vector_insert_n(b_vector_t *v,size_t idx,size_t n,int c) __smallc;
extern size_t __LIB__ b_vector_insert_n_callee(b_vector_t *v,size_t idx,size_t n,int c) __smallc __z88dk_callee;
#define b_vector_insert_n(a,b,c,d) b_vector_insert_n_callee(a,b,c,d)


extern size_t __LIB__ b_vector_max_size(b_vector_t *v) __smallc __z88dk_fastcall;


extern int __LIB__ b_vector_pop_back(b_vector_t *v) __smallc __z88dk_fastcall;


extern size_t __LIB__ b_vector_push_back(b_vector_t *v,int c) __smallc;
extern size_t __LIB__ b_vector_push_back_callee(b_vector_t *v,int c) __smallc __z88dk_callee;
#define b_vector_push_back(a,b) b_vector_push_back_callee(a,b)


extern size_t __LIB__ b_vector_read_block(void *dst,size_t n,b_vector_t *v,size_t idx) __smallc;
extern size_t __LIB__ b_vector_read_block_callee(void *dst,size_t n,b_vector_t *v,size_t idx) __smallc __z88dk_callee;
#define b_vector_read_block(a,b,c,d) b_vector_read_block_callee(a,b,c,d)


extern int __LIB__ b_vector_reserve(b_vector_t *v,size_t n) __smallc;
extern int __LIB__ b_vector_reserve_callee(b_vector_t *v,size_t n) __smallc __z88dk_callee;
#define b_vector_reserve(a,b) b_vector_reserve_callee(a,b)


extern int __LIB__ b_vector_resize(b_vector_t *v,size_t n) __smallc;
extern int __LIB__ b_vector_resize_callee(b_vector_t *v,size_t n) __smallc __z88dk_callee;
#define b_vector_resize(a,b) b_vector_resize_callee(a,b)


extern int __LIB__ b_vector_shrink_to_fit(b_vector_t *) __smallc __z88dk_fastcall;


extern size_t __LIB__ b_vector_size(b_vector_t *v) __smallc __z88dk_fastcall;


extern size_t __LIB__ b_vector_write_block(void *src,size_t n,b_vector_t *v,size_t idx) __smallc;
extern size_t __LIB__ b_vector_write_block_callee(void *src,size_t n,b_vector_t *v,size_t idx) __smallc __z88dk_callee;
#define b_vector_write_block(a,b,c,d) b_vector_write_block_callee(a,b,c,d)



#endif