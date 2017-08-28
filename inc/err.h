# ifndef __err__h
# define __err__h
# define MDL_SUCCESS 0
# define MDL_FAILURE -1
# if !defined(__mdl_i8_t_defined) && defined(__int8_t_defined)
# define __mdl_i8_t_defined
typedef int8_t mdl_i8_t;
# endif

typedef mdl_i8_t mdl_err_t;

# ifdef __cplusplus
namespace mdl {
typedef mdl_err_t err_t;
}
# endif
# endif /*__err__h*/
